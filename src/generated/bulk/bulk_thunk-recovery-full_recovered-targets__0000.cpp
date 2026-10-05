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
namespace std { template<class... A> int _Xlength_error(A...); }
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int hash(A...); template<class... A> int int_addref(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAbilityDelegate { char _pad; SCIAbilityDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAbilityListener { char _pad; SCIAbilityListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionDelegate { char _pad; SCIActionDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDebug { char _pad; SCIDebug(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIEnumerable { char _pad; SCIEnumerable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIIntArray { char _pad; SCIIntArray(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCILibrary { char _pad; SCILibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCILibraryTests { char _pad; SCILibraryTests(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINetworkManagement { char _pad; SCINetworkManagement(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpFactory { char _pad; SCIOpFactory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISystem { char _pad; SCISystem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIZoneGroupMgr { char _pad; SCIZoneGroupMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *WARNING;
typedef void *_Str;
typedef void *_SubStr;
typedef void *_Val;
using namespace std;
extern "C" void LAB_1000b73a(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10017f94(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002c75a(void);
extern "C" void LAB_100321af(void);
extern "C" void LAB_10034022(void);
extern "C" void LAB_10037a97(void);
extern "C" void LAB_100381ea(void);
extern "C" void LAB_1004204b(void);
extern "C" void LAB_100430f9(void);
extern "C" void LAB_100443d2(void);
extern "C" void LAB_10046a33(void);
extern "C" void LAB_10048f8b(void);
extern "C" void LAB_10049a94(void);
extern "C" void LAB_10051bcc(void);
extern "C" void LAB_1005c1e9(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005e133(void);
extern "C" void LAB_10066437(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_1006996b(void);
extern "C" void LAB_10070e1e(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10072f8e(void);
extern "C" void LAB_1007d2d1(void);
extern "C" void LAB_1008204c(void);
extern "C" void LAB_10117335(void);
extern "C" void LAB_10117477(void);
extern "C" void LAB_101243f5(void);
extern "C" void LAB_101244d5(void);
extern "C" void LAB_1012cd55(void);
extern "C" void LAB_101a5331(void);
extern "C" void LAB_101a5412(void);
extern "C" void LAB_101a7823(void);
extern "C" void LAB_101a78cf(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148cddb(void);
extern "C" void LAB_1148cded(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148cdf9(void);
extern "C" void LAB_1148cdff(void);
extern "C" void LAB_1186d234(void);
extern "C" void LAB_1186d25c(void);
extern "C" void LAB_1186d2ac(void);
extern "C" void LAB_1186d2b8(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1186d4ac(void);
extern "C" void LAB_1186f8a4(void);
extern "C" void LAB_1186f8c8(void);
extern "C" void LAB_1186f924(void);
extern "C" void LAB_1186f94c(void);
extern "C" void LAB_1186f970(void);
extern "C" void LAB_1186f994(void);
extern "C" void LAB_1186f9b8(void);
extern "C" void LAB_1186fa5c(void);
extern "C" void LAB_1186fab8(void);
extern "C" void LAB_1186fafc(void);
extern "C" void LAB_1186fbec(void);
extern "C" void LAB_1186fc34(void);
extern "C" void LAB_1186fc64(void);
extern "C" void LAB_1186fca0(void);
extern "C" void LAB_1186fcd4(void);
extern "C" void LAB_1186fcfc(void);
extern "C" void LAB_1186fd2c(void);
extern "C" void LAB_1186fd8c(void);
extern "C" void LAB_1186fdb4(void);
extern "C" void LAB_1186fe24(void);
extern "C" void LAB_1186fe48(void);
extern "C" void LAB_1186fe70(void);
extern "C" void LAB_1186fe94(void);
extern "C" void LAB_1186fec8(void);
extern "C" void LAB_1186ff0c(void);
extern "C" void LAB_1186ff30(void);
extern "C" void LAB_1186ff70(void);
extern "C" void LAB_1186ffdc(void);
extern "C" void LAB_1187000c(void);
extern "C" void LAB_1187003c(void);
extern "C" void LAB_1187006c(void);
extern "C" void LAB_118700a8(void);
extern "C" void LAB_118700dc(void);
extern "C" void LAB_1187010c(void);
extern "C" void LAB_11870134(void);
extern "C" void LAB_11870158(void);
extern "C" void LAB_11870194(void);
extern "C" void LAB_118701c4(void);
extern "C" void LAB_11870218(void);
extern "C" void LAB_1187023c(void);
extern "C" void LAB_11870264(void);
extern "C" void LAB_118702c0(void);
extern "C" void LAB_1187030c(void);
extern "C" void LAB_11870348(void);
extern "C" void LAB_11870384(void);
extern "C" void LAB_118703b8(void);
extern "C" void LAB_118703dc(void);
extern "C" void LAB_1187040c(void);
extern "C" void LAB_11870458(void);
extern "C" void LAB_11870484(void);
extern "C" void LAB_118704e4(void);
extern "C" void LAB_11870520(void);
extern "C" void LAB_11870554(void);
extern "C" void LAB_11870564(void);
extern "C" void LAB_11870574(void);
extern "C" void LAB_11870584(void);
extern "C" void LAB_11870594(void);
extern "C" void LAB_118705a4(void);
extern "C" void LAB_118705b8(void);
extern "C" void LAB_118705c8(void);
extern "C" void LAB_11870638(void);
extern "C" void LAB_1187064c(void);
extern "C" void LAB_11870660(void);
extern "C" void LAB_1187067c(void);
extern "C" void LAB_118706a8(void);
extern "C" void LAB_118706c0(void);
extern "C" void LAB_118706e4(void);
extern "C" void LAB_11870740(void);
extern "C" void LAB_11870768(void);
extern "C" void LAB_1187078c(void);
extern "C" void LAB_118707b0(void);
extern "C" void LAB_118707d4(void);
extern "C" void LAB_11870878(void);
extern "C" void LAB_118708d4(void);
extern "C" void LAB_11870918(void);
extern "C" void LAB_11870a08(void);
extern "C" void LAB_11870a50(void);
extern "C" void LAB_11870a80(void);
extern "C" void LAB_11870abc(void);
extern "C" void LAB_11870af0(void);
extern "C" void LAB_11870b18(void);
extern "C" void LAB_11870b48(void);
extern "C" void LAB_11870ba8(void);
extern "C" void LAB_11870bd0(void);
extern "C" void LAB_11870c40(void);
extern "C" void LAB_11870c64(void);
extern "C" void LAB_11870c8c(void);
extern "C" void LAB_11870cb0(void);
extern "C" void LAB_11870ce4(void);
extern "C" void LAB_11870d28(void);
extern "C" void LAB_11870d4c(void);
extern "C" void LAB_11870d8c(void);
extern "C" void LAB_11870df8(void);
extern "C" void LAB_11870e28(void);
extern "C" void LAB_11870e58(void);
extern "C" void LAB_11870e88(void);
extern "C" void LAB_11870ec4(void);
extern "C" void LAB_11870ef8(void);
extern "C" void LAB_11870f28(void);
extern "C" void LAB_11870f50(void);
extern "C" void LAB_11870f74(void);
extern "C" void LAB_11870fb0(void);
extern "C" void LAB_11870fe0(void);
extern "C" void LAB_11871034(void);
extern "C" void LAB_11871058(void);
extern "C" void LAB_11871080(void);
extern "C" void LAB_118710dc(void);
extern "C" void LAB_11871128(void);
extern "C" void LAB_11871164(void);
extern "C" void LAB_118711a0(void);
extern "C" void LAB_118711d4(void);
extern "C" void LAB_118711f8(void);
extern "C" void LAB_11871228(void);
extern "C" void LAB_11871274(void);
extern "C" void LAB_118712a0(void);
extern "C" void LAB_11871300(void);
extern "C" void LAB_1187133c(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881084(void);
extern "C" void LAB_118810c4(void);
extern "C" void LAB_11881110(void);
extern "C" void LAB_11881130(void);
extern "C" void LAB_11881144(void);
extern "C" void LAB_118811a4(void);
extern "C" void LAB_118811c8(void);
extern "C" void LAB_118811ec(void);
extern "C" void LAB_11881210(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_118814c0(void);
extern "C" void LAB_1188155c(void);
extern "C" void LAB_11881578(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc958(void);

extern "C" void LAB_1000b73a(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10017f94(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002c75a(void);
extern "C" void LAB_100321af(void);
extern "C" void LAB_10034022(void);
extern "C" void LAB_10037a97(void);
extern "C" void LAB_100381ea(void);
extern "C" void LAB_1004204b(void);
extern "C" void LAB_100430f9(void);
extern "C" void LAB_100443d2(void);
extern "C" void LAB_10046a33(void);
extern "C" void LAB_10048f8b(void);
extern "C" void LAB_10049a94(void);
extern "C" void LAB_10051bcc(void);
extern "C" void LAB_1005c1e9(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005e133(void);
extern "C" void LAB_10066437(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_1006996b(void);
extern "C" void LAB_10070e1e(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10072f8e(void);
extern "C" void LAB_1007d2d1(void);
extern "C" void LAB_1008204c(void);
extern "C" void LAB_10117335(void);
extern "C" void LAB_10117477(void);
extern "C" void LAB_101243f5(void);
extern "C" void LAB_101244d5(void);
extern "C" void LAB_1012cd55(void);
extern "C" void LAB_101a5331(void);
extern "C" void LAB_101a5412(void);
extern "C" void LAB_101a7823(void);
extern "C" void LAB_101a78cf(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148cddb(void);
extern "C" void LAB_1148cded(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148cdf9(void);
extern "C" void LAB_1148cdff(void);
extern "C" void LAB_1186d234(void);
extern "C" void LAB_1186d25c(void);
extern "C" void LAB_1186d2ac(void);
extern "C" void LAB_1186d2b8(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1186d4ac(void);
extern "C" void LAB_1186f8a4(void);
extern "C" void LAB_1186f8c8(void);
extern "C" void LAB_1186f924(void);
extern "C" void LAB_1186f94c(void);
extern "C" void LAB_1186f970(void);
extern "C" void LAB_1186f994(void);
extern "C" void LAB_1186f9b8(void);
extern "C" void LAB_1186fa5c(void);
extern "C" void LAB_1186fab8(void);
extern "C" void LAB_1186fafc(void);
extern "C" void LAB_1186fbec(void);
extern "C" void LAB_1186fc34(void);
extern "C" void LAB_1186fc64(void);
extern "C" void LAB_1186fca0(void);
extern "C" void LAB_1186fcd4(void);
extern "C" void LAB_1186fcfc(void);
extern "C" void LAB_1186fd2c(void);
extern "C" void LAB_1186fd8c(void);
extern "C" void LAB_1186fdb4(void);
extern "C" void LAB_1186fe24(void);
extern "C" void LAB_1186fe48(void);
extern "C" void LAB_1186fe70(void);
extern "C" void LAB_1186fe94(void);
extern "C" void LAB_1186fec8(void);
extern "C" void LAB_1186ff0c(void);
extern "C" void LAB_1186ff30(void);
extern "C" void LAB_1186ff70(void);
extern "C" void LAB_1186ffdc(void);
extern "C" void LAB_1187000c(void);
extern "C" void LAB_1187003c(void);
extern "C" void LAB_1187006c(void);
extern "C" void LAB_118700a8(void);
extern "C" void LAB_118700dc(void);
extern "C" void LAB_1187010c(void);
extern "C" void LAB_11870134(void);
extern "C" void LAB_11870158(void);
extern "C" void LAB_11870194(void);
extern "C" void LAB_118701c4(void);
extern "C" void LAB_11870218(void);
extern "C" void LAB_1187023c(void);
extern "C" void LAB_11870264(void);
extern "C" void LAB_118702c0(void);
extern "C" void LAB_1187030c(void);
extern "C" void LAB_11870348(void);
extern "C" void LAB_11870384(void);
extern "C" void LAB_118703b8(void);
extern "C" void LAB_118703dc(void);
extern "C" void LAB_1187040c(void);
extern "C" void LAB_11870458(void);
extern "C" void LAB_11870484(void);
extern "C" void LAB_118704e4(void);
extern "C" void LAB_11870520(void);
extern "C" void LAB_11870554(void);
extern "C" void LAB_11870564(void);
extern "C" void LAB_11870574(void);
extern "C" void LAB_11870584(void);
extern "C" void LAB_11870594(void);
extern "C" void LAB_118705a4(void);
extern "C" void LAB_118705b8(void);
extern "C" void LAB_118705c8(void);
extern "C" void LAB_11870638(void);
extern "C" void LAB_1187064c(void);
extern "C" void LAB_11870660(void);
extern "C" void LAB_1187067c(void);
extern "C" void LAB_118706a8(void);
extern "C" void LAB_118706c0(void);
extern "C" void LAB_118706e4(void);
extern "C" void LAB_11870740(void);
extern "C" void LAB_11870768(void);
extern "C" void LAB_1187078c(void);
extern "C" void LAB_118707b0(void);
extern "C" void LAB_118707d4(void);
extern "C" void LAB_11870878(void);
extern "C" void LAB_118708d4(void);
extern "C" void LAB_11870918(void);
extern "C" void LAB_11870a08(void);
extern "C" void LAB_11870a50(void);
extern "C" void LAB_11870a80(void);
extern "C" void LAB_11870abc(void);
extern "C" void LAB_11870af0(void);
extern "C" void LAB_11870b18(void);
extern "C" void LAB_11870b48(void);
extern "C" void LAB_11870ba8(void);
extern "C" void LAB_11870bd0(void);
extern "C" void LAB_11870c40(void);
extern "C" void LAB_11870c64(void);
extern "C" void LAB_11870c8c(void);
extern "C" void LAB_11870cb0(void);
extern "C" void LAB_11870ce4(void);
extern "C" void LAB_11870d28(void);
extern "C" void LAB_11870d4c(void);
extern "C" void LAB_11870d8c(void);
extern "C" void LAB_11870df8(void);
extern "C" void LAB_11870e28(void);
extern "C" void LAB_11870e58(void);
extern "C" void LAB_11870e88(void);
extern "C" void LAB_11870ec4(void);
extern "C" void LAB_11870ef8(void);
extern "C" void LAB_11870f28(void);
extern "C" void LAB_11870f50(void);
extern "C" void LAB_11870f74(void);
extern "C" void LAB_11870fb0(void);
extern "C" void LAB_11870fe0(void);
extern "C" void LAB_11871034(void);
extern "C" void LAB_11871058(void);
extern "C" void LAB_11871080(void);
extern "C" void LAB_118710dc(void);
extern "C" void LAB_11871128(void);
extern "C" void LAB_11871164(void);
extern "C" void LAB_118711a0(void);
extern "C" void LAB_118711d4(void);
extern "C" void LAB_118711f8(void);
extern "C" void LAB_11871228(void);
extern "C" void LAB_11871274(void);
extern "C" void LAB_118712a0(void);
extern "C" void LAB_11871300(void);
extern "C" void LAB_1187133c(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881084(void);
extern "C" void LAB_118810c4(void);
extern "C" void LAB_11881110(void);
extern "C" void LAB_11881130(void);
extern "C" void LAB_11881144(void);
extern "C" void LAB_118811a4(void);
extern "C" void LAB_118811c8(void);
extern "C" void LAB_118811ec(void);
extern "C" void LAB_11881210(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_118814c0(void);
extern "C" void LAB_1188155c(void);
extern "C" void LAB_11881578(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc958(void);


struct Recovered_Bulk { char _pad; undefined4 * __thiscall m_FUN_10116690(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10116690(A...); undefined4 * __thiscall m_FUN_101166c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_101166c0(A...); undefined4 * __thiscall m_FUN_101166d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_101166d0(A...); int * __thiscall m_FUN_101169b0(int *param_2); template<class... A> int m_FUN_101169b0(A...); int * __thiscall m_FUN_101169d0(int *param_2); template<class... A> int m_FUN_101169d0(A...); int * __thiscall m_FUN_10116ad0(int *param_2); template<class... A> int m_FUN_10116ad0(A...); void __thiscall m_FUN_10116fe0(undefined4 *param_2); template<class... A> int m_FUN_10116fe0(A...); int * __thiscall m_FUN_10117280(uint param_2,undefined4 param_3,void *param_4); template<class... A> int m_FUN_10117280(A...); undefined4 * __thiscall m_FUN_10117370(uint param_2,undefined4 param_3,void *param_4,size_t param_5); template<class... A> int m_FUN_10117370(A...); undefined4 * __thiscall m_FUN_10117ec0(undefined4 *param_2); template<class... A> int m_FUN_10117ec0(A...); undefined4 * __thiscall m_FUN_10117f00(undefined4 *param_2); template<class... A> int m_FUN_10117f00(A...); undefined4 * __thiscall m_FUN_10118060(undefined4 *param_2); template<class... A> int m_FUN_10118060(A...); undefined4 * __thiscall m_FUN_101180c0(undefined4 *param_2); template<class... A> int m_FUN_101180c0(A...); undefined4 * __thiscall m_FUN_10118150(undefined4 *param_2); template<class... A> int m_FUN_10118150(A...); undefined4 * __thiscall m_FUN_10118200(undefined4 *param_2); template<class... A> int m_FUN_10118200(A...); undefined4 * __thiscall m_FUN_10118300(undefined4 *param_2); template<class... A> int m_FUN_10118300(A...); undefined4 * __thiscall m_FUN_10118330(undefined4 *param_2); template<class... A> int m_FUN_10118330(A...); undefined4 * __thiscall m_FUN_10118360(undefined4 *param_2); template<class... A> int m_FUN_10118360(A...); undefined4 * __thiscall m_FUN_101183c0(undefined4 *param_2); template<class... A> int m_FUN_101183c0(A...); undefined4 * __thiscall m_FUN_10118450(undefined4 *param_2); template<class... A> int m_FUN_10118450(A...); undefined4 * __thiscall m_FUN_10118690(undefined4 *param_2); template<class... A> int m_FUN_10118690(A...); undefined4 * __thiscall m_FUN_10118820(undefined4 *param_2); template<class... A> int m_FUN_10118820(A...); undefined4 * __thiscall m_FUN_10118850(undefined4 *param_2); template<class... A> int m_FUN_10118850(A...); undefined4 * __thiscall m_FUN_101188c0(undefined4 *param_2); template<class... A> int m_FUN_101188c0(A...); undefined4 * __thiscall m_FUN_10118910(undefined4 *param_2); template<class... A> int m_FUN_10118910(A...); undefined4 * __thiscall m_FUN_10118940(undefined4 *param_2); template<class... A> int m_FUN_10118940(A...); undefined4 * __thiscall m_FUN_10118a00(undefined4 param_2); template<class... A> int m_FUN_10118a00(A...); undefined4 * __thiscall m_FUN_10118af0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10118af0(A...); undefined4 * __thiscall m_FUN_10118b00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10118b00(A...); undefined4 * __thiscall m_FUN_10118b10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10118b10(A...); undefined4 * __thiscall m_FUN_10118b20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10118b20(A...); undefined4 * __thiscall m_FUN_10118b80(undefined4 param_2); template<class... A> int m_FUN_10118b80(A...); undefined4 * __thiscall m_FUN_10118ba0(undefined4 *param_2); template<class... A> int m_FUN_10118ba0(A...); undefined4 * __thiscall m_FUN_10118bf0(undefined4 *param_2); template<class... A> int m_FUN_10118bf0(A...); undefined4 * __thiscall m_FUN_10118f20(int param_2); template<class... A> int m_FUN_10118f20(A...); undefined4 * __thiscall m_FUN_10118f50(undefined4 param_2); template<class... A> int m_FUN_10118f50(A...); undefined4 * __thiscall m_FUN_10118f80(int param_2); template<class... A> int m_FUN_10118f80(A...); undefined4 * __thiscall m_FUN_1011bce0(undefined4 param_2); template<class... A> int m_FUN_1011bce0(A...); undefined4 * __thiscall m_FUN_1011bd00(undefined4 param_2); template<class... A> int m_FUN_1011bd00(A...); undefined4 * __thiscall m_FUN_1011bd20(undefined4 param_2); template<class... A> int m_FUN_1011bd20(A...); undefined4 * __thiscall m_FUN_1011be20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1011be20(A...); int * __thiscall m_FUN_101225c0(int *param_2); template<class... A> int m_FUN_101225c0(A...); int * __thiscall m_FUN_10122620(int *param_2); template<class... A> int m_FUN_10122620(A...); int * __thiscall m_FUN_10122680(int *param_2); template<class... A> int m_FUN_10122680(A...); int * __thiscall m_FUN_101226b0(int *param_2); template<class... A> int m_FUN_101226b0(A...); int * __thiscall m_FUN_10122700(int *param_2); template<class... A> int m_FUN_10122700(A...); int * __thiscall m_FUN_10122730(int *param_2); template<class... A> int m_FUN_10122730(A...); int * __thiscall m_FUN_10122760(int *param_2); template<class... A> int m_FUN_10122760(A...); int * __thiscall m_FUN_10122790(int *param_2); template<class... A> int m_FUN_10122790(A...); int * __thiscall m_FUN_101227c0(int *param_2); template<class... A> int m_FUN_101227c0(A...); int * __thiscall m_FUN_101227f0(int *param_2); template<class... A> int m_FUN_101227f0(A...); int * __thiscall m_FUN_10122820(int *param_2); template<class... A> int m_FUN_10122820(A...); int * __thiscall m_FUN_10122850(int *param_2); template<class... A> int m_FUN_10122850(A...); int * __thiscall m_FUN_10122880(int *param_2); template<class... A> int m_FUN_10122880(A...); int * __thiscall m_FUN_101228b0(int *param_2); template<class... A> int m_FUN_101228b0(A...); int * __thiscall m_FUN_101228e0(int *param_2); template<class... A> int m_FUN_101228e0(A...); int * __thiscall m_FUN_10122910(int *param_2); template<class... A> int m_FUN_10122910(A...); int * __thiscall m_FUN_10122940(int *param_2); template<class... A> int m_FUN_10122940(A...); int * __thiscall m_FUN_10122970(int *param_2); template<class... A> int m_FUN_10122970(A...); int * __thiscall m_FUN_101229a0(int *param_2); template<class... A> int m_FUN_101229a0(A...); int * __thiscall m_FUN_101229d0(int *param_2); template<class... A> int m_FUN_101229d0(A...); int * __thiscall m_FUN_10122a00(int *param_2); template<class... A> int m_FUN_10122a00(A...); int * __thiscall m_FUN_10122a30(int *param_2); template<class... A> int m_FUN_10122a30(A...); int * __thiscall m_FUN_10122a60(int *param_2); template<class... A> int m_FUN_10122a60(A...); int * __thiscall m_FUN_10122a90(int *param_2); template<class... A> int m_FUN_10122a90(A...); int * __thiscall m_FUN_10122ae0(int *param_2); template<class... A> int m_FUN_10122ae0(A...); int * __thiscall m_FUN_10122b10(int *param_2); template<class... A> int m_FUN_10122b10(A...); int * __thiscall m_FUN_10122b40(int *param_2); template<class... A> int m_FUN_10122b40(A...); int * __thiscall m_FUN_10122b70(int *param_2); template<class... A> int m_FUN_10122b70(A...); int * __thiscall m_FUN_10122bc0(int *param_2); template<class... A> int m_FUN_10122bc0(A...); int * __thiscall m_FUN_10122bf0(int *param_2); template<class... A> int m_FUN_10122bf0(A...); int * __thiscall m_FUN_10122c20(int *param_2); template<class... A> int m_FUN_10122c20(A...); int * __thiscall m_FUN_10122c50(int *param_2); template<class... A> int m_FUN_10122c50(A...); int * __thiscall m_FUN_10122c80(int *param_2); template<class... A> int m_FUN_10122c80(A...); int * __thiscall m_FUN_10122cb0(int *param_2); template<class... A> int m_FUN_10122cb0(A...); int * __thiscall m_FUN_10122ce0(int *param_2); template<class... A> int m_FUN_10122ce0(A...); int * __thiscall m_FUN_10122d30(int *param_2); template<class... A> int m_FUN_10122d30(A...); int * __thiscall m_FUN_10122d60(int *param_2); template<class... A> int m_FUN_10122d60(A...); int * __thiscall m_FUN_10122d90(int *param_2); template<class... A> int m_FUN_10122d90(A...); int * __thiscall m_FUN_10122dc0(int *param_2); template<class... A> int m_FUN_10122dc0(A...); int * __thiscall m_FUN_10122df0(int *param_2); template<class... A> int m_FUN_10122df0(A...); int * __thiscall m_FUN_10122e20(int *param_2); template<class... A> int m_FUN_10122e20(A...); int * __thiscall m_FUN_10122e50(int *param_2); template<class... A> int m_FUN_10122e50(A...); int * __thiscall m_FUN_10122e80(int *param_2); template<class... A> int m_FUN_10122e80(A...); int * __thiscall m_FUN_10122eb0(int *param_2); template<class... A> int m_FUN_10122eb0(A...); int * __thiscall m_FUN_10122f00(int *param_2); template<class... A> int m_FUN_10122f00(A...); int * __thiscall m_FUN_10122f30(int *param_2); template<class... A> int m_FUN_10122f30(A...); int * __thiscall m_FUN_10122f60(int *param_2); template<class... A> int m_FUN_10122f60(A...); int * __thiscall m_FUN_10122f90(int *param_2); template<class... A> int m_FUN_10122f90(A...); int * __thiscall m_FUN_10122fc0(int *param_2); template<class... A> int m_FUN_10122fc0(A...); int * __thiscall m_FUN_10122ff0(int *param_2); template<class... A> int m_FUN_10122ff0(A...); int * __thiscall m_FUN_10123020(int *param_2); template<class... A> int m_FUN_10123020(A...); int * __thiscall m_FUN_10123050(int *param_2); template<class... A> int m_FUN_10123050(A...); int * __thiscall m_FUN_10123080(int *param_2); template<class... A> int m_FUN_10123080(A...); int * __thiscall m_FUN_101230b0(int *param_2); template<class... A> int m_FUN_101230b0(A...); int * __thiscall m_FUN_101230e0(int *param_2); template<class... A> int m_FUN_101230e0(A...); int * __thiscall m_FUN_10123110(int *param_2); template<class... A> int m_FUN_10123110(A...); int * __thiscall m_FUN_10123140(int *param_2); template<class... A> int m_FUN_10123140(A...); int * __thiscall m_FUN_10123170(int *param_2); template<class... A> int m_FUN_10123170(A...); int * __thiscall m_FUN_101231c0(int *param_2); template<class... A> int m_FUN_101231c0(A...); int * __thiscall m_FUN_10123210(int *param_2); template<class... A> int m_FUN_10123210(A...); int * __thiscall m_FUN_10123260(int *param_2); template<class... A> int m_FUN_10123260(A...); int * __thiscall m_FUN_10123290(int *param_2); template<class... A> int m_FUN_10123290(A...); int * __thiscall m_FUN_101232c0(int *param_2); template<class... A> int m_FUN_101232c0(A...); int * __thiscall m_FUN_101232f0(int *param_2); template<class... A> int m_FUN_101232f0(A...); int * __thiscall m_FUN_10123340(int *param_2); template<class... A> int m_FUN_10123340(A...); int * __thiscall m_FUN_10123370(int *param_2); template<class... A> int m_FUN_10123370(A...); int * __thiscall m_FUN_101233a0(int *param_2); template<class... A> int m_FUN_101233a0(A...); int * __thiscall m_FUN_101233d0(int *param_2); template<class... A> int m_FUN_101233d0(A...); int * __thiscall m_FUN_10123400(int *param_2); template<class... A> int m_FUN_10123400(A...); int * __thiscall m_FUN_10123430(int *param_2); template<class... A> int m_FUN_10123430(A...); int * __thiscall m_FUN_10123460(int *param_2); template<class... A> int m_FUN_10123460(A...); int * __thiscall m_FUN_101234b0(int *param_2); template<class... A> int m_FUN_101234b0(A...); int * __thiscall m_FUN_101234e0(int *param_2); template<class... A> int m_FUN_101234e0(A...); int * __thiscall m_FUN_10123510(int *param_2); template<class... A> int m_FUN_10123510(A...); int * __thiscall m_FUN_10123540(int *param_2); template<class... A> int m_FUN_10123540(A...); int * __thiscall m_FUN_10123570(int *param_2); template<class... A> int m_FUN_10123570(A...); int * __thiscall m_FUN_101235a0(int *param_2); template<class... A> int m_FUN_101235a0(A...); int * __thiscall m_FUN_101235d0(int *param_2); template<class... A> int m_FUN_101235d0(A...); int * __thiscall m_FUN_10123600(int *param_2); template<class... A> int m_FUN_10123600(A...); int * __thiscall m_FUN_10123630(int *param_2); template<class... A> int m_FUN_10123630(A...); int * __thiscall m_FUN_10123660(int *param_2); template<class... A> int m_FUN_10123660(A...); int * __thiscall m_FUN_10123690(int *param_2); template<class... A> int m_FUN_10123690(A...); int * __thiscall m_FUN_101236c0(int *param_2); template<class... A> int m_FUN_101236c0(A...); int * __thiscall m_FUN_101236f0(int *param_2); template<class... A> int m_FUN_101236f0(A...); int * __thiscall m_FUN_10123720(int *param_2); template<class... A> int m_FUN_10123720(A...); int * __thiscall m_FUN_10123750(int *param_2); template<class... A> int m_FUN_10123750(A...); int * __thiscall m_FUN_10123780(int *param_2); template<class... A> int m_FUN_10123780(A...); int * __thiscall m_FUN_101237b0(int *param_2); template<class... A> int m_FUN_101237b0(A...); int * __thiscall m_FUN_101237e0(int *param_2); template<class... A> int m_FUN_101237e0(A...); int * __thiscall m_FUN_10123810(int *param_2); template<class... A> int m_FUN_10123810(A...); int * __thiscall m_FUN_10123840(int *param_2); template<class... A> int m_FUN_10123840(A...); int * __thiscall m_FUN_10123870(int *param_2); template<class... A> int m_FUN_10123870(A...); int * __thiscall m_FUN_101238a0(int *param_2); template<class... A> int m_FUN_101238a0(A...); int * __thiscall m_FUN_101238d0(int *param_2); template<class... A> int m_FUN_101238d0(A...); int * __thiscall m_FUN_10123900(int *param_2); template<class... A> int m_FUN_10123900(A...); int * __thiscall m_FUN_10123930(int *param_2); template<class... A> int m_FUN_10123930(A...); int * __thiscall m_FUN_10123960(int *param_2); template<class... A> int m_FUN_10123960(A...); int * __thiscall m_FUN_10123990(int *param_2); template<class... A> int m_FUN_10123990(A...); int * __thiscall m_FUN_101239c0(int *param_2); template<class... A> int m_FUN_101239c0(A...); int * __thiscall m_FUN_101239f0(int *param_2); template<class... A> int m_FUN_101239f0(A...); int * __thiscall m_FUN_10123a20(int *param_2); template<class... A> int m_FUN_10123a20(A...); int * __thiscall m_FUN_10123a50(int *param_2); template<class... A> int m_FUN_10123a50(A...); int * __thiscall m_FUN_10123a80(int *param_2); template<class... A> int m_FUN_10123a80(A...); int * __thiscall m_FUN_10123ad0(int *param_2); template<class... A> int m_FUN_10123ad0(A...); int * __thiscall m_FUN_10123b00(int *param_2); template<class... A> int m_FUN_10123b00(A...); int * __thiscall m_FUN_10123b30(int *param_2); template<class... A> int m_FUN_10123b30(A...); int * __thiscall m_FUN_10123b60(int *param_2); template<class... A> int m_FUN_10123b60(A...); int * __thiscall m_FUN_10123b90(int *param_2); template<class... A> int m_FUN_10123b90(A...); int * __thiscall m_FUN_10123bc0(int *param_2); template<class... A> int m_FUN_10123bc0(A...); int * __thiscall m_FUN_10123bf0(int *param_2); template<class... A> int m_FUN_10123bf0(A...); int * __thiscall m_FUN_10123c20(int *param_2); template<class... A> int m_FUN_10123c20(A...); int * __thiscall m_FUN_10123c50(int *param_2); template<class... A> int m_FUN_10123c50(A...); int * __thiscall m_FUN_10123c80(int *param_2); template<class... A> int m_FUN_10123c80(A...); int * __thiscall m_FUN_10123cb0(int *param_2); template<class... A> int m_FUN_10123cb0(A...); int * __thiscall m_FUN_10123ce0(int *param_2); template<class... A> int m_FUN_10123ce0(A...); int * __thiscall m_FUN_10123d10(int *param_2); template<class... A> int m_FUN_10123d10(A...); int * __thiscall m_FUN_10123d40(int *param_2); template<class... A> int m_FUN_10123d40(A...); int * __thiscall m_FUN_10123d70(int *param_2); template<class... A> int m_FUN_10123d70(A...); int * __thiscall m_FUN_10123da0(int *param_2); template<class... A> int m_FUN_10123da0(A...); int * __thiscall m_FUN_10123dd0(int *param_2); template<class... A> int m_FUN_10123dd0(A...); int * __thiscall m_FUN_10123e00(int *param_2); template<class... A> int m_FUN_10123e00(A...); int * __thiscall m_FUN_10123e30(int *param_2); template<class... A> int m_FUN_10123e30(A...); int * __thiscall m_FUN_10123e60(int *param_2); template<class... A> int m_FUN_10123e60(A...); int * __thiscall m_FUN_10123e90(int *param_2); template<class... A> int m_FUN_10123e90(A...); int * __thiscall m_FUN_10123ec0(int *param_2); template<class... A> int m_FUN_10123ec0(A...); int * __thiscall m_FUN_10123ef0(int *param_2); template<class... A> int m_FUN_10123ef0(A...); int * __thiscall m_FUN_10123f40(int *param_2); template<class... A> int m_FUN_10123f40(A...); int * __thiscall m_FUN_10123f90(int *param_2); template<class... A> int m_FUN_10123f90(A...); int * __thiscall m_FUN_10123fc0(int *param_2); template<class... A> int m_FUN_10123fc0(A...); int * __thiscall m_FUN_10123ff0(int *param_2); template<class... A> int m_FUN_10123ff0(A...); int * __thiscall m_FUN_10124020(int *param_2); template<class... A> int m_FUN_10124020(A...); int * __thiscall m_FUN_10124050(int *param_2); template<class... A> int m_FUN_10124050(A...); int * __thiscall m_FUN_101240a0(int *param_2); template<class... A> int m_FUN_101240a0(A...); int * __thiscall m_FUN_101240d0(int *param_2); template<class... A> int m_FUN_101240d0(A...); int * __thiscall m_FUN_10124100(int *param_2); template<class... A> int m_FUN_10124100(A...); int * __thiscall m_FUN_10124150(int *param_2); template<class... A> int m_FUN_10124150(A...); int * __thiscall m_FUN_101241a0(int *param_2); template<class... A> int m_FUN_101241a0(A...); int * __thiscall m_FUN_101241d0(int *param_2); template<class... A> int m_FUN_101241d0(A...); int * __thiscall m_FUN_10124200(int *param_2); template<class... A> int m_FUN_10124200(A...); int * __thiscall m_FUN_10124230(int *param_2); template<class... A> int m_FUN_10124230(A...); int * __thiscall m_FUN_10124260(int *param_2); template<class... A> int m_FUN_10124260(A...); int * __thiscall m_FUN_10124290(int *param_2); template<class... A> int m_FUN_10124290(A...); int * __thiscall m_FUN_101242c0(int *param_2); template<class... A> int m_FUN_101242c0(A...); int * __thiscall m_FUN_101242f0(undefined4 *param_2); template<class... A> int m_FUN_101242f0(A...); undefined4 * __thiscall m_FUN_10124350(undefined4 *param_2); template<class... A> int m_FUN_10124350(A...); undefined4 * __thiscall m_FUN_10124430(undefined4 *param_2); template<class... A> int m_FUN_10124430(A...); bool __thiscall m_FUN_10124dd0(int *param_2); template<class... A> int m_FUN_10124dd0(A...); bool __thiscall m_FUN_10124df0(int *param_2); template<class... A> int m_FUN_10124df0(A...); undefined4 * __thiscall m_FUN_10125e40(byte param_2); template<class... A> int m_FUN_10125e40(A...); undefined4 __thiscall m_FUN_10126700(byte param_2); template<class... A> int m_FUN_10126700(A...); uint __thiscall m_FUN_10129880(uint param_2); template<class... A> int m_FUN_10129880(A...); void __thiscall m_FUN_101299a0(undefined4 *param_2); template<class... A> int m_FUN_101299a0(A...); void __thiscall m_FUN_10129ed0(undefined4 *param_2); template<class... A> int m_FUN_10129ed0(A...); void __thiscall m_FUN_10129f60(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10129f60(A...); void __thiscall m_FUN_1012a170(int param_2); template<class... A> int m_FUN_1012a170(A...); void __thiscall m_FUN_1012a1f0(undefined4 *param_2); template<class... A> int m_FUN_1012a1f0(A...); void __thiscall m_FUN_1012a230(undefined4 *param_2); template<class... A> int m_FUN_1012a230(A...); void __thiscall m_FUN_1012a260(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1012a260(A...); void __thiscall m_FUN_1012a3e0(undefined4 *param_2); template<class... A> int m_FUN_1012a3e0(A...); void __thiscall m_FUN_1012a400(undefined4 *param_2); template<class... A> int m_FUN_1012a400(A...); void __thiscall m_FUN_1012a420(undefined4 *param_2); template<class... A> int m_FUN_1012a420(A...); void __thiscall m_FUN_1012a430(undefined4 *param_2); template<class... A> int m_FUN_1012a430(A...); void __thiscall m_FUN_1012a440(undefined4 *param_2); template<class... A> int m_FUN_1012a440(A...); void __thiscall m_FUN_1012a450(undefined4 *param_2); template<class... A> int m_FUN_1012a450(A...); void __thiscall m_FUN_1012a460(undefined4 *param_2); template<class... A> int m_FUN_1012a460(A...); void __thiscall m_FUN_1012a470(undefined4 *param_2); template<class... A> int m_FUN_1012a470(A...); undefined4 * __thiscall m_FUN_1012cc10(char *param_2); template<class... A> int m_FUN_1012cc10(A...); void __thiscall m_FUN_10146880(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14); template<class... A> int m_FUN_10146880(A...); void __thiscall m_FUN_10146900(undefined4 param_2); template<class... A> int m_FUN_10146900(A...); void __thiscall m_FUN_10146910(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
            undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29); template<class... A> int m_FUN_10146910(A...); void __thiscall m_FUN_10146a10(undefined4 param_2); template<class... A> int m_FUN_10146a10(A...); void __thiscall m_FUN_10146a20(undefined4 param_2); template<class... A> int m_FUN_10146a20(A...); void __thiscall m_FUN_10146a30(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10146a30(A...); void __thiscall m_FUN_10146a50(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10); template<class... A> int m_FUN_10146a50(A...); void __thiscall m_FUN_10146ab0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10146ab0(A...); void __thiscall m_FUN_10146ae0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); template<class... A> int m_FUN_10146ae0(A...); void __thiscall m_FUN_10146b20(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14); template<class... A> int m_FUN_10146b20(A...); void __thiscall m_FUN_10146ba0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9); template<class... A> int m_FUN_10146ba0(A...); void __thiscall m_FUN_10146bf0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
            undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29,
            undefined4 param_30,undefined4 param_31,undefined4 param_32,undefined4 param_33,
            undefined4 param_34,undefined4 param_35,undefined4 param_36,undefined4 param_37,
            undefined4 param_38,undefined4 param_39,undefined4 param_40,undefined4 param_41,
            undefined4 param_42,undefined4 param_43,undefined4 param_44,undefined4 param_45,
            undefined4 param_46); template<class... A> int m_FUN_10146bf0(A...); void __thiscall m_FUN_10146df0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); template<class... A> int m_FUN_10146df0(A...); void __thiscall m_FUN_10146e20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10146e20(A...); void __thiscall m_FUN_10146e40(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10146e40(A...); void __thiscall m_FUN_10146e70(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15); template<class... A> int m_FUN_10146e70(A...); void __thiscall m_FUN_10146ef0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10146ef0(A...); void __thiscall m_FUN_10146f10(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18); template<class... A> int m_FUN_10146f10(A...); void __thiscall m_FUN_10146fb0(undefined4 param_2); template<class... A> int m_FUN_10146fb0(A...); void __thiscall m_FUN_10146fc0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10146fc0(A...); void __thiscall m_FUN_10146fe0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10146fe0(A...); void __thiscall m_FUN_10147000(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9); template<class... A> int m_FUN_10147000(A...); void __thiscall m_FUN_10147050(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); template<class... A> int m_FUN_10147050(A...); void __thiscall m_FUN_10147080(undefined4 param_2); template<class... A> int m_FUN_10147080(A...); void __thiscall m_FUN_10147090(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8); template<class... A> int m_FUN_10147090(A...); void __thiscall m_FUN_101470e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17); template<class... A> int m_FUN_101470e0(A...); void __thiscall m_FUN_10147170(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10147170(A...); void __thiscall m_FUN_101471a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_101471a0(A...); void __thiscall m_FUN_101471d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_101471d0(A...); void __thiscall m_FUN_10147200(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); template<class... A> int m_FUN_10147200(A...); void __thiscall m_FUN_10147240(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); template<class... A> int m_FUN_10147240(A...); void __thiscall m_FUN_10147270(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10147270(A...); void __thiscall m_FUN_101472a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101472a0(A...); void __thiscall m_FUN_101472c0(undefined4 param_2); template<class... A> int m_FUN_101472c0(A...); void __thiscall m_FUN_101472d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); template<class... A> int m_FUN_101472d0(A...); void __thiscall m_FUN_10147310(undefined4 param_2); template<class... A> int m_FUN_10147310(A...); void __thiscall m_FUN_10147320(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10147320(A...); void __thiscall m_FUN_10147350(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14); template<class... A> int m_FUN_10147350(A...); void __thiscall m_FUN_101473d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_101473d0(A...); void __thiscall m_FUN_10147400(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12); template<class... A> int m_FUN_10147400(A...); void __thiscall m_FUN_10147470(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10147470(A...); void __thiscall m_FUN_10147490(undefined4 param_2); template<class... A> int m_FUN_10147490(A...); void __thiscall m_FUN_101474a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11); template<class... A> int m_FUN_101474a0(A...); void __thiscall m_FUN_10147500(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); template<class... A> int m_FUN_10147500(A...); void __thiscall m_FUN_10147540(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10147540(A...); void __thiscall m_FUN_10147560(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); template<class... A> int m_FUN_10147560(A...); void __thiscall m_FUN_101475a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); template<class... A> int m_FUN_101475a0(A...); void __thiscall m_FUN_101475d0(undefined4 param_2); template<class... A> int m_FUN_101475d0(A...); void __thiscall m_FUN_101475e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_101475e0(A...); void __thiscall m_FUN_10147610(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11); template<class... A> int m_FUN_10147610(A...); void __thiscall m_FUN_10147670(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); template<class... A> int m_FUN_10147670(A...); void __thiscall m_FUN_101476a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101476a0(A...); void __thiscall m_FUN_101476c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); template<class... A> int m_FUN_101476c0(A...); void __thiscall m_FUN_101476f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); template<class... A> int m_FUN_101476f0(A...); void __thiscall m_FUN_10147730(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17); template<class... A> int m_FUN_10147730(A...); void __thiscall m_FUN_101477c0(undefined4 param_2); template<class... A> int m_FUN_101477c0(A...); void __thiscall m_FUN_101477d0(undefined4 param_2); template<class... A> int m_FUN_101477d0(A...); void __thiscall m_FUN_101477e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101477e0(A...); void __thiscall m_FUN_10147800(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10147800(A...); void __thiscall m_FUN_10147820(undefined4 param_2); template<class... A> int m_FUN_10147820(A...); void __thiscall m_FUN_10147830(undefined4 param_2); template<class... A> int m_FUN_10147830(A...); void __thiscall m_FUN_10147840(undefined4 param_2); template<class... A> int m_FUN_10147840(A...); void __thiscall m_FUN_10147850(undefined4 param_2); template<class... A> int m_FUN_10147850(A...); void __thiscall m_FUN_10147860(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22); template<class... A> int m_FUN_10147860(A...); void __thiscall m_FUN_10147920(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10147920(A...); void __thiscall m_FUN_101489f0(undefined4 param_2); template<class... A> int m_FUN_101489f0(A...); void * __thiscall m_FUN_101a2030(char *param_2); template<class... A> int m_FUN_101a2030(A...); undefined4 * __thiscall m_FUN_101a21e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_101a21e0(A...); void __thiscall m_FUN_101a22d0(int *param_2); template<class... A> int m_FUN_101a22d0(A...); void __thiscall m_FUN_101a2310(int *param_2); template<class... A> int m_FUN_101a2310(A...); void __thiscall m_FUN_101a2350(int *param_2); template<class... A> int m_FUN_101a2350(A...); undefined4 * __thiscall m_FUN_101a2a50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101a2a50(A...); undefined4 * __thiscall m_FUN_101a2a70(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101a2a70(A...); undefined4 * __thiscall m_FUN_101a2ab0(undefined4 *param_2); template<class... A> int m_FUN_101a2ab0(A...); uint __thiscall m_FUN_101a32a0(uint param_2); template<class... A> int m_FUN_101a32a0(A...); void __thiscall m_FUN_101a4d00(undefined4 param_2); template<class... A> int m_FUN_101a4d00(A...); undefined4 * __thiscall m_FUN_101a6dd0(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_101a6dd0(A...); int * __thiscall m_FUN_101a6df0(int *param_2); template<class... A> int m_FUN_101a6df0(A...); undefined4 * __thiscall m_FUN_101a6e10(undefined4 *param_2); template<class... A> int m_FUN_101a6e10(A...); void __thiscall m_FUN_101a6f30(undefined4 *param_2); template<class... A> int m_FUN_101a6f30(A...); void __thiscall m_FUN_101a6f50(undefined4 *param_2); template<class... A> int m_FUN_101a6f50(A...); void __thiscall m_FUN_101a8a30(undefined4 *param_2); template<class... A> int m_FUN_101a8a30(A...); void __thiscall m_FUN_101a8a60(undefined4 *param_2); template<class... A> int m_FUN_101a8a60(A...); undefined4 * __thiscall m_FUN_101a8e10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_101a8e10(A...); undefined4 * __thiscall m_FUN_101a8e20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_101a8e20(A...); int __thiscall m_FUN_101a9320(int param_2); template<class... A> int m_FUN_101a9320(A...); void __thiscall m_FUN_101a9380(int *param_2,int param_3); template<class... A> int m_FUN_101a9380(A...); int * __thiscall m_FUN_101a93a0(int param_2); template<class... A> int m_FUN_101a93a0(A...); int * __thiscall m_FUN_101a93c0(int param_2); template<class... A> int m_FUN_101a93c0(A...); uint __thiscall m_FUN_101a9780(uint param_2); template<class... A> int m_FUN_101a9780(A...); uint __thiscall m_FUN_101a97c0(uint param_2); template<class... A> int m_FUN_101a97c0(A...); void __thiscall m_FUN_101a99a0(undefined4 param_2); template<class... A> int m_FUN_101a99a0(A...); void __thiscall m_FUN_101a9cf0(undefined4 *param_2); template<class... A> int m_FUN_101a9cf0(A...); void __thiscall m_FUN_101a9d50(undefined4 *param_2); template<class... A> int m_FUN_101a9d50(A...); void __thiscall m_FUN_101aa000(undefined4 *param_2); template<class... A> int m_FUN_101aa000(A...); void __thiscall m_FUN_101aa010(undefined4 *param_2,void *param_3,void *param_4); template<class... A> int m_FUN_101aa010(A...); void __thiscall m_FUN_101aa050(undefined4 *param_2,void *param_3); template<class... A> int m_FUN_101aa050(A...); void __thiscall m_FUN_101aa130(undefined4 *param_2); template<class... A> int m_FUN_101aa130(A...); void __thiscall m_FUN_101aa160(undefined4 *param_2); template<class... A> int m_FUN_101aa160(A...); undefined4 * __thiscall m_FUN_101aa700(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_101aa700(A...); int * __thiscall m_FUN_101aa890(int *param_2); template<class... A> int m_FUN_101aa890(A...); undefined4 * __thiscall m_FUN_101aa8b0(undefined4 *param_2); template<class... A> int m_FUN_101aa8b0(A...); int * __thiscall m_FUN_101aa8d0(int *param_2); template<class... A> int m_FUN_101aa8d0(A...); int * __thiscall m_FUN_101aa950(int *param_2); template<class... A> int m_FUN_101aa950(A...); SCStr * __thiscall m_FUN_101aaa70(SCStr *param_2); template<class... A> int m_FUN_101aaa70(A...); int * __thiscall m_FUN_101aaae0(int *param_2); template<class... A> int m_FUN_101aaae0(A...); int __thiscall m_FUN_101ab370(int param_2,int param_3); template<class... A> int m_FUN_101ab370(A...); void __thiscall m_FUN_101ab460(undefined4 *param_2); template<class... A> int m_FUN_101ab460(A...); void __thiscall m_FUN_101ab480(undefined4 *param_2); template<class... A> int m_FUN_101ab480(A...); void __thiscall m_FUN_101abd50(undefined4 *param_2); template<class... A> int m_FUN_101abd50(A...); undefined4 * __thiscall m_FUN_101ac350(int param_2); template<class... A> int m_FUN_101ac350(A...); undefined4 * __thiscall m_FUN_101ac3f0(undefined4 *param_2); template<class... A> int m_FUN_101ac3f0(A...); undefined4 * __thiscall m_FUN_101ac460(undefined4 *param_2); template<class... A> int m_FUN_101ac460(A...); undefined4 * __thiscall m_FUN_101ac490(undefined4 *param_2); template<class... A> int m_FUN_101ac490(A...); undefined4 * __thiscall m_FUN_101ac4c0(undefined4 *param_2); template<class... A> int m_FUN_101ac4c0(A...); undefined4 * __thiscall m_FUN_101ac4f0(undefined4 *param_2); template<class... A> int m_FUN_101ac4f0(A...); undefined4 * __thiscall m_FUN_101ac520(undefined4 *param_2); template<class... A> int m_FUN_101ac520(A...); undefined4 * __thiscall m_FUN_101ac590(undefined4 *param_2); template<class... A> int m_FUN_101ac590(A...); undefined4 * __thiscall m_FUN_101ac5c0(undefined4 *param_2); template<class... A> int m_FUN_101ac5c0(A...); undefined4 * __thiscall m_FUN_101ac5f0(undefined4 *param_2); template<class... A> int m_FUN_101ac5f0(A...); undefined4 * __thiscall m_FUN_101ac620(undefined4 *param_2); template<class... A> int m_FUN_101ac620(A...); undefined4 * __thiscall m_FUN_101ac650(undefined4 *param_2); template<class... A> int m_FUN_101ac650(A...); undefined4 * __thiscall m_FUN_101ac680(undefined4 *param_2); template<class... A> int m_FUN_101ac680(A...); undefined4 * __thiscall m_FUN_101ac6b0(undefined4 *param_2); template<class... A> int m_FUN_101ac6b0(A...); undefined4 * __thiscall m_FUN_101ac6e0(undefined4 *param_2); template<class... A> int m_FUN_101ac6e0(A...); undefined4 * __thiscall m_FUN_101ac710(undefined4 *param_2); template<class... A> int m_FUN_101ac710(A...); undefined4 * __thiscall m_FUN_101ac740(undefined4 *param_2); template<class... A> int m_FUN_101ac740(A...); undefined4 * __thiscall m_FUN_101ac770(undefined4 *param_2); template<class... A> int m_FUN_101ac770(A...); undefined4 * __thiscall m_FUN_101ac7a0(undefined4 *param_2); template<class... A> int m_FUN_101ac7a0(A...); undefined4 * __thiscall m_FUN_101ac7d0(undefined4 *param_2); template<class... A> int m_FUN_101ac7d0(A...); undefined4 * __thiscall m_FUN_101ac800(undefined4 *param_2); template<class... A> int m_FUN_101ac800(A...); undefined4 * __thiscall m_FUN_101ac830(undefined4 *param_2); template<class... A> int m_FUN_101ac830(A...); undefined4 * __thiscall m_FUN_101ac860(undefined4 *param_2); template<class... A> int m_FUN_101ac860(A...); undefined4 * __thiscall m_FUN_101ac890(undefined4 *param_2); template<class... A> int m_FUN_101ac890(A...); undefined4 * __thiscall m_FUN_101ac8c0(undefined4 *param_2); template<class... A> int m_FUN_101ac8c0(A...); undefined4 * __thiscall m_FUN_101ac8f0(undefined4 *param_2); template<class... A> int m_FUN_101ac8f0(A...); undefined4 * __thiscall m_FUN_101ac920(undefined4 *param_2); template<class... A> int m_FUN_101ac920(A...); undefined4 * __thiscall m_FUN_101ac950(undefined4 *param_2); template<class... A> int m_FUN_101ac950(A...); undefined4 * __thiscall m_FUN_101ac9b0(undefined4 param_2); template<class... A> int m_FUN_101ac9b0(A...); undefined4 * __thiscall m_FUN_101ac9d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_101ac9d0(A...); undefined4 * __thiscall m_FUN_101ac9e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_101ac9e0(A...); undefined4 * __thiscall m_FUN_101ac9f0(undefined4 param_2); template<class... A> int m_FUN_101ac9f0(A...); undefined4 * __thiscall m_FUN_101aca10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_101aca10(A...); undefined4 * __thiscall m_FUN_101aca20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_101aca20(A...); undefined4 * __thiscall m_FUN_101aca50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_101aca50(A...); undefined4 * __thiscall m_FUN_101aca60(undefined4 param_2); template<class... A> int m_FUN_101aca60(A...); undefined4 * __thiscall m_FUN_101acca0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101acca0(A...); undefined4 * __thiscall m_FUN_101accc0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101accc0(A...); undefined4 * __thiscall m_FUN_101acdf0(int param_2); template<class... A> int m_FUN_101acdf0(A...); undefined4 * __thiscall m_FUN_101ad040(undefined4 param_2); template<class... A> int m_FUN_101ad040(A...); undefined4 * __thiscall m_FUN_101ad9a0(int param_2); template<class... A> int m_FUN_101ad9a0(A...); undefined4 * __thiscall m_FUN_101ad9e0(undefined4 param_2); template<class... A> int m_FUN_101ad9e0(A...); int __thiscall m_FUN_101af1b0(int param_2); template<class... A> int m_FUN_101af1b0(A...); int * __thiscall m_FUN_101af1f0(int *param_2); template<class... A> int m_FUN_101af1f0(A...); int * __thiscall m_FUN_101af2c0(int *param_2); template<class... A> int m_FUN_101af2c0(A...); int * __thiscall m_FUN_101af320(int *param_2); template<class... A> int m_FUN_101af320(A...); int * __thiscall m_FUN_101af380(int *param_2); template<class... A> int m_FUN_101af380(A...); int * __thiscall m_FUN_101af3e0(int *param_2); template<class... A> int m_FUN_101af3e0(A...); int * __thiscall m_FUN_101af440(int *param_2); template<class... A> int m_FUN_101af440(A...); int * __thiscall m_FUN_101af580(int *param_2); template<class... A> int m_FUN_101af580(A...); int * __thiscall m_FUN_101af650(int *param_2); template<class... A> int m_FUN_101af650(A...); int * __thiscall m_FUN_101af6b0(int *param_2); template<class... A> int m_FUN_101af6b0(A...); int * __thiscall m_FUN_101af710(int *param_2); template<class... A> int m_FUN_101af710(A...); int * __thiscall m_FUN_101af770(int *param_2); template<class... A> int m_FUN_101af770(A...); int * __thiscall m_FUN_101af7d0(int *param_2); template<class... A> int m_FUN_101af7d0(A...); int * __thiscall m_FUN_101af830(int *param_2); template<class... A> int m_FUN_101af830(A...); int * __thiscall m_FUN_101af890(int *param_2); template<class... A> int m_FUN_101af890(A...); int * __thiscall m_FUN_101af8f0(int *param_2); template<class... A> int m_FUN_101af8f0(A...); int * __thiscall m_FUN_101af950(int *param_2); template<class... A> int m_FUN_101af950(A...); int * __thiscall m_FUN_101afa20(int *param_2); template<class... A> int m_FUN_101afa20(A...); int * __thiscall m_FUN_101afa80(int *param_2); template<class... A> int m_FUN_101afa80(A...); int * __thiscall m_FUN_101afae0(int *param_2); template<class... A> int m_FUN_101afae0(A...); int * __thiscall m_FUN_101afb40(int *param_2); template<class... A> int m_FUN_101afb40(A...); };

extern int FUN_1148c94c(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int __std_exception_destroy(...);
extern __declspec(dllimport) int __stdio_common_vsprintf_p(...);
extern __declspec(dllimport) int _callnewh(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int strchr(...);
extern int thunk_FUN_101170a0(...);
extern int thunk_FUN_10117950(...);
template<class... A> int __stdcall thunk_FUN_10118c40(A...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1011f870(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
template<class... A> int __stdcall thunk_FUN_1012cab0(A...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a3180(...);
extern int thunk_FUN_101a31e0(...);
extern int thunk_FUN_101a6c80(...);
template<class... A> int __stdcall thunk_FUN_101a6f70(A...);
extern int thunk_FUN_101a7120(...);
extern int thunk_FUN_101a7f30(...);
extern int thunk_FUN_101a8030(...);
extern int thunk_FUN_101a83f0(...);
extern int thunk_FUN_101a8700(...);
extern int thunk_FUN_101ab4a0(...);
extern int thunk_FUN_101ab700(...);
extern int thunk_FUN_101ae960(...);
extern int thunk_FUN_110689f0(...);
extern int thunk_FUN_11069bc0(...);
extern int thunk_FUN_1106b0f0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148b586(...);
extern int thunk_FUN_1148c928(...);
extern __declspec(dllimport) int tolower(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11d330dc;
extern int g_lSCObjCount;
extern int ghidra_vftable_AnacapaLauncherCB;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_SCAbilityManager;
extern int ghidra_vftable_SCAccountManagerEventSink;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCHouseholdEventSinkInternal;
extern int ghidra_vftable_SCIAbilityDelegate;
extern int ghidra_vftable_SCIAbilityDelegateSwigBase;
extern int ghidra_vftable_SCIAbilityListener;
extern int ghidra_vftable_SCIAction;
extern int ghidra_vftable_SCIActionDelegate;
extern int ghidra_vftable_SCIActionDelegateSwigBase;
extern int ghidra_vftable_SCIActionFactory;
extern int ghidra_vftable_SCIActionFactorySwigBase;
extern int ghidra_vftable_SCIActionFilter;
extern int ghidra_vftable_SCIActionFilterSwigBase;
extern int ghidra_vftable_SCIActionSwigBase;
extern int ghidra_vftable_SCIAutomationDelegate;
extern int ghidra_vftable_SCIAutomationDelegateSwigBase;
extern int ghidra_vftable_SCIBTAccessoryDelegate;
extern int ghidra_vftable_SCIBTAccessoryDelegateSwigBase;
extern int ghidra_vftable_SCIBTClassicConnectionCallback;
extern int ghidra_vftable_SCIBTClassicConnectionCallbackSwigBase;
extern int ghidra_vftable_SCIBTClassicConnectionProvider;
extern int ghidra_vftable_SCIBTClassicConnectionProviderSwigBase;
extern int ghidra_vftable_SCIBleDelegate;
extern int ghidra_vftable_SCIBleDelegateSwigBase;
extern int ghidra_vftable_SCIBlePeripheralDelegate;
extern int ghidra_vftable_SCIBlePeripheralDelegateSwigBase;
extern int ghidra_vftable_SCIBrowseItem;
extern int ghidra_vftable_SCIBrowseItemSwigBase;
extern int ghidra_vftable_SCIChirpDelegate;
extern int ghidra_vftable_SCIChirpDelegateSwigBase;
extern int ghidra_vftable_SCIClipboardDelegate;
extern int ghidra_vftable_SCIClipboardDelegateSwigBase;
extern int ghidra_vftable_SCICrashReportProvider;
extern int ghidra_vftable_SCICrashReportProviderSwigBase;
extern int ghidra_vftable_SCICustomSubWizard;
extern int ghidra_vftable_SCICustomSubWizardSwigBase;
extern int ghidra_vftable_SCIDebug;
extern int ghidra_vftable_SCIEnumerable;
extern int ghidra_vftable_SCIEventSink;
extern int ghidra_vftable_SCIEventSinkSwigBase;
extern int ghidra_vftable_SCIExperimentManagerProvider;
extern int ghidra_vftable_SCIExperimentManagerProviderSwigBase;
extern int ghidra_vftable_SCIGetAboutSonosStringCB;
extern int ghidra_vftable_SCIGetAboutSonosStringCBSwigBase;
extern int ghidra_vftable_SCIGetSonosPlaylistsCB;
extern int ghidra_vftable_SCIGetSonosPlaylistsCBSwigBase;
extern int ghidra_vftable_SCIHapticDelegate;
extern int ghidra_vftable_SCIHapticDelegateSwigBase;
extern int ghidra_vftable_SCIInAppMessagingProvider;
extern int ghidra_vftable_SCIInAppMessagingProviderSwigBase;
extern int ghidra_vftable_SCIInAppPurchaseManagerProvider;
extern int ghidra_vftable_SCIInAppPurchaseManagerProviderSwigBase;
extern int ghidra_vftable_SCIInput;
extern int ghidra_vftable_SCIIntArray;
extern int ghidra_vftable_SCILibrary;
extern int ghidra_vftable_SCILifecycleAppProvider;
extern int ghidra_vftable_SCILifecycleAppProviderSwigBase;
extern int ghidra_vftable_SCILocalMediaCollection;
extern int ghidra_vftable_SCILocalMediaCollectionSwigBase;
extern int ghidra_vftable_SCILocalMusicBrowseItemInfo;
extern int ghidra_vftable_SCILocalMusicBrowseItemInfoSwigBase;
extern int ghidra_vftable_SCILocalMusicSearchableDelegate;
extern int ghidra_vftable_SCILocalMusicSearchableDelegateSwigBase;
extern int ghidra_vftable_SCILoggingProvider;
extern int ghidra_vftable_SCILoggingProviderSwigBase;
extern int ghidra_vftable_SCIMdnsDelegate;
extern int ghidra_vftable_SCIMdnsDelegateSwigBase;
extern int ghidra_vftable_SCIMusicServerBrowseDelegate;
extern int ghidra_vftable_SCIMusicServerBrowseDelegateSwigBase;
extern int ghidra_vftable_SCIMusicServerDelegate;
extern int ghidra_vftable_SCIMusicServerDelegateSwigBase;
extern int ghidra_vftable_SCINetstartListener;
extern int ghidra_vftable_SCINetstartListenerSwigBase;
extern int ghidra_vftable_SCINetworkManagementDelegate;
extern int ghidra_vftable_SCINetworkManagementDelegateSwigBase;
extern int ghidra_vftable_SCINewWizDelegate;
extern int ghidra_vftable_SCINewWizDelegateSwigBase;
extern int ghidra_vftable_SCINfcDelegate;
extern int ghidra_vftable_SCINfcDelegateSwigBase;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCB;
extern int ghidra_vftable_SCIOpCBSwigBase;
extern int ghidra_vftable_SCIPlatformDateTimeProvider;
extern int ghidra_vftable_SCISavedDataProvider;
extern int ghidra_vftable_SCISavedDataProviderSwigBase;
extern int ghidra_vftable_SCISecureStore;
extern int ghidra_vftable_SCISecureStoreSwigBase;
extern int ghidra_vftable_SCISecurityContext;
extern int ghidra_vftable_SCISecurityContextSwigBase;
extern int ghidra_vftable_SCIServiceAppInterop;
extern int ghidra_vftable_SCIServiceAppInteropSwigBase;
extern int ghidra_vftable_SCIStackTraceCaptureDelegate;
extern int ghidra_vftable_SCIStackTraceCaptureDelegateSwigBase;
extern int ghidra_vftable_SCIStringInput;
extern int ghidra_vftable_SCIStringInputBase;
extern int ghidra_vftable_SCIStringInputSwigBase;
extern int ghidra_vftable_SCITrackInfo;
extern int ghidra_vftable_SCITrackInfoSwigBase;
extern int ghidra_vftable_SCIUINotificationsDelegate;
extern int ghidra_vftable_SCIUrbanAirshipDelegate;
extern int ghidra_vftable_SCIUrbanAirshipDelegateSwigBase;
extern int ghidra_vftable_SCIUrlConnection;
extern int ghidra_vftable_SCIUrlConnectionSwigBase;
extern int ghidra_vftable_SCIUrlSessionCallback;
extern int ghidra_vftable_SCIUrlSessionCallbackSwigBase;
extern int ghidra_vftable_SCIUrlSessionProvider;
extern int ghidra_vftable_SCIUrlSessionProviderSwigBase;
extern int ghidra_vftable_SCIVoiceServiceDelegate;
extern int ghidra_vftable_SCIVoiceServiceDelegateSwigBase;
extern int ghidra_vftable_SCIVpnDelegate;
extern int ghidra_vftable_SCIVpnDelegateSwigBase;
extern int ghidra_vftable_SCIWebsocketCallback;
extern int ghidra_vftable_SCIWebsocketCallbackSwigBase;
extern int ghidra_vftable_SCIWebsocketDelegate;
extern int ghidra_vftable_SCIWebsocketDelegateSwigBase;
extern int ghidra_vftable_SCIWifiDelegate;
extern int ghidra_vftable_SCIWifiDelegateSwigBase;
extern int ghidra_vftable_SCIntArray;
extern int ghidra_vftable_SCLibAssertionFailureCallback;
extern int ghidra_vftable_SCLibCallUIThreadCallback;
extern int ghidra_vftable_SCLibCustomSubWizardCallback;
extern int ghidra_vftable_SCLibDelegateFactory;
extern int ghidra_vftable_SCLibDiagnosticConsoleLogCallback;
extern int ghidra_vftable_SCLibDiagnosticExtraInfoCallback;
extern int ghidra_vftable_SCLibLogCallback;
extern int ghidra_vftable_SCLibPlatformStringCallback;
extern int ghidra_vftable_SCLibSonarCallback;
extern int ghidra_vftable_SCLibTruncatedStringsCallback;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCUserAccountEventSink;
extern int ghidra_vftable_SwigDirector_SCIAbilityDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionFactorySwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionFilterSwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionSwigBase;
extern int ghidra_vftable_SwigDirector_SCIAutomationDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBTAccessoryDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBTClassicConnectionCallbackSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBTClassicConnectionProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBleDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBlePeripheralDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBrowseItemSwigBase;
extern int ghidra_vftable_SwigDirector_SCIChirpDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIClipboardDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCICrashReportProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCICustomSubWizardSwigBase;
extern int ghidra_vftable_SwigDirector_SCIEventSinkSwigBase;
extern int ghidra_vftable_SwigDirector_SCIExperimentManagerProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCIGetAboutSonosStringCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIGetSonosPlaylistsCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIHapticDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIInAppMessagingProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCIInAppPurchaseManagerProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCILifecycleAppProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCILocalMediaCollectionSwigBase;
extern int ghidra_vftable_SwigDirector_SCILocalMusicBrowseItemInfoSwigBase;
extern int ghidra_vftable_SwigDirector_SCILocalMusicSearchableDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCILoggingProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCIMdnsDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIMusicServerBrowseDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIMusicServerDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCINetstartListenerSwigBase;
extern int ghidra_vftable_SwigDirector_SCINetworkManagementDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCINewWizDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCINfcDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIOpCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIPlatformDateTimeProvider;
extern int ghidra_vftable_SwigDirector_SCISavedDataProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCISecureStoreSwigBase;
extern int ghidra_vftable_SwigDirector_SCISecurityContextSwigBase;
extern int ghidra_vftable_SwigDirector_SCIServiceAppInteropSwigBase;
extern int ghidra_vftable_SwigDirector_SCIStackTraceCaptureDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIStringInputSwigBase;
extern int ghidra_vftable_SwigDirector_SCITrackInfoSwigBase;
extern int ghidra_vftable_SwigDirector_SCIUINotificationsDelegate;
extern int ghidra_vftable_SwigDirector_SCIUrbanAirshipDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIUrlConnectionSwigBase;
extern int ghidra_vftable_SwigDirector_SCIUrlSessionCallbackSwigBase;
extern int ghidra_vftable_SwigDirector_SCIUrlSessionProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCIVoiceServiceDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIVpnDelegate;
extern int ghidra_vftable_SwigDirector_SCIVpnDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIWebsocketCallbackSwigBase;
extern int ghidra_vftable_SwigDirector_SCIWebsocketDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIWifiDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCLibAssertionFailureCallback;
extern int ghidra_vftable_SwigDirector_SCLibCallUIThreadCallback;
extern int ghidra_vftable_SwigDirector_SCLibCustomSubWizardCallback;
extern int ghidra_vftable_SwigDirector_SCLibDelegateFactory;
extern int ghidra_vftable_SwigDirector_SCLibDiagnosticConsoleLogCallback;
extern int ghidra_vftable_SwigDirector_SCLibDiagnosticExtraInfoCallback;
extern int ghidra_vftable_SwigDirector_SCLibLogCallback;
extern int ghidra_vftable_SwigDirector_SCLibPlatformStringCallback;
extern int ghidra_vftable_SwigDirector_SCLibSonarCallback;
extern int ghidra_vftable_SwigDirector_SCLibTruncatedStringsCallback;
extern int ghidra_vftable_Swig_DirectorException;
extern int ghidra_vftable_Swig_DirectorPureVirtualException;
extern int ghidra_vftable_std_bad_alloc;
extern int ghidra_vftable_std_exception;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_101a208d[];
extern undefined1 LAB_101a20c1[];
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10116540(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10116540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10116560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10116560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10116580(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10116580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101165a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_101165a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101165c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_101165c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101165e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101165e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101166a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101166a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101166b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101166b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101166f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_101166f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10116af0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10116af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10116b00(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10116b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10116cd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10116cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10116ce0(SCStr *param_1,SCStr *param_2);
template<class... A> int FUN_10116ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d00(void);
template<class... A> int FUN_10116d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d10(void);
template<class... A> int FUN_10116d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d20(void);
template<class... A> int FUN_10116d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d30(void);
template<class... A> int FUN_10116d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 FUN_10116d40(void);
template<class... A> int FUN_10116d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116d50(undefined4 *param_1);
template<class... A> int FUN_10116d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d60(void);
template<class... A> int FUN_10116d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d70(void);
template<class... A> int FUN_10116d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d80(void);
template<class... A> int FUN_10116d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d90(void);
template<class... A> int FUN_10116d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116da0(void);
template<class... A> int FUN_10116da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116db0(void);
template<class... A> int FUN_10116db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116dc0(void);
template<class... A> int FUN_10116dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116dd0(void);
template<class... A> int FUN_10116dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116de0(void);
template<class... A> int FUN_10116de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116df0(void);
template<class... A> int FUN_10116df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116e00(void);
template<class... A> int FUN_10116e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116e10(void);
template<class... A> int FUN_10116e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116e20(void);
template<class... A> int FUN_10116e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116e30(void);
template<class... A> int FUN_10116e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10116e40(void);
template<class... A> int FUN_10116e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116e50(void);
template<class... A> int FUN_10116e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116e60(void);
template<class... A> int FUN_10116e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10116e70(uint param_1);
template<class... A> int FUN_10116e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116ed0(uint param_1);
template<class... A> int FUN_10116ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116f10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10116f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116f20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10116f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116f30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10116f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116f40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10116f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116f50(undefined4 param_1);
template<class... A> int FUN_10116f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116f60(void *param_1,uint param_2);
template<class... A> int FUN_10116f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116fb0(void);
template<class... A> int FUN_10116fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116fc0(void);
template<class... A> int FUN_10116fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116fd0(void);
template<class... A> int FUN_10116fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117150(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10117150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101171f0(undefined4 param_1);
template<class... A> int FUN_101171f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10117200(uint param_1);
template<class... A> int FUN_10117200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10117220(uint param_1);
template<class... A> int FUN_10117220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117240(undefined4 param_1);
template<class... A> int FUN_10117240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117250(undefined4 *param_1);
template<class... A> int FUN_10117250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117260(void);
template<class... A> int FUN_10117260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117270(void);
template<class... A> int FUN_10117270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101174c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101174c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101174e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101174e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117500(undefined4 param_1);
template<class... A> int FUN_10117500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117510(undefined4 param_1);
template<class... A> int FUN_10117510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117520(undefined4 param_1);
template<class... A> int FUN_10117520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117530(undefined4 param_1);
template<class... A> int FUN_10117530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117540(undefined4 param_1);
template<class... A> int FUN_10117540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117550(undefined4 param_1);
template<class... A> int FUN_10117550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117560(undefined4 param_1);
template<class... A> int FUN_10117560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117570(undefined4 param_1);
template<class... A> int FUN_10117570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117580(undefined4 param_1);
template<class... A> int FUN_10117580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117590(undefined4 param_1);
template<class... A> int FUN_10117590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101175a0(undefined4 param_1);
template<class... A> int FUN_101175a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101175b0(undefined4 param_1);
template<class... A> int FUN_101175b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117650(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10117650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117930(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10117930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101179d0(undefined4 param_1);
template<class... A> int FUN_101179d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101179e0(undefined4 param_1);
template<class... A> int FUN_101179e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101179f0(undefined4 param_1);
template<class... A> int FUN_101179f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a00(undefined4 param_1);
template<class... A> int FUN_10117a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a10(undefined4 param_1);
template<class... A> int FUN_10117a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a20(undefined4 param_1);
template<class... A> int FUN_10117a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a30(undefined4 param_1);
template<class... A> int FUN_10117a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a40(undefined4 param_1);
template<class... A> int FUN_10117a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a50(undefined4 param_1);
template<class... A> int FUN_10117a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a60(undefined4 param_1);
template<class... A> int FUN_10117a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a70(undefined4 param_1);
template<class... A> int FUN_10117a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a80(undefined4 param_1);
template<class... A> int FUN_10117a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10117a90(void);
template<class... A> int FUN_10117a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10117aa0(void);
template<class... A> int FUN_10117aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10117ab0(void);
template<class... A> int FUN_10117ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_10117d40(uint *param_1,uint *param_2);
template<class... A> int FUN_10117d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_10117d60(uint *param_1,uint *param_2);
template<class... A> int FUN_10117d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117d80(undefined4 param_1);
template<class... A> int FUN_10117d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117d90(undefined4 param_1);
template<class... A> int FUN_10117d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117da0(undefined4 param_1);
template<class... A> int FUN_10117da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117db0(undefined4 param_1);
template<class... A> int FUN_10117db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117dc0(undefined4 param_1);
template<class... A> int FUN_10117dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117dd0(undefined4 param_1);
template<class... A> int FUN_10117dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117de0(undefined4 param_1);
template<class... A> int FUN_10117de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117df0(undefined4 param_1);
template<class... A> int FUN_10117df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  FUN_10117e00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10117e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  FUN_10117e20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10117e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117e40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10117e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117e60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10117e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117ef0(undefined4 *param_1);
template<class... A> int FUN_10117ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f20(undefined4 *param_1);
template<class... A> int FUN_10117f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f30(undefined4 *param_1);
template<class... A> int FUN_10117f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f40(undefined4 *param_1);
template<class... A> int FUN_10117f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f50(undefined4 *param_1);
template<class... A> int FUN_10117f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f60(undefined4 *param_1);
template<class... A> int FUN_10117f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f70(undefined4 *param_1);
template<class... A> int FUN_10117f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f80(undefined4 *param_1);
template<class... A> int FUN_10117f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f90(undefined4 *param_1);
template<class... A> int FUN_10117f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117fa0(undefined4 *param_1);
template<class... A> int FUN_10117fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117fb0(undefined4 *param_1);
template<class... A> int FUN_10117fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117fc0(undefined4 *param_1);
template<class... A> int FUN_10117fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117fd0(undefined4 *param_1);
template<class... A> int FUN_10117fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117fe0(undefined4 *param_1);
template<class... A> int FUN_10117fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117ff0(undefined4 *param_1);
template<class... A> int FUN_10117ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118000(undefined4 *param_1);
template<class... A> int FUN_10118000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118010(undefined4 *param_1);
template<class... A> int FUN_10118010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118020(undefined4 *param_1);
template<class... A> int FUN_10118020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118030(undefined4 *param_1);
template<class... A> int FUN_10118030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118040(undefined4 *param_1);
template<class... A> int FUN_10118040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118050(undefined4 *param_1);
template<class... A> int FUN_10118050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118080(undefined4 *param_1);
template<class... A> int FUN_10118080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118090(undefined4 *param_1);
template<class... A> int FUN_10118090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101180a0(undefined4 *param_1);
template<class... A> int FUN_101180a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101180b0(undefined4 *param_1);
template<class... A> int FUN_101180b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101180e0(undefined4 *param_1);
template<class... A> int FUN_101180e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101180f0(undefined4 *param_1);
template<class... A> int FUN_101180f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118100(undefined4 *param_1);
template<class... A> int FUN_10118100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118110(undefined4 *param_1);
template<class... A> int FUN_10118110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118120(undefined4 *param_1);
template<class... A> int FUN_10118120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118130(undefined4 *param_1);
template<class... A> int FUN_10118130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118140(undefined4 *param_1);
template<class... A> int FUN_10118140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118170(undefined4 *param_1);
template<class... A> int FUN_10118170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118180(undefined4 *param_1);
template<class... A> int FUN_10118180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118190(undefined4 *param_1);
template<class... A> int FUN_10118190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181a0(undefined4 *param_1);
template<class... A> int FUN_101181a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181b0(undefined4 *param_1);
template<class... A> int FUN_101181b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181c0(undefined4 *param_1);
template<class... A> int FUN_101181c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181d0(undefined4 *param_1);
template<class... A> int FUN_101181d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181e0(undefined4 *param_1);
template<class... A> int FUN_101181e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181f0(undefined4 *param_1);
template<class... A> int FUN_101181f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118220(undefined4 *param_1);
template<class... A> int FUN_10118220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118230(undefined4 *param_1);
template<class... A> int FUN_10118230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118240(undefined4 *param_1);
template<class... A> int FUN_10118240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118250(undefined4 *param_1);
template<class... A> int FUN_10118250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118260(undefined4 *param_1);
template<class... A> int FUN_10118260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118270(undefined4 *param_1);
template<class... A> int FUN_10118270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118280(undefined4 *param_1);
template<class... A> int FUN_10118280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118290(undefined4 *param_1);
template<class... A> int FUN_10118290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182a0(undefined4 *param_1);
template<class... A> int FUN_101182a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182b0(undefined4 *param_1);
template<class... A> int FUN_101182b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182c0(undefined4 *param_1);
template<class... A> int FUN_101182c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182d0(undefined4 *param_1);
template<class... A> int FUN_101182d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182e0(undefined4 *param_1);
template<class... A> int FUN_101182e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182f0(undefined4 *param_1);
template<class... A> int FUN_101182f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118320(undefined4 *param_1);
template<class... A> int FUN_10118320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118350(undefined4 *param_1);
template<class... A> int FUN_10118350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118380(undefined4 *param_1);
template<class... A> int FUN_10118380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118390(undefined4 *param_1);
template<class... A> int FUN_10118390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101183a0(undefined4 *param_1);
template<class... A> int FUN_101183a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101183b0(undefined4 *param_1);
template<class... A> int FUN_101183b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101183e0(undefined4 *param_1);
template<class... A> int FUN_101183e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101183f0(undefined4 *param_1);
template<class... A> int FUN_101183f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118400(undefined4 *param_1);
template<class... A> int FUN_10118400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118410(undefined4 *param_1);
template<class... A> int FUN_10118410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118420(undefined4 *param_1);
template<class... A> int FUN_10118420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118430(undefined4 *param_1);
template<class... A> int FUN_10118430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118440(undefined4 *param_1);
template<class... A> int FUN_10118440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118490(undefined4 *param_1);
template<class... A> int FUN_10118490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184a0(undefined4 *param_1);
template<class... A> int FUN_101184a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184b0(undefined4 *param_1);
template<class... A> int FUN_101184b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184c0(undefined4 *param_1);
template<class... A> int FUN_101184c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184d0(undefined4 *param_1);
template<class... A> int FUN_101184d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184e0(undefined4 *param_1);
template<class... A> int FUN_101184e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184f0(undefined4 *param_1);
template<class... A> int FUN_101184f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118500(undefined4 *param_1);
template<class... A> int FUN_10118500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118510(undefined4 *param_1);
template<class... A> int FUN_10118510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118520(undefined4 *param_1);
template<class... A> int FUN_10118520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118530(undefined4 *param_1);
template<class... A> int FUN_10118530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118540(undefined4 *param_1);
template<class... A> int FUN_10118540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118550(undefined4 *param_1);
template<class... A> int FUN_10118550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118560(undefined4 *param_1);
template<class... A> int FUN_10118560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118570(undefined4 *param_1);
template<class... A> int FUN_10118570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118580(undefined4 *param_1);
template<class... A> int FUN_10118580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118590(undefined4 *param_1);
template<class... A> int FUN_10118590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185a0(undefined4 *param_1);
template<class... A> int FUN_101185a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185b0(undefined4 *param_1);
template<class... A> int FUN_101185b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185c0(undefined4 *param_1);
template<class... A> int FUN_101185c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185d0(undefined4 *param_1);
template<class... A> int FUN_101185d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185e0(undefined4 *param_1);
template<class... A> int FUN_101185e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185f0(undefined4 *param_1);
template<class... A> int FUN_101185f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118600(undefined4 *param_1);
template<class... A> int FUN_10118600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118610(undefined4 *param_1);
template<class... A> int FUN_10118610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118620(undefined4 *param_1);
template<class... A> int FUN_10118620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118630(undefined4 *param_1);
template<class... A> int FUN_10118630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118640(undefined4 *param_1);
template<class... A> int FUN_10118640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118650(undefined4 *param_1);
template<class... A> int FUN_10118650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118660(undefined4 *param_1);
template<class... A> int FUN_10118660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118670(undefined4 *param_1);
template<class... A> int FUN_10118670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118680(undefined4 *param_1);
template<class... A> int FUN_10118680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101186b0(undefined4 *param_1);
template<class... A> int FUN_101186b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101186c0(undefined4 *param_1);
template<class... A> int FUN_101186c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101186d0(undefined4 *param_1);
template<class... A> int FUN_101186d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101186e0(undefined4 *param_1);
template<class... A> int FUN_101186e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101186f0(undefined4 *param_1);
template<class... A> int FUN_101186f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118700(undefined4 *param_1);
template<class... A> int FUN_10118700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118710(undefined4 *param_1);
template<class... A> int FUN_10118710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118720(undefined4 *param_1);
template<class... A> int FUN_10118720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118730(undefined4 *param_1);
template<class... A> int FUN_10118730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118740(undefined4 *param_1);
template<class... A> int FUN_10118740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118750(undefined4 *param_1);
template<class... A> int FUN_10118750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118760(undefined4 *param_1);
template<class... A> int FUN_10118760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118770(undefined4 *param_1);
template<class... A> int FUN_10118770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118780(undefined4 *param_1);
template<class... A> int FUN_10118780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118790(undefined4 *param_1);
template<class... A> int FUN_10118790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187a0(undefined4 *param_1);
template<class... A> int FUN_101187a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187b0(undefined4 *param_1);
template<class... A> int FUN_101187b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187c0(undefined4 *param_1);
template<class... A> int FUN_101187c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187d0(undefined4 *param_1);
template<class... A> int FUN_101187d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187e0(undefined4 *param_1);
template<class... A> int FUN_101187e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187f0(undefined4 *param_1);
template<class... A> int FUN_101187f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118800(undefined4 *param_1);
template<class... A> int FUN_10118800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118810(undefined4 *param_1);
template<class... A> int FUN_10118810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118840(undefined4 *param_1);
template<class... A> int FUN_10118840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118870(undefined4 *param_1);
template<class... A> int FUN_10118870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118880(undefined4 *param_1);
template<class... A> int FUN_10118880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118890(undefined4 *param_1);
template<class... A> int FUN_10118890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101188a0(undefined4 *param_1);
template<class... A> int FUN_101188a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101188b0(undefined4 *param_1);
template<class... A> int FUN_101188b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101188e0(undefined4 *param_1);
template<class... A> int FUN_101188e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101188f0(undefined4 *param_1);
template<class... A> int FUN_101188f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118900(undefined4 *param_1);
template<class... A> int FUN_10118900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118930(undefined4 *param_1);
template<class... A> int FUN_10118930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118960(undefined4 *param_1);
template<class... A> int FUN_10118960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118970(undefined4 *param_1);
template<class... A> int FUN_10118970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118980(undefined4 *param_1);
template<class... A> int FUN_10118980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118990(undefined4 *param_1);
template<class... A> int FUN_10118990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101189a0(undefined4 *param_1);
template<class... A> int FUN_101189a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101189b0(undefined4 *param_1);
template<class... A> int FUN_101189b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101189c0(undefined4 *param_1);
template<class... A> int FUN_101189c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101189d0(undefined4 *param_1);
template<class... A> int FUN_101189d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101189e0(undefined4 *param_1);
template<class... A> int FUN_101189e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118b30(undefined4 *param_1);
template<class... A> int FUN_10118b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10118b50(int param_1);
template<class... A> int FUN_10118b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118b70(undefined4 *param_1);
template<class... A> int FUN_10118b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118bb0(undefined4 *param_1);
template<class... A> int FUN_10118bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10118bd0(undefined4 param_1);
template<class... A> int FUN_10118bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10118be0(undefined4 param_1);
template<class... A> int FUN_10118be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118f10(undefined4 *param_1);
template<class... A> int FUN_10118f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119160(undefined4 *param_1);
template<class... A> int FUN_10119160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119170(undefined4 *param_1);
template<class... A> int FUN_10119170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119190(undefined4 *param_1);
template<class... A> int FUN_10119190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101191a0(undefined4 *param_1);
template<class... A> int FUN_101191a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101191b0(undefined4 *param_1);
template<class... A> int FUN_101191b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101191d0(undefined4 *param_1);
template<class... A> int FUN_101191d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101191f0(undefined4 *param_1);
template<class... A> int FUN_101191f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119210(undefined4 *param_1);
template<class... A> int FUN_10119210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119220(undefined4 *param_1);
template<class... A> int FUN_10119220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119240(undefined4 *param_1);
template<class... A> int FUN_10119240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119260(undefined4 *param_1);
template<class... A> int FUN_10119260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119270(undefined4 *param_1);
template<class... A> int FUN_10119270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119290(undefined4 *param_1);
template<class... A> int FUN_10119290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101192a0(undefined4 *param_1);
template<class... A> int FUN_101192a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101192c0(undefined4 *param_1);
template<class... A> int FUN_101192c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101192d0(undefined4 *param_1);
template<class... A> int FUN_101192d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101192f0(undefined4 *param_1);
template<class... A> int FUN_101192f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119300(undefined4 *param_1);
template<class... A> int FUN_10119300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119320(undefined4 *param_1);
template<class... A> int FUN_10119320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119330(undefined4 *param_1);
template<class... A> int FUN_10119330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119350(undefined4 *param_1);
template<class... A> int FUN_10119350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119360(undefined4 *param_1);
template<class... A> int FUN_10119360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119380(undefined4 *param_1);
template<class... A> int FUN_10119380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119390(undefined4 *param_1);
template<class... A> int FUN_10119390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101193b0(undefined4 *param_1);
template<class... A> int FUN_101193b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101193c0(undefined4 *param_1);
template<class... A> int FUN_101193c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101193e0(undefined4 *param_1);
template<class... A> int FUN_101193e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101193f0(undefined4 *param_1);
template<class... A> int FUN_101193f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119410(undefined4 *param_1);
template<class... A> int FUN_10119410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119420(undefined4 *param_1);
template<class... A> int FUN_10119420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119440(undefined4 *param_1);
template<class... A> int FUN_10119440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119450(undefined4 *param_1);
template<class... A> int FUN_10119450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119470(undefined4 *param_1);
template<class... A> int FUN_10119470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119480(undefined4 *param_1);
template<class... A> int FUN_10119480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101194a0(undefined4 *param_1);
template<class... A> int FUN_101194a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101194b0(undefined4 *param_1);
template<class... A> int FUN_101194b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101194d0(undefined4 *param_1);
template<class... A> int FUN_101194d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101194e0(undefined4 *param_1);
template<class... A> int FUN_101194e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119500(undefined4 *param_1);
template<class... A> int FUN_10119500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119510(undefined4 *param_1);
template<class... A> int FUN_10119510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119530(undefined4 *param_1);
template<class... A> int FUN_10119530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119540(undefined4 *param_1);
template<class... A> int FUN_10119540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119560(undefined4 *param_1);
template<class... A> int FUN_10119560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119570(undefined4 *param_1);
template<class... A> int FUN_10119570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119590(undefined4 *param_1);
template<class... A> int FUN_10119590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101195a0(undefined4 *param_1);
template<class... A> int FUN_101195a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101195c0(undefined4 *param_1);
template<class... A> int FUN_101195c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101195d0(undefined4 *param_1);
template<class... A> int FUN_101195d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101195e0(undefined4 *param_1);
template<class... A> int FUN_101195e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119600(undefined4 *param_1);
template<class... A> int FUN_10119600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119610(undefined4 *param_1);
template<class... A> int FUN_10119610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119630(undefined4 *param_1);
template<class... A> int FUN_10119630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119640(undefined4 *param_1);
template<class... A> int FUN_10119640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119660(undefined4 *param_1);
template<class... A> int FUN_10119660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119670(undefined4 *param_1);
template<class... A> int FUN_10119670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119690(undefined4 *param_1);
template<class... A> int FUN_10119690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101196a0(undefined4 *param_1);
template<class... A> int FUN_101196a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101196c0(undefined4 *param_1);
template<class... A> int FUN_101196c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101196d0(undefined4 *param_1);
template<class... A> int FUN_101196d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101196f0(undefined4 *param_1);
template<class... A> int FUN_101196f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119700(undefined4 *param_1);
template<class... A> int FUN_10119700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119720(undefined4 *param_1);
template<class... A> int FUN_10119720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119730(undefined4 *param_1);
template<class... A> int FUN_10119730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119750(undefined4 *param_1);
template<class... A> int FUN_10119750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119760(undefined4 *param_1);
template<class... A> int FUN_10119760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119780(undefined4 *param_1);
template<class... A> int FUN_10119780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119790(undefined4 *param_1);
template<class... A> int FUN_10119790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101197b0(undefined4 *param_1);
template<class... A> int FUN_101197b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101197c0(undefined4 *param_1);
template<class... A> int FUN_101197c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101197e0(undefined4 *param_1);
template<class... A> int FUN_101197e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101197f0(undefined4 *param_1);
template<class... A> int FUN_101197f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119810(undefined4 *param_1);
template<class... A> int FUN_10119810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119820(undefined4 *param_1);
template<class... A> int FUN_10119820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119830(undefined4 *param_1);
template<class... A> int FUN_10119830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119850(undefined4 *param_1);
template<class... A> int FUN_10119850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119860(undefined4 *param_1);
template<class... A> int FUN_10119860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119870(undefined4 *param_1);
template<class... A> int FUN_10119870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119890(undefined4 *param_1);
template<class... A> int FUN_10119890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101198a0(undefined4 *param_1);
template<class... A> int FUN_101198a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101198c0(undefined4 *param_1);
template<class... A> int FUN_101198c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101198d0(undefined4 *param_1);
template<class... A> int FUN_101198d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101198f0(undefined4 *param_1);
template<class... A> int FUN_101198f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119900(undefined4 *param_1);
template<class... A> int FUN_10119900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119920(undefined4 *param_1);
template<class... A> int FUN_10119920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119930(undefined4 *param_1);
template<class... A> int FUN_10119930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119950(undefined4 *param_1);
template<class... A> int FUN_10119950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119960(undefined4 *param_1);
template<class... A> int FUN_10119960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119970(undefined4 *param_1);
template<class... A> int FUN_10119970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119990(undefined4 *param_1);
template<class... A> int FUN_10119990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101199a0(undefined4 *param_1);
template<class... A> int FUN_101199a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101199c0(undefined4 *param_1);
template<class... A> int FUN_101199c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101199d0(undefined4 *param_1);
template<class... A> int FUN_101199d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101199e0(undefined4 *param_1);
template<class... A> int FUN_101199e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a00(undefined4 *param_1);
template<class... A> int FUN_10119a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a10(undefined4 *param_1);
template<class... A> int FUN_10119a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a30(undefined4 *param_1);
template<class... A> int FUN_10119a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a40(undefined4 *param_1);
template<class... A> int FUN_10119a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a60(undefined4 *param_1);
template<class... A> int FUN_10119a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a70(undefined4 *param_1);
template<class... A> int FUN_10119a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a90(undefined4 *param_1);
template<class... A> int FUN_10119a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119aa0(undefined4 *param_1);
template<class... A> int FUN_10119aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10119ac0(int param_1);
template<class... A> int FUN_10119ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119ae0(undefined4 *param_1);
template<class... A> int FUN_10119ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119af0(undefined4 *param_1);
template<class... A> int FUN_10119af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b10(undefined4 *param_1);
template<class... A> int FUN_10119b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b20(undefined4 *param_1);
template<class... A> int FUN_10119b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b40(undefined4 *param_1);
template<class... A> int FUN_10119b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b60(undefined4 *param_1);
template<class... A> int FUN_10119b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b70(undefined4 *param_1);
template<class... A> int FUN_10119b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b90(undefined4 *param_1);
template<class... A> int FUN_10119b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119ba0(undefined4 *param_1);
template<class... A> int FUN_10119ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119da0(undefined4 *param_1);
template<class... A> int FUN_10119da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119db0(undefined4 *param_1);
template<class... A> int FUN_10119db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119dc0(undefined4 *param_1);
template<class... A> int FUN_10119dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119dd0(undefined4 *param_1);
template<class... A> int FUN_10119dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119de0(undefined4 *param_1);
template<class... A> int FUN_10119de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119df0(undefined4 *param_1);
template<class... A> int FUN_10119df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119e00(undefined4 *param_1);
template<class... A> int FUN_10119e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a2a0(undefined4 *param_1);
template<class... A> int FUN_1011a2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a2b0(undefined4 *param_1);
template<class... A> int FUN_1011a2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a2c0(undefined4 *param_1);
template<class... A> int FUN_1011a2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a440(undefined4 *param_1);
template<class... A> int FUN_1011a440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a4e0(undefined4 *param_1);
template<class... A> int FUN_1011a4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a510(undefined4 *param_1);
template<class... A> int FUN_1011a510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a630(undefined4 *param_1);
template<class... A> int FUN_1011a630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a660(undefined4 *param_1);
template<class... A> int FUN_1011a660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a690(undefined4 *param_1);
template<class... A> int FUN_1011a690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a6d0(undefined4 *param_1);
template<class... A> int FUN_1011a6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a750(undefined4 *param_1);
template<class... A> int FUN_1011a750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a7a0(undefined4 *param_1);
template<class... A> int FUN_1011a7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a800(undefined4 *param_1);
template<class... A> int FUN_1011a800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a8a0(undefined4 *param_1);
template<class... A> int FUN_1011a8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a910(undefined4 *param_1);
template<class... A> int FUN_1011a910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ab00(undefined4 *param_1);
template<class... A> int FUN_1011ab00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ab50(undefined4 *param_1);
template<class... A> int FUN_1011ab50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ab90(undefined4 *param_1);
template<class... A> int FUN_1011ab90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011abe0(undefined4 *param_1);
template<class... A> int FUN_1011abe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ac80(undefined4 *param_1);
template<class... A> int FUN_1011ac80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011acc0(undefined4 *param_1);
template<class... A> int FUN_1011acc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ad80(undefined4 *param_1);
template<class... A> int FUN_1011ad80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011adb0(undefined4 *param_1);
template<class... A> int FUN_1011adb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011adf0(undefined4 *param_1);
template<class... A> int FUN_1011adf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ae30(undefined4 *param_1);
template<class... A> int FUN_1011ae30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011aea0(undefined4 *param_1);
template<class... A> int FUN_1011aea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011aef0(undefined4 *param_1);
template<class... A> int FUN_1011aef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011af20(undefined4 *param_1);
template<class... A> int FUN_1011af20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011af80(undefined4 *param_1);
template<class... A> int FUN_1011af80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b030(undefined4 *param_1);
template<class... A> int FUN_1011b030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b080(undefined4 *param_1);
template<class... A> int FUN_1011b080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b0d0(undefined4 *param_1);
template<class... A> int FUN_1011b0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b120(undefined4 *param_1);
template<class... A> int FUN_1011b120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b180(undefined4 *param_1);
template<class... A> int FUN_1011b180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b1d0(undefined4 *param_1);
template<class... A> int FUN_1011b1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b220(undefined4 *param_1);
template<class... A> int FUN_1011b220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b260(undefined4 *param_1);
template<class... A> int FUN_1011b260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b290(undefined4 *param_1);
template<class... A> int FUN_1011b290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b2f0(undefined4 *param_1);
template<class... A> int FUN_1011b2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b320(undefined4 *param_1);
template<class... A> int FUN_1011b320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b370(undefined4 *param_1);
template<class... A> int FUN_1011b370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b410(undefined4 *param_1);
template<class... A> int FUN_1011b410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b460(undefined4 *param_1);
template<class... A> int FUN_1011b460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b4f0(undefined4 *param_1);
template<class... A> int FUN_1011b4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b530(undefined4 *param_1);
template<class... A> int FUN_1011b530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b560(undefined4 *param_1);
template<class... A> int FUN_1011b560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b5e0(undefined4 *param_1);
template<class... A> int FUN_1011b5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b640(undefined4 *param_1);
template<class... A> int FUN_1011b640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b680(undefined4 *param_1);
template<class... A> int FUN_1011b680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b6e0(undefined4 *param_1);
template<class... A> int FUN_1011b6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b730(undefined4 *param_1);
template<class... A> int FUN_1011b730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b760(undefined4 *param_1);
template<class... A> int FUN_1011b760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b7b0(undefined4 *param_1);
template<class... A> int FUN_1011b7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b830(undefined4 *param_1);
template<class... A> int FUN_1011b830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b880(undefined4 *param_1);
template<class... A> int FUN_1011b880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b8c0(undefined4 *param_1);
template<class... A> int FUN_1011b8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b910(undefined4 *param_1);
template<class... A> int FUN_1011b910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b970(undefined4 *param_1);
template<class... A> int FUN_1011b970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ba20(undefined4 *param_1);
template<class... A> int FUN_1011ba20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ba50(undefined4 *param_1);
template<class... A> int FUN_1011ba50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ba80(undefined4 *param_1);
template<class... A> int FUN_1011ba80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bac0(undefined4 *param_1);
template<class... A> int FUN_1011bac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bb00(undefined4 *param_1);
template<class... A> int FUN_1011bb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bb30(undefined4 *param_1);
template<class... A> int FUN_1011bb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bb60(undefined4 *param_1);
template<class... A> int FUN_1011bb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bb90(undefined4 *param_1);
template<class... A> int FUN_1011bb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bbc0(undefined4 *param_1);
template<class... A> int FUN_1011bbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bca0(undefined4 *param_1);
template<class... A> int FUN_1011bca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1011bcf0(undefined4 param_1);
template<class... A> int FUN_1011bcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1011bd10(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1011bd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f590(int *param_1);
template<class... A> int FUN_1011f590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1011f5d0(void);
template<class... A> int FUN_1011f5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1011f760(void);
template<class... A> int FUN_1011f760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1011f770(void);
template<class... A> int FUN_1011f770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f8e0(undefined4 *param_1);
template<class... A> int FUN_1011f8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f8f0(undefined4 *param_1);
template<class... A> int FUN_1011f8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f900(undefined4 *param_1);
template<class... A> int FUN_1011f900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f910(undefined4 *param_1);
template<class... A> int FUN_1011f910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f930(undefined4 *param_1);
template<class... A> int FUN_1011f930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f940(undefined4 *param_1);
template<class... A> int FUN_1011f940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f950(undefined4 *param_1);
template<class... A> int FUN_1011f950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f960(undefined4 *param_1);
template<class... A> int FUN_1011f960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f970(undefined4 *param_1);
template<class... A> int FUN_1011f970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f980(undefined4 *param_1);
template<class... A> int FUN_1011f980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f990(undefined4 *param_1);
template<class... A> int FUN_1011f990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9a0(undefined4 *param_1);
template<class... A> int FUN_1011f9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9b0(undefined4 *param_1);
template<class... A> int FUN_1011f9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9c0(undefined4 *param_1);
template<class... A> int FUN_1011f9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9d0(undefined4 *param_1);
template<class... A> int FUN_1011f9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9e0(undefined4 *param_1);
template<class... A> int FUN_1011f9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9f0(undefined4 *param_1);
template<class... A> int FUN_1011f9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa00(undefined4 *param_1);
template<class... A> int FUN_1011fa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa10(undefined4 *param_1);
template<class... A> int FUN_1011fa10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa20(undefined4 *param_1);
template<class... A> int FUN_1011fa20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa30(undefined4 *param_1);
template<class... A> int FUN_1011fa30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa40(undefined4 *param_1);
template<class... A> int FUN_1011fa40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa50(undefined4 *param_1);
template<class... A> int FUN_1011fa50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa60(undefined4 *param_1);
template<class... A> int FUN_1011fa60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa70(undefined4 *param_1);
template<class... A> int FUN_1011fa70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa80(undefined4 *param_1);
template<class... A> int FUN_1011fa80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa90(undefined4 *param_1);
template<class... A> int FUN_1011fa90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011faa0(undefined4 *param_1);
template<class... A> int FUN_1011faa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fab0(undefined4 *param_1);
template<class... A> int FUN_1011fab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fac0(undefined4 *param_1);
template<class... A> int FUN_1011fac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fad0(undefined4 *param_1);
template<class... A> int FUN_1011fad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fae0(undefined4 *param_1);
template<class... A> int FUN_1011fae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb00(undefined4 *param_1);
template<class... A> int FUN_1011fb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb10(undefined4 *param_1);
template<class... A> int FUN_1011fb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb20(undefined4 *param_1);
template<class... A> int FUN_1011fb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb30(undefined4 *param_1);
template<class... A> int FUN_1011fb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb40(undefined4 *param_1);
template<class... A> int FUN_1011fb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb50(undefined4 *param_1);
template<class... A> int FUN_1011fb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb60(undefined4 *param_1);
template<class... A> int FUN_1011fb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb70(undefined4 *param_1);
template<class... A> int FUN_1011fb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb80(undefined4 *param_1);
template<class... A> int FUN_1011fb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb90(undefined4 *param_1);
template<class... A> int FUN_1011fb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fba0(undefined4 *param_1);
template<class... A> int FUN_1011fba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fbb0(undefined4 *param_1);
template<class... A> int FUN_1011fbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fbc0(undefined4 *param_1);
template<class... A> int FUN_1011fbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fbd0(undefined4 *param_1);
template<class... A> int FUN_1011fbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fbe0(undefined4 *param_1);
template<class... A> int FUN_1011fbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fbf0(undefined4 *param_1);
template<class... A> int FUN_1011fbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc00(undefined4 *param_1);
template<class... A> int FUN_1011fc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc10(undefined4 *param_1);
template<class... A> int FUN_1011fc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc20(undefined4 *param_1);
template<class... A> int FUN_1011fc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc30(undefined4 *param_1);
template<class... A> int FUN_1011fc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc40(undefined4 *param_1);
template<class... A> int FUN_1011fc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc50(undefined4 *param_1);
template<class... A> int FUN_1011fc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc60(undefined4 *param_1);
template<class... A> int FUN_1011fc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc70(undefined4 *param_1);
template<class... A> int FUN_1011fc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc80(undefined4 *param_1);
template<class... A> int FUN_1011fc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc90(undefined4 *param_1);
template<class... A> int FUN_1011fc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fca0(undefined4 *param_1);
template<class... A> int FUN_1011fca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fcb0(undefined4 *param_1);
template<class... A> int FUN_1011fcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fcc0(undefined4 *param_1);
template<class... A> int FUN_1011fcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fcd0(undefined4 *param_1);
template<class... A> int FUN_1011fcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fce0(undefined4 *param_1);
template<class... A> int FUN_1011fce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fcf0(undefined4 *param_1);
template<class... A> int FUN_1011fcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd00(undefined4 *param_1);
template<class... A> int FUN_1011fd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd10(undefined4 *param_1);
template<class... A> int FUN_1011fd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd20(undefined4 *param_1);
template<class... A> int FUN_1011fd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd30(undefined4 *param_1);
template<class... A> int FUN_1011fd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd40(undefined4 *param_1);
template<class... A> int FUN_1011fd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd50(undefined4 *param_1);
template<class... A> int FUN_1011fd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd60(undefined4 *param_1);
template<class... A> int FUN_1011fd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd80(undefined4 *param_1);
template<class... A> int FUN_1011fd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd90(undefined4 *param_1);
template<class... A> int FUN_1011fd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fda0(undefined4 *param_1);
template<class... A> int FUN_1011fda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fdb0(undefined4 *param_1);
template<class... A> int FUN_1011fdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fdc0(undefined4 *param_1);
template<class... A> int FUN_1011fdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fdd0(undefined4 *param_1);
template<class... A> int FUN_1011fdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fde0(undefined4 *param_1);
template<class... A> int FUN_1011fde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fdf0(undefined4 *param_1);
template<class... A> int FUN_1011fdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe00(undefined4 *param_1);
template<class... A> int FUN_1011fe00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe10(undefined4 *param_1);
template<class... A> int FUN_1011fe10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe20(undefined4 *param_1);
template<class... A> int FUN_1011fe20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe30(undefined4 *param_1);
template<class... A> int FUN_1011fe30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe40(undefined4 *param_1);
template<class... A> int FUN_1011fe40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe50(undefined4 *param_1);
template<class... A> int FUN_1011fe50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe60(undefined4 *param_1);
template<class... A> int FUN_1011fe60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe70(undefined4 *param_1);
template<class... A> int FUN_1011fe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe80(undefined4 *param_1);
template<class... A> int FUN_1011fe80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe90(undefined4 *param_1);
template<class... A> int FUN_1011fe90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fea0(undefined4 *param_1);
template<class... A> int FUN_1011fea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011feb0(undefined4 *param_1);
template<class... A> int FUN_1011feb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fec0(undefined4 *param_1);
template<class... A> int FUN_1011fec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fed0(undefined4 *param_1);
template<class... A> int FUN_1011fed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fee0(undefined4 *param_1);
template<class... A> int FUN_1011fee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fef0(undefined4 *param_1);
template<class... A> int FUN_1011fef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ff00(undefined4 *param_1);
template<class... A> int FUN_1011ff00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ff10(undefined4 *param_1);
template<class... A> int FUN_1011ff10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ff20(undefined4 *param_1);
template<class... A> int FUN_1011ff20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ff30(undefined4 *param_1);
template<class... A> int FUN_1011ff30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ffd0(undefined4 *param_1);
template<class... A> int FUN_1011ffd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ffe0(undefined4 *param_1);
template<class... A> int FUN_1011ffe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fff0(undefined4 *param_1);
template<class... A> int FUN_1011fff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120000(undefined4 *param_1);
template<class... A> int FUN_10120000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120070(undefined4 *param_1);
template<class... A> int FUN_10120070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120080(undefined4 *param_1);
template<class... A> int FUN_10120080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120090(undefined4 *param_1);
template<class... A> int FUN_10120090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101200a0(undefined4 *param_1);
template<class... A> int FUN_101200a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120120(undefined4 *param_1);
template<class... A> int FUN_10120120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120130(undefined4 *param_1);
template<class... A> int FUN_10120130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120140(undefined4 *param_1);
template<class... A> int FUN_10120140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120150(undefined4 *param_1);
template<class... A> int FUN_10120150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120160(undefined4 *param_1);
template<class... A> int FUN_10120160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120170(undefined4 *param_1);
template<class... A> int FUN_10120170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120180(undefined4 *param_1);
template<class... A> int FUN_10120180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120190(undefined4 *param_1);
template<class... A> int FUN_10120190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101201a0(undefined4 *param_1);
template<class... A> int FUN_101201a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101201b0(undefined4 *param_1);
template<class... A> int FUN_101201b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10122460(int *param_1);
template<class... A> int FUN_10122460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10122480(void);
template<class... A> int FUN_10122480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101224f0(undefined4 *param_1);
template<class... A> int FUN_101224f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10122510(undefined4 *param_1);
template<class... A> int FUN_10122510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10122530(undefined4 *param_1);
template<class... A> int FUN_10122530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10122550(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10122550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10124ea0(undefined4 *param_1);
template<class... A> int FUN_10124ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10124eb0(undefined4 *param_1);
template<class... A> int FUN_10124eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10124ec0(undefined4 *param_1);
template<class... A> int FUN_10124ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10124ed0(undefined4 *param_1);
template<class... A> int FUN_10124ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10124f40(int *param_1);
template<class... A> int FUN_10124f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10124f50(undefined4 *param_1);
template<class... A> int FUN_10124f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10124f60(int *param_1);
template<class... A> int FUN_10124f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10124f70(void *param_1,size_t param_2,void *param_3);
template<class... A> int FUN_10124f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10124fa0(void *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5);
template<class... A> int FUN_10124fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10124fe0(SCStr *param_1,SCStr *param_2);
template<class... A> int FUN_10124fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10125000(SCStr *param_1);
template<class... A> int __stdcall FUN_10125000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101296c0(int *param_1,int *param_2);
template<class... A> int FUN_101296c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101296f0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_101296f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10129700(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10129700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10129710(undefined4 *param_1);
template<class... A> int FUN_10129710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */void * __cdecl FUN_10129750(uint param_1);
template<class... A> int FUN_10129750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_101298d0(uint param_1,uint param_2,uint param_3);
template<class... A> int FUN_101298d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10129910(int param_1);
template<class... A> int FUN_10129910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10129920(int param_1);
template<class... A> int FUN_10129920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10129940(float *param_1);
template<class... A> int FUN_10129940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10129ad0(undefined4 param_1);
template<class... A> int FUN_10129ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10129ae0(uint param_1);
template<class... A> int FUN_10129ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d10(undefined4 param_1);
template<class... A> int FUN_10129d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d20(undefined4 param_1);
template<class... A> int FUN_10129d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d30(undefined4 param_1);
template<class... A> int FUN_10129d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d40(undefined4 param_1);
template<class... A> int FUN_10129d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d50(undefined4 param_1);
template<class... A> int FUN_10129d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d60(undefined4 param_1);
template<class... A> int FUN_10129d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d70(undefined4 param_1);
template<class... A> int FUN_10129d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d80(undefined4 param_1);
template<class... A> int FUN_10129d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d90(undefined4 param_1);
template<class... A> int FUN_10129d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129da0(undefined4 param_1);
template<class... A> int FUN_10129da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10129db0(int param_1);
template<class... A> int FUN_10129db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129dc0(undefined4 param_1);
template<class... A> int FUN_10129dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129dd0(undefined4 param_1);
template<class... A> int FUN_10129dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129de0(undefined4 param_1);
template<class... A> int FUN_10129de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129df0(undefined4 param_1);
template<class... A> int FUN_10129df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10129e80(undefined4 param_1);
template<class... A> int FUN_10129e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10129e90(int param_1);
template<class... A> int FUN_10129e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10129ea0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10129ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129eb0(undefined4 param_1);
template<class... A> int FUN_10129eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129ec0(undefined4 param_1);
template<class... A> int FUN_10129ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1012a030(undefined4 *param_1);
template<class... A> int FUN_1012a030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1012a040(undefined4 *param_1);
template<class... A> int FUN_1012a040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012a050(void);
template<class... A> int FUN_1012a050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012a060(void);
template<class... A> int FUN_1012a060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1012a070(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1012a070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1012a130(int param_1);
template<class... A> int FUN_1012a130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1012a140(undefined4 *param_1);
template<class... A> int FUN_1012a140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012a150(void);
template<class... A> int FUN_1012a150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1012a160(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1012a160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1012a3c0(undefined1 *param_1);
template<class... A> int FUN_1012a3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012a480(int param_1,int param_2,int param_3);
template<class... A> int FUN_1012a480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1012cb20(uint param_1);
template<class... A> int FUN_1012cb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1012cba0(uint param_1);
template<class... A> int FUN_1012cba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012d0f0(undefined1 *param_1,undefined1 *param_2);
template<class... A> int FUN_1012d0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1012d100(char *param_1);
template<class... A> int __stdcall FUN_1012d100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1012d300(int param_1);
template<class... A> int FUN_1012d300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1012da90(int param_1);
template<class... A> int FUN_1012da90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1012ddb0(void *param_1,void *param_2,size_t param_3);
template<class... A> int FUN_1012ddb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101307c0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_101307c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10130860(int param_1,int param_2);
template<class... A> int FUN_10130860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101308b0(int param_1,int param_2);
template<class... A> int FUN_101308b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130960(undefined4 *param_1);
template<class... A> int FUN_10130960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130970(undefined4 *param_1);
template<class... A> int FUN_10130970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130980(undefined4 *param_1);
template<class... A> int FUN_10130980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130990(undefined4 *param_1);
template<class... A> int FUN_10130990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309a0(undefined4 *param_1);
template<class... A> int FUN_101309a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309b0(undefined4 *param_1);
template<class... A> int FUN_101309b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309c0(undefined4 *param_1);
template<class... A> int FUN_101309c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309d0(undefined4 *param_1);
template<class... A> int FUN_101309d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309e0(undefined4 *param_1);
template<class... A> int FUN_101309e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309f0(undefined4 *param_1);
template<class... A> int FUN_101309f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a00(undefined4 *param_1);
template<class... A> int FUN_10130a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a10(undefined4 *param_1);
template<class... A> int FUN_10130a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a20(undefined4 *param_1);
template<class... A> int FUN_10130a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a30(undefined4 *param_1);
template<class... A> int FUN_10130a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a40(undefined4 *param_1);
template<class... A> int FUN_10130a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a50(undefined4 *param_1);
template<class... A> int FUN_10130a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a60(undefined4 *param_1);
template<class... A> int FUN_10130a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a70(undefined4 *param_1);
template<class... A> int FUN_10130a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a80(undefined4 *param_1);
template<class... A> int FUN_10130a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a90(undefined4 *param_1);
template<class... A> int FUN_10130a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130aa0(undefined4 *param_1);
template<class... A> int FUN_10130aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ab0(undefined4 *param_1);
template<class... A> int FUN_10130ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ac0(undefined4 *param_1);
template<class... A> int FUN_10130ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ad0(undefined4 *param_1);
template<class... A> int FUN_10130ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ae0(undefined4 *param_1);
template<class... A> int FUN_10130ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130af0(undefined4 *param_1);
template<class... A> int FUN_10130af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b00(undefined4 *param_1);
template<class... A> int FUN_10130b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b10(undefined4 *param_1);
template<class... A> int FUN_10130b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b20(undefined4 *param_1);
template<class... A> int FUN_10130b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b30(undefined4 *param_1);
template<class... A> int FUN_10130b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b40(undefined4 *param_1);
template<class... A> int FUN_10130b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b50(undefined4 *param_1);
template<class... A> int FUN_10130b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b60(undefined4 *param_1);
template<class... A> int FUN_10130b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b70(undefined4 *param_1);
template<class... A> int FUN_10130b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b80(undefined4 *param_1);
template<class... A> int FUN_10130b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b90(undefined4 *param_1);
template<class... A> int FUN_10130b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ba0(undefined4 *param_1);
template<class... A> int FUN_10130ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130bb0(undefined4 *param_1);
template<class... A> int FUN_10130bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130bc0(undefined4 *param_1);
template<class... A> int FUN_10130bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130bd0(undefined4 *param_1);
template<class... A> int FUN_10130bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130be0(undefined4 *param_1);
template<class... A> int FUN_10130be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130bf0(undefined4 *param_1);
template<class... A> int FUN_10130bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c00(undefined4 *param_1);
template<class... A> int FUN_10130c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c10(undefined4 *param_1);
template<class... A> int FUN_10130c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c20(undefined4 *param_1);
template<class... A> int FUN_10130c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c30(undefined4 *param_1);
template<class... A> int FUN_10130c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c40(undefined4 *param_1);
template<class... A> int FUN_10130c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c50(undefined4 *param_1);
template<class... A> int FUN_10130c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c60(undefined4 *param_1);
template<class... A> int FUN_10130c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c70(undefined4 *param_1);
template<class... A> int FUN_10130c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c80(undefined4 *param_1);
template<class... A> int FUN_10130c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c90(undefined4 *param_1);
template<class... A> int FUN_10130c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ca0(undefined4 *param_1);
template<class... A> int FUN_10130ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130cb0(undefined4 *param_1);
template<class... A> int FUN_10130cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130cc0(undefined4 *param_1);
template<class... A> int FUN_10130cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130cd0(undefined4 *param_1);
template<class... A> int FUN_10130cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ce0(undefined4 *param_1);
template<class... A> int FUN_10130ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130cf0(undefined4 *param_1);
template<class... A> int FUN_10130cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d00(undefined4 *param_1);
template<class... A> int FUN_10130d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d10(undefined4 *param_1);
template<class... A> int FUN_10130d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d20(undefined4 *param_1);
template<class... A> int FUN_10130d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d30(undefined4 *param_1);
template<class... A> int FUN_10130d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d40(undefined4 *param_1);
template<class... A> int FUN_10130d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d50(undefined4 *param_1);
template<class... A> int FUN_10130d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d60(undefined4 *param_1);
template<class... A> int FUN_10130d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d70(undefined4 *param_1);
template<class... A> int FUN_10130d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d80(undefined4 *param_1);
template<class... A> int FUN_10130d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d90(undefined4 *param_1);
template<class... A> int FUN_10130d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130da0(undefined4 *param_1);
template<class... A> int FUN_10130da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130db0(undefined4 *param_1);
template<class... A> int FUN_10130db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130dc0(undefined4 *param_1);
template<class... A> int FUN_10130dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130dd0(undefined4 *param_1);
template<class... A> int FUN_10130dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130de0(undefined4 *param_1);
template<class... A> int FUN_10130de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130df0(undefined4 *param_1);
template<class... A> int FUN_10130df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e00(undefined4 *param_1);
template<class... A> int FUN_10130e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e10(undefined4 *param_1);
template<class... A> int FUN_10130e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e20(undefined4 *param_1);
template<class... A> int FUN_10130e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e30(undefined4 *param_1);
template<class... A> int FUN_10130e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e40(undefined4 *param_1);
template<class... A> int FUN_10130e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e50(undefined4 *param_1);
template<class... A> int FUN_10130e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e60(undefined4 *param_1);
template<class... A> int FUN_10130e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e70(undefined4 *param_1);
template<class... A> int FUN_10130e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e80(undefined4 *param_1);
template<class... A> int FUN_10130e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e90(undefined4 *param_1);
template<class... A> int FUN_10130e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ea0(undefined4 *param_1);
template<class... A> int FUN_10130ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130eb0(undefined4 *param_1);
template<class... A> int FUN_10130eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ec0(undefined4 *param_1);
template<class... A> int FUN_10130ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ed0(undefined4 *param_1);
template<class... A> int FUN_10130ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ee0(undefined4 *param_1);
template<class... A> int FUN_10130ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ef0(undefined4 *param_1);
template<class... A> int FUN_10130ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f00(undefined4 *param_1);
template<class... A> int FUN_10130f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f10(undefined4 *param_1);
template<class... A> int FUN_10130f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f20(undefined4 *param_1);
template<class... A> int FUN_10130f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f30(undefined4 *param_1);
template<class... A> int FUN_10130f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f40(undefined4 *param_1);
template<class... A> int FUN_10130f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f50(undefined4 *param_1);
template<class... A> int FUN_10130f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f60(undefined4 *param_1);
template<class... A> int FUN_10130f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f70(undefined4 *param_1);
template<class... A> int FUN_10130f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f80(undefined4 *param_1);
template<class... A> int FUN_10130f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f90(undefined4 *param_1);
template<class... A> int FUN_10130f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130fa0(undefined4 *param_1);
template<class... A> int FUN_10130fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130fb0(undefined4 *param_1);
template<class... A> int FUN_10130fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130fc0(undefined4 *param_1);
template<class... A> int FUN_10130fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130fd0(undefined4 *param_1);
template<class... A> int FUN_10130fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130fe0(undefined4 *param_1);
template<class... A> int FUN_10130fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ff0(undefined4 *param_1);
template<class... A> int FUN_10130ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131000(undefined4 *param_1);
template<class... A> int FUN_10131000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131010(undefined4 *param_1);
template<class... A> int FUN_10131010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131020(undefined4 *param_1);
template<class... A> int FUN_10131020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131030(undefined4 *param_1);
template<class... A> int FUN_10131030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131040(undefined4 *param_1);
template<class... A> int FUN_10131040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131050(undefined4 *param_1);
template<class... A> int FUN_10131050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131060(undefined4 *param_1);
template<class... A> int FUN_10131060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131070(undefined4 *param_1);
template<class... A> int FUN_10131070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131080(undefined4 *param_1);
template<class... A> int FUN_10131080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131090(undefined4 *param_1);
template<class... A> int FUN_10131090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310a0(undefined4 *param_1);
template<class... A> int FUN_101310a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310b0(undefined4 *param_1);
template<class... A> int FUN_101310b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310c0(undefined4 *param_1);
template<class... A> int FUN_101310c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310d0(undefined4 *param_1);
template<class... A> int FUN_101310d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310e0(undefined4 *param_1);
template<class... A> int FUN_101310e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310f0(undefined4 *param_1);
template<class... A> int FUN_101310f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131100(undefined4 *param_1);
template<class... A> int FUN_10131100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131110(undefined4 *param_1);
template<class... A> int FUN_10131110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131120(undefined4 *param_1);
template<class... A> int FUN_10131120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131130(undefined4 *param_1);
template<class... A> int FUN_10131130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131140(undefined4 *param_1);
template<class... A> int FUN_10131140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131150(undefined4 *param_1);
template<class... A> int FUN_10131150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131160(undefined4 *param_1);
template<class... A> int FUN_10131160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131170(undefined4 *param_1);
template<class... A> int FUN_10131170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131180(undefined4 *param_1);
template<class... A> int FUN_10131180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131190(undefined4 *param_1);
template<class... A> int FUN_10131190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311a0(undefined4 *param_1);
template<class... A> int FUN_101311a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311b0(undefined4 *param_1);
template<class... A> int FUN_101311b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311c0(undefined4 *param_1);
template<class... A> int FUN_101311c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311d0(undefined4 *param_1);
template<class... A> int FUN_101311d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311e0(undefined4 *param_1);
template<class... A> int FUN_101311e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311f0(undefined4 *param_1);
template<class... A> int FUN_101311f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131200(undefined4 *param_1);
template<class... A> int FUN_10131200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131210(undefined4 *param_1);
template<class... A> int FUN_10131210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131220(undefined4 *param_1);
template<class... A> int FUN_10131220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10139370(void);
template<class... A> int FUN_10139370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10139380(void);
template<class... A> int FUN_10139380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10139390(void);
template<class... A> int FUN_10139390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1013a500(char *param_1);
template<class... A> int FUN_1013a500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a810(void);
template<class... A> int FUN_1013a810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_1013a820(float *param_1);
template<class... A> int FUN_1013a820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a830(void);
template<class... A> int FUN_1013a830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a840(void);
template<class... A> int FUN_1013a840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a850(void);
template<class... A> int FUN_1013a850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a860(void);
template<class... A> int FUN_1013a860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a870(void);
template<class... A> int FUN_1013a870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a880(void);
template<class... A> int FUN_1013a880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1013a890(void *param_1,void *param_2,size_t param_3);
template<class... A> int FUN_1013a890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1013b570(undefined4 *param_1);
template<class... A> int FUN_1013b570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1013b580(undefined4 *param_1);
template<class... A> int FUN_1013b580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1013b590(undefined4 *param_1);
template<class... A> int FUN_1013b590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f540(undefined4 *param_1);
template<class... A> int FUN_1013f540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f570(undefined4 *param_1);
template<class... A> int FUN_1013f570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f5a0(undefined4 *param_1);
template<class... A> int FUN_1013f5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f5d0(int *param_1);
template<class... A> int FUN_1013f5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f5f0(int *param_1);
template<class... A> int FUN_1013f5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f610(int *param_1);
template<class... A> int FUN_1013f610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101446d0(undefined4 param_1);
template<class... A> int FUN_101446d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101446e0(undefined4 param_1);
template<class... A> int FUN_101446e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10145ca0(int *param_1);
template<class... A> int FUN_10145ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147980(int param_1);
template<class... A> int FUN_10147980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147a00(int param_1);
template<class... A> int FUN_10147a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147a10(int param_1);
template<class... A> int FUN_10147a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147b10(int param_1);
template<class... A> int FUN_10147b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147b20(int param_1);
template<class... A> int FUN_10147b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147b30(int param_1);
template<class... A> int FUN_10147b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147b50(int param_1);
template<class... A> int FUN_10147b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147ba0(int param_1);
template<class... A> int FUN_10147ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147bd0(int param_1);
template<class... A> int FUN_10147bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147c10(int param_1);
template<class... A> int FUN_10147c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147c90(int param_1);
template<class... A> int FUN_10147c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147ce0(int param_1);
template<class... A> int FUN_10147ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147eb0(int param_1);
template<class... A> int FUN_10147eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147ee0(int param_1);
template<class... A> int FUN_10147ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147f00(int param_1);
template<class... A> int FUN_10147f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147f30(int param_1);
template<class... A> int FUN_10147f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147fb0(int param_1);
template<class... A> int FUN_10147fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147fd0(int param_1);
template<class... A> int FUN_10147fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148070(int param_1);
template<class... A> int FUN_10148070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148080(int param_1);
template<class... A> int FUN_10148080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101480a0(int param_1);
template<class... A> int FUN_101480a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101480c0(int param_1);
template<class... A> int FUN_101480c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148110(int param_1);
template<class... A> int FUN_10148110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148140(int param_1);
template<class... A> int FUN_10148140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148150(int param_1);
template<class... A> int FUN_10148150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148190(int param_1);
template<class... A> int FUN_10148190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148220(int param_1);
template<class... A> int FUN_10148220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148250(int param_1);
template<class... A> int FUN_10148250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148280(int param_1);
template<class... A> int FUN_10148280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101482b0(int param_1);
template<class... A> int FUN_101482b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101482f0(int param_1);
template<class... A> int FUN_101482f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148320(int param_1);
template<class... A> int FUN_10148320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148350(int param_1);
template<class... A> int FUN_10148350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148370(int param_1);
template<class... A> int FUN_10148370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148380(int param_1);
template<class... A> int FUN_10148380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101483c0(int param_1);
template<class... A> int FUN_101483c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101483d0(int param_1);
template<class... A> int FUN_101483d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148400(int param_1);
template<class... A> int FUN_10148400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148480(int param_1);
template<class... A> int FUN_10148480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101484b0(int param_1);
template<class... A> int FUN_101484b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148520(int param_1);
template<class... A> int FUN_10148520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148540(int param_1);
template<class... A> int FUN_10148540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148550(int param_1);
template<class... A> int FUN_10148550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101485b0(int param_1);
template<class... A> int FUN_101485b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101485f0(int param_1);
template<class... A> int FUN_101485f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148610(int param_1);
template<class... A> int FUN_10148610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148650(int param_1);
template<class... A> int FUN_10148650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148680(int param_1);
template<class... A> int FUN_10148680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148690(int param_1);
template<class... A> int FUN_10148690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101486c0(int param_1);
template<class... A> int FUN_101486c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148720(int param_1);
template<class... A> int FUN_10148720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148750(int param_1);
template<class... A> int FUN_10148750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148770(int param_1);
template<class... A> int FUN_10148770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101487a0(int param_1);
template<class... A> int FUN_101487a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101487e0(int param_1);
template<class... A> int FUN_101487e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148870(int param_1);
template<class... A> int FUN_10148870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148880(int param_1);
template<class... A> int FUN_10148880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148890(int param_1);
template<class... A> int FUN_10148890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101488b0(int param_1);
template<class... A> int FUN_101488b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101488d0(int param_1);
template<class... A> int FUN_101488d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101488e0(int param_1);
template<class... A> int FUN_101488e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101488f0(int param_1);
template<class... A> int FUN_101488f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148900(int param_1);
template<class... A> int FUN_10148900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148910(int param_1);
template<class... A> int FUN_10148910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101489d0(int param_1);
template<class... A> int FUN_101489d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a1e90(void);
template<class... A> int FUN_101a1e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 * __fastcall FUN_101a1fd0(undefined2 *param_1);
template<class... A> int FUN_101a1fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a2020(int param_1);
template<class... A> int FUN_101a2020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a21c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101a21c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a2670(undefined4 *param_1);
template<class... A> int FUN_101a2670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a2680(undefined4 param_1);
template<class... A> int FUN_101a2680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a2810(undefined4 param_1,int *param_2,int *param_3);
template<class... A> int FUN_101a2810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a2840(undefined4 param_1,int *param_2,int *param_3);
template<class... A> int FUN_101a2840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a2870(undefined4 param_1,int *param_2,int *param_3);
template<class... A> int FUN_101a2870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a29b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101a29b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a29d0(undefined4 param_1);
template<class... A> int FUN_101a29d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a29e0(undefined4 param_1);
template<class... A> int FUN_101a29e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a29f0(undefined4 param_1);
template<class... A> int FUN_101a29f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a2a00(undefined4 param_1);
template<class... A> int FUN_101a2a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_101a2a10(int *param_1,int *param_2);
template<class... A> int FUN_101a2a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a2a30(undefined4 param_1);
template<class... A> int FUN_101a2a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a2a40(undefined4 param_1);
template<class... A> int FUN_101a2a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a2a90(undefined4 *param_1);
template<class... A> int FUN_101a2a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a2af0(undefined4 *param_1);
template<class... A> int FUN_101a2af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_101a3110(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101a3110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_101a3250(uint param_1);
template<class... A> int FUN_101a3250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * FUN_101a3280(undefined1 *param_1);
template<class... A> int FUN_101a3280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a3390(undefined4 param_1);
template<class... A> int FUN_101a3390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a33a0(undefined4 param_1);
template<class... A> int FUN_101a33a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a33b0(undefined4 param_1);
template<class... A> int FUN_101a33b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a33c0(undefined4 param_1);
template<class... A> int FUN_101a33c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a33d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101a33d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a33e0(undefined4 *param_1);
template<class... A> int FUN_101a33e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a36e0(undefined4 *param_1);
template<class... A> int FUN_101a36e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a36f0(int param_1);
template<class... A> int FUN_101a36f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a3740(int *param_1);
template<class... A> int FUN_101a3740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a3b20(undefined4 *param_1);
template<class... A> int FUN_101a3b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a3b30(int *param_1);
template<class... A> int FUN_101a3b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a3b50(int param_1);
template<class... A> int FUN_101a3b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a3b60(int param_1);
template<class... A> int FUN_101a3b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a3cb0(int param_1);
template<class... A> int FUN_101a3cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101a4230(int param_1);
template<class... A> int FUN_101a4230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a4750(int param_1);
template<class... A> int FUN_101a4750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a4770(undefined4 *param_1);
template<class... A> int FUN_101a4770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a4780(int param_1);
template<class... A> int FUN_101a4780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a4c40(undefined4 *param_1);
template<class... A> int FUN_101a4c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a4c60(undefined4 *param_1);
template<class... A> int FUN_101a4c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a4c80(int param_1);
template<class... A> int FUN_101a4c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a4d10(int param_1);
template<class... A> int FUN_101a4d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a4e60(void);
template<class... A> int FUN_101a4e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a4e70(void);
template<class... A> int FUN_101a4e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a5290(char *param_1,char *param_2,char param_3);
template<class... A> int FUN_101a5290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_101a5370(SCStr *param_1,char *param_2,uint param_3,uint param_4,char param_5);
template<class... A> int FUN_101a5370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a5700(int param_1);
template<class... A> int FUN_101a5700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_101a5d20(undefined4 *param_1);
template<class... A> int FUN_101a5d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */char * __cdecl FUN_101a5d30(char *_Str,int _Val);
template<class... A> int FUN_101a5d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */char * __cdecl FUN_101a64a0(char *_Str,char *_SubStr);
template<class... A> int FUN_101a64a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6c90(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101a6c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_101a6cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_101a6d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5);
template<class... A> int FUN_101a6d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a6d90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101a6d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a6db0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101a6db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_101a6e30(int *param_1,int *param_2);
template<class... A> int FUN_101a6e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_101a6e50(int *param_1,int *param_2);
template<class... A> int FUN_101a6e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a6e70(void);
template<class... A> int FUN_101a6e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a6e80(void *param_1,int param_2,int param_3);
template<class... A> int FUN_101a6e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6eb0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101a6eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6ee0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101a6ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a6f10(void);
template<class... A> int FUN_101a6f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a6f20(void);
template<class... A> int FUN_101a6f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a72d0(undefined4 *param_1);
template<class... A> int FUN_101a72d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a72e0(undefined4 *param_1);
template<class... A> int FUN_101a72e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a72f0(undefined4 *param_1);
template<class... A> int FUN_101a72f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a7300(undefined4 *param_1);
template<class... A> int FUN_101a7300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a76b0(undefined4 *param_1,undefined4 *param_2,code *param_3);
template<class... A> int FUN_101a76b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_101a7760(int *param_1,int *param_2);
template<class... A> int FUN_101a7760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a77f0(int param_1,int param_2,code *param_3);
template<class... A> int FUN_101a77f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a7910(int param_1,int param_2);
template<class... A> int FUN_101a7910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a79d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4);
template<class... A> int FUN_101a79d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a7a40(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_101a7a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a7a80(void *param_1,int param_2,int param_3);
template<class... A> int FUN_101a7a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a7ab0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101a7ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a7ae0(int param_1);
template<class... A> int FUN_101a7ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a7f10(undefined4 param_1);
template<class... A> int FUN_101a7f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_101a7f20(undefined1 param_1);
template<class... A> int FUN_101a7f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a80e0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 code *param_5);
template<class... A> int FUN_101a80e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8120(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4);
template<class... A> int FUN_101a8120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8160(undefined4 *param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_101a8160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a81b0(undefined4 *param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_101a81b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a8200(int param_1);
template<class... A> int FUN_101a8200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8210(int param_1,int param_2,int param_3,undefined4 *param_4,code *param_5);
template<class... A> int FUN_101a8210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8280(int param_1,int param_2,int param_3,int *param_4);
template<class... A> int FUN_101a8280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a82e0(undefined4 param_1);
template<class... A> int FUN_101a82e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a82f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101a82f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8300(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101a8300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8310(undefined4 *param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_101a8310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8380(undefined4 *param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_101a8380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8970(undefined4 param_1);
template<class... A> int FUN_101a8970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8980(undefined4 param_1);
template<class... A> int FUN_101a8980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101a8990(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101a8990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101a89c0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101a89c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a89f0(undefined4 param_1);
template<class... A> int FUN_101a89f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8a00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101a8a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8a10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101a8a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8a20(void);
template<class... A> int FUN_101a8a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8a90(undefined4 param_1);
template<class... A> int FUN_101a8a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8aa0(undefined4 param_1);
template<class... A> int FUN_101a8aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8ab0(undefined4 param_1);
template<class... A> int FUN_101a8ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8ac0(undefined4 param_1);
template<class... A> int FUN_101a8ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8ad0(undefined4 param_1);
template<class... A> int FUN_101a8ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101a8ae0(void);
template<class... A> int FUN_101a8ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101a8af0(void);
template<class... A> int FUN_101a8af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  FUN_101a8b00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101a8b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8b20(undefined4 param_1);
template<class... A> int FUN_101a8b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8b30(int param_1,int param_2);
template<class... A> int FUN_101a8b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_101a8b60(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_101a8b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_101a8b90(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_101a8b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8bc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101a8bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8be0(undefined4 *param_1,int *param_2,int *param_3);
template<class... A> int FUN_101a8be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8c60(undefined4 *param_1,int *param_2,int *param_3);
template<class... A> int FUN_101a8c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8ce0(undefined4 *param_1);
template<class... A> int FUN_101a8ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8d30(undefined4 *param_1);
template<class... A> int FUN_101a8d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8d60(undefined4 *param_1);
template<class... A> int FUN_101a8d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8e30(undefined4 *param_1);
template<class... A> int FUN_101a8e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8e50(undefined4 *param_1);
template<class... A> int FUN_101a8e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a8e70(undefined4 param_1);
template<class... A> int FUN_101a8e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a8e80(undefined4 param_1);
template<class... A> int FUN_101a8e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8e90(undefined4 *param_1);
template<class... A> int FUN_101a8e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8eb0(undefined4 *param_1);
template<class... A> int FUN_101a8eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8ed0(undefined4 *param_1);
template<class... A> int FUN_101a8ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8ee0(undefined4 *param_1);
template<class... A> int FUN_101a8ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a8fc0(undefined4 *param_1);
template<class... A> int FUN_101a8fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a9280(undefined4 *param_1);
template<class... A> int FUN_101a9280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9340(undefined4 *param_1);
template<class... A> int FUN_101a9340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101a9350(int *param_1);
template<class... A> int FUN_101a9350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9360(undefined4 *param_1);
template<class... A> int FUN_101a9360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9370(undefined4 *param_1);
template<class... A> int FUN_101a9370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  __stdcall FUN_101a98e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101a98e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a98f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101a98f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9900(undefined4 param_1);
template<class... A> int FUN_101a9900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9910(undefined4 param_1);
template<class... A> int FUN_101a9910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9920(undefined4 param_1);
template<class... A> int FUN_101a9920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9930(undefined4 param_1);
template<class... A> int FUN_101a9930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9940(undefined4 param_1);
template<class... A> int FUN_101a9940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9950(undefined4 param_1);
template<class... A> int FUN_101a9950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9960(undefined4 param_1);
template<class... A> int FUN_101a9960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9970(undefined4 param_1);
template<class... A> int FUN_101a9970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9980(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101a9980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9990(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101a9990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_101a9a90(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101a9a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_101a9ac0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101a9ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9af0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101a9af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9b20(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101a9b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9b50(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101a9b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9b80(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101a9b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9bb0(undefined4 *param_1);
template<class... A> int FUN_101a9bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  __stdcall FUN_101a9bc0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_101a9bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a9d60(int *param_1);
template<class... A> int FUN_101a9d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a9d70(int *param_1);
template<class... A> int FUN_101a9d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a9d80(int param_1);
template<class... A> int FUN_101a9d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a9d90(undefined4 *param_1);
template<class... A> int FUN_101a9d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a9da0(undefined4 *param_1);
template<class... A> int FUN_101a9da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_101a9ed0(undefined4 *param_1);
template<class... A> int FUN_101a9ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9f50(int param_1,int param_2);
template<class... A> int FUN_101a9f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9fa0(int param_1,int param_2);
template<class... A> int FUN_101a9fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9ff0(undefined4 *param_1);
template<class... A> int FUN_101a9ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101aa0c0(void);
template<class... A> int FUN_101aa0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101aa0d0(void);
template<class... A> int FUN_101aa0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101aa0e0(void);
template<class... A> int FUN_101aa0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101aa0f0(void);
template<class... A> int FUN_101aa0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101aa100(void);
template<class... A> int FUN_101aa100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101aa110(void);
template<class... A> int FUN_101aa110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101aa120(undefined4 *param_1);
template<class... A> int FUN_101aa120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101aa3d0(undefined4 *param_1);
template<class... A> int FUN_101aa3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101aa400(undefined4 *param_1);
template<class... A> int FUN_101aa400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101aa520(int *param_1);
template<class... A> int FUN_101aa520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aa5a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101aa5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aa670(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_101aa670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aa690(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101aa690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aa6b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_101aa6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101aa6d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101aa6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101aa6e0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101aa6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101aa6f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101aa6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_101aad70(undefined4 *param_1);
template<class... A> int __stdcall FUN_101aad70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_101aad80(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101aad80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101aada0(void);
template<class... A> int FUN_101aada0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101aadb0(void);
template<class... A> int FUN_101aadb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab3c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101ab3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab3d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101ab3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab3e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101ab3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab3f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101ab3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101ab400(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101ab400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab430(void);
template<class... A> int FUN_101ab430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab440(void);
template<class... A> int FUN_101ab440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab450(void);
template<class... A> int FUN_101ab450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab7e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101ab7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101ab8a0(uint param_1);
template<class... A> int FUN_101ab8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab8c0(undefined4 param_1);
template<class... A> int FUN_101ab8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab8d0(undefined4 *param_1);
template<class... A> int FUN_101ab8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab8e0(undefined4 *param_1);
template<class... A> int FUN_101ab8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab8f0(undefined4 param_1);
template<class... A> int FUN_101ab8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab900(void);
template<class... A> int FUN_101ab900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab910(void);
template<class... A> int FUN_101ab910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab920(undefined4 param_1);
template<class... A> int FUN_101ab920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101ab930(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101ab930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab960(undefined4 param_1);
template<class... A> int FUN_101ab960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab970(undefined4 param_1);
template<class... A> int FUN_101ab970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab980(undefined4 param_1);
template<class... A> int FUN_101ab980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab990(undefined4 param_1);
template<class... A> int FUN_101ab990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab9a0(undefined4 param_1);
template<class... A> int FUN_101ab9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab9b0(undefined4 param_1);
template<class... A> int FUN_101ab9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab9c0(undefined4 param_1);
template<class... A> int FUN_101ab9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab9d0(undefined4 param_1);
template<class... A> int FUN_101ab9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101aba10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101aba10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101abaa0(void);
template<class... A> int FUN_101abaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abd80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101abd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abda0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101abda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abdc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101abdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abe60(undefined4 param_1);
template<class... A> int FUN_101abe60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abe70(undefined4 param_1);
template<class... A> int FUN_101abe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abe80(undefined4 param_1);
template<class... A> int FUN_101abe80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abe90(undefined4 param_1);
template<class... A> int FUN_101abe90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abea0(undefined4 param_1);
template<class... A> int FUN_101abea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abeb0(undefined4 param_1);
template<class... A> int FUN_101abeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abec0(undefined4 param_1);
template<class... A> int FUN_101abec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abed0(undefined4 param_1);
template<class... A> int FUN_101abed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abee0(undefined4 param_1);
template<class... A> int FUN_101abee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abef0(void);
template<class... A> int FUN_101abef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf00(void);
template<class... A> int FUN_101abf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf10(void);
template<class... A> int FUN_101abf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf20(void);
template<class... A> int FUN_101abf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf30(void);
template<class... A> int FUN_101abf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf40(void);
template<class... A> int FUN_101abf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf50(void);
template<class... A> int FUN_101abf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf60(void);
template<class... A> int FUN_101abf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf70(void);
template<class... A> int FUN_101abf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf80(void);
template<class... A> int FUN_101abf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ac200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101ac200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ac320(undefined4 *param_1);
template<class... A> int FUN_101ac320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ac370(undefined4 *param_1);
template<class... A> int FUN_101ac370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ac550(undefined4 *param_1);
template<class... A> int FUN_101ac550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ac570(undefined4 *param_1);
template<class... A> int FUN_101ac570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ac980(undefined4 *param_1);
template<class... A> int FUN_101ac980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aca30(undefined4 *param_1);
template<class... A> int FUN_101aca30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aca80(undefined4 *param_1);
template<class... A> int FUN_101aca80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101acaa0(undefined4 *param_1);
template<class... A> int FUN_101acaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101acac0(undefined4 param_1);
template<class... A> int FUN_101acac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101acc70(undefined4 *param_1);
template<class... A> int FUN_101acc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101acc90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101acc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101acce0(undefined4 *param_1);
template<class... A> int FUN_101acce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101accf0(undefined4 *param_1);
template<class... A> int FUN_101accf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad080(undefined4 *param_1);
template<class... A> int FUN_101ad080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad090(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101ad090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad0a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101ad0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad0b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101ad0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad0c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101ad0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad0d0(undefined4 *param_1);
template<class... A> int FUN_101ad0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad0e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_101ad0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad990(undefined4 *param_1);
template<class... A> int FUN_101ad990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101ada00(undefined4 *param_1);
template<class... A> int FUN_101ada00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101aebe0(void);
template<class... A> int FUN_101aebe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101aeca0(int param_1);
template<class... A> int FUN_101aeca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101aefc0(undefined4 *param_1);
template<class... A> int FUN_101aefc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101aefe0(undefined4 *param_1);
template<class... A> int FUN_101aefe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101af010(undefined4 *param_1);
template<class... A> int FUN_101af010(A...);
extern int ghidra_vftable_exception;

// Reference entry 10116540; body size 19 bytes.
extern int __stdcall thunk_FUN_101a31e0(int a1,int a2);
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
int thunk_FUN_1148a4d2();
int FUN_100529f0();
int FUN_10024f14();
int FUN_1003d73f();
int FUN_10045827();
int FUN_1148cdf9();
int FUN_1148cdff();
#line 1 "ENTRY_10116540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10116540(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10116560; body size 25 bytes.
#line 1 "ENTRY_10116560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10116560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10116580; body size 25 bytes.
#line 1 "ENTRY_10116580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10116580(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101165a0; body size 18 bytes.
#line 1 "ENTRY_101165a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101165a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101165c0; body size 25 bytes.
#line 1 "ENTRY_101165c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101165c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101165e0; body size 25 bytes.
#line 1 "ENTRY_101165e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101165e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10116690; body size 13 bytes.
#line 1 "ENTRY_10116690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10116690(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101166a0; body size 5 bytes.
#line 1 "ENTRY_101166a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101166a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101166b0; body size 5 bytes.
#line 1 "ENTRY_101166b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101166b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101166c0; body size 13 bytes.
#line 1 "ENTRY_101166c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101166c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 101166d0; body size 22 bytes.
#line 1 "ENTRY_101166d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101166d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101166f0; body size 19 bytes.
#line 1 "ENTRY_101166f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101166f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101169b0; body size 26 bytes.
#line 1 "ENTRY_101169b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101169b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 101169d0; body size 26 bytes.
#line 1 "ENTRY_101169d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101169d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10116ad0; body size 26 bytes.
#line 1 "ENTRY_10116ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10116ad0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10116af0; body size 5 bytes.
#line 1 "ENTRY_10116af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10116af0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10116b00; body size 5 bytes.
#line 1 "ENTRY_10116b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10116b00(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10116cd0; body size 12 bytes.
#line 1 "ENTRY_10116cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10116cd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->hash();
  return;
}


// Reference entry 10116ce0; body size 21 bytes.
#line 1 "ENTRY_10116ce0"

__declspec(naked) void FUN_10116ce0(void)

{
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm call LAB_10049a94
  __asm test al, al
  __asm sete al
  __asm ret 8
}




// Reference entry 10116d00; body size 3 bytes.
#line 1 "ENTRY_10116d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d00(void)

{
  return (undefined4)(0);
}


// Reference entry 10116d10; body size 3 bytes.
#line 1 "ENTRY_10116d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d10(void)

{
  return (undefined4)(0);
}


// Reference entry 10116d20; body size 3 bytes.
#line 1 "ENTRY_10116d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d20(void)

{
  return (undefined4)(0);
}


// Reference entry 10116d30; body size 3 bytes.
#line 1 "ENTRY_10116d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d30(void)

{
  return (undefined4)(0);
}


// Reference entry 10116d40; body size 3 bytes.
#line 1 "ENTRY_10116d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 FUN_10116d40(void)

{
  return (float10)((float10)0);
}


// Reference entry 10116d50; body size 11 bytes.
#line 1 "ENTRY_10116d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116d50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10116d60; body size 3 bytes.
#line 1 "ENTRY_10116d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d60(void)

{
  return (undefined4)(0);
}


// Reference entry 10116d70; body size 3 bytes.
#line 1 "ENTRY_10116d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d70(void)

{
  return (undefined4)(0);
}


// Reference entry 10116d80; body size 3 bytes.
#line 1 "ENTRY_10116d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d80(void)

{
  return (undefined4)(0);
}


// Reference entry 10116d90; body size 3 bytes.
#line 1 "ENTRY_10116d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d90(void)

{
  return (undefined4)(0);
}


// Reference entry 10116da0; body size 3 bytes.
#line 1 "ENTRY_10116da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116da0(void)

{
  return (undefined4)(0);
}


// Reference entry 10116db0; body size 3 bytes.
#line 1 "ENTRY_10116db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116db0(void)

{
  return (undefined4)(0);
}


// Reference entry 10116dc0; body size 3 bytes.
#line 1 "ENTRY_10116dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116dc0(void)

{
  return (undefined4)(0);
}


// Reference entry 10116dd0; body size 3 bytes.
#line 1 "ENTRY_10116dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116dd0(void)

{
  return (undefined4)(0);
}


// Reference entry 10116de0; body size 3 bytes.
#line 1 "ENTRY_10116de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116de0(void)

{
  return (undefined4)(0);
}


// Reference entry 10116df0; body size 3 bytes.
#line 1 "ENTRY_10116df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116df0(void)

{
  return (undefined4)(0);
}


// Reference entry 10116e00; body size 3 bytes.
#line 1 "ENTRY_10116e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116e00(void)

{
  return (undefined4)(0);
}


// Reference entry 10116e10; body size 3 bytes.
#line 1 "ENTRY_10116e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116e10(void)

{
  return (undefined4)(0);
}


// Reference entry 10116e20; body size 3 bytes.
#line 1 "ENTRY_10116e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116e20(void)

{
  return (undefined4)(0);
}


// Reference entry 10116e30; body size 3 bytes.
#line 1 "ENTRY_10116e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116e30(void)

{
  return (undefined4)(0);
}


// Reference entry 10116e40; body size 3 bytes.
#line 1 "ENTRY_10116e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10116e40(void)

{
  return (undefined1)(0);
}


// Reference entry 10116e50; body size 3 bytes.
#line 1 "ENTRY_10116e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116e50(void)

{
  return;
}


// Reference entry 10116e60; body size 3 bytes.
#line 1 "ENTRY_10116e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116e60(void)

{
  return;
}


// Reference entry 10116e70; body size 69 bytes.
#line 1 "ENTRY_10116e70"

__declspec(naked) void FUN_10116e70(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x1000
  __asm _emit 0x72 __asm _emit 0x2a
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe LAB_10070f3b
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0a
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x09
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_10024f14
  __asm xor eax, eax
  __asm ret
}




// Reference entry 10116ed0; body size 46 bytes.
#line 1 "ENTRY_10116ed0"

__declspec(naked) void FUN_10116ed0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe LAB_10070f3b
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0a
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}




// Reference entry 10116f10; body size 13 bytes.
#line 1 "ENTRY_10116f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116f10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10116f20; body size 13 bytes.
#line 1 "ENTRY_10116f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116f20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10116f30; body size 13 bytes.
#line 1 "ENTRY_10116f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116f30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10116f40; body size 13 bytes.
#line 1 "ENTRY_10116f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116f40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10116f50; body size 5 bytes.
#line 1 "ENTRY_10116f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116f50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10116f60; body size 55 bytes.
#line 1 "ENTRY_10116f60"

__declspec(naked) void FUN_10116f60(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x1a
  __asm mov eax, dword ptr [esp + 4]
  __asm add ecx, 0x23
  __asm mov edx, dword ptr [eax - 4]
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x76 __asm _emit 0x0a
  __asm jmp dword ptr [LAB_122fc888]
  __asm mov edx, dword ptr [esp + 4]
  __asm mov dword ptr [esp + 8], ecx
  __asm mov dword ptr [esp + 4], edx
  __asm jmp LAB_100131d8
}




// Reference entry 10116fb0; body size 3 bytes.
#line 1 "ENTRY_10116fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116fb0(void)

{
  return;
}


// Reference entry 10116fc0; body size 3 bytes.
#line 1 "ENTRY_10116fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116fc0(void)

{
  return;
}


// Reference entry 10116fd0; body size 3 bytes.
#line 1 "ENTRY_10116fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116fd0(void)

{
  return;
}


// Reference entry 10116fe0; body size 18 bytes.
#line 1 "ENTRY_10116fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10116fe0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10117150; body size 15 bytes.
#line 1 "ENTRY_10117150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117150(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0xc);
  return;
}


// Reference entry 101171f0; body size 5 bytes.
#line 1 "ENTRY_101171f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101171f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117200; body size 19 bytes.
#line 1 "ENTRY_10117200"

__declspec(naked) void FUN_10117200(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja LAB_10070f3b
  __asm shl eax, 2
  __asm ret
}




// Reference entry 10117220; body size 22 bytes.
#line 1 "ENTRY_10117220"

__declspec(naked) void FUN_10117220(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x15555555
  __asm ja LAB_10070f3b
  __asm lea eax, [eax + eax*2]
  __asm shl eax, 2
  __asm ret
}




// Reference entry 10117240; body size 5 bytes.
#line 1 "ENTRY_10117240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117250; body size 7 bytes.
#line 1 "ENTRY_10117250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117250(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10117260; body size 3 bytes.
#line 1 "ENTRY_10117260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117260(void)

{
  return;
}


// Reference entry 10117270; body size 3 bytes.
#line 1 "ENTRY_10117270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117270(void)

{
  return;
}


// Reference entry 10117280; body size 186 bytes.
#line 1 "ENTRY_10117280"

__declspec(naked) void FUN_10117280(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp ebx, 0x7fffffff
  __asm ja LAB_10117335
  __asm push ebp
  __asm mov ebp, dword ptr [edi + 0x14]
  __asm push esi
  __asm mov esi, ebx
  __asm or esi, 0xf
  __asm cmp esi, 0x7fffffff
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov esi, 0x7fffffff
  __asm _emit 0xeb __asm _emit 0x1e
  __asm mov ecx, ebp
  __asm mov eax, 0x7fffffff
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm sub eax, ecx
  __asm cmp ebp, eax
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov esi, 0x7fffffff
  __asm _emit 0xeb __asm _emit 0x08
  __asm lea eax, [ecx + ebp]
  __asm cmp esi, eax
  __asm cmovb esi, eax
  __asm lea eax, [esi + 1]
  __asm mov ecx, edi
  __asm push eax
  __asm call LAB_1000b73a
  __asm push ebx
  __asm push dword ptr [esp + 0x20]
  __asm mov dword ptr [esp + 0x1c], eax
  __asm push eax
  __asm mov dword ptr [edi + 0x10], ebx
  __asm mov dword ptr [edi + 0x14], esi
  __asm call LAB_1148cded
  __asm mov esi, dword ptr [esp + 0x20]
  __asm add esp, 0xc
  __asm mov byte ptr [esi + ebx], 0
  __asm cmp ebp, 0x10
  __asm _emit 0x72 __asm _emit 0x29
  __asm mov eax, dword ptr [edi]
  __asm lea ecx, [ebp + 1]
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x17
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov dword ptr [edi], esi
  __asm mov eax, edi
  __asm pop esi
  __asm pop ebp
  __asm pop edi
  __asm pop ebx
  __asm ret 0xc
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_10046a33
}




// Reference entry 10117370; body size 268 bytes.
#line 1 "ENTRY_10117370"

__declspec(naked) void FUN_10117370(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, 0x7fffffff
  __asm mov eax, ecx
  __asm mov ebx, dword ptr [esi + 0x10]
  __asm sub eax, ebx
  __asm cmp eax, edx
  __asm jb LAB_10117477
  __asm mov eax, dword ptr [esi + 0x14]
  __asm add edx, ebx
  __asm push edi
  __asm mov edi, edx
  __asm mov dword ptr [esp + 0xc], edx
  __asm or edi, 0xf
  __asm mov dword ptr [esp + 0x14], eax
  __asm cmp edi, ecx
  __asm _emit 0x76 __asm _emit 0x04
  __asm mov edi, ecx
  __asm _emit 0xeb __asm _emit 0x18
  __asm mov edx, eax
  __asm _emit 0xd1 __asm _emit 0xea
  __asm sub ecx, edx
  __asm cmp eax, ecx
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov edi, 0x7fffffff
  __asm _emit 0xeb __asm _emit 0x07
  __asm add eax, edx
  __asm cmp edi, eax
  __asm cmovb edi, eax
  __asm push ebp
  __asm lea eax, [edi + 1]
  __asm mov ecx, esi
  __asm push eax
  __asm call LAB_1000b73a
  __asm mov ebp, eax
  __asm mov dword ptr [esi + 0x14], edi
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 0x10], eax
  __asm mov eax, dword ptr [esp + 0x24]
  __asm lea edi, [ebx + ebp]
  __asm add eax, edi
  __asm cmp dword ptr [esp + 0x18], 0x10
  __asm mov dword ptr [esp + 0x10], eax
  __asm push ebx
  __asm _emit 0x72 __asm _emit 0x5f
  __asm mov edi, dword ptr [esi]
  __asm push edi
  __asm push ebp
  __asm call LAB_1148cded
  __asm push dword ptr [esp + 0x30]
  __asm lea eax, [ebx + ebp]
  __asm push dword ptr [esp + 0x30]
  __asm push eax
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [esp + 0x28]
  __asm add esp, 0x18
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm inc ecx
  __asm mov byte ptr [eax], 0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [edi - 4]
  __asm add ecx, 0x23
  __asm sub edi, edx
  __asm lea eax, [edi - 4]
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x18
  __asm mov edi, edx
  __asm push ecx
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov dword ptr [esi], ebp
  __asm mov eax, esi
  __asm pop ebp
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x10
  __asm call dword ptr [LAB_122fc888]
  __asm push esi
  __asm push ebp
  __asm call LAB_1148cded
  __asm push dword ptr [esp + 0x30]
  __asm push dword ptr [esp + 0x30]
  __asm push edi
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [esp + 0x28]
  __asm add esp, 0x18
  __asm mov byte ptr [eax], 0
  __asm mov eax, esi
  __asm mov dword ptr [esi], ebp
  __asm pop ebp
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x10
  __asm call LAB_10046a33
}




// Reference entry 101174c0; body size 19 bytes.
#line 1 "ENTRY_101174c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101174c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 101174e0; body size 19 bytes.
#line 1 "ENTRY_101174e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101174e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10117500; body size 5 bytes.
#line 1 "ENTRY_10117500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117510; body size 5 bytes.
#line 1 "ENTRY_10117510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117520; body size 5 bytes.
#line 1 "ENTRY_10117520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117530; body size 5 bytes.
#line 1 "ENTRY_10117530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117540; body size 5 bytes.
#line 1 "ENTRY_10117540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117550; body size 5 bytes.
#line 1 "ENTRY_10117550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117560; body size 5 bytes.
#line 1 "ENTRY_10117560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117570; body size 5 bytes.
#line 1 "ENTRY_10117570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117580; body size 5 bytes.
#line 1 "ENTRY_10117580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117590; body size 5 bytes.
#line 1 "ENTRY_10117590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101175a0; body size 5 bytes.
#line 1 "ENTRY_101175a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101175a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101175b0; body size 5 bytes.
#line 1 "ENTRY_101175b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101175b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117650; body size 14 bytes.
#line 1 "ENTRY_10117650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117650(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  return;
}


// Reference entry 10117930; body size 15 bytes.
#line 1 "ENTRY_10117930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117930(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101179d0; body size 5 bytes.
#line 1 "ENTRY_101179d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101179d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101179e0; body size 5 bytes.
#line 1 "ENTRY_101179e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101179e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101179f0; body size 5 bytes.
#line 1 "ENTRY_101179f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101179f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117a00; body size 5 bytes.
#line 1 "ENTRY_10117a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117a10; body size 5 bytes.
#line 1 "ENTRY_10117a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117a20; body size 5 bytes.
#line 1 "ENTRY_10117a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117a30; body size 5 bytes.
#line 1 "ENTRY_10117a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117a40; body size 5 bytes.
#line 1 "ENTRY_10117a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117a50; body size 5 bytes.
#line 1 "ENTRY_10117a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117a60; body size 5 bytes.
#line 1 "ENTRY_10117a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117a70; body size 5 bytes.
#line 1 "ENTRY_10117a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117a80; body size 5 bytes.
#line 1 "ENTRY_10117a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117a90; body size 6 bytes.
#line 1 "ENTRY_10117a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10117a90(void)

{
  return (char *)("SCINowPlaying");
}


// Reference entry 10117aa0; body size 6 bytes.
#line 1 "ENTRY_10117aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10117aa0(void)

{
  return (char *)("SCISystem");
}


// Reference entry 10117ab0; body size 6 bytes.
#line 1 "ENTRY_10117ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10117ab0(void)

{
  return (char *)("SCIZoneGroupMgr");
}


// Reference entry 10117d40; body size 16 bytes.
#line 1 "ENTRY_10117d40"

__declspec(naked) void FUN_10117d40(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, dword ptr [eax]
  __asm cmp edx, dword ptr [ecx]
  __asm cmovb eax, ecx
  __asm ret
}




// Reference entry 10117d60; body size 16 bytes.
#line 1 "ENTRY_10117d60"

__declspec(naked) void FUN_10117d60(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [edx]
  __asm cmp ecx, dword ptr [eax]
  __asm cmovb eax, edx
  __asm ret
}




// Reference entry 10117d80; body size 5 bytes.
#line 1 "ENTRY_10117d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117d90; body size 5 bytes.
#line 1 "ENTRY_10117d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117da0; body size 5 bytes.
#line 1 "ENTRY_10117da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117db0; body size 5 bytes.
#line 1 "ENTRY_10117db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117dc0; body size 5 bytes.
#line 1 "ENTRY_10117dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117dd0; body size 5 bytes.
#line 1 "ENTRY_10117dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117de0; body size 5 bytes.
#line 1 "ENTRY_10117de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117df0; body size 5 bytes.
#line 1 "ENTRY_10117df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10117e00; body size 19 bytes.
#line 1 "ENTRY_10117e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  FUN_10117e00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
}


// Reference entry 10117e20; body size 19 bytes.
#line 1 "ENTRY_10117e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  FUN_10117e20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
}


// Reference entry 10117e40; body size 19 bytes.
#line 1 "ENTRY_10117e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117e40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10117e60; body size 30 bytes.
#line 1 "ENTRY_10117e60"

__declspec(naked) void FUN_10117e60(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 8]
  __asm cmp eax, edx
  __asm _emit 0x74 __asm _emit 0x11
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [eax], ecx
  __asm add eax, 4
  __asm cmp eax, edx
  __asm _emit 0x75 __asm _emit 0xf5
  __asm pop esi
  __asm ret
}




// Reference entry 10117ec0; body size 32 bytes.
#line 1 "ENTRY_10117ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10117ec0(undefined4 *param_2)
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


// Reference entry 10117ef0; body size 9 bytes.
#line 1 "ENTRY_10117ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117f00; body size 25 bytes.
#line 1 "ENTRY_10117f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10117f00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10117f20; body size 9 bytes.
#line 1 "ENTRY_10117f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117f30; body size 9 bytes.
#line 1 "ENTRY_10117f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117f40; body size 9 bytes.
#line 1 "ENTRY_10117f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117f50; body size 9 bytes.
#line 1 "ENTRY_10117f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117f60; body size 9 bytes.
#line 1 "ENTRY_10117f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117f70; body size 9 bytes.
#line 1 "ENTRY_10117f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117f80; body size 9 bytes.
#line 1 "ENTRY_10117f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117f90; body size 9 bytes.
#line 1 "ENTRY_10117f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117fa0; body size 9 bytes.
#line 1 "ENTRY_10117fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117fb0; body size 9 bytes.
#line 1 "ENTRY_10117fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117fc0; body size 9 bytes.
#line 1 "ENTRY_10117fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117fd0; body size 9 bytes.
#line 1 "ENTRY_10117fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117fe0; body size 9 bytes.
#line 1 "ENTRY_10117fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10117ff0; body size 9 bytes.
#line 1 "ENTRY_10117ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117ff0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118000; body size 9 bytes.
#line 1 "ENTRY_10118000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118010; body size 9 bytes.
#line 1 "ENTRY_10118010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118010(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118020; body size 9 bytes.
#line 1 "ENTRY_10118020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118030; body size 9 bytes.
#line 1 "ENTRY_10118030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118030(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118040; body size 9 bytes.
#line 1 "ENTRY_10118040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118050; body size 9 bytes.
#line 1 "ENTRY_10118050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118060; body size 25 bytes.
#line 1 "ENTRY_10118060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118060(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10118080; body size 9 bytes.
#line 1 "ENTRY_10118080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118080(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118090; body size 9 bytes.
#line 1 "ENTRY_10118090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118090(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101180a0; body size 9 bytes.
#line 1 "ENTRY_101180a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101180a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101180b0; body size 9 bytes.
#line 1 "ENTRY_101180b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101180b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101180c0; body size 25 bytes.
#line 1 "ENTRY_101180c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101180c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101180e0; body size 9 bytes.
#line 1 "ENTRY_101180e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101180e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101180f0; body size 9 bytes.
#line 1 "ENTRY_101180f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101180f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118100; body size 9 bytes.
#line 1 "ENTRY_10118100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118110; body size 9 bytes.
#line 1 "ENTRY_10118110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118110(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118120; body size 9 bytes.
#line 1 "ENTRY_10118120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118130; body size 9 bytes.
#line 1 "ENTRY_10118130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118130(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118140; body size 9 bytes.
#line 1 "ENTRY_10118140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118150; body size 25 bytes.
#line 1 "ENTRY_10118150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118150(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10118170; body size 9 bytes.
#line 1 "ENTRY_10118170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118170(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118180; body size 9 bytes.
#line 1 "ENTRY_10118180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118190; body size 9 bytes.
#line 1 "ENTRY_10118190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118190(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101181a0; body size 9 bytes.
#line 1 "ENTRY_101181a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101181b0; body size 9 bytes.
#line 1 "ENTRY_101181b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101181c0; body size 9 bytes.
#line 1 "ENTRY_101181c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101181d0; body size 9 bytes.
#line 1 "ENTRY_101181d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101181e0; body size 9 bytes.
#line 1 "ENTRY_101181e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101181f0; body size 9 bytes.
#line 1 "ENTRY_101181f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118200; body size 25 bytes.
#line 1 "ENTRY_10118200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118200(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10118220; body size 9 bytes.
#line 1 "ENTRY_10118220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118220(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118230; body size 9 bytes.
#line 1 "ENTRY_10118230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118230(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118240; body size 9 bytes.
#line 1 "ENTRY_10118240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118240(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118250; body size 9 bytes.
#line 1 "ENTRY_10118250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118250(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118260; body size 9 bytes.
#line 1 "ENTRY_10118260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118260(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118270; body size 9 bytes.
#line 1 "ENTRY_10118270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118270(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118280; body size 9 bytes.
#line 1 "ENTRY_10118280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118280(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118290; body size 9 bytes.
#line 1 "ENTRY_10118290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118290(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101182a0; body size 9 bytes.
#line 1 "ENTRY_101182a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101182b0; body size 9 bytes.
#line 1 "ENTRY_101182b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101182c0; body size 9 bytes.
#line 1 "ENTRY_101182c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101182d0; body size 9 bytes.
#line 1 "ENTRY_101182d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101182e0; body size 9 bytes.
#line 1 "ENTRY_101182e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101182f0; body size 9 bytes.
#line 1 "ENTRY_101182f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118300; body size 25 bytes.
#line 1 "ENTRY_10118300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118300(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10118320; body size 9 bytes.
#line 1 "ENTRY_10118320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118320(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118330; body size 25 bytes.
#line 1 "ENTRY_10118330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118330(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10118350; body size 9 bytes.
#line 1 "ENTRY_10118350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118350(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118360; body size 25 bytes.
#line 1 "ENTRY_10118360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118360(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10118380; body size 9 bytes.
#line 1 "ENTRY_10118380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118380(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118390; body size 9 bytes.
#line 1 "ENTRY_10118390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118390(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101183a0; body size 9 bytes.
#line 1 "ENTRY_101183a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101183a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101183b0; body size 9 bytes.
#line 1 "ENTRY_101183b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101183b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101183c0; body size 25 bytes.
#line 1 "ENTRY_101183c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101183c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101183e0; body size 9 bytes.
#line 1 "ENTRY_101183e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101183e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101183f0; body size 9 bytes.
#line 1 "ENTRY_101183f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101183f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118400; body size 9 bytes.
#line 1 "ENTRY_10118400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118400(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118410; body size 9 bytes.
#line 1 "ENTRY_10118410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118410(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118420; body size 9 bytes.
#line 1 "ENTRY_10118420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118420(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118430; body size 9 bytes.
#line 1 "ENTRY_10118430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118430(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118440; body size 9 bytes.
#line 1 "ENTRY_10118440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118440(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118450; body size 25 bytes.
#line 1 "ENTRY_10118450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118450(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10118490; body size 9 bytes.
#line 1 "ENTRY_10118490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118490(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101184a0; body size 9 bytes.
#line 1 "ENTRY_101184a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101184b0; body size 9 bytes.
#line 1 "ENTRY_101184b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101184c0; body size 9 bytes.
#line 1 "ENTRY_101184c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101184d0; body size 9 bytes.
#line 1 "ENTRY_101184d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101184e0; body size 9 bytes.
#line 1 "ENTRY_101184e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101184f0; body size 9 bytes.
#line 1 "ENTRY_101184f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118500; body size 9 bytes.
#line 1 "ENTRY_10118500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118500(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118510; body size 9 bytes.
#line 1 "ENTRY_10118510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118510(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118520; body size 9 bytes.
#line 1 "ENTRY_10118520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118520(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118530; body size 9 bytes.
#line 1 "ENTRY_10118530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118530(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118540; body size 9 bytes.
#line 1 "ENTRY_10118540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118540(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118550; body size 9 bytes.
#line 1 "ENTRY_10118550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118550(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118560; body size 9 bytes.
#line 1 "ENTRY_10118560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118560(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118570; body size 9 bytes.
#line 1 "ENTRY_10118570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118570(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118580; body size 9 bytes.
#line 1 "ENTRY_10118580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118580(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118590; body size 9 bytes.
#line 1 "ENTRY_10118590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118590(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101185a0; body size 9 bytes.
#line 1 "ENTRY_101185a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101185b0; body size 9 bytes.
#line 1 "ENTRY_101185b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101185c0; body size 9 bytes.
#line 1 "ENTRY_101185c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101185d0; body size 9 bytes.
#line 1 "ENTRY_101185d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101185e0; body size 9 bytes.
#line 1 "ENTRY_101185e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101185f0; body size 9 bytes.
#line 1 "ENTRY_101185f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118600; body size 9 bytes.
#line 1 "ENTRY_10118600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118610; body size 9 bytes.
#line 1 "ENTRY_10118610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118610(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118620; body size 9 bytes.
#line 1 "ENTRY_10118620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118620(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118630; body size 9 bytes.
#line 1 "ENTRY_10118630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118630(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118640; body size 9 bytes.
#line 1 "ENTRY_10118640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118640(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118650; body size 9 bytes.
#line 1 "ENTRY_10118650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118650(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118660; body size 9 bytes.
#line 1 "ENTRY_10118660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118670; body size 9 bytes.
#line 1 "ENTRY_10118670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118670(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118680; body size 9 bytes.
#line 1 "ENTRY_10118680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118680(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118690; body size 25 bytes.
#line 1 "ENTRY_10118690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118690(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101186b0; body size 9 bytes.
#line 1 "ENTRY_101186b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101186b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101186c0; body size 9 bytes.
#line 1 "ENTRY_101186c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101186c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101186d0; body size 9 bytes.
#line 1 "ENTRY_101186d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101186d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101186e0; body size 9 bytes.
#line 1 "ENTRY_101186e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101186e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101186f0; body size 9 bytes.
#line 1 "ENTRY_101186f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101186f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118700; body size 9 bytes.
#line 1 "ENTRY_10118700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118700(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118710; body size 9 bytes.
#line 1 "ENTRY_10118710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118710(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118720; body size 9 bytes.
#line 1 "ENTRY_10118720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118720(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118730; body size 9 bytes.
#line 1 "ENTRY_10118730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118730(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118740; body size 9 bytes.
#line 1 "ENTRY_10118740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118740(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118750; body size 9 bytes.
#line 1 "ENTRY_10118750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118750(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118760; body size 9 bytes.
#line 1 "ENTRY_10118760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118760(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118770; body size 9 bytes.
#line 1 "ENTRY_10118770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118770(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118780; body size 9 bytes.
#line 1 "ENTRY_10118780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118780(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118790; body size 9 bytes.
#line 1 "ENTRY_10118790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118790(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101187a0; body size 9 bytes.
#line 1 "ENTRY_101187a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101187b0; body size 9 bytes.
#line 1 "ENTRY_101187b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101187c0; body size 9 bytes.
#line 1 "ENTRY_101187c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101187d0; body size 9 bytes.
#line 1 "ENTRY_101187d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101187e0; body size 9 bytes.
#line 1 "ENTRY_101187e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101187f0; body size 9 bytes.
#line 1 "ENTRY_101187f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118800; body size 9 bytes.
#line 1 "ENTRY_10118800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118800(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118810; body size 9 bytes.
#line 1 "ENTRY_10118810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118810(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118820; body size 25 bytes.
#line 1 "ENTRY_10118820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118820(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10118840; body size 9 bytes.
#line 1 "ENTRY_10118840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118840(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118850; body size 25 bytes.
#line 1 "ENTRY_10118850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118850(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10118870; body size 9 bytes.
#line 1 "ENTRY_10118870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118870(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118880; body size 9 bytes.
#line 1 "ENTRY_10118880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118880(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118890; body size 9 bytes.
#line 1 "ENTRY_10118890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118890(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101188a0; body size 9 bytes.
#line 1 "ENTRY_101188a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101188a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101188b0; body size 9 bytes.
#line 1 "ENTRY_101188b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101188b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101188c0; body size 25 bytes.
#line 1 "ENTRY_101188c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101188c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101188e0; body size 9 bytes.
#line 1 "ENTRY_101188e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101188e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101188f0; body size 9 bytes.
#line 1 "ENTRY_101188f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101188f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118900; body size 9 bytes.
#line 1 "ENTRY_10118900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118900(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118910; body size 25 bytes.
#line 1 "ENTRY_10118910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118910(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10118930; body size 9 bytes.
#line 1 "ENTRY_10118930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118930(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118940; body size 25 bytes.
#line 1 "ENTRY_10118940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118940(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10118960; body size 9 bytes.
#line 1 "ENTRY_10118960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118960(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118970; body size 9 bytes.
#line 1 "ENTRY_10118970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118970(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118980; body size 9 bytes.
#line 1 "ENTRY_10118980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118980(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118990; body size 9 bytes.
#line 1 "ENTRY_10118990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118990(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101189a0; body size 9 bytes.
#line 1 "ENTRY_101189a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101189a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101189b0; body size 9 bytes.
#line 1 "ENTRY_101189b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101189b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101189c0; body size 9 bytes.
#line 1 "ENTRY_101189c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101189c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101189d0; body size 9 bytes.
#line 1 "ENTRY_101189d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101189d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101189e0; body size 14 bytes.
#line 1 "ENTRY_101189e0"

__declspec(naked) void FUN_101189e0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10118a00; body size 18 bytes.
#line 1 "ENTRY_10118a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118a00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118af0; body size 11 bytes.
#line 1 "ENTRY_10118af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118af0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10118b00; body size 11 bytes.
#line 1 "ENTRY_10118b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118b00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10118b10; body size 11 bytes.
#line 1 "ENTRY_10118b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118b10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10118b20; body size 11 bytes.
#line 1 "ENTRY_10118b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118b20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10118b30; body size 16 bytes.
#line 1 "ENTRY_10118b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118b30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118b50; body size 17 bytes.
#line 1 "ENTRY_10118b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10118b50(int param_1)

{
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10118b70; body size 9 bytes.
#line 1 "ENTRY_10118b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118b70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118b80; body size 14 bytes.
#line 1 "ENTRY_10118b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118b80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10118ba0; body size 13 bytes.
#line 1 "ENTRY_10118ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10118ba0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10118bb0; body size 23 bytes.
#line 1 "ENTRY_10118bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118bd0; body size 3 bytes.
#line 1 "ENTRY_10118bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10118bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10118be0; body size 3 bytes.
#line 1 "ENTRY_10118be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10118be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10118bf0; body size 56 bytes.
#line 1 "ENTRY_10118bf0"

__declspec(naked) void FUN_10118bf0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm movups xmm0, xmmword ptr [eax]
  __asm movups xmmword ptr [ecx], xmm0
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x7e __asm _emit 0x40 __asm _emit 0x10
  __asm movq qword ptr [ecx + 0x10], xmm0
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x14 __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [eax], 0
  __asm mov eax, ecx
  __asm ret 4
}




// Reference entry 10118f10; body size 9 bytes.
#line 1 "ENTRY_10118f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118f10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10118f20; body size 37 bytes.
#line 1 "ENTRY_10118f20"

__declspec(naked) void FUN_10118f20(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm add eax, 4
  __asm push eax
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], LAB_1186d2ac
  __asm call LAB_10051bcc
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10118f50; body size 33 bytes.
#line 1 "ENTRY_10118f50"

__declspec(naked) void FUN_10118f50(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], LAB_1186d2ac
  __asm call LAB_10051bcc
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10118f80; body size 43 bytes.
#line 1 "ENTRY_10118f80"

__declspec(naked) void FUN_10118f80(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm add eax, 4
  __asm push eax
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], LAB_1186d2ac
  __asm call LAB_10051bcc
  __asm mov dword ptr [esi], LAB_1186d2b8
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10119160; body size 9 bytes.
#line 1 "ENTRY_10119160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAbilityDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119170; body size 21 bytes.
#line 1 "ENTRY_10119170"

__declspec(naked) void FUN_10119170(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186f8c8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119190; body size 9 bytes.
#line 1 "ENTRY_10119190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119190(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAction);
  return (undefined4 *)(param_1);
}


// Reference entry 101191a0; body size 9 bytes.
#line 1 "ENTRY_101191a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101191a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 101191b0; body size 21 bytes.
#line 1 "ENTRY_101191b0"

__declspec(naked) void FUN_101191b0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186f970
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101191d0; body size 14 bytes.
#line 1 "ENTRY_101191d0"

__declspec(naked) void FUN_101191d0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186d4ac
  __asm pop ecx
  __asm ret
}




// Reference entry 101191f0; body size 21 bytes.
#line 1 "ENTRY_101191f0"

__declspec(naked) void FUN_101191f0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186f9b8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119210; body size 9 bytes.
#line 1 "ENTRY_10119210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119210(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionFilter);
  return (undefined4 *)(param_1);
}


// Reference entry 10119220; body size 21 bytes.
#line 1 "ENTRY_10119220"

__declspec(naked) void FUN_10119220(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186f994
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119240; body size 21 bytes.
#line 1 "ENTRY_10119240"

__declspec(naked) void FUN_10119240(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186f94c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119260; body size 9 bytes.
#line 1 "ENTRY_10119260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAutomationDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119270; body size 21 bytes.
#line 1 "ENTRY_10119270"

__declspec(naked) void FUN_10119270(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186f924
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119290; body size 9 bytes.
#line 1 "ENTRY_10119290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBTAccessoryDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 101192a0; body size 21 bytes.
#line 1 "ENTRY_101192a0"

__declspec(naked) void FUN_101192a0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fbec
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101192c0; body size 9 bytes.
#line 1 "ENTRY_101192c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101192c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBTClassicConnectionCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 101192d0; body size 21 bytes.
#line 1 "ENTRY_101192d0"

__declspec(naked) void FUN_101192d0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fc34
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101192f0; body size 9 bytes.
#line 1 "ENTRY_101192f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101192f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBTClassicConnectionProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 10119300; body size 21 bytes.
#line 1 "ENTRY_10119300"

__declspec(naked) void FUN_10119300(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fc64
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119320; body size 9 bytes.
#line 1 "ENTRY_10119320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119320(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBleDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119330; body size 21 bytes.
#line 1 "ENTRY_10119330"

__declspec(naked) void FUN_10119330(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fa5c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119350; body size 9 bytes.
#line 1 "ENTRY_10119350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119350(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBlePeripheralDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119360; body size 21 bytes.
#line 1 "ENTRY_10119360"

__declspec(naked) void FUN_10119360(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fab8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119380; body size 9 bytes.
#line 1 "ENTRY_10119380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10119390; body size 21 bytes.
#line 1 "ENTRY_10119390"

__declspec(naked) void FUN_10119390(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fafc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101193b0; body size 9 bytes.
#line 1 "ENTRY_101193b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101193b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIChirpDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 101193c0; body size 21 bytes.
#line 1 "ENTRY_101193c0"

__declspec(naked) void FUN_101193c0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fca0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101193e0; body size 9 bytes.
#line 1 "ENTRY_101193e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101193e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIClipboardDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 101193f0; body size 21 bytes.
#line 1 "ENTRY_101193f0"

__declspec(naked) void FUN_101193f0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fcd4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119410; body size 9 bytes.
#line 1 "ENTRY_10119410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCICrashReportProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 10119420; body size 21 bytes.
#line 1 "ENTRY_10119420"

__declspec(naked) void FUN_10119420(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fcfc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119440; body size 9 bytes.
#line 1 "ENTRY_10119440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCICustomSubWizard);
  return (undefined4 *)(param_1);
}


// Reference entry 10119450; body size 21 bytes.
#line 1 "ENTRY_10119450"

__declspec(naked) void FUN_10119450(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fd2c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119470; body size 9 bytes.
#line 1 "ENTRY_10119470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIEventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10119480; body size 21 bytes.
#line 1 "ENTRY_10119480"

__declspec(naked) void FUN_10119480(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fd8c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101194a0; body size 9 bytes.
#line 1 "ENTRY_101194a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101194a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIExperimentManagerProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 101194b0; body size 21 bytes.
#line 1 "ENTRY_101194b0"

__declspec(naked) void FUN_101194b0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fdb4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101194d0; body size 9 bytes.
#line 1 "ENTRY_101194d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101194d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIGetAboutSonosStringCB);
  return (undefined4 *)(param_1);
}


// Reference entry 101194e0; body size 21 bytes.
#line 1 "ENTRY_101194e0"

__declspec(naked) void FUN_101194e0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fe24
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119500; body size 9 bytes.
#line 1 "ENTRY_10119500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIGetSonosPlaylistsCB);
  return (undefined4 *)(param_1);
}


// Reference entry 10119510; body size 21 bytes.
#line 1 "ENTRY_10119510"

__declspec(naked) void FUN_10119510(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fe48
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119530; body size 9 bytes.
#line 1 "ENTRY_10119530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIHapticDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119540; body size 21 bytes.
#line 1 "ENTRY_10119540"

__declspec(naked) void FUN_10119540(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fe70
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119560; body size 9 bytes.
#line 1 "ENTRY_10119560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInAppMessagingProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 10119570; body size 21 bytes.
#line 1 "ENTRY_10119570"

__declspec(naked) void FUN_10119570(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fec8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119590; body size 9 bytes.
#line 1 "ENTRY_10119590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInAppPurchaseManagerProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 101195a0; body size 21 bytes.
#line 1 "ENTRY_101195a0"

__declspec(naked) void FUN_101195a0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186fe94
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101195c0; body size 9 bytes.
#line 1 "ENTRY_101195c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101195c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInput);
  return (undefined4 *)(param_1);
}


// Reference entry 101195d0; body size 9 bytes.
#line 1 "ENTRY_101195d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101195d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILifecycleAppProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 101195e0; body size 21 bytes.
#line 1 "ENTRY_101195e0"

__declspec(naked) void FUN_101195e0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186ff0c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119600; body size 9 bytes.
#line 1 "ENTRY_10119600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILocalMediaCollection);
  return (undefined4 *)(param_1);
}


// Reference entry 10119610; body size 21 bytes.
#line 1 "ENTRY_10119610"

__declspec(naked) void FUN_10119610(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186ff30
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119630; body size 9 bytes.
#line 1 "ENTRY_10119630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILocalMusicBrowseItemInfo);
  return (undefined4 *)(param_1);
}


// Reference entry 10119640; body size 21 bytes.
#line 1 "ENTRY_10119640"

__declspec(naked) void FUN_10119640(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186ff70
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119660; body size 9 bytes.
#line 1 "ENTRY_10119660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILocalMusicSearchableDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119670; body size 21 bytes.
#line 1 "ENTRY_10119670"

__declspec(naked) void FUN_10119670(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186ffdc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119690; body size 9 bytes.
#line 1 "ENTRY_10119690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILoggingProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 101196a0; body size 21 bytes.
#line 1 "ENTRY_101196a0"

__declspec(naked) void FUN_101196a0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1187000c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101196c0; body size 9 bytes.
#line 1 "ENTRY_101196c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101196c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIMdnsDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 101196d0; body size 21 bytes.
#line 1 "ENTRY_101196d0"

__declspec(naked) void FUN_101196d0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1187003c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101196f0; body size 9 bytes.
#line 1 "ENTRY_101196f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101196f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIMusicServerBrowseDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119700; body size 21 bytes.
#line 1 "ENTRY_10119700"

__declspec(naked) void FUN_10119700(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1187006c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119720; body size 9 bytes.
#line 1 "ENTRY_10119720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIMusicServerDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119730; body size 21 bytes.
#line 1 "ENTRY_10119730"

__declspec(naked) void FUN_10119730(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_118700a8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119750; body size 9 bytes.
#line 1 "ENTRY_10119750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINetstartListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10119760; body size 21 bytes.
#line 1 "ENTRY_10119760"

__declspec(naked) void FUN_10119760(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_118700dc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119780; body size 9 bytes.
#line 1 "ENTRY_10119780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119780(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINetworkManagementDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119790; body size 21 bytes.
#line 1 "ENTRY_10119790"

__declspec(naked) void FUN_10119790(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1187010c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101197b0; body size 9 bytes.
#line 1 "ENTRY_101197b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101197b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINewWizDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 101197c0; body size 21 bytes.
#line 1 "ENTRY_101197c0"

__declspec(naked) void FUN_101197c0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11870134
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101197e0; body size 9 bytes.
#line 1 "ENTRY_101197e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101197e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINfcDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 101197f0; body size 21 bytes.
#line 1 "ENTRY_101197f0"

__declspec(naked) void FUN_101197f0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11870158
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119810; body size 9 bytes.
#line 1 "ENTRY_10119810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return (undefined4 *)(param_1);
}


// Reference entry 10119820; body size 9 bytes.
#line 1 "ENTRY_10119820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpCB);
  return (undefined4 *)(param_1);
}


// Reference entry 10119830; body size 21 bytes.
#line 1 "ENTRY_10119830"

__declspec(naked) void FUN_10119830(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186f8a4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119850; body size 9 bytes.
#line 1 "ENTRY_10119850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIPlatformDateTimeProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 10119860; body size 9 bytes.
#line 1 "ENTRY_10119860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119860(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISavedDataProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 10119870; body size 21 bytes.
#line 1 "ENTRY_10119870"

__declspec(naked) void FUN_10119870(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11870264
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119890; body size 9 bytes.
#line 1 "ENTRY_10119890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119890(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISecureStore);
  return (undefined4 *)(param_1);
}


// Reference entry 101198a0; body size 21 bytes.
#line 1 "ENTRY_101198a0"

__declspec(naked) void FUN_101198a0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11870194
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101198c0; body size 9 bytes.
#line 1 "ENTRY_101198c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101198c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISecurityContext);
  return (undefined4 *)(param_1);
}


// Reference entry 101198d0; body size 21 bytes.
#line 1 "ENTRY_101198d0"

__declspec(naked) void FUN_101198d0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_118701c4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101198f0; body size 9 bytes.
#line 1 "ENTRY_101198f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101198f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceAppInterop);
  return (undefined4 *)(param_1);
}


// Reference entry 10119900; body size 21 bytes.
#line 1 "ENTRY_10119900"

__declspec(naked) void FUN_10119900(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1187023c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119920; body size 9 bytes.
#line 1 "ENTRY_10119920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStackTraceCaptureDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119930; body size 21 bytes.
#line 1 "ENTRY_10119930"

__declspec(naked) void FUN_10119930(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11870218
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119950; body size 9 bytes.
#line 1 "ENTRY_10119950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStringInput);
  return (undefined4 *)(param_1);
}


// Reference entry 10119960; body size 9 bytes.
#line 1 "ENTRY_10119960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStringInputBase);
  return (undefined4 *)(param_1);
}


// Reference entry 10119970; body size 21 bytes.
#line 1 "ENTRY_10119970"

__declspec(naked) void FUN_10119970(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_118702c0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119990; body size 9 bytes.
#line 1 "ENTRY_10119990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITrackInfo);
  return (undefined4 *)(param_1);
}


// Reference entry 101199a0; body size 21 bytes.
#line 1 "ENTRY_101199a0"

__declspec(naked) void FUN_101199a0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1187030c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101199c0; body size 9 bytes.
#line 1 "ENTRY_101199c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101199c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIUINotificationsDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 101199d0; body size 9 bytes.
#line 1 "ENTRY_101199d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101199d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIUrbanAirshipDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 101199e0; body size 21 bytes.
#line 1 "ENTRY_101199e0"

__declspec(naked) void FUN_101199e0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11870348
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119a00; body size 9 bytes.
#line 1 "ENTRY_10119a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119a00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIUrlConnection);
  return (undefined4 *)(param_1);
}


// Reference entry 10119a10; body size 21 bytes.
#line 1 "ENTRY_10119a10"

__declspec(naked) void FUN_10119a10(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11870384
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119a30; body size 9 bytes.
#line 1 "ENTRY_10119a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119a30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIUrlSessionCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10119a40; body size 21 bytes.
#line 1 "ENTRY_10119a40"

__declspec(naked) void FUN_10119a40(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_118703b8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119a60; body size 9 bytes.
#line 1 "ENTRY_10119a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119a60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIUrlSessionProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 10119a70; body size 21 bytes.
#line 1 "ENTRY_10119a70"

__declspec(naked) void FUN_10119a70(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_118703dc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119a90; body size 9 bytes.
#line 1 "ENTRY_10119a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119a90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIVoiceServiceDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119aa0; body size 21 bytes.
#line 1 "ENTRY_10119aa0"

__declspec(naked) void FUN_10119aa0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1187040c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119ac0; body size 22 bytes.
#line 1 "ENTRY_10119ac0"

__declspec(naked) void FUN_10119ac0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119ae0; body size 9 bytes.
#line 1 "ENTRY_10119ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119ae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIVpnDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119af0; body size 21 bytes.
#line 1 "ENTRY_10119af0"

__declspec(naked) void FUN_10119af0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11870458
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119b10; body size 9 bytes.
#line 1 "ENTRY_10119b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119b10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIWebsocketCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10119b20; body size 21 bytes.
#line 1 "ENTRY_10119b20"

__declspec(naked) void FUN_10119b20(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11870520
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119b40; body size 14 bytes.
#line 1 "ENTRY_10119b40"

__declspec(naked) void FUN_10119b40(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119b60; body size 9 bytes.
#line 1 "ENTRY_10119b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119b60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIWebsocketDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119b70; body size 21 bytes.
#line 1 "ENTRY_10119b70"

__declspec(naked) void FUN_10119b70(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_118704e4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119b90; body size 9 bytes.
#line 1 "ENTRY_10119b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIWifiDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 10119ba0; body size 21 bytes.
#line 1 "ENTRY_10119ba0"

__declspec(naked) void FUN_10119ba0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11870484
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10119da0; body size 9 bytes.
#line 1 "ENTRY_10119da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119da0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibAssertionFailureCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10119db0; body size 9 bytes.
#line 1 "ENTRY_10119db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibCallUIThreadCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10119dc0; body size 9 bytes.
#line 1 "ENTRY_10119dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibCustomSubWizardCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10119dd0; body size 9 bytes.
#line 1 "ENTRY_10119dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDelegateFactory);
  return (undefined4 *)(param_1);
}


// Reference entry 10119de0; body size 9 bytes.
#line 1 "ENTRY_10119de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119de0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDiagnosticConsoleLogCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10119df0; body size 9 bytes.
#line 1 "ENTRY_10119df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDiagnosticExtraInfoCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10119e00; body size 9 bytes.
#line 1 "ENTRY_10119e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibLogCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 1011a2a0; body size 9 bytes.
#line 1 "ENTRY_1011a2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a2a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibPlatformStringCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 1011a2b0; body size 9 bytes.
#line 1 "ENTRY_1011a2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a2b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibSonarCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 1011a2c0; body size 9 bytes.
#line 1 "ENTRY_1011a2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a2c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibTruncatedStringsCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 1011a440; body size 119 bytes.
#line 1 "ENTRY_1011a440"

__declspec(naked) void FUN_1011a440(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118706e4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011a4e0; body size 35 bytes.
#line 1 "ENTRY_1011a4e0"

__declspec(naked) void FUN_1011a4e0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1187078c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011a510; body size 224 bytes.
#line 1 "ENTRY_1011a510"

__declspec(naked) void FUN_1011a510(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118707d4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x5c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x70 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x74 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x78
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011a630; body size 35 bytes.
#line 1 "ENTRY_1011a630"

__declspec(naked) void FUN_1011a630(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118707b0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011a660; body size 35 bytes.
#line 1 "ENTRY_1011a660"

__declspec(naked) void FUN_1011a660(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870768
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011a690; body size 42 bytes.
#line 1 "ENTRY_1011a690"

__declspec(naked) void FUN_1011a690(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870740
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011a6d0; body size 91 bytes.
#line 1 "ENTRY_1011a6d0"

__declspec(naked) void FUN_1011a6d0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870a08
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011a750; body size 56 bytes.
#line 1 "ENTRY_1011a750"

__declspec(naked) void FUN_1011a750(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870a50
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011a7a0; body size 70 bytes.
#line 1 "ENTRY_1011a7a0"

__declspec(naked) void FUN_1011a7a0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870a80
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011a800; body size 119 bytes.
#line 1 "ENTRY_1011a800"

__declspec(naked) void FUN_1011a800(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870878
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011a8a0; body size 84 bytes.
#line 1 "ENTRY_1011a8a0"

__declspec(naked) void FUN_1011a8a0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118708d4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011a910; body size 391 bytes.
#line 1 "ENTRY_1011a910"

__declspec(naked) void FUN_1011a910(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870918
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x58 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x5c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x68 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x6c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x70 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x74 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x78
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x7c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x81 __asm _emit 0x88 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x8c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x94
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x9c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xa0 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xa4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x81 __asm _emit 0xa8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xac __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xb0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xb4
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xbc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011ab00; body size 63 bytes.
#line 1 "ENTRY_1011ab00"

__declspec(naked) void FUN_1011ab00(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870abc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011ab50; body size 42 bytes.
#line 1 "ENTRY_1011ab50"

__declspec(naked) void FUN_1011ab50(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870af0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011ab90; body size 56 bytes.
#line 1 "ENTRY_1011ab90"

__declspec(naked) void FUN_1011ab90(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870b18
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011abe0; body size 126 bytes.
#line 1 "ENTRY_1011abe0"

__declspec(naked) void FUN_1011abe0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870b48
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011ac80; body size 42 bytes.
#line 1 "ENTRY_1011ac80"

__declspec(naked) void FUN_1011ac80(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870ba8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011acc0; body size 147 bytes.
#line 1 "ENTRY_1011acc0"

__declspec(naked) void FUN_1011acc0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870bd0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011ad80; body size 35 bytes.
#line 1 "ENTRY_1011ad80"

__declspec(naked) void FUN_1011ad80(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870c40
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011adb0; body size 42 bytes.
#line 1 "ENTRY_1011adb0"

__declspec(naked) void FUN_1011adb0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870c64
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011adf0; body size 42 bytes.
#line 1 "ENTRY_1011adf0"

__declspec(naked) void FUN_1011adf0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870c8c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011ae30; body size 84 bytes.
#line 1 "ENTRY_1011ae30"

__declspec(naked) void FUN_1011ae30(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870ce4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011aea0; body size 63 bytes.
#line 1 "ENTRY_1011aea0"

__declspec(naked) void FUN_1011aea0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870cb0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011aef0; body size 35 bytes.
#line 1 "ENTRY_1011aef0"

__declspec(naked) void FUN_1011aef0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870d28
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011af20; body size 77 bytes.
#line 1 "ENTRY_1011af20"

__declspec(naked) void FUN_1011af20(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870d4c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011af80; body size 140 bytes.
#line 1 "ENTRY_1011af80"

__declspec(naked) void FUN_1011af80(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870d8c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b030; body size 56 bytes.
#line 1 "ENTRY_1011b030"

__declspec(naked) void FUN_1011b030(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870df8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b080; body size 56 bytes.
#line 1 "ENTRY_1011b080"

__declspec(naked) void FUN_1011b080(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870e28
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b0d0; body size 56 bytes.
#line 1 "ENTRY_1011b0d0"

__declspec(naked) void FUN_1011b0d0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870e58
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b120; body size 70 bytes.
#line 1 "ENTRY_1011b120"

__declspec(naked) void FUN_1011b120(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870e88
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b180; body size 63 bytes.
#line 1 "ENTRY_1011b180"

__declspec(naked) void FUN_1011b180(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870ec4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b1d0; body size 56 bytes.
#line 1 "ENTRY_1011b1d0"

__declspec(naked) void FUN_1011b1d0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870ef8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b220; body size 42 bytes.
#line 1 "ENTRY_1011b220"

__declspec(naked) void FUN_1011b220(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870f28
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b260; body size 35 bytes.
#line 1 "ENTRY_1011b260"

__declspec(naked) void FUN_1011b260(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870f50
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b290; body size 70 bytes.
#line 1 "ENTRY_1011b290"

__declspec(naked) void FUN_1011b290(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870f74
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b2f0; body size 35 bytes.
#line 1 "ENTRY_1011b2f0"

__declspec(naked) void FUN_1011b2f0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118706c0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b320; body size 55 bytes.
#line 1 "ENTRY_1011b320"

__declspec(naked) void FUN_1011b320(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870660
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b370; body size 119 bytes.
#line 1 "ENTRY_1011b370"

__declspec(naked) void FUN_1011b370(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11871080
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b410; body size 56 bytes.
#line 1 "ENTRY_1011b410"

__declspec(naked) void FUN_1011b410(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870fb0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b460; body size 105 bytes.
#line 1 "ENTRY_1011b460"

__declspec(naked) void FUN_1011b460(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870fe0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b4f0; body size 42 bytes.
#line 1 "ENTRY_1011b4f0"

__declspec(naked) void FUN_1011b4f0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11871058
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b530; body size 35 bytes.
#line 1 "ENTRY_1011b530"

__declspec(naked) void FUN_1011b530(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11871034
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b560; body size 98 bytes.
#line 1 "ENTRY_1011b560"

__declspec(naked) void FUN_1011b560(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118710dc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b5e0; body size 70 bytes.
#line 1 "ENTRY_1011b5e0"

__declspec(naked) void FUN_1011b5e0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11871128
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b640; body size 48 bytes.
#line 1 "ENTRY_1011b640"

__declspec(naked) void FUN_1011b640(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118706a8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b680; body size 70 bytes.
#line 1 "ENTRY_1011b680"

__declspec(naked) void FUN_1011b680(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11871164
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b6e0; body size 63 bytes.
#line 1 "ENTRY_1011b6e0"

__declspec(naked) void FUN_1011b6e0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118711a0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b730; body size 35 bytes.
#line 1 "ENTRY_1011b730"

__declspec(naked) void FUN_1011b730(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118711d4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b760; body size 56 bytes.
#line 1 "ENTRY_1011b760"

__declspec(naked) void FUN_1011b760(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118711f8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b7b0; body size 98 bytes.
#line 1 "ENTRY_1011b7b0"

__declspec(naked) void FUN_1011b7b0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11871228
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b830; body size 62 bytes.
#line 1 "ENTRY_1011b830"

__declspec(naked) void FUN_1011b830(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1187067c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b880; body size 49 bytes.
#line 1 "ENTRY_1011b880"

__declspec(naked) void FUN_1011b880(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11871274
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b8c0; body size 63 bytes.
#line 1 "ENTRY_1011b8c0"

__declspec(naked) void FUN_1011b8c0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1187133c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b910; body size 70 bytes.
#line 1 "ENTRY_1011b910"

__declspec(naked) void FUN_1011b910(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11871300
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011b970; body size 140 bytes.
#line 1 "ENTRY_1011b970"

__declspec(naked) void FUN_1011b970(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118712a0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011ba20; body size 34 bytes.
#line 1 "ENTRY_1011ba20"

__declspec(naked) void FUN_1011ba20(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870574
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011ba50; body size 34 bytes.
#line 1 "ENTRY_1011ba50"

__declspec(naked) void FUN_1011ba50(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870564
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011ba80; body size 41 bytes.
#line 1 "ENTRY_1011ba80"

__declspec(naked) void FUN_1011ba80(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870638
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011bac0; body size 41 bytes.
#line 1 "ENTRY_1011bac0"

__declspec(naked) void FUN_1011bac0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1187064c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011bb00; body size 34 bytes.
#line 1 "ENTRY_1011bb00"

__declspec(naked) void FUN_1011bb00(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870594
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011bb30; body size 34 bytes.
#line 1 "ENTRY_1011bb30"

__declspec(naked) void FUN_1011bb30(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870584
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011bb60; body size 34 bytes.
#line 1 "ENTRY_1011bb60"

__declspec(naked) void FUN_1011bb60(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11870554
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011bb90; body size 34 bytes.
#line 1 "ENTRY_1011bb90"

__declspec(naked) void FUN_1011bb90(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118705b8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011bbc0; body size 174 bytes.
#line 1 "ENTRY_1011bbc0"

__declspec(naked) void FUN_1011bbc0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118705c8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x54 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x58 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011bca0; body size 41 bytes.
#line 1 "ENTRY_1011bca0"

__declspec(naked) void FUN_1011bca0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118705a4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 1011bce0; body size 11 bytes.
#line 1 "ENTRY_1011bce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1011bce0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1011bcf0; body size 3 bytes.
#line 1 "ENTRY_1011bcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1011bcf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1011bd00; body size 11 bytes.
#line 1 "ENTRY_1011bd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1011bd00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1011bd10; body size 5 bytes.
#line 1 "ENTRY_1011bd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1011bd10(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (undefined4)(param_1);
}


// Reference entry 1011bd20; body size 26 bytes.
#line 1 "ENTRY_1011bd20"

__declspec(naked) void FUN_1011bd20(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm xorps xmm0, xmm0
  __asm movq qword ptr [ecx + 4], xmm0
  __asm mov dword ptr [ecx + 4], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1186d25c
  __asm ret 4
}




// Reference entry 1011be20; body size 26 bytes.
#line 1 "ENTRY_1011be20"

__declspec(naked) void FUN_1011be20(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [ecx], LAB_1186d234
  __asm movq qword ptr [ecx + 4], xmm0
  __asm mov dword ptr [ecx + 4], eax
  __asm mov eax, ecx
  __asm ret 8
}




// Reference entry 1011f590; body size 18 bytes.
#line 1 "ENTRY_1011f590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f590(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 1011f5d0; body size 3 bytes.
#line 1 "ENTRY_1011f5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1011f5d0(void)

{
  return;
}


// Reference entry 1011f760; body size 3 bytes.
#line 1 "ENTRY_1011f760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1011f760(void)

{
  return;
}


// Reference entry 1011f770; body size 3 bytes.
#line 1 "ENTRY_1011f770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1011f770(void)

{
  return;
}


// Reference entry 1011f8e0; body size 5 bytes.
#line 1 "ENTRY_1011f8e0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f8e0(undefined4 *param_1)

{ __asm jmp FUN_100529f0 }


// Reference entry 1011f8f0; body size 7 bytes.
#line 1 "ENTRY_1011f8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f8f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f900; body size 7 bytes.
#line 1 "ENTRY_1011f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f910; body size 7 bytes.
#line 1 "ENTRY_1011f910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f930; body size 7 bytes.
#line 1 "ENTRY_1011f930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f940; body size 7 bytes.
#line 1 "ENTRY_1011f940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f950; body size 7 bytes.
#line 1 "ENTRY_1011f950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f960; body size 7 bytes.
#line 1 "ENTRY_1011f960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f970; body size 7 bytes.
#line 1 "ENTRY_1011f970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f980; body size 7 bytes.
#line 1 "ENTRY_1011f980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f990; body size 7 bytes.
#line 1 "ENTRY_1011f990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f9a0; body size 7 bytes.
#line 1 "ENTRY_1011f9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f9b0; body size 7 bytes.
#line 1 "ENTRY_1011f9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f9c0; body size 7 bytes.
#line 1 "ENTRY_1011f9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f9d0; body size 7 bytes.
#line 1 "ENTRY_1011f9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f9e0; body size 7 bytes.
#line 1 "ENTRY_1011f9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011f9f0; body size 7 bytes.
#line 1 "ENTRY_1011f9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fa00; body size 7 bytes.
#line 1 "ENTRY_1011fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fa10; body size 7 bytes.
#line 1 "ENTRY_1011fa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fa20; body size 7 bytes.
#line 1 "ENTRY_1011fa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fa30; body size 7 bytes.
#line 1 "ENTRY_1011fa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fa40; body size 7 bytes.
#line 1 "ENTRY_1011fa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fa50; body size 7 bytes.
#line 1 "ENTRY_1011fa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fa60; body size 7 bytes.
#line 1 "ENTRY_1011fa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fa70; body size 7 bytes.
#line 1 "ENTRY_1011fa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fa80; body size 7 bytes.
#line 1 "ENTRY_1011fa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fa90; body size 7 bytes.
#line 1 "ENTRY_1011fa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011faa0; body size 7 bytes.
#line 1 "ENTRY_1011faa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011faa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fab0; body size 7 bytes.
#line 1 "ENTRY_1011fab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fab0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fac0; body size 7 bytes.
#line 1 "ENTRY_1011fac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fad0; body size 7 bytes.
#line 1 "ENTRY_1011fad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fae0; body size 7 bytes.
#line 1 "ENTRY_1011fae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fb00; body size 7 bytes.
#line 1 "ENTRY_1011fb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fb10; body size 7 bytes.
#line 1 "ENTRY_1011fb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fb20; body size 7 bytes.
#line 1 "ENTRY_1011fb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fb30; body size 7 bytes.
#line 1 "ENTRY_1011fb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fb40; body size 7 bytes.
#line 1 "ENTRY_1011fb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fb50; body size 7 bytes.
#line 1 "ENTRY_1011fb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fb60; body size 7 bytes.
#line 1 "ENTRY_1011fb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fb70; body size 7 bytes.
#line 1 "ENTRY_1011fb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fb80; body size 7 bytes.
#line 1 "ENTRY_1011fb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fb90; body size 7 bytes.
#line 1 "ENTRY_1011fb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fba0; body size 7 bytes.
#line 1 "ENTRY_1011fba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fbb0; body size 7 bytes.
#line 1 "ENTRY_1011fbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fbb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fbc0; body size 7 bytes.
#line 1 "ENTRY_1011fbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fbc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fbd0; body size 7 bytes.
#line 1 "ENTRY_1011fbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fbd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fbe0; body size 7 bytes.
#line 1 "ENTRY_1011fbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fbe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fbf0; body size 7 bytes.
#line 1 "ENTRY_1011fbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fbf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fc00; body size 7 bytes.
#line 1 "ENTRY_1011fc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fc10; body size 7 bytes.
#line 1 "ENTRY_1011fc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fc20; body size 7 bytes.
#line 1 "ENTRY_1011fc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fc30; body size 7 bytes.
#line 1 "ENTRY_1011fc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fc40; body size 7 bytes.
#line 1 "ENTRY_1011fc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fc50; body size 7 bytes.
#line 1 "ENTRY_1011fc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fc60; body size 7 bytes.
#line 1 "ENTRY_1011fc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fc70; body size 7 bytes.
#line 1 "ENTRY_1011fc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fc80; body size 7 bytes.
#line 1 "ENTRY_1011fc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fc90; body size 7 bytes.
#line 1 "ENTRY_1011fc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fca0; body size 7 bytes.
#line 1 "ENTRY_1011fca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fcb0; body size 7 bytes.
#line 1 "ENTRY_1011fcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fcb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fcc0; body size 7 bytes.
#line 1 "ENTRY_1011fcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fcc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fcd0; body size 7 bytes.
#line 1 "ENTRY_1011fcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fcd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fce0; body size 7 bytes.
#line 1 "ENTRY_1011fce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fcf0; body size 7 bytes.
#line 1 "ENTRY_1011fcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fcf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fd00; body size 7 bytes.
#line 1 "ENTRY_1011fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fd10; body size 7 bytes.
#line 1 "ENTRY_1011fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fd20; body size 7 bytes.
#line 1 "ENTRY_1011fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fd30; body size 7 bytes.
#line 1 "ENTRY_1011fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fd40; body size 7 bytes.
#line 1 "ENTRY_1011fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fd50; body size 7 bytes.
#line 1 "ENTRY_1011fd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fd60; body size 7 bytes.
#line 1 "ENTRY_1011fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fd80; body size 7 bytes.
#line 1 "ENTRY_1011fd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fd90; body size 7 bytes.
#line 1 "ENTRY_1011fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIPlatformDateTimeProvider);
  return;
}


// Reference entry 1011fda0; body size 7 bytes.
#line 1 "ENTRY_1011fda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fda0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fdb0; body size 7 bytes.
#line 1 "ENTRY_1011fdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fdb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fdc0; body size 7 bytes.
#line 1 "ENTRY_1011fdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fdc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fdd0; body size 7 bytes.
#line 1 "ENTRY_1011fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fdd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fde0; body size 7 bytes.
#line 1 "ENTRY_1011fde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fde0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fdf0; body size 7 bytes.
#line 1 "ENTRY_1011fdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fdf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fe00; body size 7 bytes.
#line 1 "ENTRY_1011fe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fe10; body size 7 bytes.
#line 1 "ENTRY_1011fe10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fe20; body size 7 bytes.
#line 1 "ENTRY_1011fe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fe30; body size 7 bytes.
#line 1 "ENTRY_1011fe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fe40; body size 7 bytes.
#line 1 "ENTRY_1011fe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fe50; body size 7 bytes.
#line 1 "ENTRY_1011fe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fe60; body size 7 bytes.
#line 1 "ENTRY_1011fe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fe70; body size 7 bytes.
#line 1 "ENTRY_1011fe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fe80; body size 7 bytes.
#line 1 "ENTRY_1011fe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fe90; body size 7 bytes.
#line 1 "ENTRY_1011fe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIUINotificationsDelegate);
  return;
}


// Reference entry 1011fea0; body size 7 bytes.
#line 1 "ENTRY_1011fea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011feb0; body size 7 bytes.
#line 1 "ENTRY_1011feb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011feb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fec0; body size 7 bytes.
#line 1 "ENTRY_1011fec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fed0; body size 7 bytes.
#line 1 "ENTRY_1011fed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fee0; body size 7 bytes.
#line 1 "ENTRY_1011fee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fee0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fef0; body size 7 bytes.
#line 1 "ENTRY_1011fef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011ff00; body size 7 bytes.
#line 1 "ENTRY_1011ff00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ff00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011ff10; body size 7 bytes.
#line 1 "ENTRY_1011ff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ff10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011ff20; body size 7 bytes.
#line 1 "ENTRY_1011ff20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ff20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011ff30; body size 7 bytes.
#line 1 "ENTRY_1011ff30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ff30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011ffd0; body size 7 bytes.
#line 1 "ENTRY_1011ffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ffd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011ffe0; body size 7 bytes.
#line 1 "ENTRY_1011ffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ffe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1011fff0; body size 7 bytes.
#line 1 "ENTRY_1011fff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10120000; body size 7 bytes.
#line 1 "ENTRY_10120000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120000(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10120070; body size 7 bytes.
#line 1 "ENTRY_10120070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10120080; body size 7 bytes.
#line 1 "ENTRY_10120080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10120090; body size 7 bytes.
#line 1 "ENTRY_10120090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101200a0; body size 7 bytes.
#line 1 "ENTRY_101200a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101200a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10120120; body size 7 bytes.
#line 1 "ENTRY_10120120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120120(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibAssertionFailureCallback);
  return;
}


// Reference entry 10120130; body size 7 bytes.
#line 1 "ENTRY_10120130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibCallUIThreadCallback);
  return;
}


// Reference entry 10120140; body size 7 bytes.
#line 1 "ENTRY_10120140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120140(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibCustomSubWizardCallback);
  return;
}


// Reference entry 10120150; body size 7 bytes.
#line 1 "ENTRY_10120150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120150(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDelegateFactory);
  return;
}


// Reference entry 10120160; body size 7 bytes.
#line 1 "ENTRY_10120160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDiagnosticConsoleLogCallback);
  return;
}


// Reference entry 10120170; body size 7 bytes.
#line 1 "ENTRY_10120170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibDiagnosticExtraInfoCallback);
  return;
}


// Reference entry 10120180; body size 7 bytes.
#line 1 "ENTRY_10120180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120180(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibLogCallback);
  return;
}


// Reference entry 10120190; body size 7 bytes.
#line 1 "ENTRY_10120190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120190(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibPlatformStringCallback);
  return;
}


// Reference entry 101201a0; body size 7 bytes.
#line 1 "ENTRY_101201a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101201a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibSonarCallback);
  return;
}


// Reference entry 101201b0; body size 7 bytes.
#line 1 "ENTRY_101201b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101201b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibTruncatedStringsCallback);
  return;
}


// Reference entry 10122460; body size 18 bytes.
#line 1 "ENTRY_10122460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10122460(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 10122480; body size 3 bytes.
#line 1 "ENTRY_10122480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10122480(void)

{
  return;
}


// Reference entry 101224f0; body size 17 bytes.
#line 1 "ENTRY_101224f0"

__declspec(naked) void FUN_101224f0(void)

{
  __asm lea eax, [ecx + 4]
  __asm mov dword ptr [ecx], LAB_1186d234
  __asm push eax
  __asm call LAB_1148cddb
  __asm pop ecx
  __asm ret
}




// Reference entry 10122510; body size 17 bytes.
#line 1 "ENTRY_10122510"

__declspec(naked) void FUN_10122510(void)

{
  __asm lea eax, [ecx + 4]
  __asm mov dword ptr [ecx], LAB_1186d234
  __asm push eax
  __asm call LAB_1148cddb
  __asm pop ecx
  __asm ret
}




// Reference entry 10122530; body size 17 bytes.
#line 1 "ENTRY_10122530"

__declspec(naked) void FUN_10122530(void)

{
  __asm lea eax, [ecx + 4]
  __asm mov dword ptr [ecx], LAB_1186d234
  __asm push eax
  __asm call LAB_1148cddb
  __asm pop ecx
  __asm ret
}




// Reference entry 10122550; body size 5 bytes.
#line 1 "ENTRY_10122550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10122550(undefined4 param_1,undefined4 param_2)

{
  return (undefined4)(param_2);
}


// Reference entry 101225c0; body size 65 bytes.
#line 1 "ENTRY_101225c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101225c0(int *param_2)
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


// Reference entry 10122620; body size 65 bytes.
#line 1 "ENTRY_10122620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122620(int *param_2)
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


// Reference entry 10122680; body size 36 bytes.
#line 1 "ENTRY_10122680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122680(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101226b0; body size 36 bytes.
#line 1 "ENTRY_101226b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101226b0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122700; body size 36 bytes.
#line 1 "ENTRY_10122700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122700(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122730; body size 36 bytes.
#line 1 "ENTRY_10122730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122730(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122760; body size 36 bytes.
#line 1 "ENTRY_10122760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122760(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122790; body size 36 bytes.
#line 1 "ENTRY_10122790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122790(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101227c0; body size 36 bytes.
#line 1 "ENTRY_101227c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101227c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101227f0; body size 36 bytes.
#line 1 "ENTRY_101227f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101227f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122820; body size 36 bytes.
#line 1 "ENTRY_10122820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122820(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122850; body size 36 bytes.
#line 1 "ENTRY_10122850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122850(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122880; body size 36 bytes.
#line 1 "ENTRY_10122880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122880(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101228b0; body size 36 bytes.
#line 1 "ENTRY_101228b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101228b0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101228e0; body size 36 bytes.
#line 1 "ENTRY_101228e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101228e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122910; body size 36 bytes.
#line 1 "ENTRY_10122910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122910(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122940; body size 36 bytes.
#line 1 "ENTRY_10122940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122940(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122970; body size 36 bytes.
#line 1 "ENTRY_10122970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122970(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101229a0; body size 36 bytes.
#line 1 "ENTRY_101229a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101229a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101229d0; body size 36 bytes.
#line 1 "ENTRY_101229d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101229d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122a00; body size 36 bytes.
#line 1 "ENTRY_10122a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122a00(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122a30; body size 36 bytes.
#line 1 "ENTRY_10122a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122a30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122a60; body size 36 bytes.
#line 1 "ENTRY_10122a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122a60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122a90; body size 36 bytes.
#line 1 "ENTRY_10122a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122a90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122ae0; body size 36 bytes.
#line 1 "ENTRY_10122ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122ae0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122b10; body size 36 bytes.
#line 1 "ENTRY_10122b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122b10(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122b40; body size 36 bytes.
#line 1 "ENTRY_10122b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122b40(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122b70; body size 36 bytes.
#line 1 "ENTRY_10122b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122b70(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122bc0; body size 36 bytes.
#line 1 "ENTRY_10122bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122bc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122bf0; body size 36 bytes.
#line 1 "ENTRY_10122bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122bf0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122c20; body size 36 bytes.
#line 1 "ENTRY_10122c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122c20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122c50; body size 36 bytes.
#line 1 "ENTRY_10122c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122c50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122c80; body size 36 bytes.
#line 1 "ENTRY_10122c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122c80(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122cb0; body size 36 bytes.
#line 1 "ENTRY_10122cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122cb0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122ce0; body size 36 bytes.
#line 1 "ENTRY_10122ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122ce0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122d30; body size 36 bytes.
#line 1 "ENTRY_10122d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122d30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122d60; body size 36 bytes.
#line 1 "ENTRY_10122d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122d60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122d90; body size 36 bytes.
#line 1 "ENTRY_10122d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122d90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122dc0; body size 36 bytes.
#line 1 "ENTRY_10122dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122dc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122df0; body size 36 bytes.
#line 1 "ENTRY_10122df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122df0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122e20; body size 36 bytes.
#line 1 "ENTRY_10122e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122e20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122e50; body size 36 bytes.
#line 1 "ENTRY_10122e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122e50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122e80; body size 36 bytes.
#line 1 "ENTRY_10122e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122e80(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122eb0; body size 36 bytes.
#line 1 "ENTRY_10122eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122eb0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122f00; body size 36 bytes.
#line 1 "ENTRY_10122f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122f00(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122f30; body size 36 bytes.
#line 1 "ENTRY_10122f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122f30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122f60; body size 36 bytes.
#line 1 "ENTRY_10122f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122f60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122f90; body size 36 bytes.
#line 1 "ENTRY_10122f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122f90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122fc0; body size 36 bytes.
#line 1 "ENTRY_10122fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122fc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10122ff0; body size 36 bytes.
#line 1 "ENTRY_10122ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10122ff0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123020; body size 36 bytes.
#line 1 "ENTRY_10123020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123020(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123050; body size 36 bytes.
#line 1 "ENTRY_10123050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123050(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123080; body size 36 bytes.
#line 1 "ENTRY_10123080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123080(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101230b0; body size 36 bytes.
#line 1 "ENTRY_101230b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101230b0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101230e0; body size 36 bytes.
#line 1 "ENTRY_101230e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101230e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123110; body size 36 bytes.
#line 1 "ENTRY_10123110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123110(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123140; body size 36 bytes.
#line 1 "ENTRY_10123140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123140(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123170; body size 36 bytes.
#line 1 "ENTRY_10123170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123170(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101231c0; body size 36 bytes.
#line 1 "ENTRY_101231c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101231c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123210; body size 36 bytes.
#line 1 "ENTRY_10123210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123210(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123260; body size 36 bytes.
#line 1 "ENTRY_10123260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123260(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123290; body size 36 bytes.
#line 1 "ENTRY_10123290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123290(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101232c0; body size 36 bytes.
#line 1 "ENTRY_101232c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101232c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101232f0; body size 36 bytes.
#line 1 "ENTRY_101232f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101232f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123340; body size 36 bytes.
#line 1 "ENTRY_10123340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123340(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123370; body size 36 bytes.
#line 1 "ENTRY_10123370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123370(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101233a0; body size 36 bytes.
#line 1 "ENTRY_101233a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101233a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101233d0; body size 36 bytes.
#line 1 "ENTRY_101233d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101233d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123400; body size 36 bytes.
#line 1 "ENTRY_10123400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123400(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123430; body size 36 bytes.
#line 1 "ENTRY_10123430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123430(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123460; body size 36 bytes.
#line 1 "ENTRY_10123460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123460(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101234b0; body size 36 bytes.
#line 1 "ENTRY_101234b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101234b0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101234e0; body size 36 bytes.
#line 1 "ENTRY_101234e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101234e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123510; body size 36 bytes.
#line 1 "ENTRY_10123510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123510(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123540; body size 36 bytes.
#line 1 "ENTRY_10123540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123540(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123570; body size 36 bytes.
#line 1 "ENTRY_10123570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123570(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101235a0; body size 36 bytes.
#line 1 "ENTRY_101235a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101235a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101235d0; body size 36 bytes.
#line 1 "ENTRY_101235d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101235d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123600; body size 36 bytes.
#line 1 "ENTRY_10123600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123600(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123630; body size 36 bytes.
#line 1 "ENTRY_10123630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123630(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123660; body size 36 bytes.
#line 1 "ENTRY_10123660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123660(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123690; body size 36 bytes.
#line 1 "ENTRY_10123690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123690(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101236c0; body size 36 bytes.
#line 1 "ENTRY_101236c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101236c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101236f0; body size 36 bytes.
#line 1 "ENTRY_101236f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101236f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123720; body size 36 bytes.
#line 1 "ENTRY_10123720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123720(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123750; body size 36 bytes.
#line 1 "ENTRY_10123750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123750(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123780; body size 36 bytes.
#line 1 "ENTRY_10123780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123780(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101237b0; body size 36 bytes.
#line 1 "ENTRY_101237b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101237b0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101237e0; body size 36 bytes.
#line 1 "ENTRY_101237e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101237e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123810; body size 36 bytes.
#line 1 "ENTRY_10123810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123810(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123840; body size 36 bytes.
#line 1 "ENTRY_10123840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123840(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123870; body size 36 bytes.
#line 1 "ENTRY_10123870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123870(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101238a0; body size 36 bytes.
#line 1 "ENTRY_101238a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101238a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101238d0; body size 36 bytes.
#line 1 "ENTRY_101238d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101238d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123900; body size 36 bytes.
#line 1 "ENTRY_10123900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123900(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123930; body size 36 bytes.
#line 1 "ENTRY_10123930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123930(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123960; body size 36 bytes.
#line 1 "ENTRY_10123960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123960(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123990; body size 36 bytes.
#line 1 "ENTRY_10123990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123990(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101239c0; body size 36 bytes.
#line 1 "ENTRY_101239c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101239c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101239f0; body size 36 bytes.
#line 1 "ENTRY_101239f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101239f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123a20; body size 36 bytes.
#line 1 "ENTRY_10123a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123a20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123a50; body size 36 bytes.
#line 1 "ENTRY_10123a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123a50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123a80; body size 36 bytes.
#line 1 "ENTRY_10123a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123a80(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123ad0; body size 36 bytes.
#line 1 "ENTRY_10123ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123ad0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123b00; body size 36 bytes.
#line 1 "ENTRY_10123b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123b00(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123b30; body size 36 bytes.
#line 1 "ENTRY_10123b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123b30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123b60; body size 36 bytes.
#line 1 "ENTRY_10123b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123b60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123b90; body size 36 bytes.
#line 1 "ENTRY_10123b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123b90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123bc0; body size 36 bytes.
#line 1 "ENTRY_10123bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123bc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123bf0; body size 36 bytes.
#line 1 "ENTRY_10123bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123bf0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123c20; body size 36 bytes.
#line 1 "ENTRY_10123c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123c20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123c50; body size 36 bytes.
#line 1 "ENTRY_10123c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123c50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123c80; body size 36 bytes.
#line 1 "ENTRY_10123c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123c80(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123cb0; body size 36 bytes.
#line 1 "ENTRY_10123cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123cb0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123ce0; body size 36 bytes.
#line 1 "ENTRY_10123ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123ce0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123d10; body size 36 bytes.
#line 1 "ENTRY_10123d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123d10(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123d40; body size 36 bytes.
#line 1 "ENTRY_10123d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123d40(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123d70; body size 36 bytes.
#line 1 "ENTRY_10123d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123d70(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123da0; body size 36 bytes.
#line 1 "ENTRY_10123da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123da0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123dd0; body size 36 bytes.
#line 1 "ENTRY_10123dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123dd0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123e00; body size 36 bytes.
#line 1 "ENTRY_10123e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123e00(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123e30; body size 36 bytes.
#line 1 "ENTRY_10123e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123e30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123e60; body size 36 bytes.
#line 1 "ENTRY_10123e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123e60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123e90; body size 36 bytes.
#line 1 "ENTRY_10123e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123e90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123ec0; body size 36 bytes.
#line 1 "ENTRY_10123ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123ec0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123ef0; body size 36 bytes.
#line 1 "ENTRY_10123ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123ef0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123f40; body size 36 bytes.
#line 1 "ENTRY_10123f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123f40(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123f90; body size 36 bytes.
#line 1 "ENTRY_10123f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123f90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123fc0; body size 36 bytes.
#line 1 "ENTRY_10123fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123fc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10123ff0; body size 36 bytes.
#line 1 "ENTRY_10123ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10123ff0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10124020; body size 36 bytes.
#line 1 "ENTRY_10124020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10124020(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10124050; body size 36 bytes.
#line 1 "ENTRY_10124050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10124050(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101240a0; body size 36 bytes.
#line 1 "ENTRY_101240a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101240a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101240d0; body size 36 bytes.
#line 1 "ENTRY_101240d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101240d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10124100; body size 36 bytes.
#line 1 "ENTRY_10124100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10124100(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10124150; body size 36 bytes.
#line 1 "ENTRY_10124150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10124150(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101241a0; body size 36 bytes.
#line 1 "ENTRY_101241a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101241a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101241d0; body size 36 bytes.
#line 1 "ENTRY_101241d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101241d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10124200; body size 36 bytes.
#line 1 "ENTRY_10124200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10124200(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10124230; body size 36 bytes.
#line 1 "ENTRY_10124230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10124230(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10124260; body size 36 bytes.
#line 1 "ENTRY_10124260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10124260(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10124290; body size 36 bytes.
#line 1 "ENTRY_10124290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10124290(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101242c0; body size 36 bytes.
#line 1 "ENTRY_101242c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101242c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)((0x0))) {
    ((SCVtbl_2_0*)((int *)*param_1))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 101242f0; body size 76 bytes.
#line 1 "ENTRY_101242f0"

__declspec(naked) void FUN_101242f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push edi
  __asm push 8
  __asm mov edi, ecx
  __asm call LAB_10024f14
  __asm mov esi, eax
  __asm add esp, 4
  __asm mov dword ptr [esp + 8], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x10
  __asm mov edx, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [edx]
  __asm mov dword ptr [esi], ecx
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor esi, esi
  __asm mov eax, dword ptr [edi]
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0b
  __asm push 8
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov dword ptr [edi], esi
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10124350; body size 172 bytes.
#line 1 "ENTRY_10124350"

__declspec(naked) void FUN_10124350(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp edi, ebx
  __asm je LAB_101243f5
  __asm cmp dword ptr [edi + 8], 0
  __asm _emit 0x74 __asm _emit 0x37
  __asm push esi
  __asm push dword ptr [edi + 4]
  __asm lea esi, [edi + 4]
  __asm push esi
  __asm call LAB_1008204c
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [esp + 0x18], eax
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm push dword ptr [edi + 0x10]
  __asm push dword ptr [edi + 0xc]
  __asm call LAB_10072f8e
  __asm add esp, 0x14
  __asm pop esi
  __asm mov eax, dword ptr [ebx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm mov eax, dword ptr [ebx + 8]
  __asm mov dword ptr [ebx + 4], ecx
  __asm mov ecx, dword ptr [edi + 8]
  __asm mov dword ptr [edi + 8], eax
  __asm mov eax, dword ptr [ebx + 0xc]
  __asm mov dword ptr [ebx + 8], ecx
  __asm mov ecx, dword ptr [edi + 0xc]
  __asm mov dword ptr [edi + 0xc], eax
  __asm mov eax, dword ptr [ebx + 0x10]
  __asm mov dword ptr [ebx + 0xc], ecx
  __asm mov ecx, dword ptr [edi + 0x10]
  __asm mov dword ptr [edi + 0x10], eax
  __asm mov eax, dword ptr [ebx + 0x14]
  __asm mov dword ptr [ebx + 0x10], ecx
  __asm mov ecx, dword ptr [edi + 0x14]
  __asm mov dword ptr [edi + 0x14], eax
  __asm mov eax, dword ptr [ebx + 0x18]
  __asm mov dword ptr [ebx + 0x14], ecx
  __asm mov ecx, dword ptr [edi + 0x18]
  __asm mov dword ptr [edi + 0x18], eax
  __asm mov eax, dword ptr [ebx + 0x1c]
  __asm mov dword ptr [ebx + 0x18], ecx
  __asm mov ecx, dword ptr [edi + 0x1c]
  __asm mov dword ptr [edi + 0x1c], eax
  __asm mov dword ptr [ebx + 0x1c], ecx
  __asm mov eax, edi
  __asm pop edi
  __asm pop ebx
  __asm ret 4
}




// Reference entry 10124430; body size 172 bytes.
#line 1 "ENTRY_10124430"

__declspec(naked) void FUN_10124430(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp edi, ebx
  __asm je LAB_101244d5
  __asm cmp dword ptr [edi + 8], 0
  __asm _emit 0x74 __asm _emit 0x37
  __asm push esi
  __asm push dword ptr [edi + 4]
  __asm lea esi, [edi + 4]
  __asm push esi
  __asm call LAB_1008204c
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [esp + 0x18], eax
  __asm lea eax, [esp + 0x18]
  __asm push eax
  __asm push dword ptr [edi + 0x10]
  __asm push dword ptr [edi + 0xc]
  __asm call LAB_10072f8e
  __asm add esp, 0x14
  __asm pop esi
  __asm mov eax, dword ptr [ebx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm mov eax, dword ptr [ebx + 8]
  __asm mov dword ptr [ebx + 4], ecx
  __asm mov ecx, dword ptr [edi + 8]
  __asm mov dword ptr [edi + 8], eax
  __asm mov eax, dword ptr [ebx + 0xc]
  __asm mov dword ptr [ebx + 8], ecx
  __asm mov ecx, dword ptr [edi + 0xc]
  __asm mov dword ptr [edi + 0xc], eax
  __asm mov eax, dword ptr [ebx + 0x10]
  __asm mov dword ptr [ebx + 0xc], ecx
  __asm mov ecx, dword ptr [edi + 0x10]
  __asm mov dword ptr [edi + 0x10], eax
  __asm mov eax, dword ptr [ebx + 0x14]
  __asm mov dword ptr [ebx + 0x10], ecx
  __asm mov ecx, dword ptr [edi + 0x14]
  __asm mov dword ptr [edi + 0x14], eax
  __asm mov eax, dword ptr [ebx + 0x18]
  __asm mov dword ptr [ebx + 0x14], ecx
  __asm mov ecx, dword ptr [edi + 0x18]
  __asm mov dword ptr [edi + 0x18], eax
  __asm mov eax, dword ptr [ebx + 0x1c]
  __asm mov dword ptr [ebx + 0x18], ecx
  __asm mov ecx, dword ptr [edi + 0x1c]
  __asm mov dword ptr [edi + 0x1c], eax
  __asm mov dword ptr [ebx + 0x1c], ecx
  __asm mov eax, edi
  __asm pop edi
  __asm pop ebx
  __asm ret 4
}




// Reference entry 10124dd0; body size 14 bytes.
#line 1 "ENTRY_10124dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10124dd0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10124df0; body size 14 bytes.
#line 1 "ENTRY_10124df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10124df0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10124ea0; body size 3 bytes.
#line 1 "ENTRY_10124ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10124ea0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10124eb0; body size 3 bytes.
#line 1 "ENTRY_10124eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10124eb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10124ec0; body size 3 bytes.
#line 1 "ENTRY_10124ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10124ec0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10124ed0; body size 3 bytes.
#line 1 "ENTRY_10124ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10124ed0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10124f40; body size 6 bytes.
#line 1 "ENTRY_10124f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10124f40(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10124f50; body size 9 bytes.
#line 1 "ENTRY_10124f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10124f50(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10124f60; body size 10 bytes.
#line 1 "ENTRY_10124f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10124f60(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10124f70; body size 33 bytes.
#line 1 "ENTRY_10124f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10124f70(void *param_1,size_t param_2,void *param_3)

{
  memcpy(param_1,param_3,param_2);
  *(undefined1*)((int)param_1 + param_2) = (undefined1)(0);
  return;
}


// Reference entry 10124fa0; body size 50 bytes.
#line 1 "ENTRY_10124fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10124fa0(void *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  memcpy(param_1,param_2,param_3);
  memcpy((char *)(param_3 + (int)param_1),param_4,param_5);
  *(undefined1*)((int)(param_3 + (int)param_1) + param_5) = (undefined1)(0);
  return;
}


// Reference entry 10124fe0; body size 16 bytes.
#line 1 "ENTRY_10124fe0"

__declspec(naked) void FUN_10124fe0(void)

{
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm call LAB_10049a94
  __asm ret 8
}




// Reference entry 10125000; body size 12 bytes.
#line 1 "ENTRY_10125000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10125000(SCStr *param_1)

{
  ((SCStr *)(param_1))->hash();
  return;
}


// Reference entry 10125e40; body size 33 bytes.
#line 1 "ENTRY_10125e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10125e40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10126700; body size 27 bytes.
#line 1 "ENTRY_10126700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10126700(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4)(param_1);
}


// Reference entry 101296c0; body size 35 bytes.
#line 1 "ENTRY_101296c0"

__declspec(naked) void FUN_101296c0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esp + 4]
  __asm add dword ptr [eax], 0x23
  __asm mov eax, dword ptr [ecx]
  __asm mov edx, dword ptr [eax - 4]
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x03
  __asm mov dword ptr [ecx], edx
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}




// Reference entry 101296f0; body size 3 bytes.
#line 1 "ENTRY_101296f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101296f0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10129700; body size 3 bytes.
#line 1 "ENTRY_10129700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10129700(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10129710; body size 22 bytes.
#line 1 "ENTRY_10129710"

__declspec(naked) void FUN_10129710(void)

{
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret
}




// Reference entry 10129750; body size 5 bytes.
#line 1 "ENTRY_10129750"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */void * __cdecl FUN_10129750(uint param_1){ __asm jmp FUN_10024f14 }


// Reference entry 10129880; body size 52 bytes.
#line 1 "ENTRY_10129880"

__declspec(naked) void FUN_10129880(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, 0x7fffffff
  __asm or edx, 0xf
  __asm push esi
  __asm mov esi, dword ptr [ecx + 0x14]
  __asm cmp edx, eax
  __asm _emit 0x77 __asm _emit 0x1c
  __asm mov ecx, esi
  __asm _emit 0xd1 __asm _emit 0xe9
  __asm sub eax, ecx
  __asm cmp esi, eax
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x7fffffff
  __asm pop esi
  __asm ret 4
  __asm add ecx, esi
  __asm cmp edx, ecx
  __asm cmovb edx, ecx
  __asm mov eax, edx
  __asm pop esi
  __asm ret 4
}




// Reference entry 101298d0; body size 51 bytes.
#line 1 "ENTRY_101298d0"

__declspec(naked) void FUN_101298d0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 0xc]
  __asm or ecx, 0xf
  __asm push esi
  __asm push edi
  __asm cmp ecx, edx
  __asm _emit 0x77 __asm _emit 0x1d
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov eax, edx
  __asm mov esi, edi
  __asm _emit 0xd1 __asm _emit 0xee
  __asm sub eax, esi
  __asm cmp edi, eax
  __asm _emit 0x77 __asm _emit 0x0d
  __asm lea eax, [esi + edi]
  __asm cmp ecx, eax
  __asm pop edi
  __asm cmovb ecx, eax
  __asm mov eax, ecx
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm mov eax, edx
  __asm pop esi
  __asm ret
}




// Reference entry 10129910; body size 13 bytes.
#line 1 "ENTRY_10129910"

__declspec(naked) void FUN_10129910(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm dec eax
  __asm or eax, 1
  __asm bsr eax, eax
  __asm inc eax
  __asm ret
}




// Reference entry 10129920; body size 20 bytes.
#line 1 "ENTRY_10129920"

__declspec(naked) void FUN_10129920(void)

{
  __asm cmp dword ptr [ecx + 8], 0x15555555
  __asm _emit 0x74 __asm _emit 0x01
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}




// Reference entry 10129940; body size 66 bytes.
#line 1 "ENTRY_10129940"

__declspec(naked) void FUN_10129940(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm inc eax
  __asm movd xmm0, eax
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0
  __asm shr eax, 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm mov eax, dword ptr [ecx + 0x1c]
  __asm cvtpd2ps xmm1, xmm0
  __asm movd xmm0, eax
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0
  __asm shr eax, 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm cvtpd2ps xmm0, xmm0
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x5e __asm _emit 0xc8
  __asm comiss xmm1, dword ptr [ecx]
  __asm seta al
  __asm ret
}




// Reference entry 101299a0; body size 101 bytes.
#line 1 "ENTRY_101299a0"

__declspec(naked) void FUN_101299a0(void)

{
  __asm push ebx
  __asm push ebp
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp dword ptr [edi + 0x14], 0x10
  __asm mov ebp, dword ptr [edi + 0x10]
  __asm _emit 0x72 __asm _emit 0x02
  __asm mov edi, dword ptr [edi]
  __asm cmp ebp, 0x10
  __asm _emit 0x73 __asm _emit 0x16
  __asm movups xmm0, xmmword ptr [edi]
  __asm pop edi
  __asm movups xmmword ptr [ebx], xmm0
  __asm mov dword ptr [ebx + 0x10], ebp
  __asm pop ebp
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x14 __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ebx
  __asm ret 4
  __asm push esi
  __asm mov esi, ebp
  __asm mov eax, 0x7fffffff
  __asm or esi, 0xf
  __asm cmp esi, eax
  __asm cmova esi, eax
  __asm lea eax, [esi + 1]
  __asm push eax
  __asm call LAB_1000b73a
  __asm lea ecx, [ebp + 1]
  __asm mov dword ptr [ebx], eax
  __asm push ecx
  __asm push edi
  __asm push eax
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm mov dword ptr [ebx + 0x10], ebp
  __asm mov dword ptr [ebx + 0x14], esi
  __asm pop esi
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm ret 4
}




// Reference entry 10129ad0; body size 5 bytes.
#line 1 "ENTRY_10129ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10129ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129ae0; body size 11 bytes.
#line 1 "ENTRY_10129ae0"

__declspec(naked) void FUN_10129ae0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm or eax, 1
  __asm bsr eax, eax
  __asm ret
}




// Reference entry 10129d10; body size 3 bytes.
#line 1 "ENTRY_10129d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129d20; body size 3 bytes.
#line 1 "ENTRY_10129d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129d30; body size 3 bytes.
#line 1 "ENTRY_10129d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129d40; body size 3 bytes.
#line 1 "ENTRY_10129d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129d50; body size 3 bytes.
#line 1 "ENTRY_10129d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129d60; body size 3 bytes.
#line 1 "ENTRY_10129d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129d70; body size 3 bytes.
#line 1 "ENTRY_10129d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129d80; body size 3 bytes.
#line 1 "ENTRY_10129d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129d90; body size 3 bytes.
#line 1 "ENTRY_10129d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129da0; body size 3 bytes.
#line 1 "ENTRY_10129da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129db0; body size 4 bytes.
#line 1 "ENTRY_10129db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10129db0(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 10129dc0; body size 3 bytes.
#line 1 "ENTRY_10129dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129dd0; body size 3 bytes.
#line 1 "ENTRY_10129dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129de0; body size 3 bytes.
#line 1 "ENTRY_10129de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129df0; body size 3 bytes.
#line 1 "ENTRY_10129df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129e80; body size 5 bytes.
#line 1 "ENTRY_10129e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10129e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129e90; body size 8 bytes.
#line 1 "ENTRY_10129e90"

__declspec(naked) void FUN_10129e90(void)

{
  __asm cmp dword ptr [ecx + 0x14], 0x10
  __asm setae al
  __asm ret
}




// Reference entry 10129ea0; body size 13 bytes.
#line 1 "ENTRY_10129ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10129ea0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10129eb0; body size 3 bytes.
#line 1 "ENTRY_10129eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129ec0; body size 3 bytes.
#line 1 "ENTRY_10129ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10129ed0; body size 23 bytes.
#line 1 "ENTRY_10129ed0"

__declspec(naked) void FUN_10129ed0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm movups xmm0, xmmword ptr [eax]
  __asm movups xmmword ptr [ecx], xmm0
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x7e __asm _emit 0x40 __asm _emit 0x10
  __asm movq qword ptr [ecx + 0x10], xmm0
  __asm ret 4
}




// Reference entry 10129f60; body size 162 bytes.
#line 1 "ENTRY_10129f60"

__declspec(naked) void FUN_10129f60(void)

{
  __asm push ecx
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 8], 0
  __asm _emit 0x74 __asm _emit 0x37
  __asm push esi
  __asm push dword ptr [edi + 4]
  __asm lea esi, [edi + 4]
  __asm push esi
  __asm call LAB_1008204c
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [esp + 0x10], eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push dword ptr [edi + 0x10]
  __asm push dword ptr [edi + 0xc]
  __asm call LAB_10072f8e
  __asm add esp, 0x14
  __asm pop esi
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm mov eax, dword ptr [edx + 8]
  __asm mov dword ptr [edx + 4], ecx
  __asm mov ecx, dword ptr [edi + 8]
  __asm mov dword ptr [edi + 8], eax
  __asm mov eax, dword ptr [edx + 0xc]
  __asm mov dword ptr [edx + 8], ecx
  __asm mov ecx, dword ptr [edi + 0xc]
  __asm mov dword ptr [edi + 0xc], eax
  __asm mov eax, dword ptr [edx + 0x10]
  __asm mov dword ptr [edx + 0xc], ecx
  __asm mov ecx, dword ptr [edi + 0x10]
  __asm mov dword ptr [edi + 0x10], eax
  __asm mov eax, dword ptr [edx + 0x14]
  __asm mov dword ptr [edx + 0x10], ecx
  __asm mov ecx, dword ptr [edi + 0x14]
  __asm mov dword ptr [edi + 0x14], eax
  __asm mov eax, dword ptr [edx + 0x18]
  __asm mov dword ptr [edx + 0x14], ecx
  __asm mov ecx, dword ptr [edi + 0x18]
  __asm mov dword ptr [edi + 0x18], eax
  __asm mov eax, dword ptr [edx + 0x1c]
  __asm mov dword ptr [edx + 0x18], ecx
  __asm mov ecx, dword ptr [edi + 0x1c]
  __asm mov dword ptr [edi + 0x1c], eax
  __asm mov dword ptr [edx + 0x1c], ecx
  __asm pop edi
  __asm pop ecx
  __asm ret 8
}




// Reference entry 1012a030; body size 12 bytes.
#line 1 "ENTRY_1012a030"

__declspec(naked) void FUN_1012a030(void)

{
  __asm cmp dword ptr [ecx + 0x14], 0x10
  __asm _emit 0x72 __asm _emit 0x03
  __asm mov eax, dword ptr [ecx]
  __asm ret
  __asm mov eax, ecx
  __asm ret
}




// Reference entry 1012a040; body size 12 bytes.
#line 1 "ENTRY_1012a040"

__declspec(naked) void FUN_1012a040(void)

{
  __asm cmp dword ptr [ecx + 0x14], 0x10
  __asm _emit 0x72 __asm _emit 0x03
  __asm mov eax, dword ptr [ecx]
  __asm ret
  __asm mov eax, ecx
  __asm ret
}




// Reference entry 1012a050; body size 3 bytes.
#line 1 "ENTRY_1012a050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1012a050(void)

{
  return;
}


// Reference entry 1012a060; body size 3 bytes.
#line 1 "ENTRY_1012a060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1012a060(void)

{
  return;
}


// Reference entry 1012a070; body size 3 bytes.
#line 1 "ENTRY_1012a070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1012a070(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1012a130; body size 11 bytes.
#line 1 "ENTRY_1012a130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1012a130(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1012a140; body size 6 bytes.
#line 1 "ENTRY_1012a140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1012a140(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1012a150; body size 3 bytes.
#line 1 "ENTRY_1012a150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1012a150(void)

{
  return;
}


// Reference entry 1012a160; body size 3 bytes.
#line 1 "ENTRY_1012a160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1012a160(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1012a170; body size 97 bytes.
#line 1 "ENTRY_1012a170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1012a170(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4*)(param_2 + 4) = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_2 + 8) = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  *(undefined4*)(param_2 + 0xc) = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x10));
  *(undefined4*)(param_1 + 0x10) = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  *(undefined4*)(param_2 + 0x10) = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x14));
  *(undefined4*)(param_1 + 0x14) = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  *(undefined4*)(param_2 + 0x14) = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x18));
  *(undefined4*)(param_1 + 0x18) = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4*)(param_2 + 0x18) = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  *(undefined4*)(param_2 + 0x1c) = (undefined4)(uVar1);
  return;
}


// Reference entry 1012a1f0; body size 45 bytes.
#line 1 "ENTRY_1012a1f0"

__declspec(naked) void FUN_1012a1f0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov edx, dword ptr [edi]
  __asm mov dword ptr [edi], eax
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [esi], edx
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm mov eax, dword ptr [esi + 8]
  __asm mov dword ptr [esi + 4], ecx
  __asm mov ecx, dword ptr [edi + 8]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm mov dword ptr [esi + 8], ecx
  __asm pop esi
  __asm ret 4
}




// Reference entry 1012a230; body size 33 bytes.
#line 1 "ENTRY_1012a230"

__declspec(naked) void FUN_1012a230(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov edx, dword ptr [edi]
  __asm mov dword ptr [edi], eax
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [esi], edx
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm pop edi
  __asm mov dword ptr [esi + 4], ecx
  __asm pop esi
  __asm ret 4
}




// Reference entry 1012a260; body size 40 bytes.
#line 1 "ENTRY_1012a260"

__declspec(naked) void FUN_1012a260(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm movups xmm0, xmmword ptr [eax]
  __asm movups xmmword ptr [ecx], xmm0
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x7e __asm _emit 0x40 __asm _emit 0x10
  __asm movq qword ptr [ecx + 0x10], xmm0
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x14 __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [eax], 0
  __asm ret 8
}




// Reference entry 1012a3c0; body size 18 bytes.
#line 1 "ENTRY_1012a3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1012a3c0(undefined1 *param_1)

{
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 1012a3e0; body size 14 bytes.
#line 1 "ENTRY_1012a3e0"

__declspec(naked) void FUN_1012a3e0(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}




// Reference entry 1012a400; body size 14 bytes.
#line 1 "ENTRY_1012a400"

__declspec(naked) void FUN_1012a400(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}




// Reference entry 1012a420; body size 13 bytes.
#line 1 "ENTRY_1012a420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1012a420(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1012a430; body size 13 bytes.
#line 1 "ENTRY_1012a430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1012a430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1012a440; body size 12 bytes.
#line 1 "ENTRY_1012a440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1012a440(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1012a450; body size 12 bytes.
#line 1 "ENTRY_1012a450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1012a450(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1012a460; body size 11 bytes.
#line 1 "ENTRY_1012a460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1012a460(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1012a470; body size 11 bytes.
#line 1 "ENTRY_1012a470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1012a470(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1012a480; body size 43 bytes.
#line 1 "ENTRY_1012a480"

__declspec(naked) void FUN_1012a480(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov edx, dword ptr [esp + 4]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ebx + 4]
  __asm mov dword ptr [edi], eax
  __asm mov esi, dword ptr [eax + 4]
  __asm mov dword ptr [esi], edx
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [ecx], ebx
  __asm mov dword ptr [edx + 4], esi
  __asm mov dword ptr [eax + 4], edi
  __asm pop edi
  __asm pop esi
  __asm mov dword ptr [ebx + 4], ecx
  __asm pop ebx
  __asm ret
}




// Reference entry 1012cb20; body size 90 bytes.
#line 1 "ENTRY_1012cb20"

__declspec(naked) void FUN_1012cb20(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x15555555
  __asm _emit 0x77 __asm _emit 0x4a
  __asm lea eax, [eax + eax*2]
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm _emit 0x72 __asm _emit 0x28
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x36
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0c
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0c
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}




// Reference entry 1012cba0; body size 87 bytes.
#line 1 "ENTRY_1012cba0"

__declspec(naked) void FUN_1012cba0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm _emit 0x77 __asm _emit 0x47
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm _emit 0x72 __asm _emit 0x28
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x36
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0c
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0c
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}




// Reference entry 1012cc10; body size 330 bytes.
#line 1 "ENTRY_1012cc10"

__declspec(naked) void FUN_1012cc10(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm sub esp, 0xc
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm push edi
  __asm mov edi, edx
  __asm mov ebx, ecx
  __asm lea ecx, [edi + 1]
  __asm mov al, byte ptr [edi]
  __asm inc edi
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm mov ebp, dword ptr [ebx + 0x10]
  __asm sub edi, ecx
  __asm mov ecx, dword ptr [ebx + 0x14]
  __asm mov eax, ecx
  __asm sub eax, ebp
  __asm mov dword ptr [esp + 0x10], ecx
  __asm cmp edi, eax
  __asm _emit 0x77 __asm _emit 0x2d
  __asm lea eax, [edi + ebp]
  __asm mov dword ptr [ebx + 0x10], eax
  __asm mov eax, ebx
  __asm cmp ecx, 0x10
  __asm _emit 0x72 __asm _emit 0x02
  __asm mov eax, dword ptr [ebx]
  __asm push edi
  __asm lea esi, [eax + ebp]
  __asm push edx
  __asm push esi
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm mov byte ptr [esi + edi], 0
  __asm mov eax, ebx
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0xc
  __asm ret 4
  __asm mov edx, 0x7fffffff
  __asm mov eax, edx
  __asm sub eax, ebp
  __asm cmp eax, edi
  __asm jb LAB_1012cd55
  __asm lea esi, [edi + ebp]
  __asm or esi, 0xf
  __asm cmp esi, edx
  __asm _emit 0x76 __asm _emit 0x04
  __asm mov esi, edx
  __asm _emit 0xeb __asm _emit 0x18
  __asm mov eax, ecx
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm sub edx, eax
  __asm cmp ecx, edx
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov esi, 0x7fffffff
  __asm _emit 0xeb __asm _emit 0x07
  __asm add eax, ecx
  __asm cmp esi, eax
  __asm cmovb esi, eax
  __asm lea eax, [esi + 1]
  __asm mov ecx, ebx
  __asm push eax
  __asm call LAB_1000b73a
  __asm cmp dword ptr [esp + 0x10], 0x10
  __asm lea ecx, [edi + ebp]
  __asm mov dword ptr [ebx + 0x14], esi
  __asm mov dword ptr [esp + 0x18], eax
  __asm lea esi, [eax + ebp]
  __asm mov dword ptr [ebx + 0x10], ecx
  __asm mov dword ptr [esp + 0x14], esi
  __asm push ebp
  __asm _emit 0x72 __asm _emit 0x61
  __asm mov esi, dword ptr [ebx]
  __asm push esi
  __asm push eax
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm mov ebp, dword ptr [esp + 0x20]
  __asm push edi
  __asm push eax
  __asm push ebp
  __asm call LAB_1148cded
  __asm mov ecx, dword ptr [esp + 0x28]
  __asm add esp, 0x18
  __asm inc ecx
  __asm mov byte ptr [edi + ebp], 0
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub esi, edx
  __asm lea eax, [esi - 4]
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x1e
  __asm mov esi, edx
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm mov eax, dword ptr [esp + 0x20]
  __asm add esp, 8
  __asm mov dword ptr [ebx], eax
  __asm mov eax, ebx
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0xc
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm push ebx
  __asm push eax
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cded
  __asm mov eax, dword ptr [esp + 0x30]
  __asm add esp, 0x18
  __asm mov byte ptr [esi + edi], 0
  __asm mov dword ptr [ebx], eax
  __asm mov eax, ebx
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0xc
  __asm ret 4
  __asm call LAB_10046a33
}




// Reference entry 1012d0f0; body size 13 bytes.
#line 1 "ENTRY_1012d0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1012d0f0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = (undefined1)(*param_2);
  return;
}


// Reference entry 1012d100; body size 39 bytes.
#line 1 "ENTRY_1012d100"

__declspec(naked) void FUN_1012d100(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, edx
  __asm push esi
  __asm push edi
  __asm mov esi, ecx
  __asm lea edi, [eax + 1]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov cl, byte ptr [eax]
  __asm inc eax
  __asm test cl, cl
  __asm _emit 0x75 __asm _emit 0xf9
  __asm sub eax, edi
  __asm mov ecx, esi
  __asm push eax
  __asm push edx
  __asm call LAB_10037a97
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 1012d300; body size 4 bytes.
#line 1 "ENTRY_1012d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1012d300(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 1012da90; body size 68 bytes.
#line 1 "ENTRY_1012da90"

__declspec(naked) void FUN_1012da90(void)

{
  __asm push ecx
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 8], 0
  __asm _emit 0x74 __asm _emit 0x37
  __asm push esi
  __asm push dword ptr [edi + 4]
  __asm lea esi, [edi + 4]
  __asm push esi
  __asm call LAB_1008204c
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [esp + 0x10], eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push dword ptr [edi + 0x10]
  __asm push dword ptr [edi + 0xc]
  __asm call LAB_10072f8e
  __asm add esp, 0x14
  __asm pop esi
  __asm pop edi
  __asm pop ecx
  __asm ret
}




// Reference entry 1012ddb0; body size 25 bytes.
#line 1 "ENTRY_1012ddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1012ddb0(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return (void *)(param_1);
}


// Reference entry 101307c0; body size 57 bytes.
#line 1 "ENTRY_101307c0"

__declspec(naked) void FUN_101307c0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x0d
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}




// Reference entry 10130860; body size 60 bytes.
#line 1 "ENTRY_10130860"

__declspec(naked) void FUN_10130860(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x0f
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}




// Reference entry 101308b0; body size 61 bytes.
#line 1 "ENTRY_101308b0"

__declspec(naked) void FUN_101308b0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x0f
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}




// Reference entry 10130960; body size 9 bytes.
#line 1 "ENTRY_10130960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130960(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130970; body size 9 bytes.
#line 1 "ENTRY_10130970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130970(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130980; body size 9 bytes.
#line 1 "ENTRY_10130980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130980(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130990; body size 9 bytes.
#line 1 "ENTRY_10130990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130990(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101309a0; body size 9 bytes.
#line 1 "ENTRY_101309a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101309b0; body size 9 bytes.
#line 1 "ENTRY_101309b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101309c0; body size 9 bytes.
#line 1 "ENTRY_101309c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101309d0; body size 9 bytes.
#line 1 "ENTRY_101309d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101309e0; body size 9 bytes.
#line 1 "ENTRY_101309e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101309f0; body size 9 bytes.
#line 1 "ENTRY_101309f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130a00; body size 9 bytes.
#line 1 "ENTRY_10130a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130a10; body size 9 bytes.
#line 1 "ENTRY_10130a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130a20; body size 9 bytes.
#line 1 "ENTRY_10130a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130a30; body size 9 bytes.
#line 1 "ENTRY_10130a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130a40; body size 9 bytes.
#line 1 "ENTRY_10130a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130a50; body size 9 bytes.
#line 1 "ENTRY_10130a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130a60; body size 9 bytes.
#line 1 "ENTRY_10130a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130a70; body size 9 bytes.
#line 1 "ENTRY_10130a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130a80; body size 9 bytes.
#line 1 "ENTRY_10130a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130a90; body size 9 bytes.
#line 1 "ENTRY_10130a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130aa0; body size 9 bytes.
#line 1 "ENTRY_10130aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130aa0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ab0; body size 9 bytes.
#line 1 "ENTRY_10130ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ab0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ac0; body size 9 bytes.
#line 1 "ENTRY_10130ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ac0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ad0; body size 9 bytes.
#line 1 "ENTRY_10130ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ad0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ae0; body size 9 bytes.
#line 1 "ENTRY_10130ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ae0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130af0; body size 9 bytes.
#line 1 "ENTRY_10130af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130af0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130b00; body size 9 bytes.
#line 1 "ENTRY_10130b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130b10; body size 9 bytes.
#line 1 "ENTRY_10130b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130b20; body size 9 bytes.
#line 1 "ENTRY_10130b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130b30; body size 9 bytes.
#line 1 "ENTRY_10130b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130b40; body size 9 bytes.
#line 1 "ENTRY_10130b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130b50; body size 9 bytes.
#line 1 "ENTRY_10130b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130b60; body size 9 bytes.
#line 1 "ENTRY_10130b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130b70; body size 9 bytes.
#line 1 "ENTRY_10130b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130b80; body size 9 bytes.
#line 1 "ENTRY_10130b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130b90; body size 9 bytes.
#line 1 "ENTRY_10130b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ba0; body size 9 bytes.
#line 1 "ENTRY_10130ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ba0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130bb0; body size 9 bytes.
#line 1 "ENTRY_10130bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130bb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130bc0; body size 9 bytes.
#line 1 "ENTRY_10130bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130bc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130bd0; body size 9 bytes.
#line 1 "ENTRY_10130bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130bd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130be0; body size 9 bytes.
#line 1 "ENTRY_10130be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130be0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130bf0; body size 9 bytes.
#line 1 "ENTRY_10130bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130bf0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130c00; body size 9 bytes.
#line 1 "ENTRY_10130c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130c10; body size 9 bytes.
#line 1 "ENTRY_10130c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130c20; body size 9 bytes.
#line 1 "ENTRY_10130c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130c30; body size 9 bytes.
#line 1 "ENTRY_10130c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130c40; body size 9 bytes.
#line 1 "ENTRY_10130c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130c50; body size 9 bytes.
#line 1 "ENTRY_10130c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130c60; body size 9 bytes.
#line 1 "ENTRY_10130c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130c70; body size 9 bytes.
#line 1 "ENTRY_10130c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130c80; body size 9 bytes.
#line 1 "ENTRY_10130c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130c90; body size 9 bytes.
#line 1 "ENTRY_10130c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ca0; body size 9 bytes.
#line 1 "ENTRY_10130ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ca0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130cb0; body size 9 bytes.
#line 1 "ENTRY_10130cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130cb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130cc0; body size 9 bytes.
#line 1 "ENTRY_10130cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130cc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130cd0; body size 9 bytes.
#line 1 "ENTRY_10130cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130cd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ce0; body size 9 bytes.
#line 1 "ENTRY_10130ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ce0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130cf0; body size 9 bytes.
#line 1 "ENTRY_10130cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130cf0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130d00; body size 9 bytes.
#line 1 "ENTRY_10130d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130d10; body size 9 bytes.
#line 1 "ENTRY_10130d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130d20; body size 9 bytes.
#line 1 "ENTRY_10130d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130d30; body size 9 bytes.
#line 1 "ENTRY_10130d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130d40; body size 9 bytes.
#line 1 "ENTRY_10130d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130d50; body size 9 bytes.
#line 1 "ENTRY_10130d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130d60; body size 9 bytes.
#line 1 "ENTRY_10130d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130d70; body size 9 bytes.
#line 1 "ENTRY_10130d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130d80; body size 9 bytes.
#line 1 "ENTRY_10130d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130d90; body size 9 bytes.
#line 1 "ENTRY_10130d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130da0; body size 9 bytes.
#line 1 "ENTRY_10130da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130da0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130db0; body size 9 bytes.
#line 1 "ENTRY_10130db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130db0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130dc0; body size 9 bytes.
#line 1 "ENTRY_10130dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130dc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130dd0; body size 9 bytes.
#line 1 "ENTRY_10130dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130dd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130de0; body size 9 bytes.
#line 1 "ENTRY_10130de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130de0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130df0; body size 9 bytes.
#line 1 "ENTRY_10130df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130df0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130e00; body size 9 bytes.
#line 1 "ENTRY_10130e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130e10; body size 9 bytes.
#line 1 "ENTRY_10130e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130e20; body size 9 bytes.
#line 1 "ENTRY_10130e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130e30; body size 9 bytes.
#line 1 "ENTRY_10130e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130e40; body size 9 bytes.
#line 1 "ENTRY_10130e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130e50; body size 9 bytes.
#line 1 "ENTRY_10130e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130e60; body size 9 bytes.
#line 1 "ENTRY_10130e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130e70; body size 9 bytes.
#line 1 "ENTRY_10130e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130e80; body size 9 bytes.
#line 1 "ENTRY_10130e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130e90; body size 9 bytes.
#line 1 "ENTRY_10130e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ea0; body size 9 bytes.
#line 1 "ENTRY_10130ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ea0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130eb0; body size 9 bytes.
#line 1 "ENTRY_10130eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130eb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ec0; body size 9 bytes.
#line 1 "ENTRY_10130ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ec0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ed0; body size 9 bytes.
#line 1 "ENTRY_10130ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ed0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ee0; body size 9 bytes.
#line 1 "ENTRY_10130ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ee0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ef0; body size 9 bytes.
#line 1 "ENTRY_10130ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ef0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130f00; body size 9 bytes.
#line 1 "ENTRY_10130f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130f10; body size 9 bytes.
#line 1 "ENTRY_10130f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130f20; body size 9 bytes.
#line 1 "ENTRY_10130f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130f30; body size 9 bytes.
#line 1 "ENTRY_10130f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130f40; body size 9 bytes.
#line 1 "ENTRY_10130f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130f50; body size 9 bytes.
#line 1 "ENTRY_10130f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130f60; body size 9 bytes.
#line 1 "ENTRY_10130f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130f70; body size 9 bytes.
#line 1 "ENTRY_10130f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130f80; body size 9 bytes.
#line 1 "ENTRY_10130f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130f90; body size 9 bytes.
#line 1 "ENTRY_10130f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130fa0; body size 9 bytes.
#line 1 "ENTRY_10130fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130fa0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130fb0; body size 9 bytes.
#line 1 "ENTRY_10130fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130fb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130fc0; body size 9 bytes.
#line 1 "ENTRY_10130fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130fc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130fd0; body size 9 bytes.
#line 1 "ENTRY_10130fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130fd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130fe0; body size 9 bytes.
#line 1 "ENTRY_10130fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130fe0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10130ff0; body size 9 bytes.
#line 1 "ENTRY_10130ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ff0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131000; body size 9 bytes.
#line 1 "ENTRY_10131000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131000(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131010; body size 9 bytes.
#line 1 "ENTRY_10131010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131010(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131020; body size 9 bytes.
#line 1 "ENTRY_10131020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131020(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131030; body size 9 bytes.
#line 1 "ENTRY_10131030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131030(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131040; body size 9 bytes.
#line 1 "ENTRY_10131040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131040(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131050; body size 9 bytes.
#line 1 "ENTRY_10131050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131050(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131060; body size 9 bytes.
#line 1 "ENTRY_10131060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131060(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131070; body size 9 bytes.
#line 1 "ENTRY_10131070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131070(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131080; body size 9 bytes.
#line 1 "ENTRY_10131080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131080(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131090; body size 9 bytes.
#line 1 "ENTRY_10131090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131090(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101310a0; body size 9 bytes.
#line 1 "ENTRY_101310a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101310b0; body size 9 bytes.
#line 1 "ENTRY_101310b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101310c0; body size 9 bytes.
#line 1 "ENTRY_101310c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101310d0; body size 9 bytes.
#line 1 "ENTRY_101310d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101310e0; body size 9 bytes.
#line 1 "ENTRY_101310e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101310f0; body size 9 bytes.
#line 1 "ENTRY_101310f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131100; body size 9 bytes.
#line 1 "ENTRY_10131100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131100(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131110; body size 9 bytes.
#line 1 "ENTRY_10131110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131110(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131120; body size 9 bytes.
#line 1 "ENTRY_10131120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131120(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131130; body size 9 bytes.
#line 1 "ENTRY_10131130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131130(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131140; body size 9 bytes.
#line 1 "ENTRY_10131140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131140(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131150; body size 9 bytes.
#line 1 "ENTRY_10131150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131150(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131160; body size 9 bytes.
#line 1 "ENTRY_10131160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131160(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131170; body size 9 bytes.
#line 1 "ENTRY_10131170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131170(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131180; body size 9 bytes.
#line 1 "ENTRY_10131180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131180(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131190; body size 9 bytes.
#line 1 "ENTRY_10131190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131190(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101311a0; body size 9 bytes.
#line 1 "ENTRY_101311a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101311b0; body size 9 bytes.
#line 1 "ENTRY_101311b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101311c0; body size 9 bytes.
#line 1 "ENTRY_101311c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101311d0; body size 9 bytes.
#line 1 "ENTRY_101311d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101311e0; body size 9 bytes.
#line 1 "ENTRY_101311e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101311f0; body size 9 bytes.
#line 1 "ENTRY_101311f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131200; body size 9 bytes.
#line 1 "ENTRY_10131200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131200(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131210; body size 9 bytes.
#line 1 "ENTRY_10131210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131210(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10131220; body size 9 bytes.
#line 1 "ENTRY_10131220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131220(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10139370; body size 6 bytes.
#line 1 "ENTRY_10139370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10139370(void)

{
  return (char *)("SCINowPlaying");
}


// Reference entry 10139380; body size 6 bytes.
#line 1 "ENTRY_10139380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10139380(void)

{
  return (char *)("SCISystem");
}


// Reference entry 10139390; body size 6 bytes.
#line 1 "ENTRY_10139390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10139390(void)

{
  return (char *)("SCIZoneGroupMgr");
}


// Reference entry 1013a500; body size 17 bytes.
#line 1 "ENTRY_1013a500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1013a500(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)(param_1 + 1);
  do {
    cVar2 = (char)(*param_1);
    param_1 = (char *)(param_1 + 1);
  } while (cVar2 != '\0');
  return (int)((int)param_1 - (int)pcVar1);
}


// Reference entry 1013a810; body size 6 bytes.
#line 1 "ENTRY_1013a810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a810(void)

{
  return (undefined4)(0x7fffffff);
}


// Reference entry 1013a820; body size 3 bytes.
#line 1 "ENTRY_1013a820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_1013a820(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 1013a830; body size 4 bytes.
#line 1 "ENTRY_1013a830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a830(void)

{
  return (undefined4)(0xffffffff);
}


// Reference entry 1013a840; body size 6 bytes.
#line 1 "ENTRY_1013a840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a840(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 1013a850; body size 6 bytes.
#line 1 "ENTRY_1013a850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a850(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 1013a860; body size 6 bytes.
#line 1 "ENTRY_1013a860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a860(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 1013a870; body size 6 bytes.
#line 1 "ENTRY_1013a870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a870(void)

{
  return (undefined4)(0x7fffffff);
}


// Reference entry 1013a880; body size 6 bytes.
#line 1 "ENTRY_1013a880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a880(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 1013a890; body size 25 bytes.
#line 1 "ENTRY_1013a890"

__declspec(naked) void FUN_1013a890(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_1148cdf3
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add esp, 0xc
  __asm ret
}




// Reference entry 1013b570; body size 3 bytes.
#line 1 "ENTRY_1013b570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1013b570(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1013b580; body size 3 bytes.
#line 1 "ENTRY_1013b580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1013b580(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1013b590; body size 3 bytes.
#line 1 "ENTRY_1013b590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1013b590(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1013f540; body size 28 bytes.
#line 1 "ENTRY_1013f540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f540(undefined4 *param_1)

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


// Reference entry 1013f570; body size 28 bytes.
#line 1 "ENTRY_1013f570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f570(undefined4 *param_1)

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


// Reference entry 1013f5a0; body size 28 bytes.
#line 1 "ENTRY_1013f5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f5a0(undefined4 *param_1)

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


// Reference entry 1013f5d0; body size 20 bytes.
#line 1 "ENTRY_1013f5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f5d0(int *param_1)

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


// Reference entry 1013f5f0; body size 20 bytes.
#line 1 "ENTRY_1013f5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f5f0(int *param_1)

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


// Reference entry 1013f610; body size 20 bytes.
#line 1 "ENTRY_1013f610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f610(int *param_1)

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


// Reference entry 101446d0; body size 5 bytes.
#line 1 "ENTRY_101446d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101446d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101446e0; body size 5 bytes.
#line 1 "ENTRY_101446e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101446e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10145ca0; body size 9 bytes.
#line 1 "ENTRY_10145ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10145ca0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10146880; body size 94 bytes.
#line 1 "ENTRY_10146880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146880(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_12);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_13);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(param_14);
  return;
}


// Reference entry 10146900; body size 10 bytes.
#line 1 "ENTRY_10146900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146900(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  return;
}


// Reference entry 10146910; body size 199 bytes.
#line 1 "ENTRY_10146910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146910(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
            undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_12);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_13);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(param_14);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(param_15);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(param_16);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(param_17);
  *(undefined4*)(param_1 + 0x4c) = (undefined4)(param_18);
  *(undefined4*)(param_1 + 0x50) = (undefined4)(param_19);
  *(undefined4*)(param_1 + 0x54) = (undefined4)(param_20);
  *(undefined4*)(param_1 + 0x58) = (undefined4)(param_21);
  *(undefined4*)(param_1 + 0x5c) = (undefined4)(param_22);
  *(undefined4*)(param_1 + 0x60) = (undefined4)(param_23);
  *(undefined4*)(param_1 + 100) = (undefined4)(param_24);
  *(undefined4*)(param_1 + 0x68) = (undefined4)(param_25);
  *(undefined4*)(param_1 + 0x6c) = (undefined4)(param_26);
  *(undefined4*)(param_1 + 0x70) = (undefined4)(param_27);
  *(undefined4*)(param_1 + 0x74) = (undefined4)(param_28);
  *(undefined4*)(param_1 + 0x78) = (undefined4)(param_29);
  return;
}


// Reference entry 10146a10; body size 10 bytes.
#line 1 "ENTRY_10146a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146a10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  return;
}


// Reference entry 10146a20; body size 10 bytes.
#line 1 "ENTRY_10146a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146a20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  return;
}


// Reference entry 10146a30; body size 17 bytes.
#line 1 "ENTRY_10146a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146a30(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  return;
}


// Reference entry 10146a50; body size 66 bytes.
#line 1 "ENTRY_10146a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146a50(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  return;
}


// Reference entry 10146ab0; body size 31 bytes.
#line 1 "ENTRY_10146ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146ab0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  return;
}


// Reference entry 10146ae0; body size 45 bytes.
#line 1 "ENTRY_10146ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146ae0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  return;
}


// Reference entry 10146b20; body size 94 bytes.
#line 1 "ENTRY_10146b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146b20(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_12);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_13);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(param_14);
  return;
}


// Reference entry 10146ba0; body size 59 bytes.
#line 1 "ENTRY_10146ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146ba0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  return;
}


// Reference entry 10146bf0; body size 408 bytes.
#line 1 "ENTRY_10146bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146bf0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
            undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29,
            undefined4 param_30,undefined4 param_31,undefined4 param_32,undefined4 param_33,
            undefined4 param_34,undefined4 param_35,undefined4 param_36,undefined4 param_37,
            undefined4 param_38,undefined4 param_39,undefined4 param_40,undefined4 param_41,
            undefined4 param_42,undefined4 param_43,undefined4 param_44,undefined4 param_45,
            undefined4 param_46)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_12);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_13);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(param_14);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(param_15);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(param_16);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(param_17);
  *(undefined4*)(param_1 + 0x4c) = (undefined4)(param_18);
  *(undefined4*)(param_1 + 0x50) = (undefined4)(param_19);
  *(undefined4*)(param_1 + 0x54) = (undefined4)(param_20);
  *(undefined4*)(param_1 + 0x58) = (undefined4)(param_21);
  *(undefined4*)(param_1 + 0x5c) = (undefined4)(param_22);
  *(undefined4*)(param_1 + 0x60) = (undefined4)(param_23);
  *(undefined4*)(param_1 + 100) = (undefined4)(param_24);
  *(undefined4*)(param_1 + 0x68) = (undefined4)(param_25);
  *(undefined4*)(param_1 + 0x6c) = (undefined4)(param_26);
  *(undefined4*)(param_1 + 0x70) = (undefined4)(param_27);
  *(undefined4*)(param_1 + 0x74) = (undefined4)(param_28);
  *(undefined4*)(param_1 + 0x78) = (undefined4)(param_29);
  *(undefined4*)(param_1 + 0x7c) = (undefined4)(param_30);
  *(undefined4*)(param_1 + 0x80) = (undefined4)(param_31);
  *(undefined4*)(param_1 + 0x84) = (undefined4)(param_32);
  *(undefined4*)(param_1 + 0x88) = (undefined4)(param_33);
  *(undefined4*)(param_1 + 0x8c) = (undefined4)(param_34);
  *(undefined4*)(param_1 + 0x90) = (undefined4)(param_35);
  *(undefined4*)(param_1 + 0x94) = (undefined4)(param_36);
  *(undefined4*)(param_1 + 0x98) = (undefined4)(param_37);
  *(undefined4*)(param_1 + 0x9c) = (undefined4)(param_38);
  *(undefined4*)(param_1 + 0xa0) = (undefined4)(param_39);
  *(undefined4*)(param_1 + 0xa4) = (undefined4)(param_40);
  *(undefined4*)(param_1 + 0xa8) = (undefined4)(param_41);
  *(undefined4*)(param_1 + 0xac) = (undefined4)(param_42);
  *(undefined4*)(param_1 + 0xb0) = (undefined4)(param_43);
  *(undefined4*)(param_1 + 0xb4) = (undefined4)(param_44);
  *(undefined4*)(param_1 + 0xb8) = (undefined4)(param_45);
  *(undefined4*)(param_1 + 0xbc) = (undefined4)(param_46);
  return;
}


// Reference entry 10146df0; body size 38 bytes.
#line 1 "ENTRY_10146df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146df0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  return;
}


// Reference entry 10146e20; body size 17 bytes.
#line 1 "ENTRY_10146e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146e20(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  return;
}


// Reference entry 10146e40; body size 31 bytes.
#line 1 "ENTRY_10146e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146e40(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  return;
}


// Reference entry 10146e70; body size 101 bytes.
#line 1 "ENTRY_10146e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146e70(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_12);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_13);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(param_14);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(param_15);
  return;
}


// Reference entry 10146ef0; body size 17 bytes.
#line 1 "ENTRY_10146ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146ef0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  return;
}


// Reference entry 10146f10; body size 122 bytes.
#line 1 "ENTRY_10146f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146f10(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_12);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_13);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(param_14);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(param_15);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(param_16);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(param_17);
  *(undefined4*)(param_1 + 0x4c) = (undefined4)(param_18);
  return;
}


// Reference entry 10146fb0; body size 10 bytes.
#line 1 "ENTRY_10146fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146fb0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  return;
}


// Reference entry 10146fc0; body size 17 bytes.
#line 1 "ENTRY_10146fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146fc0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  return;
}


// Reference entry 10146fe0; body size 17 bytes.
#line 1 "ENTRY_10146fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10146fe0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  return;
}


// Reference entry 10147000; body size 59 bytes.
#line 1 "ENTRY_10147000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147000(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  return;
}


// Reference entry 10147050; body size 38 bytes.
#line 1 "ENTRY_10147050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147050(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  return;
}


// Reference entry 10147080; body size 10 bytes.
#line 1 "ENTRY_10147080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147080(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  return;
}


// Reference entry 10147090; body size 52 bytes.
#line 1 "ENTRY_10147090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147090(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  return;
}


// Reference entry 101470e0; body size 115 bytes.
#line 1 "ENTRY_101470e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101470e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_12);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_13);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(param_14);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(param_15);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(param_16);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(param_17);
  return;
}


// Reference entry 10147170; body size 31 bytes.
#line 1 "ENTRY_10147170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147170(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  return;
}


// Reference entry 101471a0; body size 31 bytes.
#line 1 "ENTRY_101471a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101471a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  return;
}


// Reference entry 101471d0; body size 31 bytes.
#line 1 "ENTRY_101471d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101471d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  return;
}


// Reference entry 10147200; body size 45 bytes.
#line 1 "ENTRY_10147200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147200(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  return;
}


// Reference entry 10147240; body size 38 bytes.
#line 1 "ENTRY_10147240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147240(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  return;
}


// Reference entry 10147270; body size 31 bytes.
#line 1 "ENTRY_10147270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147270(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  return;
}


// Reference entry 101472a0; body size 17 bytes.
#line 1 "ENTRY_101472a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101472a0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  return;
}


// Reference entry 101472c0; body size 10 bytes.
#line 1 "ENTRY_101472c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101472c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  return;
}


// Reference entry 101472d0; body size 45 bytes.
#line 1 "ENTRY_101472d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101472d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  return;
}


// Reference entry 10147310; body size 10 bytes.
#line 1 "ENTRY_10147310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147310(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  return;
}


// Reference entry 10147320; body size 31 bytes.
#line 1 "ENTRY_10147320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147320(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_5);
  return;
}


// Reference entry 10147350; body size 94 bytes.
#line 1 "ENTRY_10147350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147350(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_12);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_13);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(param_14);
  return;
}


// Reference entry 101473d0; body size 31 bytes.
#line 1 "ENTRY_101473d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101473d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  return;
}


// Reference entry 10147400; body size 80 bytes.
#line 1 "ENTRY_10147400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147400(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_12);
  return;
}


// Reference entry 10147470; body size 17 bytes.
#line 1 "ENTRY_10147470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147470(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  return;
}


// Reference entry 10147490; body size 10 bytes.
#line 1 "ENTRY_10147490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147490(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  return;
}


// Reference entry 101474a0; body size 73 bytes.
#line 1 "ENTRY_101474a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101474a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  return;
}


// Reference entry 10147500; body size 45 bytes.
#line 1 "ENTRY_10147500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147500(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  return;
}


// Reference entry 10147540; body size 24 bytes.
#line 1 "ENTRY_10147540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147540(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_4);
  return;
}


// Reference entry 10147560; body size 45 bytes.
#line 1 "ENTRY_10147560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147560(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  return;
}


// Reference entry 101475a0; body size 38 bytes.
#line 1 "ENTRY_101475a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101475a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  return;
}


// Reference entry 101475d0; body size 10 bytes.
#line 1 "ENTRY_101475d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101475d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  return;
}


// Reference entry 101475e0; body size 31 bytes.
#line 1 "ENTRY_101475e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101475e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  return;
}


// Reference entry 10147610; body size 73 bytes.
#line 1 "ENTRY_10147610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147610(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  return;
}


// Reference entry 10147670; body size 38 bytes.
#line 1 "ENTRY_10147670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147670(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_6);
  return;
}


// Reference entry 101476a0; body size 24 bytes.
#line 1 "ENTRY_101476a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101476a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  return;
}


// Reference entry 101476c0; body size 38 bytes.
#line 1 "ENTRY_101476c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101476c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  return;
}


// Reference entry 101476f0; body size 45 bytes.
#line 1 "ENTRY_101476f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101476f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  return;
}


// Reference entry 10147730; body size 115 bytes.
#line 1 "ENTRY_10147730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147730(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_11);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_12);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_13);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(param_14);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(param_15);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(param_16);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(param_17);
  return;
}


// Reference entry 101477c0; body size 10 bytes.
#line 1 "ENTRY_101477c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101477c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  return;
}


// Reference entry 101477d0; body size 10 bytes.
#line 1 "ENTRY_101477d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101477d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  return;
}


// Reference entry 101477e0; body size 17 bytes.
#line 1 "ENTRY_101477e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101477e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_3);
  return;
}


// Reference entry 10147800; body size 17 bytes.
#line 1 "ENTRY_10147800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147800(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_3);
  return;
}


// Reference entry 10147820; body size 10 bytes.
#line 1 "ENTRY_10147820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147820(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  return;
}


// Reference entry 10147830; body size 10 bytes.
#line 1 "ENTRY_10147830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147830(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  return;
}


// Reference entry 10147840; body size 10 bytes.
#line 1 "ENTRY_10147840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147840(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  return;
}


// Reference entry 10147850; body size 10 bytes.
#line 1 "ENTRY_10147850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147850(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  return;
}


// Reference entry 10147860; body size 150 bytes.
#line 1 "ENTRY_10147860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147860(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_4);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_5);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_6);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_7);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(param_8);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_9);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_10);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_11);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(param_12);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_13);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_14);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(param_15);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(param_16);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(param_17);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(param_18);
  *(undefined4*)(param_1 + 0x4c) = (undefined4)(param_19);
  *(undefined4*)(param_1 + 0x50) = (undefined4)(param_20);
  *(undefined4*)(param_1 + 0x54) = (undefined4)(param_21);
  *(undefined4*)(param_1 + 0x58) = (undefined4)(param_22);
  return;
}


// Reference entry 10147920; body size 17 bytes.
#line 1 "ENTRY_10147920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10147920(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_3);
  return;
}


// Reference entry 10147980; body size 92 bytes.
#line 1 "ENTRY_10147980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147980(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
  return;
}


// Reference entry 10147a00; body size 8 bytes.
#line 1 "ENTRY_10147a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147a00(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 10147a10; body size 197 bytes.
#line 1 "ENTRY_10147a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147a10(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x4c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x50) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x54) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x58) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x5c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x60) = (undefined4)(0);
  *(undefined4*)(param_1 + 100) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x68) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x6c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x70) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x74) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x78) = (undefined4)(0);
  return;
}


// Reference entry 10147b10; body size 8 bytes.
#line 1 "ENTRY_10147b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147b10(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 10147b20; body size 8 bytes.
#line 1 "ENTRY_10147b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147b20(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 10147b30; body size 15 bytes.
#line 1 "ENTRY_10147b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147b30(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  return;
}


// Reference entry 10147b50; body size 64 bytes.
#line 1 "ENTRY_10147b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147b50(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  return;
}


// Reference entry 10147ba0; body size 29 bytes.
#line 1 "ENTRY_10147ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147ba0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 10147bd0; body size 43 bytes.
#line 1 "ENTRY_10147bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147bd0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  return;
}


// Reference entry 10147c10; body size 92 bytes.
#line 1 "ENTRY_10147c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147c10(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
  return;
}


// Reference entry 10147c90; body size 57 bytes.
#line 1 "ENTRY_10147c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147c90(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  return;
}


// Reference entry 10147ce0; body size 364 bytes.
#line 1 "ENTRY_10147ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147ce0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x4c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x50) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x54) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x58) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x5c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x60) = (undefined4)(0);
  *(undefined4*)(param_1 + 100) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x68) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x6c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x70) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x74) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x78) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x7c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x80) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x84) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x88) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x8c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x90) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x94) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x98) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x9c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xa0) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xa4) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xa8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xac) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb0) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb4) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xbc) = (undefined4)(0);
  return;
}


// Reference entry 10147eb0; body size 36 bytes.
#line 1 "ENTRY_10147eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147eb0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  return;
}


// Reference entry 10147ee0; body size 15 bytes.
#line 1 "ENTRY_10147ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147ee0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  return;
}


// Reference entry 10147f00; body size 29 bytes.
#line 1 "ENTRY_10147f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147f00(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 10147f30; body size 99 bytes.
#line 1 "ENTRY_10147f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147f30(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(0);
  return;
}


// Reference entry 10147fb0; body size 15 bytes.
#line 1 "ENTRY_10147fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147fb0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  return;
}


// Reference entry 10147fd0; body size 120 bytes.
#line 1 "ENTRY_10147fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147fd0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x4c) = (undefined4)(0);
  return;
}


// Reference entry 10148070; body size 8 bytes.
#line 1 "ENTRY_10148070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148070(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 10148080; body size 15 bytes.
#line 1 "ENTRY_10148080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148080(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  return;
}


// Reference entry 101480a0; body size 15 bytes.
#line 1 "ENTRY_101480a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101480a0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  return;
}


// Reference entry 101480c0; body size 57 bytes.
#line 1 "ENTRY_101480c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101480c0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  return;
}


// Reference entry 10148110; body size 36 bytes.
#line 1 "ENTRY_10148110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148110(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  return;
}


// Reference entry 10148140; body size 8 bytes.
#line 1 "ENTRY_10148140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148140(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 10148150; body size 50 bytes.
#line 1 "ENTRY_10148150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148150(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return;
}


// Reference entry 10148190; body size 113 bytes.
#line 1 "ENTRY_10148190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148190(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(0);
  return;
}


// Reference entry 10148220; body size 29 bytes.
#line 1 "ENTRY_10148220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148220(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 10148250; body size 29 bytes.
#line 1 "ENTRY_10148250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148250(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 10148280; body size 29 bytes.
#line 1 "ENTRY_10148280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148280(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 101482b0; body size 43 bytes.
#line 1 "ENTRY_101482b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101482b0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  return;
}


// Reference entry 101482f0; body size 36 bytes.
#line 1 "ENTRY_101482f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101482f0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  return;
}


// Reference entry 10148320; body size 29 bytes.
#line 1 "ENTRY_10148320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148320(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 10148350; body size 15 bytes.
#line 1 "ENTRY_10148350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148350(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  return;
}


// Reference entry 10148370; body size 8 bytes.
#line 1 "ENTRY_10148370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148370(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 10148380; body size 43 bytes.
#line 1 "ENTRY_10148380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148380(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  return;
}


// Reference entry 101483c0; body size 8 bytes.
#line 1 "ENTRY_101483c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101483c0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 101483d0; body size 29 bytes.
#line 1 "ENTRY_101483d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101483d0(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  return;
}


// Reference entry 10148400; body size 92 bytes.
#line 1 "ENTRY_10148400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148400(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
  return;
}


// Reference entry 10148480; body size 29 bytes.
#line 1 "ENTRY_10148480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148480(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 101484b0; body size 78 bytes.
#line 1 "ENTRY_101484b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101484b0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  return;
}


// Reference entry 10148520; body size 15 bytes.
#line 1 "ENTRY_10148520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148520(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  return;
}


// Reference entry 10148540; body size 8 bytes.
#line 1 "ENTRY_10148540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148540(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 10148550; body size 71 bytes.
#line 1 "ENTRY_10148550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148550(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  return;
}


// Reference entry 101485b0; body size 43 bytes.
#line 1 "ENTRY_101485b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101485b0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  return;
}


// Reference entry 101485f0; body size 22 bytes.
#line 1 "ENTRY_101485f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101485f0(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  return;
}


// Reference entry 10148610; body size 43 bytes.
#line 1 "ENTRY_10148610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148610(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  return;
}


// Reference entry 10148650; body size 36 bytes.
#line 1 "ENTRY_10148650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148650(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  return;
}


// Reference entry 10148680; body size 8 bytes.
#line 1 "ENTRY_10148680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148680(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 10148690; body size 29 bytes.
#line 1 "ENTRY_10148690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148690(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 101486c0; body size 71 bytes.
#line 1 "ENTRY_101486c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101486c0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  return;
}


// Reference entry 10148720; body size 36 bytes.
#line 1 "ENTRY_10148720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148720(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 10148750; body size 22 bytes.
#line 1 "ENTRY_10148750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148750(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  return;
}


// Reference entry 10148770; body size 36 bytes.
#line 1 "ENTRY_10148770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148770(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  return;
}


// Reference entry 101487a0; body size 43 bytes.
#line 1 "ENTRY_101487a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101487a0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  return;
}


// Reference entry 101487e0; body size 113 bytes.
#line 1 "ENTRY_101487e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101487e0(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(0);
  return;
}


// Reference entry 10148870; body size 8 bytes.
#line 1 "ENTRY_10148870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148870(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10148880; body size 8 bytes.
#line 1 "ENTRY_10148880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148880(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10148890; body size 15 bytes.
#line 1 "ENTRY_10148890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148890(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 101488b0; body size 15 bytes.
#line 1 "ENTRY_101488b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101488b0(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 101488d0; body size 8 bytes.
#line 1 "ENTRY_101488d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101488d0(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return;
}


// Reference entry 101488e0; body size 8 bytes.
#line 1 "ENTRY_101488e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101488e0(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return;
}


// Reference entry 101488f0; body size 8 bytes.
#line 1 "ENTRY_101488f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101488f0(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10148900; body size 8 bytes.
#line 1 "ENTRY_10148900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148900(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10148910; body size 148 bytes.
#line 1 "ENTRY_10148910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148910(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x48) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x4c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x50) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x54) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x58) = (undefined4)(0);
  return;
}


// Reference entry 101489d0; body size 15 bytes.
#line 1 "ENTRY_101489d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101489d0(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 101489f0; body size 9 bytes.
#line 1 "ENTRY_101489f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101489f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101a1e90; body size 6 bytes.
#line 1 "ENTRY_101a1e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a1e90(void)

{
  return (undefined4)(0x1fe);
}


// Reference entry 101a1fd0; body size 38 bytes.
#line 1 "ENTRY_101a1fd0"

__declspec(naked) void FUN_101a1fd0(void)

{
  __asm xor eax, eax
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [ecx], ax
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x00 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x04 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
}




// Reference entry 101a2020; body size 7 bytes.
#line 1 "ENTRY_101a2020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a2020(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x404));
}


// Reference entry 101a2030; body size 240 bytes.
#line 1 "ENTRY_101a2030"

__declspec(naked) void FUN_101a2030(void)

{
  __asm push ecx
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm mov edx, ebp
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 0x14], ebp
  __asm push edi
  __asm lea ecx, [edx + 1]
  __asm mov al, byte ptr [edx]
  __asm inc edx
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm mov eax, dword ptr [esi + 0x3fc]
  __asm sub edx, ecx
  __asm lea ebx, [edx + 1]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x12
  __asm cmp ebx, 0x1fe
  __asm _emit 0x77 __asm _emit 0x0a
  __asm lea ecx, [esi + 0x3fc]
  __asm mov eax, esi
  __asm _emit 0xeb __asm _emit 0x55
  __asm cmp dword ptr [esi + 0x400], ebx
  __asm _emit 0x73 __asm _emit 0x15
  __asm push eax
  __asm call LAB_1005e133
  __asm add esp, 4
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xeb __asm _emit 0x04
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x2b
  __asm xor ecx, ecx
  __asm mov dword ptr [esi + 0x400], ebx
  __asm mov eax, ebx
  __asm mov edx, 2
  __asm mul edx
  __asm seto cl
  __asm neg ecx
  __asm or ecx, eax
  __asm push ecx
  __asm call LAB_100381ea
  __asm mov ebp, dword ptr [esp + 0x1c]
  __asm add esp, 4
  __asm mov dword ptr [esi + 0x3fc], eax
  __asm mov ecx, dword ptr [esi + 0x400]
  __asm lea ecx, [eax + ecx*2]
  __asm push 1
  __asm mov dword ptr [esp + 0x14], eax
  __asm lea eax, [esp + 0x14]
  __asm push ecx
  __asm push eax
  __asm lea eax, [ebx + ebp]
  __asm push eax
  __asm lea eax, [esp + 0x28]
  __asm push eax
  __asm call LAB_100321af
  __asm mov ecx, dword ptr [esi + 0x3fc]
  __asm add esp, 0x14
  __asm test ecx, ecx
  __asm mov edx, esi
  __asm cmovne edx, ecx
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x1d
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm cmp ecx, edx
  __asm _emit 0x76 __asm _emit 0x15
  __asm sub ecx, edx
  __asm mov eax, edx
  __asm _emit 0xd1 __asm _emit 0xf9
  __asm pop edi
  __asm dec ecx
  __asm mov dword ptr [esi + 0x404], ecx
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x04 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, edx
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
}




// Reference entry 101a21c0; body size 25 bytes.
#line 1 "ENTRY_101a21c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a21c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101a21e0; body size 33 bytes.
#line 1 "ENTRY_101a21e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101a21e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 101a22d0; body size 46 bytes.
#line 1 "ENTRY_101a22d0"

__declspec(naked) void FUN_101a22d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov edx, dword ptr [esi + 4]
  __asm mov dword ptr [edx], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm _emit 0x7d __asm _emit 0x09
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm add dword ptr [esi + 4], 4
  __asm pop esi
  __asm ret 4
}




// Reference entry 101a2310; body size 46 bytes.
#line 1 "ENTRY_101a2310"

__declspec(naked) void FUN_101a2310(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov edx, dword ptr [esi + 4]
  __asm mov dword ptr [edx], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm _emit 0x7d __asm _emit 0x09
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm add dword ptr [esi + 4], 4
  __asm pop esi
  __asm ret 4
}




// Reference entry 101a2350; body size 46 bytes.
#line 1 "ENTRY_101a2350"

__declspec(naked) void FUN_101a2350(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov edx, dword ptr [esi + 4]
  __asm mov dword ptr [edx], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm _emit 0x7d __asm _emit 0x09
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm add dword ptr [esi + 4], 4
  __asm pop esi
  __asm ret 4
}




// Reference entry 101a2670; body size 7 bytes.
#line 1 "ENTRY_101a2670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a2670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101a2680; body size 5 bytes.
#line 1 "ENTRY_101a2680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a2680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a2810; body size 35 bytes.
#line 1 "ENTRY_101a2810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a2810(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 101a2840; body size 35 bytes.
#line 1 "ENTRY_101a2840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a2840(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 101a2870; body size 35 bytes.
#line 1 "ENTRY_101a2870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a2870(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 101a29b0; body size 15 bytes.
#line 1 "ENTRY_101a29b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a29b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101a29d0; body size 5 bytes.
#line 1 "ENTRY_101a29d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a29d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a29e0; body size 5 bytes.
#line 1 "ENTRY_101a29e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a29e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a29f0; body size 5 bytes.
#line 1 "ENTRY_101a29f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a29f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a2a00; body size 5 bytes.
#line 1 "ENTRY_101a2a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a2a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a2a10; body size 16 bytes.
#line 1 "ENTRY_101a2a10"

__declspec(naked) void FUN_101a2a10(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [edx]
  __asm cmp ecx, dword ptr [eax]
  __asm cmovl eax, edx
  __asm ret
}




// Reference entry 101a2a30; body size 5 bytes.
#line 1 "ENTRY_101a2a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a2a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a2a40; body size 5 bytes.
#line 1 "ENTRY_101a2a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a2a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a2a50; body size 21 bytes.
#line 1 "ENTRY_101a2a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101a2a50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101a2a70; body size 25 bytes.
#line 1 "ENTRY_101a2a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101a2a70(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 101a2a90; body size 23 bytes.
#line 1 "ENTRY_101a2a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a2a90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101a2ab0; body size 49 bytes.
#line 1 "ENTRY_101a2ab0"

__declspec(naked) void FUN_101a2ab0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esi + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov edx, dword ptr [esi + 4]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 8], edi
  __asm pop edi
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 4], edx
  __asm pop esi
  __asm ret 4
}




// Reference entry 101a2af0; body size 23 bytes.
#line 1 "ENTRY_101a2af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a2af0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101a3110; body size 83 bytes.
#line 1 "ENTRY_101a3110"

__declspec(naked) void FUN_101a3110(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax]
  __asm test ecx, ecx
  __asm mov eax, offset LAB_1186d2ee
  __asm mov edx, eax
  __asm cmovne edx, ecx
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov cl, byte ptr [eax]
  __asm cmp cl, byte ptr [edx]
  __asm _emit 0x75 __asm _emit 0x20
  __asm test cl, cl
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov cl, byte ptr [eax + 1]
  __asm cmp cl, byte ptr [edx + 1]
  __asm _emit 0x75 __asm _emit 0x14
  __asm add eax, 2
  __asm add edx, 2
  __asm test cl, cl
  __asm _emit 0x75 __asm _emit 0xe4
  __asm xor eax, eax
  __asm test eax, eax
  __asm sete al
  __asm ret 8
  __asm sbb eax, eax
  __asm or eax, 1
  __asm test eax, eax
  __asm sete al
  __asm ret 8
}




// Reference entry 101a3250; body size 31 bytes.
#line 1 "ENTRY_101a3250"

__declspec(naked) void FUN_101a3250(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp ecx, 0xffff
  __asm _emit 0x76 __asm _emit 0x03
  __asm mov eax, ecx
  __asm ret
  __asm mov eax, 1
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x06
  __asm add eax, eax
  __asm cmp ecx, eax
  __asm _emit 0x77 __asm _emit 0xfa
  __asm ret
}




// Reference entry 101a3280; body size 15 bytes.
#line 1 "ENTRY_101a3280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * FUN_101a3280(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(param_1) != (undefined1 *)(0x0)) {
    puVar1 = (undefined1 *)(param_1);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 101a32a0; body size 49 bytes.
#line 1 "ENTRY_101a32a0"

__declspec(naked) void FUN_101a32a0(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x3fffffff
  __asm sar edx, 2
  __asm push esi
  __asm mov esi, edx
  __asm _emit 0xd1 __asm _emit 0xee
  __asm sub ecx, esi
  __asm cmp edx, ecx
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 101a3390; body size 3 bytes.
#line 1 "ENTRY_101a3390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a3390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a33a0; body size 3 bytes.
#line 1 "ENTRY_101a33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a33a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a33b0; body size 3 bytes.
#line 1 "ENTRY_101a33b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a33b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a33c0; body size 3 bytes.
#line 1 "ENTRY_101a33c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a33c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a33d0; body size 3 bytes.
#line 1 "ENTRY_101a33d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101a33d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 101a33e0; body size 6 bytes.
#line 1 "ENTRY_101a33e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a33e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 101a36e0; body size 3 bytes.
#line 1 "ENTRY_101a36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a36e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101a36f0; body size 4 bytes.
#line 1 "ENTRY_101a36f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a36f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 101a3740; body size 24 bytes.
#line 1 "ENTRY_101a3740"

__declspec(naked) void FUN_101a3740(void)

{
  __asm cmp dword ptr [ecx], 0xffff
  __asm _emit 0x7c __asm _emit 0x06
  __asm mov eax, 0xffff
  __asm ret
  __asm push ecx
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm ret
}




// Reference entry 101a3b20; body size 12 bytes.
#line 1 "ENTRY_101a3b20"

__declspec(naked) void FUN_101a3b20(void)

{
  __asm cmp dword ptr [ecx + 0x14], 0x10
  __asm _emit 0x72 __asm _emit 0x03
  __asm mov eax, dword ptr [ecx]
  __asm ret
  __asm mov eax, ecx
  __asm ret
}




// Reference entry 101a3b30; body size 9 bytes.
#line 1 "ENTRY_101a3b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a3b30(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 101a3b50; body size 4 bytes.
#line 1 "ENTRY_101a3b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a3b50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 101a3b60; body size 30 bytes.
#line 1 "ENTRY_101a3b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a3b60(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  thunk_FUN_113cfb70(param_1 + 0x10,*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 101a3cb0; body size 4 bytes.
#line 1 "ENTRY_101a3cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a3cb0(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 101a4230; body size 8 bytes.
#line 1 "ENTRY_101a4230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101a4230(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 101a4750; body size 18 bytes.
#line 1 "ENTRY_101a4750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a4750(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (int)(param_1 + 0x10);
}


// Reference entry 101a4770; body size 3 bytes.
#line 1 "ENTRY_101a4770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a4770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101a4780; body size 8 bytes.
#line 1 "ENTRY_101a4780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a4780(int param_1)

{
  return (int)(param_1 + -0x10);
}


// Reference entry 101a4c40; body size 17 bytes.
#line 1 "ENTRY_101a4c40"

__declspec(naked) void FUN_101a4c40(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x08
  __asm cmp byte ptr [eax], 0
  __asm _emit 0x74 __asm _emit 0x03
  __asm xor al, al
  __asm ret
  __asm mov al, 1
  __asm ret
}




// Reference entry 101a4c60; body size 17 bytes.
#line 1 "ENTRY_101a4c60"

__declspec(naked) void FUN_101a4c60(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x08
  __asm cmp byte ptr [eax], 0
  __asm _emit 0x74 __asm _emit 0x03
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}




// Reference entry 101a4c80; body size 4 bytes.
#line 1 "ENTRY_101a4c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a4c80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 101a4d00; body size 10 bytes.
#line 1 "ENTRY_101a4d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101a4d00(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 101a4d10; body size 32 bytes.
#line 1 "ENTRY_101a4d10"

__declspec(naked) void FUN_101a4d10(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x18
  __asm lea edx, [ecx + 0x10]
  __asm push esi
  __asm lea esi, [edx + 1]
  __asm nop
  __asm mov al, byte ptr [edx]
  __asm inc edx
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm sub edx, esi
  __asm mov dword ptr [ecx + 4], edx
  __asm mov eax, edx
  __asm pop esi
  __asm ret
}




// Reference entry 101a4e60; body size 6 bytes.
#line 1 "ENTRY_101a4e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a4e60(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101a4e70; body size 6 bytes.
#line 1 "ENTRY_101a4e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a4e70(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101a5290; body size 168 bytes.
#line 1 "ENTRY_101a5290"

__declspec(naked) void FUN_101a5290(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push esi
  __asm push edi
  __asm test ebx, ebx
  __asm je LAB_101a5331
  __asm mov edi, dword ptr [esp + 0x14]
  __asm test edi, edi
  __asm je LAB_101a5331
  __asm cmp byte ptr [edi], 0
  __asm je LAB_101a5331
  __asm cmp byte ptr [esp + 0x18], 0
  __asm _emit 0x74 __asm _emit 0x15
  __asm push ebx
  __asm call LAB_10066437
  __asm push edi
  __asm mov esi, eax
  __asm call LAB_10066437
  __asm add esp, 8
  __asm mov ecx, eax
  __asm _emit 0xeb __asm _emit 0x1c
  __asm mov esi, ebx
  __asm lea ecx, [esi + 1]
  __asm mov al, byte ptr [esi]
  __asm inc esi
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm sub esi, ecx
  __asm mov ecx, edi
  __asm lea edx, [ecx + 1]
  __asm mov al, byte ptr [ecx]
  __asm inc ecx
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm sub ecx, edx
  __asm cmp esi, ecx
  __asm _emit 0x72 __asm _emit 0x41
  __asm push edi
  __asm push ebx
  __asm call LAB_1148cdff
  __asm mov ecx, eax
  __asm add esp, 8
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x31
  __asm cmp byte ptr [esp + 0x18], 0
  __asm _emit 0x74 __asm _emit 0x13
  __asm push ecx
  __asm call LAB_10066437
  __asm add esp, 4
  __asm mov ecx, eax
  __asm sub esi, ecx
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
  __asm lea edx, [ecx + 1]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov al, byte ptr [ecx]
  __asm inc ecx
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm sub ecx, edx
  __asm sub esi, ecx
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret
  __asm pop edi
  __asm pop esi
  __asm or eax, 0xffffffff
  __asm pop ebx
  __asm ret
}




// Reference entry 101a5370; body size 177 bytes.
#line 1 "ENTRY_101a5370"

__declspec(naked) void FUN_101a5370(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm push edi
  __asm test esi, esi
  __asm je LAB_101a5412
  __asm mov bl, byte ptr [esp + 0x24]
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x0d
  __asm push esi
  __asm call LAB_10066437
  __asm add esp, 4
  __asm mov ecx, eax
  __asm _emit 0xeb __asm _emit 0x14
  __asm mov ecx, esi
  __asm lea edx, [ecx + 1]
  __asm nop word ptr [eax + eax]
  __asm mov al, byte ptr [ecx]
  __asm inc ecx
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm sub ecx, edx
  __asm mov edx, dword ptr [esp + 0x20]
  __asm mov edi, dword ptr [esp + 0x1c]
  __asm cmp edx, -1
  __asm _emit 0x75 __asm _emit 0x04
  __asm mov edx, ecx
  __asm sub edx, edi
  __asm lea eax, [edi + edx]
  __asm cmp eax, ecx
  __asm _emit 0x77 __asm _emit 0x51
  __asm cmp edi, ecx
  __asm _emit 0x77 __asm _emit 0x4d
  __asm push edx
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x32
  __asm push edi
  __asm push esi
  __asm lea eax, [esp + 0x24]
  __asm push eax
  __asm lea eax, [esp + 0x1c]
  __asm push eax
  __asm call LAB_100430f9
  __asm mov ecx, dword ptr [esp + 0x20]
  __asm add esp, 0x14
  __asm mov eax, dword ptr [esp + 0x18]
  __asm sub eax, ecx
  __asm push eax
  __asm push ecx
  __asm mov ecx, dword ptr [esp + 0x1c]
  __asm call LAB_10048f8b
  __asm mov eax, dword ptr [esp + 0x14]
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea eax, [esi + edi]
  __asm push eax
  __asm call LAB_10048f8b
  __asm mov eax, dword ptr [esp + 0x14]
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret
  __asm mov eax, dword ptr [esp + 0x14]
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101a5700; body size 4 bytes.
#line 1 "ENTRY_101a5700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a5700(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 101a5d20; body size 13 bytes.
#line 1 "ENTRY_101a5d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_101a5d20(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)((undefined1 *)*param_1);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 101a5d30; body size 5 bytes.
#line 1 "ENTRY_101a5d30"

__declspec(naked) void FUN_101a5d30(void)

{
  __asm jmp LAB_1148cdf9
}




// Reference entry 101a64a0; body size 5 bytes.
#line 1 "ENTRY_101a64a0"

__declspec(naked) int FUN_101a64a0(...){ __asm jmp strstr }


// Reference entry 101a6c90; body size 46 bytes.
#line 1 "ENTRY_101a6c90"

__declspec(naked) void FUN_101a6c90(void)

{
  __asm push dword ptr [esp + 8]
  __asm push 0
  __asm push dword ptr [esp + 0xc]
  __asm push 0
  __asm push 0
  __asm call LAB_1007d2d1
  __asm mov ecx, dword ptr [eax]
  __asm push dword ptr [eax + 4]
  __asm or ecx, 2
  __asm push ecx
  __asm call dword ptr [LAB_122fc958]
  __asm or ecx, 0xffffffff
  __asm add esp, 0x1c
  __asm test eax, eax
  __asm cmovs eax, ecx
  __asm ret
}




// Reference entry 101a6cd0; body size 48 bytes.
#line 1 "ENTRY_101a6cd0"

__declspec(naked) void FUN_101a6cd0(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm push 0
  __asm push 0
  __asm call LAB_1007d2d1
  __asm mov ecx, dword ptr [eax]
  __asm push dword ptr [eax + 4]
  __asm or ecx, 2
  __asm push ecx
  __asm call dword ptr [LAB_122fc958]
  __asm or ecx, 0xffffffff
  __asm add esp, 0x1c
  __asm test eax, eax
  __asm cmovs eax, ecx
  __asm ret
}




// Reference entry 101a6d10; body size 46 bytes.
#line 1 "ENTRY_101a6d10"

__declspec(naked) void FUN_101a6d10(void)

{
  __asm push dword ptr [esp + 0x10]
  __asm push 0
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1007d2d1
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call dword ptr [LAB_122fc958]
  __asm or ecx, 0xffffffff
  __asm add esp, 0x1c
  __asm test eax, eax
  __asm cmovs eax, ecx
  __asm ret
}




// Reference entry 101a6d50; body size 48 bytes.
#line 1 "ENTRY_101a6d50"

__declspec(naked) void FUN_101a6d50(void)

{
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1007d2d1
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call dword ptr [LAB_122fc958]
  __asm or ecx, 0xffffffff
  __asm add esp, 0x1c
  __asm test eax, eax
  __asm cmovs eax, ecx
  __asm ret
}




// Reference entry 101a6d90; body size 25 bytes.
#line 1 "ENTRY_101a6d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a6d90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101a6db0; body size 25 bytes.
#line 1 "ENTRY_101a6db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a6db0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101a6dd0; body size 22 bytes.
#line 1 "ENTRY_101a6dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101a6dd0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101a6df0; body size 26 bytes.
#line 1 "ENTRY_101a6df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101a6df0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 101a6e10; body size 25 bytes.
#line 1 "ENTRY_101a6e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101a6e10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101a6e30; body size 18 bytes.
#line 1 "ENTRY_101a6e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_101a6e30(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101a6e50; body size 18 bytes.
#line 1 "ENTRY_101a6e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_101a6e50(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 101a6e70; body size 3 bytes.
#line 1 "ENTRY_101a6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a6e70(void)

{
  return;
}


// Reference entry 101a6e80; body size 28 bytes.
#line 1 "ENTRY_101a6e80"

__declspec(naked) void FUN_101a6e80(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm sub ecx, eax
  __asm push ecx
  __asm push eax
  __asm mov eax, dword ptr [esp + 0x14]
  __asm sub eax, ecx
  __asm push eax
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm ret
}




// Reference entry 101a6eb0; body size 33 bytes.
#line 1 "ENTRY_101a6eb0"

__declspec(naked) void FUN_101a6eb0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [edi + esi]
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 101a6ee0; body size 33 bytes.
#line 1 "ENTRY_101a6ee0"

__declspec(naked) void FUN_101a6ee0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [edi + esi]
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 101a6f10; body size 3 bytes.
#line 1 "ENTRY_101a6f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a6f10(void)

{
  return;
}


// Reference entry 101a6f20; body size 3 bytes.
#line 1 "ENTRY_101a6f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a6f20(void)

{
  return;
}


// Reference entry 101a6f30; body size 18 bytes.
#line 1 "ENTRY_101a6f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101a6f30(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 101a6f50; body size 18 bytes.
#line 1 "ENTRY_101a6f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101a6f50(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 101a72d0; body size 7 bytes.
#line 1 "ENTRY_101a72d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a72d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101a72e0; body size 7 bytes.
#line 1 "ENTRY_101a72e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a72e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101a72f0; body size 7 bytes.
#line 1 "ENTRY_101a72f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a72f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101a7300; body size 7 bytes.
#line 1 "ENTRY_101a7300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a7300(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101a76b0; body size 133 bytes.
#line 1 "ENTRY_101a76b0"

__declspec(naked) void FUN_101a76b0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm cmp esi, eax
  __asm _emit 0x74 __asm _emit 0x76
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm cmp edi, eax
  __asm _emit 0x74 __asm _emit 0x6d
  __asm push ebx
  __asm push ebp
  __asm push dword ptr [esi]
  __asm mov ebx, dword ptr [edi]
  __asm mov ebp, edi
  __asm push ebx
  __asm call dword ptr [esp + 0x24]
  __asm add esp, 8
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x1a
  __asm mov ecx, edi
  __asm mov eax, edi
  __asm sub ecx, esi
  __asm push ecx
  __asm sub eax, ecx
  __asm add eax, 4
  __asm push esi
  __asm push eax
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm mov dword ptr [esi], ebx
  __asm _emit 0xeb __asm _emit 0x32
  __asm push dword ptr [edi - 4]
  __asm lea esi, [edi - 4]
  __asm push ebx
  __asm call dword ptr [esp + 0x24]
  __asm add esp, 8
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x19
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [ebp], eax
  __asm mov ebp, esi
  __asm push dword ptr [esi - 4]
  __asm sub esi, 4
  __asm push ebx
  __asm call dword ptr [esp + 0x24]
  __asm add esp, 8
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xe7
  __asm mov esi, dword ptr [esp + 0x14]
  __asm mov dword ptr [ebp], ebx
  __asm mov eax, dword ptr [esp + 0x18]
  __asm add edi, 4
  __asm cmp edi, eax
  __asm _emit 0x75 __asm _emit 0x97
  __asm pop ebp
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 101a7760; body size 108 bytes.
#line 1 "ENTRY_101a7760"

__declspec(naked) void FUN_101a7760(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm cmp ebx, ebp
  __asm _emit 0x74 __asm _emit 0x59
  __asm push esi
  __asm lea esi, [ebx + 4]
  __asm cmp esi, ebp
  __asm _emit 0x74 __asm _emit 0x4b
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm mov edx, esi
  __asm cmp edi, dword ptr [ebx]
  __asm _emit 0x7d __asm _emit 0x1a
  __asm mov ecx, esi
  __asm mov eax, esi
  __asm sub ecx, ebx
  __asm push ecx
  __asm sub eax, ecx
  __asm add eax, 4
  __asm push ebx
  __asm push eax
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm mov dword ptr [ebx], edi
  __asm _emit 0xeb __asm _emit 0x1a
  __asm mov ecx, dword ptr [esi - 4]
  __asm lea eax, [esi - 4]
  __asm cmp edi, ecx
  __asm _emit 0x7d __asm _emit 0x0e
  __asm mov dword ptr [edx], ecx
  __asm mov edx, eax
  __asm mov ecx, dword ptr [eax - 4]
  __asm sub eax, 4
  __asm cmp edi, ecx
  __asm _emit 0x7c __asm _emit 0xf2
  __asm mov dword ptr [edx], edi
  __asm add esi, 4
  __asm cmp esi, ebp
  __asm _emit 0x75 __asm _emit 0xbd
  __asm pop edi
  __asm pop esi
  __asm mov eax, ebp
  __asm pop ebp
  __asm pop ebx
  __asm ret
  __asm pop esi
  __asm mov eax, ebp
  __asm pop ebp
  __asm pop ebx
  __asm ret
  __asm mov eax, ebp
  __asm pop ebp
  __asm pop ebx
  __asm ret
}




// Reference entry 101a77f0; body size 229 bytes.
#line 1 "ENTRY_101a77f0"

__declspec(naked) void FUN_101a77f0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm sub esp, 0xc
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm sub eax, ebx
  __asm sar eax, 2
  __asm push ebp
  __asm mov ebp, eax
  __asm mov dword ptr [esp + 0x1c], eax
  __asm _emit 0xd1 __asm _emit 0xfd
  __asm test ebp, ebp
  __asm jle LAB_101a78cf
  __asm mov ecx, dword ptr [esp + 0x20]
  __asm dec eax
  __asm mov dword ptr [esp + 0x10], eax
  __asm _emit 0xd1 __asm _emit 0xf8
  __asm push esi
  __asm mov dword ptr [esp + 0xc], eax
  __asm push edi
  __asm mov edx, dword ptr [ebx + ebp*4 - 4]
  __asm dec ebp
  __asm mov dword ptr [esp + 0x14], ebp
  __asm mov edi, ebp
  __asm mov dword ptr [esp + 0x20], edx
  __asm mov esi, ebp
  __asm cmp ebp, eax
  __asm _emit 0x7d __asm _emit 0x3c
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm push dword ptr [ebx + esi*8 + 4]
  __asm _emit 0x8d __asm _emit 0x34 __asm _emit 0x75 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push dword ptr [ebx + esi*4]
  __asm call ecx
  __asm add esp, 8
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x01
  __asm dec esi
  __asm mov eax, dword ptr [ebx + esi*4]
  __asm mov ecx, dword ptr [esp + 0x28]
  __asm mov dword ptr [ebx + edi*4], eax
  __asm mov edi, esi
  __asm cmp esi, ebp
  __asm _emit 0x7c __asm _emit 0xd8
  __asm mov ebp, dword ptr [esp + 0x14]
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [esp + 0x20]
  __asm cmp esi, eax
  __asm _emit 0x75 __asm _emit 0x13
  __asm mov eax, dword ptr [esp + 0x24]
  __asm _emit 0xa8 __asm _emit 0x01 __asm _emit 0x75 __asm _emit 0x0b
  __asm mov eax, dword ptr [ebx + eax*4 - 4]
  __asm mov dword ptr [ebx + edi*4], eax
  __asm mov edi, dword ptr [esp + 0x18]
  __asm cmp ebp, edi
  __asm _emit 0x7d __asm _emit 0x27
  __asm nop
  __asm lea esi, [edi - 1]
  __asm _emit 0xd1 __asm _emit 0xfe
  __asm push edx
  __asm push dword ptr [ebx + esi*4]
  __asm call ecx
  __asm add esp, 8
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x14
  __asm mov eax, dword ptr [ebx + esi*4]
  __asm mov ecx, dword ptr [esp + 0x28]
  __asm mov edx, dword ptr [esp + 0x20]
  __asm mov dword ptr [ebx + edi*4], eax
  __asm mov edi, esi
  __asm cmp ebp, esi
  __asm _emit 0x7c __asm _emit 0xda
  __asm mov eax, dword ptr [esp + 0x20]
  __asm mov ecx, dword ptr [esp + 0x28]
  __asm mov dword ptr [ebx + edi*4], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm test ebp, ebp
  __asm jg LAB_101a7823
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0xc
  __asm ret
}




// Reference entry 101a7910; body size 149 bytes.
#line 1 "ENTRY_101a7910"

__declspec(naked) void FUN_101a7910(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, dword ptr [esp + 4]
  __asm sub ecx, edx
  __asm sar ecx, 2
  __asm push edi
  __asm mov edi, ecx
  __asm mov dword ptr [esp + 0xc], ecx
  __asm _emit 0xd1 __asm _emit 0xff
  __asm test edi, edi
  __asm _emit 0x7e __asm _emit 0x79
  __asm push ebx
  __asm push ebp
  __asm lea ebx, [ecx - 1]
  __asm push esi
  __asm _emit 0xd1 __asm _emit 0xfb
  __asm mov ebp, dword ptr [edx + edi*4 - 4]
  __asm dec edi
  __asm mov esi, edi
  __asm mov eax, edi
  __asm cmp edi, ebx
  __asm _emit 0x7d __asm _emit 0x23
  __asm nop
  __asm mov ecx, dword ptr [edx + eax*8 + 8]
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x45 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp ecx, dword ptr [edx + eax*4 - 4]
  __asm _emit 0x7d __asm _emit 0x01
  __asm dec eax
  __asm mov ecx, dword ptr [edx + eax*4]
  __asm mov dword ptr [edx + esi*4], ecx
  __asm mov esi, eax
  __asm cmp eax, ebx
  __asm _emit 0x7c __asm _emit 0xe2
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm cmp eax, ebx
  __asm _emit 0x75 __asm _emit 0x0f
  __asm test cl, 1
  __asm _emit 0x75 __asm _emit 0x0a
  __asm mov eax, dword ptr [edx + ecx*4 - 4]
  __asm mov dword ptr [edx + esi*4], eax
  __asm lea esi, [ecx - 1]
  __asm cmp edi, esi
  __asm _emit 0x7d __asm _emit 0x1c __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [esi - 1]
  __asm _emit 0xd1 __asm _emit 0xf8
  __asm mov ecx, dword ptr [edx + eax*4]
  __asm cmp ecx, ebp
  __asm _emit 0x7d __asm _emit 0x09
  __asm mov dword ptr [edx + esi*4], ecx
  __asm mov esi, eax
  __asm cmp edi, eax
  __asm _emit 0x7c __asm _emit 0xeb
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm mov dword ptr [edx + esi*4], ebp
  __asm test edi, edi
  __asm _emit 0x7f __asm _emit 0x92
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm pop edi
  __asm ret
}




// Reference entry 101a79d0; body size 90 bytes.
#line 1 "ENTRY_101a79d0"

__declspec(naked) void FUN_101a79d0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm push dword ptr [edi]
  __asm push dword ptr [esi]
  __asm call ebx
  __asm add esp, 8
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x08
  __asm mov ecx, dword ptr [esi]
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esi], eax
  __asm mov dword ptr [edi], ecx
  __asm mov ebp, dword ptr [esp + 0x1c]
  __asm push dword ptr [esi]
  __asm push dword ptr [ebp]
  __asm call ebx
  __asm add esp, 8
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x1e
  __asm mov ecx, dword ptr [ebp]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [ebp], eax
  __asm mov dword ptr [esi], ecx
  __asm push dword ptr [edi]
  __asm push ecx
  __asm call ebx
  __asm add esp, 8
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x08
  __asm mov ecx, dword ptr [esi]
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esi], eax
  __asm mov dword ptr [edi], ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}




// Reference entry 101a7a40; body size 51 bytes.
#line 1 "ENTRY_101a7a40"

__declspec(naked) void FUN_101a7a40(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov ecx, dword ptr [eax]
  __asm mov edx, dword ptr [esi]
  __asm cmp ecx, edx
  __asm _emit 0x7d __asm _emit 0x06
  __asm mov dword ptr [eax], edx
  __asm mov dword ptr [esi], ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov edi, dword ptr [esp + 0x14]
  __asm mov edx, dword ptr [edi]
  __asm cmp edx, ecx
  __asm _emit 0x7d __asm _emit 0x0e
  __asm mov dword ptr [edi], ecx
  __asm mov dword ptr [eax], edx
  __asm mov ecx, dword ptr [esi]
  __asm cmp edx, ecx
  __asm _emit 0x7d __asm _emit 0x04
  __asm mov dword ptr [eax], ecx
  __asm mov dword ptr [esi], edx
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 101a7a80; body size 28 bytes.
#line 1 "ENTRY_101a7a80"

__declspec(naked) void FUN_101a7a80(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm sub ecx, eax
  __asm push ecx
  __asm push eax
  __asm mov eax, dword ptr [esp + 0x14]
  __asm sub eax, ecx
  __asm push eax
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm ret
}




// Reference entry 101a7ab0; body size 33 bytes.
#line 1 "ENTRY_101a7ab0"

__declspec(naked) void FUN_101a7ab0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [edi + esi]
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 101a7ae0; body size 8 bytes.
#line 1 "ENTRY_101a7ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a7ae0(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 101a7f10; body size 5 bytes.
#line 1 "ENTRY_101a7f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a7f10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a7f20; body size 5 bytes.
#line 1 "ENTRY_101a7f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_101a7f20(undefined1 param_1)

{
  return (undefined1)(param_1);
}


// Reference entry 101a80e0; body size 42 bytes.
#line 1 "ENTRY_101a80e0"

__declspec(naked) void FUN_101a80e0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 4], edx
  __asm mov ecx, dword ptr [edx]
  __asm mov dword ptr [eax], ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm sub eax, edx
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sar eax, 2
  __asm mov dword ptr [esp + 0xc], eax
  __asm jmp LAB_1006996b
}




// Reference entry 101a8120; body size 42 bytes.
#line 1 "ENTRY_101a8120"

__declspec(naked) void FUN_101a8120(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 4], edx
  __asm mov ecx, dword ptr [edx]
  __asm mov dword ptr [eax], ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm sub eax, edx
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sar eax, 2
  __asm mov dword ptr [esp + 0xc], eax
  __asm jmp LAB_1002c75a
}




// Reference entry 101a8160; body size 61 bytes.
#line 1 "ENTRY_101a8160"

__declspec(naked) void FUN_101a8160(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, ecx
  __asm mov edx, dword ptr [esp + 4]
  __asm sub eax, edx
  __asm and eax, 0xfffffffc
  __asm cmp eax, 8
  __asm _emit 0x7c __asm _emit 0x28
  __asm mov eax, dword ptr [ecx - 4]
  __asm sub ecx, 4
  __asm push dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 0xc], eax
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [ecx], eax
  __asm lea eax, [esp + 0xc]
  __asm push eax
  __asm sub ecx, edx
  __asm sar ecx, 2
  __asm push ecx
  __asm push 0
  __asm push edx
  __asm call LAB_1006996b
  __asm add esp, 0x14
  __asm ret
}




// Reference entry 101a81b0; body size 61 bytes.
#line 1 "ENTRY_101a81b0"

__declspec(naked) void FUN_101a81b0(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, ecx
  __asm mov edx, dword ptr [esp + 4]
  __asm sub eax, edx
  __asm and eax, 0xfffffffc
  __asm cmp eax, 8
  __asm _emit 0x7c __asm _emit 0x28
  __asm mov eax, dword ptr [ecx - 4]
  __asm sub ecx, 4
  __asm push dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 0xc], eax
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [ecx], eax
  __asm lea eax, [esp + 0xc]
  __asm push eax
  __asm sub ecx, edx
  __asm sar ecx, 2
  __asm push ecx
  __asm push 0
  __asm push edx
  __asm call LAB_1002c75a
  __asm add esp, 0x14
  __asm ret
}




// Reference entry 101a8200; body size 8 bytes.
#line 1 "ENTRY_101a8200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a8200(int param_1)

{
  return (int)(param_1 + -4);
}


// Reference entry 101a8210; body size 87 bytes.
#line 1 "ENTRY_101a8210"

__declspec(naked) void FUN_101a8210(void)

{
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp ebp, esi
  __asm _emit 0x7d __asm _emit 0x39
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov eax, dword ptr [esp + 0x20]
  __asm lea edi, [esi - 1]
  __asm _emit 0xd1 __asm _emit 0xff
  __asm push dword ptr [eax]
  __asm push dword ptr [ebx + edi*4]
  __asm call dword ptr [esp + 0x2c]
  __asm add esp, 8
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x0c
  __asm mov eax, dword ptr [ebx + edi*4]
  __asm mov dword ptr [ebx + esi*4], eax
  __asm mov esi, edi
  __asm cmp ebp, edi
  __asm _emit 0x7c __asm _emit 0xdb
  __asm mov eax, dword ptr [esp + 0x20]
  __asm pop edi
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ebx + esi*4], eax
  __asm pop ebx
  __asm pop esi
  __asm pop ebp
  __asm ret
  __asm mov eax, dword ptr [esp + 0x18]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [eax + esi*4], ecx
  __asm pop esi
  __asm pop ebp
  __asm ret
}




// Reference entry 101a8280; body size 68 bytes.
#line 1 "ENTRY_101a8280"

__declspec(naked) void FUN_101a8280(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm cmp ebx, edx
  __asm _emit 0x7d __asm _emit 0x28
  __asm mov ecx, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm push esi
  __asm lea eax, [edx - 1]
  __asm _emit 0xd1 __asm _emit 0xf8
  __asm mov esi, dword ptr [ecx + eax*4]
  __asm cmp esi, dword ptr [edi]
  __asm _emit 0x7d __asm _emit 0x09
  __asm mov dword ptr [ecx + edx*4], esi
  __asm mov edx, eax
  __asm cmp ebx, eax
  __asm _emit 0x7c __asm _emit 0xeb
  __asm mov eax, dword ptr [edi]
  __asm pop esi
  __asm pop edi
  __asm mov dword ptr [ecx + edx*4], eax
  __asm pop ebx
  __asm ret
  __asm mov eax, dword ptr [esp + 0x14]
  __asm pop ebx
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax + edx*4], ecx
  __asm ret
}




// Reference entry 101a82e0; body size 5 bytes.
#line 1 "ENTRY_101a82e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a82e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a82f0; body size 13 bytes.
#line 1 "ENTRY_101a82f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a82f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101a8300; body size 13 bytes.
#line 1 "ENTRY_101a8300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8300(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101a8310; body size 87 bytes.
#line 1 "ENTRY_101a8310"

__declspec(naked) void FUN_101a8310(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm sub esi, edi
  __asm mov eax, esi
  __asm and eax, 0xfffffffc
  __asm cmp eax, 8
  __asm _emit 0x7c __asm _emit 0x3e
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x18]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi + esi - 4]
  __asm mov dword ptr [esp + 0x14], eax
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [edi + esi - 4], eax
  __asm lea eax, [esp + 0x14]
  __asm push ebx
  __asm push eax
  __asm lea eax, [esi - 4]
  __asm sar eax, 2
  __asm push eax
  __asm push 0
  __asm push edi
  __asm call LAB_1006996b
  __asm sub esi, 4
  __asm add esp, 0x14
  __asm mov eax, esi
  __asm and eax, 0xfffffffc
  __asm cmp eax, 8
  __asm _emit 0x7d __asm _emit 0xcd
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 101a8380; body size 87 bytes.
#line 1 "ENTRY_101a8380"

__declspec(naked) void FUN_101a8380(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm sub esi, edi
  __asm mov eax, esi
  __asm and eax, 0xfffffffc
  __asm cmp eax, 8
  __asm _emit 0x7c __asm _emit 0x3e
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x18]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi + esi - 4]
  __asm mov dword ptr [esp + 0x14], eax
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [edi + esi - 4], eax
  __asm lea eax, [esp + 0x14]
  __asm push ebx
  __asm push eax
  __asm lea eax, [esi - 4]
  __asm sar eax, 2
  __asm push eax
  __asm push 0
  __asm push edi
  __asm call LAB_1002c75a
  __asm sub esi, 4
  __asm add esp, 0x14
  __asm mov eax, esi
  __asm and eax, 0xfffffffc
  __asm cmp eax, 8
  __asm _emit 0x7d __asm _emit 0xcd
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 101a8970; body size 5 bytes.
#line 1 "ENTRY_101a8970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a8980; body size 5 bytes.
#line 1 "ENTRY_101a8980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a8990; body size 36 bytes.
#line 1 "ENTRY_101a8990"

__declspec(naked) void FUN_101a8990(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm sar edi, 2
  __asm add esp, 0xc
  __asm lea eax, [esi + edi*4]
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 101a89c0; body size 36 bytes.
#line 1 "ENTRY_101a89c0"

__declspec(naked) void FUN_101a89c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm sar edi, 2
  __asm add esp, 0xc
  __asm lea eax, [esi + edi*4]
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 101a89f0; body size 5 bytes.
#line 1 "ENTRY_101a89f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a89f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a8a00; body size 13 bytes.
#line 1 "ENTRY_101a8a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8a00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 101a8a10; body size 13 bytes.
#line 1 "ENTRY_101a8a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8a10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 101a8a20; body size 3 bytes.
#line 1 "ENTRY_101a8a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8a20(void)

{
  return;
}


// Reference entry 101a8a30; body size 36 bytes.
#line 1 "ENTRY_101a8a30"

__declspec(naked) void FUN_101a8a30(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_100443d2
  __asm ret 4
}




// Reference entry 101a8a60; body size 36 bytes.
#line 1 "ENTRY_101a8a60"

__declspec(naked) void FUN_101a8a60(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10070e1e
  __asm ret 4
}




// Reference entry 101a8a90; body size 5 bytes.
#line 1 "ENTRY_101a8a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a8aa0; body size 5 bytes.
#line 1 "ENTRY_101a8aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a8ab0; body size 5 bytes.
#line 1 "ENTRY_101a8ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a8ac0; body size 5 bytes.
#line 1 "ENTRY_101a8ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8ac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a8ad0; body size 5 bytes.
#line 1 "ENTRY_101a8ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a8ae0; body size 6 bytes.
#line 1 "ENTRY_101a8ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101a8ae0(void)

{
  return (char *)("SCIIntArray");
}


// Reference entry 101a8af0; body size 6 bytes.
#line 1 "ENTRY_101a8af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101a8af0(void)

{
  return (char *)("SCIObj");
}


// Reference entry 101a8b00; body size 19 bytes.
#line 1 "ENTRY_101a8b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  FUN_101a8b00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
}


// Reference entry 101a8b20; body size 5 bytes.
#line 1 "ENTRY_101a8b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a8b30; body size 35 bytes.
#line 1 "ENTRY_101a8b30"

__declspec(naked) void FUN_101a8b30(void)

{
  __asm push ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov edx, ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm sub edx, eax
  __asm mov byte ptr [esp], 0
  __asm push dword ptr [esp]
  __asm sar edx, 2
  __asm push edx
  __asm push ecx
  __asm push eax
  __asm call LAB_1004204b
  __asm add esp, 0x14
  __asm ret
}




// Reference entry 101a8b60; body size 31 bytes.
#line 1 "ENTRY_101a8b60"

__declspec(naked) void FUN_101a8b60(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, ecx
  __asm mov eax, dword ptr [esp + 4]
  __asm sub edx, eax
  __asm push dword ptr [esp + 0xc]
  __asm sar edx, 2
  __asm push edx
  __asm push ecx
  __asm push eax
  __asm call LAB_1005c1e9
  __asm add esp, 0x10
  __asm ret
}




// Reference entry 101a8b90; body size 31 bytes.
#line 1 "ENTRY_101a8b90"

__declspec(naked) void FUN_101a8b90(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, ecx
  __asm mov eax, dword ptr [esp + 4]
  __asm sub edx, eax
  __asm push dword ptr [esp + 0xc]
  __asm sar edx, 2
  __asm push edx
  __asm push ecx
  __asm push eax
  __asm call LAB_1004204b
  __asm add esp, 0x10
  __asm ret
}




// Reference entry 101a8bc0; body size 19 bytes.
#line 1 "ENTRY_101a8bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8bc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 101a8be0; body size 95 bytes.
#line 1 "ENTRY_101a8be0"

__declspec(naked) void FUN_101a8be0(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm push edi
  __asm cmp ecx, esi
  __asm _emit 0x74 __asm _emit 0x1c
  __asm lea edx, [ecx + 4]
  __asm cmp edx, esi
  __asm _emit 0x74 __asm _emit 0x15
  __asm mov ebx, dword ptr [ecx]
  __asm mov edi, dword ptr [edx]
  __asm lea eax, [edx + 4]
  __asm cmp ebx, edi
  __asm _emit 0x74 __asm _emit 0x14
  __asm mov ecx, edx
  __asm mov ebx, edi
  __asm mov edx, eax
  __asm cmp edx, esi
  __asm _emit 0x75 __asm _emit 0xed
  __asm mov eax, dword ptr [esp + 0x10]
  __asm pop edi
  __asm mov dword ptr [eax], esi
  __asm pop esi
  __asm pop ebx
  __asm ret
  __asm cmp eax, esi
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [eax]
  __asm cmp dword ptr [ecx], edx
  __asm _emit 0x74 __asm _emit 0x05
  __asm add ecx, 4
  __asm mov dword ptr [ecx], edx
  __asm add eax, 4
  __asm cmp eax, esi
  __asm _emit 0x75 __asm _emit 0xee
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add ecx, 4
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov dword ptr [eax], ecx
  __asm ret
}




// Reference entry 101a8c60; body size 95 bytes.
#line 1 "ENTRY_101a8c60"

__declspec(naked) void FUN_101a8c60(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm push edi
  __asm cmp ecx, esi
  __asm _emit 0x74 __asm _emit 0x1c
  __asm lea edx, [ecx + 4]
  __asm cmp edx, esi
  __asm _emit 0x74 __asm _emit 0x15
  __asm mov ebx, dword ptr [ecx]
  __asm mov edi, dword ptr [edx]
  __asm lea eax, [edx + 4]
  __asm cmp ebx, edi
  __asm _emit 0x74 __asm _emit 0x14
  __asm mov ecx, edx
  __asm mov ebx, edi
  __asm mov edx, eax
  __asm cmp edx, esi
  __asm _emit 0x75 __asm _emit 0xed
  __asm mov eax, dword ptr [esp + 0x10]
  __asm pop edi
  __asm mov dword ptr [eax], esi
  __asm pop esi
  __asm pop ebx
  __asm ret
  __asm cmp eax, esi
  __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [eax]
  __asm cmp dword ptr [ecx], edx
  __asm _emit 0x74 __asm _emit 0x05
  __asm add ecx, 4
  __asm mov dword ptr [ecx], edx
  __asm add eax, 4
  __asm cmp eax, esi
  __asm _emit 0x75 __asm _emit 0xee
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add ecx, 4
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov dword ptr [eax], ecx
  __asm ret
}




// Reference entry 101a8ce0; body size 54 bytes.
#line 1 "ENTRY_101a8ce0"

__declspec(naked) void FUN_101a8ce0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11881068
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], LAB_11881110
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101a8d30; body size 27 bytes.
#line 1 "ENTRY_101a8d30"

__declspec(naked) void FUN_101a8d30(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11881084
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 101a8d60; body size 27 bytes.
#line 1 "ENTRY_101a8d60"

__declspec(naked) void FUN_101a8d60(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11881068
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 101a8e10; body size 11 bytes.
#line 1 "ENTRY_101a8e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101a8e10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101a8e20; body size 11 bytes.
#line 1 "ENTRY_101a8e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101a8e20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101a8e30; body size 23 bytes.
#line 1 "ENTRY_101a8e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8e30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101a8e50; body size 23 bytes.
#line 1 "ENTRY_101a8e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8e50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101a8e70; body size 3 bytes.
#line 1 "ENTRY_101a8e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a8e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a8e80; body size 3 bytes.
#line 1 "ENTRY_101a8e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a8e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a8e90; body size 23 bytes.
#line 1 "ENTRY_101a8e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8e90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101a8eb0; body size 23 bytes.
#line 1 "ENTRY_101a8eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101a8ed0; body size 9 bytes.
#line 1 "ENTRY_101a8ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIIntArray);
  return (undefined4 *)(param_1);
}


// Reference entry 101a8ee0; body size 54 bytes.
#line 1 "ENTRY_101a8ee0"

__declspec(naked) void FUN_101a8ee0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11881084
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], LAB_118810c4
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 101a8fc0; body size 19 bytes.
#line 1 "ENTRY_101a8fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a8fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101a9280; body size 7 bytes.
#line 1 "ENTRY_101a9280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a9280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101a9320; body size 12 bytes.
#line 1 "ENTRY_101a9320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_101a9320(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 101a9340; body size 3 bytes.
#line 1 "ENTRY_101a9340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101a9350; body size 7 bytes.
#line 1 "ENTRY_101a9350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101a9350(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101a9360; body size 3 bytes.
#line 1 "ENTRY_101a9360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9360(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101a9370; body size 3 bytes.
#line 1 "ENTRY_101a9370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9370(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101a9380; body size 18 bytes.
#line 1 "ENTRY_101a9380"

__declspec(naked) void FUN_101a9380(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx]
  __asm lea ecx, [ecx + eax*4]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 8
}




// Reference entry 101a93a0; body size 14 bytes.
#line 1 "ENTRY_101a93a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101a93a0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (int *)(param_1);
}


// Reference entry 101a93c0; body size 14 bytes.
#line 1 "ENTRY_101a93c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101a93c0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (int *)(param_1);
}


// Reference entry 101a9780; body size 49 bytes.
#line 1 "ENTRY_101a9780"

__declspec(naked) void FUN_101a9780(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x3fffffff
  __asm sar edx, 2
  __asm push esi
  __asm mov esi, edx
  __asm _emit 0xd1 __asm _emit 0xee
  __asm sub ecx, esi
  __asm cmp edx, ecx
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 101a97c0; body size 49 bytes.
#line 1 "ENTRY_101a97c0"

__declspec(naked) void FUN_101a97c0(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x3fffffff
  __asm sar edx, 2
  __asm push esi
  __asm mov esi, edx
  __asm _emit 0xd1 __asm _emit 0xee
  __asm sub ecx, esi
  __asm cmp edx, ecx
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 101a98e0; body size 3 bytes.
#line 1 "ENTRY_101a98e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  __stdcall FUN_101a98e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
}


// Reference entry 101a98f0; body size 3 bytes.
#line 1 "ENTRY_101a98f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101a98f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 101a9900; body size 3 bytes.
#line 1 "ENTRY_101a9900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a9910; body size 3 bytes.
#line 1 "ENTRY_101a9910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a9920; body size 3 bytes.
#line 1 "ENTRY_101a9920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a9930; body size 3 bytes.
#line 1 "ENTRY_101a9930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a9940; body size 3 bytes.
#line 1 "ENTRY_101a9940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a9950; body size 3 bytes.
#line 1 "ENTRY_101a9950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a9960; body size 3 bytes.
#line 1 "ENTRY_101a9960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a9970; body size 3 bytes.
#line 1 "ENTRY_101a9970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101a9980; body size 3 bytes.
#line 1 "ENTRY_101a9980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101a9980(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 101a9990; body size 3 bytes.
#line 1 "ENTRY_101a9990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101a9990(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 101a99a0; body size 9 bytes.
#line 1 "ENTRY_101a99a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101a99a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101a9a90; body size 38 bytes.
#line 1 "ENTRY_101a9a90"

__declspec(naked) void FUN_101a9a90(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm sar edi, 2
  __asm add esp, 0xc
  __asm lea eax, [esi + edi*4]
  __asm pop edi
  __asm pop esi
  __asm ret 0xc
}




// Reference entry 101a9ac0; body size 38 bytes.
#line 1 "ENTRY_101a9ac0"

__declspec(naked) void FUN_101a9ac0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm sar edi, 2
  __asm add esp, 0xc
  __asm lea eax, [esi + edi*4]
  __asm pop edi
  __asm pop esi
  __asm ret 0xc
}




// Reference entry 101a9af0; body size 27 bytes.
#line 1 "ENTRY_101a9af0"

__declspec(naked) void FUN_101a9af0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 8]
  __asm sub eax, ecx
  __asm push eax
  __asm push ecx
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm ret 0x10
}




// Reference entry 101a9b20; body size 27 bytes.
#line 1 "ENTRY_101a9b20"

__declspec(naked) void FUN_101a9b20(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 8]
  __asm sub eax, ecx
  __asm push eax
  __asm push ecx
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm ret 0x10
}




// Reference entry 101a9b50; body size 27 bytes.
#line 1 "ENTRY_101a9b50"

__declspec(naked) void FUN_101a9b50(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 8]
  __asm sub eax, ecx
  __asm push eax
  __asm push ecx
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm ret 0xc
}




// Reference entry 101a9b80; body size 27 bytes.
#line 1 "ENTRY_101a9b80"

__declspec(naked) void FUN_101a9b80(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 8]
  __asm sub eax, ecx
  __asm push eax
  __asm push ecx
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm ret 0xc
}




// Reference entry 101a9bb0; body size 3 bytes.
#line 1 "ENTRY_101a9bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9bb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101a9bc0; body size 3 bytes.
#line 1 "ENTRY_101a9bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  __stdcall FUN_101a9bc0(unsigned int recovered_unused_stack_0)

{
}


// Reference entry 101a9cf0; body size 39 bytes.
#line 1 "ENTRY_101a9cf0"

__declspec(naked) void FUN_101a9cf0(void)

{
  __asm mov edx, dword ptr [ecx + 0xc]
  __asm add ecx, 8
  __asm cmp edx, dword ptr [ecx + 8]
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10070e1e
  __asm ret 4
}




// Reference entry 101a9d50; body size 11 bytes.
#line 1 "ENTRY_101a9d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101a9d50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101a9d60; body size 9 bytes.
#line 1 "ENTRY_101a9d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a9d60(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 101a9d70; body size 9 bytes.
#line 1 "ENTRY_101a9d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a9d70(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 101a9d80; body size 7 bytes.
#line 1 "ENTRY_101a9d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a9d80(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_1 + 8));
  return;
}


// Reference entry 101a9d90; body size 6 bytes.
#line 1 "ENTRY_101a9d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a9d90(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 101a9da0; body size 6 bytes.
#line 1 "ENTRY_101a9da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a9da0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 101a9ed0; body size 96 bytes.
#line 1 "ENTRY_101a9ed0"

__declspec(naked) void FUN_101a9ed0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0x14
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 8], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x3f
  __asm mov dword ptr [eax], LAB_11881084
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [eax], LAB_118810c4
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}




// Reference entry 101a9f50; body size 61 bytes.
#line 1 "ENTRY_101a9f50"

__declspec(naked) void FUN_101a9f50(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x0f
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}




// Reference entry 101a9fa0; body size 61 bytes.
#line 1 "ENTRY_101a9fa0"

__declspec(naked) void FUN_101a9fa0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x0f
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}




// Reference entry 101a9ff0; body size 9 bytes.
#line 1 "ENTRY_101a9ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9ff0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101aa000; body size 12 bytes.
#line 1 "ENTRY_101aa000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101aa000(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101aa010; body size 51 bytes.
#line 1 "ENTRY_101aa010"

__declspec(naked) void FUN_101aa010(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm push ebx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp edi, eax
  __asm _emit 0x74 __asm _emit 0x18
  __asm push esi
  __asm mov esi, dword ptr [ebx + 4]
  __asm sub esi, eax
  __asm push esi
  __asm push eax
  __asm push edi
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [edi + esi]
  __asm mov dword ptr [ebx + 4], eax
  __asm pop esi
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [eax], edi
  __asm pop edi
  __asm pop ebx
  __asm ret 0xc
}




// Reference entry 101aa050; body size 42 bytes.
#line 1 "ENTRY_101aa050"

__declspec(naked) void FUN_101aa050(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm lea edx, [edi + 4]
  __asm sub eax, edx
  __asm push eax
  __asm push edx
  __asm push edi
  __asm call LAB_1148cdf3
  __asm mov eax, dword ptr [esp + 0x18]
  __asm add esp, 0xc
  __asm add dword ptr [esi + 4], -4
  __asm mov dword ptr [eax], edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
}




// Reference entry 101aa0c0; body size 6 bytes.
#line 1 "ENTRY_101aa0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101aa0c0(void)

{
  return (char *)("SCIIntArray");
}


// Reference entry 101aa0d0; body size 6 bytes.
#line 1 "ENTRY_101aa0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101aa0d0(void)

{
  return (char *)("SCIObj");
}


// Reference entry 101aa0e0; body size 6 bytes.
#line 1 "ENTRY_101aa0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101aa0e0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101aa0f0; body size 6 bytes.
#line 1 "ENTRY_101aa0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101aa0f0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101aa100; body size 6 bytes.
#line 1 "ENTRY_101aa100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101aa100(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101aa110; body size 6 bytes.
#line 1 "ENTRY_101aa110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101aa110(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101aa120; body size 3 bytes.
#line 1 "ENTRY_101aa120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101aa120(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101aa130; body size 36 bytes.
#line 1 "ENTRY_101aa130"

__declspec(naked) void FUN_101aa130(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_100443d2
  __asm ret 4
}




// Reference entry 101aa160; body size 36 bytes.
#line 1 "ENTRY_101aa160"

__declspec(naked) void FUN_101aa160(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10070e1e
  __asm ret 4
}




// Reference entry 101aa3d0; body size 28 bytes.
#line 1 "ENTRY_101aa3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101aa3d0(undefined4 *param_1)

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


// Reference entry 101aa400; body size 28 bytes.
#line 1 "ENTRY_101aa400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101aa400(undefined4 *param_1)

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


// Reference entry 101aa520; body size 9 bytes.
#line 1 "ENTRY_101aa520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101aa520(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 101aa5a0; body size 25 bytes.
#line 1 "ENTRY_101aa5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aa5a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101aa670; body size 25 bytes.
#line 1 "ENTRY_101aa670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aa670(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101aa690; body size 25 bytes.
#line 1 "ENTRY_101aa690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aa690(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101aa6b0; body size 18 bytes.
#line 1 "ENTRY_101aa6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aa6b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101aa6d0; body size 5 bytes.
#line 1 "ENTRY_101aa6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101aa6d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101aa6e0; body size 5 bytes.
#line 1 "ENTRY_101aa6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101aa6e0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101aa6f0; body size 5 bytes.
#line 1 "ENTRY_101aa6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101aa6f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101aa700; body size 22 bytes.
#line 1 "ENTRY_101aa700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101aa700(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101aa890; body size 26 bytes.
#line 1 "ENTRY_101aa890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101aa890(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 101aa8b0; body size 25 bytes.
#line 1 "ENTRY_101aa8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101aa8b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101aa8d0; body size 91 bytes.
#line 1 "ENTRY_101aa8d0"

__declspec(naked) void FUN_101aa8d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 101aa950; body size 26 bytes.
#line 1 "ENTRY_101aa950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101aa950(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 101aaa70; body size 90 bytes.
#line 1 "ENTRY_101aaa70"

__declspec(naked) void FUN_101aaa70(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm cmp edi, esi
  __asm _emit 0x74 __asm _emit 0x10
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], eax
  __asm call LAB_1002a973
  __asm mov eax, dword ptr [edi + 4]
  __asm cmp eax, dword ptr [esi + 4]
  __asm _emit 0x74 __asm _emit 0x2f
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x16 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, dword ptr [edi + 8]
  __asm mov dword ptr [esi + 8], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 101aaae0; body size 83 bytes.
#line 1 "ENTRY_101aaae0"

__declspec(naked) void FUN_101aaae0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm cmp edi, dword ptr [esi]
  __asm _emit 0x74 __asm _emit 0x3e
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x18
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 101aad70; body size 5 bytes.
#line 1 "ENTRY_101aad70"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_101aad70(undefined4 *param_1){ __asm jmp FUN_1003d73f }


// Reference entry 101aad80; body size 24 bytes.
#line 1 "ENTRY_101aad80"

__declspec(naked) void FUN_101aad80(void)

{
  __asm push dword ptr [esp + 8]
  __asm add ecx, 4
  __asm push dword ptr [esp + 8]
  __asm call LAB_10017f94
  __asm test al, al
  __asm sete al
  __asm ret 8
}




// Reference entry 101aada0; body size 3 bytes.
#line 1 "ENTRY_101aada0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101aada0(void)

{
  return;
}


// Reference entry 101aadb0; body size 3 bytes.
#line 1 "ENTRY_101aadb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101aadb0(void)

{
  return;
}


// Reference entry 101ab370; body size 64 bytes.
#line 1 "ENTRY_101ab370"

__declspec(naked) void FUN_101ab370(void)

{
  __asm push ebx
  __asm push edi
  __asm mov edi, ecx
  __asm mov ebx, dword ptr [edi + 4]
  __asm test ebx, ebx
  __asm _emit 0x75 __asm _emit 0x09
  __asm mov eax, dword ptr [esp + 0x10]
  __asm pop edi
  __asm pop ebx
  __asm ret 8
  __asm mov edx, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [edi + 0xc]
  __asm push esi
  __asm mov esi, dword ptr [edi + 8]
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [ecx], eax
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm add dword ptr [ecx + 4], ebx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm pop ebx
  __asm ret 8
}




// Reference entry 101ab3c0; body size 13 bytes.
#line 1 "ENTRY_101ab3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab3c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101ab3d0; body size 13 bytes.
#line 1 "ENTRY_101ab3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab3d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101ab3e0; body size 13 bytes.
#line 1 "ENTRY_101ab3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab3e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101ab3f0; body size 13 bytes.
#line 1 "ENTRY_101ab3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab3f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101ab400; body size 33 bytes.
#line 1 "ENTRY_101ab400"

__declspec(naked) void FUN_101ab400(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [edi + esi]
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 101ab430; body size 3 bytes.
#line 1 "ENTRY_101ab430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab430(void)

{
  return;
}


// Reference entry 101ab440; body size 3 bytes.
#line 1 "ENTRY_101ab440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab440(void)

{
  return;
}


// Reference entry 101ab450; body size 3 bytes.
#line 1 "ENTRY_101ab450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab450(void)

{
  return;
}


// Reference entry 101ab460; body size 18 bytes.
#line 1 "ENTRY_101ab460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101ab460(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 101ab480; body size 18 bytes.
#line 1 "ENTRY_101ab480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_101ab480(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 101ab7e0; body size 15 bytes.
#line 1 "ENTRY_101ab7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab7e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 101ab8a0; body size 22 bytes.
#line 1 "ENTRY_101ab8a0"

__declspec(naked) void FUN_101ab8a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xccccccc
  __asm ja LAB_10070f3b
  __asm lea eax, [eax + eax*4]
  __asm shl eax, 2
  __asm ret
}




// Reference entry 101ab8c0; body size 5 bytes.
#line 1 "ENTRY_101ab8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab8c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ab8d0; body size 7 bytes.
#line 1 "ENTRY_101ab8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab8d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101ab8e0; body size 7 bytes.
#line 1 "ENTRY_101ab8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab8e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101ab8f0; body size 5 bytes.
#line 1 "ENTRY_101ab8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab8f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ab900; body size 3 bytes.
#line 1 "ENTRY_101ab900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab900(void)

{
  return;
}


// Reference entry 101ab910; body size 3 bytes.
#line 1 "ENTRY_101ab910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab910(void)

{
  return;
}


// Reference entry 101ab920; body size 5 bytes.
#line 1 "ENTRY_101ab920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ab930; body size 36 bytes.
#line 1 "ENTRY_101ab930"

__declspec(naked) void FUN_101ab930(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm sar edi, 2
  __asm add esp, 0xc
  __asm lea eax, [esi + edi*4]
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 101ab960; body size 5 bytes.
#line 1 "ENTRY_101ab960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ab970; body size 5 bytes.
#line 1 "ENTRY_101ab970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ab980; body size 5 bytes.
#line 1 "ENTRY_101ab980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ab990; body size 5 bytes.
#line 1 "ENTRY_101ab990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ab9a0; body size 5 bytes.
#line 1 "ENTRY_101ab9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab9a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ab9b0; body size 5 bytes.
#line 1 "ENTRY_101ab9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab9b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ab9c0; body size 5 bytes.
#line 1 "ENTRY_101ab9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ab9d0; body size 5 bytes.
#line 1 "ENTRY_101ab9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab9d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101aba10; body size 13 bytes.
#line 1 "ENTRY_101aba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101aba10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 101abaa0; body size 3 bytes.
#line 1 "ENTRY_101abaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101abaa0(void)

{
  return;
}


// Reference entry 101abd50; body size 36 bytes.
#line 1 "ENTRY_101abd50"

__declspec(naked) void FUN_101abd50(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10034022
  __asm ret 4
}




// Reference entry 101abd80; body size 15 bytes.
#line 1 "ENTRY_101abd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abd80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101abda0; body size 15 bytes.
#line 1 "ENTRY_101abda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abda0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101abdc0; body size 15 bytes.
#line 1 "ENTRY_101abdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abdc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101abe60; body size 5 bytes.
#line 1 "ENTRY_101abe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abe60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101abe70; body size 5 bytes.
#line 1 "ENTRY_101abe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abe70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101abe80; body size 5 bytes.
#line 1 "ENTRY_101abe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abe80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101abe90; body size 5 bytes.
#line 1 "ENTRY_101abe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abe90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101abea0; body size 5 bytes.
#line 1 "ENTRY_101abea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101abeb0; body size 5 bytes.
#line 1 "ENTRY_101abeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abeb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101abec0; body size 5 bytes.
#line 1 "ENTRY_101abec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101abed0; body size 5 bytes.
#line 1 "ENTRY_101abed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101abee0; body size 5 bytes.
#line 1 "ENTRY_101abee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101abef0; body size 6 bytes.
#line 1 "ENTRY_101abef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abef0(void)

{
  return (char *)("SCIAbilityDelegate");
}


// Reference entry 101abf00; body size 6 bytes.
#line 1 "ENTRY_101abf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf00(void)

{
  return (char *)("SCIAbilityListener");
}


// Reference entry 101abf10; body size 6 bytes.
#line 1 "ENTRY_101abf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf10(void)

{
  return (char *)("SCIActionDelegate");
}


// Reference entry 101abf20; body size 6 bytes.
#line 1 "ENTRY_101abf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf20(void)

{
  return (char *)("SCIDebug");
}


// Reference entry 101abf30; body size 6 bytes.
#line 1 "ENTRY_101abf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf30(void)

{
  return (char *)("SCIEnumerable");
}


// Reference entry 101abf40; body size 6 bytes.
#line 1 "ENTRY_101abf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf40(void)

{
  return (char *)("SCIEventSink");
}


// Reference entry 101abf50; body size 6 bytes.
#line 1 "ENTRY_101abf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf50(void)

{
  return (char *)("SCILibrary");
}


// Reference entry 101abf60; body size 6 bytes.
#line 1 "ENTRY_101abf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf60(void)

{
  return (char *)("SCILibraryTests");
}


// Reference entry 101abf70; body size 6 bytes.
#line 1 "ENTRY_101abf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf70(void)

{
  return (char *)("SCINetworkManagement");
}


// Reference entry 101abf80; body size 6 bytes.
#line 1 "ENTRY_101abf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf80(void)

{
  return (char *)("SCIOpFactory");
}


// Reference entry 101ac200; body size 30 bytes.
#line 1 "ENTRY_101ac200"

__declspec(naked) void FUN_101ac200(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 8]
  __asm cmp eax, edx
  __asm _emit 0x74 __asm _emit 0x11
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [eax], ecx
  __asm add eax, 4
  __asm cmp eax, edx
  __asm _emit 0x75 __asm _emit 0xf5
  __asm pop esi
  __asm ret
}




// Reference entry 101ac320; body size 27 bytes.
#line 1 "ENTRY_101ac320"

__declspec(naked) void FUN_101ac320(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_118811a4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 101ac350; body size 21 bytes.
#line 1 "ENTRY_101ac350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac350(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (undefined4 *)(param_1);
}


// Reference entry 101ac370; body size 27 bytes.
#line 1 "ENTRY_101ac370"

__declspec(naked) void FUN_101ac370(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11881498
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 101ac3f0; body size 32 bytes.
#line 1 "ENTRY_101ac3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac3f0(undefined4 *param_2)
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


// Reference entry 101ac460; body size 32 bytes.
#line 1 "ENTRY_101ac460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac460(undefined4 *param_2)
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


// Reference entry 101ac490; body size 32 bytes.
#line 1 "ENTRY_101ac490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac490(undefined4 *param_2)
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


// Reference entry 101ac4c0; body size 32 bytes.
#line 1 "ENTRY_101ac4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac4c0(undefined4 *param_2)
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


// Reference entry 101ac4f0; body size 32 bytes.
#line 1 "ENTRY_101ac4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac4f0(undefined4 *param_2)
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


// Reference entry 101ac520; body size 32 bytes.
#line 1 "ENTRY_101ac520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac520(undefined4 *param_2)
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


// Reference entry 101ac550; body size 16 bytes.
#line 1 "ENTRY_101ac550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ac550(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101ac570; body size 16 bytes.
#line 1 "ENTRY_101ac570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ac570(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101ac590; body size 32 bytes.
#line 1 "ENTRY_101ac590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac590(undefined4 *param_2)
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


// Reference entry 101ac5c0; body size 32 bytes.
#line 1 "ENTRY_101ac5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac5c0(undefined4 *param_2)
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


// Reference entry 101ac5f0; body size 32 bytes.
#line 1 "ENTRY_101ac5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac5f0(undefined4 *param_2)
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


// Reference entry 101ac620; body size 32 bytes.
#line 1 "ENTRY_101ac620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac620(undefined4 *param_2)
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


// Reference entry 101ac650; body size 32 bytes.
#line 1 "ENTRY_101ac650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac650(undefined4 *param_2)
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


// Reference entry 101ac680; body size 32 bytes.
#line 1 "ENTRY_101ac680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac680(undefined4 *param_2)
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


// Reference entry 101ac6b0; body size 32 bytes.
#line 1 "ENTRY_101ac6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac6b0(undefined4 *param_2)
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


// Reference entry 101ac6e0; body size 32 bytes.
#line 1 "ENTRY_101ac6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac6e0(undefined4 *param_2)
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


// Reference entry 101ac710; body size 32 bytes.
#line 1 "ENTRY_101ac710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac710(undefined4 *param_2)
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


// Reference entry 101ac740; body size 32 bytes.
#line 1 "ENTRY_101ac740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac740(undefined4 *param_2)
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


// Reference entry 101ac770; body size 32 bytes.
#line 1 "ENTRY_101ac770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac770(undefined4 *param_2)
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


// Reference entry 101ac7a0; body size 32 bytes.
#line 1 "ENTRY_101ac7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac7a0(undefined4 *param_2)
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


// Reference entry 101ac7d0; body size 32 bytes.
#line 1 "ENTRY_101ac7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac7d0(undefined4 *param_2)
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


// Reference entry 101ac800; body size 32 bytes.
#line 1 "ENTRY_101ac800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac800(undefined4 *param_2)
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


// Reference entry 101ac830; body size 32 bytes.
#line 1 "ENTRY_101ac830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac830(undefined4 *param_2)
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


// Reference entry 101ac860; body size 32 bytes.
#line 1 "ENTRY_101ac860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac860(undefined4 *param_2)
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


// Reference entry 101ac890; body size 32 bytes.
#line 1 "ENTRY_101ac890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac890(undefined4 *param_2)
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


// Reference entry 101ac8c0; body size 32 bytes.
#line 1 "ENTRY_101ac8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac8c0(undefined4 *param_2)
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


// Reference entry 101ac8f0; body size 32 bytes.
#line 1 "ENTRY_101ac8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac8f0(undefined4 *param_2)
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


// Reference entry 101ac920; body size 32 bytes.
#line 1 "ENTRY_101ac920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac920(undefined4 *param_2)
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


// Reference entry 101ac950; body size 32 bytes.
#line 1 "ENTRY_101ac950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac950(undefined4 *param_2)
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


// Reference entry 101ac980; body size 9 bytes.
#line 1 "ENTRY_101ac980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ac980(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101ac9b0; body size 18 bytes.
#line 1 "ENTRY_101ac9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac9b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101ac9d0; body size 11 bytes.
#line 1 "ENTRY_101ac9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac9d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101ac9e0; body size 11 bytes.
#line 1 "ENTRY_101ac9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac9e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101ac9f0; body size 18 bytes.
#line 1 "ENTRY_101ac9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ac9f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101aca10; body size 11 bytes.
#line 1 "ENTRY_101aca10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101aca10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101aca20; body size 11 bytes.
#line 1 "ENTRY_101aca20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101aca20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101aca30; body size 16 bytes.
#line 1 "ENTRY_101aca30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aca30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101aca50; body size 11 bytes.
#line 1 "ENTRY_101aca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101aca50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101aca60; body size 14 bytes.
#line 1 "ENTRY_101aca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101aca60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101aca80; body size 23 bytes.
#line 1 "ENTRY_101aca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aca80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101acaa0; body size 23 bytes.
#line 1 "ENTRY_101acaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101acaa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101acac0; body size 3 bytes.
#line 1 "ENTRY_101acac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101acac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101acc70; body size 23 bytes.
#line 1 "ENTRY_101acc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101acc70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101acc90; body size 11 bytes.
#line 1 "ENTRY_101acc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101acc90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_AnacapaLauncherCB);
  return (undefined4 *)(param_1);
}


// Reference entry 101acca0; body size 25 bytes.
#line 1 "ENTRY_101acca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101acca0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(0xb);
  return (undefined4 *)(param_1);
}


// Reference entry 101accc0; body size 25 bytes.
#line 1 "ENTRY_101accc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101accc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  param_1[1] = (undefined4)(10);
  return (undefined4 *)(param_1);
}


// Reference entry 101acce0; body size 9 bytes.
#line 1 "ENTRY_101acce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101acce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  return (undefined4 *)(param_1);
}


// Reference entry 101accf0; body size 200 bytes.
#line 1 "ENTRY_101accf0"

__declspec(naked) void FUN_101accf0(void)

{
  __asm push ecx
  __asm mov edx, ecx
  __asm mov dword ptr [esp], edx
  __asm mov dword ptr [edx], LAB_118811a4
  __asm lea ecx, [edx + 0x38]
  __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm xor eax, eax
  __asm mov dword ptr [edx + 8], LAB_11881144
  __asm mov dword ptr [edx + 0xc], LAB_11881130
  __asm mov dword ptr [edx], LAB_118811c8
  __asm mov dword ptr [edx + 8], LAB_118811ec
  __asm mov dword ptr [edx + 0xc], LAB_11881210
  __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x70 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x74 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42
  __asm _emit 0x78 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x7c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x82 __asm _emit 0x80 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x14
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42
  __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ecx + 4]
  __asm mov byte ptr [edx + eax + 0x64], 0
  __asm inc eax
  __asm cmp eax, 0xb
  __asm _emit 0x7c __asm _emit 0xec
  __asm mov eax, edx
  __asm pop ecx
  __asm ret
}




// Reference entry 101acdf0; body size 46 bytes.
#line 1 "ENTRY_101acdf0"

__declspec(naked) void FUN_101acdf0(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_1188155c
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, dword ptr [edx + 8]
  __asm mov dword ptr [esi + 8], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 101ad040; body size 42 bytes.
#line 1 "ENTRY_101ad040"

__declspec(naked) void FUN_101ad040(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_118814c0
  __asm pop ecx
  __asm ret 4
}




// Reference entry 101ad080; body size 9 bytes.
#line 1 "ENTRY_101ad080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAbilityListener);
  return (undefined4 *)(param_1);
}


// Reference entry 101ad090; body size 11 bytes.
#line 1 "ENTRY_101ad090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad090(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 101ad0a0; body size 11 bytes.
#line 1 "ENTRY_101ad0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad0a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDebug);
  return (undefined4 *)(param_1);
}


// Reference entry 101ad0b0; body size 11 bytes.
#line 1 "ENTRY_101ad0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad0b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIEnumerable);
  return (undefined4 *)(param_1);
}


// Reference entry 101ad0c0; body size 11 bytes.
#line 1 "ENTRY_101ad0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad0c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILibrary);
  return (undefined4 *)(param_1);
}


// Reference entry 101ad0d0; body size 9 bytes.
#line 1 "ENTRY_101ad0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILibrary);
  return (undefined4 *)(param_1);
}


// Reference entry 101ad0e0; body size 11 bytes.
#line 1 "ENTRY_101ad0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad0e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return (undefined4 *)(param_1);
}


// Reference entry 101ad990; body size 9 bytes.
#line 1 "ENTRY_101ad990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  return (undefined4 *)(param_1);
}


// Reference entry 101ad9a0; body size 46 bytes.
#line 1 "ENTRY_101ad9a0"

__declspec(naked) void FUN_101ad9a0(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_11881578
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, dword ptr [edx + 8]
  __asm mov dword ptr [esi + 8], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 101ad9e0; body size 11 bytes.
#line 1 "ENTRY_101ad9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ad9e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101ada00; body size 19 bytes.
#line 1 "ENTRY_101ada00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101ada00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101aebe0; body size 3 bytes.
#line 1 "ENTRY_101aebe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101aebe0(void)

{
  return;
}


// Reference entry 101aeca0; body size 5 bytes.
#line 1 "ENTRY_101aeca0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101aeca0(int param_1)

{ __asm jmp FUN_10045827 }


// Reference entry 101aefc0; body size 19 bytes.
#line 1 "ENTRY_101aefc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101aefc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101aefe0; body size 7 bytes.
#line 1 "ENTRY_101aefe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101aefe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101af010; body size 7 bytes.
#line 1 "ENTRY_101af010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101af010(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101af1b0; body size 15 bytes.
#line 1 "ENTRY_101af1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_101af1b0(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (int)(param_1);
}


// Reference entry 101af1f0; body size 65 bytes.
#line 1 "ENTRY_101af1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af1f0(int *param_2)
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


// Reference entry 101af2c0; body size 65 bytes.
#line 1 "ENTRY_101af2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af2c0(int *param_2)
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


// Reference entry 101af320; body size 65 bytes.
#line 1 "ENTRY_101af320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af320(int *param_2)
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


// Reference entry 101af380; body size 65 bytes.
#line 1 "ENTRY_101af380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af380(int *param_2)
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


// Reference entry 101af3e0; body size 65 bytes.
#line 1 "ENTRY_101af3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af3e0(int *param_2)
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


// Reference entry 101af440; body size 65 bytes.
#line 1 "ENTRY_101af440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af440(int *param_2)
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


// Reference entry 101af580; body size 65 bytes.
#line 1 "ENTRY_101af580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af580(int *param_2)
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


// Reference entry 101af650; body size 65 bytes.
#line 1 "ENTRY_101af650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af650(int *param_2)
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


// Reference entry 101af6b0; body size 65 bytes.
#line 1 "ENTRY_101af6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af6b0(int *param_2)
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


// Reference entry 101af710; body size 65 bytes.
#line 1 "ENTRY_101af710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af710(int *param_2)
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


// Reference entry 101af770; body size 65 bytes.
#line 1 "ENTRY_101af770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af770(int *param_2)
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


// Reference entry 101af7d0; body size 65 bytes.
#line 1 "ENTRY_101af7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af7d0(int *param_2)
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


// Reference entry 101af830; body size 65 bytes.
#line 1 "ENTRY_101af830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af830(int *param_2)
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


// Reference entry 101af890; body size 65 bytes.
#line 1 "ENTRY_101af890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af890(int *param_2)
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


// Reference entry 101af8f0; body size 65 bytes.
#line 1 "ENTRY_101af8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af8f0(int *param_2)
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


// Reference entry 101af950; body size 65 bytes.
#line 1 "ENTRY_101af950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101af950(int *param_2)
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


// Reference entry 101afa20; body size 65 bytes.
#line 1 "ENTRY_101afa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101afa20(int *param_2)
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


// Reference entry 101afa80; body size 65 bytes.
#line 1 "ENTRY_101afa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101afa80(int *param_2)
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


// Reference entry 101afae0; body size 65 bytes.
#line 1 "ENTRY_101afae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101afae0(int *param_2)
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


// Reference entry 101afb40; body size 65 bytes.
#line 1 "ENTRY_101afb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_101afb40(int *param_2)
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


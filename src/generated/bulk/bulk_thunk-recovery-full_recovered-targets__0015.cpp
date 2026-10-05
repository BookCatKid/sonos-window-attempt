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
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct HTControl { char _pad; HTControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct IdentifyIRRemote { char _pad; IdentifyIRRemote(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LearnIRCode { char _pad; LearnIRCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePost { char _pad; SCIOpDevicePost(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpHTControlCommitLearnedIRCodes { char _pad; SCIOpHTControlCommitLearnedIRCodes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpHTControlIdentifyIRRemote { char _pad; SCIOpHTControlIdentifyIRRemote(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpHTControlIsRemoteConfigured { char _pad; SCIOpHTControlIsRemoteConfigured(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpHTControlLearnIRCode { char _pad; SCIOpHTControlLearnIRCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
extern "C" void LAB_1000897c(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000fa51(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10015654(void);
extern "C" void LAB_100248ac(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_10028f83(void);
extern "C" void LAB_10032cd1(void);
extern "C" void LAB_10034db0(void);
extern "C" void LAB_1003666a(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10036f5c(void);
extern "C" void LAB_100371cd(void);
extern "C" void LAB_10039a13(void);
extern "C" void LAB_1003c4f2(void);
extern "C" void LAB_1004329d(void);
extern "C" void LAB_10046515(void);
extern "C" void LAB_1004ac8c(void);
extern "C" void LAB_1004bdcb(void);
extern "C" void LAB_1004d644(void);
extern "C" void LAB_10058a5d(void);
extern "C" void LAB_10059741(void);
extern "C" void LAB_1005fd26(void);
extern "C" void LAB_1006948e(void);
extern "C" void LAB_1006e574(void);
extern "C" void LAB_1006e600(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007d83a(void);
extern "C" void LAB_1008054e(void);
extern "C" void LAB_1008472f(void);
extern "C" void LAB_10094102(void);
extern "C" void LAB_10a4c908(void);
extern "C" void LAB_10a4c926(void);
extern "C" void LAB_10a4d748(void);
extern "C" void LAB_10a4d766(void);
extern "C" void LAB_10a521d5(void);
extern "C" void LAB_10a521e6(void);
extern "C" void LAB_10a521f5(void);
extern "C" void LAB_10a53cda(void);
extern "C" void LAB_10a53ddd(void);
extern "C" void LAB_10a53dfb(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11883984(void);
extern "C" void LAB_118ba554(void);
extern "C" void LAB_118efc4c(void);
extern "C" void LAB_118efca8(void);
extern "C" void LAB_118efcf4(void);
extern "C" void LAB_118efd44(void);
extern "C" void LAB_118efd94(void);
extern "C" void LAB_118f0040(void);
extern "C" void LAB_118f009c(void);
extern "C" void LAB_118f00a8(void);
extern "C" void LAB_118f00b4(void);
extern "C" void LAB_118f0130(void);
extern "C" void LAB_118f018c(void);
extern "C" void LAB_118f0198(void);
extern "C" void LAB_118f01a4(void);
extern "C" void LAB_118f020c(void);
extern "C" void LAB_118f0268(void);
extern "C" void LAB_118f0274(void);
extern "C" void LAB_118f0280(void);
extern "C" void LAB_118f02e8(void);
extern "C" void LAB_118f0344(void);
extern "C" void LAB_118f0350(void);
extern "C" void LAB_118f035c(void);
extern "C" void LAB_118f0428(void);
extern "C" void LAB_118f0478(void);
extern "C" void LAB_118f04c8(void);
extern "C" void LAB_118f051c(void);
extern "C" void LAB_118f0574(void);
extern "C" void LAB_118f05cc(void);
extern "C" void LAB_118f0610(void);
extern "C" void LAB_118f0660(void);
extern "C" void LAB_118f0b0c(void);
extern "C" void LAB_118f0b68(void);
extern "C" void LAB_118f0b74(void);
extern "C" void LAB_118f0b80(void);
extern "C" void LAB_118f0ba4(void);
extern "C" void LAB_118f0c00(void);
extern "C" void LAB_118f0c0c(void);
extern "C" void LAB_118f0c18(void);
extern "C" void LAB_118f0c54(void);
extern "C" void LAB_118f0cb0(void);
extern "C" void LAB_118f0cbc(void);
extern "C" void LAB_118f0cc8(void);
extern "C" void LAB_118f0cfc(void);
extern "C" void LAB_118f0d58(void);
extern "C" void LAB_118f0d64(void);
extern "C" void LAB_118f0d70(void);
extern "C" void LAB_118f0d94(void);
extern "C" void LAB_118f0df0(void);
extern "C" void LAB_118f0dfc(void);
extern "C" void LAB_118f0e08(void);
extern "C" void LAB_118f0e8c(void);
extern "C" void LAB_118f0ee8(void);
extern "C" void LAB_118f0ef4(void);
extern "C" void LAB_118f0f00(void);
extern "C" void LAB_118f1054(void);
extern "C" void LAB_118f1094(void);
extern "C" void LAB_118f10dc(void);
extern "C" void LAB_118f112c(void);
extern "C" void LAB_118f1194(void);
extern "C" void LAB_118f11f0(void);
extern "C" void LAB_118f11fc(void);
extern "C" void LAB_118f1208(void);
extern "C" void LAB_118f122c(void);
extern "C" void LAB_118f1288(void);
extern "C" void LAB_118f1294(void);
extern "C" void LAB_118f12a0(void);
extern "C" void LAB_118f12d4(void);
extern "C" void LAB_118f1330(void);
extern "C" void LAB_118f133c(void);
extern "C" void LAB_118f1348(void);
extern "C" void LAB_118f1408(void);
extern "C" void LAB_118f1464(void);
extern "C" void LAB_118f1470(void);
extern "C" void LAB_118f147c(void);
extern "C" void LAB_118f1694(void);
extern "C" void LAB_118f16dc(void);
extern "C" void LAB_118f1718(void);
extern "C" void LAB_118f1724(void);
extern "C" void LAB_118f1748(void);
extern "C" void LAB_118f1790(void);
extern "C" void LAB_118f17cc(void);
extern "C" void LAB_118f17d8(void);
extern "C" void LAB_118f19cc(void);
extern "C" void LAB_118f1a70(void);
extern "C" void LAB_118f1ab8(void);
extern "C" void LAB_118f1b28(void);
extern "C" void LAB_118f1bcc(void);
extern "C" void LAB_118f1c14(void);
extern "C" void LAB_118f1c90(void);
extern "C" void LAB_118f1d34(void);
extern "C" void LAB_118f1d7c(void);
extern "C" void LAB_118f1df8(void);
extern "C" void LAB_118f1e3c(void);
extern "C" void LAB_118f1ea4(void);
extern "C" void LAB_118f1ef0(void);
extern "C" void LAB_118f1f00(void);
extern "C" void LAB_118f1f48(void);
extern "C" void LAB_118f1f9c(void);
extern "C" void LAB_118f1fec(void);
extern "C" void LAB_118f203c(void);
extern "C" void LAB_118f2098(void);
extern "C" void LAB_118f20f0(void);
extern "C" void LAB_118f2144(void);
extern "C" void LAB_118f219c(void);
extern "C" void LAB_118f21f8(void);
extern "C" void LAB_118f2248(void);
extern "C" void LAB_118f22b4(void);
extern "C" void LAB_118f2310(void);
extern "C" void LAB_118f231c(void);
extern "C" void LAB_118f2328(void);
extern "C" void LAB_118f234c(void);
extern "C" void LAB_118f23a8(void);
extern "C" void LAB_118f23b4(void);
extern "C" void LAB_118f23c0(void);
extern "C" void LAB_118f2414(void);
extern "C" void LAB_118f2470(void);
extern "C" void LAB_118f247c(void);
extern "C" void LAB_118f2488(void);
extern "C" void LAB_118f24fc(void);
extern "C" void LAB_118f2558(void);
extern "C" void LAB_118f2564(void);
extern "C" void LAB_118f2570(void);
extern "C" void LAB_118f25d4(void);
extern "C" void LAB_118f2630(void);
extern "C" void LAB_118f263c(void);
extern "C" void LAB_118f2648(void);
extern "C" void LAB_118f28c0(void);
extern "C" void LAB_118f291c(void);
extern "C" void LAB_118f2928(void);
extern "C" void LAB_118f2934(void);
extern "C" void LAB_118f2958(void);
extern "C" void LAB_118f29b4(void);
extern "C" void LAB_118f29c0(void);
extern "C" void LAB_118f29cc(void);
extern "C" void LAB_118f2a3c(void);
extern "C" void LAB_118f2a98(void);
extern "C" void LAB_118f2aa4(void);
extern "C" void LAB_118f2ab0(void);
extern "C" void LAB_118f2dbc(void);
extern "C" void LAB_118f2e18(void);
extern "C" void LAB_118f2e24(void);
extern "C" void LAB_118f2e30(void);
extern "C" void LAB_118f2e5c(void);
extern "C" void LAB_118f2eb8(void);
extern "C" void LAB_118f2ec4(void);
extern "C" void LAB_118f2ed0(void);
extern "C" void LAB_118f2ef4(void);
extern "C" void LAB_118f2f50(void);
extern "C" void LAB_118f2f5c(void);
extern "C" void LAB_118f2f68(void);
extern "C" void LAB_118f2f8c(void);
extern "C" void LAB_118f2fe0(void);
extern "C" void LAB_118f2fec(void);
extern "C" void LAB_118f2ff8(void);
extern "C" void LAB_118f3034(void);
extern "C" void LAB_118f3078(void);
extern "C" void LAB_118f30bc(void);
extern "C" void LAB_118f33ac(void);
extern "C" void LAB_118f3408(void);
extern "C" void LAB_118f3414(void);
extern "C" void LAB_118f3420(void);
extern "C" void LAB_118f3444(void);
extern "C" void LAB_118f34a0(void);
extern "C" void LAB_118f34ac(void);
extern "C" void LAB_118f34b8(void);
extern "C" void LAB_118f35c0(void);
extern "C" void LAB_118f3604(void);
extern "C" void LAB_118f3648(void);
extern "C" void LAB_118f36a4(void);
extern "C" void LAB_118f3700(void);
extern "C" void LAB_118f370c(void);
extern "C" void LAB_118f3718(void);
extern "C" void LAB_118f373c(void);
extern "C" void LAB_118f3798(void);
extern "C" void LAB_118f37a4(void);
extern "C" void LAB_118f37b0(void);
extern "C" void LAB_118f37e4(void);
extern "C" void LAB_118f3840(void);
extern "C" void LAB_118f384c(void);
extern "C" void LAB_118f3858(void);
extern "C" void LAB_118f38c8(void);
extern "C" void LAB_118f3924(void);
extern "C" void LAB_118f3930(void);
extern "C" void LAB_118f393c(void);
extern "C" void LAB_118f3a18(void);
extern "C" void LAB_118f3a64(void);
extern "C" void LAB_118f3ab8(void);
extern "C" void LAB_118f3b08(void);
extern "C" void LAB_118f3b50(void);
extern "C" void LAB_118f3bb8(void);
extern "C" void LAB_118f3c14(void);
extern "C" void LAB_118f3c20(void);
extern "C" void LAB_118f3c2c(void);
extern "C" void LAB_118f3c50(void);
extern "C" void LAB_118f3cac(void);
extern "C" void LAB_118f3cb8(void);
extern "C" void LAB_118f3cc4(void);
extern "C" void LAB_118f3ce8(void);
extern "C" void LAB_118f3d44(void);
extern "C" void LAB_118f3d50(void);
extern "C" void LAB_118f3d5c(void);
extern "C" void LAB_118f3d80(void);
extern "C" void LAB_118f3ddc(void);
extern "C" void LAB_118f3de8(void);
extern "C" void LAB_118f3df4(void);
extern "C" void LAB_118f3e30(void);
extern "C" void LAB_118f3e8c(void);
extern "C" void LAB_118f3e98(void);
extern "C" void LAB_118f3ea4(void);
extern "C" void LAB_118f3ec8(void);
extern "C" void LAB_118f3f24(void);
extern "C" void LAB_118f3f30(void);
extern "C" void LAB_118f3f3c(void);
extern "C" void LAB_118f4020(void);
extern "C" void LAB_118f4074(void);
extern "C" void LAB_118f40d0(void);
extern "C" void LAB_118f4130(void);
extern "C" void LAB_118f418c(void);
extern "C" void LAB_118f41e8(void);
extern "C" void LAB_118f4240(void);
extern "C" void LAB_118f42a4(void);
extern "C" void LAB_118f4300(void);
extern "C" void LAB_118f435c(void);
extern "C" void LAB_118f43bc(void);
extern "C" void LAB_118f441c(void);
extern "C" void LAB_118f4484(void);
extern "C" void LAB_118f4574(void);
extern "C" void LAB_118f45d0(void);
extern "C" void LAB_118f45dc(void);
extern "C" void LAB_118f45e8(void);
extern "C" void LAB_118f46d8(void);
extern "C" void LAB_118f4734(void);
extern "C" void LAB_118f4740(void);
extern "C" void LAB_118f474c(void);
extern "C" void LAB_118f4770(void);
extern "C" void LAB_118f47cc(void);
extern "C" void LAB_118f47d8(void);
extern "C" void LAB_118f47e4(void);
extern "C" void LAB_118f4808(void);
extern "C" void LAB_118f4864(void);
extern "C" void LAB_118f4870(void);
extern "C" void LAB_118f487c(void);
extern "C" void LAB_118f48a0(void);
extern "C" void LAB_118f48fc(void);
extern "C" void LAB_118f4908(void);
extern "C" void LAB_118f4914(void);
extern "C" void LAB_118f4938(void);
extern "C" void LAB_118f4994(void);
extern "C" void LAB_118f49a0(void);
extern "C" void LAB_118f49ac(void);
extern "C" void LAB_118f49d0(void);
extern "C" void LAB_118f4a2c(void);
extern "C" void LAB_118f4a38(void);
extern "C" void LAB_118f4a44(void);
extern "C" void LAB_118f4b44(void);
extern "C" void LAB_118f4ba0(void);
extern "C" void LAB_118f4bac(void);
extern "C" void LAB_118f4bb8(void);
extern "C" void LAB_118f4c30(void);
extern "C" void LAB_118f4c8c(void);
extern "C" void LAB_118f4c98(void);
extern "C" void LAB_118f4ca4(void);
extern "C" void LAB_118f4cc8(void);
extern "C" void LAB_118f4d24(void);
extern "C" void LAB_118f4d30(void);
extern "C" void LAB_118f4d3c(void);
extern "C" void LAB_118f4d60(void);
extern "C" void LAB_118f4dbc(void);
extern "C" void LAB_118f4dc8(void);
extern "C" void LAB_118f4dd4(void);
extern "C" void LAB_118f4df8(void);
extern "C" void LAB_118f4e54(void);
extern "C" void LAB_118f4e60(void);
extern "C" void LAB_118f4e6c(void);
extern "C" void LAB_118f4f38(void);
extern "C" void LAB_118f4f88(void);
extern "C" void LAB_118f4ffc(void);
extern "C" void LAB_118f5058(void);
extern "C" void LAB_118f5064(void);
extern "C" void LAB_118f5070(void);
extern "C" void LAB_118f5094(void);
extern "C" void LAB_118f50f0(void);
extern "C" void LAB_118f50fc(void);
extern "C" void LAB_118f5108(void);
extern "C" void LAB_118f512c(void);
extern "C" void LAB_118f5188(void);
extern "C" void LAB_118f5194(void);
extern "C" void LAB_118f51a0(void);
extern "C" void LAB_118f526c(void);
extern "C" void LAB_118f52b0(void);
extern "C" void LAB_118f5310(void);
extern "C" void LAB_118f536c(void);
extern "C" void LAB_118f5378(void);
extern "C" void LAB_118f5384(void);
extern "C" void LAB_118f53a8(void);
extern "C" void LAB_118f5404(void);
extern "C" void LAB_118f5410(void);
extern "C" void LAB_118f541c(void);
extern "C" void LAB_118f544c(void);
extern "C" void LAB_118f54a8(void);
extern "C" void LAB_118f54b4(void);
extern "C" void LAB_118f54c0(void);
extern "C" void LAB_118f559c(void);
extern "C" void LAB_118f55e0(void);
extern "C" void LAB_118f5658(void);
extern "C" void LAB_118f56b4(void);
extern "C" void LAB_118f56c0(void);
extern "C" void LAB_118f56cc(void);
extern "C" void LAB_118f56f0(void);
extern "C" void LAB_118f574c(void);
extern "C" void LAB_118f5758(void);
extern "C" void LAB_118f5764(void);
extern "C" void LAB_118f5788(void);
extern "C" void LAB_118f57e4(void);
extern "C" void LAB_118f57f0(void);
extern "C" void LAB_118f57fc(void);
extern "C" void LAB_118f58c8(void);
extern "C" void LAB_118f5918(void);
extern "C" void LAB_118f5970(void);
extern "C" void LAB_118f59cc(void);
extern "C" void LAB_118f5a28(void);
extern "C" void LAB_118f5a84(void);
extern "C" void LAB_118f5ae0(void);
extern "C" void LAB_118f5b3c(void);
extern "C" void LAB_118f5b98(void);
extern "C" void LAB_118f5bf8(void);
extern "C" void LAB_118f5c60(void);
extern "C" void LAB_118f5cc0(void);
extern "C" void LAB_118f5d14(void);
extern "C" void LAB_118f5e70(void);
extern "C" void LAB_118f5ecc(void);
extern "C" void LAB_118f5ed8(void);
extern "C" void LAB_118f5ee4(void);
extern "C" void LAB_118f5f08(void);
extern "C" void LAB_118f5f64(void);
extern "C" void LAB_118f5f70(void);
extern "C" void LAB_118f5f7c(void);
extern "C" void LAB_118f60d0(void);
extern "C" void LAB_118f612c(void);
extern "C" void LAB_118f6138(void);
extern "C" void LAB_118f6144(void);
extern "C" void LAB_118f6298(void);
extern "C" void LAB_118f62f4(void);
extern "C" void LAB_118f6300(void);
extern "C" void LAB_118f630c(void);
extern "C" void LAB_118f63dc(void);
extern "C" void LAB_118f6438(void);
extern "C" void LAB_118f6444(void);
extern "C" void LAB_118f6450(void);
extern "C" void LAB_118f6474(void);
extern "C" void LAB_118f64d0(void);
extern "C" void LAB_118f64dc(void);
extern "C" void LAB_118f64e8(void);
extern "C" void LAB_118f650c(void);
extern "C" void LAB_118f6744(void);
extern "C" void LAB_118f67a0(void);
extern "C" void LAB_118f67ac(void);
extern "C" void LAB_118f67b8(void);
extern "C" void LAB_118f67dc(void);
extern "C" void LAB_118f6994(void);
extern "C" void LAB_118f69f0(void);
extern "C" void LAB_118f69fc(void);
extern "C" void LAB_118f6a08(void);
extern "C" void LAB_118f6b5c(void);
extern "C" void LAB_118f6bb8(void);
extern "C" void LAB_118f6bc4(void);
extern "C" void LAB_118f6bd0(void);
extern "C" void LAB_118f6bf4(void);
extern "C" void LAB_118f6c50(void);
extern "C" void LAB_118f6c5c(void);
extern "C" void LAB_118f6c68(void);
extern "C" void LAB_118f6c8c(void);
extern "C" void LAB_118f6ce8(void);
extern "C" void LAB_118f6cf4(void);
extern "C" void LAB_118f6d00(void);
extern "C" void LAB_118f6d24(void);
extern "C" void LAB_118f6d78(void);
extern "C" void LAB_118f6d84(void);
extern "C" void LAB_118f6d90(void);
extern "C" void LAB_118f6dcc(void);
extern "C" void LAB_118f6e1c(void);
extern "C" void LAB_118f6e70(void);
extern "C" void LAB_118f6ed0(void);
extern "C" void LAB_118f6f2c(void);
extern "C" void LAB_118f6f80(void);
extern "C" void LAB_118f6fe0(void);
extern "C" void LAB_118f703c(void);
extern "C" void LAB_118f7090(void);
extern "C" void LAB_118f70f4(void);
extern "C" void LAB_118f7158(void);
extern "C" void LAB_118f71ac(void);
extern "C" void LAB_118f7224(void);
extern "C" void LAB_118f7280(void);
extern "C" void LAB_118f728c(void);
extern "C" void LAB_118f7298(void);
extern "C" void LAB_118f72bc(void);
extern "C" void LAB_118f7318(void);
extern "C" void LAB_118f7324(void);
extern "C" void LAB_118f7330(void);
extern "C" void LAB_118f73e8(void);
extern "C" void LAB_118f7444(void);
extern "C" void LAB_118f7450(void);
extern "C" void LAB_118f745c(void);
extern "C" void LAB_118f7530(void);
extern "C" void LAB_118f758c(void);
extern "C" void LAB_118f7598(void);
extern "C" void LAB_118f75a4(void);
extern "C" void LAB_118f7650(void);
extern "C" void LAB_118f76ac(void);
extern "C" void LAB_118f76b8(void);
extern "C" void LAB_118f76c4(void);
extern "C" void LAB_118f772c(void);
extern "C" void LAB_118f7788(void);
extern "C" void LAB_118f7794(void);
extern "C" void LAB_118f77a0(void);
extern "C" void LAB_118f7814(void);
extern "C" void LAB_118f7870(void);
extern "C" void LAB_118f787c(void);
extern "C" void LAB_118f7888(void);
extern "C" void LAB_118f793c(void);
extern "C" void LAB_118f7998(void);
extern "C" void LAB_118f79a4(void);
extern "C" void LAB_118f79b0(void);
extern "C" void LAB_118f7a34(void);
extern "C" void LAB_118f7a90(void);
extern "C" void LAB_118f7a9c(void);
extern "C" void LAB_118f7aa8(void);
extern "C" void LAB_118f7b08(void);
extern "C" void LAB_118f7b64(void);
extern "C" void LAB_118f7b70(void);
extern "C" void LAB_118f7b7c(void);
extern "C" void LAB_118f7c08(void);
extern "C" void LAB_118f7c64(void);
extern "C" void LAB_118f7c70(void);
extern "C" void LAB_118f7c7c(void);
extern "C" void LAB_118f7cf8(void);
extern "C" void LAB_118f7d54(void);
extern "C" void LAB_118f7d60(void);
extern "C" void LAB_118f7d6c(void);
extern "C" void LAB_118f7dc0(void);
extern "C" void LAB_118f7e1c(void);
extern "C" void LAB_118f7e28(void);
extern "C" void LAB_118f7e34(void);
extern "C" void LAB_118f7e98(void);
extern "C" void LAB_118f7eec(void);
extern "C" void LAB_118f7ef8(void);
extern "C" void LAB_118f7f04(void);
extern "C" void LAB_118f7f40(void);
extern "C" void LAB_118f7f84(void);
extern "C" void LAB_118f7fc8(void);
extern "C" void LAB_118f8024(void);
extern "C" void LAB_118f8080(void);
extern "C" void LAB_118f808c(void);
extern "C" void LAB_118f8098(void);
extern "C" void LAB_118f80bc(void);
extern "C" void LAB_118f8118(void);
extern "C" void LAB_118f8124(void);
extern "C" void LAB_118f8130(void);
extern "C" void LAB_118f8184(void);
extern "C" void LAB_118f81e0(void);
extern "C" void LAB_118f81ec(void);
extern "C" void LAB_118f81f8(void);
extern "C" void LAB_118f8238(void);
extern "C" void LAB_118f8294(void);
extern "C" void LAB_118f82a0(void);
extern "C" void LAB_118f82ac(void);
extern "C" void LAB_118f8394(void);
extern "C" void LAB_118f83e0(void);
extern "C" void LAB_118f8430(void);
extern "C" void LAB_118f84b0(void);
extern "C" void LAB_118f84cc(void);
extern "C" void LAB_118f8528(void);
extern "C" void LAB_118f8534(void);
extern "C" void LAB_118f8540(void);
extern "C" void LAB_118f8564(void);
extern "C" void LAB_118f85c0(void);
extern "C" void LAB_118f85cc(void);
extern "C" void LAB_118f85d8(void);
extern "C" void LAB_118f8630(void);
extern "C" void LAB_118f868c(void);
extern "C" void LAB_118f8698(void);
extern "C" void LAB_118f86a4(void);
extern "C" void LAB_118f86e8(void);
extern "C" void LAB_118f8744(void);
extern "C" void LAB_118f8750(void);
extern "C" void LAB_118f875c(void);
extern "C" void LAB_118f8944(void);
extern "C" void LAB_118f897c(void);
extern "C" void LAB_118f89b4(void);
extern "C" void LAB_118f89fc(void);
extern "C" void LAB_118f8a58(void);
extern "C" void LAB_118f8a64(void);
extern "C" void LAB_118f8a70(void);
extern "C" void LAB_118f8a94(void);
extern "C" void LAB_118f8af0(void);
extern "C" void LAB_118f8afc(void);
extern "C" void LAB_118f8b08(void);
extern "C" void LAB_118f8b60(void);
extern "C" void LAB_118f8bbc(void);
extern "C" void LAB_118f8bc8(void);
extern "C" void LAB_118f8bd4(void);
extern "C" void LAB_118f8c24(void);
extern "C" void LAB_118f8c80(void);
extern "C" void LAB_118f8c8c(void);
extern "C" void LAB_118f8c98(void);
extern "C" void LAB_118f8cd0(void);
extern "C" void LAB_118f8d24(void);
extern "C" void LAB_118f8d30(void);
extern "C" void LAB_118f8d3c(void);
extern "C" void LAB_118f8d78(void);
extern "C" void LAB_118f8dc0(void);
extern "C" void LAB_118f8e1c(void);
extern "C" void LAB_118f8e78(void);
extern "C" void LAB_118f8e84(void);
extern "C" void LAB_118f8e90(void);
extern "C" void LAB_118f900c(void);
extern "C" void LAB_118f9068(void);
extern "C" void LAB_118f9074(void);
extern "C" void LAB_118f9080(void);
extern "C" void LAB_118f9168(void);
extern "C" void LAB_118f91bc(void);
extern "C" void LAB_118f91c8(void);
extern "C" void LAB_118f91d4(void);
extern "C" void LAB_118f9210(void);
extern "C" void LAB_118f9250(void);
extern "C" void LAB_118f9294(void);
extern "C" void LAB_118f92f4(void);
extern "C" void LAB_118f9350(void);
extern "C" void LAB_118f935c(void);
extern "C" void LAB_118f9368(void);
extern "C" void LAB_118f938c(void);
extern "C" void LAB_118f93e8(void);
extern "C" void LAB_118f93f4(void);
extern "C" void LAB_118f9400(void);
extern "C" void LAB_118f947c(void);
extern "C" void LAB_118f94d8(void);
extern "C" void LAB_118f94e4(void);
extern "C" void LAB_118f94f0(void);
extern "C" void LAB_118f9764(void);
extern "C" void LAB_118f97c0(void);
extern "C" void LAB_118f97cc(void);
extern "C" void LAB_118f97d8(void);
extern "C" void LAB_118f9828(void);
extern "C" void LAB_118f987c(void);
extern "C" void LAB_118f9888(void);
extern "C" void LAB_118f9894(void);
extern "C" void LAB_118f98d0(void);
extern "C" void LAB_118f9920(void);
extern "C" void LAB_118f9974(void);
extern "C" void LAB_118f99c4(void);
extern "C" void LAB_118f9a54(void);
extern "C" void LAB_118f9ab0(void);
extern "C" void LAB_118f9abc(void);
extern "C" void LAB_118f9ac8(void);
extern "C" void LAB_118f9aec(void);
extern "C" void LAB_118f9b48(void);
extern "C" void LAB_118f9b54(void);
extern "C" void LAB_118f9b60(void);
extern "C" void LAB_118f9c00(void);
extern "C" void LAB_118f9c5c(void);
extern "C" void LAB_118f9c68(void);
extern "C" void LAB_118f9c74(void);
extern "C" void LAB_118f9d00(void);
extern "C" void LAB_118f9d5c(void);
extern "C" void LAB_118f9d68(void);
extern "C" void LAB_118f9d74(void);
extern "C" void LAB_118f9de8(void);
extern "C" void LAB_118f9e44(void);
extern "C" void LAB_118f9e50(void);
extern "C" void LAB_118f9e5c(void);
extern "C" void LAB_118fa010(void);
extern "C" void LAB_118fa064(void);
extern "C" void LAB_118fa070(void);
extern "C" void LAB_118fa07c(void);
extern "C" void LAB_118fa0b8(void);
extern "C" void LAB_118fa0fc(void);
extern "C" void LAB_118fa140(void);
extern "C" void LAB_118fa184(void);
extern "C" void LAB_118fa1c8(void);
extern "C" void LAB_118fa20c(void);
extern "C" void LAB_118fa24c(void);
extern "C" void LAB_118fa2a8(void);
extern "C" void LAB_118fa304(void);
extern "C" void LAB_118fa310(void);
extern "C" void LAB_118fa31c(void);
extern "C" void LAB_118fa340(void);
extern "C" void LAB_118fa39c(void);
extern "C" void LAB_118fa3a8(void);
extern "C" void LAB_118fa3b4(void);
extern "C" void LAB_118fa674(void);
extern "C" void LAB_118fa6d0(void);
extern "C" void LAB_118fa6dc(void);
extern "C" void LAB_118fa6e8(void);
extern "C" void LAB_118fa73c(void);
extern "C" void LAB_118fa798(void);
extern "C" void LAB_118fa7a4(void);
extern "C" void LAB_118fa7b0(void);
extern "C" void LAB_118fa824(void);
extern "C" void LAB_118fa880(void);
extern "C" void LAB_118fa88c(void);
extern "C" void LAB_118fa898(void);
extern "C" void LAB_118fa8f0(void);
extern "C" void LAB_118fa94c(void);
extern "C" void LAB_118fa958(void);
extern "C" void LAB_118fa964(void);
extern "C" void LAB_118fa9b8(void);
extern "C" void LAB_118faa14(void);
extern "C" void LAB_118faa20(void);
extern "C" void LAB_118faa2c(void);
extern "C" void LAB_118faad0(void);
extern "C" void LAB_118fab24(void);
extern "C" void LAB_118fab30(void);
extern "C" void LAB_118fab3c(void);
extern "C" void LAB_118fab78(void);
extern "C" void LAB_118fabbc(void);
extern "C" void LAB_118fac0c(void);
extern "C" void LAB_118fac5c(void);
extern "C" void LAB_118faca8(void);
extern "C" void LAB_118facf0(void);
extern "C" void LAB_118fad4c(void);
extern "C" void LAB_118fada8(void);
extern "C" void LAB_118fadb4(void);
extern "C" void LAB_118fadc0(void);
extern "C" void LAB_118fade4(void);
extern "C" void LAB_118fae40(void);
extern "C" void LAB_118fae4c(void);
extern "C" void LAB_118fae58(void);
extern "C" void LAB_118faefc(void);
extern "C" void LAB_118faf58(void);
extern "C" void LAB_118faf64(void);
extern "C" void LAB_118faf70(void);
extern "C" void LAB_118fafdc(void);
extern "C" void LAB_118fb038(void);
extern "C" void LAB_118fb044(void);
extern "C" void LAB_118fb050(void);
extern "C" void LAB_118fb0bc(void);
extern "C" void LAB_118fb118(void);
extern "C" void LAB_118fb124(void);
extern "C" void LAB_118fb130(void);
extern "C" void LAB_118fb170(void);
extern "C" void LAB_118fb1cc(void);
extern "C" void LAB_118fb1d8(void);
extern "C" void LAB_118fb1e4(void);
extern "C" void LAB_118fb244(void);
extern "C" void LAB_118fb2a0(void);
extern "C" void LAB_118fb2ac(void);
extern "C" void LAB_118fb2b8(void);
extern "C" void LAB_118fb2f4(void);
extern "C" void LAB_118fb348(void);
extern "C" void LAB_118fb354(void);
extern "C" void LAB_118fb360(void);
extern "C" void LAB_118fb39c(void);
extern "C" void LAB_118fb3e4(void);
extern "C" void LAB_118fb428(void);
extern "C" void LAB_118fb46c(void);
extern "C" void LAB_118fb4b0(void);
extern "C" void LAB_118fb4f4(void);
extern "C" void LAB_118fb53c(void);
extern "C" void LAB_118fb588(void);
extern "C" void LAB_118fb5d4(void);
extern "C" void LAB_118fb620(void);
extern "C" void LAB_118fb668(void);
extern "C" void LAB_118fb6b4(void);
extern "C" void LAB_118fb700(void);
extern "C" void LAB_118fb74c(void);
extern "C" void LAB_118fb798(void);
extern "C" void LAB_118fb7ec(void);
extern "C" void LAB_118fb854(void);
extern "C" void LAB_118fb8b0(void);
extern "C" void LAB_118fb8bc(void);
extern "C" void LAB_118fb8c8(void);
extern "C" void LAB_118fb8ec(void);
extern "C" void LAB_118fb948(void);
extern "C" void LAB_118fb954(void);
extern "C" void LAB_118fb960(void);
extern "C" void LAB_118fba58(void);
extern "C" void LAB_118fbab4(void);
extern "C" void LAB_118fbac0(void);
extern "C" void LAB_118fbacc(void);
extern "C" void LAB_118fbb3c(void);
extern "C" void LAB_118fbb98(void);
extern "C" void LAB_118fbba4(void);
extern "C" void LAB_118fbbb0(void);
extern "C" void LAB_118fbc18(void);
extern "C" void LAB_118fbc74(void);
extern "C" void LAB_118fbc80(void);
extern "C" void LAB_118fbc8c(void);
extern "C" void LAB_118fbd00(void);
extern "C" void LAB_118fbd5c(void);
extern "C" void LAB_118fbd68(void);
extern "C" void LAB_118fbd74(void);
extern "C" void LAB_118fbdc8(void);
extern "C" void LAB_118fbe24(void);
extern "C" void LAB_118fbe30(void);
extern "C" void LAB_118fbe3c(void);
extern "C" void LAB_118fbe78(void);
extern "C" void LAB_118fbed4(void);
extern "C" void LAB_118fbee0(void);
extern "C" void LAB_118fbeec(void);
extern "C" void LAB_118fbf2c(void);
extern "C" void LAB_118fbf88(void);
extern "C" void LAB_118fbf94(void);
extern "C" void LAB_118fbfa0(void);
extern "C" void LAB_118fbfe0(void);
extern "C" void LAB_118fc03c(void);
extern "C" void LAB_118fc048(void);
extern "C" void LAB_118fc054(void);
extern "C" void LAB_118fc098(void);
extern "C" void LAB_118fc0f4(void);
extern "C" void LAB_118fc100(void);
extern "C" void LAB_118fc10c(void);
extern "C" void LAB_118fc148(void);
extern "C" void LAB_118fc1a4(void);
extern "C" void LAB_118fc1b0(void);
extern "C" void LAB_118fc1bc(void);
extern "C" void LAB_118fc1fc(void);
extern "C" void LAB_118fc258(void);
extern "C" void LAB_118fc264(void);
extern "C" void LAB_118fc270(void);
extern "C" void LAB_118fc2b0(void);
extern "C" void LAB_118fc30c(void);
extern "C" void LAB_118fc318(void);
extern "C" void LAB_118fc324(void);
extern "C" void LAB_118fc368(void);
extern "C" void LAB_118fc3c4(void);
extern "C" void LAB_118fc3d0(void);
extern "C" void LAB_118fc3dc(void);
extern "C" void LAB_118fc470(void);
extern "C" void LAB_118fc4cc(void);
extern "C" void LAB_118fc4d8(void);
extern "C" void LAB_118fc4e4(void);
extern "C" void LAB_118fc624(void);
extern "C" void LAB_118fc680(void);
extern "C" void LAB_118fc68c(void);
extern "C" void LAB_118fc698(void);
extern "C" void LAB_118fc8c8(void);
extern "C" void LAB_118fc91c(void);
extern "C" void LAB_118fc928(void);
extern "C" void LAB_118fc934(void);
extern "C" void LAB_118fc970(void);
extern "C" void LAB_118fc9d8(void);
extern "C" void LAB_118fca34(void);
extern "C" void LAB_118fca40(void);
extern "C" void LAB_118fca4c(void);
extern "C" void LAB_118fca70(void);
extern "C" void LAB_118fcacc(void);
extern "C" void LAB_118fcad8(void);
extern "C" void LAB_118fcae4(void);
extern "C" void LAB_118fcc00(void);
extern "C" void LAB_118fcc3c(void);
extern "C" void LAB_118fcd88(void);
extern "C" void LAB_118fcde4(void);
extern "C" void LAB_118fcdf0(void);
extern "C" void LAB_118fcdfc(void);
extern "C" void LAB_118fce20(void);
extern "C" void LAB_118fce7c(void);
extern "C" void LAB_118fce88(void);
extern "C" void LAB_118fce94(void);
extern "C" void LAB_118fcec0(void);
extern "C" void LAB_118fcf1c(void);
extern "C" void LAB_118fcf28(void);
extern "C" void LAB_118fcf34(void);
extern "C" void LAB_118fcf80(void);
extern "C" void LAB_118fcfd4(void);
extern "C" void LAB_118fcfe0(void);
extern "C" void LAB_118fcfec(void);
extern "C" void LAB_118fdc1c(void);
extern "C" void LAB_118fdc78(void);
extern "C" void LAB_118fdc84(void);
extern "C" void LAB_118fdc90(void);
extern "C" void LAB_118fdcb4(void);
extern "C" void LAB_118fdd10(void);
extern "C" void LAB_118fdd1c(void);
extern "C" void LAB_118fdd28(void);
extern "C" void LAB_118fdfac(void);
extern "C" void LAB_118fe008(void);
extern "C" void LAB_118fe014(void);
extern "C" void LAB_118fe020(void);
extern "C" void LAB_118fe184(void);
extern "C" void LAB_118fe1e0(void);
extern "C" void LAB_118fe1ec(void);
extern "C" void LAB_118fe1f8(void);
extern "C" void LAB_118fe39c(void);
extern "C" void LAB_118fe3f8(void);
extern "C" void LAB_118fe404(void);
extern "C" void LAB_118fe410(void);
extern "C" void LAB_118fe4e0(void);
extern "C" void LAB_118fe53c(void);
extern "C" void LAB_118fe548(void);
extern "C" void LAB_118fe554(void);
extern "C" void LAB_118fe5ac(void);
extern "C" void LAB_118fe608(void);
extern "C" void LAB_118fe614(void);
extern "C" void LAB_118fe620(void);
extern "C" void LAB_118fe71c(void);
extern "C" void LAB_118fe778(void);
extern "C" void LAB_118fe784(void);
extern "C" void LAB_118fe790(void);
extern "C" void LAB_118fe7e4(void);
extern "C" void LAB_118fe840(void);
extern "C" void LAB_118fe84c(void);
extern "C" void LAB_118fe858(void);
extern "C" void LAB_118fe8e8(void);
extern "C" void LAB_118fe944(void);
extern "C" void LAB_118fe950(void);
extern "C" void LAB_118fe95c(void);
extern "C" void LAB_118fe9c8(void);
extern "C" void LAB_118fea24(void);
extern "C" void LAB_118fea30(void);
extern "C" void LAB_118fea3c(void);
extern "C" void LAB_118fedfc(void);
extern "C" void LAB_118fee58(void);
extern "C" void LAB_118fee64(void);
extern "C" void LAB_118fee70(void);
extern "C" void LAB_118fefd0(void);
extern "C" void LAB_118ff02c(void);
extern "C" void LAB_118ff038(void);
extern "C" void LAB_118ff044(void);
extern "C" void LAB_118ff188(void);
extern "C" void LAB_118ff1e4(void);
extern "C" void LAB_118ff1f0(void);
extern "C" void LAB_118ff1fc(void);
extern "C" void LAB_118ff26c(void);
extern "C" void LAB_118ff2c8(void);
extern "C" void LAB_118ff2d4(void);
extern "C" void LAB_118ff2e0(void);
extern "C" void LAB_118ff364(void);
extern "C" void LAB_118ff3c0(void);
extern "C" void LAB_118ff3cc(void);
extern "C" void LAB_118ff3d8(void);
extern "C" void LAB_118ff42c(void);
extern "C" void LAB_118ff488(void);
extern "C" void LAB_118ff494(void);
extern "C" void LAB_118ff4a0(void);
extern "C" void LAB_118ff5d8(void);
extern "C" void LAB_118ff634(void);
extern "C" void LAB_118ff640(void);
extern "C" void LAB_118ff64c(void);
extern "C" void LAB_118ff6cc(void);
extern "C" void LAB_118ff728(void);
extern "C" void LAB_118ff734(void);
extern "C" void LAB_118ff740(void);
extern "C" void LAB_118ff7c4(void);
extern "C" void LAB_118ff820(void);
extern "C" void LAB_118ff82c(void);
extern "C" void LAB_118ff838(void);
extern "C" void LAB_118ff85c(void);
extern "C" void LAB_118ff8b8(void);
extern "C" void LAB_118ff8c4(void);
extern "C" void LAB_118ff8d0(void);
extern "C" void LAB_118ff9a8(void);
extern "C" void LAB_118ffa04(void);
extern "C" void LAB_118ffa10(void);
extern "C" void LAB_118ffa1c(void);
extern "C" void LAB_118ffa78(void);
extern "C" void LAB_118ffad4(void);
extern "C" void LAB_118ffae0(void);
extern "C" void LAB_118ffaec(void);
extern "C" void LAB_118ffb10(void);
extern "C" void LAB_118ffb6c(void);
extern "C" void LAB_118ffb78(void);
extern "C" void LAB_118ffb84(void);
extern "C" void LAB_118ffba8(void);
extern "C" void LAB_118ffc04(void);
extern "C" void LAB_118ffc10(void);
extern "C" void LAB_118ffc1c(void);
extern "C" void LAB_118ffd70(void);
extern "C" void LAB_118ffdcc(void);
extern "C" void LAB_118ffdd8(void);
extern "C" void LAB_118ffde4(void);
extern "C" void LAB_118fffb8(void);
extern "C" void LAB_11900014(void);
extern "C" void LAB_11900020(void);
extern "C" void LAB_1190002c(void);
extern "C" void LAB_11900108(void);
extern "C" void LAB_11900164(void);
extern "C" void LAB_11900170(void);
extern "C" void LAB_1190017c(void);
extern "C" void LAB_11900268(void);
extern "C" void LAB_119002c4(void);
extern "C" void LAB_119002d0(void);
extern "C" void LAB_119002dc(void);
extern "C" void LAB_11900328(void);
extern "C" void LAB_11900384(void);
extern "C" void LAB_11900390(void);
extern "C" void LAB_1190039c(void);
extern "C" void LAB_11900400(void);
extern "C" void LAB_1190045c(void);
extern "C" void LAB_11900468(void);
extern "C" void LAB_11900474(void);
extern "C" void LAB_11900520(void);
extern "C" void LAB_1190057c(void);
extern "C" void LAB_11900588(void);
extern "C" void LAB_11900594(void);
extern "C" void LAB_119005dc(void);
extern "C" void LAB_11900638(void);
extern "C" void LAB_11900644(void);
extern "C" void LAB_11900650(void);
extern "C" void LAB_119006bc(void);
extern "C" void LAB_11900718(void);
extern "C" void LAB_11900724(void);
extern "C" void LAB_11900730(void);
extern "C" void LAB_119007cc(void);
extern "C" void LAB_11900828(void);
extern "C" void LAB_11900834(void);
extern "C" void LAB_11900840(void);
extern "C" void LAB_1190093c(void);
extern "C" void LAB_11900998(void);
extern "C" void LAB_119009a4(void);
extern "C" void LAB_119009b0(void);
extern "C" void LAB_11900a38(void);
extern "C" void LAB_11900a94(void);
extern "C" void LAB_11900aa0(void);
extern "C" void LAB_11900aac(void);
extern "C" void LAB_11900b8c(void);
extern "C" void LAB_11900be8(void);
extern "C" void LAB_11900bf4(void);
extern "C" void LAB_11900c00(void);
extern "C" void LAB_12119c10(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a409c(void);
extern "C" void LAB_121a40a0(void);
extern "C" void LAB_121a40a4(void);
extern "C" void LAB_121a40a8(void);
extern "C" void LAB_121a40ac(void);
extern "C" void LAB_121a40f4(void);
extern "C" void LAB_121a40f8(void);
extern "C" void LAB_121a40fc(void);
extern "C" void LAB_121a4100(void);
extern "C" void LAB_121a4104(void);
extern "C" void LAB_121a4108(void);
extern "C" void LAB_121a410c(void);
extern "C" void LAB_121a4110(void);
extern "C" void LAB_121a4164(void);
extern "C" void LAB_121a4168(void);
extern "C" void LAB_121a416c(void);
extern "C" void LAB_121a4170(void);
extern "C" void LAB_121a41c0(void);
extern "C" void LAB_121a41c4(void);
extern "C" void LAB_121a41c8(void);
extern "C" void LAB_121a41cc(void);
extern "C" void LAB_121a41d4(void);
extern "C" void LAB_121a41d8(void);
extern "C" void LAB_121a41dc(void);
extern "C" void LAB_121a41e0(void);
extern "C" void LAB_121a41e4(void);
extern "C" void LAB_121a41e8(void);
extern "C" void LAB_121a41ec(void);
extern "C" void LAB_121a423c(void);
extern "C" void LAB_121a4240(void);
extern "C" void LAB_121a4244(void);
extern "C" void LAB_121a4290(void);
extern "C" void LAB_121a4294(void);
extern "C" void LAB_121a4298(void);
extern "C" void LAB_121a42e8(void);
extern "C" void LAB_121a42ec(void);
extern "C" void LAB_121a42f0(void);
extern "C" void LAB_121a42f4(void);
extern "C" void LAB_121a42f8(void);
extern "C" void LAB_121a4348(void);
extern "C" void LAB_121a434c(void);
extern "C" void LAB_121a4350(void);
extern "C" void LAB_121a4354(void);
extern "C" void LAB_121a4358(void);
extern "C" void LAB_121a435c(void);
extern "C" void LAB_121a4360(void);
extern "C" void LAB_121a4364(void);
extern "C" void LAB_121a4368(void);
extern "C" void LAB_121a436c(void);
extern "C" void LAB_121a4370(void);
extern "C" void LAB_121a4374(void);
extern "C" void LAB_121a4378(void);
extern "C" void LAB_121a43cc(void);
extern "C" void LAB_121a43d0(void);
extern "C" void LAB_121a4414(void);
extern "C" void LAB_121a4418(void);
extern "C" void LAB_121a4468(void);
extern "C" void LAB_121a446c(void);
extern "C" void LAB_121a44b8(void);
extern "C" void LAB_121a44bc(void);
extern "C" void LAB_121a44c0(void);
extern "C" void LAB_121a44c4(void);
extern "C" void LAB_121a44c8(void);
extern "C" void LAB_121a44cc(void);
extern "C" void LAB_121a44d0(void);
extern "C" void LAB_121a44d4(void);
extern "C" void LAB_121a44d8(void);
extern "C" void LAB_121a44dc(void);
extern "C" void LAB_121a44e0(void);
extern "C" void LAB_121a44e4(void);
extern "C" void LAB_121a44e8(void);
extern "C" void LAB_121a453c(void);
extern "C" void LAB_121a4540(void);
extern "C" void LAB_121a4544(void);
extern "C" void LAB_121a4548(void);
extern "C" void LAB_121a454c(void);
extern "C" void LAB_121a4550(void);
extern "C" void LAB_121a4554(void);
extern "C" void LAB_121a4558(void);
extern "C" void LAB_121a455c(void);
extern "C" void LAB_121a4560(void);
extern "C" void LAB_121a4564(void);
extern "C" void LAB_121a4568(void);
extern "C" void LAB_121a45b8(void);
extern "C" void LAB_121a45bc(void);
extern "C" void LAB_121a45c0(void);
extern "C" void LAB_121a45e0(void);
extern "C" void LAB_121a45e4(void);
extern "C" void LAB_121a45e8(void);
extern "C" void LAB_121a4664(void);
extern "C" void LAB_121a4668(void);
extern "C" void LAB_121a466c(void);
extern "C" void LAB_121a4688(void);
extern "C" void LAB_121a468c(void);
extern "C" void LAB_121a46d4(void);
extern "C" void LAB_121a46d8(void);
extern "C" void LAB_121a46dc(void);
extern "C" void LAB_121a46fc(void);
extern "C" void LAB_121a4700(void);
extern "C" void LAB_121a4704(void);
extern "C" void LAB_121a4708(void);
extern "C" void LAB_121a4758(void);
extern "C" void LAB_121a475c(void);
extern "C" void LAB_121a4760(void);
extern "C" void LAB_121a4764(void);
extern "C" void LAB_121a4768(void);
extern "C" void LAB_121a476c(void);
extern "C" void LAB_121a4770(void);
extern "C" void LAB_121a47c0(void);
extern "C" void LAB_121a47c4(void);
extern "C" void LAB_121a47c8(void);
extern "C" void LAB_121a47cc(void);
extern "C" void LAB_121a47d0(void);
extern "C" void LAB_121a47d4(void);
extern "C" void LAB_121a4828(void);
extern "C" void LAB_121a482c(void);
extern "C" void LAB_121a4830(void);
extern "C" void LAB_121a4834(void);
extern "C" void LAB_121a4838(void);
extern "C" void LAB_121a483c(void);
extern "C" void LAB_121a4840(void);
extern "C" void LAB_121a4844(void);
extern "C" void LAB_121a4848(void);
extern "C" void LAB_121a484c(void);
extern "C" void LAB_121a4850(void);
extern "C" void LAB_121a4854(void);
extern "C" void LAB_121a4858(void);
extern "C" void LAB_121a485c(void);
extern "C" void LAB_121a4860(void);
extern "C" void LAB_121a4864(void);
extern "C" void LAB_121a48b4(void);
extern "C" void LAB_121a48cc(void);
extern "C" void LAB_121a48d0(void);
extern "C" void LAB_122fc888(void);

extern "C" void LAB_1000897c(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000fa51(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10015654(void);
extern "C" void LAB_100248ac(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_10028f83(void);
extern "C" void LAB_10032cd1(void);
extern "C" void LAB_10034db0(void);
extern "C" void LAB_1003666a(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10036f5c(void);
extern "C" void LAB_100371cd(void);
extern "C" void LAB_10039a13(void);
extern "C" void LAB_1003c4f2(void);
extern "C" void LAB_1004329d(void);
extern "C" void LAB_10046515(void);
extern "C" void LAB_1004ac8c(void);
extern "C" void LAB_1004bdcb(void);
extern "C" void LAB_1004d644(void);
extern "C" void LAB_10058a5d(void);
extern "C" void LAB_10059741(void);
extern "C" void LAB_1005fd26(void);
extern "C" void LAB_1006948e(void);
extern "C" void LAB_1006e574(void);
extern "C" void LAB_1006e600(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007d83a(void);
extern "C" void LAB_1008054e(void);
extern "C" void LAB_1008472f(void);
extern "C" void LAB_10094102(void);
extern "C" void LAB_10a4c908(void);
extern "C" void LAB_10a4c926(void);
extern "C" void LAB_10a4d748(void);
extern "C" void LAB_10a4d766(void);
extern "C" void LAB_10a521d5(void);
extern "C" void LAB_10a521e6(void);
extern "C" void LAB_10a521f5(void);
extern "C" void LAB_10a53cda(void);
extern "C" void LAB_10a53ddd(void);
extern "C" void LAB_10a53dfb(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11883984(void);
extern "C" void LAB_118ba554(void);
extern "C" void LAB_118efc4c(void);
extern "C" void LAB_118efca8(void);
extern "C" void LAB_118efcf4(void);
extern "C" void LAB_118efd44(void);
extern "C" void LAB_118efd94(void);
extern "C" void LAB_118f0040(void);
extern "C" void LAB_118f009c(void);
extern "C" void LAB_118f00a8(void);
extern "C" void LAB_118f00b4(void);
extern "C" void LAB_118f0130(void);
extern "C" void LAB_118f018c(void);
extern "C" void LAB_118f0198(void);
extern "C" void LAB_118f01a4(void);
extern "C" void LAB_118f020c(void);
extern "C" void LAB_118f0268(void);
extern "C" void LAB_118f0274(void);
extern "C" void LAB_118f0280(void);
extern "C" void LAB_118f02e8(void);
extern "C" void LAB_118f0344(void);
extern "C" void LAB_118f0350(void);
extern "C" void LAB_118f035c(void);
extern "C" void LAB_118f0428(void);
extern "C" void LAB_118f0478(void);
extern "C" void LAB_118f04c8(void);
extern "C" void LAB_118f051c(void);
extern "C" void LAB_118f0574(void);
extern "C" void LAB_118f05cc(void);
extern "C" void LAB_118f0610(void);
extern "C" void LAB_118f0660(void);
extern "C" void LAB_118f0b0c(void);
extern "C" void LAB_118f0b68(void);
extern "C" void LAB_118f0b74(void);
extern "C" void LAB_118f0b80(void);
extern "C" void LAB_118f0ba4(void);
extern "C" void LAB_118f0c00(void);
extern "C" void LAB_118f0c0c(void);
extern "C" void LAB_118f0c18(void);
extern "C" void LAB_118f0c54(void);
extern "C" void LAB_118f0cb0(void);
extern "C" void LAB_118f0cbc(void);
extern "C" void LAB_118f0cc8(void);
extern "C" void LAB_118f0cfc(void);
extern "C" void LAB_118f0d58(void);
extern "C" void LAB_118f0d64(void);
extern "C" void LAB_118f0d70(void);
extern "C" void LAB_118f0d94(void);
extern "C" void LAB_118f0df0(void);
extern "C" void LAB_118f0dfc(void);
extern "C" void LAB_118f0e08(void);
extern "C" void LAB_118f0e8c(void);
extern "C" void LAB_118f0ee8(void);
extern "C" void LAB_118f0ef4(void);
extern "C" void LAB_118f0f00(void);
extern "C" void LAB_118f1054(void);
extern "C" void LAB_118f1094(void);
extern "C" void LAB_118f10dc(void);
extern "C" void LAB_118f112c(void);
extern "C" void LAB_118f1194(void);
extern "C" void LAB_118f11f0(void);
extern "C" void LAB_118f11fc(void);
extern "C" void LAB_118f1208(void);
extern "C" void LAB_118f122c(void);
extern "C" void LAB_118f1288(void);
extern "C" void LAB_118f1294(void);
extern "C" void LAB_118f12a0(void);
extern "C" void LAB_118f12d4(void);
extern "C" void LAB_118f1330(void);
extern "C" void LAB_118f133c(void);
extern "C" void LAB_118f1348(void);
extern "C" void LAB_118f1408(void);
extern "C" void LAB_118f1464(void);
extern "C" void LAB_118f1470(void);
extern "C" void LAB_118f147c(void);
extern "C" void LAB_118f1694(void);
extern "C" void LAB_118f16dc(void);
extern "C" void LAB_118f1718(void);
extern "C" void LAB_118f1724(void);
extern "C" void LAB_118f1748(void);
extern "C" void LAB_118f1790(void);
extern "C" void LAB_118f17cc(void);
extern "C" void LAB_118f17d8(void);
extern "C" void LAB_118f19cc(void);
extern "C" void LAB_118f1a70(void);
extern "C" void LAB_118f1ab8(void);
extern "C" void LAB_118f1b28(void);
extern "C" void LAB_118f1bcc(void);
extern "C" void LAB_118f1c14(void);
extern "C" void LAB_118f1c90(void);
extern "C" void LAB_118f1d34(void);
extern "C" void LAB_118f1d7c(void);
extern "C" void LAB_118f1df8(void);
extern "C" void LAB_118f1e3c(void);
extern "C" void LAB_118f1ea4(void);
extern "C" void LAB_118f1ef0(void);
extern "C" void LAB_118f1f00(void);
extern "C" void LAB_118f1f48(void);
extern "C" void LAB_118f1f9c(void);
extern "C" void LAB_118f1fec(void);
extern "C" void LAB_118f203c(void);
extern "C" void LAB_118f2098(void);
extern "C" void LAB_118f20f0(void);
extern "C" void LAB_118f2144(void);
extern "C" void LAB_118f219c(void);
extern "C" void LAB_118f21f8(void);
extern "C" void LAB_118f2248(void);
extern "C" void LAB_118f22b4(void);
extern "C" void LAB_118f2310(void);
extern "C" void LAB_118f231c(void);
extern "C" void LAB_118f2328(void);
extern "C" void LAB_118f234c(void);
extern "C" void LAB_118f23a8(void);
extern "C" void LAB_118f23b4(void);
extern "C" void LAB_118f23c0(void);
extern "C" void LAB_118f2414(void);
extern "C" void LAB_118f2470(void);
extern "C" void LAB_118f247c(void);
extern "C" void LAB_118f2488(void);
extern "C" void LAB_118f24fc(void);
extern "C" void LAB_118f2558(void);
extern "C" void LAB_118f2564(void);
extern "C" void LAB_118f2570(void);
extern "C" void LAB_118f25d4(void);
extern "C" void LAB_118f2630(void);
extern "C" void LAB_118f263c(void);
extern "C" void LAB_118f2648(void);
extern "C" void LAB_118f28c0(void);
extern "C" void LAB_118f291c(void);
extern "C" void LAB_118f2928(void);
extern "C" void LAB_118f2934(void);
extern "C" void LAB_118f2958(void);
extern "C" void LAB_118f29b4(void);
extern "C" void LAB_118f29c0(void);
extern "C" void LAB_118f29cc(void);
extern "C" void LAB_118f2a3c(void);
extern "C" void LAB_118f2a98(void);
extern "C" void LAB_118f2aa4(void);
extern "C" void LAB_118f2ab0(void);
extern "C" void LAB_118f2dbc(void);
extern "C" void LAB_118f2e18(void);
extern "C" void LAB_118f2e24(void);
extern "C" void LAB_118f2e30(void);
extern "C" void LAB_118f2e5c(void);
extern "C" void LAB_118f2eb8(void);
extern "C" void LAB_118f2ec4(void);
extern "C" void LAB_118f2ed0(void);
extern "C" void LAB_118f2ef4(void);
extern "C" void LAB_118f2f50(void);
extern "C" void LAB_118f2f5c(void);
extern "C" void LAB_118f2f68(void);
extern "C" void LAB_118f2f8c(void);
extern "C" void LAB_118f2fe0(void);
extern "C" void LAB_118f2fec(void);
extern "C" void LAB_118f2ff8(void);
extern "C" void LAB_118f3034(void);
extern "C" void LAB_118f3078(void);
extern "C" void LAB_118f30bc(void);
extern "C" void LAB_118f33ac(void);
extern "C" void LAB_118f3408(void);
extern "C" void LAB_118f3414(void);
extern "C" void LAB_118f3420(void);
extern "C" void LAB_118f3444(void);
extern "C" void LAB_118f34a0(void);
extern "C" void LAB_118f34ac(void);
extern "C" void LAB_118f34b8(void);
extern "C" void LAB_118f35c0(void);
extern "C" void LAB_118f3604(void);
extern "C" void LAB_118f3648(void);
extern "C" void LAB_118f36a4(void);
extern "C" void LAB_118f3700(void);
extern "C" void LAB_118f370c(void);
extern "C" void LAB_118f3718(void);
extern "C" void LAB_118f373c(void);
extern "C" void LAB_118f3798(void);
extern "C" void LAB_118f37a4(void);
extern "C" void LAB_118f37b0(void);
extern "C" void LAB_118f37e4(void);
extern "C" void LAB_118f3840(void);
extern "C" void LAB_118f384c(void);
extern "C" void LAB_118f3858(void);
extern "C" void LAB_118f38c8(void);
extern "C" void LAB_118f3924(void);
extern "C" void LAB_118f3930(void);
extern "C" void LAB_118f393c(void);
extern "C" void LAB_118f3a18(void);
extern "C" void LAB_118f3a64(void);
extern "C" void LAB_118f3ab8(void);
extern "C" void LAB_118f3b08(void);
extern "C" void LAB_118f3b50(void);
extern "C" void LAB_118f3bb8(void);
extern "C" void LAB_118f3c14(void);
extern "C" void LAB_118f3c20(void);
extern "C" void LAB_118f3c2c(void);
extern "C" void LAB_118f3c50(void);
extern "C" void LAB_118f3cac(void);
extern "C" void LAB_118f3cb8(void);
extern "C" void LAB_118f3cc4(void);
extern "C" void LAB_118f3ce8(void);
extern "C" void LAB_118f3d44(void);
extern "C" void LAB_118f3d50(void);
extern "C" void LAB_118f3d5c(void);
extern "C" void LAB_118f3d80(void);
extern "C" void LAB_118f3ddc(void);
extern "C" void LAB_118f3de8(void);
extern "C" void LAB_118f3df4(void);
extern "C" void LAB_118f3e30(void);
extern "C" void LAB_118f3e8c(void);
extern "C" void LAB_118f3e98(void);
extern "C" void LAB_118f3ea4(void);
extern "C" void LAB_118f3ec8(void);
extern "C" void LAB_118f3f24(void);
extern "C" void LAB_118f3f30(void);
extern "C" void LAB_118f3f3c(void);
extern "C" void LAB_118f4020(void);
extern "C" void LAB_118f4074(void);
extern "C" void LAB_118f40d0(void);
extern "C" void LAB_118f4130(void);
extern "C" void LAB_118f418c(void);
extern "C" void LAB_118f41e8(void);
extern "C" void LAB_118f4240(void);
extern "C" void LAB_118f42a4(void);
extern "C" void LAB_118f4300(void);
extern "C" void LAB_118f435c(void);
extern "C" void LAB_118f43bc(void);
extern "C" void LAB_118f441c(void);
extern "C" void LAB_118f4484(void);
extern "C" void LAB_118f4574(void);
extern "C" void LAB_118f45d0(void);
extern "C" void LAB_118f45dc(void);
extern "C" void LAB_118f45e8(void);
extern "C" void LAB_118f46d8(void);
extern "C" void LAB_118f4734(void);
extern "C" void LAB_118f4740(void);
extern "C" void LAB_118f474c(void);
extern "C" void LAB_118f4770(void);
extern "C" void LAB_118f47cc(void);
extern "C" void LAB_118f47d8(void);
extern "C" void LAB_118f47e4(void);
extern "C" void LAB_118f4808(void);
extern "C" void LAB_118f4864(void);
extern "C" void LAB_118f4870(void);
extern "C" void LAB_118f487c(void);
extern "C" void LAB_118f48a0(void);
extern "C" void LAB_118f48fc(void);
extern "C" void LAB_118f4908(void);
extern "C" void LAB_118f4914(void);
extern "C" void LAB_118f4938(void);
extern "C" void LAB_118f4994(void);
extern "C" void LAB_118f49a0(void);
extern "C" void LAB_118f49ac(void);
extern "C" void LAB_118f49d0(void);
extern "C" void LAB_118f4a2c(void);
extern "C" void LAB_118f4a38(void);
extern "C" void LAB_118f4a44(void);
extern "C" void LAB_118f4b44(void);
extern "C" void LAB_118f4ba0(void);
extern "C" void LAB_118f4bac(void);
extern "C" void LAB_118f4bb8(void);
extern "C" void LAB_118f4c30(void);
extern "C" void LAB_118f4c8c(void);
extern "C" void LAB_118f4c98(void);
extern "C" void LAB_118f4ca4(void);
extern "C" void LAB_118f4cc8(void);
extern "C" void LAB_118f4d24(void);
extern "C" void LAB_118f4d30(void);
extern "C" void LAB_118f4d3c(void);
extern "C" void LAB_118f4d60(void);
extern "C" void LAB_118f4dbc(void);
extern "C" void LAB_118f4dc8(void);
extern "C" void LAB_118f4dd4(void);
extern "C" void LAB_118f4df8(void);
extern "C" void LAB_118f4e54(void);
extern "C" void LAB_118f4e60(void);
extern "C" void LAB_118f4e6c(void);
extern "C" void LAB_118f4f38(void);
extern "C" void LAB_118f4f88(void);
extern "C" void LAB_118f4ffc(void);
extern "C" void LAB_118f5058(void);
extern "C" void LAB_118f5064(void);
extern "C" void LAB_118f5070(void);
extern "C" void LAB_118f5094(void);
extern "C" void LAB_118f50f0(void);
extern "C" void LAB_118f50fc(void);
extern "C" void LAB_118f5108(void);
extern "C" void LAB_118f512c(void);
extern "C" void LAB_118f5188(void);
extern "C" void LAB_118f5194(void);
extern "C" void LAB_118f51a0(void);
extern "C" void LAB_118f526c(void);
extern "C" void LAB_118f52b0(void);
extern "C" void LAB_118f5310(void);
extern "C" void LAB_118f536c(void);
extern "C" void LAB_118f5378(void);
extern "C" void LAB_118f5384(void);
extern "C" void LAB_118f53a8(void);
extern "C" void LAB_118f5404(void);
extern "C" void LAB_118f5410(void);
extern "C" void LAB_118f541c(void);
extern "C" void LAB_118f544c(void);
extern "C" void LAB_118f54a8(void);
extern "C" void LAB_118f54b4(void);
extern "C" void LAB_118f54c0(void);
extern "C" void LAB_118f559c(void);
extern "C" void LAB_118f55e0(void);
extern "C" void LAB_118f5658(void);
extern "C" void LAB_118f56b4(void);
extern "C" void LAB_118f56c0(void);
extern "C" void LAB_118f56cc(void);
extern "C" void LAB_118f56f0(void);
extern "C" void LAB_118f574c(void);
extern "C" void LAB_118f5758(void);
extern "C" void LAB_118f5764(void);
extern "C" void LAB_118f5788(void);
extern "C" void LAB_118f57e4(void);
extern "C" void LAB_118f57f0(void);
extern "C" void LAB_118f57fc(void);
extern "C" void LAB_118f58c8(void);
extern "C" void LAB_118f5918(void);
extern "C" void LAB_118f5970(void);
extern "C" void LAB_118f59cc(void);
extern "C" void LAB_118f5a28(void);
extern "C" void LAB_118f5a84(void);
extern "C" void LAB_118f5ae0(void);
extern "C" void LAB_118f5b3c(void);
extern "C" void LAB_118f5b98(void);
extern "C" void LAB_118f5bf8(void);
extern "C" void LAB_118f5c60(void);
extern "C" void LAB_118f5cc0(void);
extern "C" void LAB_118f5d14(void);
extern "C" void LAB_118f5e70(void);
extern "C" void LAB_118f5ecc(void);
extern "C" void LAB_118f5ed8(void);
extern "C" void LAB_118f5ee4(void);
extern "C" void LAB_118f5f08(void);
extern "C" void LAB_118f5f64(void);
extern "C" void LAB_118f5f70(void);
extern "C" void LAB_118f5f7c(void);
extern "C" void LAB_118f60d0(void);
extern "C" void LAB_118f612c(void);
extern "C" void LAB_118f6138(void);
extern "C" void LAB_118f6144(void);
extern "C" void LAB_118f6298(void);
extern "C" void LAB_118f62f4(void);
extern "C" void LAB_118f6300(void);
extern "C" void LAB_118f630c(void);
extern "C" void LAB_118f63dc(void);
extern "C" void LAB_118f6438(void);
extern "C" void LAB_118f6444(void);
extern "C" void LAB_118f6450(void);
extern "C" void LAB_118f6474(void);
extern "C" void LAB_118f64d0(void);
extern "C" void LAB_118f64dc(void);
extern "C" void LAB_118f64e8(void);
extern "C" void LAB_118f650c(void);
extern "C" void LAB_118f6744(void);
extern "C" void LAB_118f67a0(void);
extern "C" void LAB_118f67ac(void);
extern "C" void LAB_118f67b8(void);
extern "C" void LAB_118f67dc(void);
extern "C" void LAB_118f6994(void);
extern "C" void LAB_118f69f0(void);
extern "C" void LAB_118f69fc(void);
extern "C" void LAB_118f6a08(void);
extern "C" void LAB_118f6b5c(void);
extern "C" void LAB_118f6bb8(void);
extern "C" void LAB_118f6bc4(void);
extern "C" void LAB_118f6bd0(void);
extern "C" void LAB_118f6bf4(void);
extern "C" void LAB_118f6c50(void);
extern "C" void LAB_118f6c5c(void);
extern "C" void LAB_118f6c68(void);
extern "C" void LAB_118f6c8c(void);
extern "C" void LAB_118f6ce8(void);
extern "C" void LAB_118f6cf4(void);
extern "C" void LAB_118f6d00(void);
extern "C" void LAB_118f6d24(void);
extern "C" void LAB_118f6d78(void);
extern "C" void LAB_118f6d84(void);
extern "C" void LAB_118f6d90(void);
extern "C" void LAB_118f6dcc(void);
extern "C" void LAB_118f6e1c(void);
extern "C" void LAB_118f6e70(void);
extern "C" void LAB_118f6ed0(void);
extern "C" void LAB_118f6f2c(void);
extern "C" void LAB_118f6f80(void);
extern "C" void LAB_118f6fe0(void);
extern "C" void LAB_118f703c(void);
extern "C" void LAB_118f7090(void);
extern "C" void LAB_118f70f4(void);
extern "C" void LAB_118f7158(void);
extern "C" void LAB_118f71ac(void);
extern "C" void LAB_118f7224(void);
extern "C" void LAB_118f7280(void);
extern "C" void LAB_118f728c(void);
extern "C" void LAB_118f7298(void);
extern "C" void LAB_118f72bc(void);
extern "C" void LAB_118f7318(void);
extern "C" void LAB_118f7324(void);
extern "C" void LAB_118f7330(void);
extern "C" void LAB_118f73e8(void);
extern "C" void LAB_118f7444(void);
extern "C" void LAB_118f7450(void);
extern "C" void LAB_118f745c(void);
extern "C" void LAB_118f7530(void);
extern "C" void LAB_118f758c(void);
extern "C" void LAB_118f7598(void);
extern "C" void LAB_118f75a4(void);
extern "C" void LAB_118f7650(void);
extern "C" void LAB_118f76ac(void);
extern "C" void LAB_118f76b8(void);
extern "C" void LAB_118f76c4(void);
extern "C" void LAB_118f772c(void);
extern "C" void LAB_118f7788(void);
extern "C" void LAB_118f7794(void);
extern "C" void LAB_118f77a0(void);
extern "C" void LAB_118f7814(void);
extern "C" void LAB_118f7870(void);
extern "C" void LAB_118f787c(void);
extern "C" void LAB_118f7888(void);
extern "C" void LAB_118f793c(void);
extern "C" void LAB_118f7998(void);
extern "C" void LAB_118f79a4(void);
extern "C" void LAB_118f79b0(void);
extern "C" void LAB_118f7a34(void);
extern "C" void LAB_118f7a90(void);
extern "C" void LAB_118f7a9c(void);
extern "C" void LAB_118f7aa8(void);
extern "C" void LAB_118f7b08(void);
extern "C" void LAB_118f7b64(void);
extern "C" void LAB_118f7b70(void);
extern "C" void LAB_118f7b7c(void);
extern "C" void LAB_118f7c08(void);
extern "C" void LAB_118f7c64(void);
extern "C" void LAB_118f7c70(void);
extern "C" void LAB_118f7c7c(void);
extern "C" void LAB_118f7cf8(void);
extern "C" void LAB_118f7d54(void);
extern "C" void LAB_118f7d60(void);
extern "C" void LAB_118f7d6c(void);
extern "C" void LAB_118f7dc0(void);
extern "C" void LAB_118f7e1c(void);
extern "C" void LAB_118f7e28(void);
extern "C" void LAB_118f7e34(void);
extern "C" void LAB_118f7e98(void);
extern "C" void LAB_118f7eec(void);
extern "C" void LAB_118f7ef8(void);
extern "C" void LAB_118f7f04(void);
extern "C" void LAB_118f7f40(void);
extern "C" void LAB_118f7f84(void);
extern "C" void LAB_118f7fc8(void);
extern "C" void LAB_118f8024(void);
extern "C" void LAB_118f8080(void);
extern "C" void LAB_118f808c(void);
extern "C" void LAB_118f8098(void);
extern "C" void LAB_118f80bc(void);
extern "C" void LAB_118f8118(void);
extern "C" void LAB_118f8124(void);
extern "C" void LAB_118f8130(void);
extern "C" void LAB_118f8184(void);
extern "C" void LAB_118f81e0(void);
extern "C" void LAB_118f81ec(void);
extern "C" void LAB_118f81f8(void);
extern "C" void LAB_118f8238(void);
extern "C" void LAB_118f8294(void);
extern "C" void LAB_118f82a0(void);
extern "C" void LAB_118f82ac(void);
extern "C" void LAB_118f8394(void);
extern "C" void LAB_118f83e0(void);
extern "C" void LAB_118f8430(void);
extern "C" void LAB_118f84b0(void);
extern "C" void LAB_118f84cc(void);
extern "C" void LAB_118f8528(void);
extern "C" void LAB_118f8534(void);
extern "C" void LAB_118f8540(void);
extern "C" void LAB_118f8564(void);
extern "C" void LAB_118f85c0(void);
extern "C" void LAB_118f85cc(void);
extern "C" void LAB_118f85d8(void);
extern "C" void LAB_118f8630(void);
extern "C" void LAB_118f868c(void);
extern "C" void LAB_118f8698(void);
extern "C" void LAB_118f86a4(void);
extern "C" void LAB_118f86e8(void);
extern "C" void LAB_118f8744(void);
extern "C" void LAB_118f8750(void);
extern "C" void LAB_118f875c(void);
extern "C" void LAB_118f8944(void);
extern "C" void LAB_118f897c(void);
extern "C" void LAB_118f89b4(void);
extern "C" void LAB_118f89fc(void);
extern "C" void LAB_118f8a58(void);
extern "C" void LAB_118f8a64(void);
extern "C" void LAB_118f8a70(void);
extern "C" void LAB_118f8a94(void);
extern "C" void LAB_118f8af0(void);
extern "C" void LAB_118f8afc(void);
extern "C" void LAB_118f8b08(void);
extern "C" void LAB_118f8b60(void);
extern "C" void LAB_118f8bbc(void);
extern "C" void LAB_118f8bc8(void);
extern "C" void LAB_118f8bd4(void);
extern "C" void LAB_118f8c24(void);
extern "C" void LAB_118f8c80(void);
extern "C" void LAB_118f8c8c(void);
extern "C" void LAB_118f8c98(void);
extern "C" void LAB_118f8cd0(void);
extern "C" void LAB_118f8d24(void);
extern "C" void LAB_118f8d30(void);
extern "C" void LAB_118f8d3c(void);
extern "C" void LAB_118f8d78(void);
extern "C" void LAB_118f8dc0(void);
extern "C" void LAB_118f8e1c(void);
extern "C" void LAB_118f8e78(void);
extern "C" void LAB_118f8e84(void);
extern "C" void LAB_118f8e90(void);
extern "C" void LAB_118f900c(void);
extern "C" void LAB_118f9068(void);
extern "C" void LAB_118f9074(void);
extern "C" void LAB_118f9080(void);
extern "C" void LAB_118f9168(void);
extern "C" void LAB_118f91bc(void);
extern "C" void LAB_118f91c8(void);
extern "C" void LAB_118f91d4(void);
extern "C" void LAB_118f9210(void);
extern "C" void LAB_118f9250(void);
extern "C" void LAB_118f9294(void);
extern "C" void LAB_118f92f4(void);
extern "C" void LAB_118f9350(void);
extern "C" void LAB_118f935c(void);
extern "C" void LAB_118f9368(void);
extern "C" void LAB_118f938c(void);
extern "C" void LAB_118f93e8(void);
extern "C" void LAB_118f93f4(void);
extern "C" void LAB_118f9400(void);
extern "C" void LAB_118f947c(void);
extern "C" void LAB_118f94d8(void);
extern "C" void LAB_118f94e4(void);
extern "C" void LAB_118f94f0(void);
extern "C" void LAB_118f9764(void);
extern "C" void LAB_118f97c0(void);
extern "C" void LAB_118f97cc(void);
extern "C" void LAB_118f97d8(void);
extern "C" void LAB_118f9828(void);
extern "C" void LAB_118f987c(void);
extern "C" void LAB_118f9888(void);
extern "C" void LAB_118f9894(void);
extern "C" void LAB_118f98d0(void);
extern "C" void LAB_118f9920(void);
extern "C" void LAB_118f9974(void);
extern "C" void LAB_118f99c4(void);
extern "C" void LAB_118f9a54(void);
extern "C" void LAB_118f9ab0(void);
extern "C" void LAB_118f9abc(void);
extern "C" void LAB_118f9ac8(void);
extern "C" void LAB_118f9aec(void);
extern "C" void LAB_118f9b48(void);
extern "C" void LAB_118f9b54(void);
extern "C" void LAB_118f9b60(void);
extern "C" void LAB_118f9c00(void);
extern "C" void LAB_118f9c5c(void);
extern "C" void LAB_118f9c68(void);
extern "C" void LAB_118f9c74(void);
extern "C" void LAB_118f9d00(void);
extern "C" void LAB_118f9d5c(void);
extern "C" void LAB_118f9d68(void);
extern "C" void LAB_118f9d74(void);
extern "C" void LAB_118f9de8(void);
extern "C" void LAB_118f9e44(void);
extern "C" void LAB_118f9e50(void);
extern "C" void LAB_118f9e5c(void);
extern "C" void LAB_118fa010(void);
extern "C" void LAB_118fa064(void);
extern "C" void LAB_118fa070(void);
extern "C" void LAB_118fa07c(void);
extern "C" void LAB_118fa0b8(void);
extern "C" void LAB_118fa0fc(void);
extern "C" void LAB_118fa140(void);
extern "C" void LAB_118fa184(void);
extern "C" void LAB_118fa1c8(void);
extern "C" void LAB_118fa20c(void);
extern "C" void LAB_118fa24c(void);
extern "C" void LAB_118fa2a8(void);
extern "C" void LAB_118fa304(void);
extern "C" void LAB_118fa310(void);
extern "C" void LAB_118fa31c(void);
extern "C" void LAB_118fa340(void);
extern "C" void LAB_118fa39c(void);
extern "C" void LAB_118fa3a8(void);
extern "C" void LAB_118fa3b4(void);
extern "C" void LAB_118fa674(void);
extern "C" void LAB_118fa6d0(void);
extern "C" void LAB_118fa6dc(void);
extern "C" void LAB_118fa6e8(void);
extern "C" void LAB_118fa73c(void);
extern "C" void LAB_118fa798(void);
extern "C" void LAB_118fa7a4(void);
extern "C" void LAB_118fa7b0(void);
extern "C" void LAB_118fa824(void);
extern "C" void LAB_118fa880(void);
extern "C" void LAB_118fa88c(void);
extern "C" void LAB_118fa898(void);
extern "C" void LAB_118fa8f0(void);
extern "C" void LAB_118fa94c(void);
extern "C" void LAB_118fa958(void);
extern "C" void LAB_118fa964(void);
extern "C" void LAB_118fa9b8(void);
extern "C" void LAB_118faa14(void);
extern "C" void LAB_118faa20(void);
extern "C" void LAB_118faa2c(void);
extern "C" void LAB_118faad0(void);
extern "C" void LAB_118fab24(void);
extern "C" void LAB_118fab30(void);
extern "C" void LAB_118fab3c(void);
extern "C" void LAB_118fab78(void);
extern "C" void LAB_118fabbc(void);
extern "C" void LAB_118fac0c(void);
extern "C" void LAB_118fac5c(void);
extern "C" void LAB_118faca8(void);
extern "C" void LAB_118facf0(void);
extern "C" void LAB_118fad4c(void);
extern "C" void LAB_118fada8(void);
extern "C" void LAB_118fadb4(void);
extern "C" void LAB_118fadc0(void);
extern "C" void LAB_118fade4(void);
extern "C" void LAB_118fae40(void);
extern "C" void LAB_118fae4c(void);
extern "C" void LAB_118fae58(void);
extern "C" void LAB_118faefc(void);
extern "C" void LAB_118faf58(void);
extern "C" void LAB_118faf64(void);
extern "C" void LAB_118faf70(void);
extern "C" void LAB_118fafdc(void);
extern "C" void LAB_118fb038(void);
extern "C" void LAB_118fb044(void);
extern "C" void LAB_118fb050(void);
extern "C" void LAB_118fb0bc(void);
extern "C" void LAB_118fb118(void);
extern "C" void LAB_118fb124(void);
extern "C" void LAB_118fb130(void);
extern "C" void LAB_118fb170(void);
extern "C" void LAB_118fb1cc(void);
extern "C" void LAB_118fb1d8(void);
extern "C" void LAB_118fb1e4(void);
extern "C" void LAB_118fb244(void);
extern "C" void LAB_118fb2a0(void);
extern "C" void LAB_118fb2ac(void);
extern "C" void LAB_118fb2b8(void);
extern "C" void LAB_118fb2f4(void);
extern "C" void LAB_118fb348(void);
extern "C" void LAB_118fb354(void);
extern "C" void LAB_118fb360(void);
extern "C" void LAB_118fb39c(void);
extern "C" void LAB_118fb3e4(void);
extern "C" void LAB_118fb428(void);
extern "C" void LAB_118fb46c(void);
extern "C" void LAB_118fb4b0(void);
extern "C" void LAB_118fb4f4(void);
extern "C" void LAB_118fb53c(void);
extern "C" void LAB_118fb588(void);
extern "C" void LAB_118fb5d4(void);
extern "C" void LAB_118fb620(void);
extern "C" void LAB_118fb668(void);
extern "C" void LAB_118fb6b4(void);
extern "C" void LAB_118fb700(void);
extern "C" void LAB_118fb74c(void);
extern "C" void LAB_118fb798(void);
extern "C" void LAB_118fb7ec(void);
extern "C" void LAB_118fb854(void);
extern "C" void LAB_118fb8b0(void);
extern "C" void LAB_118fb8bc(void);
extern "C" void LAB_118fb8c8(void);
extern "C" void LAB_118fb8ec(void);
extern "C" void LAB_118fb948(void);
extern "C" void LAB_118fb954(void);
extern "C" void LAB_118fb960(void);
extern "C" void LAB_118fba58(void);
extern "C" void LAB_118fbab4(void);
extern "C" void LAB_118fbac0(void);
extern "C" void LAB_118fbacc(void);
extern "C" void LAB_118fbb3c(void);
extern "C" void LAB_118fbb98(void);
extern "C" void LAB_118fbba4(void);
extern "C" void LAB_118fbbb0(void);
extern "C" void LAB_118fbc18(void);
extern "C" void LAB_118fbc74(void);
extern "C" void LAB_118fbc80(void);
extern "C" void LAB_118fbc8c(void);
extern "C" void LAB_118fbd00(void);
extern "C" void LAB_118fbd5c(void);
extern "C" void LAB_118fbd68(void);
extern "C" void LAB_118fbd74(void);
extern "C" void LAB_118fbdc8(void);
extern "C" void LAB_118fbe24(void);
extern "C" void LAB_118fbe30(void);
extern "C" void LAB_118fbe3c(void);
extern "C" void LAB_118fbe78(void);
extern "C" void LAB_118fbed4(void);
extern "C" void LAB_118fbee0(void);
extern "C" void LAB_118fbeec(void);
extern "C" void LAB_118fbf2c(void);
extern "C" void LAB_118fbf88(void);
extern "C" void LAB_118fbf94(void);
extern "C" void LAB_118fbfa0(void);
extern "C" void LAB_118fbfe0(void);
extern "C" void LAB_118fc03c(void);
extern "C" void LAB_118fc048(void);
extern "C" void LAB_118fc054(void);
extern "C" void LAB_118fc098(void);
extern "C" void LAB_118fc0f4(void);
extern "C" void LAB_118fc100(void);
extern "C" void LAB_118fc10c(void);
extern "C" void LAB_118fc148(void);
extern "C" void LAB_118fc1a4(void);
extern "C" void LAB_118fc1b0(void);
extern "C" void LAB_118fc1bc(void);
extern "C" void LAB_118fc1fc(void);
extern "C" void LAB_118fc258(void);
extern "C" void LAB_118fc264(void);
extern "C" void LAB_118fc270(void);
extern "C" void LAB_118fc2b0(void);
extern "C" void LAB_118fc30c(void);
extern "C" void LAB_118fc318(void);
extern "C" void LAB_118fc324(void);
extern "C" void LAB_118fc368(void);
extern "C" void LAB_118fc3c4(void);
extern "C" void LAB_118fc3d0(void);
extern "C" void LAB_118fc3dc(void);
extern "C" void LAB_118fc470(void);
extern "C" void LAB_118fc4cc(void);
extern "C" void LAB_118fc4d8(void);
extern "C" void LAB_118fc4e4(void);
extern "C" void LAB_118fc624(void);
extern "C" void LAB_118fc680(void);
extern "C" void LAB_118fc68c(void);
extern "C" void LAB_118fc698(void);
extern "C" void LAB_118fc8c8(void);
extern "C" void LAB_118fc91c(void);
extern "C" void LAB_118fc928(void);
extern "C" void LAB_118fc934(void);
extern "C" void LAB_118fc970(void);
extern "C" void LAB_118fc9d8(void);
extern "C" void LAB_118fca34(void);
extern "C" void LAB_118fca40(void);
extern "C" void LAB_118fca4c(void);
extern "C" void LAB_118fca70(void);
extern "C" void LAB_118fcacc(void);
extern "C" void LAB_118fcad8(void);
extern "C" void LAB_118fcae4(void);
extern "C" void LAB_118fcc00(void);
extern "C" void LAB_118fcc3c(void);
extern "C" void LAB_118fcd88(void);
extern "C" void LAB_118fcde4(void);
extern "C" void LAB_118fcdf0(void);
extern "C" void LAB_118fcdfc(void);
extern "C" void LAB_118fce20(void);
extern "C" void LAB_118fce7c(void);
extern "C" void LAB_118fce88(void);
extern "C" void LAB_118fce94(void);
extern "C" void LAB_118fcec0(void);
extern "C" void LAB_118fcf1c(void);
extern "C" void LAB_118fcf28(void);
extern "C" void LAB_118fcf34(void);
extern "C" void LAB_118fcf80(void);
extern "C" void LAB_118fcfd4(void);
extern "C" void LAB_118fcfe0(void);
extern "C" void LAB_118fcfec(void);
extern "C" void LAB_118fdc1c(void);
extern "C" void LAB_118fdc78(void);
extern "C" void LAB_118fdc84(void);
extern "C" void LAB_118fdc90(void);
extern "C" void LAB_118fdcb4(void);
extern "C" void LAB_118fdd10(void);
extern "C" void LAB_118fdd1c(void);
extern "C" void LAB_118fdd28(void);
extern "C" void LAB_118fdfac(void);
extern "C" void LAB_118fe008(void);
extern "C" void LAB_118fe014(void);
extern "C" void LAB_118fe020(void);
extern "C" void LAB_118fe184(void);
extern "C" void LAB_118fe1e0(void);
extern "C" void LAB_118fe1ec(void);
extern "C" void LAB_118fe1f8(void);
extern "C" void LAB_118fe39c(void);
extern "C" void LAB_118fe3f8(void);
extern "C" void LAB_118fe404(void);
extern "C" void LAB_118fe410(void);
extern "C" void LAB_118fe4e0(void);
extern "C" void LAB_118fe53c(void);
extern "C" void LAB_118fe548(void);
extern "C" void LAB_118fe554(void);
extern "C" void LAB_118fe5ac(void);
extern "C" void LAB_118fe608(void);
extern "C" void LAB_118fe614(void);
extern "C" void LAB_118fe620(void);
extern "C" void LAB_118fe71c(void);
extern "C" void LAB_118fe778(void);
extern "C" void LAB_118fe784(void);
extern "C" void LAB_118fe790(void);
extern "C" void LAB_118fe7e4(void);
extern "C" void LAB_118fe840(void);
extern "C" void LAB_118fe84c(void);
extern "C" void LAB_118fe858(void);
extern "C" void LAB_118fe8e8(void);
extern "C" void LAB_118fe944(void);
extern "C" void LAB_118fe950(void);
extern "C" void LAB_118fe95c(void);
extern "C" void LAB_118fe9c8(void);
extern "C" void LAB_118fea24(void);
extern "C" void LAB_118fea30(void);
extern "C" void LAB_118fea3c(void);
extern "C" void LAB_118fedfc(void);
extern "C" void LAB_118fee58(void);
extern "C" void LAB_118fee64(void);
extern "C" void LAB_118fee70(void);
extern "C" void LAB_118fefd0(void);
extern "C" void LAB_118ff02c(void);
extern "C" void LAB_118ff038(void);
extern "C" void LAB_118ff044(void);
extern "C" void LAB_118ff188(void);
extern "C" void LAB_118ff1e4(void);
extern "C" void LAB_118ff1f0(void);
extern "C" void LAB_118ff1fc(void);
extern "C" void LAB_118ff26c(void);
extern "C" void LAB_118ff2c8(void);
extern "C" void LAB_118ff2d4(void);
extern "C" void LAB_118ff2e0(void);
extern "C" void LAB_118ff364(void);
extern "C" void LAB_118ff3c0(void);
extern "C" void LAB_118ff3cc(void);
extern "C" void LAB_118ff3d8(void);
extern "C" void LAB_118ff42c(void);
extern "C" void LAB_118ff488(void);
extern "C" void LAB_118ff494(void);
extern "C" void LAB_118ff4a0(void);
extern "C" void LAB_118ff5d8(void);
extern "C" void LAB_118ff634(void);
extern "C" void LAB_118ff640(void);
extern "C" void LAB_118ff64c(void);
extern "C" void LAB_118ff6cc(void);
extern "C" void LAB_118ff728(void);
extern "C" void LAB_118ff734(void);
extern "C" void LAB_118ff740(void);
extern "C" void LAB_118ff7c4(void);
extern "C" void LAB_118ff820(void);
extern "C" void LAB_118ff82c(void);
extern "C" void LAB_118ff838(void);
extern "C" void LAB_118ff85c(void);
extern "C" void LAB_118ff8b8(void);
extern "C" void LAB_118ff8c4(void);
extern "C" void LAB_118ff8d0(void);
extern "C" void LAB_118ff9a8(void);
extern "C" void LAB_118ffa04(void);
extern "C" void LAB_118ffa10(void);
extern "C" void LAB_118ffa1c(void);
extern "C" void LAB_118ffa78(void);
extern "C" void LAB_118ffad4(void);
extern "C" void LAB_118ffae0(void);
extern "C" void LAB_118ffaec(void);
extern "C" void LAB_118ffb10(void);
extern "C" void LAB_118ffb6c(void);
extern "C" void LAB_118ffb78(void);
extern "C" void LAB_118ffb84(void);
extern "C" void LAB_118ffba8(void);
extern "C" void LAB_118ffc04(void);
extern "C" void LAB_118ffc10(void);
extern "C" void LAB_118ffc1c(void);
extern "C" void LAB_118ffd70(void);
extern "C" void LAB_118ffdcc(void);
extern "C" void LAB_118ffdd8(void);
extern "C" void LAB_118ffde4(void);
extern "C" void LAB_118fffb8(void);
extern "C" void LAB_11900014(void);
extern "C" void LAB_11900020(void);
extern "C" void LAB_1190002c(void);
extern "C" void LAB_11900108(void);
extern "C" void LAB_11900164(void);
extern "C" void LAB_11900170(void);
extern "C" void LAB_1190017c(void);
extern "C" void LAB_11900268(void);
extern "C" void LAB_119002c4(void);
extern "C" void LAB_119002d0(void);
extern "C" void LAB_119002dc(void);
extern "C" void LAB_11900328(void);
extern "C" void LAB_11900384(void);
extern "C" void LAB_11900390(void);
extern "C" void LAB_1190039c(void);
extern "C" void LAB_11900400(void);
extern "C" void LAB_1190045c(void);
extern "C" void LAB_11900468(void);
extern "C" void LAB_11900474(void);
extern "C" void LAB_11900520(void);
extern "C" void LAB_1190057c(void);
extern "C" void LAB_11900588(void);
extern "C" void LAB_11900594(void);
extern "C" void LAB_119005dc(void);
extern "C" void LAB_11900638(void);
extern "C" void LAB_11900644(void);
extern "C" void LAB_11900650(void);
extern "C" void LAB_119006bc(void);
extern "C" void LAB_11900718(void);
extern "C" void LAB_11900724(void);
extern "C" void LAB_11900730(void);
extern "C" void LAB_119007cc(void);
extern "C" void LAB_11900828(void);
extern "C" void LAB_11900834(void);
extern "C" void LAB_11900840(void);
extern "C" void LAB_1190093c(void);
extern "C" void LAB_11900998(void);
extern "C" void LAB_119009a4(void);
extern "C" void LAB_119009b0(void);
extern "C" void LAB_11900a38(void);
extern "C" void LAB_11900a94(void);
extern "C" void LAB_11900aa0(void);
extern "C" void LAB_11900aac(void);
extern "C" void LAB_11900b8c(void);
extern "C" void LAB_11900be8(void);
extern "C" void LAB_11900bf4(void);
extern "C" void LAB_11900c00(void);
extern "C" void LAB_12119c10(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a409c(void);
extern "C" void LAB_121a40a0(void);
extern "C" void LAB_121a40a4(void);
extern "C" void LAB_121a40a8(void);
extern "C" void LAB_121a40ac(void);
extern "C" void LAB_121a40f4(void);
extern "C" void LAB_121a40f8(void);
extern "C" void LAB_121a40fc(void);
extern "C" void LAB_121a4100(void);
extern "C" void LAB_121a4104(void);
extern "C" void LAB_121a4108(void);
extern "C" void LAB_121a410c(void);
extern "C" void LAB_121a4110(void);
extern "C" void LAB_121a4164(void);
extern "C" void LAB_121a4168(void);
extern "C" void LAB_121a416c(void);
extern "C" void LAB_121a4170(void);
extern "C" void LAB_121a41c0(void);
extern "C" void LAB_121a41c4(void);
extern "C" void LAB_121a41c8(void);
extern "C" void LAB_121a41cc(void);
extern "C" void LAB_121a41d4(void);
extern "C" void LAB_121a41d8(void);
extern "C" void LAB_121a41dc(void);
extern "C" void LAB_121a41e0(void);
extern "C" void LAB_121a41e4(void);
extern "C" void LAB_121a41e8(void);
extern "C" void LAB_121a41ec(void);
extern "C" void LAB_121a423c(void);
extern "C" void LAB_121a4240(void);
extern "C" void LAB_121a4244(void);
extern "C" void LAB_121a4290(void);
extern "C" void LAB_121a4294(void);
extern "C" void LAB_121a4298(void);
extern "C" void LAB_121a42e8(void);
extern "C" void LAB_121a42ec(void);
extern "C" void LAB_121a42f0(void);
extern "C" void LAB_121a42f4(void);
extern "C" void LAB_121a42f8(void);
extern "C" void LAB_121a4348(void);
extern "C" void LAB_121a434c(void);
extern "C" void LAB_121a4350(void);
extern "C" void LAB_121a4354(void);
extern "C" void LAB_121a4358(void);
extern "C" void LAB_121a435c(void);
extern "C" void LAB_121a4360(void);
extern "C" void LAB_121a4364(void);
extern "C" void LAB_121a4368(void);
extern "C" void LAB_121a436c(void);
extern "C" void LAB_121a4370(void);
extern "C" void LAB_121a4374(void);
extern "C" void LAB_121a4378(void);
extern "C" void LAB_121a43cc(void);
extern "C" void LAB_121a43d0(void);
extern "C" void LAB_121a4414(void);
extern "C" void LAB_121a4418(void);
extern "C" void LAB_121a4468(void);
extern "C" void LAB_121a446c(void);
extern "C" void LAB_121a44b8(void);
extern "C" void LAB_121a44bc(void);
extern "C" void LAB_121a44c0(void);
extern "C" void LAB_121a44c4(void);
extern "C" void LAB_121a44c8(void);
extern "C" void LAB_121a44cc(void);
extern "C" void LAB_121a44d0(void);
extern "C" void LAB_121a44d4(void);
extern "C" void LAB_121a44d8(void);
extern "C" void LAB_121a44dc(void);
extern "C" void LAB_121a44e0(void);
extern "C" void LAB_121a44e4(void);
extern "C" void LAB_121a44e8(void);
extern "C" void LAB_121a453c(void);
extern "C" void LAB_121a4540(void);
extern "C" void LAB_121a4544(void);
extern "C" void LAB_121a4548(void);
extern "C" void LAB_121a454c(void);
extern "C" void LAB_121a4550(void);
extern "C" void LAB_121a4554(void);
extern "C" void LAB_121a4558(void);
extern "C" void LAB_121a455c(void);
extern "C" void LAB_121a4560(void);
extern "C" void LAB_121a4564(void);
extern "C" void LAB_121a4568(void);
extern "C" void LAB_121a45b8(void);
extern "C" void LAB_121a45bc(void);
extern "C" void LAB_121a45c0(void);
extern "C" void LAB_121a45e0(void);
extern "C" void LAB_121a45e4(void);
extern "C" void LAB_121a45e8(void);
extern "C" void LAB_121a4664(void);
extern "C" void LAB_121a4668(void);
extern "C" void LAB_121a466c(void);
extern "C" void LAB_121a4688(void);
extern "C" void LAB_121a468c(void);
extern "C" void LAB_121a46d4(void);
extern "C" void LAB_121a46d8(void);
extern "C" void LAB_121a46dc(void);
extern "C" void LAB_121a46fc(void);
extern "C" void LAB_121a4700(void);
extern "C" void LAB_121a4704(void);
extern "C" void LAB_121a4708(void);
extern "C" void LAB_121a4758(void);
extern "C" void LAB_121a475c(void);
extern "C" void LAB_121a4760(void);
extern "C" void LAB_121a4764(void);
extern "C" void LAB_121a4768(void);
extern "C" void LAB_121a476c(void);
extern "C" void LAB_121a4770(void);
extern "C" void LAB_121a47c0(void);
extern "C" void LAB_121a47c4(void);
extern "C" void LAB_121a47c8(void);
extern "C" void LAB_121a47cc(void);
extern "C" void LAB_121a47d0(void);
extern "C" void LAB_121a47d4(void);
extern "C" void LAB_121a4828(void);
extern "C" void LAB_121a482c(void);
extern "C" void LAB_121a4830(void);
extern "C" void LAB_121a4834(void);
extern "C" void LAB_121a4838(void);
extern "C" void LAB_121a483c(void);
extern "C" void LAB_121a4840(void);
extern "C" void LAB_121a4844(void);
extern "C" void LAB_121a4848(void);
extern "C" void LAB_121a484c(void);
extern "C" void LAB_121a4850(void);
extern "C" void LAB_121a4854(void);
extern "C" void LAB_121a4858(void);
extern "C" void LAB_121a485c(void);
extern "C" void LAB_121a4860(void);
extern "C" void LAB_121a4864(void);
extern "C" void LAB_121a48b4(void);
extern "C" void LAB_121a48cc(void);
extern "C" void LAB_121a48d0(void);
extern "C" void LAB_122fc888(void);


extern "C" void FUN_10059741(void);

struct Recovered_Bulk { char _pad; undefined4 * __thiscall m_FUN_109d8e50(undefined4 *param_2); template<class... A> int m_FUN_109d8e50(A...); undefined4 * __thiscall m_FUN_109d8fc0(undefined4 param_2); template<class... A> int m_FUN_109d8fc0(A...); undefined4 * __thiscall m_FUN_109d9110(undefined4 param_2); template<class... A> int m_FUN_109d9110(A...); undefined4 * __thiscall m_FUN_109d9470(undefined4 param_2); template<class... A> int m_FUN_109d9470(A...); undefined4 * __thiscall m_FUN_109d95c0(undefined4 param_2); template<class... A> int m_FUN_109d95c0(A...); SCStr * __thiscall m_FUN_109de720(SCStr *param_2); template<class... A> int m_FUN_109de720(A...); SCStr * __thiscall m_FUN_109de740(SCStr *param_2); template<class... A> int m_FUN_109de740(A...); void __thiscall m_FUN_109e1540(SCStr *param_2); template<class... A> int m_FUN_109e1540(A...); void __thiscall m_FUN_109e1570(SCStr *param_2); template<class... A> int m_FUN_109e1570(A...); undefined4 * __thiscall m_FUN_109e1630(undefined4 param_2); template<class... A> int m_FUN_109e1630(A...); undefined4 * __thiscall m_FUN_109e2360(undefined4 param_2); template<class... A> int m_FUN_109e2360(A...); undefined4 * __thiscall m_FUN_109e24b0(undefined4 param_2); template<class... A> int m_FUN_109e24b0(A...); undefined4 * __thiscall m_FUN_109e2640(undefined4 param_2); template<class... A> int m_FUN_109e2640(A...); undefined4 * __thiscall m_FUN_109e2790(undefined4 param_2); template<class... A> int m_FUN_109e2790(A...); undefined4 * __thiscall m_FUN_109e2af0(undefined4 param_2); template<class... A> int m_FUN_109e2af0(A...); SCStr * __thiscall m_FUN_109e9440(SCStr *param_2); template<class... A> int m_FUN_109e9440(A...); undefined4 * __thiscall m_FUN_109edc20(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_109edc20(A...); SCStr * __thiscall m_FUN_109edd10(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_109edd10(A...); undefined4 * __thiscall m_FUN_109edd40(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_109edd40(A...); SCStr * __thiscall m_FUN_109edd60(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_109edd60(A...); undefined4 * __thiscall m_FUN_109edf60(undefined4 param_2); template<class... A> int m_FUN_109edf60(A...); undefined4 * __thiscall m_FUN_109ee480(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_109ee480(A...); undefined4 * __thiscall m_FUN_109ee6f0(undefined4 param_2); template<class... A> int m_FUN_109ee6f0(A...); undefined4 * __thiscall m_FUN_109ee840(undefined4 param_2); template<class... A> int m_FUN_109ee840(A...); undefined4 * __thiscall m_FUN_109ee990(undefined4 param_2); template<class... A> int m_FUN_109ee990(A...); void __thiscall m_FUN_109efc80(undefined4 *param_2); template<class... A> int m_FUN_109efc80(A...); void __thiscall m_FUN_109f0590(undefined4 *param_2); template<class... A> int m_FUN_109f0590(A...); undefined4 * __thiscall m_FUN_109f4000(undefined4 param_2); template<class... A> int m_FUN_109f4000(A...); undefined4 * __thiscall m_FUN_109f5240(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_109f5240(A...); undefined4 * __thiscall m_FUN_109f5390(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_109f5390(A...); undefined4 * __thiscall m_FUN_109f5a30(undefined4 param_2); template<class... A> int m_FUN_109f5a30(A...); undefined4 * __thiscall m_FUN_109f5b80(undefined4 param_2); template<class... A> int m_FUN_109f5b80(A...); undefined4 * __thiscall m_FUN_109f6110(undefined4 param_2); template<class... A> int m_FUN_109f6110(A...); undefined4 * __thiscall m_FUN_109f62a0(undefined4 param_2); template<class... A> int m_FUN_109f62a0(A...); undefined4 * __thiscall m_FUN_109f6410(undefined4 param_2); template<class... A> int m_FUN_109f6410(A...); undefined4 * __thiscall m_FUN_109f6560(undefined4 param_2); template<class... A> int m_FUN_109f6560(A...); undefined4 * __thiscall m_FUN_109f66b0(undefined4 param_2); template<class... A> int m_FUN_109f66b0(A...); undefined4 * __thiscall m_FUN_109f6800(undefined4 param_2); template<class... A> int m_FUN_109f6800(A...); undefined4 * __thiscall m_FUN_109f6950(undefined4 param_2); template<class... A> int m_FUN_109f6950(A...); undefined4 * __thiscall m_FUN_109f6aa0(undefined4 param_2); template<class... A> int m_FUN_109f6aa0(A...); void __thiscall m_FUN_10a08c40(undefined4 param_2); template<class... A> int m_FUN_10a08c40(A...); void __thiscall m_FUN_10a08c50(undefined4 param_2); template<class... A> int m_FUN_10a08c50(A...); void __thiscall m_FUN_10a08c60(undefined1 param_2); template<class... A> int m_FUN_10a08c60(A...); int * __thiscall m_FUN_10a08cb0(int *param_2); template<class... A> int m_FUN_10a08cb0(A...); undefined4 * __thiscall m_FUN_10a08d10(undefined4 param_2); template<class... A> int m_FUN_10a08d10(A...); undefined4 * __thiscall m_FUN_10a09670(undefined4 param_2); template<class... A> int m_FUN_10a09670(A...); undefined4 * __thiscall m_FUN_10a097d0(undefined4 param_2); template<class... A> int m_FUN_10a097d0(A...); void __thiscall m_FUN_10a0cce0(undefined1 param_2); template<class... A> int m_FUN_10a0cce0(A...); undefined4 * __thiscall m_FUN_10a0cd30(undefined4 param_2); template<class... A> int m_FUN_10a0cd30(A...); undefined4 * __thiscall m_FUN_10a0d050(undefined4 param_2); template<class... A> int m_FUN_10a0d050(A...); undefined4 * __thiscall m_FUN_10a0d1b0(undefined4 param_2); template<class... A> int m_FUN_10a0d1b0(A...); undefined4 * __thiscall m_FUN_10a0d310(undefined4 param_2); template<class... A> int m_FUN_10a0d310(A...); void __thiscall m_FUN_10a12630(undefined1 param_2); template<class... A> int m_FUN_10a12630(A...); void __thiscall m_FUN_10a12640(undefined4 param_2); template<class... A> int m_FUN_10a12640(A...); undefined4 * __thiscall m_FUN_10a126e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10a126e0(A...); undefined4 * __thiscall m_FUN_10a12800(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10a12800(A...); undefined4 * __thiscall m_FUN_10a12f00(undefined4 param_2); template<class... A> int m_FUN_10a12f00(A...); undefined4 * __thiscall m_FUN_10a13400(undefined4 param_2); template<class... A> int m_FUN_10a13400(A...); undefined4 * __thiscall m_FUN_10a13460(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a13460(A...); undefined4 * __thiscall m_FUN_10a13470(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a13470(A...); undefined4 * __thiscall m_FUN_10a13500(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a13500(A...); undefined4 * __thiscall m_FUN_10a13750(undefined4 param_2); template<class... A> int m_FUN_10a13750(A...); undefined4 * __thiscall m_FUN_10a138a0(undefined4 param_2); template<class... A> int m_FUN_10a138a0(A...); undefined4 * __thiscall m_FUN_10a139f0(undefined4 param_2); template<class... A> int m_FUN_10a139f0(A...); undefined4 * __thiscall m_FUN_10a13b50(undefined4 param_2); template<class... A> int m_FUN_10a13b50(A...); undefined4 * __thiscall m_FUN_10a13ca0(undefined4 param_2); template<class... A> int m_FUN_10a13ca0(A...); int __thiscall m_FUN_10a14990(int param_2); template<class... A> int m_FUN_10a14990(A...); bool __thiscall m_FUN_10a14b00(int *param_2); template<class... A> int m_FUN_10a14b00(A...); bool __thiscall m_FUN_10a14b20(int *param_2); template<class... A> int m_FUN_10a14b20(A...); void __thiscall m_FUN_10a15820(int param_2); template<class... A> int m_FUN_10a15820(A...); void __thiscall m_FUN_10a158a0(int *param_2); template<class... A> int m_FUN_10a158a0(A...); void __thiscall m_FUN_10a16210(undefined4 *param_2); template<class... A> int m_FUN_10a16210(A...); void __thiscall m_FUN_10a1e420(undefined1 param_2); template<class... A> int m_FUN_10a1e420(A...); void __thiscall m_FUN_10a1e430(undefined4 param_2); template<class... A> int m_FUN_10a1e430(A...); void __thiscall m_FUN_10a1e440(undefined4 param_2); template<class... A> int m_FUN_10a1e440(A...); void __thiscall m_FUN_10a1e4f0(undefined4 param_2); template<class... A> int m_FUN_10a1e4f0(A...); void __thiscall m_FUN_10a1e510(undefined4 *param_2); template<class... A> int m_FUN_10a1e510(A...); void __thiscall m_FUN_10a1e8b0(undefined4 *param_2); template<class... A> int m_FUN_10a1e8b0(A...); undefined4 * __thiscall m_FUN_10a1eac0(undefined4 param_2); template<class... A> int m_FUN_10a1eac0(A...); undefined4 * __thiscall m_FUN_10a1f740(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10a1f740(A...); undefined4 * __thiscall m_FUN_10a1fa40(undefined4 param_2); template<class... A> int m_FUN_10a1fa40(A...); undefined4 * __thiscall m_FUN_10a1fb90(undefined4 param_2); template<class... A> int m_FUN_10a1fb90(A...); undefined4 * __thiscall m_FUN_10a1fce0(undefined4 param_2); template<class... A> int m_FUN_10a1fce0(A...); undefined4 * __thiscall m_FUN_10a1fe40(undefined4 param_2); template<class... A> int m_FUN_10a1fe40(A...); undefined4 * __thiscall m_FUN_10a1ff90(undefined4 param_2); template<class... A> int m_FUN_10a1ff90(A...); undefined4 * __thiscall m_FUN_10a200e0(undefined4 param_2); template<class... A> int m_FUN_10a200e0(A...); undefined4 * __thiscall m_FUN_10a20230(undefined4 param_2); template<class... A> int m_FUN_10a20230(A...); undefined4 * __thiscall m_FUN_10a20380(undefined4 param_2); template<class... A> int m_FUN_10a20380(A...); undefined4 * __thiscall m_FUN_10a206f0(undefined4 param_2); template<class... A> int m_FUN_10a206f0(A...); undefined4 * __thiscall m_FUN_10a20840(undefined4 param_2); template<class... A> int m_FUN_10a20840(A...); undefined4 * __thiscall m_FUN_10a20ba0(undefined4 param_2); template<class... A> int m_FUN_10a20ba0(A...); undefined4 * __thiscall m_FUN_10a22490(undefined4 *param_2); template<class... A> int m_FUN_10a22490(A...); int * __thiscall m_FUN_10a224e0(int *param_2); template<class... A> int m_FUN_10a224e0(A...); int __thiscall m_FUN_10a22750(int param_2); template<class... A> int m_FUN_10a22750(A...); int __thiscall m_FUN_10a22770(int param_2); template<class... A> int m_FUN_10a22770(A...); void __thiscall m_FUN_10a237c0(uint param_2); template<class... A> int m_FUN_10a237c0(A...); void __thiscall m_FUN_10a239c0(undefined4 *param_2); template<class... A> int m_FUN_10a239c0(A...); void __thiscall m_FUN_10a23a00(undefined4 *param_2); template<class... A> int m_FUN_10a23a00(A...); undefined4 __thiscall m_FUN_10a25310(undefined4 param_2); template<class... A> int m_FUN_10a25310(A...); undefined4 __thiscall m_FUN_10a35f00(undefined4 param_2); template<class... A> int m_FUN_10a35f00(A...); undefined4 __thiscall m_FUN_10a3c6b0(undefined4 param_2); template<class... A> int m_FUN_10a3c6b0(A...); void __thiscall m_FUN_10a3f3b0(undefined4 *param_2); template<class... A> int m_FUN_10a3f3b0(A...); void __thiscall m_FUN_10a40750(undefined1 param_2); template<class... A> int m_FUN_10a40750(A...); void __thiscall m_FUN_10a40760(undefined4 *param_2); template<class... A> int m_FUN_10a40760(A...); undefined4 * __thiscall m_FUN_10a40820(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10a40820(A...); undefined4 * __thiscall m_FUN_10a40840(SCStr *param_2); template<class... A> int m_FUN_10a40840(A...); undefined4 * __thiscall m_FUN_10a40e00(undefined4 param_2); template<class... A> int m_FUN_10a40e00(A...); undefined4 * __thiscall m_FUN_10a410b0(undefined4 param_2); template<class... A> int m_FUN_10a410b0(A...); undefined4 * __thiscall m_FUN_10a41220(undefined4 param_2); template<class... A> int m_FUN_10a41220(A...); uint __thiscall m_FUN_10a41ca0(uint param_2); template<class... A> int m_FUN_10a41ca0(A...); void __thiscall m_FUN_10a41e50(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a41e50(A...); void __thiscall m_FUN_10a41e70(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10a41e70(A...); undefined4 * __thiscall m_FUN_10a44610(undefined4 param_2); template<class... A> int m_FUN_10a44610(A...); undefined4 * __thiscall m_FUN_10a44840(undefined4 param_2); template<class... A> int m_FUN_10a44840(A...); undefined4 * __thiscall m_FUN_10a44990(undefined4 param_2); template<class... A> int m_FUN_10a44990(A...); undefined4 * __thiscall m_FUN_10a48d80(undefined4 param_2); template<class... A> int m_FUN_10a48d80(A...); undefined4 * __thiscall m_FUN_10a48fb0(undefined4 param_2); template<class... A> int m_FUN_10a48fb0(A...); undefined4 * __thiscall m_FUN_10a49100(undefined4 param_2); template<class... A> int m_FUN_10a49100(A...); void __thiscall m_FUN_10a4c860(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a4c860(A...); void __thiscall m_FUN_10a4cae0(undefined4 *param_2); template<class... A> int m_FUN_10a4cae0(A...); void __thiscall m_FUN_10a4cb10(undefined4 *param_2); template<class... A> int m_FUN_10a4cb10(A...); void __thiscall m_FUN_10a4cb40(undefined4 *param_2); template<class... A> int m_FUN_10a4cb40(A...); void __thiscall m_FUN_10a4cb70(undefined4 *param_2); template<class... A> int m_FUN_10a4cb70(A...); void __thiscall m_FUN_10a4cba0(undefined4 *param_2); template<class... A> int m_FUN_10a4cba0(A...); void __thiscall m_FUN_10a4cbc0(undefined4 *param_2); template<class... A> int m_FUN_10a4cbc0(A...); void __thiscall m_FUN_10a4cbf0(undefined4 *param_2); template<class... A> int m_FUN_10a4cbf0(A...); void __thiscall m_FUN_10a4d310(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10a4d310(A...); void __thiscall m_FUN_10a4d330(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10a4d330(A...); void __thiscall m_FUN_10a4d6a0(void *param_2,int param_3); template<class... A> int m_FUN_10a4d6a0(A...); void __thiscall m_FUN_10a4d9c0(undefined4 *param_2); template<class... A> int m_FUN_10a4d9c0(A...); undefined4 * __thiscall m_FUN_10a4dc40(undefined4 param_2); template<class... A> int m_FUN_10a4dc40(A...); undefined4 * __thiscall m_FUN_10a4e8e0(undefined4 *param_2); template<class... A> int m_FUN_10a4e8e0(A...); undefined4 * __thiscall m_FUN_10a4e930(undefined4 *param_2); template<class... A> int m_FUN_10a4e930(A...); undefined4 * __thiscall m_FUN_10a4ecb0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10a4ecb0(A...); undefined4 * __thiscall m_FUN_10a4ecd0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10a4ecd0(A...); undefined4 * __thiscall m_FUN_10a4ecf0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a4ecf0(A...); undefined4 * __thiscall m_FUN_10a4ed00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a4ed00(A...); undefined4 * __thiscall m_FUN_10a4ed10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a4ed10(A...); undefined4 * __thiscall m_FUN_10a4ed20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a4ed20(A...); undefined4 * __thiscall m_FUN_10a4f440(undefined4 param_2); template<class... A> int m_FUN_10a4f440(A...); undefined4 * __thiscall m_FUN_10a4f590(undefined4 param_2); template<class... A> int m_FUN_10a4f590(A...); undefined4 * __thiscall m_FUN_10a4f750(undefined4 param_2); template<class... A> int m_FUN_10a4f750(A...); undefined4 * __thiscall m_FUN_10a4f900(undefined4 param_2); template<class... A> int m_FUN_10a4f900(A...); undefined4 * __thiscall m_FUN_10a4fa50(undefined4 param_2); template<class... A> int m_FUN_10a4fa50(A...); undefined4 * __thiscall m_FUN_10a4fba0(undefined4 param_2); template<class... A> int m_FUN_10a4fba0(A...); undefined4 * __thiscall m_FUN_10a4fcf0(undefined4 param_2); template<class... A> int m_FUN_10a4fcf0(A...); undefined4 * __thiscall m_FUN_10a4fe40(undefined4 param_2); template<class... A> int m_FUN_10a4fe40(A...); undefined4 * __thiscall m_FUN_10a4ff90(undefined4 param_2); template<class... A> int m_FUN_10a4ff90(A...); undefined4 * __thiscall m_FUN_10a50120(undefined4 param_2); template<class... A> int m_FUN_10a50120(A...); int * __thiscall m_FUN_10a51ed0(int *param_2); template<class... A> int m_FUN_10a51ed0(A...); int * __thiscall m_FUN_10a51fa0(int *param_2); template<class... A> int m_FUN_10a51fa0(A...); int * __thiscall m_FUN_10a52070(int *param_2); template<class... A> int m_FUN_10a52070(A...); int * __thiscall m_FUN_10a52120(int *param_2); template<class... A> int m_FUN_10a52120(A...); bool __thiscall m_FUN_10a52240(int *param_2); template<class... A> int m_FUN_10a52240(A...); bool __thiscall m_FUN_10a52260(int *param_2); template<class... A> int m_FUN_10a52260(A...); bool __thiscall m_FUN_10a52280(int *param_2); template<class... A> int m_FUN_10a52280(A...); bool __thiscall m_FUN_10a522a0(int *param_2); template<class... A> int m_FUN_10a522a0(A...); int __thiscall m_FUN_10a522c0(int param_2); template<class... A> int m_FUN_10a522c0(A...); int __thiscall m_FUN_10a522d0(int param_2); template<class... A> int m_FUN_10a522d0(A...); void __thiscall m_FUN_10a52370(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a52370(A...); void __thiscall m_FUN_10a523a0(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a523a0(A...); void __thiscall m_FUN_10a53960(int param_2); template<class... A> int m_FUN_10a53960(A...); void __thiscall m_FUN_10a53990(int param_2); template<class... A> int m_FUN_10a53990(A...); void __thiscall m_FUN_10a539c0(int param_2); template<class... A> int m_FUN_10a539c0(A...); uint __thiscall m_FUN_10a539f0(uint param_2); template<class... A> int m_FUN_10a539f0(A...); uint __thiscall m_FUN_10a53a30(uint param_2); template<class... A> int m_FUN_10a53a30(A...); uint __thiscall m_FUN_10a53a70(uint param_2); template<class... A> int m_FUN_10a53a70(A...); void __thiscall m_FUN_10a53c40(uint param_2); template<class... A> int m_FUN_10a53c40(A...); void __thiscall m_FUN_10a53d30(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a53d30(A...); void __thiscall m_FUN_10a54040(undefined4 *param_2); template<class... A> int m_FUN_10a54040(A...); void __thiscall m_FUN_10a54390(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a54390(A...); void __thiscall m_FUN_10a543b0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a543b0(A...); void __thiscall m_FUN_10a54400(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10a54400(A...); void __thiscall m_FUN_10a54420(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10a54420(A...); void __thiscall m_FUN_10a548a0(undefined4 *param_2); template<class... A> int m_FUN_10a548a0(A...); void __thiscall m_FUN_10a548b0(undefined4 *param_2); template<class... A> int m_FUN_10a548b0(A...); void __thiscall m_FUN_10a560e0(undefined4 *param_2); template<class... A> int m_FUN_10a560e0(A...); void __thiscall m_FUN_10a560f0(undefined4 *param_2); template<class... A> int m_FUN_10a560f0(A...); undefined4 __thiscall m_FUN_10a5c890(undefined4 param_2); template<class... A> int m_FUN_10a5c890(A...); int * __thiscall m_FUN_10a5c8b0(int *param_2); template<class... A> int m_FUN_10a5c8b0(A...); SCStr * __thiscall m_FUN_10a5d770(SCStr *param_2); template<class... A> int m_FUN_10a5d770(A...); void __thiscall m_FUN_10a642a0(undefined4 *param_2); template<class... A> int m_FUN_10a642a0(A...); void __thiscall m_FUN_10a646d0(SCStr *param_2); template<class... A> int m_FUN_10a646d0(A...); void __thiscall m_FUN_10a64860(SCStr *param_2); template<class... A> int m_FUN_10a64860(A...); void __thiscall m_FUN_10a64890(undefined1 param_2); template<class... A> int m_FUN_10a64890(A...); undefined4 * __thiscall m_FUN_10a64990(undefined4 param_2); template<class... A> int m_FUN_10a64990(A...); undefined4 * __thiscall m_FUN_10a65520(undefined4 param_2); template<class... A> int m_FUN_10a65520(A...); undefined4 * __thiscall m_FUN_10a65670(undefined4 param_2); template<class... A> int m_FUN_10a65670(A...); undefined4 * __thiscall m_FUN_10a657c0(undefined4 param_2); template<class... A> int m_FUN_10a657c0(A...); undefined4 * __thiscall m_FUN_10a65910(undefined4 param_2); template<class... A> int m_FUN_10a65910(A...); undefined4 * __thiscall m_FUN_10a65a60(undefined4 param_2); template<class... A> int m_FUN_10a65a60(A...); undefined4 * __thiscall m_FUN_10a65bb0(undefined4 param_2); template<class... A> int m_FUN_10a65bb0(A...); undefined4 * __thiscall m_FUN_10a65d00(undefined4 param_2); template<class... A> int m_FUN_10a65d00(A...); undefined4 * __thiscall m_FUN_10a65e50(undefined4 param_2); template<class... A> int m_FUN_10a65e50(A...); undefined4 * __thiscall m_FUN_10a65fa0(undefined4 param_2); template<class... A> int m_FUN_10a65fa0(A...); undefined4 * __thiscall m_FUN_10a660f0(undefined4 param_2); template<class... A> int m_FUN_10a660f0(A...); undefined4 * __thiscall m_FUN_10a66240(undefined4 param_2); template<class... A> int m_FUN_10a66240(A...); undefined4 * __thiscall m_FUN_10a66390(undefined4 param_2); template<class... A> int m_FUN_10a66390(A...); undefined4 * __thiscall m_FUN_10a664e0(undefined4 param_2); template<class... A> int m_FUN_10a664e0(A...); undefined4 * __thiscall m_FUN_10a71200(undefined4 param_2); template<class... A> int m_FUN_10a71200(A...); undefined4 * __thiscall m_FUN_10a71520(undefined4 param_2); template<class... A> int m_FUN_10a71520(A...); undefined4 * __thiscall m_FUN_10a71670(undefined4 param_2); template<class... A> int m_FUN_10a71670(A...); undefined4 * __thiscall m_FUN_10a717c0(undefined4 param_2); template<class... A> int m_FUN_10a717c0(A...); undefined4 * __thiscall m_FUN_10a71910(undefined4 param_2); template<class... A> int m_FUN_10a71910(A...); undefined4 * __thiscall m_FUN_10a74300(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10a74300(A...); undefined4 * __thiscall m_FUN_10a74470(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10a74470(A...); int * __thiscall m_FUN_10a74490(int *param_2); template<class... A> int m_FUN_10a74490(A...); undefined4 * __thiscall m_FUN_10a75480(undefined4 param_2); template<class... A> int m_FUN_10a75480(A...); undefined4 * __thiscall m_FUN_10a757a0(undefined4 *param_2); template<class... A> int m_FUN_10a757a0(A...); undefined4 * __thiscall m_FUN_10a75810(undefined4 *param_2); template<class... A> int m_FUN_10a75810(A...); undefined4 * __thiscall m_FUN_10a75880(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10a75880(A...); undefined4 * __thiscall m_FUN_10a75970(undefined4 param_2); template<class... A> int m_FUN_10a75970(A...); undefined4 * __thiscall m_FUN_10a75af0(undefined4 param_2); template<class... A> int m_FUN_10a75af0(A...); undefined4 * __thiscall m_FUN_10a75c40(undefined4 param_2); template<class... A> int m_FUN_10a75c40(A...); int * __thiscall m_FUN_10a770b0(int *param_2); template<class... A> int m_FUN_10a770b0(A...); int * __thiscall m_FUN_10a77110(int *param_2); template<class... A> int m_FUN_10a77110(A...); int __thiscall m_FUN_10a77170(int param_2); template<class... A> int m_FUN_10a77170(A...); uint __thiscall m_FUN_10a777f0(uint param_2); template<class... A> int m_FUN_10a777f0(A...); int __thiscall m_FUN_10a78830(int param_2); template<class... A> int m_FUN_10a78830(A...); SCStr * __thiscall m_FUN_10a78850(SCStr *param_2); template<class... A> int m_FUN_10a78850(A...); SCStr * __thiscall m_FUN_10a79e80(SCStr *param_2); template<class... A> int m_FUN_10a79e80(A...); undefined4 * __thiscall m_FUN_10a7a900(undefined4 *param_2); template<class... A> int m_FUN_10a7a900(A...); SCStr * __thiscall m_FUN_10a7a930(SCStr *param_2); template<class... A> int m_FUN_10a7a930(A...); undefined4 __thiscall m_FUN_10a7a950(undefined4 param_2); template<class... A> int m_FUN_10a7a950(A...); SCStr * __thiscall m_FUN_10a7bfb0(SCStr *param_2); template<class... A> int m_FUN_10a7bfb0(A...); SCStr * __thiscall m_FUN_10a7c020(SCStr *param_2); template<class... A> int m_FUN_10a7c020(A...); void __thiscall m_FUN_10a7ce70(SCStr *param_2); template<class... A> int m_FUN_10a7ce70(A...); undefined4 * __thiscall m_FUN_10a7cf30(undefined4 param_2); template<class... A> int m_FUN_10a7cf30(A...); undefined4 * __thiscall m_FUN_10a7d250(undefined4 param_2); template<class... A> int m_FUN_10a7d250(A...); undefined4 * __thiscall m_FUN_10a7d3a0(undefined4 param_2); template<class... A> int m_FUN_10a7d3a0(A...); undefined4 * __thiscall m_FUN_10a7d4f0(undefined4 param_2); template<class... A> int m_FUN_10a7d4f0(A...); undefined4 * __thiscall m_FUN_10a80420(undefined4 param_2); template<class... A> int m_FUN_10a80420(A...); undefined4 * __thiscall m_FUN_10a80650(undefined4 param_2); template<class... A> int m_FUN_10a80650(A...); undefined4 * __thiscall m_FUN_10a809b0(undefined4 param_2); template<class... A> int m_FUN_10a809b0(A...); undefined4 * __thiscall m_FUN_10a83ba0(undefined4 param_2); template<class... A> int m_FUN_10a83ba0(A...); undefined4 * __thiscall m_FUN_10a83ec0(undefined4 param_2); template<class... A> int m_FUN_10a83ec0(A...); undefined4 * __thiscall m_FUN_10a84010(undefined4 param_2); template<class... A> int m_FUN_10a84010(A...); undefined4 * __thiscall m_FUN_10a84160(undefined4 param_2); template<class... A> int m_FUN_10a84160(A...); undefined4 * __thiscall m_FUN_10a842b0(undefined4 param_2); template<class... A> int m_FUN_10a842b0(A...); undefined4 * __thiscall m_FUN_10a88a60(undefined4 *param_2); template<class... A> int m_FUN_10a88a60(A...); int * __thiscall m_FUN_10a88b20(int *param_2,undefined4 *param_3); template<class... A> int m_FUN_10a88b20(A...); undefined4 * __thiscall m_FUN_10a88c90(undefined4 param_2); template<class... A> int m_FUN_10a88c90(A...); undefined4 * __thiscall m_FUN_10a890a0(undefined4 *param_2); template<class... A> int m_FUN_10a890a0(A...); undefined4 * __thiscall m_FUN_10a890f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10a890f0(A...); undefined4 * __thiscall m_FUN_10a89100(undefined4 param_2); template<class... A> int m_FUN_10a89100(A...); undefined4 * __thiscall m_FUN_10a89120(undefined4 param_2); template<class... A> int m_FUN_10a89120(A...); undefined4 * __thiscall m_FUN_10a89270(undefined4 param_2); template<class... A> int m_FUN_10a89270(A...); undefined4 * __thiscall m_FUN_10a893c0(undefined4 param_2); template<class... A> int m_FUN_10a893c0(A...); undefined4 * __thiscall m_FUN_10a89510(undefined4 param_2); template<class... A> int m_FUN_10a89510(A...); undefined4 * __thiscall m_FUN_10a89660(undefined4 param_2); template<class... A> int m_FUN_10a89660(A...); int * __thiscall m_FUN_10a89e30(int *param_2); template<class... A> int m_FUN_10a89e30(A...); bool __thiscall m_FUN_10a89e90(int *param_2); template<class... A> int m_FUN_10a89e90(A...); bool __thiscall m_FUN_10a89eb0(int *param_2); template<class... A> int m_FUN_10a89eb0(A...); void __thiscall m_FUN_10a8a9b0(undefined4 *param_2); template<class... A> int m_FUN_10a8a9b0(A...); void __thiscall m_FUN_10a8a9c0(int *param_2,undefined4 *param_3); template<class... A> int m_FUN_10a8a9c0(A...); undefined4 * __thiscall m_FUN_10a8e1d0(undefined4 *param_2); template<class... A> int m_FUN_10a8e1d0(A...); SCStr * __thiscall m_FUN_10a90600(SCStr *param_2); template<class... A> int m_FUN_10a90600(A...); SCStr * __thiscall m_FUN_10a90620(SCStr *param_2); template<class... A> int m_FUN_10a90620(A...); undefined4 * __thiscall m_FUN_10a90fc0(undefined4 param_2); template<class... A> int m_FUN_10a90fc0(A...); undefined4 * __thiscall m_FUN_10a916a0(undefined4 param_2); template<class... A> int m_FUN_10a916a0(A...); undefined4 * __thiscall m_FUN_10a917f0(undefined4 param_2); template<class... A> int m_FUN_10a917f0(A...); undefined4 * __thiscall m_FUN_10a91940(undefined4 param_2); template<class... A> int m_FUN_10a91940(A...); undefined4 * __thiscall m_FUN_10a91a90(undefined4 param_2); template<class... A> int m_FUN_10a91a90(A...); undefined4 * __thiscall m_FUN_10a91bf0(undefined4 param_2); template<class... A> int m_FUN_10a91bf0(A...); undefined4 * __thiscall m_FUN_10a91f00(undefined4 param_2); template<class... A> int m_FUN_10a91f00(A...); undefined4 * __thiscall m_FUN_10a92050(undefined4 param_2); template<class... A> int m_FUN_10a92050(A...); undefined4 * __thiscall m_FUN_10a9a270(undefined4 param_2); template<class... A> int m_FUN_10a9a270(A...); undefined4 * __thiscall m_FUN_10a9a8a0(undefined4 param_2); template<class... A> int m_FUN_10a9a8a0(A...); undefined4 * __thiscall m_FUN_10a9a9f0(undefined4 param_2); template<class... A> int m_FUN_10a9a9f0(A...); undefined4 * __thiscall m_FUN_10a9ab40(undefined4 param_2); template<class... A> int m_FUN_10a9ab40(A...); undefined4 * __thiscall m_FUN_10a9ac90(undefined4 param_2); template<class... A> int m_FUN_10a9ac90(A...); undefined4 * __thiscall m_FUN_10a9ae50(undefined4 param_2); template<class... A> int m_FUN_10a9ae50(A...); undefined4 * __thiscall m_FUN_10a9afa0(undefined4 param_2); template<class... A> int m_FUN_10a9afa0(A...); undefined4 * __thiscall m_FUN_10a9b0f0(undefined4 param_2); template<class... A> int m_FUN_10a9b0f0(A...); bool __thiscall m_FUN_10a9bbf0(int *param_2); template<class... A> int m_FUN_10a9bbf0(A...); SCStr * __thiscall m_FUN_10a9faf0(SCStr *param_2); template<class... A> int m_FUN_10a9faf0(A...); int * __thiscall m_FUN_10a9fb10(int *param_2); template<class... A> int m_FUN_10a9fb10(A...); SCStr * __thiscall m_FUN_10a9fdd0(SCStr *param_2); template<class... A> int m_FUN_10a9fdd0(A...); void __thiscall m_FUN_10aa2710(undefined4 param_2); template<class... A> int m_FUN_10aa2710(A...); void __thiscall m_FUN_10aa2720(SCStr *param_2); template<class... A> int m_FUN_10aa2720(A...); void __thiscall m_FUN_10aa27d0(SCStr *param_2); template<class... A> int m_FUN_10aa27d0(A...); undefined4 * __thiscall m_FUN_10aa2a70(undefined4 param_2); template<class... A> int m_FUN_10aa2a70(A...); undefined4 * __thiscall m_FUN_10aa39c0(undefined4 param_2); template<class... A> int m_FUN_10aa39c0(A...); undefined4 * __thiscall m_FUN_10aa3b60(undefined4 param_2); template<class... A> int m_FUN_10aa3b60(A...); undefined4 * __thiscall m_FUN_10aa3cb0(undefined4 param_2); template<class... A> int m_FUN_10aa3cb0(A...); undefined4 * __thiscall m_FUN_10aa3e00(undefined4 param_2); template<class... A> int m_FUN_10aa3e00(A...); undefined4 * __thiscall m_FUN_10aa3f50(undefined4 param_2); template<class... A> int m_FUN_10aa3f50(A...); undefined4 * __thiscall m_FUN_10aa40a0(undefined4 param_2); template<class... A> int m_FUN_10aa40a0(A...); undefined4 * __thiscall m_FUN_10aa41f0(undefined4 param_2); template<class... A> int m_FUN_10aa41f0(A...); undefined4 * __thiscall m_FUN_10aa4340(undefined4 param_2); template<class... A> int m_FUN_10aa4340(A...); undefined4 * __thiscall m_FUN_10aa4490(undefined4 param_2); template<class... A> int m_FUN_10aa4490(A...); undefined4 * __thiscall m_FUN_10aa45e0(undefined4 param_2); template<class... A> int m_FUN_10aa45e0(A...); undefined4 * __thiscall m_FUN_10aa4740(undefined4 param_2); template<class... A> int m_FUN_10aa4740(A...); undefined4 * __thiscall m_FUN_10aa4890(undefined4 param_2); template<class... A> int m_FUN_10aa4890(A...); undefined4 * __thiscall m_FUN_10aa49e0(undefined4 param_2); template<class... A> int m_FUN_10aa49e0(A...); undefined4 * __thiscall m_FUN_10aa4b30(undefined4 param_2); template<class... A> int m_FUN_10aa4b30(A...); undefined4 * __thiscall m_FUN_10aa4c80(undefined4 param_2); template<class... A> int m_FUN_10aa4c80(A...); undefined4 * __thiscall m_FUN_10aa4dd0(undefined4 param_2); template<class... A> int m_FUN_10aa4dd0(A...); undefined4 * __thiscall m_FUN_10aa4f20(undefined4 param_2); template<class... A> int m_FUN_10aa4f20(A...); undefined4 * __thiscall m_FUN_10ab2ef0(undefined4 param_2); template<class... A> int m_FUN_10ab2ef0(A...); undefined4 * __thiscall m_FUN_10ab3030(undefined4 param_2); template<class... A> int m_FUN_10ab3030(A...); undefined4 * __thiscall m_FUN_10ab3180(undefined4 param_2); template<class... A> int m_FUN_10ab3180(A...); undefined4 * __thiscall m_FUN_10ab3f70(undefined4 param_2); template<class... A> int m_FUN_10ab3f70(A...); undefined4 * __thiscall m_FUN_10ab41a0(undefined4 param_2); template<class... A> int m_FUN_10ab41a0(A...); undefined4 * __thiscall m_FUN_10ab42f0(undefined4 param_2); template<class... A> int m_FUN_10ab42f0(A...); undefined4 * __thiscall m_FUN_10ab6090(undefined4 param_2); template<class... A> int m_FUN_10ab6090(A...); undefined4 * __thiscall m_FUN_10ab6600(undefined4 param_2); template<class... A> int m_FUN_10ab6600(A...); undefined4 * __thiscall m_FUN_10ab8900(undefined4 param_2); template<class... A> int m_FUN_10ab8900(A...); undefined4 * __thiscall m_FUN_10ab8a50(undefined4 param_2); template<class... A> int m_FUN_10ab8a50(A...); undefined4 * __thiscall m_FUN_10ab8ba0(undefined4 param_2); template<class... A> int m_FUN_10ab8ba0(A...); undefined4 * __thiscall m_FUN_10ab8cf0(undefined4 param_2); template<class... A> int m_FUN_10ab8cf0(A...); undefined4 * __thiscall m_FUN_10ab8e40(undefined4 param_2); template<class... A> int m_FUN_10ab8e40(A...); undefined4 * __thiscall m_FUN_10ab8f90(undefined4 param_2); template<class... A> int m_FUN_10ab8f90(A...); undefined4 * __thiscall m_FUN_10ab90e0(undefined4 param_2); template<class... A> int m_FUN_10ab90e0(A...); undefined4 * __thiscall m_FUN_10ab9230(undefined4 param_2); template<class... A> int m_FUN_10ab9230(A...); undefined4 * __thiscall m_FUN_10ab9380(undefined4 param_2); template<class... A> int m_FUN_10ab9380(A...); undefined4 * __thiscall m_FUN_10ab94d0(undefined4 param_2); template<class... A> int m_FUN_10ab94d0(A...); undefined4 * __thiscall m_FUN_10ab9620(undefined4 param_2); template<class... A> int m_FUN_10ab9620(A...); undefined4 * __thiscall m_FUN_10ab9770(undefined4 param_2); template<class... A> int m_FUN_10ab9770(A...); undefined4 * __thiscall m_FUN_10ab98c0(undefined4 param_2); template<class... A> int m_FUN_10ab98c0(A...); undefined4 * __thiscall m_FUN_10ab9a10(undefined4 param_2); template<class... A> int m_FUN_10ab9a10(A...); undefined4 * __thiscall m_FUN_10ab9b60(undefined4 param_2); template<class... A> int m_FUN_10ab9b60(A...); undefined4 * __thiscall m_FUN_10ab9cb0(undefined4 param_2); template<class... A> int m_FUN_10ab9cb0(A...); undefined4 * __thiscall m_FUN_10ab9e00(undefined4 param_2); template<class... A> int m_FUN_10ab9e00(A...); undefined4 * __thiscall m_FUN_10ab9f50(undefined4 param_2); template<class... A> int m_FUN_10ab9f50(A...); undefined4 * __thiscall m_FUN_10aba0a0(undefined4 param_2); template<class... A> int m_FUN_10aba0a0(A...); undefined4 * __thiscall m_FUN_10aba1f0(undefined4 param_2); template<class... A> int m_FUN_10aba1f0(A...); undefined4 * __thiscall m_FUN_10aba340(undefined4 param_2); template<class... A> int m_FUN_10aba340(A...); undefined4 * __thiscall m_FUN_10aba490(undefined4 param_2); template<class... A> int m_FUN_10aba490(A...); undefined4 * __thiscall m_FUN_10aba5e0(undefined4 param_2); template<class... A> int m_FUN_10aba5e0(A...); undefined4 * __thiscall m_FUN_10aba730(undefined4 param_2); template<class... A> int m_FUN_10aba730(A...); undefined4 * __thiscall m_FUN_10aba880(undefined4 param_2); template<class... A> int m_FUN_10aba880(A...); undefined4 * __thiscall m_FUN_10aba9d0(undefined4 param_2); template<class... A> int m_FUN_10aba9d0(A...); undefined4 * __thiscall m_FUN_10abab20(undefined4 param_2); template<class... A> int m_FUN_10abab20(A...); undefined4 * __thiscall m_FUN_10abac70(undefined4 param_2); template<class... A> int m_FUN_10abac70(A...); undefined4 * __thiscall m_FUN_10abadc0(undefined4 param_2); template<class... A> int m_FUN_10abadc0(A...); undefined4 * __thiscall m_FUN_10abaf10(undefined4 param_2); template<class... A> int m_FUN_10abaf10(A...); undefined4 * __thiscall m_FUN_10abb060(undefined4 param_2); template<class... A> int m_FUN_10abb060(A...); undefined4 * __thiscall m_FUN_10abb1b0(undefined4 param_2); template<class... A> int m_FUN_10abb1b0(A...); undefined4 * __thiscall m_FUN_10abb300(undefined4 param_2); template<class... A> int m_FUN_10abb300(A...); undefined4 * __thiscall m_FUN_10abb450(undefined4 param_2); template<class... A> int m_FUN_10abb450(A...); undefined4 * __thiscall m_FUN_10abb5a0(undefined4 param_2); template<class... A> int m_FUN_10abb5a0(A...); undefined4 * __thiscall m_FUN_10abb6f0(undefined4 param_2); template<class... A> int m_FUN_10abb6f0(A...); undefined4 * __thiscall m_FUN_10abb840(undefined4 param_2); template<class... A> int m_FUN_10abb840(A...); };

extern int FUN_109f7710(...);
extern int FUN_109f7720(...);
extern int FUN_109f7740(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_103316a0(...);
extern int thunk_FUN_10352990(...);
extern int thunk_FUN_1036e270(...);
template<class... A> int __stdcall thunk_FUN_103cf4f0(A...);
extern int thunk_FUN_10405e20(...);
extern int thunk_FUN_10475400(...);
extern int thunk_FUN_105a05f0(...);
extern int thunk_FUN_105a0660(...);
template<class... A> int __stdcall thunk_FUN_1064d7a0(A...);
extern int thunk_FUN_106d91c0(...);
template<class... A> int __stdcall thunk_FUN_106da030(A...);
extern int thunk_FUN_106da540(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106da820(...);
extern int thunk_FUN_106dbf00(...);
template<class... A> int __stdcall thunk_FUN_106dd300(A...);
extern int thunk_FUN_10a1e530(...);
template<class... A> int __stdcall thunk_FUN_10a1f920(A...);
template<class... A> int __stdcall thunk_FUN_10a21a10(A...);
template<class... A> int __stdcall thunk_FUN_10a4cc20(A...);
extern int thunk_FUN_10a4d3b0(...);
extern int thunk_FUN_10a4d450(...);
extern int thunk_FUN_10a4edc0(...);
template<class... A> int __stdcall thunk_FUN_10a54480(A...);
extern int thunk_FUN_10a54750(...);
extern int thunk_FUN_10a547c0(...);
extern int thunk_FUN_10a54830(...);
extern int thunk_FUN_10a76ed0(...);
template<class... A> int __stdcall thunk_FUN_10bcef80(A...);
extern int thunk_FUN_10bd9ba0(...);
extern int thunk_FUN_10be0520(...);
extern int thunk_FUN_10eb4020(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
template<class... A> int __stdcall thunk_FUN_10eb4cc0(A...);
template<class... A> int __stdcall thunk_FUN_10eb4d80(A...);
extern int thunk_FUN_10eb4e80(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_11262400(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_11d330dc;
extern int DAT_12119c10;
extern int DAT_12126b84;
extern int DAT_121a4098;
extern int DAT_121a409c;
extern int DAT_121a40a0;
extern int DAT_121a40a4;
extern int DAT_121a40a8;
extern int DAT_121a40ac;
extern int DAT_121a40f4;
extern int DAT_121a40f8;
extern int DAT_121a40fc;
extern int DAT_121a4100;
extern int DAT_121a4104;
extern int DAT_121a4108;
extern int DAT_121a410c;
extern int DAT_121a4110;
extern int DAT_121a4114;
extern int DAT_121a4164;
extern int DAT_121a4168;
extern int DAT_121a416c;
extern int DAT_121a4170;
extern int DAT_121a4174;
extern int DAT_121a41c0;
extern int DAT_121a41c4;
extern int DAT_121a41c8;
extern int DAT_121a41cc;
extern int DAT_121a41d0;
extern int DAT_121a41d4;
extern int DAT_121a41d8;
extern int DAT_121a41dc;
extern int DAT_121a41e0;
extern int DAT_121a41e4;
extern int DAT_121a41e8;
extern int DAT_121a41ec;
extern int DAT_121a4238;
extern int DAT_121a423c;
extern int DAT_121a4240;
extern int DAT_121a4244;
extern int DAT_121a4290;
extern int DAT_121a4294;
extern int DAT_121a4298;
extern int DAT_121a429c;
extern int DAT_121a42e4;
extern int DAT_121a42e8;
extern int DAT_121a42ec;
extern int DAT_121a42f0;
extern int DAT_121a42f4;
extern int DAT_121a42f8;
extern int DAT_121a4344;
extern int DAT_121a4348;
extern int DAT_121a434c;
extern int DAT_121a4350;
extern int DAT_121a4354;
extern int DAT_121a4358;
extern int DAT_121a435c;
extern int DAT_121a4360;
extern int DAT_121a4364;
extern int DAT_121a4368;
extern int DAT_121a436c;
extern int DAT_121a4370;
extern int DAT_121a4374;
extern int DAT_121a4378;
extern int DAT_121a43c8;
extern int DAT_121a43cc;
extern int DAT_121a43d0;
extern int DAT_121a4414;
extern int DAT_121a4418;
extern int DAT_121a441c;
extern int DAT_121a4468;
extern int DAT_121a446c;
extern int DAT_121a4470;
extern int DAT_121a44b4;
extern int DAT_121a44b8;
extern int DAT_121a44bc;
extern int DAT_121a44c0;
extern int DAT_121a44c4;
extern int DAT_121a44c8;
extern int DAT_121a44cc;
extern int DAT_121a44d0;
extern int DAT_121a44d4;
extern int DAT_121a44d8;
extern int DAT_121a44dc;
extern int DAT_121a44e0;
extern int DAT_121a44e4;
extern int DAT_121a44e8;
extern int DAT_121a453c;
extern int DAT_121a4540;
extern int DAT_121a4544;
extern int DAT_121a4548;
extern int DAT_121a454c;
extern int DAT_121a4550;
extern int DAT_121a4554;
extern int DAT_121a4558;
extern int DAT_121a455c;
extern int DAT_121a4560;
extern int DAT_121a4564;
extern int DAT_121a4568;
extern int DAT_121a456c;
extern int DAT_121a45b8;
extern int DAT_121a45bc;
extern int DAT_121a45c0;
extern int DAT_121a45c4;
extern int DAT_121a45dc;
extern int DAT_121a45e0;
extern int DAT_121a45e4;
extern int DAT_121a45e8;
extern int DAT_121a4664;
extern int DAT_121a4668;
extern int DAT_121a466c;
extern int DAT_121a4670;
extern int DAT_121a4688;
extern int DAT_121a468c;
extern int DAT_121a4690;
extern int DAT_121a46d4;
extern int DAT_121a46d8;
extern int DAT_121a46dc;
extern int DAT_121a46e0;
extern int DAT_121a46f8;
extern int DAT_121a46fc;
extern int DAT_121a4700;
extern int DAT_121a4704;
extern int DAT_121a4708;
extern int DAT_121a4754;
extern int DAT_121a4758;
extern int DAT_121a475c;
extern int DAT_121a4760;
extern int DAT_121a4764;
extern int DAT_121a4768;
extern int DAT_121a476c;
extern int DAT_121a4770;
extern int DAT_121a47c0;
extern int DAT_121a47c4;
extern int DAT_121a47c8;
extern int DAT_121a47cc;
extern int DAT_121a47d0;
extern int DAT_121a47d4;
extern int DAT_121a47d8;
extern int DAT_121a4824;
extern int DAT_121a4828;
extern int DAT_121a482c;
extern int DAT_121a4830;
extern int DAT_121a4834;
extern int DAT_121a4838;
extern int DAT_121a483c;
extern int DAT_121a4840;
extern int DAT_121a4844;
extern int DAT_121a4848;
extern int DAT_121a484c;
extern int DAT_121a4850;
extern int DAT_121a4854;
extern int DAT_121a4858;
extern int DAT_121a485c;
extern int DAT_121a4860;
extern int DAT_121a4864;
extern int DAT_121a48b4;
extern int DAT_121a48b8;
extern int DAT_121a48cc;
extern int DAT_121a48d0;
extern int DAT_121a48d4;
extern int DAT_121a48f4;
extern int DAT_121a490c;
extern int DAT_121a4910;
extern int DAT_121a4914;
extern int DAT_121a4918;
extern int DAT_121a491c;
extern int DAT_121a4920;
extern int DAT_121a4924;
extern int DAT_121a4928;
extern int DAT_121a492c;
extern int DAT_121a4930;
extern int DAT_121a4934;
extern int DAT_121a4938;
extern int DAT_121a493c;
extern int DAT_121a4940;
extern int DAT_121a4944;
extern int DAT_121a4948;
extern int DAT_121a494c;
extern int DAT_121a4950;
extern int DAT_121a4954;
extern int DAT_121a4958;
extern int DAT_121a495c;
extern int DAT_121a4960;
extern int DAT_121a4964;
extern int DAT_121a4968;
extern int DAT_121a496c;
extern int DAT_121a4970;
extern int DAT_121a4974;
extern int DAT_121a4978;
extern int DAT_121a497c;
extern int DAT_121a4980;
extern int DAT_121a4984;
extern int DAT_121a4988;
extern int DAT_121a498c;
extern int DAT_121a4990;
extern int DAT_121a4994;
extern int DAT_121a4998;
extern int DAT_121a499c;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RDateTime;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpHTCCommitLearnedIRCodesAIOOp;
extern int ghidra_vftable_RUpnpHTCIdentifyIRRemoteAIOOp;
extern int ghidra_vftable_RUpnpHTCIsRemoteConfiguredAIOOp;
extern int ghidra_vftable_RUpnpHTCLearnIRCodeAIOOp;
extern int ghidra_vftable_RZPUpdateProgressCB;
extern int ghidra_vftable_SCAccessibilityTestButtonDefaultPage;
extern int ghidra_vftable_SCAccessibilityTestButtonWithTermationVOTextPage;
extern int ghidra_vftable_SCAccessibilityTestButtonWithVOTextOverridePage;
extern int ghidra_vftable_SCAccessibilityTestFlareDefaultPage;
extern int ghidra_vftable_SCAccessibilityTestFlareWithVODisabledPage;
extern int ghidra_vftable_SCAccessibilityTestFlareWithVOTextOverridePage;
extern int ghidra_vftable_SCAccessibilityTestImageDefaultPage;
extern int ghidra_vftable_SCAccessibilityTestImageWithVOTextPage;
extern int ghidra_vftable_SCAccessibilityTestSelectionPage;
extern int ghidra_vftable_SCAccessibilityTestTextDefaultPage;
extern int ghidra_vftable_SCAccessibilityTestTextWithVODisabledPage;
extern int ghidra_vftable_SCAccessibilityTestTextWithVOTextOverridePage;
extern int ghidra_vftable_SCAccessibilityTestWizard;
extern int ghidra_vftable_SCAccountSecureTransferBeginSystemTransferErrorPage;
extern int ghidra_vftable_SCAccountSecureTransferBeginSystemTransferPage;
extern int ghidra_vftable_SCAccountSecureTransferButtonPressAuthPage;
extern int ghidra_vftable_SCAccountSecureTransferCompletePage;
extern int ghidra_vftable_SCAccountSecureTransferIncompletePage;
extern int ghidra_vftable_SCAccountSecureTransferIntroPage;
extern int ghidra_vftable_SCAccountSecureTransferNetworkErrorPage;
extern int ghidra_vftable_SCAccountSecureTransferNewAccountReadyPage;
extern int ghidra_vftable_SCAccountSecureTransferPrepareSystemPage;
extern int ghidra_vftable_SCAccountSecureTransferProductSelectionPage;
extern int ghidra_vftable_SCAnimationErrorPage;
extern int ghidra_vftable_SCAnimationIntroPage;
extern int ghidra_vftable_SCAnimationSuccessPage;
extern int ghidra_vftable_SCAnimationWizard;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCAutoApConnectTestConnectPage;
extern int ghidra_vftable_SCAutoApConnectTestIntroPage;
extern int ghidra_vftable_SCAutoApConnectTestProductSelectionPage;
extern int ghidra_vftable_SCBasicAPage;
extern int ghidra_vftable_SCBasicBPage;
extern int ghidra_vftable_SCBasicCPage;
extern int ghidra_vftable_SCChirpTestErrorPage;
extern int ghidra_vftable_SCChirpTestWizard;
extern int ghidra_vftable_SCCopyTestIntroPage;
extern int ghidra_vftable_SCCopyTestRawStringPage;
extern int ghidra_vftable_SCCopyTestResourceStringPage;
extern int ghidra_vftable_SCCopyTestWizard;
extern int ghidra_vftable_SCDiscoveryAllPage;
extern int ghidra_vftable_SCDiscoveryApFailPage;
extern int ghidra_vftable_SCDiscoveryApFoundPage;
extern int ghidra_vftable_SCDiscoveryApScanPage;
extern int ghidra_vftable_SCDiscoveryBTOnlyPage;
extern int ghidra_vftable_SCDiscoveryHistoryCollectionPage;
extern int ghidra_vftable_SCDiscoveryHistoryDeviceListPage;
extern int ghidra_vftable_SCDiscoveryHistoryDeviceSummaryPage;
extern int ghidra_vftable_SCDiscoveryHistoryHouseholdListPage;
extern int ghidra_vftable_SCDiscoveryHistoryWizard;
extern int ghidra_vftable_SCDiscoverySplashPage;
extern int ghidra_vftable_SCDiscoveryWizard;
extern int ghidra_vftable_SCDtlsTestEchoConnectingPage;
extern int ghidra_vftable_SCDtlsTestEchoFailurePage;
extern int ghidra_vftable_SCDtlsTestEchoIntroPage;
extern int ghidra_vftable_SCDtlsTestEchoPlayerChooserPage;
extern int ghidra_vftable_SCDtlsTestEchoProtocolChooserPage;
extern int ghidra_vftable_SCDtlsTestEchoSuccessPage;
extern int ghidra_vftable_SCDtlsTestWizard;
extern int ghidra_vftable_SCFlareDemoAdvancedProgressPage;
extern int ghidra_vftable_SCFlareDemoAdvancedProgressSetupPage;
extern int ghidra_vftable_SCFlareDemoFirstPage;
extern int ghidra_vftable_SCFlareDemoImageCheckmarkPage;
extern int ghidra_vftable_SCFlareDemoImageProgressPage;
extern int ghidra_vftable_SCFlareDemoImageThinkerPage;
extern int ghidra_vftable_SCFlareDemoImageWiFiPage;
extern int ghidra_vftable_SCFlareDemoSecondPage;
extern int ghidra_vftable_SCFlareDemoSelectionPage;
extern int ghidra_vftable_SCFlareDemoSimpleProgressPage;
extern int ghidra_vftable_SCFlareDemoSpinnerPage;
extern int ghidra_vftable_SCFlareDemoThirdPage;
extern int ghidra_vftable_SCFlareDemoVideoCheckmarkPage;
extern int ghidra_vftable_SCFlareDemoVideoProgressPage;
extern int ghidra_vftable_SCFlareDemoVideoThinkerPage;
extern int ghidra_vftable_SCFlareDemoVideoWiFiPage;
extern int ghidra_vftable_SCFlareDemoWizard;
extern int ghidra_vftable_SCFlutterTestErrorHandlingPage;
extern int ghidra_vftable_SCFlutterTestWizard;
extern int ghidra_vftable_SCGhostBooPage;
extern int ghidra_vftable_SCGhostSneakyPage;
extern int ghidra_vftable_SCHapticWizard;
extern int ghidra_vftable_SCHapticWizardType;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpHTControlCommitLearnedIRCodes;
extern int ghidra_vftable_SCIOpHTControlIdentifyIRRemote;
extern int ghidra_vftable_SCIOpHTControlIsRemoteConfigured;
extern int ghidra_vftable_SCIOpHTControlLearnIRCode;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCMockActionableListPage;
extern int ghidra_vftable_SCMockButtonFirstPage;
extern int ghidra_vftable_SCMockButtonFourthPage;
extern int ghidra_vftable_SCMockButtonSecondPage;
extern int ghidra_vftable_SCMockButtonSecondaryButtonFirstPage;
extern int ghidra_vftable_SCMockButtonSecondaryButtonSecondPage;
extern int ghidra_vftable_SCMockButtonThirdPage;
extern int ghidra_vftable_SCMockCaptionImageCarouselBarDebugPage;
extern int ghidra_vftable_SCMockCaptionImageCarouselDebugPage;
extern int ghidra_vftable_SCMockCaptionImageDebugPage;
extern int ghidra_vftable_SCMockCheckboxLongItemPage;
extern int ghidra_vftable_SCMockCheckboxShortItemPage;
extern int ghidra_vftable_SCMockDrumPickerPage;
extern int ghidra_vftable_SCMockDrumPickerWithIconsAndSubtextPage;
extern int ghidra_vftable_SCMockDrumPickerWithIconsPage;
extern int ghidra_vftable_SCMockDrumPickerWithSubtextPage;
extern int ghidra_vftable_SCMockFieldAPage;
extern int ghidra_vftable_SCMockFieldBPage;
extern int ghidra_vftable_SCMockListPage;
extern int ghidra_vftable_SCMockListWithIconsOnLeftPage;
extern int ghidra_vftable_SCMockListWithIndicatorsPage;
extern int ghidra_vftable_SCMockMarkdownFirstPage;
extern int ghidra_vftable_SCMockMarkdownInputPage;
extern int ghidra_vftable_SCMockMarkdownOutput2Page;
extern int ghidra_vftable_SCMockMarkdownOutputPage;
extern int ghidra_vftable_SCMockMarkdownSecondPage;
extern int ghidra_vftable_SCMockMarkdownThirdPage;
extern int ghidra_vftable_SCMockMultilinePickerPage;
extern int ghidra_vftable_SCMockRichSelectorPickerPage;
extern int ghidra_vftable_SCMockScrollableActionableListPage;
extern int ghidra_vftable_SCMockScrollableListWithIconsOnLeftInCarouselPage;
extern int ghidra_vftable_SCMockScrollableListWithIconsOnLeftPage;
extern int ghidra_vftable_SCMockSelectProductDebugPage;
extern int ghidra_vftable_SCMockSelectionPage;
extern int ghidra_vftable_SCMockSelectorPickerPage;
extern int ghidra_vftable_SCMockSelectorPickerWithDefaultPage;
extern int ghidra_vftable_SCMockUpdateDebugPage;
extern int ghidra_vftable_SCNewWiz;
extern int ghidra_vftable_SCNewWizPage;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizParams;
extern int ghidra_vftable_SCNewWizStateType;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCNewWizType;
extern int ghidra_vftable_SCOpHTControlCommitLearnedIRCodes;
extern int ghidra_vftable_SCOpHTControlIdentifyIRRemote;
extern int ghidra_vftable_SCOpHTControlIsRemoteConfigured;
extern int ghidra_vftable_SCOpHTControlLearnIRCode;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCSonosVoiceTutorialIntroPage;
extern int ghidra_vftable_SCSonosVoiceTutorialOutroPage;
extern int ghidra_vftable_SCSonosVoiceTutorialResponsePage;
extern int ghidra_vftable_SCSonosVoiceTutorialTimeoutPage;
extern int ghidra_vftable_SCSubwizState;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCSystemConfigFinishHouseholdConfigPage;
extern int ghidra_vftable_SCSystemConfigFinishProductConfigPage;
extern int ghidra_vftable_SCSystemConfigOutroFailurePage;
extern int ghidra_vftable_SCSystemConfigOutroPage;
extern int ghidra_vftable_SCSystemConfigTempWireInstructionsPage;
extern int ghidra_vftable_SCSystemIdIntroPage;
extern int ghidra_vftable_SCSystemIdSystemSearchFailurePage;
extern int ghidra_vftable_SCSystemIdSystemSearchPage;
extern int ghidra_vftable_SCTVRemoteControlGetRemotePage;
extern int ghidra_vftable_SCTVRemoteControlIntroPage;
extern int ghidra_vftable_SCTVRemoteControlPressVolumePage;
extern int ghidra_vftable_SCTVRemoteControlSettingsIntroPage;
extern int ghidra_vftable_SCTVRemoteControlSetupErrorPage;
extern int ghidra_vftable_SCTVRemoteControlSetupSuccessCheckmarkPage;
extern int ghidra_vftable_SCTVRemoteControlSetupSuccessPage;
extern int ghidra_vftable_SCTVRemoteControlSignalDetectedPage;
extern int ghidra_vftable_SCTVRemoteControlSignalNotDetectedPage;
extern int ghidra_vftable_SCTVRemoteControlSignalNotRecognizedPage;
extern int ghidra_vftable_SCTVSetupOutroPage;
extern int ghidra_vftable_SCTVSetupWizard;
extern int ghidra_vftable_SCUpdateCheckErrorPage;
extern int ghidra_vftable_SCUpdateCheckIntroPage;
extern int ghidra_vftable_SCUpdateCheckRetryPage;
extern int ghidra_vftable_SCUpdateSystemUpdateAvailablePage;
extern int ghidra_vftable_SCUpdateSystemUpdateCheckErrorPage;
extern int ghidra_vftable_SCUpdateSystemUpdateCheckPage;
extern int ghidra_vftable_SCUpdateSystemUpdateErrorPage;
extern int ghidra_vftable_SCUpdateSystemUpdatePage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyErrorPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyBondingConcurrencyFatalErrorPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyBondingConfirmationPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyConfirmationPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyFatalMissingErrorPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyFatalRemoveErrorPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyHTPrimaryGAPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyHTSurroundsGAPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyMissingProductPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyRemoveErrorPage;
extern int ghidra_vftable_SCVoiceServiceConcurrencyStereoGAPage;
extern int ghidra_vftable_SCVoiceServiceLocaleSelectionPage;
extern int ghidra_vftable_SCVoiceServiceLocaleUnsupportedPage;
extern int ghidra_vftable_SCWacConnectIntroPage;
extern int ghidra_vftable_SCWacConnectScanningPage;
extern int ghidra_vftable_SCWiredConnectFindProductPage;
extern int ghidra_vftable_SCWiredConnectIntroPage;
extern int uStack_8;
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_115e0920[];
extern undefined1 LAB_115e0ff0[];
extern undefined1 LAB_115e1020[];
extern undefined1 LAB_116752e0[];
extern undefined1 LAB_11675310[];
extern undefined1 LAB_11675340[];
extern undefined1 LAB_11675370[];
extern undefined1 LAB_1168b950[];
extern void *ExceptionList;
extern int FUN_10ebc110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9d10(undefined4 *param_1);
template<class... A> int FUN_109d9d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9d40(undefined4 *param_1);
template<class... A> int FUN_109d9d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9d50(undefined4 *param_1);
template<class... A> int FUN_109d9d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9d60(undefined4 *param_1);
template<class... A> int FUN_109d9d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9d70(undefined4 *param_1);
template<class... A> int FUN_109d9d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9d80(undefined4 *param_1);
template<class... A> int FUN_109d9d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9ec0(undefined4 *param_1);
template<class... A> int FUN_109d9ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9ef0(undefined4 *param_1);
template<class... A> int FUN_109d9ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9f20(undefined4 *param_1);
template<class... A> int FUN_109d9f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9f40(undefined4 *param_1);
template<class... A> int FUN_109d9f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9f70(undefined4 *param_1);
template<class... A> int FUN_109d9f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9f90(undefined4 *param_1);
template<class... A> int FUN_109d9f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9fc0(undefined4 *param_1);
template<class... A> int FUN_109d9fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109d9fe0(undefined4 *param_1);
template<class... A> int FUN_109d9fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109da010(undefined4 *param_1);
template<class... A> int FUN_109da010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109da030(undefined4 *param_1);
template<class... A> int FUN_109da030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109da060(undefined4 *param_1);
template<class... A> int FUN_109da060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109da210(undefined4 *param_1);
template<class... A> int FUN_109da210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_109da220(int *param_1);
template<class... A> int FUN_109da220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109da230(undefined4 *param_1);
template<class... A> int FUN_109da230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109dbde0(undefined4 *param_1);
template<class... A> int FUN_109dbde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0330(void);
template<class... A> int FUN_109e0330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0340(void);
template<class... A> int FUN_109e0340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0350(void);
template<class... A> int FUN_109e0350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0360(void);
template<class... A> int FUN_109e0360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0370(void);
template<class... A> int FUN_109e0370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e0380(void);
template<class... A> int FUN_109e0380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e0390(int param_1);
template<class... A> int FUN_109e0390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e05b0(int param_1);
template<class... A> int FUN_109e05b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e05c0(int param_1);
template<class... A> int FUN_109e05c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e05d0(int param_1);
template<class... A> int FUN_109e05d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_109e05e0(void);
template<class... A> int FUN_109e05e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e14d0(undefined4 *param_1);
template<class... A> int FUN_109e14d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109e14e0(undefined4 *param_1);
template<class... A> int FUN_109e14e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e14f0(undefined4 *param_1);
template<class... A> int FUN_109e14f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e1520(int *param_1);
template<class... A> int FUN_109e1520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15a0(void);
template<class... A> int FUN_109e15a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15b0(void);
template<class... A> int FUN_109e15b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15c0(void);
template<class... A> int FUN_109e15c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15d0(void);
template<class... A> int FUN_109e15d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15e0(void);
template<class... A> int FUN_109e15e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e15f0(void);
template<class... A> int FUN_109e15f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e1600(void);
template<class... A> int FUN_109e1600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109e1610(void);
template<class... A> int FUN_109e1610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e36a0(undefined4 *param_1);
template<class... A> int FUN_109e36a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e36d0(undefined4 *param_1);
template<class... A> int FUN_109e36d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e36e0(undefined4 *param_1);
template<class... A> int FUN_109e36e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e36f0(undefined4 *param_1);
template<class... A> int FUN_109e36f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3700(undefined4 *param_1);
template<class... A> int FUN_109e3700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3710(undefined4 *param_1);
template<class... A> int FUN_109e3710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3720(undefined4 *param_1);
template<class... A> int FUN_109e3720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3730(undefined4 *param_1);
template<class... A> int FUN_109e3730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3740(undefined4 *param_1);
template<class... A> int FUN_109e3740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e37b0(undefined4 *param_1);
template<class... A> int FUN_109e37b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e37e0(undefined4 *param_1);
template<class... A> int FUN_109e37e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3810(undefined4 *param_1);
template<class... A> int FUN_109e3810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3840(undefined4 *param_1);
template<class... A> int FUN_109e3840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3870(undefined4 *param_1);
template<class... A> int FUN_109e3870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3890(undefined4 *param_1);
template<class... A> int FUN_109e3890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e38c0(undefined4 *param_1);
template<class... A> int FUN_109e38c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e39d0(undefined4 *param_1);
template<class... A> int FUN_109e39d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e39f0(undefined4 *param_1);
template<class... A> int FUN_109e39f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3a20(undefined4 *param_1);
template<class... A> int FUN_109e3a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3a40(undefined4 *param_1);
template<class... A> int FUN_109e3a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3a70(undefined4 *param_1);
template<class... A> int FUN_109e3a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3a90(undefined4 *param_1);
template<class... A> int FUN_109e3a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3ac0(undefined4 *param_1);
template<class... A> int FUN_109e3ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3ae0(undefined4 *param_1);
template<class... A> int FUN_109e3ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3b10(undefined4 *param_1);
template<class... A> int FUN_109e3b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3b30(undefined4 *param_1);
template<class... A> int FUN_109e3b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109e3b60(undefined4 *param_1);
template<class... A> int FUN_109e3b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109ea2a0(int param_1);
template<class... A> int FUN_109ea2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec390(void);
template<class... A> int FUN_109ec390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3a0(void);
template<class... A> int FUN_109ec3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3b0(void);
template<class... A> int FUN_109ec3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3c0(void);
template<class... A> int FUN_109ec3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3d0(void);
template<class... A> int FUN_109ec3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3e0(void);
template<class... A> int FUN_109ec3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec3f0(void);
template<class... A> int FUN_109ec3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec400(void);
template<class... A> int FUN_109ec400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109ec410(void);
template<class... A> int FUN_109ec410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec420(int param_1);
template<class... A> int FUN_109ec420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec430(int param_1);
template<class... A> int FUN_109ec430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec440(int param_1);
template<class... A> int FUN_109ec440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec460(int param_1);
template<class... A> int FUN_109ec460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec470(int param_1);
template<class... A> int FUN_109ec470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec480(int param_1);
template<class... A> int FUN_109ec480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec490(int param_1);
template<class... A> int FUN_109ec490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec4a0(int param_1);
template<class... A> int FUN_109ec4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109ec4b0(int param_1);
template<class... A> int FUN_109ec4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109edc10(undefined4 *param_1);
template<class... A> int FUN_109edc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_109eded0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_109eded0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109edf00(undefined4 param_1);
template<class... A> int FUN_109edf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109edf10(void);
template<class... A> int FUN_109edf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109edf20(void);
template<class... A> int FUN_109edf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109edf30(void);
template<class... A> int FUN_109edf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109edf40(void);
template<class... A> int FUN_109edf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109ee490(undefined4 *param_1);
template<class... A> int FUN_109ee490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef030(undefined4 *param_1);
template<class... A> int FUN_109ef030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef060(undefined4 *param_1);
template<class... A> int FUN_109ef060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef070(undefined4 *param_1);
template<class... A> int FUN_109ef070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef080(undefined4 *param_1);
template<class... A> int FUN_109ef080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef090(undefined4 *param_1);
template<class... A> int FUN_109ef090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef0a0(undefined4 *param_1);
template<class... A> int FUN_109ef0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef0e0(undefined4 *param_1);
template<class... A> int FUN_109ef0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef110(undefined4 *param_1);
template<class... A> int FUN_109ef110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef130(undefined4 *param_1);
template<class... A> int FUN_109ef130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef160(undefined4 *param_1);
template<class... A> int FUN_109ef160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef180(undefined4 *param_1);
template<class... A> int FUN_109ef180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef1b0(undefined4 *param_1);
template<class... A> int FUN_109ef1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109ef270(undefined4 *param_1);
template<class... A> int FUN_109ef270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f2e60(void);
template<class... A> int FUN_109f2e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f2e70(void);
template<class... A> int FUN_109f2e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f2e80(void);
template<class... A> int FUN_109f2e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f2e90(void);
template<class... A> int FUN_109f2e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f2ea0(void);
template<class... A> int FUN_109f2ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109f2eb0(int param_1);
template<class... A> int FUN_109f2eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109f2ec0(int param_1);
template<class... A> int FUN_109f2ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f2ed0(int param_1);
template<class... A> int FUN_109f2ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f2ef0(int param_1);
template<class... A> int FUN_109f2ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f2f00(int param_1);
template<class... A> int FUN_109f2f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f2f10(int param_1);
template<class... A> int FUN_109f2f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f2f20(int param_1);
template<class... A> int FUN_109f2f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3bd0(void);
template<class... A> int FUN_109f3bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3be0(void);
template<class... A> int FUN_109f3be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3bf0(void);
template<class... A> int FUN_109f3bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c00(void);
template<class... A> int FUN_109f3c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c10(void);
template<class... A> int FUN_109f3c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c20(void);
template<class... A> int FUN_109f3c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c30(void);
template<class... A> int FUN_109f3c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c40(void);
template<class... A> int FUN_109f3c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c50(void);
template<class... A> int FUN_109f3c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c60(void);
template<class... A> int FUN_109f3c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109f3c70(void);
template<class... A> int FUN_109f3c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_109f3c90(void);
template<class... A> int FUN_109f3c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_109f3ca0(void);
template<class... A> int FUN_109f3ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_109f3cb0(void);
template<class... A> int FUN_109f3cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_109f3cc0(void);
template<class... A> int FUN_109f3cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f3e80(undefined4 *param_1);
template<class... A> int FUN_109f3e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f3f40(undefined4 *param_1);
template<class... A> int FUN_109f3f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f3f70(undefined4 *param_1);
template<class... A> int FUN_109f3f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f3fa0(undefined4 *param_1);
template<class... A> int FUN_109f3fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f3fd0(undefined4 *param_1);
template<class... A> int FUN_109f3fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5120(undefined4 *param_1);
template<class... A> int FUN_109f5120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5140(undefined4 *param_1);
template<class... A> int FUN_109f5140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5160(undefined4 *param_1);
template<class... A> int FUN_109f5160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5180(undefined4 *param_1);
template<class... A> int FUN_109f5180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5430(undefined4 *param_1);
template<class... A> int FUN_109f5430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5440(undefined4 *param_1);
template<class... A> int FUN_109f5440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5450(undefined4 *param_1);
template<class... A> int FUN_109f5450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109f5460(undefined4 *param_1);
template<class... A> int FUN_109f5460(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_109f7710(undefined4 *param_1);
/* WARNING: Removing unreachable block_109f7720 (ram,0x101ba14a) */ void __fastcall FUN_109f7720(undefined4 *param_1);
/* WARNING: Removing unreachable block_109f7740 (ram,0x101ba14a) */ void __fastcall FUN_109f7740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7800(undefined4 *param_1);
template<class... A> int FUN_109f7800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7810(undefined4 *param_1);
template<class... A> int FUN_109f7810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7820(undefined4 *param_1);
template<class... A> int FUN_109f7820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7830(undefined4 *param_1);
template<class... A> int FUN_109f7830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7840(undefined4 *param_1);
template<class... A> int FUN_109f7840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7850(undefined4 *param_1);
template<class... A> int FUN_109f7850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7860(undefined4 *param_1);
template<class... A> int FUN_109f7860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7870(undefined4 *param_1);
template<class... A> int FUN_109f7870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7880(undefined4 *param_1);
template<class... A> int FUN_109f7880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f7890(undefined4 *param_1);
template<class... A> int FUN_109f7890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f78a0(undefined4 *param_1);
template<class... A> int FUN_109f78a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8170(undefined4 *param_1);
template<class... A> int FUN_109f8170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f81a0(undefined4 *param_1);
template<class... A> int FUN_109f81a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f81d0(undefined4 *param_1);
template<class... A> int FUN_109f81d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8200(undefined4 *param_1);
template<class... A> int FUN_109f8200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8230(undefined4 *param_1);
template<class... A> int FUN_109f8230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8240(undefined4 *param_1);
template<class... A> int FUN_109f8240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8250(undefined4 *param_1);
template<class... A> int FUN_109f8250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8260(undefined4 *param_1);
template<class... A> int FUN_109f8260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8270(undefined4 *param_1);
template<class... A> int FUN_109f8270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8290(undefined4 *param_1);
template<class... A> int FUN_109f8290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f82b0(undefined4 *param_1);
template<class... A> int FUN_109f82b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f82d0(undefined4 *param_1);
template<class... A> int FUN_109f82d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f82f0(undefined4 *param_1);
template<class... A> int FUN_109f82f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8320(undefined4 *param_1);
template<class... A> int FUN_109f8320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8340(undefined4 *param_1);
template<class... A> int FUN_109f8340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8370(undefined4 *param_1);
template<class... A> int FUN_109f8370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f84f0(undefined4 *param_1);
template<class... A> int FUN_109f84f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8600(undefined4 *param_1);
template<class... A> int FUN_109f8600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f86d0(undefined4 *param_1);
template<class... A> int FUN_109f86d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f86f0(undefined4 *param_1);
template<class... A> int FUN_109f86f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8720(undefined4 *param_1);
template<class... A> int FUN_109f8720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8740(undefined4 *param_1);
template<class... A> int FUN_109f8740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8770(undefined4 *param_1);
template<class... A> int FUN_109f8770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8790(undefined4 *param_1);
template<class... A> int FUN_109f8790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f87c0(undefined4 *param_1);
template<class... A> int FUN_109f87c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f87e0(undefined4 *param_1);
template<class... A> int FUN_109f87e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8810(undefined4 *param_1);
template<class... A> int FUN_109f8810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8830(undefined4 *param_1);
template<class... A> int FUN_109f8830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8860(undefined4 *param_1);
template<class... A> int FUN_109f8860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f8880(undefined4 *param_1);
template<class... A> int FUN_109f8880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109f88b0(undefined4 *param_1);
template<class... A> int FUN_109f88b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f8c20(int param_1);
template<class... A> int FUN_109f8c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f8c30(undefined4 *param_1);
template<class... A> int FUN_109f8c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f8c40(undefined4 *param_1);
template<class... A> int FUN_109f8c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f8c50(int param_1);
template<class... A> int FUN_109f8c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109f8c60(undefined4 *param_1);
template<class... A> int FUN_109f8c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a00510(int param_1);
template<class... A> int FUN_10a00510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a00520(int param_1);
template<class... A> int FUN_10a00520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a008e0(int param_1);
template<class... A> int FUN_10a008e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a00930(int param_1);
template<class... A> int FUN_10a00930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04570(void);
template<class... A> int FUN_10a04570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04580(void);
template<class... A> int FUN_10a04580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04590(void);
template<class... A> int FUN_10a04590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045a0(void);
template<class... A> int FUN_10a045a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045b0(void);
template<class... A> int FUN_10a045b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045c0(void);
template<class... A> int FUN_10a045c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045d0(void);
template<class... A> int FUN_10a045d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045e0(void);
template<class... A> int FUN_10a045e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a045f0(void);
template<class... A> int FUN_10a045f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04600(void);
template<class... A> int FUN_10a04600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04610(void);
template<class... A> int FUN_10a04610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a04620(void);
template<class... A> int FUN_10a04620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a04640(int param_1);
template<class... A> int FUN_10a04640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a04650(int param_1);
template<class... A> int FUN_10a04650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10a05c40(void);
template<class... A> int FUN_10a05c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10a05c50(void);
template<class... A> int FUN_10a05c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10a05c60(void);
template<class... A> int FUN_10a05c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10a05c70(void);
template<class... A> int FUN_10a05c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a080d0(undefined4 *param_1);
template<class... A> int FUN_10a080d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a080e0(undefined4 *param_1);
template<class... A> int FUN_10a080e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a080f0(undefined4 *param_1);
template<class... A> int FUN_10a080f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a08100(undefined4 *param_1);
template<class... A> int FUN_10a08100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a08790(undefined4 *param_1);
template<class... A> int FUN_10a08790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a087c0(undefined4 *param_1);
template<class... A> int FUN_10a087c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a087f0(undefined4 *param_1);
template<class... A> int FUN_10a087f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a08820(undefined4 *param_1);
template<class... A> int FUN_10a08820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a08850(undefined4 *param_1);
template<class... A> int FUN_10a08850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a08880(undefined4 *param_1);
template<class... A> int FUN_10a08880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a088b0(undefined4 *param_1);
template<class... A> int FUN_10a088b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a088e0(undefined4 *param_1);
template<class... A> int FUN_10a088e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a08cd0(void);
template<class... A> int FUN_10a08cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a08ce0(void);
template<class... A> int FUN_10a08ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a08cf0(void);
template<class... A> int FUN_10a08cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09b70(undefined4 *param_1);
template<class... A> int FUN_10a09b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09ba0(undefined4 *param_1);
template<class... A> int FUN_10a09ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09bb0(undefined4 *param_1);
template<class... A> int FUN_10a09bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09bc0(undefined4 *param_1);
template<class... A> int FUN_10a09bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09bd0(undefined4 *param_1);
template<class... A> int FUN_10a09bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09c00(undefined4 *param_1);
template<class... A> int FUN_10a09c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09c30(undefined4 *param_1);
template<class... A> int FUN_10a09c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09c60(undefined4 *param_1);
template<class... A> int FUN_10a09c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09c80(undefined4 *param_1);
template<class... A> int FUN_10a09c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09cb0(undefined4 *param_1);
template<class... A> int FUN_10a09cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a09d80(undefined4 *param_1);
template<class... A> int FUN_10a09d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0c3e0(void);
template<class... A> int FUN_10a0c3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0c3f0(void);
template<class... A> int FUN_10a0c3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0c400(void);
template<class... A> int FUN_10a0c400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0c410(void);
template<class... A> int FUN_10a0c410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c420(int param_1);
template<class... A> int FUN_10a0c420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c430(int param_1);
template<class... A> int FUN_10a0c430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a0c440(int param_1);
template<class... A> int FUN_10a0c440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c460(int param_1);
template<class... A> int FUN_10a0c460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c470(int param_1);
template<class... A> int FUN_10a0c470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c480(int param_1);
template<class... A> int FUN_10a0c480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a0c490(int param_1);
template<class... A> int FUN_10a0c490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0ccf0(void);
template<class... A> int FUN_10a0ccf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0cd00(void);
template<class... A> int FUN_10a0cd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a0cd10(void);
template<class... A> int FUN_10a0cd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0d8d0(undefined4 *param_1);
template<class... A> int FUN_10a0d8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0d900(undefined4 *param_1);
template<class... A> int FUN_10a0d900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0d910(undefined4 *param_1);
template<class... A> int FUN_10a0d910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0d920(undefined4 *param_1);
template<class... A> int FUN_10a0d920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0d9e0(undefined4 *param_1);
template<class... A> int FUN_10a0d9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0dab0(undefined4 *param_1);
template<class... A> int FUN_10a0dab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a0db80(undefined4 *param_1);
template<class... A> int FUN_10a0db80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a11d60(void);
template<class... A> int FUN_10a11d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a11d70(void);
template<class... A> int FUN_10a11d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a11d80(void);
template<class... A> int FUN_10a11d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a11d90(void);
template<class... A> int FUN_10a11d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a11db0(int param_1);
template<class... A> int FUN_10a11db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a11dc0(int param_1);
template<class... A> int FUN_10a11dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a11dd0(int param_1);
template<class... A> int FUN_10a11dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10a11df0(int *param_1);
template<class... A> int FUN_10a11df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a126c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10a126c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a12700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10a12700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a12890(void);
template<class... A> int FUN_10a12890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a128c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10a128c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a128d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10a128d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a128e0(void);
template<class... A> int FUN_10a128e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a12aa0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10a12aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10a12b50(uint param_1);
template<class... A> int FUN_10a12b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12b70(undefined4 param_1);
template<class... A> int FUN_10a12b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10a12b80(int param_1,SCStr *param_2);
template<class... A> int FUN_10a12b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12d00(undefined4 param_1);
template<class... A> int FUN_10a12d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12d10(undefined4 param_1);
template<class... A> int FUN_10a12d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12d20(undefined4 param_1);
template<class... A> int FUN_10a12d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12d30(undefined4 param_1);
template<class... A> int FUN_10a12d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12d40(undefined4 param_1);
template<class... A> int FUN_10a12d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12e30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10a12e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12e50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10a12e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12e70(undefined4 param_1);
template<class... A> int FUN_10a12e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12e80(undefined4 param_1);
template<class... A> int FUN_10a12e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12e90(undefined4 param_1);
template<class... A> int FUN_10a12e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12ea0(void);
template<class... A> int FUN_10a12ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12eb0(void);
template<class... A> int FUN_10a12eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12ec0(void);
template<class... A> int FUN_10a12ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12ed0(void);
template<class... A> int FUN_10a12ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a12ee0(void);
template<class... A> int FUN_10a12ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a13510(undefined4 *param_1);
template<class... A> int FUN_10a13510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a13530(undefined4 param_1);
template<class... A> int FUN_10a13530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a13540(undefined4 *param_1);
template<class... A> int FUN_10a13540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a13590(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10a13590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14430(undefined4 *param_1);
template<class... A> int FUN_10a14430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14460(undefined4 *param_1);
template<class... A> int FUN_10a14460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14470(undefined4 *param_1);
template<class... A> int FUN_10a14470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14480(undefined4 *param_1);
template<class... A> int FUN_10a14480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14490(undefined4 *param_1);
template<class... A> int FUN_10a14490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a144a0(undefined4 *param_1);
template<class... A> int FUN_10a144a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14660(undefined4 *param_1);
template<class... A> int FUN_10a14660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14690(undefined4 *param_1);
template<class... A> int FUN_10a14690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a146b0(undefined4 *param_1);
template<class... A> int FUN_10a146b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a146e0(undefined4 *param_1);
template<class... A> int FUN_10a146e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a147b0(undefined4 *param_1);
template<class... A> int FUN_10a147b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a147d0(undefined4 *param_1);
template<class... A> int FUN_10a147d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14800(undefined4 *param_1);
template<class... A> int FUN_10a14800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14820(undefined4 *param_1);
template<class... A> int FUN_10a14820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a14850(undefined4 *param_1);
template<class... A> int FUN_10a14850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a14980(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10a14980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10a14c60(int *param_1);
template<class... A> int FUN_10a14c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a14c70(int *param_1);
template<class... A> int FUN_10a14c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a14c80(int *param_1);
template<class... A> int FUN_10a14c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a14c90(int *param_1);
template<class... A> int FUN_10a14c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a15490(undefined4 *param_1);
template<class... A> int FUN_10a15490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a154f0(int param_1);
template<class... A> int FUN_10a154f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15510(undefined4 param_1);
template<class... A> int FUN_10a15510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15520(undefined4 param_1);
template<class... A> int FUN_10a15520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15530(undefined4 param_1);
template<class... A> int FUN_10a15530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15540(undefined4 param_1);
template<class... A> int FUN_10a15540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15550(undefined4 param_1);
template<class... A> int FUN_10a15550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15560(undefined4 param_1);
template<class... A> int FUN_10a15560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15570(undefined4 param_1);
template<class... A> int FUN_10a15570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15580(undefined4 param_1);
template<class... A> int FUN_10a15580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a15890(int param_1);
template<class... A> int FUN_10a15890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a15910(uint param_1);
template<class... A> int FUN_10a15910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a16170(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10a16170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a161c0(int param_1,int param_2);
template<class... A> int FUN_10a161c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a1adc0(int param_1);
template<class... A> int FUN_10a1adc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a1add0(int param_1);
template<class... A> int FUN_10a1add0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c860(void);
template<class... A> int FUN_10a1c860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c870(void);
template<class... A> int FUN_10a1c870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c880(void);
template<class... A> int FUN_10a1c880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c890(void);
template<class... A> int FUN_10a1c890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c8a0(void);
template<class... A> int FUN_10a1c8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1c8b0(void);
template<class... A> int FUN_10a1c8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1c8d0(int param_1);
template<class... A> int FUN_10a1c8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1c8e0(int param_1);
template<class... A> int FUN_10a1c8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1c8f0(int param_1);
template<class... A> int FUN_10a1c8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1c900(int param_1);
template<class... A> int FUN_10a1c900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1d040(void);
template<class... A> int FUN_10a1d040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1d050(void);
template<class... A> int FUN_10a1d050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e410(undefined4 param_1);
template<class... A> int FUN_10a1e410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1e450(int param_1);
template<class... A> int FUN_10a1e450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a1e460(int param_1);
template<class... A> int FUN_10a1e460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1e470(int param_1);
template<class... A> int FUN_10a1e470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a1e480(int param_1);
template<class... A> int FUN_10a1e480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a1e490(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10a1e490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a1e4b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10a1e4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a1e4d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10a1e4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e680(undefined4 *param_1);
template<class... A> int FUN_10a1e680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a1e690(void);
template<class... A> int FUN_10a1e690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a1e6a0(void);
template<class... A> int FUN_10a1e6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10a1e760(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10a1e760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a1e830(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10a1e830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e860(undefined4 param_1);
template<class... A> int FUN_10a1e860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e870(undefined4 param_1);
template<class... A> int FUN_10a1e870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a1e880(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10a1e880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a1e8a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10a1e8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e8e0(undefined4 param_1);
template<class... A> int FUN_10a1e8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e8f0(undefined4 param_1);
template<class... A> int FUN_10a1e8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e900(undefined4 param_1);
template<class... A> int FUN_10a1e900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e910(void);
template<class... A> int FUN_10a1e910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e920(void);
template<class... A> int FUN_10a1e920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e930(void);
template<class... A> int FUN_10a1e930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e940(void);
template<class... A> int FUN_10a1e940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e950(void);
template<class... A> int FUN_10a1e950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e960(void);
template<class... A> int FUN_10a1e960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e970(void);
template<class... A> int FUN_10a1e970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e980(void);
template<class... A> int FUN_10a1e980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e990(void);
template<class... A> int FUN_10a1e990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e9a0(void);
template<class... A> int FUN_10a1e9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e9b0(void);
template<class... A> int FUN_10a1e9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e9c0(void);
template<class... A> int FUN_10a1e9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e9d0(void);
template<class... A> int FUN_10a1e9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1e9f0(undefined4 param_1);
template<class... A> int FUN_10a1e9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1ea00(undefined4 param_1);
template<class... A> int FUN_10a1ea00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a1ea10(undefined4 param_1);
template<class... A> int FUN_10a1ea10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a1f760(undefined4 *param_1);
template<class... A> int FUN_10a1f760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a1f780(undefined4 param_1);
template<class... A> int FUN_10a1f780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a1f900(undefined4 *param_1);
template<class... A> int FUN_10a1f900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21c50(undefined4 *param_1);
template<class... A> int FUN_10a21c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21c60(undefined4 *param_1);
template<class... A> int FUN_10a21c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21c70(undefined4 *param_1);
template<class... A> int FUN_10a21c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21c80(undefined4 *param_1);
template<class... A> int FUN_10a21c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21c90(undefined4 *param_1);
template<class... A> int FUN_10a21c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21ca0(undefined4 *param_1);
template<class... A> int FUN_10a21ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21cb0(undefined4 *param_1);
template<class... A> int FUN_10a21cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21cc0(undefined4 *param_1);
template<class... A> int FUN_10a21cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21cd0(undefined4 *param_1);
template<class... A> int FUN_10a21cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21ce0(undefined4 *param_1);
template<class... A> int FUN_10a21ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21cf0(undefined4 *param_1);
template<class... A> int FUN_10a21cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21d00(undefined4 *param_1);
template<class... A> int FUN_10a21d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21d10(undefined4 *param_1);
template<class... A> int FUN_10a21d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21d30(undefined4 *param_1);
template<class... A> int FUN_10a21d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21d60(undefined4 *param_1);
template<class... A> int FUN_10a21d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21d90(undefined4 *param_1);
template<class... A> int FUN_10a21d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21db0(undefined4 *param_1);
template<class... A> int FUN_10a21db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21de0(undefined4 *param_1);
template<class... A> int FUN_10a21de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21e00(undefined4 *param_1);
template<class... A> int FUN_10a21e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21e30(undefined4 *param_1);
template<class... A> int FUN_10a21e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21e50(undefined4 *param_1);
template<class... A> int FUN_10a21e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21e80(undefined4 *param_1);
template<class... A> int FUN_10a21e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21ea0(undefined4 *param_1);
template<class... A> int FUN_10a21ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21ed0(undefined4 *param_1);
template<class... A> int FUN_10a21ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21ef0(undefined4 *param_1);
template<class... A> int FUN_10a21ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21f20(undefined4 *param_1);
template<class... A> int FUN_10a21f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21f40(undefined4 *param_1);
template<class... A> int FUN_10a21f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21f70(undefined4 *param_1);
template<class... A> int FUN_10a21f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21f90(undefined4 *param_1);
template<class... A> int FUN_10a21f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a21fc0(undefined4 *param_1);
template<class... A> int FUN_10a21fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a220a0(undefined4 *param_1);
template<class... A> int FUN_10a220a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a220c0(undefined4 *param_1);
template<class... A> int FUN_10a220c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a220f0(undefined4 *param_1);
template<class... A> int FUN_10a220f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a22110(undefined4 *param_1);
template<class... A> int FUN_10a22110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a22140(undefined4 *param_1);
template<class... A> int FUN_10a22140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a22210(undefined4 *param_1);
template<class... A> int FUN_10a22210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a22280(undefined4 *param_1);
template<class... A> int FUN_10a22280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a238a0(undefined4 param_1);
template<class... A> int FUN_10a238a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a238b0(undefined4 param_1);
template<class... A> int FUN_10a238b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a239b0(undefined4 *param_1);
template<class... A> int FUN_10a239b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a23a40(undefined4 *param_1);
template<class... A> int FUN_10a23a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a23a50(int param_1);
template<class... A> int FUN_10a23a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a23a60(uint param_1);
template<class... A> int FUN_10a23a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a33e80(int param_1);
template<class... A> int FUN_10a33e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a33e90(int param_1);
template<class... A> int FUN_10a33e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a35ea0(int param_1);
template<class... A> int FUN_10a35ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c6d0(void);
template<class... A> int FUN_10a3c6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c6e0(void);
template<class... A> int FUN_10a3c6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c6f0(void);
template<class... A> int FUN_10a3c6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c700(void);
template<class... A> int FUN_10a3c700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c710(void);
template<class... A> int FUN_10a3c710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c720(void);
template<class... A> int FUN_10a3c720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c730(void);
template<class... A> int FUN_10a3c730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c740(void);
template<class... A> int FUN_10a3c740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c750(void);
template<class... A> int FUN_10a3c750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c760(void);
template<class... A> int FUN_10a3c760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c770(void);
template<class... A> int FUN_10a3c770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c780(void);
template<class... A> int FUN_10a3c780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c790(void);
template<class... A> int FUN_10a3c790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a3c7a0(void);
template<class... A> int FUN_10a3c7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a3d040(int param_1);
template<class... A> int FUN_10a3d040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a3d050(int param_1);
template<class... A> int FUN_10a3d050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10a3d060(int param_1);
template<class... A> int FUN_10a3d060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10a3d660(int *param_1);
template<class... A> int FUN_10a3d660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40720(undefined4 param_1);
template<class... A> int FUN_10a40720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40730(undefined4 param_1);
template<class... A> int FUN_10a40730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a40770(int *param_1);
template<class... A> int FUN_10a40770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40d90(undefined4 param_1);
template<class... A> int FUN_10a40d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40da0(void);
template<class... A> int FUN_10a40da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40db0(void);
template<class... A> int FUN_10a40db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a40dd0(undefined4 param_1);
template<class... A> int FUN_10a40dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10a40de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10a40de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a416b0(undefined4 *param_1);
template<class... A> int FUN_10a416b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a416e0(undefined4 *param_1);
template<class... A> int FUN_10a416e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a416f0(undefined4 *param_1);
template<class... A> int FUN_10a416f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a41750(undefined4 *param_1);
template<class... A> int FUN_10a41750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a41770(undefined4 *param_1);
template<class... A> int FUN_10a41770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a417a0(undefined4 *param_1);
template<class... A> int FUN_10a417a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a41d70(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10a41d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a41e90(undefined4 *param_1);
template<class... A> int FUN_10a41e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a41ea0(int param_1);
template<class... A> int FUN_10a41ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a41eb0(int *param_1);
template<class... A> int FUN_10a41eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a43be0(void);
template<class... A> int FUN_10a43be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a43bf0(void);
template<class... A> int FUN_10a43bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a43c00(void);
template<class... A> int FUN_10a43c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a43c20(int param_1);
template<class... A> int FUN_10a43c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a43c30(int param_1);
template<class... A> int FUN_10a43c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a445e0(void);
template<class... A> int FUN_10a445e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a445f0(void);
template<class... A> int FUN_10a445f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44e50(undefined4 *param_1);
template<class... A> int FUN_10a44e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44e80(undefined4 *param_1);
template<class... A> int FUN_10a44e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44e90(undefined4 *param_1);
template<class... A> int FUN_10a44e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44ec0(undefined4 *param_1);
template<class... A> int FUN_10a44ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44ef0(undefined4 *param_1);
template<class... A> int FUN_10a44ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44f10(undefined4 *param_1);
template<class... A> int FUN_10a44f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a44f40(undefined4 *param_1);
template<class... A> int FUN_10a44f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a487c0(void);
template<class... A> int FUN_10a487c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a487d0(void);
template<class... A> int FUN_10a487d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a487e0(void);
template<class... A> int FUN_10a487e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a48800(int param_1);
template<class... A> int FUN_10a48800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a48810(int param_1);
template<class... A> int FUN_10a48810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a48d50(void);
template<class... A> int FUN_10a48d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a48d60(void);
template<class... A> int FUN_10a48d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a495c0(undefined4 *param_1);
template<class... A> int FUN_10a495c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a495f0(undefined4 *param_1);
template<class... A> int FUN_10a495f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a49600(undefined4 *param_1);
template<class... A> int FUN_10a49600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a49610(undefined4 *param_1);
template<class... A> int FUN_10a49610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a49640(undefined4 *param_1);
template<class... A> int FUN_10a49640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a49660(undefined4 *param_1);
template<class... A> int FUN_10a49660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a49690(undefined4 *param_1);
template<class... A> int FUN_10a49690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4c370(void);
template<class... A> int FUN_10a4c370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4c380(void);
template<class... A> int FUN_10a4c380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4c390(void);
template<class... A> int FUN_10a4c390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a4c3b0(int param_1);
template<class... A> int FUN_10a4c3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a4c3c0(int param_1);
template<class... A> int FUN_10a4c3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c770(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10a4c770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c790(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10a4c790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c7b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10a4c7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c7d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10a4c7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c7f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10a4c7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4c810(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10a4c810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte FUN_10a4c830(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10a4c830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4c850(void);
template<class... A> int FUN_10a4c850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10a4c960(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10a4c960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4c990(void);
template<class... A> int FUN_10a4c990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d170(undefined4 *param_1);
template<class... A> int FUN_10a4d170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d180(undefined4 *param_1);
template<class... A> int FUN_10a4d180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d190(undefined4 *param_1);
template<class... A> int FUN_10a4d190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d1a0(undefined4 *param_1);
template<class... A> int FUN_10a4d1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10a4d1b0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10a4d1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10a4d230(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10a4d230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d2b0(void);
template<class... A> int FUN_10a4d2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d2c0(void);
template<class... A> int FUN_10a4d2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d2d0(undefined4 param_1);
template<class... A> int FUN_10a4d2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10a4d2e0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10a4d2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d350(undefined4 param_1);
template<class... A> int FUN_10a4d350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d360(undefined4 param_1);
template<class... A> int FUN_10a4d360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d370(undefined4 param_1);
template<class... A> int FUN_10a4d370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a4d380(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10a4d380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a4d4f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10a4d4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d660(undefined4 param_1);
template<class... A> int FUN_10a4d660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d670(undefined4 param_1);
template<class... A> int FUN_10a4d670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d680(undefined4 param_1);
template<class... A> int FUN_10a4d680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4d690(undefined4 param_1);
template<class... A> int FUN_10a4d690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d7a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10a4d7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d7b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10a4d7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d7e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10a4d7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d810(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10a4d810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d840(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10a4d840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d870(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10a4d870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a4d8a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10a4d8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10a4d9b0(int param_1,int param_2);
template<class... A> int FUN_10a4d9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4da90(undefined4 param_1);
template<class... A> int FUN_10a4da90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4daa0(undefined4 param_1);
template<class... A> int FUN_10a4daa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dab0(undefined4 param_1);
template<class... A> int FUN_10a4dab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dac0(undefined4 param_1);
template<class... A> int FUN_10a4dac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dad0(undefined4 param_1);
template<class... A> int FUN_10a4dad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dae0(undefined4 param_1);
template<class... A> int FUN_10a4dae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4daf0(undefined4 param_1);
template<class... A> int FUN_10a4daf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db00(undefined4 param_1);
template<class... A> int FUN_10a4db00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db10(undefined4 param_1);
template<class... A> int FUN_10a4db10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db20(undefined4 param_1);
template<class... A> int FUN_10a4db20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db30(void);
template<class... A> int FUN_10a4db30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db40(void);
template<class... A> int FUN_10a4db40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db50(void);
template<class... A> int FUN_10a4db50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db60(void);
template<class... A> int FUN_10a4db60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db70(void);
template<class... A> int FUN_10a4db70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db80(void);
template<class... A> int FUN_10a4db80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4db90(void);
template<class... A> int FUN_10a4db90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dba0(void);
template<class... A> int FUN_10a4dba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dbb0(void);
template<class... A> int FUN_10a4dbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dbc0(void);
template<class... A> int FUN_10a4dbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dbd0(void);
template<class... A> int FUN_10a4dbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dbe0(void);
template<class... A> int FUN_10a4dbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dbf0(void);
template<class... A> int FUN_10a4dbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dc10(undefined4 param_1);
template<class... A> int FUN_10a4dc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dc20(undefined4 param_1);
template<class... A> int FUN_10a4dc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a4dc30(undefined4 param_1);
template<class... A> int FUN_10a4dc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4e8c0(undefined4 *param_1);
template<class... A> int FUN_10a4e8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4e910(undefined4 *param_1);
template<class... A> int FUN_10a4e910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4e960(undefined4 *param_1);
template<class... A> int FUN_10a4e960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4ed30(undefined4 *param_1);
template<class... A> int FUN_10a4ed30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4ed50(undefined4 *param_1);
template<class... A> int FUN_10a4ed50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4ed70(undefined4 *param_1);
template<class... A> int FUN_10a4ed70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a4ed90(undefined4 param_1);
template<class... A> int FUN_10a4ed90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a4eda0(undefined4 param_1);
template<class... A> int FUN_10a4eda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a4edb0(undefined4 param_1);
template<class... A> int FUN_10a4edb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4ee40(undefined4 *param_1);
template<class... A> int FUN_10a4ee40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4ef20(undefined4 *param_1);
template<class... A> int FUN_10a4ef20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a4f000(undefined4 *param_1);
template<class... A> int FUN_10a4f000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a511a0(undefined4 *param_1);
template<class... A> int FUN_10a511a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a511d0(undefined4 *param_1);
template<class... A> int FUN_10a511d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a511e0(undefined4 *param_1);
template<class... A> int FUN_10a511e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a511f0(undefined4 *param_1);
template<class... A> int FUN_10a511f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51200(undefined4 *param_1);
template<class... A> int FUN_10a51200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51210(undefined4 *param_1);
template<class... A> int FUN_10a51210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51220(undefined4 *param_1);
template<class... A> int FUN_10a51220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51230(undefined4 *param_1);
template<class... A> int FUN_10a51230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51240(undefined4 *param_1);
template<class... A> int FUN_10a51240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51250(undefined4 *param_1);
template<class... A> int FUN_10a51250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51260(undefined4 *param_1);
template<class... A> int FUN_10a51260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51270(undefined4 *param_1);
template<class... A> int FUN_10a51270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51280(undefined4 *param_1);
template<class... A> int FUN_10a51280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51290(undefined4 *param_1);
template<class... A> int FUN_10a51290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51380(undefined4 *param_1);
template<class... A> int FUN_10a51380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a513b0(undefined4 *param_1);
template<class... A> int FUN_10a513b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a513e0(undefined4 *param_1);
template<class... A> int FUN_10a513e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51410(undefined4 *param_1);
template<class... A> int FUN_10a51410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51510(undefined4 *param_1);
template<class... A> int FUN_10a51510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51540(undefined4 *param_1);
template<class... A> int FUN_10a51540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51560(undefined4 *param_1);
template<class... A> int FUN_10a51560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51590(undefined4 *param_1);
template<class... A> int FUN_10a51590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a515b0(undefined4 *param_1);
template<class... A> int FUN_10a515b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a515e0(undefined4 *param_1);
template<class... A> int FUN_10a515e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a516d0(undefined4 *param_1);
template<class... A> int FUN_10a516d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a517c0(undefined4 *param_1);
template<class... A> int FUN_10a517c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a517e0(undefined4 *param_1);
template<class... A> int FUN_10a517e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51810(undefined4 *param_1);
template<class... A> int FUN_10a51810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51830(undefined4 *param_1);
template<class... A> int FUN_10a51830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51860(undefined4 *param_1);
template<class... A> int FUN_10a51860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51880(undefined4 *param_1);
template<class... A> int FUN_10a51880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a518b0(undefined4 *param_1);
template<class... A> int FUN_10a518b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a518d0(undefined4 *param_1);
template<class... A> int FUN_10a518d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51900(undefined4 *param_1);
template<class... A> int FUN_10a51900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51920(undefined4 *param_1);
template<class... A> int FUN_10a51920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51950(undefined4 *param_1);
template<class... A> int FUN_10a51950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51ab0(undefined4 *param_1);
template<class... A> int FUN_10a51ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51b80(undefined4 *param_1);
template<class... A> int FUN_10a51b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51ba0(undefined4 *param_1);
template<class... A> int FUN_10a51ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a51bd0(undefined4 *param_1);
template<class... A> int FUN_10a51bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a522e0(undefined4 *param_1);
template<class... A> int FUN_10a522e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a522f0(undefined4 *param_1);
template<class... A> int FUN_10a522f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a52300(undefined4 *param_1);
template<class... A> int FUN_10a52300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a52310(undefined4 *param_1);
template<class... A> int FUN_10a52310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a52320(undefined4 *param_1);
template<class... A> int FUN_10a52320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a52330(undefined4 *param_1);
template<class... A> int FUN_10a52330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a52340(undefined4 *param_1);
template<class... A> int FUN_10a52340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10a52350(int *param_1);
template<class... A> int FUN_10a52350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10a52360(int *param_1);
template<class... A> int FUN_10a52360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10a52390(int *param_1);
template<class... A> int FUN_10a52390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10a523c0(int *param_1);
template<class... A> int FUN_10a523c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a53d10(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10a53d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a53d20(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10a53d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a53e40(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10a53e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53e90(undefined4 param_1);
template<class... A> int FUN_10a53e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53ea0(undefined4 param_1);
template<class... A> int FUN_10a53ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53eb0(undefined4 param_1);
template<class... A> int FUN_10a53eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53ec0(undefined4 param_1);
template<class... A> int FUN_10a53ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53ed0(undefined4 param_1);
template<class... A> int FUN_10a53ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53ee0(undefined4 param_1);
template<class... A> int FUN_10a53ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53ef0(undefined4 param_1);
template<class... A> int FUN_10a53ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53f00(undefined4 param_1);
template<class... A> int FUN_10a53f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53f10(undefined4 param_1);
template<class... A> int FUN_10a53f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53f20(undefined4 param_1);
template<class... A> int FUN_10a53f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53f30(undefined4 param_1);
template<class... A> int FUN_10a53f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a53f40(undefined4 param_1);
template<class... A> int FUN_10a53f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a53ff0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10a53ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a54000(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10a54000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a54010(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10a54010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a54020(undefined4 *param_1);
template<class... A> int FUN_10a54020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a54030(undefined4 *param_1);
template<class... A> int FUN_10a54030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10a541f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10a541f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a54360(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10a54360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a543d0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10a543d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a54440(undefined4 *param_1);
template<class... A> int FUN_10a54440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a54450(undefined4 *param_1);
template<class... A> int FUN_10a54450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a54460(int param_1);
template<class... A> int FUN_10a54460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a54470(int param_1);
template<class... A> int FUN_10a54470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a54980(int *param_1);
template<class... A> int FUN_10a54980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a54990(int *param_1);
template<class... A> int FUN_10a54990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a549a0(int *param_1);
template<class... A> int FUN_10a549a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a55fd0(int param_1,int param_2);
template<class... A> int FUN_10a55fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a615d0(void);
template<class... A> int FUN_10a615d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a615e0(void);
template<class... A> int FUN_10a615e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a615f0(void);
template<class... A> int FUN_10a615f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61600(void);
template<class... A> int FUN_10a61600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61610(void);
template<class... A> int FUN_10a61610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61620(void);
template<class... A> int FUN_10a61620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61630(void);
template<class... A> int FUN_10a61630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61640(void);
template<class... A> int FUN_10a61640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61650(void);
template<class... A> int FUN_10a61650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61660(void);
template<class... A> int FUN_10a61660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61670(void);
template<class... A> int FUN_10a61670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61680(void);
template<class... A> int FUN_10a61680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61690(void);
template<class... A> int FUN_10a61690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a616a0(void);
template<class... A> int FUN_10a616a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a616b0(int param_1);
template<class... A> int FUN_10a616b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a616c0(int param_1);
template<class... A> int FUN_10a616c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a616d0(int param_1);
template<class... A> int FUN_10a616d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a616e0(int param_1);
template<class... A> int FUN_10a616e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a616f0(int param_1);
template<class... A> int FUN_10a616f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a61700(int param_1);
template<class... A> int FUN_10a61700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a61710(int param_1);
template<class... A> int FUN_10a61710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a618c0(int param_1);
template<class... A> int FUN_10a618c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a618d0(int param_1);
template<class... A> int FUN_10a618d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a618e0(int param_1);
template<class... A> int FUN_10a618e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a618f0(int param_1);
template<class... A> int FUN_10a618f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a61900(int param_1);
template<class... A> int FUN_10a61900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a61910(int param_1);
template<class... A> int FUN_10a61910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a61920(int param_1);
template<class... A> int FUN_10a61920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10a61940(void);
template<class... A> int FUN_10a61940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10a61960(void);
template<class... A> int FUN_10a61960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a61980(int param_1);
template<class... A> int FUN_10a61980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a61a70(int param_1);
template<class... A> int FUN_10a61a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61a80(void);
template<class... A> int FUN_10a61a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61a90(void);
template<class... A> int FUN_10a61a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61aa0(void);
template<class... A> int FUN_10a61aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61ab0(void);
template<class... A> int FUN_10a61ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61ac0(void);
template<class... A> int FUN_10a61ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a61ad0(void);
template<class... A> int FUN_10a61ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a64290(undefined4 *param_1);
template<class... A> int FUN_10a64290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a64370(undefined4 *param_1);
template<class... A> int FUN_10a64370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a643a0(undefined4 *param_1);
template<class... A> int FUN_10a643a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a644f0(undefined4 param_1);
template<class... A> int FUN_10a644f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64500(undefined4 param_1);
template<class... A> int FUN_10a64500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64510(undefined4 param_1);
template<class... A> int FUN_10a64510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a648a0(int *param_1);
template<class... A> int FUN_10a648a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a648b0(int *param_1);
template<class... A> int FUN_10a648b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a648c0(void);
template<class... A> int FUN_10a648c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a648d0(void);
template<class... A> int FUN_10a648d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a648e0(void);
template<class... A> int FUN_10a648e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a648f0(void);
template<class... A> int FUN_10a648f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64900(void);
template<class... A> int FUN_10a64900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64910(void);
template<class... A> int FUN_10a64910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64920(void);
template<class... A> int FUN_10a64920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64930(void);
template<class... A> int FUN_10a64930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64940(void);
template<class... A> int FUN_10a64940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64950(void);
template<class... A> int FUN_10a64950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64960(void);
template<class... A> int FUN_10a64960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a64970(void);
template<class... A> int FUN_10a64970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67050(undefined4 *param_1);
template<class... A> int FUN_10a67050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67080(undefined4 *param_1);
template<class... A> int FUN_10a67080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67090(undefined4 *param_1);
template<class... A> int FUN_10a67090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a670a0(undefined4 *param_1);
template<class... A> int FUN_10a670a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a670b0(undefined4 *param_1);
template<class... A> int FUN_10a670b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a670c0(undefined4 *param_1);
template<class... A> int FUN_10a670c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a670d0(undefined4 *param_1);
template<class... A> int FUN_10a670d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a670e0(undefined4 *param_1);
template<class... A> int FUN_10a670e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a670f0(undefined4 *param_1);
template<class... A> int FUN_10a670f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67100(undefined4 *param_1);
template<class... A> int FUN_10a67100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67110(undefined4 *param_1);
template<class... A> int FUN_10a67110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67120(undefined4 *param_1);
template<class... A> int FUN_10a67120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67130(undefined4 *param_1);
template<class... A> int FUN_10a67130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67140(undefined4 *param_1);
template<class... A> int FUN_10a67140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67170(undefined4 *param_1);
template<class... A> int FUN_10a67170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67190(undefined4 *param_1);
template<class... A> int FUN_10a67190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a671c0(undefined4 *param_1);
template<class... A> int FUN_10a671c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a671e0(undefined4 *param_1);
template<class... A> int FUN_10a671e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67210(undefined4 *param_1);
template<class... A> int FUN_10a67210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67230(undefined4 *param_1);
template<class... A> int FUN_10a67230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67260(undefined4 *param_1);
template<class... A> int FUN_10a67260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67280(undefined4 *param_1);
template<class... A> int FUN_10a67280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a672b0(undefined4 *param_1);
template<class... A> int FUN_10a672b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a672d0(undefined4 *param_1);
template<class... A> int FUN_10a672d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67300(undefined4 *param_1);
template<class... A> int FUN_10a67300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67320(undefined4 *param_1);
template<class... A> int FUN_10a67320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67350(undefined4 *param_1);
template<class... A> int FUN_10a67350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67370(undefined4 *param_1);
template<class... A> int FUN_10a67370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a673a0(undefined4 *param_1);
template<class... A> int FUN_10a673a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a673c0(undefined4 *param_1);
template<class... A> int FUN_10a673c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a673f0(undefined4 *param_1);
template<class... A> int FUN_10a673f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67410(undefined4 *param_1);
template<class... A> int FUN_10a67410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67440(undefined4 *param_1);
template<class... A> int FUN_10a67440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67460(undefined4 *param_1);
template<class... A> int FUN_10a67460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67490(undefined4 *param_1);
template<class... A> int FUN_10a67490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a674b0(undefined4 *param_1);
template<class... A> int FUN_10a674b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a674e0(undefined4 *param_1);
template<class... A> int FUN_10a674e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a67500(undefined4 *param_1);
template<class... A> int FUN_10a67500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a70ff0(void);
template<class... A> int FUN_10a70ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71000(void);
template<class... A> int FUN_10a71000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71010(void);
template<class... A> int FUN_10a71010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71020(void);
template<class... A> int FUN_10a71020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71030(void);
template<class... A> int FUN_10a71030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71040(void);
template<class... A> int FUN_10a71040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71050(void);
template<class... A> int FUN_10a71050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71060(void);
template<class... A> int FUN_10a71060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71070(void);
template<class... A> int FUN_10a71070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71080(void);
template<class... A> int FUN_10a71080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a71090(void);
template<class... A> int FUN_10a71090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a710a0(void);
template<class... A> int FUN_10a710a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a710b0(void);
template<class... A> int FUN_10a710b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a711c0(void);
template<class... A> int FUN_10a711c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a711d0(void);
template<class... A> int FUN_10a711d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a711e0(void);
template<class... A> int FUN_10a711e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71cb0(undefined4 *param_1);
template<class... A> int FUN_10a71cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71ce0(undefined4 *param_1);
template<class... A> int FUN_10a71ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71cf0(undefined4 *param_1);
template<class... A> int FUN_10a71cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71d00(undefined4 *param_1);
template<class... A> int FUN_10a71d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71d10(undefined4 *param_1);
template<class... A> int FUN_10a71d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71d40(undefined4 *param_1);
template<class... A> int FUN_10a71d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71d60(undefined4 *param_1);
template<class... A> int FUN_10a71d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71d90(undefined4 *param_1);
template<class... A> int FUN_10a71d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71db0(undefined4 *param_1);
template<class... A> int FUN_10a71db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71de0(undefined4 *param_1);
template<class... A> int FUN_10a71de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a71e00(undefined4 *param_1);
template<class... A> int FUN_10a71e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a741a0(void);
template<class... A> int FUN_10a741a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a741b0(void);
template<class... A> int FUN_10a741b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a741c0(void);
template<class... A> int FUN_10a741c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a741d0(void);
template<class... A> int FUN_10a741d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a742e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10a742e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a74500(int param_1,int param_2);
template<class... A> int FUN_10a74500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a74c70(undefined4 *param_1);
template<class... A> int FUN_10a74c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a74c80(void);
template<class... A> int FUN_10a74c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a74c90(undefined4 param_1);
template<class... A> int FUN_10a74c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a74ec0(undefined4 param_1);
template<class... A> int FUN_10a74ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10a75160(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10a75160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75240(undefined4 param_1);
template<class... A> int FUN_10a75240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75250(undefined4 param_1);
template<class... A> int FUN_10a75250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75260(undefined4 param_1);
template<class... A> int FUN_10a75260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75270(undefined4 param_1);
template<class... A> int FUN_10a75270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75280(undefined4 param_1);
template<class... A> int FUN_10a75280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75290(void);
template<class... A> int FUN_10a75290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a752a0(void);
template<class... A> int FUN_10a752a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a752b0(void);
template<class... A> int FUN_10a752b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75410(undefined4 param_1);
template<class... A> int FUN_10a75410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a75420(undefined4 param_1);
template<class... A> int FUN_10a75420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a75430(undefined4 *param_1);
template<class... A> int FUN_10a75430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a757d0(undefined4 *param_1);
template<class... A> int FUN_10a757d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a757f0(undefined4 *param_1);
template<class... A> int FUN_10a757f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a75840(undefined4 *param_1);
template<class... A> int FUN_10a75840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a75860(undefined4 *param_1);
template<class... A> int FUN_10a75860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a75870(undefined4 *param_1);
template<class... A> int FUN_10a75870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a758a0(undefined4 *param_1);
template<class... A> int FUN_10a758a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a758c0(undefined4 param_1);
template<class... A> int FUN_10a758c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a75950(undefined4 *param_1);
template<class... A> int FUN_10a75950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a769a0(undefined4 *param_1);
template<class... A> int FUN_10a769a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a769d0(undefined4 *param_1);
template<class... A> int FUN_10a769d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a769e0(undefined4 *param_1);
template<class... A> int FUN_10a769e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a769f0(undefined4 *param_1);
template<class... A> int FUN_10a769f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a76c90(undefined4 *param_1);
template<class... A> int FUN_10a76c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a76cb0(undefined4 *param_1);
template<class... A> int FUN_10a76cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a76ce0(undefined4 *param_1);
template<class... A> int FUN_10a76ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a76d00(undefined4 *param_1);
template<class... A> int FUN_10a76d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a76d30(undefined4 *param_1);
template<class... A> int FUN_10a76d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10a77190(int *param_1);
template<class... A> int FUN_10a77190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a771a0(undefined4 *param_1);
template<class... A> int FUN_10a771a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a771b0(undefined4 *param_1);
template<class... A> int FUN_10a771b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a77930(undefined4 param_1);
template<class... A> int FUN_10a77930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77940(undefined4 param_1);
template<class... A> int FUN_10a77940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77950(undefined4 param_1);
template<class... A> int FUN_10a77950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77960(undefined4 param_1);
template<class... A> int FUN_10a77960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77970(undefined4 param_1);
template<class... A> int FUN_10a77970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77980(undefined4 param_1);
template<class... A> int FUN_10a77980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a77990(undefined4 param_1);
template<class... A> int FUN_10a77990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10a779f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10a779f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a77a00(undefined4 *param_1);
template<class... A> int FUN_10a77a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10a77db0(uint param_1);
template<class... A> int FUN_10a77db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a783b0(int *param_1);
template<class... A> int FUN_10a783b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7bfd0(void);
template<class... A> int FUN_10a7bfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7bfe0(void);
template<class... A> int FUN_10a7bfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7bff0(void);
template<class... A> int FUN_10a7bff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7c000(void);
template<class... A> int FUN_10a7c000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a7c040(int param_1);
template<class... A> int FUN_10a7c040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a7c050(int param_1);
template<class... A> int FUN_10a7c050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10a7c060(int param_1);
template<class... A> int FUN_10a7c060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7c0b0(void);
template<class... A> int FUN_10a7c0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7c0c0(void);
template<class... A> int FUN_10a7c0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a7ca90(undefined4 *param_1);
template<class... A> int FUN_10a7ca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7cbf0(undefined4 *param_1);
template<class... A> int FUN_10a7cbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7cc20(undefined4 *param_1);
template<class... A> int FUN_10a7cc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a7cea0(int param_1);
template<class... A> int FUN_10a7cea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a7cec0(int param_1);
template<class... A> int FUN_10a7cec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a7ced0(int *param_1);
template<class... A> int FUN_10a7ced0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7cef0(void);
template<class... A> int FUN_10a7cef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7cf00(void);
template<class... A> int FUN_10a7cf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a7cf10(void);
template<class... A> int FUN_10a7cf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7d9e0(undefined4 *param_1);
template<class... A> int FUN_10a7d9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da10(undefined4 *param_1);
template<class... A> int FUN_10a7da10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da20(undefined4 *param_1);
template<class... A> int FUN_10a7da20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da30(undefined4 *param_1);
template<class... A> int FUN_10a7da30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da40(undefined4 *param_1);
template<class... A> int FUN_10a7da40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da70(undefined4 *param_1);
template<class... A> int FUN_10a7da70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7da90(undefined4 *param_1);
template<class... A> int FUN_10a7da90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7dac0(undefined4 *param_1);
template<class... A> int FUN_10a7dac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7dae0(undefined4 *param_1);
template<class... A> int FUN_10a7dae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7db10(undefined4 *param_1);
template<class... A> int FUN_10a7db10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a7db30(undefined4 *param_1);
template<class... A> int FUN_10a7db30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a80340(void);
template<class... A> int FUN_10a80340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a80350(void);
template<class... A> int FUN_10a80350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a80360(void);
template<class... A> int FUN_10a80360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a80370(void);
template<class... A> int FUN_10a80370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a803d0(void);
template<class... A> int FUN_10a803d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a803e0(void);
template<class... A> int FUN_10a803e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10a80400(int *param_1,int *param_2);
template<class... A> int FUN_10a80400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a80ca0(undefined4 *param_1);
template<class... A> int FUN_10a80ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a80cb0(undefined4 *param_1);
template<class... A> int FUN_10a80cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a80cc0(undefined4 *param_1);
template<class... A> int FUN_10a80cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a80cf0(undefined4 *param_1);
template<class... A> int FUN_10a80cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a80df0(undefined4 *param_1);
template<class... A> int FUN_10a80df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a80e10(undefined4 *param_1);
template<class... A> int FUN_10a80e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a82f60(void);
template<class... A> int FUN_10a82f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a82f70(void);
template<class... A> int FUN_10a82f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a82f80(void);
template<class... A> int FUN_10a82f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a83b60(void);
template<class... A> int FUN_10a83b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a83b70(void);
template<class... A> int FUN_10a83b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a83b80(void);
template<class... A> int FUN_10a83b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a846e0(undefined4 *param_1);
template<class... A> int FUN_10a846e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84710(undefined4 *param_1);
template<class... A> int FUN_10a84710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84720(undefined4 *param_1);
template<class... A> int FUN_10a84720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84730(undefined4 *param_1);
template<class... A> int FUN_10a84730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84740(undefined4 *param_1);
template<class... A> int FUN_10a84740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84770(undefined4 *param_1);
template<class... A> int FUN_10a84770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84790(undefined4 *param_1);
template<class... A> int FUN_10a84790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a847c0(undefined4 *param_1);
template<class... A> int FUN_10a847c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a847e0(undefined4 *param_1);
template<class... A> int FUN_10a847e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84810(undefined4 *param_1);
template<class... A> int FUN_10a84810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a84830(undefined4 *param_1);
template<class... A> int FUN_10a84830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a87e40(void);
template<class... A> int FUN_10a87e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a87e50(void);
template<class... A> int FUN_10a87e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a87e60(void);
template<class... A> int FUN_10a87e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a87e70(void);
template<class... A> int FUN_10a87e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88bc0(undefined4 param_1);
template<class... A> int FUN_10a88bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10a88bd0(int param_1,undefined4 *param_2);
template<class... A> int FUN_10a88bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88c30(undefined4 param_1);
template<class... A> int FUN_10a88c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88c40(void);
template<class... A> int FUN_10a88c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88c50(void);
template<class... A> int FUN_10a88c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88c60(void);
template<class... A> int FUN_10a88c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a88c70(void);
template<class... A> int FUN_10a88c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10a890d0(undefined4 *param_1);
template<class... A> int FUN_10a890d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89b40(undefined4 *param_1);
template<class... A> int FUN_10a89b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89b70(undefined4 *param_1);
template<class... A> int FUN_10a89b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89b80(undefined4 *param_1);
template<class... A> int FUN_10a89b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89b90(undefined4 *param_1);
template<class... A> int FUN_10a89b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89ba0(undefined4 *param_1);
template<class... A> int FUN_10a89ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89bb0(undefined4 *param_1);
template<class... A> int FUN_10a89bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89be0(undefined4 *param_1);
template<class... A> int FUN_10a89be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89c00(undefined4 *param_1);
template<class... A> int FUN_10a89c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89c30(undefined4 *param_1);
template<class... A> int FUN_10a89c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89c50(undefined4 *param_1);
template<class... A> int FUN_10a89c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89c80(undefined4 *param_1);
template<class... A> int FUN_10a89c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89ca0(undefined4 *param_1);
template<class... A> int FUN_10a89ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a89cd0(undefined4 *param_1);
template<class... A> int FUN_10a89cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a89ed0(int *param_1);
template<class... A> int FUN_10a89ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10a89ee0(int *param_1);
template<class... A> int FUN_10a89ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a8a4e0(undefined4 param_1);
template<class... A> int FUN_10a8a4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a8a4f0(undefined4 param_1);
template<class... A> int FUN_10a8a4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90640(void);
template<class... A> int FUN_10a90640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90650(void);
template<class... A> int FUN_10a90650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90660(void);
template<class... A> int FUN_10a90660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90670(void);
template<class... A> int FUN_10a90670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90680(void);
template<class... A> int FUN_10a90680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a906a0(int param_1);
template<class... A> int FUN_10a906a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a906b0(int param_1);
template<class... A> int FUN_10a906b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90d30(undefined4 param_1);
template<class... A> int FUN_10a90d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f40(void);
template<class... A> int FUN_10a90f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f50(void);
template<class... A> int FUN_10a90f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f60(void);
template<class... A> int FUN_10a90f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f70(void);
template<class... A> int FUN_10a90f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f80(void);
template<class... A> int FUN_10a90f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90f90(void);
template<class... A> int FUN_10a90f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a90fa0(void);
template<class... A> int FUN_10a90fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a927d0(undefined4 *param_1);
template<class... A> int FUN_10a927d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a927e0(undefined4 *param_1);
template<class... A> int FUN_10a927e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a927f0(undefined4 *param_1);
template<class... A> int FUN_10a927f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92800(undefined4 *param_1);
template<class... A> int FUN_10a92800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92810(undefined4 *param_1);
template<class... A> int FUN_10a92810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92820(undefined4 *param_1);
template<class... A> int FUN_10a92820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92830(undefined4 *param_1);
template<class... A> int FUN_10a92830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92840(undefined4 *param_1);
template<class... A> int FUN_10a92840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92870(undefined4 *param_1);
template<class... A> int FUN_10a92870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92890(undefined4 *param_1);
template<class... A> int FUN_10a92890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a928c0(undefined4 *param_1);
template<class... A> int FUN_10a928c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a928e0(undefined4 *param_1);
template<class... A> int FUN_10a928e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92910(undefined4 *param_1);
template<class... A> int FUN_10a92910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a929e0(undefined4 *param_1);
template<class... A> int FUN_10a929e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92a50(undefined4 *param_1);
template<class... A> int FUN_10a92a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92b20(undefined4 *param_1);
template<class... A> int FUN_10a92b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92b40(undefined4 *param_1);
template<class... A> int FUN_10a92b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a92b70(undefined4 *param_1);
template<class... A> int FUN_10a92b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10a92c80(int *param_1);
template<class... A> int FUN_10a92c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99920(void);
template<class... A> int FUN_10a99920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99930(void);
template<class... A> int FUN_10a99930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99940(void);
template<class... A> int FUN_10a99940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99950(void);
template<class... A> int FUN_10a99950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99960(void);
template<class... A> int FUN_10a99960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99970(void);
template<class... A> int FUN_10a99970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99980(void);
template<class... A> int FUN_10a99980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a99990(void);
template<class... A> int FUN_10a99990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a999b0(int param_1);
template<class... A> int FUN_10a999b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a999c0(int param_1);
template<class... A> int FUN_10a999c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a200(void);
template<class... A> int FUN_10a9a200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a210(void);
template<class... A> int FUN_10a9a210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a220(void);
template<class... A> int FUN_10a9a220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a230(void);
template<class... A> int FUN_10a9a230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a240(void);
template<class... A> int FUN_10a9a240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10a9a250(void);
template<class... A> int FUN_10a9a250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b770(undefined4 *param_1);
template<class... A> int FUN_10a9b770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7a0(undefined4 *param_1);
template<class... A> int FUN_10a9b7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7b0(undefined4 *param_1);
template<class... A> int FUN_10a9b7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7c0(undefined4 *param_1);
template<class... A> int FUN_10a9b7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7d0(undefined4 *param_1);
template<class... A> int FUN_10a9b7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7e0(undefined4 *param_1);
template<class... A> int FUN_10a9b7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b7f0(undefined4 *param_1);
template<class... A> int FUN_10a9b7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b800(undefined4 *param_1);
template<class... A> int FUN_10a9b800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b830(undefined4 *param_1);
template<class... A> int FUN_10a9b830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b850(undefined4 *param_1);
template<class... A> int FUN_10a9b850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b880(undefined4 *param_1);
template<class... A> int FUN_10a9b880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b8a0(undefined4 *param_1);
template<class... A> int FUN_10a9b8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b8d0(undefined4 *param_1);
template<class... A> int FUN_10a9b8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b9b0(undefined4 *param_1);
template<class... A> int FUN_10a9b9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9b9d0(undefined4 *param_1);
template<class... A> int FUN_10a9b9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9ba00(undefined4 *param_1);
template<class... A> int FUN_10a9ba00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9ba20(undefined4 *param_1);
template<class... A> int FUN_10a9ba20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10a9ba50(undefined4 *param_1);
template<class... A> int FUN_10a9ba50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10a9f830(int param_1);
template<class... A> int FUN_10a9f830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1440(void);
template<class... A> int FUN_10aa1440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1450(void);
template<class... A> int FUN_10aa1450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1460(void);
template<class... A> int FUN_10aa1460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1470(void);
template<class... A> int FUN_10aa1470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1480(void);
template<class... A> int FUN_10aa1480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa1490(void);
template<class... A> int FUN_10aa1490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa14a0(void);
template<class... A> int FUN_10aa14a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10aa18b0(int param_1);
template<class... A> int FUN_10aa18b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10aa18c0(int param_1);
template<class... A> int FUN_10aa18c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10aa18d0(int *param_1);
template<class... A> int FUN_10aa18d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2960(void);
template<class... A> int FUN_10aa2960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2970(void);
template<class... A> int FUN_10aa2970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2980(void);
template<class... A> int FUN_10aa2980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2990(void);
template<class... A> int FUN_10aa2990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29a0(void);
template<class... A> int FUN_10aa29a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29b0(void);
template<class... A> int FUN_10aa29b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29c0(void);
template<class... A> int FUN_10aa29c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29d0(void);
template<class... A> int FUN_10aa29d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29e0(void);
template<class... A> int FUN_10aa29e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa29f0(void);
template<class... A> int FUN_10aa29f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a00(void);
template<class... A> int FUN_10aa2a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a10(void);
template<class... A> int FUN_10aa2a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a20(void);
template<class... A> int FUN_10aa2a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a30(void);
template<class... A> int FUN_10aa2a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a40(void);
template<class... A> int FUN_10aa2a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aa2a50(void);
template<class... A> int FUN_10aa2a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e10(undefined4 *param_1);
template<class... A> int FUN_10aa5e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e40(undefined4 *param_1);
template<class... A> int FUN_10aa5e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e50(undefined4 *param_1);
template<class... A> int FUN_10aa5e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e60(undefined4 *param_1);
template<class... A> int FUN_10aa5e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e70(undefined4 *param_1);
template<class... A> int FUN_10aa5e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e80(undefined4 *param_1);
template<class... A> int FUN_10aa5e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5e90(undefined4 *param_1);
template<class... A> int FUN_10aa5e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5ea0(undefined4 *param_1);
template<class... A> int FUN_10aa5ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5eb0(undefined4 *param_1);
template<class... A> int FUN_10aa5eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5ec0(undefined4 *param_1);
template<class... A> int FUN_10aa5ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5ed0(undefined4 *param_1);
template<class... A> int FUN_10aa5ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5ee0(undefined4 *param_1);
template<class... A> int FUN_10aa5ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5ef0(undefined4 *param_1);
template<class... A> int FUN_10aa5ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f00(undefined4 *param_1);
template<class... A> int FUN_10aa5f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f10(undefined4 *param_1);
template<class... A> int FUN_10aa5f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f20(undefined4 *param_1);
template<class... A> int FUN_10aa5f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f30(undefined4 *param_1);
template<class... A> int FUN_10aa5f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f40(undefined4 *param_1);
template<class... A> int FUN_10aa5f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f70(undefined4 *param_1);
template<class... A> int FUN_10aa5f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5f90(undefined4 *param_1);
template<class... A> int FUN_10aa5f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5fc0(undefined4 *param_1);
template<class... A> int FUN_10aa5fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa5fe0(undefined4 *param_1);
template<class... A> int FUN_10aa5fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6010(undefined4 *param_1);
template<class... A> int FUN_10aa6010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6030(undefined4 *param_1);
template<class... A> int FUN_10aa6030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6060(undefined4 *param_1);
template<class... A> int FUN_10aa6060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6080(undefined4 *param_1);
template<class... A> int FUN_10aa6080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa60b0(undefined4 *param_1);
template<class... A> int FUN_10aa60b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa60d0(undefined4 *param_1);
template<class... A> int FUN_10aa60d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6100(undefined4 *param_1);
template<class... A> int FUN_10aa6100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6120(undefined4 *param_1);
template<class... A> int FUN_10aa6120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6150(undefined4 *param_1);
template<class... A> int FUN_10aa6150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6170(undefined4 *param_1);
template<class... A> int FUN_10aa6170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa61a0(undefined4 *param_1);
template<class... A> int FUN_10aa61a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa61c0(undefined4 *param_1);
template<class... A> int FUN_10aa61c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa61f0(undefined4 *param_1);
template<class... A> int FUN_10aa61f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6210(undefined4 *param_1);
template<class... A> int FUN_10aa6210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6240(undefined4 *param_1);
template<class... A> int FUN_10aa6240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6260(undefined4 *param_1);
template<class... A> int FUN_10aa6260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6290(undefined4 *param_1);
template<class... A> int FUN_10aa6290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa62b0(undefined4 *param_1);
template<class... A> int FUN_10aa62b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa62e0(undefined4 *param_1);
template<class... A> int FUN_10aa62e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6300(undefined4 *param_1);
template<class... A> int FUN_10aa6300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6330(undefined4 *param_1);
template<class... A> int FUN_10aa6330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6350(undefined4 *param_1);
template<class... A> int FUN_10aa6350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6380(undefined4 *param_1);
template<class... A> int FUN_10aa6380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa63a0(undefined4 *param_1);
template<class... A> int FUN_10aa63a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa63d0(undefined4 *param_1);
template<class... A> int FUN_10aa63d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa63f0(undefined4 *param_1);
template<class... A> int FUN_10aa63f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6420(undefined4 *param_1);
template<class... A> int FUN_10aa6420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aa6440(undefined4 *param_1);
template<class... A> int FUN_10aa6440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2480(void);
template<class... A> int FUN_10ab2480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2490(void);
template<class... A> int FUN_10ab2490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24a0(void);
template<class... A> int FUN_10ab24a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24b0(void);
template<class... A> int FUN_10ab24b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24c0(void);
template<class... A> int FUN_10ab24c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24d0(void);
template<class... A> int FUN_10ab24d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24e0(void);
template<class... A> int FUN_10ab24e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab24f0(void);
template<class... A> int FUN_10ab24f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2500(void);
template<class... A> int FUN_10ab2500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2510(void);
template<class... A> int FUN_10ab2510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2520(void);
template<class... A> int FUN_10ab2520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2530(void);
template<class... A> int FUN_10ab2530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2540(void);
template<class... A> int FUN_10ab2540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2550(void);
template<class... A> int FUN_10ab2550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2560(void);
template<class... A> int FUN_10ab2560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2570(void);
template<class... A> int FUN_10ab2570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2580(void);
template<class... A> int FUN_10ab2580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab2ed0(void);
template<class... A> int FUN_10ab2ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab3360(undefined4 *param_1);
template<class... A> int FUN_10ab3360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab3390(undefined4 *param_1);
template<class... A> int FUN_10ab3390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab33a0(undefined4 *param_1);
template<class... A> int FUN_10ab33a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab33d0(undefined4 *param_1);
template<class... A> int FUN_10ab33d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab33f0(undefined4 *param_1);
template<class... A> int FUN_10ab33f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab3ef0(void);
template<class... A> int FUN_10ab3ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab3f00(void);
template<class... A> int FUN_10ab3f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab3f40(void);
template<class... A> int FUN_10ab3f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab3f50(void);
template<class... A> int FUN_10ab3f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab4780(undefined4 *param_1);
template<class... A> int FUN_10ab4780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab47b0(undefined4 *param_1);
template<class... A> int FUN_10ab47b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab47c0(undefined4 *param_1);
template<class... A> int FUN_10ab47c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab47d0(undefined4 *param_1);
template<class... A> int FUN_10ab47d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab4800(undefined4 *param_1);
template<class... A> int FUN_10ab4800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab4820(undefined4 *param_1);
template<class... A> int FUN_10ab4820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab4850(undefined4 *param_1);
template<class... A> int FUN_10ab4850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab4870(undefined4 *param_1);
template<class... A> int FUN_10ab4870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab5f50(void);
template<class... A> int FUN_10ab5f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab5f60(void);
template<class... A> int FUN_10ab5f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab5f70(void);
template<class... A> int FUN_10ab5f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ab5fc0(int param_1);
template<class... A> int FUN_10ab5fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ab5fd0(int param_1);
template<class... A> int FUN_10ab5fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab6180(undefined4 *param_1);
template<class... A> int FUN_10ab6180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ab6190(undefined4 *param_1);
template<class... A> int FUN_10ab6190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6370(void);
template<class... A> int FUN_10ab6370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63a0(void);
template<class... A> int FUN_10ab63a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63b0(void);
template<class... A> int FUN_10ab63b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63c0(void);
template<class... A> int FUN_10ab63c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63d0(void);
template<class... A> int FUN_10ab63d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63e0(void);
template<class... A> int FUN_10ab63e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab63f0(void);
template<class... A> int FUN_10ab63f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6400(void);
template<class... A> int FUN_10ab6400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6410(void);
template<class... A> int FUN_10ab6410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6420(void);
template<class... A> int FUN_10ab6420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6430(void);
template<class... A> int FUN_10ab6430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6440(void);
template<class... A> int FUN_10ab6440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6450(void);
template<class... A> int FUN_10ab6450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6460(void);
template<class... A> int FUN_10ab6460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6470(void);
template<class... A> int FUN_10ab6470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6480(void);
template<class... A> int FUN_10ab6480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6490(void);
template<class... A> int FUN_10ab6490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64a0(void);
template<class... A> int FUN_10ab64a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64b0(void);
template<class... A> int FUN_10ab64b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64c0(void);
template<class... A> int FUN_10ab64c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64d0(void);
template<class... A> int FUN_10ab64d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64e0(void);
template<class... A> int FUN_10ab64e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab64f0(void);
template<class... A> int FUN_10ab64f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6500(void);
template<class... A> int FUN_10ab6500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6510(void);
template<class... A> int FUN_10ab6510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6520(void);
template<class... A> int FUN_10ab6520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6530(void);
template<class... A> int FUN_10ab6530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6540(void);
template<class... A> int FUN_10ab6540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6550(void);
template<class... A> int FUN_10ab6550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6560(void);
template<class... A> int FUN_10ab6560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6570(void);
template<class... A> int FUN_10ab6570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6580(void);
template<class... A> int FUN_10ab6580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab6590(void);
template<class... A> int FUN_10ab6590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab65a0(void);
template<class... A> int FUN_10ab65a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab65b0(void);
template<class... A> int FUN_10ab65b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab65c0(void);
template<class... A> int FUN_10ab65c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab65d0(void);
template<class... A> int FUN_10ab65d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ab65e0(void);
template<class... A> int FUN_10ab65e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abda90(undefined4 *param_1);
template<class... A> int FUN_10abda90(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);
extern void __fastcall FUN_106de7d0(void *param_1);
extern void __fastcall FUN_106de840(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);
extern void __fastcall thunk_FUN_106de840(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_RUpnpHTCCommitLearnedIRCodesAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpHTCIdentifyIRRemoteAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpHTCLearnIRCodeAIOOp_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccessibilityTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountSecureTransferWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAnimationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAutoApConnectTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCBasicWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCChirpTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCCopyTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCDiscoveryHistoryWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCDiscoveryWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCDtlsTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCFlareDemoWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCFlutterTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCGhostWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCMockWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonosVoiceTutorialWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSystemConfigWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSystemIdWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCTVRemoteControlWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCTVSetupWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCUpdateCheckWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCUpdateSystemWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCVoiceServiceConcurrencyWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCVoiceServiceLocaleWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCWacConnectWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCWiredConnectWizard_;

extern int ghidra_vftable_SCNewWizPageFor_SCAccessibilityTestWizard__SCAccessibilityTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountSecureTransferWizard__SCAccountSecureTransferWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAnimationWizard__SCAnimationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAutoApConnectTestWizard__SCAutoApConnectTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCBasicWizard__SCBasicWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCChirpTestWizard__SCChirpTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCCopyTestWizard__SCCopyTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCDiscoveryHistoryWizard__SCDiscoveryHistoryWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCDiscoveryWizard__SCDiscoveryWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCDtlsTestWizard__SCDtlsTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCFlareDemoWizard__SCFlareDemoWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCFlutterTestWizard__SCFlutterTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCGhostWizard__SCGhostWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCMockWizard__SCMockWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonosVoiceTutorialWizard__SCSonosVoiceTutorialWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSystemConfigWizard__SCSystemConfigWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSystemIdWizard__SCSystemIdWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCTVRemoteControlWizard__SCTVRemoteControlWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCTVSetupWizard__SCTVSetupWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCUpdateCheckWizard__SCUpdateCheckWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCUpdateSystemWizard__SCUpdateSystemWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCVoiceServiceConcurrencyWizard__SCVoiceServiceConcurrencyWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCVoiceServiceLocaleWizard__SCVoiceServiceLocaleWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCWacConnectWizard__SCWacConnectWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCWiredConnectWizard__SCWiredConnectWizard_;

// Reference entry 109d8e50; body size 25 bytes.
extern int __stdcall thunk_FUN_10246290(int a1,int a2);
extern int __stdcall thunk_FUN_10475400(int a1);
extern int __stdcall thunk_FUN_106d91c0(int a1,int a2);
extern int __stdcall thunk_FUN_106dbf00(int a1);
extern int __stdcall thunk_FUN_10a4edc0(int a1);
extern int __stdcall thunk_FUN_10bcef80(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4cc0(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4d80(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4e80(int a1,int a2);
extern int __stdcall thunk_FUN_10eb64f0(int a1);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
extern int __stdcall thunk_FUN_11262400(int a1);
struct SCFp_72_0 { char _p[72]; int (__thiscall *v)(void); };
struct SCFp_76_0 { char _p[76]; int (__thiscall *v)(void); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_11_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(int a1); };
struct SCVtbl_11_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(int a1,int a2); };
struct SCVtbl_15_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual int v(void); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
int FUN_10002e55();
int FUN_1008cfec();
int FUN_1000d2bf();
int FUN_10064623();
int FUN_1005f5e2();
int FUN_10024127(void);
int FUN_1005c743(void);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
template<class... A> int FUN_10024127(A...);
template<class... A> int FUN_1005c743(A...);
#line 1 "ENTRY_109d8e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109d8e50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 109d8fc0; body size 64 bytes.
#line 1 "ENTRY_109d8fc0"

__declspec(naked) void FUN_109d8fc0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f0040
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f009c
  __asm mov dword ptr [esi + 0x8c], LAB_118f00a8
  __asm mov dword ptr [esi + 0xa8], LAB_118f00b4
  __asm mov byte ptr [esi + 0xe0], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109d9110; body size 57 bytes.
#line 1 "ENTRY_109d9110"

__declspec(naked) void FUN_109d9110(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f02e8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f0344
  __asm mov dword ptr [esi + 0x8c], LAB_118f0350
  __asm mov dword ptr [esi + 0xa8], LAB_118f035c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109d9470; body size 64 bytes.
#line 1 "ENTRY_109d9470"

__declspec(naked) void FUN_109d9470(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f0130
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f018c
  __asm mov dword ptr [esi + 0x8c], LAB_118f0198
  __asm mov dword ptr [esi + 0xa8], LAB_118f01a4
  __asm mov byte ptr [esi + 0xe0], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109d95c0; body size 57 bytes.
#line 1 "ENTRY_109d95c0"

__declspec(naked) void FUN_109d95c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f020c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f0268
  __asm mov dword ptr [esi + 0x8c], LAB_118f0274
  __asm mov dword ptr [esi + 0xa8], LAB_118f0280
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109d9d10; body size 38 bytes.
#line 1 "ENTRY_109d9d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9d10(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109d9d40; body size 11 bytes.
#line 1 "ENTRY_109d9d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9d40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109d9d50; body size 11 bytes.
#line 1 "ENTRY_109d9d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9d50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109d9d60; body size 11 bytes.
#line 1 "ENTRY_109d9d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109d9d70; body size 11 bytes.
#line 1 "ENTRY_109d9d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109d9d80; body size 11 bytes.
#line 1 "ENTRY_109d9d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9d80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109d9ec0; body size 38 bytes.
#line 1 "ENTRY_109d9ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9ec0(undefined4 *param_1)

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


// Reference entry 109d9ef0; body size 38 bytes.
#line 1 "ENTRY_109d9ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9ef0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109d9f20; body size 21 bytes.
#line 1 "ENTRY_109d9f20"

__declspec(naked) void FUN_109d9f20(void)

{
  __asm mov dword ptr [LAB_121a40a0], 0
  __asm mov dword ptr [ecx], LAB_118efca8
  __asm jmp LAB_1003c4f2
}




// Reference entry 109d9f40; body size 38 bytes.
#line 1 "ENTRY_109d9f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9f40(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109d9f70; body size 21 bytes.
#line 1 "ENTRY_109d9f70"

__declspec(naked) void FUN_109d9f70(void)

{
  __asm mov dword ptr [LAB_121a40ac], 0
  __asm mov dword ptr [ecx], LAB_118efd94
  __asm jmp LAB_1003c4f2
}




// Reference entry 109d9f90; body size 38 bytes.
#line 1 "ENTRY_109d9f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9f90(undefined4 *param_1)

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


// Reference entry 109d9fc0; body size 21 bytes.
#line 1 "ENTRY_109d9fc0"

__declspec(naked) void FUN_109d9fc0(void)

{
  __asm mov dword ptr [LAB_121a409c], 0
  __asm mov dword ptr [ecx], LAB_118efc4c
  __asm jmp LAB_1003c4f2
}




// Reference entry 109d9fe0; body size 38 bytes.
#line 1 "ENTRY_109d9fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109d9fe0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109da010; body size 21 bytes.
#line 1 "ENTRY_109da010"

__declspec(naked) void FUN_109da010(void)

{
  __asm mov dword ptr [LAB_121a40a4], 0
  __asm mov dword ptr [ecx], LAB_118efcf4
  __asm jmp LAB_1003c4f2
}




// Reference entry 109da030; body size 38 bytes.
#line 1 "ENTRY_109da030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109da030(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109da060; body size 21 bytes.
#line 1 "ENTRY_109da060"

__declspec(naked) void FUN_109da060(void)

{
  __asm mov dword ptr [LAB_121a40a8], 0
  __asm mov dword ptr [ecx], LAB_118efd44
  __asm jmp LAB_1003c4f2
}




// Reference entry 109da210; body size 3 bytes.
#line 1 "ENTRY_109da210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109da210(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109da220; body size 7 bytes.
#line 1 "ENTRY_109da220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_109da220(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 109da230; body size 3 bytes.
#line 1 "ENTRY_109da230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109da230(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109dbde0; body size 9 bytes.
#line 1 "ENTRY_109dbde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109dbde0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 109de720; body size 23 bytes.
#line 1 "ENTRY_109de720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_109de720(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x104));
  return (SCStr *)(param_2);
}


// Reference entry 109de740; body size 23 bytes.
#line 1 "ENTRY_109de740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_109de740(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x100));
  return (SCStr *)(param_2);
}


// Reference entry 109e0330; body size 6 bytes.
#line 1 "ENTRY_109e0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0330(void)

{
  return (undefined4)(DAT_121a40a0);
}


// Reference entry 109e0340; body size 6 bytes.
#line 1 "ENTRY_109e0340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0340(void)

{
  return (undefined4)(DAT_121a40ac);
}


// Reference entry 109e0350; body size 6 bytes.
#line 1 "ENTRY_109e0350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0350(void)

{
  return (undefined4)(DAT_121a409c);
}


// Reference entry 109e0360; body size 6 bytes.
#line 1 "ENTRY_109e0360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0360(void)

{
  return (undefined4)(DAT_121a40a4);
}


// Reference entry 109e0370; body size 6 bytes.
#line 1 "ENTRY_109e0370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0370(void)

{
  return (undefined4)(DAT_121a40a8);
}


// Reference entry 109e0380; body size 6 bytes.
#line 1 "ENTRY_109e0380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e0380(void)

{
  return (undefined4)(DAT_121a4098);
}


// Reference entry 109e0390; body size 5 bytes.
#line 1 "ENTRY_109e0390"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e0390(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 109e05b0; body size 5 bytes.
#line 1 "ENTRY_109e05b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e05b0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 109e05c0; body size 5 bytes.
#line 1 "ENTRY_109e05c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e05c0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 109e05d0; body size 5 bytes.
#line 1 "ENTRY_109e05d0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e05d0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 109e05e0; body size 6 bytes.
#line 1 "ENTRY_109e05e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_109e05e0(void)

{
  return (char *)("SCIOpDevicePost");
}


// Reference entry 109e14d0; body size 3 bytes.
#line 1 "ENTRY_109e14d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e14d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109e14e0; body size 3 bytes.
#line 1 "ENTRY_109e14e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109e14e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109e14f0; body size 28 bytes.
#line 1 "ENTRY_109e14f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e14f0(undefined4 *param_1)

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


// Reference entry 109e1520; body size 20 bytes.
#line 1 "ENTRY_109e1520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e1520(int *param_1)

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


// Reference entry 109e1540; body size 39 bytes.
#line 1 "ENTRY_109e1540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109e1540(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x104));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 109e1570; body size 39 bytes.
#line 1 "ENTRY_109e1570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109e1570(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x100));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 109e15a0; body size 6 bytes.
#line 1 "ENTRY_109e15a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15a0(void)

{
  return (undefined4)(DAT_121a40f4);
}


// Reference entry 109e15b0; body size 6 bytes.
#line 1 "ENTRY_109e15b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15b0(void)

{
  return (undefined4)(DAT_121a4100);
}


// Reference entry 109e15c0; body size 6 bytes.
#line 1 "ENTRY_109e15c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15c0(void)

{
  return (undefined4)(DAT_121a4104);
}


// Reference entry 109e15d0; body size 6 bytes.
#line 1 "ENTRY_109e15d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15d0(void)

{
  return (undefined4)(DAT_121a410c);
}


// Reference entry 109e15e0; body size 6 bytes.
#line 1 "ENTRY_109e15e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15e0(void)

{
  return (undefined4)(DAT_121a4108);
}


// Reference entry 109e15f0; body size 6 bytes.
#line 1 "ENTRY_109e15f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e15f0(void)

{
  return (undefined4)(DAT_121a40fc);
}


// Reference entry 109e1600; body size 6 bytes.
#line 1 "ENTRY_109e1600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e1600(void)

{
  return (undefined4)(DAT_121a4110);
}


// Reference entry 109e1610; body size 6 bytes.
#line 1 "ENTRY_109e1610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109e1610(void)

{
  return (undefined4)(DAT_121a40f8);
}


// Reference entry 109e1630; body size 57 bytes.
#line 1 "ENTRY_109e1630"

__declspec(naked) void FUN_109e1630(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f0b0c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f0b68
  __asm mov dword ptr [esi + 0x8c], LAB_118f0b74
  __asm mov dword ptr [esi + 0xa8], LAB_118f0b80
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109e2360; body size 57 bytes.
#line 1 "ENTRY_109e2360"

__declspec(naked) void FUN_109e2360(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f0ba4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f0c00
  __asm mov dword ptr [esi + 0x8c], LAB_118f0c0c
  __asm mov dword ptr [esi + 0xa8], LAB_118f0c18
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109e24b0; body size 104 bytes.
#line 1 "ENTRY_109e24b0"

__declspec(naked) void FUN_109e24b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f0c54
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f0cb0
  __asm mov dword ptr [esi + 0x8c], LAB_118f0cbc
  __asm mov dword ptr [esi + 0xa8], LAB_118f0cc8
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [esi + 0xf0], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109e2640; body size 57 bytes.
#line 1 "ENTRY_109e2640"

__declspec(naked) void FUN_109e2640(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f0d94
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f0df0
  __asm mov dword ptr [esi + 0x8c], LAB_118f0dfc
  __asm mov dword ptr [esi + 0xa8], LAB_118f0e08
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109e2790; body size 64 bytes.
#line 1 "ENTRY_109e2790"

__declspec(naked) void FUN_109e2790(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f0cfc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f0d58
  __asm mov dword ptr [esi + 0x8c], LAB_118f0d64
  __asm mov dword ptr [esi + 0xa8], LAB_118f0d70
  __asm mov byte ptr [esi + 0xe0], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109e2af0; body size 57 bytes.
#line 1 "ENTRY_109e2af0"

__declspec(naked) void FUN_109e2af0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f0e8c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f0ee8
  __asm mov dword ptr [esi + 0x8c], LAB_118f0ef4
  __asm mov dword ptr [esi + 0xa8], LAB_118f0f00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109e36a0; body size 38 bytes.
#line 1 "ENTRY_109e36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e36a0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109e36d0; body size 11 bytes.
#line 1 "ENTRY_109e36d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e36d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109e36e0; body size 11 bytes.
#line 1 "ENTRY_109e36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e36e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109e36f0; body size 11 bytes.
#line 1 "ENTRY_109e36f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e36f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109e3700; body size 11 bytes.
#line 1 "ENTRY_109e3700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3700(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109e3710; body size 11 bytes.
#line 1 "ENTRY_109e3710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109e3720; body size 11 bytes.
#line 1 "ENTRY_109e3720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109e3730; body size 11 bytes.
#line 1 "ENTRY_109e3730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3730(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109e3740; body size 11 bytes.
#line 1 "ENTRY_109e3740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109e37b0; body size 38 bytes.
#line 1 "ENTRY_109e37b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e37b0(undefined4 *param_1)

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


// Reference entry 109e37e0; body size 38 bytes.
#line 1 "ENTRY_109e37e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e37e0(undefined4 *param_1)

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


// Reference entry 109e3810; body size 38 bytes.
#line 1 "ENTRY_109e3810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3810(undefined4 *param_1)

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


// Reference entry 109e3840; body size 38 bytes.
#line 1 "ENTRY_109e3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3840(undefined4 *param_1)

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


// Reference entry 109e3870; body size 21 bytes.
#line 1 "ENTRY_109e3870"

__declspec(naked) void FUN_109e3870(void)

{
  __asm mov dword ptr [LAB_121a40f4], 0
  __asm mov dword ptr [ecx], LAB_118f0428
  __asm jmp LAB_1003c4f2
}




// Reference entry 109e3890; body size 38 bytes.
#line 1 "ENTRY_109e3890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3890(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109e38c0; body size 21 bytes.
#line 1 "ENTRY_109e38c0"

__declspec(naked) void FUN_109e38c0(void)

{
  __asm mov dword ptr [LAB_121a4100], 0
  __asm mov dword ptr [ecx], LAB_118f051c
  __asm jmp LAB_1003c4f2
}




// Reference entry 109e39d0; body size 21 bytes.
#line 1 "ENTRY_109e39d0"

__declspec(naked) void FUN_109e39d0(void)

{
  __asm mov dword ptr [LAB_121a4104], 0
  __asm mov dword ptr [ecx], LAB_118f0574
  __asm jmp LAB_1003c4f2
}




// Reference entry 109e39f0; body size 38 bytes.
#line 1 "ENTRY_109e39f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e39f0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109e3a20; body size 21 bytes.
#line 1 "ENTRY_109e3a20"

__declspec(naked) void FUN_109e3a20(void)

{
  __asm mov dword ptr [LAB_121a410c], 0
  __asm mov dword ptr [ecx], LAB_118f0610
  __asm jmp LAB_1003c4f2
}




// Reference entry 109e3a40; body size 38 bytes.
#line 1 "ENTRY_109e3a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3a40(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109e3a70; body size 21 bytes.
#line 1 "ENTRY_109e3a70"

__declspec(naked) void FUN_109e3a70(void)

{
  __asm mov dword ptr [LAB_121a4108], 0
  __asm mov dword ptr [ecx], LAB_118f05cc
  __asm jmp LAB_1003c4f2
}




// Reference entry 109e3a90; body size 38 bytes.
#line 1 "ENTRY_109e3a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3a90(undefined4 *param_1)

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


// Reference entry 109e3ac0; body size 21 bytes.
#line 1 "ENTRY_109e3ac0"

__declspec(naked) void FUN_109e3ac0(void)

{
  __asm mov dword ptr [LAB_121a40fc], 0
  __asm mov dword ptr [ecx], LAB_118f04c8
  __asm jmp LAB_1003c4f2
}




// Reference entry 109e3ae0; body size 38 bytes.
#line 1 "ENTRY_109e3ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3ae0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109e3b10; body size 21 bytes.
#line 1 "ENTRY_109e3b10"

__declspec(naked) void FUN_109e3b10(void)

{
  __asm mov dword ptr [LAB_121a4110], 0
  __asm mov dword ptr [ecx], LAB_118f0660
  __asm jmp LAB_1003c4f2
}




// Reference entry 109e3b30; body size 38 bytes.
#line 1 "ENTRY_109e3b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109e3b30(undefined4 *param_1)

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


#line 1 "ENTRY_109e3b60"

__declspec(naked) void FUN_109e3b60(void)

{
  __asm mov dword ptr [LAB_121a40f8], 0
  __asm mov dword ptr [ecx], LAB_118f0478
  __asm jmp LAB_1003c4f2
}




// Reference entry 109e9440; body size 23 bytes.
#line 1 "ENTRY_109e9440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_109e9440(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x104));
  return (SCStr *)(param_2);
}


// Reference entry 109ea2a0; body size 7 bytes.
#line 1 "ENTRY_109ea2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109ea2a0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x100));
}


// Reference entry 109ec390; body size 6 bytes.
#line 1 "ENTRY_109ec390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec390(void)

{
  return (undefined4)(DAT_121a40f4);
}


// Reference entry 109ec3a0; body size 6 bytes.
#line 1 "ENTRY_109ec3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3a0(void)

{
  return (undefined4)(DAT_121a4100);
}


// Reference entry 109ec3b0; body size 6 bytes.
#line 1 "ENTRY_109ec3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3b0(void)

{
  return (undefined4)(DAT_121a4104);
}


// Reference entry 109ec3c0; body size 6 bytes.
#line 1 "ENTRY_109ec3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3c0(void)

{
  return (undefined4)(DAT_121a410c);
}


// Reference entry 109ec3d0; body size 6 bytes.
#line 1 "ENTRY_109ec3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3d0(void)

{
  return (undefined4)(DAT_121a4108);
}


// Reference entry 109ec3e0; body size 6 bytes.
#line 1 "ENTRY_109ec3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3e0(void)

{
  return (undefined4)(DAT_121a40fc);
}


// Reference entry 109ec3f0; body size 6 bytes.
#line 1 "ENTRY_109ec3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec3f0(void)

{
  return (undefined4)(DAT_121a4110);
}


// Reference entry 109ec400; body size 6 bytes.
#line 1 "ENTRY_109ec400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec400(void)

{
  return (undefined4)(DAT_121a40f8);
}


// Reference entry 109ec410; body size 6 bytes.
#line 1 "ENTRY_109ec410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109ec410(void)

{
  return (undefined4)(DAT_121a4114);
}


// Reference entry 109ec420; body size 5 bytes.
#line 1 "ENTRY_109ec420"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec420(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 109ec430; body size 5 bytes.
#line 1 "ENTRY_109ec430"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec430(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 109ec440; body size 5 bytes.
#line 1 "ENTRY_109ec440"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec440(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 109ec460; body size 5 bytes.
#line 1 "ENTRY_109ec460"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec460(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 109ec470; body size 5 bytes.
#line 1 "ENTRY_109ec470"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec470(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 109ec480; body size 5 bytes.
#line 1 "ENTRY_109ec480"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec480(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 109ec490; body size 5 bytes.
#line 1 "ENTRY_109ec490"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec490(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 109ec4a0; body size 5 bytes.
#line 1 "ENTRY_109ec4a0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec4a0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 109ec4b0; body size 5 bytes.
#line 1 "ENTRY_109ec4b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109ec4b0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 109edc10; body size 3 bytes.
#line 1 "ENTRY_109edc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109edc10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109edc20; body size 22 bytes.
#line 1 "ENTRY_109edc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109edc20(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 109edd10; body size 31 bytes.
#line 1 "ENTRY_109edd10"

__declspec(naked) void FUN_109edd10(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}




// Reference entry 109edd40; body size 22 bytes.
#line 1 "ENTRY_109edd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109edd40(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 109edd60; body size 33 bytes.
#line 1 "ENTRY_109edd60"

__declspec(naked) void FUN_109edd60(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm push dword ptr [eax]
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 0x10
}




// Reference entry 109eded0; body size 27 bytes.
#line 1 "ENTRY_109eded0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_109eded0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 109edf00; body size 5 bytes.
#line 1 "ENTRY_109edf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109edf00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 109edf10; body size 6 bytes.
#line 1 "ENTRY_109edf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109edf10(void)

{
  return (undefined4)(DAT_121a4170);
}


// Reference entry 109edf20; body size 6 bytes.
#line 1 "ENTRY_109edf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109edf20(void)

{
  return (undefined4)(DAT_121a4164);
}


// Reference entry 109edf30; body size 6 bytes.
#line 1 "ENTRY_109edf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109edf30(void)

{
  return (undefined4)(DAT_121a416c);
}


// Reference entry 109edf40; body size 6 bytes.
#line 1 "ENTRY_109edf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109edf40(void)

{
  return (undefined4)(DAT_121a4168);
}


// Reference entry 109edf60; body size 57 bytes.
#line 1 "ENTRY_109edf60"

__declspec(naked) void FUN_109edf60(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f1194
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f11f0
  __asm mov dword ptr [esi + 0x8c], LAB_118f11fc
  __asm mov dword ptr [esi + 0xa8], LAB_118f1208
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109ee480; body size 11 bytes.
#line 1 "ENTRY_109ee480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109ee480(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 109ee490; body size 52 bytes.
#line 1 "ENTRY_109ee490"

__declspec(naked) void FUN_109ee490(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm mov dword ptr [esp + 8], esi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 109ee6f0; body size 57 bytes.
#line 1 "ENTRY_109ee6f0"

__declspec(naked) void FUN_109ee6f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f122c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f1288
  __asm mov dword ptr [esi + 0x8c], LAB_118f1294
  __asm mov dword ptr [esi + 0xa8], LAB_118f12a0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109ee840; body size 57 bytes.
#line 1 "ENTRY_109ee840"

__declspec(naked) void FUN_109ee840(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f1408
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f1464
  __asm mov dword ptr [esi + 0x8c], LAB_118f1470
  __asm mov dword ptr [esi + 0xa8], LAB_118f147c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109ee990; body size 77 bytes.
#line 1 "ENTRY_109ee990"

__declspec(naked) void FUN_109ee990(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f12d4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f1330
  __asm mov dword ptr [esi + 0x8c], LAB_118f133c
  __asm mov dword ptr [esi + 0xa8], LAB_118f1348
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109ef030; body size 38 bytes.
#line 1 "ENTRY_109ef030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef030(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109ef060; body size 11 bytes.
#line 1 "ENTRY_109ef060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109ef070; body size 11 bytes.
#line 1 "ENTRY_109ef070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109ef080; body size 11 bytes.
#line 1 "ENTRY_109ef080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109ef090; body size 11 bytes.
#line 1 "ENTRY_109ef090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109ef0a0; body size 38 bytes.
#line 1 "ENTRY_109ef0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef0a0(undefined4 *param_1)

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



#line 1 "ENTRY_109ef0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef0e0(undefined4 *param_1)

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

// Reference entry 109ef110; transcribed reference bytes.
#line 1 "ENTRY_109ef110"

__declspec(naked) void FUN_109ef110(void)

{
  __asm mov dword ptr [LAB_121a4170], 0
  __asm mov dword ptr [ecx], LAB_118f112c
  __asm jmp LAB_1003c4f2
}




// Reference entry 109ef130; body size 38 bytes.
#line 1 "ENTRY_109ef130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef130(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109ef160; body size 21 bytes.
#line 1 "ENTRY_109ef160"

__declspec(naked) void FUN_109ef160(void)

{
  __asm mov dword ptr [LAB_121a4164], 0
  __asm mov dword ptr [ecx], LAB_118f1054
  __asm jmp LAB_1003c4f2
}




// Reference entry 109ef180; body size 38 bytes.
#line 1 "ENTRY_109ef180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109ef180(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109ef1b0; body size 21 bytes.
#line 1 "ENTRY_109ef1b0"

__declspec(naked) void FUN_109ef1b0(void)

{
  __asm mov dword ptr [LAB_121a416c], 0
  __asm mov dword ptr [ecx], LAB_118f10dc
  __asm jmp LAB_1003c4f2
}




// Reference entry 109ef270; body size 21 bytes.
#line 1 "ENTRY_109ef270"

__declspec(naked) void FUN_109ef270(void)

{
  __asm mov dword ptr [LAB_121a4168], 0
  __asm mov dword ptr [ecx], LAB_118f1094
  __asm jmp LAB_1003c4f2
}




// Reference entry 109efc80; body size 13 bytes.
#line 1 "ENTRY_109efc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109efc80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 109f0590; body size 11 bytes.
#line 1 "ENTRY_109f0590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109f0590(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 109f2e60; body size 6 bytes.
#line 1 "ENTRY_109f2e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f2e60(void)

{
  return (undefined4)(DAT_121a4170);
}


// Reference entry 109f2e70; body size 6 bytes.
#line 1 "ENTRY_109f2e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f2e70(void)

{
  return (undefined4)(DAT_121a4164);
}


// Reference entry 109f2e80; body size 6 bytes.
#line 1 "ENTRY_109f2e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f2e80(void)

{
  return (undefined4)(DAT_121a416c);
}


// Reference entry 109f2e90; body size 6 bytes.
#line 1 "ENTRY_109f2e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f2e90(void)

{
  return (undefined4)(DAT_121a4168);
}


// Reference entry 109f2ea0; body size 6 bytes.
#line 1 "ENTRY_109f2ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f2ea0(void)

{
  return (undefined4)(DAT_121a4174);
}


// Reference entry 109f2eb0; body size 7 bytes.
#line 1 "ENTRY_109f2eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109f2eb0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x118));
}


// Reference entry 109f2ec0; body size 7 bytes.
#line 1 "ENTRY_109f2ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109f2ec0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x119));
}


// Reference entry 109f2ed0; body size 5 bytes.
#line 1 "ENTRY_109f2ed0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f2ed0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 109f2ef0; body size 5 bytes.
#line 1 "ENTRY_109f2ef0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f2ef0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 109f2f00; body size 5 bytes.
#line 1 "ENTRY_109f2f00"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f2f00(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 109f2f10; body size 5 bytes.
#line 1 "ENTRY_109f2f10"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f2f10(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 109f2f20; body size 5 bytes.
#line 1 "ENTRY_109f2f20"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f2f20(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 109f3bd0; body size 6 bytes.
#line 1 "ENTRY_109f3bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3bd0(void)

{
  return (undefined4)(DAT_121a41c0);
}


// Reference entry 109f3be0; body size 6 bytes.
#line 1 "ENTRY_109f3be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3be0(void)

{
  return (undefined4)(DAT_121a41e8);
}


// Reference entry 109f3bf0; body size 6 bytes.
#line 1 "ENTRY_109f3bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3bf0(void)

{
  return (undefined4)(DAT_121a41d8);
}


// Reference entry 109f3c00; body size 6 bytes.
#line 1 "ENTRY_109f3c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c00(void)

{
  return (undefined4)(DAT_121a41c4);
}


// Reference entry 109f3c10; body size 6 bytes.
#line 1 "ENTRY_109f3c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c10(void)

{
  return (undefined4)(DAT_121a41ec);
}


// Reference entry 109f3c20; body size 6 bytes.
#line 1 "ENTRY_109f3c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c20(void)

{
  return (undefined4)(DAT_121a41e4);
}


// Reference entry 109f3c30; body size 6 bytes.
#line 1 "ENTRY_109f3c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c30(void)

{
  return (undefined4)(DAT_121a41dc);
}


// Reference entry 109f3c40; body size 6 bytes.
#line 1 "ENTRY_109f3c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c40(void)

{
  return (undefined4)(DAT_121a41e0);
}


// Reference entry 109f3c50; body size 6 bytes.
#line 1 "ENTRY_109f3c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c50(void)

{
  return (undefined4)(DAT_121a41d4);
}


// Reference entry 109f3c60; body size 6 bytes.
#line 1 "ENTRY_109f3c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c60(void)

{
  return (undefined4)(DAT_121a41cc);
}


// Reference entry 109f3c70; body size 6 bytes.
#line 1 "ENTRY_109f3c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109f3c70(void)

{
  return (undefined4)(DAT_121a41c8);
}


// Reference entry 109f3c90; body size 6 bytes.
#line 1 "ENTRY_109f3c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_109f3c90(void)

{
  return (char *)("SCIOpHTControlCommitLearnedIRCodes");
}


// Reference entry 109f3ca0; body size 6 bytes.
#line 1 "ENTRY_109f3ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_109f3ca0(void)

{
  return (char *)("SCIOpHTControlIdentifyIRRemote");
}


// Reference entry 109f3cb0; body size 6 bytes.
#line 1 "ENTRY_109f3cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_109f3cb0(void)

{
  return (char *)("SCIOpHTControlIsRemoteConfigured");
}


// Reference entry 109f3cc0; body size 6 bytes.
#line 1 "ENTRY_109f3cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_109f3cc0(void)

{
  return (char *)("SCIOpHTControlLearnIRCode");
}


// Reference entry 109f3e80; body size 28 bytes.
#line 1 "ENTRY_109f3e80"

__declspec(naked) void FUN_109f3e80(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_118f1e3c
  __asm pop ecx
  __asm ret
}




// Reference entry 109f3f40; body size 27 bytes.
#line 1 "ENTRY_109f3f40"

__declspec(naked) void FUN_109f3f40(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_118f1c90
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 109f3f70; body size 27 bytes.
#line 1 "ENTRY_109f3f70"

__declspec(naked) void FUN_109f3f70(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_118f19cc
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 109f3fa0; body size 27 bytes.
#line 1 "ENTRY_109f3fa0"

__declspec(naked) void FUN_109f3fa0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_118f1df8
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 109f3fd0; body size 27 bytes.
#line 1 "ENTRY_109f3fd0"

__declspec(naked) void FUN_109f3fd0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_118f1b28
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 109f4000; body size 57 bytes.
#line 1 "ENTRY_109f4000"

__declspec(naked) void FUN_109f4000(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f22b4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f2310
  __asm mov dword ptr [esi + 0x8c], LAB_118f231c
  __asm mov dword ptr [esi + 0xa8], LAB_118f2328
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109f5120; body size 16 bytes.
#line 1 "ENTRY_109f5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 109f5140; body size 16 bytes.
#line 1 "ENTRY_109f5140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 109f5160; body size 16 bytes.
#line 1 "ENTRY_109f5160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5160(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 109f5180; body size 16 bytes.
#line 1 "ENTRY_109f5180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 109f5240; body size 127 bytes.
#line 1 "ENTRY_109f5240"

__declspec(naked) void FUN_109f5240(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, ecx
  __asm mov dword ptr [esp + 0xc], edi
  __asm mov eax, dword ptr [esi + 4]
  __asm mov ecx, dword ptr [eax + 4]
  __asm add ecx, 4
  __asm add ecx, esi
  __asm cmp byte ptr [esp + 0x28], 0
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0x74 __asm _emit 0x05
  __asm call dword ptr [eax + 0x4c]
  __asm _emit 0xeb __asm _emit 0x03
  __asm call dword ptr [eax + 0x48]
  __asm push dword ptr [esp + 0x24]
  __asm mov ebx, eax
  __asm lea ecx, [esi + 4]
  __asm mov eax, dword ptr [esi + 4]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm mov eax, dword ptr [eax + 4]
  __asm add ecx, eax
  __asm push dword ptr [esp + 0x24]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x50]
  __asm push eax
  __asm push offset LAB_118f1724
  __asm push offset LAB_118ba554
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_118f1694
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_118f16dc
  __asm mov dword ptr [edi + 0x46c], LAB_118f1718
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}




// Reference entry 109f5390; body size 127 bytes.
#line 1 "ENTRY_109f5390"

__declspec(naked) void FUN_109f5390(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, ecx
  __asm mov dword ptr [esp + 0xc], edi
  __asm mov eax, dword ptr [esi + 4]
  __asm mov ecx, dword ptr [eax + 4]
  __asm add ecx, 4
  __asm add ecx, esi
  __asm cmp byte ptr [esp + 0x28], 0
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0x74 __asm _emit 0x05
  __asm call dword ptr [eax + 0x4c]
  __asm _emit 0xeb __asm _emit 0x03
  __asm call dword ptr [eax + 0x48]
  __asm push dword ptr [esp + 0x24]
  __asm mov ebx, eax
  __asm lea ecx, [esi + 4]
  __asm mov eax, dword ptr [esi + 4]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm mov eax, dword ptr [eax + 4]
  __asm add ecx, eax
  __asm push dword ptr [esp + 0x24]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x50]
  __asm push eax
  __asm push offset LAB_118f17d8
  __asm push offset LAB_118ba554
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_118f1748
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_118f1790
  __asm mov dword ptr [edi + 0x46c], LAB_118f17cc
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}




// Reference entry 109f5430; body size 9 bytes.
#line 1 "ENTRY_109f5430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlCommitLearnedIRCodes);
  return (undefined4 *)(param_1);
}


// Reference entry 109f5440; body size 9 bytes.
#line 1 "ENTRY_109f5440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlIdentifyIRRemote);
  return (undefined4 *)(param_1);
}


// Reference entry 109f5450; body size 9 bytes.
#line 1 "ENTRY_109f5450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlIsRemoteConfigured);
  return (undefined4 *)(param_1);
}


// Reference entry 109f5460; body size 9 bytes.
#line 1 "ENTRY_109f5460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109f5460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlLearnIRCode);
  return (undefined4 *)(param_1);
}


// Reference entry 109f5a30; body size 57 bytes.
#line 1 "ENTRY_109f5a30"

__declspec(naked) void FUN_109f5a30(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f24fc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f2558
  __asm mov dword ptr [esi + 0x8c], LAB_118f2564
  __asm mov dword ptr [esi + 0xa8], LAB_118f2570
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109f5b80; body size 57 bytes.
#line 1 "ENTRY_109f5b80"

__declspec(naked) void FUN_109f5b80(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f234c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f23a8
  __asm mov dword ptr [esi + 0x8c], LAB_118f23b4
  __asm mov dword ptr [esi + 0xa8], LAB_118f23c0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109f6110; body size 104 bytes.
#line 1 "ENTRY_109f6110"

__declspec(naked) void FUN_109f6110(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f25d4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f2630
  __asm mov dword ptr [esi + 0x8c], LAB_118f263c
  __asm mov dword ptr [esi + 0xa8], LAB_118f2648
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [esi + 0xf0], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109f62a0; body size 86 bytes.
#line 1 "ENTRY_109f62a0"

__declspec(naked) void FUN_109f62a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f2414
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f2470
  __asm mov dword ptr [esi + 0x8c], LAB_118f247c
  __asm mov dword ptr [esi + 0xa8], LAB_118f2488
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [esi + 0xe8], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109f6410; body size 57 bytes.
#line 1 "ENTRY_109f6410"

__declspec(naked) void FUN_109f6410(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f2ef4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f2f50
  __asm mov dword ptr [esi + 0x8c], LAB_118f2f5c
  __asm mov dword ptr [esi + 0xa8], LAB_118f2f68
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109f6560; body size 57 bytes.
#line 1 "ENTRY_109f6560"

__declspec(naked) void FUN_109f6560(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f2dbc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f2e18
  __asm mov dword ptr [esi + 0x8c], LAB_118f2e24
  __asm mov dword ptr [esi + 0xa8], LAB_118f2e30
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109f66b0; body size 57 bytes.
#line 1 "ENTRY_109f66b0"

__declspec(naked) void FUN_109f66b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f2e5c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f2eb8
  __asm mov dword ptr [esi + 0x8c], LAB_118f2ec4
  __asm mov dword ptr [esi + 0xa8], LAB_118f2ed0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109f6800; body size 57 bytes.
#line 1 "ENTRY_109f6800"

__declspec(naked) void FUN_109f6800(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f2a3c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f2a98
  __asm mov dword ptr [esi + 0x8c], LAB_118f2aa4
  __asm mov dword ptr [esi + 0xa8], LAB_118f2ab0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109f6950; body size 57 bytes.
#line 1 "ENTRY_109f6950"

__declspec(naked) void FUN_109f6950(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f2958
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f29b4
  __asm mov dword ptr [esi + 0x8c], LAB_118f29c0
  __asm mov dword ptr [esi + 0xa8], LAB_118f29cc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109f6aa0; body size 57 bytes.
#line 1 "ENTRY_109f6aa0"

__declspec(naked) void FUN_109f6aa0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f28c0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f291c
  __asm mov dword ptr [esi + 0x8c], LAB_118f2928
  __asm mov dword ptr [esi + 0xa8], LAB_118f2934
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 109f7710; body size 11 bytes.
#line 1 "ENTRY_109f7710"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpHTCCommitLearnedIRCodesAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 109f7720; body size 11 bytes.
#line 1 "ENTRY_109f7720"

/* WARNING: Removing unreachable block_109f7720 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpHTCIdentifyIRRemoteAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 109f7740; body size 11 bytes.
#line 1 "ENTRY_109f7740"

/* WARNING: Removing unreachable block_109f7740 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpHTCLearnIRCodeAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 109f7800; body size 11 bytes.
#line 1 "ENTRY_109f7800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7800(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109f7810; body size 11 bytes.
#line 1 "ENTRY_109f7810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109f7820; body size 11 bytes.
#line 1 "ENTRY_109f7820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109f7830; body size 11 bytes.
#line 1 "ENTRY_109f7830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109f7840; body size 11 bytes.
#line 1 "ENTRY_109f7840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109f7850; body size 11 bytes.
#line 1 "ENTRY_109f7850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109f7860; body size 11 bytes.
#line 1 "ENTRY_109f7860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7860(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109f7870; body size 11 bytes.
#line 1 "ENTRY_109f7870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109f7880; body size 11 bytes.
#line 1 "ENTRY_109f7880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7880(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109f7890; body size 11 bytes.
#line 1 "ENTRY_109f7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f7890(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109f78a0; body size 11 bytes.
#line 1 "ENTRY_109f78a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f78a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109f8170; body size 28 bytes.
#line 1 "ENTRY_109f8170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8170(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCCommitLearnedIRCodesAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCCommitLearnedIRCodesAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCCommitLearnedIRCodesAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 109f81a0; body size 28 bytes.
#line 1 "ENTRY_109f81a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f81a0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCIdentifyIRRemoteAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCIdentifyIRRemoteAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCIdentifyIRRemoteAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 109f81d0; body size 28 bytes.
#line 1 "ENTRY_109f81d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f81d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCIsRemoteConfiguredAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCIsRemoteConfiguredAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCIsRemoteConfiguredAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 109f8200; body size 28 bytes.
#line 1 "ENTRY_109f8200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8200(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCLearnIRCodeAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCLearnIRCodeAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCLearnIRCodeAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 109f8230; body size 7 bytes.
#line 1 "ENTRY_109f8230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 109f8240; body size 7 bytes.
#line 1 "ENTRY_109f8240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 109f8250; body size 7 bytes.
#line 1 "ENTRY_109f8250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 109f8260; body size 7 bytes.
#line 1 "ENTRY_109f8260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 109f8270; body size 18 bytes.
#line 1 "ENTRY_109f8270"

__declspec(naked) void FUN_109f8270(void)

{
  __asm mov dword ptr [ecx], LAB_118f1d34
  __asm mov dword ptr [ecx + 8], LAB_118f1d7c
  __asm jmp LAB_10039a13
}




// Reference entry 109f8290; body size 18 bytes.
#line 1 "ENTRY_109f8290"

__declspec(naked) void FUN_109f8290(void)

{
  __asm mov dword ptr [ecx], LAB_118f1a70
  __asm mov dword ptr [ecx + 8], LAB_118f1ab8
  __asm jmp LAB_10015654
}




// Reference entry 109f82b0; body size 18 bytes.
#line 1 "ENTRY_109f82b0"

__declspec(naked) void FUN_109f82b0(void)

{
  __asm mov dword ptr [ecx], LAB_118f1ea4
  __asm mov dword ptr [ecx + 8], LAB_118f1ef0
  __asm jmp LAB_10034db0
}




// Reference entry 109f82d0; body size 18 bytes.
#line 1 "ENTRY_109f82d0"

__declspec(naked) void FUN_109f82d0(void)

{
  __asm mov dword ptr [ecx], LAB_118f1bcc
  __asm mov dword ptr [ecx + 8], LAB_118f1c14
  __asm jmp LAB_100371cd
}




// Reference entry 109f82f0; body size 38 bytes.
#line 1 "ENTRY_109f82f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f82f0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109f8320; body size 21 bytes.
#line 1 "ENTRY_109f8320"

__declspec(naked) void FUN_109f8320(void)

{
  __asm mov dword ptr [LAB_121a41c0], 0
  __asm mov dword ptr [ecx], LAB_118f1f9c
  __asm jmp LAB_1003c4f2
}




// Reference entry 109f8340; body size 38 bytes.
#line 1 "ENTRY_109f8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8340(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109f8370; body size 21 bytes.
#line 1 "ENTRY_109f8370"

__declspec(naked) void FUN_109f8370(void)

{
  __asm mov dword ptr [LAB_121a41e8], 0
  __asm mov dword ptr [ecx], LAB_118f1f00
  __asm jmp LAB_1003c4f2
}




// Reference entry 109f84f0; body size 21 bytes.
#line 1 "ENTRY_109f84f0"

__declspec(naked) void FUN_109f84f0(void)

{
  __asm mov dword ptr [LAB_121a41d8], 0
  __asm mov dword ptr [ecx], LAB_118f2144
  __asm jmp LAB_1003c4f2
}




// Reference entry 109f8600; body size 21 bytes.
#line 1 "ENTRY_109f8600"

__declspec(naked) void FUN_109f8600(void)

{
  __asm mov dword ptr [LAB_121a41c4], 0
  __asm mov dword ptr [ecx], LAB_118f1fec
  __asm jmp LAB_1003c4f2
}




// Reference entry 109f86d0; body size 21 bytes.
#line 1 "ENTRY_109f86d0"

__declspec(naked) void FUN_109f86d0(void)

{
  __asm mov dword ptr [LAB_121a41ec], 0
  __asm mov dword ptr [ecx], LAB_118f1f48
  __asm jmp LAB_1003c4f2
}




// Reference entry 109f86f0; body size 38 bytes.
#line 1 "ENTRY_109f86f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f86f0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109f8720; body size 21 bytes.
#line 1 "ENTRY_109f8720"

__declspec(naked) void FUN_109f8720(void)

{
  __asm mov dword ptr [LAB_121a41e4], 0
  __asm mov dword ptr [ecx], LAB_118f2248
  __asm jmp LAB_1003c4f2
}




// Reference entry 109f8740; body size 38 bytes.
#line 1 "ENTRY_109f8740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8740(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109f8770; body size 21 bytes.
#line 1 "ENTRY_109f8770"

__declspec(naked) void FUN_109f8770(void)

{
  __asm mov dword ptr [LAB_121a41dc], 0
  __asm mov dword ptr [ecx], LAB_118f219c
  __asm jmp LAB_1003c4f2
}




// Reference entry 109f8790; body size 38 bytes.
#line 1 "ENTRY_109f8790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8790(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109f87c0; body size 21 bytes.
#line 1 "ENTRY_109f87c0"

__declspec(naked) void FUN_109f87c0(void)

{
  __asm mov dword ptr [LAB_121a41e0], 0
  __asm mov dword ptr [ecx], LAB_118f21f8
  __asm jmp LAB_1003c4f2
}




// Reference entry 109f87e0; body size 38 bytes.
#line 1 "ENTRY_109f87e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f87e0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109f8810; body size 21 bytes.
#line 1 "ENTRY_109f8810"

__declspec(naked) void FUN_109f8810(void)

{
  __asm mov dword ptr [LAB_121a41d4], 0
  __asm mov dword ptr [ecx], LAB_118f20f0
  __asm jmp LAB_1003c4f2
}




// Reference entry 109f8830; body size 38 bytes.
#line 1 "ENTRY_109f8830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8830(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109f8860; body size 21 bytes.
#line 1 "ENTRY_109f8860"

__declspec(naked) void FUN_109f8860(void)

{
  __asm mov dword ptr [LAB_121a41cc], 0
  __asm mov dword ptr [ecx], LAB_118f2098
  __asm jmp LAB_1003c4f2
}




// Reference entry 109f8880; body size 38 bytes.
#line 1 "ENTRY_109f8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109f8880(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 109f88b0; body size 21 bytes.
#line 1 "ENTRY_109f88b0"

__declspec(naked) void FUN_109f88b0(void)

{
  __asm mov dword ptr [LAB_121a41c8], 0
  __asm mov dword ptr [ecx], LAB_118f203c
  __asm jmp LAB_1003c4f2
}




// Reference entry 109f8c20; body size 4 bytes.
#line 1 "ENTRY_109f8c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f8c20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 109f8c30; body size 3 bytes.
#line 1 "ENTRY_109f8c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f8c30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109f8c40; body size 3 bytes.
#line 1 "ENTRY_109f8c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f8c40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109f8c50; body size 4 bytes.
#line 1 "ENTRY_109f8c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f8c50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 109f8c60; body size 3 bytes.
#line 1 "ENTRY_109f8c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109f8c60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a00510; body size 7 bytes.
#line 1 "ENTRY_10a00510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a00510(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xf4));
}


// Reference entry 10a00520; body size 7 bytes.
#line 1 "ENTRY_10a00520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a00520(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xf8));
}


// Reference entry 10a008e0; body size 7 bytes.
#line 1 "ENTRY_10a008e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a008e0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xfc));
}


// Reference entry 10a00930; body size 7 bytes.
#line 1 "ENTRY_10a00930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a00930(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xd7d0));
}


// Reference entry 10a04570; body size 6 bytes.
#line 1 "ENTRY_10a04570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04570(void)

{
  return (undefined4)(DAT_121a41c0);
}


// Reference entry 10a04580; body size 6 bytes.
#line 1 "ENTRY_10a04580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04580(void)

{
  return (undefined4)(DAT_121a41e8);
}


// Reference entry 10a04590; body size 6 bytes.
#line 1 "ENTRY_10a04590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04590(void)

{
  return (undefined4)(DAT_121a41d8);
}


// Reference entry 10a045a0; body size 6 bytes.
#line 1 "ENTRY_10a045a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045a0(void)

{
  return (undefined4)(DAT_121a41c4);
}


// Reference entry 10a045b0; body size 6 bytes.
#line 1 "ENTRY_10a045b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045b0(void)

{
  return (undefined4)(DAT_121a41ec);
}


// Reference entry 10a045c0; body size 6 bytes.
#line 1 "ENTRY_10a045c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045c0(void)

{
  return (undefined4)(DAT_121a41e4);
}


// Reference entry 10a045d0; body size 6 bytes.
#line 1 "ENTRY_10a045d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045d0(void)

{
  return (undefined4)(DAT_121a41dc);
}


// Reference entry 10a045e0; body size 6 bytes.
#line 1 "ENTRY_10a045e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045e0(void)

{
  return (undefined4)(DAT_121a41e0);
}


// Reference entry 10a045f0; body size 6 bytes.
#line 1 "ENTRY_10a045f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a045f0(void)

{
  return (undefined4)(DAT_121a41d4);
}


// Reference entry 10a04600; body size 6 bytes.
#line 1 "ENTRY_10a04600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04600(void)

{
  return (undefined4)(DAT_121a41cc);
}


// Reference entry 10a04610; body size 6 bytes.
#line 1 "ENTRY_10a04610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04610(void)

{
  return (undefined4)(DAT_121a41c8);
}


// Reference entry 10a04620; body size 6 bytes.
#line 1 "ENTRY_10a04620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a04620(void)

{
  return (undefined4)(DAT_121a41d0);
}


// Reference entry 10a04640; body size 5 bytes.
#line 1 "ENTRY_10a04640"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a04640(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a04650; body size 5 bytes.
#line 1 "ENTRY_10a04650"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a04650(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a05c40; body size 6 bytes.
#line 1 "ENTRY_10a05c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10a05c40(void)

{
  return (char *)("SCIOpHTControlCommitLearnedIRCodes");
}


// Reference entry 10a05c50; body size 6 bytes.
#line 1 "ENTRY_10a05c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10a05c50(void)

{
  return (char *)("SCIOpHTControlIdentifyIRRemote");
}


// Reference entry 10a05c60; body size 6 bytes.
#line 1 "ENTRY_10a05c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10a05c60(void)

{
  return (char *)("SCIOpHTControlIsRemoteConfigured");
}


// Reference entry 10a05c70; body size 6 bytes.
#line 1 "ENTRY_10a05c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10a05c70(void)

{
  return (char *)("SCIOpHTControlLearnIRCode");
}


// Reference entry 10a080d0; body size 3 bytes.
#line 1 "ENTRY_10a080d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a080d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a080e0; body size 3 bytes.
#line 1 "ENTRY_10a080e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a080e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a080f0; body size 3 bytes.
#line 1 "ENTRY_10a080f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a080f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a08100; body size 3 bytes.
#line 1 "ENTRY_10a08100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a08100(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a08790; body size 28 bytes.
#line 1 "ENTRY_10a08790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a08790(undefined4 *param_1)

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


// Reference entry 10a087c0; body size 28 bytes.
#line 1 "ENTRY_10a087c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a087c0(undefined4 *param_1)

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


// Reference entry 10a087f0; body size 28 bytes.
#line 1 "ENTRY_10a087f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a087f0(undefined4 *param_1)

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


// Reference entry 10a08820; body size 28 bytes.
#line 1 "ENTRY_10a08820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a08820(undefined4 *param_1)

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


// Reference entry 10a08850; body size 28 bytes.
#line 1 "ENTRY_10a08850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a08850(undefined4 *param_1)

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


// Reference entry 10a08880; body size 28 bytes.
#line 1 "ENTRY_10a08880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a08880(undefined4 *param_1)

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


// Reference entry 10a088b0; body size 28 bytes.
#line 1 "ENTRY_10a088b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a088b0(undefined4 *param_1)

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


// Reference entry 10a088e0; body size 28 bytes.
#line 1 "ENTRY_10a088e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a088e0(undefined4 *param_1)

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


// Reference entry 10a08c40; body size 13 bytes.
#line 1 "ENTRY_10a08c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a08c40(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xf4) = (undefined4)(param_2);
  return;
}


// Reference entry 10a08c50; body size 13 bytes.
#line 1 "ENTRY_10a08c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a08c50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xf8) = (undefined4)(param_2);
  return;
}


// Reference entry 10a08c60; body size 13 bytes.
#line 1 "ENTRY_10a08c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a08c60(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xfc) = (undefined1)(param_2);
  return;
}


// Reference entry 10a08cb0; body size 26 bytes.
#line 1 "ENTRY_10a08cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10a08cb0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10a08cd0; body size 6 bytes.
#line 1 "ENTRY_10a08cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a08cd0(void)

{
  return (undefined4)(DAT_121a4240);
}


// Reference entry 10a08ce0; body size 6 bytes.
#line 1 "ENTRY_10a08ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a08ce0(void)

{
  return (undefined4)(DAT_121a423c);
}


// Reference entry 10a08cf0; body size 6 bytes.
#line 1 "ENTRY_10a08cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a08cf0(void)

{
  return (undefined4)(DAT_121a4244);
}


// Reference entry 10a08d10; body size 57 bytes.
#line 1 "ENTRY_10a08d10"

__declspec(naked) void FUN_10a08d10(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f33ac
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f3408
  __asm mov dword ptr [esi + 0x8c], LAB_118f3414
  __asm mov dword ptr [esi + 0xa8], LAB_118f3420
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a09670; body size 77 bytes.
#line 1 "ENTRY_10a09670"

__declspec(naked) void FUN_10a09670(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f3444
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f34a0
  __asm mov dword ptr [esi + 0x8c], LAB_118f34ac
  __asm mov dword ptr [esi + 0xa8], LAB_118f34b8
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a097d0; body size 96 bytes.
#line 1 "ENTRY_10a097d0"

__declspec(naked) void FUN_10a097d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], LAB_118f2f8c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f2fe0
  __asm mov dword ptr [esi + 0x8c], LAB_118f2fec
  __asm mov dword ptr [esi + 0xa8], LAB_118f2ff8
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [esi + 0xf4], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a09b70; body size 38 bytes.
#line 1 "ENTRY_10a09b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09b70(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a09ba0; body size 11 bytes.
#line 1 "ENTRY_10a09ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a09bb0; body size 11 bytes.
#line 1 "ENTRY_10a09bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a09bc0; body size 11 bytes.
#line 1 "ENTRY_10a09bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a09bd0; body size 38 bytes.
#line 1 "ENTRY_10a09bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09bd0(undefined4 *param_1)

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

void __fastcall FUN_10a09c00(undefined4 *param_1)

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

void __fastcall FUN_10a09c30(undefined4 *param_1)

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

// Reference entry 10a09c60; transcribed reference bytes.
#line 1 "ENTRY_10a09c60"

__declspec(naked) void FUN_10a09c60(void)

{
  __asm mov dword ptr [LAB_121a4240], 0
  __asm mov dword ptr [ecx], LAB_118f3078
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a09c80; body size 38 bytes.
#line 1 "ENTRY_10a09c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a09c80(undefined4 *param_1)

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



// Reference entry 10a09cb0; transcribed reference bytes.
#line 1 "ENTRY_10a09cb0"

__declspec(naked) void FUN_10a09cb0(void)

{
  __asm mov dword ptr [LAB_121a423c], 0
  __asm mov dword ptr [ecx], LAB_118f3034
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a09d80; body size 21 bytes.
#line 1 "ENTRY_10a09d80"

__declspec(naked) void FUN_10a09d80(void)

{
  __asm mov dword ptr [LAB_121a4244], 0
  __asm mov dword ptr [ecx], LAB_118f30bc
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a0c3e0; body size 6 bytes.
#line 1 "ENTRY_10a0c3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0c3e0(void)

{
  return (undefined4)(DAT_121a4240);
}


// Reference entry 10a0c3f0; body size 6 bytes.
#line 1 "ENTRY_10a0c3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0c3f0(void)

{
  return (undefined4)(DAT_121a423c);
}


// Reference entry 10a0c400; body size 6 bytes.
#line 1 "ENTRY_10a0c400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0c400(void)

{
  return (undefined4)(DAT_121a4244);
}


// Reference entry 10a0c410; body size 6 bytes.
#line 1 "ENTRY_10a0c410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0c410(void)

{
  return (undefined4)(DAT_121a4238);
}


// Reference entry 10a0c420; body size 5 bytes.
#line 1 "ENTRY_10a0c420"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c420(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10a0c430; body size 5 bytes.
#line 1 "ENTRY_10a0c430"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c430(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10a0c440; body size 7 bytes.
#line 1 "ENTRY_10a0c440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a0c440(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf4));
}


// Reference entry 10a0c460; body size 5 bytes.
#line 1 "ENTRY_10a0c460"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c460(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a0c470; body size 5 bytes.
#line 1 "ENTRY_10a0c470"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c470(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a0c480; body size 5 bytes.
#line 1 "ENTRY_10a0c480"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c480(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a0c490; body size 5 bytes.
#line 1 "ENTRY_10a0c490"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a0c490(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a0cce0; body size 13 bytes.
#line 1 "ENTRY_10a0cce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a0cce0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xf4) = (undefined1)(param_2);
  return;
}


// Reference entry 10a0ccf0; body size 6 bytes.
#line 1 "ENTRY_10a0ccf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0ccf0(void)

{
  return (undefined4)(DAT_121a4298);
}


// Reference entry 10a0cd00; body size 6 bytes.
#line 1 "ENTRY_10a0cd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0cd00(void)

{
  return (undefined4)(DAT_121a4290);
}


// Reference entry 10a0cd10; body size 6 bytes.
#line 1 "ENTRY_10a0cd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a0cd10(void)

{
  return (undefined4)(DAT_121a4294);
}


// Reference entry 10a0cd30; body size 57 bytes.
#line 1 "ENTRY_10a0cd30"

__declspec(naked) void FUN_10a0cd30(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f36a4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f3700
  __asm mov dword ptr [esi + 0x8c], LAB_118f370c
  __asm mov dword ptr [esi + 0xa8], LAB_118f3718
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a0d050; body size 77 bytes.
#line 1 "ENTRY_10a0d050"

__declspec(naked) void FUN_10a0d050(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f38c8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f3924
  __asm mov dword ptr [esi + 0x8c], LAB_118f3930
  __asm mov dword ptr [esi + 0xa8], LAB_118f393c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a0d1b0; body size 77 bytes.
#line 1 "ENTRY_10a0d1b0"

__declspec(naked) void FUN_10a0d1b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f373c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f3798
  __asm mov dword ptr [esi + 0x8c], LAB_118f37a4
  __asm mov dword ptr [esi + 0xa8], LAB_118f37b0
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a0d310; body size 77 bytes.
#line 1 "ENTRY_10a0d310"

__declspec(naked) void FUN_10a0d310(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f37e4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f3840
  __asm mov dword ptr [esi + 0x8c], LAB_118f384c
  __asm mov dword ptr [esi + 0xa8], LAB_118f3858
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a0d8d0; body size 38 bytes.
#line 1 "ENTRY_10a0d8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a0d8d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a0d900; body size 11 bytes.
#line 1 "ENTRY_10a0d900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a0d900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a0d910; body size 11 bytes.
#line 1 "ENTRY_10a0d910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a0d910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a0d920; body size 11 bytes.
#line 1 "ENTRY_10a0d920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a0d920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a0d9e0; body size 21 bytes.
#line 1 "ENTRY_10a0d9e0"

__declspec(naked) void FUN_10a0d9e0(void)

{
  __asm mov dword ptr [LAB_121a4298], 0
  __asm mov dword ptr [ecx], LAB_118f3648
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a0dab0; body size 21 bytes.
#line 1 "ENTRY_10a0dab0"

__declspec(naked) void FUN_10a0dab0(void)

{
  __asm mov dword ptr [LAB_121a4290], 0
  __asm mov dword ptr [ecx], LAB_118f35c0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a0db80; body size 21 bytes.
#line 1 "ENTRY_10a0db80"

__declspec(naked) void FUN_10a0db80(void)

{
  __asm mov dword ptr [LAB_121a4294], 0
  __asm mov dword ptr [ecx], LAB_118f3604
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a11d60; body size 6 bytes.
#line 1 "ENTRY_10a11d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a11d60(void)

{
  return (undefined4)(DAT_121a4298);
}


// Reference entry 10a11d70; body size 6 bytes.
#line 1 "ENTRY_10a11d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a11d70(void)

{
  return (undefined4)(DAT_121a4290);
}


// Reference entry 10a11d80; body size 6 bytes.
#line 1 "ENTRY_10a11d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a11d80(void)

{
  return (undefined4)(DAT_121a4294);
}


// Reference entry 10a11d90; body size 6 bytes.
#line 1 "ENTRY_10a11d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a11d90(void)

{
  return (undefined4)(DAT_121a429c);
}


// Reference entry 10a11db0; body size 7 bytes.
#line 1 "ENTRY_10a11db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a11db0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x104));
}


// Reference entry 10a11dc0; body size 5 bytes.
#line 1 "ENTRY_10a11dc0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a11dc0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a11dd0; body size 5 bytes.
#line 1 "ENTRY_10a11dd0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a11dd0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a11df0; body size 7 bytes.
#line 1 "ENTRY_10a11df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10a11df0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10a12630; body size 13 bytes.
#line 1 "ENTRY_10a12630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a12630(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x100) = (undefined1)(param_2);
  return;
}


// Reference entry 10a12640; body size 13 bytes.
#line 1 "ENTRY_10a12640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a12640(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x104) = (undefined4)(param_2);
  return;
}


// Reference entry 10a126c0; body size 18 bytes.
#line 1 "ENTRY_10a126c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a126c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a126e0; body size 22 bytes.
#line 1 "ENTRY_10a126e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a126e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10a12700; body size 18 bytes.
#line 1 "ENTRY_10a12700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a12700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a12800; body size 22 bytes.
#line 1 "ENTRY_10a12800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a12800(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10a12890; body size 28 bytes.
#line 1 "ENTRY_10a12890"

__declspec(naked) void FUN_10a12890(void)

{
  __asm push 0x4e8
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}




// Reference entry 10a128c0; body size 13 bytes.
#line 1 "ENTRY_10a128c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a128c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10a128d0; body size 13 bytes.
#line 1 "ENTRY_10a128d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a128d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10a128e0; body size 3 bytes.
#line 1 "ENTRY_10a128e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a128e0(void)

{
  return;
}


// Reference entry 10a12aa0; body size 18 bytes.
#line 1 "ENTRY_10a12aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a12aa0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x4e8);
  return;
}


// Reference entry 10a12b50; body size 22 bytes.
#line 1 "ENTRY_10a12b50"

__declspec(naked) void FUN_10a12b50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x342da7
  __asm ja LAB_10070f3b
  __asm imul eax, eax, 0x4e8
  __asm ret
}




// Reference entry 10a12b70; body size 5 bytes.
#line 1 "ENTRY_10a12b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a12b80; body size 37 bytes.
#line 1 "ENTRY_10a12b80"

__declspec(naked) void FUN_10a12b80(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x16
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x05
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}




// Reference entry 10a12d00; body size 5 bytes.
#line 1 "ENTRY_10a12d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a12d10; body size 5 bytes.
#line 1 "ENTRY_10a12d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a12d20; body size 5 bytes.
#line 1 "ENTRY_10a12d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a12d30; body size 5 bytes.
#line 1 "ENTRY_10a12d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a12d40; body size 5 bytes.
#line 1 "ENTRY_10a12d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a12e30; body size 15 bytes.
#line 1 "ENTRY_10a12e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12e30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10a12e50; body size 15 bytes.
#line 1 "ENTRY_10a12e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12e50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10a12e70; body size 5 bytes.
#line 1 "ENTRY_10a12e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a12e80; body size 5 bytes.
#line 1 "ENTRY_10a12e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a12e90; body size 5 bytes.
#line 1 "ENTRY_10a12e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a12ea0; body size 6 bytes.
#line 1 "ENTRY_10a12ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12ea0(void)

{
  return (undefined4)(DAT_121a42f0);
}


// Reference entry 10a12eb0; body size 6 bytes.
#line 1 "ENTRY_10a12eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12eb0(void)

{
  return (undefined4)(DAT_121a42ec);
}


// Reference entry 10a12ec0; body size 6 bytes.
#line 1 "ENTRY_10a12ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12ec0(void)

{
  return (undefined4)(DAT_121a42e8);
}


// Reference entry 10a12ed0; body size 6 bytes.
#line 1 "ENTRY_10a12ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12ed0(void)

{
  return (undefined4)(DAT_121a42f8);
}


// Reference entry 10a12ee0; body size 6 bytes.
#line 1 "ENTRY_10a12ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a12ee0(void)

{
  return (undefined4)(DAT_121a42f4);
}


// Reference entry 10a12f00; body size 57 bytes.
#line 1 "ENTRY_10a12f00"

__declspec(naked) void FUN_10a12f00(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f3bb8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f3c14
  __asm mov dword ptr [esi + 0x8c], LAB_118f3c20
  __asm mov dword ptr [esi + 0xa8], LAB_118f3c2c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a13400; body size 18 bytes.
#line 1 "ENTRY_10a13400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a13400(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a13460; body size 11 bytes.
#line 1 "ENTRY_10a13460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a13460(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10a13470; body size 11 bytes.
#line 1 "ENTRY_10a13470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a13470(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10a13500; body size 11 bytes.
#line 1 "ENTRY_10a13500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a13500(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10a13510; body size 16 bytes.
#line 1 "ENTRY_10a13510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a13510(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a13530; body size 3 bytes.
#line 1 "ENTRY_10a13530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a13530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a13540; body size 55 bytes.
#line 1 "ENTRY_10a13540"

__declspec(naked) void FUN_10a13540(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x4e8
  __asm mov dword ptr [esp + 8], esi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10a13590; body size 11 bytes.
#line 1 "ENTRY_10a13590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a13590(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPUpdateProgressCB);
  return (undefined4 *)(param_1);
}


// Reference entry 10a13750; body size 57 bytes.
#line 1 "ENTRY_10a13750"

__declspec(naked) void FUN_10a13750(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f3d80
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f3ddc
  __asm mov dword ptr [esi + 0x8c], LAB_118f3de8
  __asm mov dword ptr [esi + 0xa8], LAB_118f3df4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a138a0; body size 57 bytes.
#line 1 "ENTRY_10a138a0"

__declspec(naked) void FUN_10a138a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f3ce8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f3d44
  __asm mov dword ptr [esi + 0x8c], LAB_118f3d50
  __asm mov dword ptr [esi + 0xa8], LAB_118f3d5c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a139f0; body size 77 bytes.
#line 1 "ENTRY_10a139f0"

__declspec(naked) void FUN_10a139f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f3c50
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f3cac
  __asm mov dword ptr [esi + 0x8c], LAB_118f3cb8
  __asm mov dword ptr [esi + 0xa8], LAB_118f3cc4
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a13b50; body size 57 bytes.
#line 1 "ENTRY_10a13b50"

__declspec(naked) void FUN_10a13b50(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f3ec8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f3f24
  __asm mov dword ptr [esi + 0x8c], LAB_118f3f30
  __asm mov dword ptr [esi + 0xa8], LAB_118f3f3c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a13ca0; body size 133 bytes.
#line 1 "ENTRY_10a13ca0"

__declspec(naked) void FUN_10a13ca0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [esi], LAB_118f3e30
  __asm mov dword ptr [esi + 0x10], LAB_118f3e8c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x8c], LAB_118f3e98
  __asm mov dword ptr [esi + 0xa8], LAB_118f3ea4
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm movups xmmword ptr [esi + 0xe8], xmm0
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [esi + 0x104], 0
  __asm mov byte ptr [esi + 0x106], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a14430; body size 38 bytes.
#line 1 "ENTRY_10a14430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14430(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a14460; body size 11 bytes.
#line 1 "ENTRY_10a14460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a14470; body size 11 bytes.
#line 1 "ENTRY_10a14470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a14480; body size 11 bytes.
#line 1 "ENTRY_10a14480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a14490; body size 11 bytes.
#line 1 "ENTRY_10a14490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14490(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a144a0; body size 11 bytes.
#line 1 "ENTRY_10a144a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a144a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a14660; body size 38 bytes.
#line 1 "ENTRY_10a14660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14660(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a14690; body size 21 bytes.
#line 1 "ENTRY_10a14690"

__declspec(naked) void FUN_10a14690(void)

{
  __asm mov dword ptr [LAB_121a42f0], 0
  __asm mov dword ptr [ecx], LAB_118f3ab8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a146b0; body size 38 bytes.
#line 1 "ENTRY_10a146b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a146b0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a146e0; body size 21 bytes.
#line 1 "ENTRY_10a146e0"

__declspec(naked) void FUN_10a146e0(void)

{
  __asm mov dword ptr [LAB_121a42ec], 0
  __asm mov dword ptr [ecx], LAB_118f3a64
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a147b0; body size 21 bytes.
#line 1 "ENTRY_10a147b0"

__declspec(naked) void FUN_10a147b0(void)

{
  __asm mov dword ptr [LAB_121a42e8], 0
  __asm mov dword ptr [ecx], LAB_118f3a18
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a147d0; body size 38 bytes.
#line 1 "ENTRY_10a147d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a147d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a14800; body size 21 bytes.
#line 1 "ENTRY_10a14800"

__declspec(naked) void FUN_10a14800(void)

{
  __asm mov dword ptr [LAB_121a42f8], 0
  __asm mov dword ptr [ecx], LAB_118f3b50
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a14820; body size 38 bytes.
#line 1 "ENTRY_10a14820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a14820(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a14850; body size 21 bytes.
#line 1 "ENTRY_10a14850"

__declspec(naked) void FUN_10a14850(void)

{
  __asm mov dword ptr [LAB_121a42f4], 0
  __asm mov dword ptr [ecx], LAB_118f3b08
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a14980; body size 5 bytes.
#line 1 "ENTRY_10a14980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a14980(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a14990; body size 286 bytes.
#line 1 "ENTRY_10a14990"

__declspec(naked) void FUN_10a14990(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm mov edx, ebx
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, 0x19
  __asm mov eax, dword ptr [ebx + 4]
  __asm sub edx, edi
  __asm mov dword ptr [edi + 4], eax
  __asm lea esi, [edi + 8]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov al, byte ptr [edx + esi]
  __asm lea esi, [esi + 1]
  __asm mov byte ptr [esi - 1], al
  __asm sub ecx, 1
  __asm _emit 0x75 __asm _emit 0xf2
  __asm lea ecx, [edi + 0x21]
  __asm mov esi, 0x41
  __asm mov al, byte ptr [ecx + edx]
  __asm lea ecx, [ecx + 1]
  __asm mov byte ptr [ecx - 1], al
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xf2
  __asm lea ecx, [edi + 0x62]
  __asm mov esi, 0x401
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm mov al, byte ptr [ecx + edx]
  __asm lea ecx, [ecx + 1]
  __asm mov byte ptr [ecx - 1], al
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov eax, dword ptr [ebx + 0x464]
  __asm mov esi, 0x41
  __asm mov ecx, dword ptr [ebx + 0x468]
  __asm mov dword ptr [edi + 0x468], ecx
  __asm mov dword ptr [edi + 0x464], eax
  __asm mov eax, dword ptr [ebx + 0x46c]
  __asm mov ecx, dword ptr [ebx + 0x470]
  __asm mov dword ptr [edi + 0x470], ecx
  __asm lea ecx, [edi + 0x478]
  __asm mov dword ptr [edi + 0x46c], eax
  __asm mov eax, dword ptr [ebx + 0x474]
  __asm mov dword ptr [edi + 0x474], eax
  __asm mov al, byte ptr [ecx + edx]
  __asm lea ecx, [ecx + 1]
  __asm mov byte ptr [ecx - 1], al
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xf2
  __asm mov eax, dword ptr [ebx + 0x4bc]
  __asm mov dword ptr [edi + 0x4bc], eax
  __asm mov eax, dword ptr [ebx + 0x4c0]
  __asm mov dword ptr [edi + 0x4c0], eax
  __asm mov eax, dword ptr [ebx + 0x4c4]
  __asm mov dword ptr [edi + 0x4c4], eax
  __asm mov eax, dword ptr [ebx + 0x4c8]
  __asm mov dword ptr [edi + 0x4c8], eax
  __asm movzx eax, byte ptr [ebx + 0x4cc]
  __asm mov byte ptr [edi + 0x4cc], al
  __asm movzx eax, byte ptr [ebx + 0x4cd]
  __asm mov byte ptr [edi + 0x4cd], al
  __asm movzx eax, byte ptr [ebx + 0x4ce]
  __asm mov byte ptr [edi + 0x4ce], al
  __asm mov eax, dword ptr [ebx + 0x4d0]
  __asm mov dword ptr [edi + 0x4d0], eax
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
}




// Reference entry 10a14b00; body size 14 bytes.
#line 1 "ENTRY_10a14b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10a14b00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10a14b20; body size 14 bytes.
#line 1 "ENTRY_10a14b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10a14b20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10a14c60; body size 7 bytes.
#line 1 "ENTRY_10a14c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10a14c60(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10a14c70; body size 6 bytes.
#line 1 "ENTRY_10a14c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a14c70(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10a14c80; body size 6 bytes.
#line 1 "ENTRY_10a14c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a14c80(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10a14c90; body size 6 bytes.
#line 1 "ENTRY_10a14c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a14c90(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10a15490; body size 34 bytes.
#line 1 "ENTRY_10a15490"

__declspec(naked) void FUN_10a15490(void)

{
  __asm push esi
  __asm push 0x4e8
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret
}




// Reference entry 10a154f0; body size 14 bytes.
#line 1 "ENTRY_10a154f0"

__declspec(naked) void FUN_10a154f0(void)

{
  __asm cmp dword ptr [ecx + 4], 0x342da7
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10a15510; body size 3 bytes.
#line 1 "ENTRY_10a15510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a15520; body size 3 bytes.
#line 1 "ENTRY_10a15520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a15530; body size 3 bytes.
#line 1 "ENTRY_10a15530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a15540; body size 3 bytes.
#line 1 "ENTRY_10a15540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a15550; body size 3 bytes.
#line 1 "ENTRY_10a15550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a15560; body size 3 bytes.
#line 1 "ENTRY_10a15560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a15570; body size 3 bytes.
#line 1 "ENTRY_10a15570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a15580; body size 3 bytes.
#line 1 "ENTRY_10a15580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a15820; body size 79 bytes.
#line 1 "ENTRY_10a15820"

__declspec(naked) void FUN_10a15820(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [edx + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edx + 8], eax
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x03
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [ecx]
  __asm cmp edx, dword ptr [eax + 4]
  __asm _emit 0x75 __asm _emit 0x0c
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [edx + 4]
  __asm cmp edx, dword ptr [eax]
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a15890; body size 11 bytes.
#line 1 "ENTRY_10a15890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a15890(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10a158a0; body size 83 bytes.
#line 1 "ENTRY_10a158a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a158a0(int *param_2)
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


// Reference entry 10a15910; body size 90 bytes.
#line 1 "ENTRY_10a15910"

__declspec(naked) void FUN_10a15910(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x342da7
  __asm _emit 0x77 __asm _emit 0x4a
  __asm imul eax, eax, 0x4e8
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




// Reference entry 10a16170; body size 55 bytes.
#line 1 "ENTRY_10a16170"

__declspec(naked) void FUN_10a16170(void)

{
  __asm imul ecx, dword ptr [esp + 0xc], 0x4e8
  __asm mov eax, dword ptr [esp + 8]
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




// Reference entry 10a161c0; body size 58 bytes.
#line 1 "ENTRY_10a161c0"

__declspec(naked) void FUN_10a161c0(void)

{
  __asm imul ecx, dword ptr [esp + 8], 0x4e8
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




// Reference entry 10a16210; body size 11 bytes.
#line 1 "ENTRY_10a16210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a16210(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10a1adc0; body size 7 bytes.
#line 1 "ENTRY_10a1adc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a1adc0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf5));
}


// Reference entry 10a1add0; body size 7 bytes.
#line 1 "ENTRY_10a1add0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a1add0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf4));
}


// Reference entry 10a1c860; body size 6 bytes.
#line 1 "ENTRY_10a1c860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c860(void)

{
  return (undefined4)(DAT_121a42f0);
}


// Reference entry 10a1c870; body size 6 bytes.
#line 1 "ENTRY_10a1c870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c870(void)

{
  return (undefined4)(DAT_121a42ec);
}


// Reference entry 10a1c880; body size 6 bytes.
#line 1 "ENTRY_10a1c880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c880(void)

{
  return (undefined4)(DAT_121a42e8);
}


// Reference entry 10a1c890; body size 6 bytes.
#line 1 "ENTRY_10a1c890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c890(void)

{
  return (undefined4)(DAT_121a42f8);
}


// Reference entry 10a1c8a0; body size 6 bytes.
#line 1 "ENTRY_10a1c8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c8a0(void)

{
  return (undefined4)(DAT_121a42f4);
}


// Reference entry 10a1c8b0; body size 6 bytes.
#line 1 "ENTRY_10a1c8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1c8b0(void)

{
  return (undefined4)(DAT_121a42e4);
}


// Reference entry 10a1c8d0; body size 7 bytes.
#line 1 "ENTRY_10a1c8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1c8d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xf8));
}


// Reference entry 10a1c8e0; body size 7 bytes.
#line 1 "ENTRY_10a1c8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1c8e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xfc));
}


// Reference entry 10a1c8f0; body size 5 bytes.
#line 1 "ENTRY_10a1c8f0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1c8f0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a1c900; body size 5 bytes.
#line 1 "ENTRY_10a1c900"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1c900(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a1d040; body size 6 bytes.
#line 1 "ENTRY_10a1d040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1d040(void)

{
  return (undefined4)(0x342da7);
}


// Reference entry 10a1d050; body size 6 bytes.
#line 1 "ENTRY_10a1d050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1d050(void)

{
  return (undefined4)(0x342da7);
}


// Reference entry 10a1e410; body size 5 bytes.
#line 1 "ENTRY_10a1e410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a1e420; body size 13 bytes.
#line 1 "ENTRY_10a1e420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a1e420(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xf5) = (undefined1)(param_2);
  return;
}


// Reference entry 10a1e430; body size 13 bytes.
#line 1 "ENTRY_10a1e430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a1e430(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xf8) = (undefined4)(param_2);
  return;
}


// Reference entry 10a1e440; body size 13 bytes.
#line 1 "ENTRY_10a1e440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a1e440(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xfc) = (undefined4)(param_2);
  return;
}


// Reference entry 10a1e450; body size 7 bytes.
#line 1 "ENTRY_10a1e450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1e450(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x4bc));
}


// Reference entry 10a1e460; body size 4 bytes.
#line 1 "ENTRY_10a1e460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a1e460(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10a1e470; body size 7 bytes.
#line 1 "ENTRY_10a1e470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1e470(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x4c8));
}


// Reference entry 10a1e480; body size 7 bytes.
#line 1 "ENTRY_10a1e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a1e480(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x4cd));
}


// Reference entry 10a1e490; body size 25 bytes.
#line 1 "ENTRY_10a1e490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a1e490(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a1e4b0; body size 25 bytes.
#line 1 "ENTRY_10a1e4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a1e4b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a1e4d0; body size 25 bytes.
#line 1 "ENTRY_10a1e4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a1e4d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a1e4f0; body size 23 bytes.
#line 1 "ENTRY_10a1e4f0"

__declspec(naked) void FUN_10a1e4f0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_1000897c
  __asm add dword ptr [esi + 4], 0x1c
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a1e510; body size 18 bytes.
#line 1 "ENTRY_10a1e510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a1e510(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10a1e680; body size 7 bytes.
#line 1 "ENTRY_10a1e680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e680(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a1e690; body size 3 bytes.
#line 1 "ENTRY_10a1e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a1e690(void)

{
  return;
}


// Reference entry 10a1e6a0; body size 3 bytes.
#line 1 "ENTRY_10a1e6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a1e6a0(void)

{
  return;
}


// Reference entry 10a1e760; body size 38 bytes.
#line 1 "ENTRY_10a1e760"

__declspec(naked) void FUN_10a1e760(void)

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




// Reference entry 10a1e830; body size 36 bytes.
#line 1 "ENTRY_10a1e830"

__declspec(naked) void FUN_10a1e830(void)

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




// Reference entry 10a1e860; body size 5 bytes.
#line 1 "ENTRY_10a1e860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a1e870; body size 5 bytes.
#line 1 "ENTRY_10a1e870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a1e880; body size 14 bytes.
#line 1 "ENTRY_10a1e880"

__declspec(naked) void FUN_10a1e880(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_1000897c
  __asm ret
}




// Reference entry 10a1e8a0; body size 13 bytes.
#line 1 "ENTRY_10a1e8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a1e8a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10a1e8b0; body size 36 bytes.
#line 1 "ENTRY_10a1e8b0"

__declspec(naked) void FUN_10a1e8b0(void)

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
  __asm call LAB_1004ac8c
  __asm ret 4
}




// Reference entry 10a1e8e0; body size 5 bytes.
#line 1 "ENTRY_10a1e8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a1e8f0; body size 5 bytes.
#line 1 "ENTRY_10a1e8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e8f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a1e900; body size 5 bytes.
#line 1 "ENTRY_10a1e900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a1e910; body size 6 bytes.
#line 1 "ENTRY_10a1e910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e910(void)

{
  return (undefined4)(DAT_121a4374);
}


// Reference entry 10a1e920; body size 6 bytes.
#line 1 "ENTRY_10a1e920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e920(void)

{
  return (undefined4)(DAT_121a4378);
}


// Reference entry 10a1e930; body size 6 bytes.
#line 1 "ENTRY_10a1e930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e930(void)

{
  return (undefined4)(DAT_121a4360);
}


// Reference entry 10a1e940; body size 6 bytes.
#line 1 "ENTRY_10a1e940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e940(void)

{
  return (undefined4)(DAT_121a434c);
}


// Reference entry 10a1e950; body size 6 bytes.
#line 1 "ENTRY_10a1e950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e950(void)

{
  return (undefined4)(DAT_121a436c);
}


// Reference entry 10a1e960; body size 6 bytes.
#line 1 "ENTRY_10a1e960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e960(void)

{
  return (undefined4)(DAT_121a4370);
}


// Reference entry 10a1e970; body size 6 bytes.
#line 1 "ENTRY_10a1e970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e970(void)

{
  return (undefined4)(DAT_121a4354);
}


// Reference entry 10a1e980; body size 6 bytes.
#line 1 "ENTRY_10a1e980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e980(void)

{
  return (undefined4)(DAT_121a4358);
}


// Reference entry 10a1e990; body size 6 bytes.
#line 1 "ENTRY_10a1e990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e990(void)

{
  return (undefined4)(DAT_121a4348);
}


// Reference entry 10a1e9a0; body size 6 bytes.
#line 1 "ENTRY_10a1e9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e9a0(void)

{
  return (undefined4)(DAT_121a4368);
}


// Reference entry 10a1e9b0; body size 6 bytes.
#line 1 "ENTRY_10a1e9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e9b0(void)

{
  return (undefined4)(DAT_121a4364);
}


// Reference entry 10a1e9c0; body size 6 bytes.
#line 1 "ENTRY_10a1e9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e9c0(void)

{
  return (undefined4)(DAT_121a4350);
}


// Reference entry 10a1e9d0; body size 6 bytes.
#line 1 "ENTRY_10a1e9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e9d0(void)

{
  return (undefined4)(DAT_121a435c);
}


// Reference entry 10a1e9f0; body size 5 bytes.
#line 1 "ENTRY_10a1e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1e9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a1ea00; body size 5 bytes.
#line 1 "ENTRY_10a1ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1ea00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a1ea10; body size 5 bytes.
#line 1 "ENTRY_10a1ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a1ea10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a1eac0; body size 57 bytes.
#line 1 "ENTRY_10a1eac0"

__declspec(naked) void FUN_10a1eac0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f4574
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f45d0
  __asm mov dword ptr [esi + 0x8c], LAB_118f45dc
  __asm mov dword ptr [esi + 0xa8], LAB_118f45e8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a1f740; body size 21 bytes.
#line 1 "ENTRY_10a1f740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a1f740(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10a1f760; body size 23 bytes.
#line 1 "ENTRY_10a1f760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a1f760(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a1f780; body size 3 bytes.
#line 1 "ENTRY_10a1f780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a1f780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a1f900; body size 23 bytes.
#line 1 "ENTRY_10a1f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a1f900(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a1fa40; body size 57 bytes.
#line 1 "ENTRY_10a1fa40"

__declspec(naked) void FUN_10a1fa40(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f4d60
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f4dbc
  __asm mov dword ptr [esi + 0x8c], LAB_118f4dc8
  __asm mov dword ptr [esi + 0xa8], LAB_118f4dd4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a1fb90; body size 57 bytes.
#line 1 "ENTRY_10a1fb90"

__declspec(naked) void FUN_10a1fb90(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f4df8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f4e54
  __asm mov dword ptr [esi + 0x8c], LAB_118f4e60
  __asm mov dword ptr [esi + 0xa8], LAB_118f4e6c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a1fce0; body size 77 bytes.
#line 1 "ENTRY_10a1fce0"

__declspec(naked) void FUN_10a1fce0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f4770
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f47cc
  __asm mov dword ptr [esi + 0x8c], LAB_118f47d8
  __asm mov dword ptr [esi + 0xa8], LAB_118f47e4
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a1fe40; body size 57 bytes.
#line 1 "ENTRY_10a1fe40"

__declspec(naked) void FUN_10a1fe40(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f46d8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f4734
  __asm mov dword ptr [esi + 0x8c], LAB_118f4740
  __asm mov dword ptr [esi + 0xa8], LAB_118f474c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a1ff90; body size 57 bytes.
#line 1 "ENTRY_10a1ff90"

__declspec(naked) void FUN_10a1ff90(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f49d0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f4a2c
  __asm mov dword ptr [esi + 0x8c], LAB_118f4a38
  __asm mov dword ptr [esi + 0xa8], LAB_118f4a44
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a200e0; body size 57 bytes.
#line 1 "ENTRY_10a200e0"

__declspec(naked) void FUN_10a200e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f48a0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f48fc
  __asm mov dword ptr [esi + 0x8c], LAB_118f4908
  __asm mov dword ptr [esi + 0xa8], LAB_118f4914
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a20230; body size 64 bytes.
#line 1 "ENTRY_10a20230"

__declspec(naked) void FUN_10a20230(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f4b44
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f4ba0
  __asm mov dword ptr [esi + 0x8c], LAB_118f4bac
  __asm mov dword ptr [esi + 0xa8], LAB_118f4bb8
  __asm mov byte ptr [esi + 0xe0], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a20380; body size 64 bytes.
#line 1 "ENTRY_10a20380"

__declspec(naked) void FUN_10a20380(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f4c30
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f4c8c
  __asm mov dword ptr [esi + 0x8c], LAB_118f4c98
  __asm mov dword ptr [esi + 0xa8], LAB_118f4ca4
  __asm mov byte ptr [esi + 0xe0], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a206f0; body size 57 bytes.
#line 1 "ENTRY_10a206f0"

__declspec(naked) void FUN_10a206f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f4938
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f4994
  __asm mov dword ptr [esi + 0x8c], LAB_118f49a0
  __asm mov dword ptr [esi + 0xa8], LAB_118f49ac
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a20840; body size 74 bytes.
#line 1 "ENTRY_10a20840"

__declspec(naked) void FUN_10a20840(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f4808
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f4864
  __asm mov dword ptr [esi + 0x8c], LAB_118f4870
  __asm mov dword ptr [esi + 0xa8], LAB_118f487c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [esi + 0xe4], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a20ba0; body size 94 bytes.
#line 1 "ENTRY_10a20ba0"

__declspec(naked) void FUN_10a20ba0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f4cc8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f4d24
  __asm mov dword ptr [esi + 0x8c], LAB_118f4d30
  __asm mov dword ptr [esi + 0xa8], LAB_118f4d3c
  __asm mov byte ptr [esi + 0xe0], 0
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a21c50; body size 11 bytes.
#line 1 "ENTRY_10a21c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21c50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21c60; body size 11 bytes.
#line 1 "ENTRY_10a21c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21c60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21c70; body size 11 bytes.
#line 1 "ENTRY_10a21c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21c70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21c80; body size 11 bytes.
#line 1 "ENTRY_10a21c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21c80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21c90; body size 11 bytes.
#line 1 "ENTRY_10a21c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21c90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21ca0; body size 11 bytes.
#line 1 "ENTRY_10a21ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21ca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21cb0; body size 11 bytes.
#line 1 "ENTRY_10a21cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21cc0; body size 11 bytes.
#line 1 "ENTRY_10a21cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21cc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21cd0; body size 11 bytes.
#line 1 "ENTRY_10a21cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21ce0; body size 11 bytes.
#line 1 "ENTRY_10a21ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21cf0; body size 11 bytes.
#line 1 "ENTRY_10a21cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21cf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21d00; body size 11 bytes.
#line 1 "ENTRY_10a21d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21d00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21d10; body size 11 bytes.
#line 1 "ENTRY_10a21d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21d10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a21d30; body size 16 bytes.
#line 1 "ENTRY_10a21d30"

__declspec(naked) void FUN_10a21d30(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm jne LAB_1006e574
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}




// Reference entry 10a21d60; body size 38 bytes.
#line 1 "ENTRY_10a21d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21d60(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a21d90; body size 21 bytes.
#line 1 "ENTRY_10a21d90"

__declspec(naked) void FUN_10a21d90(void)

{
  __asm mov dword ptr [LAB_121a4374], 0
  __asm mov dword ptr [ecx], LAB_118f441c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a21db0; body size 38 bytes.
#line 1 "ENTRY_10a21db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21db0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a21de0; body size 21 bytes.
#line 1 "ENTRY_10a21de0"

__declspec(naked) void FUN_10a21de0(void)

{
  __asm mov dword ptr [LAB_121a4378], 0
  __asm mov dword ptr [ecx], LAB_118f4484
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a21e00; body size 38 bytes.
#line 1 "ENTRY_10a21e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21e00(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a21e30; body size 21 bytes.
#line 1 "ENTRY_10a21e30"

__declspec(naked) void FUN_10a21e30(void)

{
  __asm mov dword ptr [LAB_121a4360], 0
  __asm mov dword ptr [ecx], LAB_118f4240
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a21e50; body size 38 bytes.
#line 1 "ENTRY_10a21e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21e50(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a21e80; body size 21 bytes.
#line 1 "ENTRY_10a21e80"

__declspec(naked) void FUN_10a21e80(void)

{
  __asm mov dword ptr [LAB_121a434c], 0
  __asm mov dword ptr [ecx], LAB_118f4074
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a21ea0; body size 38 bytes.
#line 1 "ENTRY_10a21ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21ea0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a21ed0; body size 21 bytes.
#line 1 "ENTRY_10a21ed0"

__declspec(naked) void FUN_10a21ed0(void)

{
  __asm mov dword ptr [LAB_121a436c], 0
  __asm mov dword ptr [ecx], LAB_118f435c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a21ef0; body size 38 bytes.
#line 1 "ENTRY_10a21ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21ef0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a21f20; body size 21 bytes.
#line 1 "ENTRY_10a21f20"

__declspec(naked) void FUN_10a21f20(void)

{
  __asm mov dword ptr [LAB_121a4370], 0
  __asm mov dword ptr [ecx], LAB_118f43bc
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a21f40; body size 38 bytes.
#line 1 "ENTRY_10a21f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21f40(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a21f70; body size 21 bytes.
#line 1 "ENTRY_10a21f70"

__declspec(naked) void FUN_10a21f70(void)

{
  __asm mov dword ptr [LAB_121a4354], 0
  __asm mov dword ptr [ecx], LAB_118f4130
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a21f90; body size 38 bytes.
#line 1 "ENTRY_10a21f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a21f90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a21fc0; body size 21 bytes.
#line 1 "ENTRY_10a21fc0"

__declspec(naked) void FUN_10a21fc0(void)

{
  __asm mov dword ptr [LAB_121a4358], 0
  __asm mov dword ptr [ecx], LAB_118f418c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a220a0; body size 21 bytes.
#line 1 "ENTRY_10a220a0"

__declspec(naked) void FUN_10a220a0(void)

{
  __asm mov dword ptr [LAB_121a4348], 0
  __asm mov dword ptr [ecx], LAB_118f4020
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a220c0; body size 38 bytes.
#line 1 "ENTRY_10a220c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a220c0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a220f0; body size 21 bytes.
#line 1 "ENTRY_10a220f0"

__declspec(naked) void FUN_10a220f0(void)

{
  __asm mov dword ptr [LAB_121a4368], 0
  __asm mov dword ptr [ecx], LAB_118f4300
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a22110; body size 38 bytes.
#line 1 "ENTRY_10a22110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a22110(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a22140; body size 21 bytes.
#line 1 "ENTRY_10a22140"

__declspec(naked) void FUN_10a22140(void)

{
  __asm mov dword ptr [LAB_121a4364], 0
  __asm mov dword ptr [ecx], LAB_118f42a4
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a22210; body size 21 bytes.
#line 1 "ENTRY_10a22210"

__declspec(naked) void FUN_10a22210(void)

{
  __asm mov dword ptr [LAB_121a4350], 0
  __asm mov dword ptr [ecx], LAB_118f40d0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a22280; body size 21 bytes.
#line 1 "ENTRY_10a22280"

__declspec(naked) void FUN_10a22280(void)

{
  __asm mov dword ptr [LAB_121a435c], 0
  __asm mov dword ptr [ecx], LAB_118f41e8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a22490; body size 60 bytes.
#line 1 "ENTRY_10a22490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a22490(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_1036e270();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10a224e0; body size 132 bytes.
#line 1 "ENTRY_10a224e0"

__declspec(naked) void FUN_10a224e0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x6a
  __asm mov eax, dword ptr [esi]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x40
  __asm mov ecx, dword ptr [esi + 8]
  __asm sub ecx, eax
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x4b
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [edi + 8]
  __asm mov dword ptr [esi + 8], eax
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}




// Reference entry 10a22750; body size 21 bytes.
#line 1 "ENTRY_10a22750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10a22750(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x1c);
}


// Reference entry 10a22770; body size 12 bytes.
#line 1 "ENTRY_10a22770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10a22770(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10a237c0; body size 137 bytes.
#line 1 "ENTRY_10a237c0"

__declspec(naked) void FUN_10a237c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm cmp eax, 0x9249249
  __asm _emit 0x77 __asm _emit 0x75 __asm _emit 0x8d __asm _emit 0x34 __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub esi, eax
  __asm shl esi, 2
  __asm cmp esi, 0x1000
  __asm _emit 0x72 __asm _emit 0x34
  __asm lea eax, [esi + 0x23]
  __asm cmp eax, esi
  __asm _emit 0x76 __asm _emit 0x5a
  __asm push eax
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x18
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm add eax, esi
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x18
  __asm push esi
  __asm call LAB_10024f14
  __asm mov dword ptr [edi], eax
  __asm add esp, 4
  __asm mov dword ptr [edi + 4], eax
  __asm add eax, esi
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm xor eax, eax
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm mov eax, esi
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm call LAB_10070f3b
}




// Reference entry 10a238a0; body size 3 bytes.
#line 1 "ENTRY_10a238a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a238a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a238b0; body size 3 bytes.
#line 1 "ENTRY_10a238b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a238b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a239b0; body size 6 bytes.
#line 1 "ENTRY_10a239b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a239b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10a239c0; body size 43 bytes.
#line 1 "ENTRY_10a239c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a239c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10a23a00; body size 43 bytes.
#line 1 "ENTRY_10a23a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a23a00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10a23a40; body size 3 bytes.
#line 1 "ENTRY_10a23a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a23a40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a23a50; body size 4 bytes.
#line 1 "ENTRY_10a23a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a23a50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10a23a60; body size 97 bytes.
#line 1 "ENTRY_10a23a60"

__declspec(naked) void FUN_10a23a60(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp ecx, 0x9249249
  __asm _emit 0x77 __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xcd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub eax, ecx
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




// Reference entry 10a25310; body size 20 bytes.
#line 1 "ENTRY_10a25310"

__declspec(naked) void FUN_10a25310(void)

{
  __asm lea eax, [ecx + 0x34]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_10028f83
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10a33e80; body size 7 bytes.
#line 1 "ENTRY_10a33e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a33e80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x11c));
}


// Reference entry 10a33e90; body size 4 bytes.
#line 1 "ENTRY_10a33e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a33e90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10a35ea0; body size 4 bytes.
#line 1 "ENTRY_10a35ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a35ea0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 10a35f00; body size 20 bytes.
#line 1 "ENTRY_10a35f00"

__declspec(naked) void FUN_10a35f00(void)

{
  __asm lea eax, [ecx + 0x10]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_1003666a
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10a3c6b0; body size 23 bytes.
#line 1 "ENTRY_10a3c6b0"

__declspec(naked) void FUN_10a3c6b0(void)

{
  __asm lea eax, [ecx + 0x100]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_10036f5c
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10a3c6d0; body size 6 bytes.
#line 1 "ENTRY_10a3c6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c6d0(void)

{
  return (undefined4)(DAT_121a4374);
}


// Reference entry 10a3c6e0; body size 6 bytes.
#line 1 "ENTRY_10a3c6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c6e0(void)

{
  return (undefined4)(DAT_121a4378);
}


// Reference entry 10a3c6f0; body size 6 bytes.
#line 1 "ENTRY_10a3c6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c6f0(void)

{
  return (undefined4)(DAT_121a4360);
}


// Reference entry 10a3c700; body size 6 bytes.
#line 1 "ENTRY_10a3c700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c700(void)

{
  return (undefined4)(DAT_121a434c);
}


// Reference entry 10a3c710; body size 6 bytes.
#line 1 "ENTRY_10a3c710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c710(void)

{
  return (undefined4)(DAT_121a436c);
}


// Reference entry 10a3c720; body size 6 bytes.
#line 1 "ENTRY_10a3c720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c720(void)

{
  return (undefined4)(DAT_121a4370);
}


// Reference entry 10a3c730; body size 6 bytes.
#line 1 "ENTRY_10a3c730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c730(void)

{
  return (undefined4)(DAT_121a4354);
}


// Reference entry 10a3c740; body size 6 bytes.
#line 1 "ENTRY_10a3c740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c740(void)

{
  return (undefined4)(DAT_121a4358);
}


// Reference entry 10a3c750; body size 6 bytes.
#line 1 "ENTRY_10a3c750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c750(void)

{
  return (undefined4)(DAT_121a4348);
}


// Reference entry 10a3c760; body size 6 bytes.
#line 1 "ENTRY_10a3c760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c760(void)

{
  return (undefined4)(DAT_121a4368);
}


// Reference entry 10a3c770; body size 6 bytes.
#line 1 "ENTRY_10a3c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c770(void)

{
  return (undefined4)(DAT_121a4364);
}


// Reference entry 10a3c780; body size 6 bytes.
#line 1 "ENTRY_10a3c780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c780(void)

{
  return (undefined4)(DAT_121a4350);
}


// Reference entry 10a3c790; body size 6 bytes.
#line 1 "ENTRY_10a3c790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c790(void)

{
  return (undefined4)(DAT_121a435c);
}


// Reference entry 10a3c7a0; body size 6 bytes.
#line 1 "ENTRY_10a3c7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a3c7a0(void)

{
  return (undefined4)(DAT_121a4344);
}


// Reference entry 10a3d040; body size 5 bytes.
#line 1 "ENTRY_10a3d040"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a3d040(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a3d050; body size 5 bytes.
#line 1 "ENTRY_10a3d050"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a3d050(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a3d060; body size 11 bytes.
#line 1 "ENTRY_10a3d060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10a3d060(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x11c) != 0);
}


// Reference entry 10a3d660; body size 7 bytes.
#line 1 "ENTRY_10a3d660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10a3d660(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10a3f3b0; body size 36 bytes.
#line 1 "ENTRY_10a3f3b0"

__declspec(naked) void FUN_10a3f3b0(void)

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
  __asm call LAB_1004ac8c
  __asm ret 4
}




// Reference entry 10a40720; body size 5 bytes.
#line 1 "ENTRY_10a40720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a40730; body size 5 bytes.
#line 1 "ENTRY_10a40730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a40750; body size 13 bytes.
#line 1 "ENTRY_10a40750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a40750(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x140) = (undefined1)(param_2);
  return;
}


// Reference entry 10a40760; body size 11 bytes.
#line 1 "ENTRY_10a40760"

__declspec(naked) void FUN_10a40760(void)

{
  __asm add ecx, 0x100
  __asm jmp LAB_10059741
}






// Reference entry 10a40770; body size 9 bytes.
#line 1 "ENTRY_10a40770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a40770(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10a40820; body size 18 bytes.
#line 1 "ENTRY_10a40820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a40820(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10a40840; body size 69 bytes.
#line 1 "ENTRY_10a40840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a40840(SCStr *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)param_1[1]);
  if ((SCStr *)((param_2)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)*param_1);
  if (param_2 + 4 != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 4)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10a40d90; body size 5 bytes.
#line 1 "ENTRY_10a40d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a40da0; body size 6 bytes.
#line 1 "ENTRY_10a40da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40da0(void)

{
  return (undefined4)(DAT_121a43cc);
}


// Reference entry 10a40db0; body size 6 bytes.
#line 1 "ENTRY_10a40db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40db0(void)

{
  return (undefined4)(DAT_121a43d0);
}


// Reference entry 10a40dd0; body size 5 bytes.
#line 1 "ENTRY_10a40dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a40dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a40de0; body size 18 bytes.
#line 1 "ENTRY_10a40de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10a40de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10a40e00; body size 57 bytes.
#line 1 "ENTRY_10a40e00"

__declspec(naked) void FUN_10a40e00(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f4ffc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f5058
  __asm mov dword ptr [esi + 0x8c], LAB_118f5064
  __asm mov dword ptr [esi + 0xa8], LAB_118f5070
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a410b0; body size 87 bytes.
#line 1 "ENTRY_10a410b0"

__declspec(naked) void FUN_10a410b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f5094
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f50f0
  __asm mov dword ptr [esi + 0x8c], LAB_118f50fc
  __asm mov dword ptr [esi + 0xa8], LAB_118f5108
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a41220; body size 57 bytes.
#line 1 "ENTRY_10a41220"

__declspec(naked) void FUN_10a41220(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f512c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f5188
  __asm mov dword ptr [esi + 0x8c], LAB_118f5194
  __asm mov dword ptr [esi + 0xa8], LAB_118f51a0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a416b0; body size 38 bytes.
#line 1 "ENTRY_10a416b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a416b0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a416e0; body size 11 bytes.
#line 1 "ENTRY_10a416e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a416e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a416f0; body size 11 bytes.
#line 1 "ENTRY_10a416f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a416f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a41750; body size 21 bytes.
#line 1 "ENTRY_10a41750"

__declspec(naked) void FUN_10a41750(void)

{
  __asm mov dword ptr [LAB_121a43cc], 0
  __asm mov dword ptr [ecx], LAB_118f4f38
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a41770; body size 38 bytes.
#line 1 "ENTRY_10a41770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a41770(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a417a0; body size 21 bytes.
#line 1 "ENTRY_10a417a0"

__declspec(naked) void FUN_10a417a0(void)

{
  __asm mov dword ptr [LAB_121a43d0], 0
  __asm mov dword ptr [ecx], LAB_118f4f88
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a41ca0; body size 49 bytes.
#line 1 "ENTRY_10a41ca0"

__declspec(naked) void FUN_10a41ca0(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x1fffffff
  __asm sar edx, 3
  __asm push esi
  __asm mov esi, edx
  __asm _emit 0xd1 __asm _emit 0xee
  __asm sub ecx, esi
  __asm cmp edx, ecx
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x1fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10a41d70; body size 3 bytes.
#line 1 "ENTRY_10a41d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10a41d70(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10a41e50; body size 24 bytes.
#line 1 "ENTRY_10a41e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a41e50(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103316a0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a41e70; body size 24 bytes.
#line 1 "ENTRY_10a41e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a41e70(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103316a0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a41e90; body size 3 bytes.
#line 1 "ENTRY_10a41e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a41e90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a41ea0; body size 4 bytes.
#line 1 "ENTRY_10a41ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a41ea0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10a41eb0; body size 9 bytes.
#line 1 "ENTRY_10a41eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a41eb0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10a43be0; body size 6 bytes.
#line 1 "ENTRY_10a43be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a43be0(void)

{
  return (undefined4)(DAT_121a43cc);
}


// Reference entry 10a43bf0; body size 6 bytes.
#line 1 "ENTRY_10a43bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a43bf0(void)

{
  return (undefined4)(DAT_121a43d0);
}


// Reference entry 10a43c00; body size 6 bytes.
#line 1 "ENTRY_10a43c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a43c00(void)

{
  return (undefined4)(DAT_121a43c8);
}


// Reference entry 10a43c20; body size 5 bytes.
#line 1 "ENTRY_10a43c20"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a43c20(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a43c30; body size 5 bytes.
#line 1 "ENTRY_10a43c30"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a43c30(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a445e0; body size 6 bytes.
#line 1 "ENTRY_10a445e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a445e0(void)

{
  return (undefined4)(DAT_121a4414);
}


// Reference entry 10a445f0; body size 6 bytes.
#line 1 "ENTRY_10a445f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a445f0(void)

{
  return (undefined4)(DAT_121a4418);
}


// Reference entry 10a44610; body size 57 bytes.
#line 1 "ENTRY_10a44610"

__declspec(naked) void FUN_10a44610(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f5310
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f536c
  __asm mov dword ptr [esi + 0x8c], LAB_118f5378
  __asm mov dword ptr [esi + 0xa8], LAB_118f5384
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a44840; body size 57 bytes.
#line 1 "ENTRY_10a44840"

__declspec(naked) void FUN_10a44840(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f53a8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f5404
  __asm mov dword ptr [esi + 0x8c], LAB_118f5410
  __asm mov dword ptr [esi + 0xa8], LAB_118f541c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a44990; body size 57 bytes.
#line 1 "ENTRY_10a44990"

__declspec(naked) void FUN_10a44990(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f544c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f54a8
  __asm mov dword ptr [esi + 0x8c], LAB_118f54b4
  __asm mov dword ptr [esi + 0xa8], LAB_118f54c0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a44e50; body size 38 bytes.
#line 1 "ENTRY_10a44e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44e50(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a44e80; body size 11 bytes.
#line 1 "ENTRY_10a44e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44e80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a44e90; body size 11 bytes.
#line 1 "ENTRY_10a44e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44e90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a44ec0; body size 38 bytes.
#line 1 "ENTRY_10a44ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44ec0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a44ef0; body size 21 bytes.
#line 1 "ENTRY_10a44ef0"

__declspec(naked) void FUN_10a44ef0(void)

{
  __asm mov dword ptr [LAB_121a4414], 0
  __asm mov dword ptr [ecx], LAB_118f526c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a44f10; body size 38 bytes.
#line 1 "ENTRY_10a44f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a44f10(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a44f40; body size 21 bytes.
#line 1 "ENTRY_10a44f40"

__declspec(naked) void FUN_10a44f40(void)

{
  __asm mov dword ptr [LAB_121a4418], 0
  __asm mov dword ptr [ecx], LAB_118f52b0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a487c0; body size 6 bytes.
#line 1 "ENTRY_10a487c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a487c0(void)

{
  return (undefined4)(DAT_121a4414);
}


// Reference entry 10a487d0; body size 6 bytes.
#line 1 "ENTRY_10a487d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a487d0(void)

{
  return (undefined4)(DAT_121a4418);
}


// Reference entry 10a487e0; body size 6 bytes.
#line 1 "ENTRY_10a487e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a487e0(void)

{
  return (undefined4)(DAT_121a441c);
}


// Reference entry 10a48800; body size 5 bytes.
#line 1 "ENTRY_10a48800"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a48800(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a48810; body size 5 bytes.
#line 1 "ENTRY_10a48810"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a48810(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a48d50; body size 6 bytes.
#line 1 "ENTRY_10a48d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a48d50(void)

{
  return (undefined4)(DAT_121a446c);
}


// Reference entry 10a48d60; body size 6 bytes.
#line 1 "ENTRY_10a48d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a48d60(void)

{
  return (undefined4)(DAT_121a4468);
}


// Reference entry 10a48d80; body size 57 bytes.
#line 1 "ENTRY_10a48d80"

__declspec(naked) void FUN_10a48d80(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f5658
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f56b4
  __asm mov dword ptr [esi + 0x8c], LAB_118f56c0
  __asm mov dword ptr [esi + 0xa8], LAB_118f56cc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a48fb0; body size 57 bytes.
#line 1 "ENTRY_10a48fb0"

__declspec(naked) void FUN_10a48fb0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f5788
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f57e4
  __asm mov dword ptr [esi + 0x8c], LAB_118f57f0
  __asm mov dword ptr [esi + 0xa8], LAB_118f57fc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a49100; body size 57 bytes.
#line 1 "ENTRY_10a49100"

__declspec(naked) void FUN_10a49100(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f56f0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f574c
  __asm mov dword ptr [esi + 0x8c], LAB_118f5758
  __asm mov dword ptr [esi + 0xa8], LAB_118f5764
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a495c0; body size 38 bytes.
#line 1 "ENTRY_10a495c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a495c0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a495f0; body size 11 bytes.
#line 1 "ENTRY_10a495f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a495f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a49600; body size 11 bytes.
#line 1 "ENTRY_10a49600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a49600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a49610; body size 38 bytes.
#line 1 "ENTRY_10a49610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a49610(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a49640; body size 21 bytes.
#line 1 "ENTRY_10a49640"

__declspec(naked) void FUN_10a49640(void)

{
  __asm mov dword ptr [LAB_121a446c], 0
  __asm mov dword ptr [ecx], LAB_118f55e0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a49660; body size 38 bytes.
#line 1 "ENTRY_10a49660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a49660(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a49690; body size 21 bytes.
#line 1 "ENTRY_10a49690"

__declspec(naked) void FUN_10a49690(void)

{
  __asm mov dword ptr [LAB_121a4468], 0
  __asm mov dword ptr [ecx], LAB_118f559c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a4c370; body size 6 bytes.
#line 1 "ENTRY_10a4c370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4c370(void)

{
  return (undefined4)(DAT_121a446c);
}


// Reference entry 10a4c380; body size 6 bytes.
#line 1 "ENTRY_10a4c380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4c380(void)

{
  return (undefined4)(DAT_121a4468);
}


// Reference entry 10a4c390; body size 6 bytes.
#line 1 "ENTRY_10a4c390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4c390(void)

{
  return (undefined4)(DAT_121a4470);
}


// Reference entry 10a4c3b0; body size 5 bytes.
#line 1 "ENTRY_10a4c3b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a4c3b0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a4c3c0; body size 5 bytes.
#line 1 "ENTRY_10a4c3c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a4c3c0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a4c770; body size 25 bytes.
#line 1 "ENTRY_10a4c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c770(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4c790; body size 25 bytes.
#line 1 "ENTRY_10a4c790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c790(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4c7b0; body size 25 bytes.
#line 1 "ENTRY_10a4c7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c7b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4c7d0; body size 25 bytes.
#line 1 "ENTRY_10a4c7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c7d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4c7f0; body size 25 bytes.
#line 1 "ENTRY_10a4c7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c7f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4c810; body size 25 bytes.
#line 1 "ENTRY_10a4c810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4c810(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4c830; body size 19 bytes.
#line 1 "ENTRY_10a4c830"

__declspec(naked) void FUN_10a4c830(void)

{
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm call LAB_1008054e
  __asm add esp, 8
  __asm xor al, 1
  __asm ret
}




// Reference entry 10a4c850; body size 3 bytes.
#line 1 "ENTRY_10a4c850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4c850(void)

{
  return;
}


// Reference entry 10a4c860; body size 203 bytes.
#line 1 "ENTRY_10a4c860"

__declspec(naked) void FUN_10a4c860(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push ebp
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm sub ebx, eax
  __asm mov edx, ebx
  __asm sar edx, 2
  __asm mov ecx, dword ptr [edi + 8]
  __asm mov esi, dword ptr [edi]
  __asm sub ecx, esi
  __asm sar ecx, 2
  __asm cmp edx, ecx
  __asm jbe LAB_10a4c908
  __asm cmp edx, 0x3fffffff
  __asm ja LAB_10a4c926
  __asm mov ebp, ecx
  __asm mov eax, 0x3fffffff
  __asm _emit 0xd1 __asm _emit 0xed
  __asm sub eax, ebp
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov ebp, 0x3fffffff
  __asm _emit 0xeb __asm _emit 0x07
  __asm add ebp, ecx
  __asm cmp ebp, edx
  __asm cmovb ebp, edx
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x3b
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub esi, edx
  __asm lea eax, [esi - 4]
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x51
  __asm mov esi, edx
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push ebp
  __asm mov ecx, edi
  __asm call LAB_10046515
  __asm mov esi, eax
  __asm mov eax, dword ptr [esp + 0x14]
  __asm mov dword ptr [edi], esi
  __asm mov dword ptr [edi + 4], esi
  __asm lea ecx, [esi + ebp*4]
  __asm mov dword ptr [edi + 8], ecx
  __asm push ebx
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [ebx + esi]
  __asm mov dword ptr [edi + 4], eax
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret 0xc
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_10032cd1
}




// Reference entry 10a4c960; body size 33 bytes.
#line 1 "ENTRY_10a4c960"

__declspec(naked) void FUN_10a4c960(void)

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




// Reference entry 10a4c990; body size 3 bytes.
#line 1 "ENTRY_10a4c990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4c990(void)

{
  return;
}


// Reference entry 10a4cae0; body size 39 bytes.
#line 1 "ENTRY_10a4cae0"

__declspec(naked) void FUN_10a4cae0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [edx]
  __asm mov esi, dword ptr [edi + 4]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a4cb10; body size 39 bytes.
#line 1 "ENTRY_10a4cb10"

__declspec(naked) void FUN_10a4cb10(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [edx]
  __asm mov esi, dword ptr [edi + 4]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a4cb40; body size 39 bytes.
#line 1 "ENTRY_10a4cb40"

__declspec(naked) void FUN_10a4cb40(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [edx]
  __asm mov esi, dword ptr [edi + 4]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a4cb70; body size 39 bytes.
#line 1 "ENTRY_10a4cb70"

__declspec(naked) void FUN_10a4cb70(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [edx]
  __asm mov esi, dword ptr [edi + 4]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a4cba0; body size 18 bytes.
#line 1 "ENTRY_10a4cba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a4cba0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10a4cbc0; body size 39 bytes.
#line 1 "ENTRY_10a4cbc0"

__declspec(naked) void FUN_10a4cbc0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [edx]
  __asm mov esi, dword ptr [edi + 4]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a4cbf0; body size 39 bytes.
#line 1 "ENTRY_10a4cbf0"

__declspec(naked) void FUN_10a4cbf0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov eax, dword ptr [edx]
  __asm mov esi, dword ptr [edi + 4]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a4d170; body size 7 bytes.
#line 1 "ENTRY_10a4d170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a4d180; body size 7 bytes.
#line 1 "ENTRY_10a4d180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d180(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a4d190; body size 7 bytes.
#line 1 "ENTRY_10a4d190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d190(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a4d1a0; body size 7 bytes.
#line 1 "ENTRY_10a4d1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d1a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a4d1b0; body size 92 bytes.
#line 1 "ENTRY_10a4d1b0"

__declspec(naked) void FUN_10a4d1b0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmp edi, ebx
  __asm _emit 0x74 __asm _emit 0x47
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm mov eax, dword ptr [edi]
  __asm cmp eax, dword ptr [esi]
  __asm _emit 0x74 __asm _emit 0x2c
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x14 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add edi, 8
  __asm add esi, 8
  __asm cmp edi, ebx
  __asm _emit 0x75 __asm _emit 0xc4
  __asm mov eax, esi
  __asm pop esi
  __asm pop edi
  __asm pop ebx
  __asm ret
  __asm mov eax, dword ptr [esp + 0x14]
  __asm pop edi
  __asm pop ebx
  __asm ret
}




// Reference entry 10a4d230; body size 92 bytes.
#line 1 "ENTRY_10a4d230"

__declspec(naked) void FUN_10a4d230(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmp edi, ebx
  __asm _emit 0x74 __asm _emit 0x47
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm mov eax, dword ptr [edi]
  __asm cmp eax, dword ptr [esi]
  __asm _emit 0x74 __asm _emit 0x2c
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x14 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add edi, 8
  __asm add esi, 8
  __asm cmp edi, ebx
  __asm _emit 0x75 __asm _emit 0xc4
  __asm mov eax, esi
  __asm pop esi
  __asm pop edi
  __asm pop ebx
  __asm ret
  __asm mov eax, dword ptr [esp + 0x14]
  __asm pop edi
  __asm pop ebx
  __asm ret
}




// Reference entry 10a4d2b0; body size 3 bytes.
#line 1 "ENTRY_10a4d2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d2b0(void)

{
  return;
}


// Reference entry 10a4d2c0; body size 3 bytes.
#line 1 "ENTRY_10a4d2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d2c0(void)

{
  return;
}


// Reference entry 10a4d2d0; body size 5 bytes.
#line 1 "ENTRY_10a4d2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d2d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4d2e0; body size 38 bytes.
#line 1 "ENTRY_10a4d2e0"

__declspec(naked) void FUN_10a4d2e0(void)

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




// Reference entry 10a4d310; body size 24 bytes.
#line 1 "ENTRY_10a4d310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a4d310(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10a4d3b0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a4d330; body size 24 bytes.
#line 1 "ENTRY_10a4d330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a4d330(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10a4d450(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a4d350; body size 5 bytes.
#line 1 "ENTRY_10a4d350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4d360; body size 5 bytes.
#line 1 "ENTRY_10a4d360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4d370; body size 5 bytes.
#line 1 "ENTRY_10a4d370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4d380; body size 36 bytes.
#line 1 "ENTRY_10a4d380"

__declspec(naked) void FUN_10a4d380(void)

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




// Reference entry 10a4d4f0; body size 36 bytes.
#line 1 "ENTRY_10a4d4f0"

__declspec(naked) void FUN_10a4d4f0(void)

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




// Reference entry 10a4d660; body size 5 bytes.
#line 1 "ENTRY_10a4d660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4d670; body size 5 bytes.
#line 1 "ENTRY_10a4d670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4d680; body size 5 bytes.
#line 1 "ENTRY_10a4d680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4d690; body size 5 bytes.
#line 1 "ENTRY_10a4d690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4d690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4d6a0; body size 203 bytes.
#line 1 "ENTRY_10a4d6a0"

__declspec(naked) void FUN_10a4d6a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push ebp
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm sub ebx, eax
  __asm mov edx, ebx
  __asm sar edx, 2
  __asm mov ecx, dword ptr [edi + 8]
  __asm mov esi, dword ptr [edi]
  __asm sub ecx, esi
  __asm sar ecx, 2
  __asm cmp edx, ecx
  __asm jbe LAB_10a4d748
  __asm cmp edx, 0x3fffffff
  __asm ja LAB_10a4d766
  __asm mov ebp, ecx
  __asm mov eax, 0x3fffffff
  __asm _emit 0xd1 __asm _emit 0xed
  __asm sub eax, ebp
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov ebp, 0x3fffffff
  __asm _emit 0xeb __asm _emit 0x07
  __asm add ebp, ecx
  __asm cmp ebp, edx
  __asm cmovb ebp, edx
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x3b
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub esi, edx
  __asm lea eax, [esi - 4]
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x51
  __asm mov esi, edx
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push ebp
  __asm mov ecx, edi
  __asm call LAB_10046515
  __asm mov esi, eax
  __asm mov eax, dword ptr [esp + 0x14]
  __asm mov dword ptr [edi], esi
  __asm mov dword ptr [edi + 4], esi
  __asm lea ecx, [esi + ebp*4]
  __asm mov dword ptr [edi + 8], ecx
  __asm push ebx
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [ebx + esi]
  __asm mov dword ptr [edi + 4], eax
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_10032cd1
}




// Reference entry 10a4d7a0; body size 13 bytes.
#line 1 "ENTRY_10a4d7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d7a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10a4d7b0; body size 28 bytes.
#line 1 "ENTRY_10a4d7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d7b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10a4d7e0; body size 28 bytes.
#line 1 "ENTRY_10a4d7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d7e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10a4d810; body size 28 bytes.
#line 1 "ENTRY_10a4d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d810(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10a4d840; body size 28 bytes.
#line 1 "ENTRY_10a4d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d840(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10a4d870; body size 28 bytes.
#line 1 "ENTRY_10a4d870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d870(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10a4d8a0; body size 28 bytes.
#line 1 "ENTRY_10a4d8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a4d8a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10a4d9b0; body size 12 bytes.
#line 1 "ENTRY_10a4d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10a4d9b0(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 2);
}


// Reference entry 10a4d9c0; body size 36 bytes.
#line 1 "ENTRY_10a4d9c0"

__declspec(naked) void FUN_10a4d9c0(void)

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
  __asm call LAB_1000fa51
  __asm ret 4
}




// Reference entry 10a4da90; body size 5 bytes.
#line 1 "ENTRY_10a4da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4da90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4daa0; body size 5 bytes.
#line 1 "ENTRY_10a4daa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4daa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4dab0; body size 5 bytes.
#line 1 "ENTRY_10a4dab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4dac0; body size 5 bytes.
#line 1 "ENTRY_10a4dac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4dad0; body size 5 bytes.
#line 1 "ENTRY_10a4dad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4dae0; body size 5 bytes.
#line 1 "ENTRY_10a4dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4daf0; body size 5 bytes.
#line 1 "ENTRY_10a4daf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4daf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4db00; body size 5 bytes.
#line 1 "ENTRY_10a4db00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4db10; body size 5 bytes.
#line 1 "ENTRY_10a4db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4db20; body size 5 bytes.
#line 1 "ENTRY_10a4db20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4db30; body size 6 bytes.
#line 1 "ENTRY_10a4db30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db30(void)

{
  return (undefined4)(DAT_121a44c8);
}


// Reference entry 10a4db40; body size 6 bytes.
#line 1 "ENTRY_10a4db40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db40(void)

{
  return (undefined4)(DAT_121a44c0);
}


// Reference entry 10a4db50; body size 6 bytes.
#line 1 "ENTRY_10a4db50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db50(void)

{
  return (undefined4)(DAT_121a44dc);
}


// Reference entry 10a4db60; body size 6 bytes.
#line 1 "ENTRY_10a4db60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db60(void)

{
  return (undefined4)(DAT_121a44d8);
}


// Reference entry 10a4db70; body size 6 bytes.
#line 1 "ENTRY_10a4db70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db70(void)

{
  return (undefined4)(DAT_121a44d4);
}


// Reference entry 10a4db80; body size 6 bytes.
#line 1 "ENTRY_10a4db80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db80(void)

{
  return (undefined4)(DAT_121a44e4);
}


// Reference entry 10a4db90; body size 6 bytes.
#line 1 "ENTRY_10a4db90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4db90(void)

{
  return (undefined4)(DAT_121a44e8);
}


// Reference entry 10a4dba0; body size 6 bytes.
#line 1 "ENTRY_10a4dba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dba0(void)

{
  return (undefined4)(DAT_121a44b8);
}


// Reference entry 10a4dbb0; body size 6 bytes.
#line 1 "ENTRY_10a4dbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dbb0(void)

{
  return (undefined4)(DAT_121a44bc);
}


// Reference entry 10a4dbc0; body size 6 bytes.
#line 1 "ENTRY_10a4dbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dbc0(void)

{
  return (undefined4)(DAT_121a44c4);
}


// Reference entry 10a4dbd0; body size 6 bytes.
#line 1 "ENTRY_10a4dbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dbd0(void)

{
  return (undefined4)(DAT_121a44cc);
}


// Reference entry 10a4dbe0; body size 6 bytes.
#line 1 "ENTRY_10a4dbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dbe0(void)

{
  return (undefined4)(DAT_121a44d0);
}


// Reference entry 10a4dbf0; body size 6 bytes.
#line 1 "ENTRY_10a4dbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dbf0(void)

{
  return (undefined4)(DAT_121a44e0);
}


// Reference entry 10a4dc10; body size 5 bytes.
#line 1 "ENTRY_10a4dc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dc10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4dc20; body size 5 bytes.
#line 1 "ENTRY_10a4dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dc20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4dc30; body size 5 bytes.
#line 1 "ENTRY_10a4dc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a4dc30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4dc40; body size 57 bytes.
#line 1 "ENTRY_10a4dc40"

__declspec(naked) void FUN_10a4dc40(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f5e70
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f5ecc
  __asm mov dword ptr [esi + 0x8c], LAB_118f5ed8
  __asm mov dword ptr [esi + 0xa8], LAB_118f5ee4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a4e8c0; body size 16 bytes.
#line 1 "ENTRY_10a4e8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4e8c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4e8e0; body size 32 bytes.
#line 1 "ENTRY_10a4e8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a4e8e0(undefined4 *param_2)
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


// Reference entry 10a4e910; body size 16 bytes.
#line 1 "ENTRY_10a4e910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4e910(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4e930; body size 32 bytes.
#line 1 "ENTRY_10a4e930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a4e930(undefined4 *param_2)
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


// Reference entry 10a4e960; body size 16 bytes.
#line 1 "ENTRY_10a4e960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4e960(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4ecb0; body size 21 bytes.
#line 1 "ENTRY_10a4ecb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a4ecb0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4ecd0; body size 21 bytes.
#line 1 "ENTRY_10a4ecd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a4ecd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4ecf0; body size 11 bytes.
#line 1 "ENTRY_10a4ecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a4ecf0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4ed00; body size 11 bytes.
#line 1 "ENTRY_10a4ed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a4ed00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4ed10; body size 11 bytes.
#line 1 "ENTRY_10a4ed10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a4ed10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4ed20; body size 11 bytes.
#line 1 "ENTRY_10a4ed20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a4ed20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4ed30; body size 23 bytes.
#line 1 "ENTRY_10a4ed30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4ed30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4ed50; body size 23 bytes.
#line 1 "ENTRY_10a4ed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4ed50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4ed70; body size 23 bytes.
#line 1 "ENTRY_10a4ed70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4ed70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4ed90; body size 3 bytes.
#line 1 "ENTRY_10a4ed90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a4ed90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4eda0; body size 3 bytes.
#line 1 "ENTRY_10a4eda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a4eda0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4edb0; body size 3 bytes.
#line 1 "ENTRY_10a4edb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a4edb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a4ee40; body size 23 bytes.
#line 1 "ENTRY_10a4ee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4ee40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4ef20; body size 23 bytes.
#line 1 "ENTRY_10a4ef20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4ef20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4f000; body size 23 bytes.
#line 1 "ENTRY_10a4f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a4f000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a4f440; body size 57 bytes.
#line 1 "ENTRY_10a4f440"

__declspec(naked) void FUN_10a4f440(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f6994
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f69f0
  __asm mov dword ptr [esi + 0x8c], LAB_118f69fc
  __asm mov dword ptr [esi + 0xa8], LAB_118f6a08
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a4f590; body size 154 bytes.
#line 1 "ENTRY_10a4f590"

__declspec(naked) void FUN_10a4f590(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi + 0xe0], LAB_11883984
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_118f6744
  __asm mov dword ptr [esi + 0x10], LAB_118f67a0
  __asm mov dword ptr [esi + 0x8c], LAB_118f67ac
  __asm mov dword ptr [esi + 0xa8], LAB_118f67b8
  __asm mov dword ptr [esi + 0xe0], LAB_118f67dc
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0xf8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [esi + 0x100], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a4f750; body size 137 bytes.
#line 1 "ENTRY_10a4f750"

__declspec(naked) void FUN_10a4f750(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi + 0xe0], LAB_11883984
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_118f6474
  __asm mov dword ptr [esi + 0x10], LAB_118f64d0
  __asm mov dword ptr [esi + 0x8c], LAB_118f64dc
  __asm mov dword ptr [esi + 0xa8], LAB_118f64e8
  __asm mov dword ptr [esi + 0xe0], LAB_118f650c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0xf8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a4f900; body size 57 bytes.
#line 1 "ENTRY_10a4f900"

__declspec(naked) void FUN_10a4f900(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f6b5c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f6bb8
  __asm mov dword ptr [esi + 0x8c], LAB_118f6bc4
  __asm mov dword ptr [esi + 0xa8], LAB_118f6bd0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a4fa50; body size 57 bytes.
#line 1 "ENTRY_10a4fa50"

__declspec(naked) void FUN_10a4fa50(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f6bf4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f6c50
  __asm mov dword ptr [esi + 0x8c], LAB_118f6c5c
  __asm mov dword ptr [esi + 0xa8], LAB_118f6c68
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a4fba0; body size 57 bytes.
#line 1 "ENTRY_10a4fba0"

__declspec(naked) void FUN_10a4fba0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f5f08
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f5f64
  __asm mov dword ptr [esi + 0x8c], LAB_118f5f70
  __asm mov dword ptr [esi + 0xa8], LAB_118f5f7c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a4fcf0; body size 57 bytes.
#line 1 "ENTRY_10a4fcf0"

__declspec(naked) void FUN_10a4fcf0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f6c8c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f6ce8
  __asm mov dword ptr [esi + 0x8c], LAB_118f6cf4
  __asm mov dword ptr [esi + 0xa8], LAB_118f6d00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a4fe40; body size 57 bytes.
#line 1 "ENTRY_10a4fe40"

__declspec(naked) void FUN_10a4fe40(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f60d0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f612c
  __asm mov dword ptr [esi + 0x8c], LAB_118f6138
  __asm mov dword ptr [esi + 0xa8], LAB_118f6144
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a4ff90; body size 114 bytes.
#line 1 "ENTRY_10a4ff90"

__declspec(naked) void FUN_10a4ff90(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f6298
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f62f4
  __asm mov dword ptr [esi + 0x8c], LAB_118f6300
  __asm mov dword ptr [esi + 0xa8], LAB_118f630c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [esi + 0xe8], 0
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a50120; body size 87 bytes.
#line 1 "ENTRY_10a50120"

__declspec(naked) void FUN_10a50120(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f63dc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f6438
  __asm mov dword ptr [esi + 0x8c], LAB_118f6444
  __asm mov dword ptr [esi + 0xa8], LAB_118f6450
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a511a0; body size 38 bytes.
#line 1 "ENTRY_10a511a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a511a0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a511d0; body size 11 bytes.
#line 1 "ENTRY_10a511d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a511d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a511e0; body size 11 bytes.
#line 1 "ENTRY_10a511e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a511e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a511f0; body size 11 bytes.
#line 1 "ENTRY_10a511f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a511f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a51200; body size 11 bytes.
#line 1 "ENTRY_10a51200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51200(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a51210; body size 11 bytes.
#line 1 "ENTRY_10a51210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51210(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a51220; body size 11 bytes.
#line 1 "ENTRY_10a51220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51220(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a51230; body size 11 bytes.
#line 1 "ENTRY_10a51230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a51240; body size 11 bytes.
#line 1 "ENTRY_10a51240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a51250; body size 11 bytes.
#line 1 "ENTRY_10a51250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a51260; body size 11 bytes.
#line 1 "ENTRY_10a51260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a51270; body size 11 bytes.
#line 1 "ENTRY_10a51270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a51280; body size 11 bytes.
#line 1 "ENTRY_10a51280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a51290; body size 11 bytes.
#line 1 "ENTRY_10a51290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a51380; body size 38 bytes.
#line 1 "ENTRY_10a51380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51380(undefined4 *param_1)

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

void __fastcall FUN_10a513b0(undefined4 *param_1)

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

void __fastcall FUN_10a513e0(undefined4 *param_1)

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



// Reference entry 10a51410; transcribed reference bytes.
#line 1 "ENTRY_10a51410"

__declspec(naked) void FUN_10a51410(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm jne LAB_1005fd26
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}




// Reference entry 10a51510; body size 38 bytes.
#line 1 "ENTRY_10a51510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51510(undefined4 *param_1)

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



// Reference entry 10a51540; transcribed reference bytes.
#line 1 "ENTRY_10a51540"

__declspec(naked) void FUN_10a51540(void)

{
  __asm mov dword ptr [LAB_121a44c8], 0
  __asm mov dword ptr [ecx], LAB_118f5a28
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a51560; body size 38 bytes.
#line 1 "ENTRY_10a51560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51560(undefined4 *param_1)

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



// Reference entry 10a51590; transcribed reference bytes.
#line 1 "ENTRY_10a51590"

__declspec(naked) void FUN_10a51590(void)

{
  __asm mov dword ptr [LAB_121a44c0], 0
  __asm mov dword ptr [ecx], LAB_118f5970
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a515b0; body size 38 bytes.
#line 1 "ENTRY_10a515b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a515b0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a515e0; body size 21 bytes.
#line 1 "ENTRY_10a515e0"

__declspec(naked) void FUN_10a515e0(void)

{
  __asm mov dword ptr [LAB_121a44dc], 0
  __asm mov dword ptr [ecx], LAB_118f5bf8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a516d0; body size 21 bytes.
#line 1 "ENTRY_10a516d0"

__declspec(naked) void FUN_10a516d0(void)

{
  __asm mov dword ptr [LAB_121a44d8], 0
  __asm mov dword ptr [ecx], LAB_118f5b98
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a517c0; body size 21 bytes.
#line 1 "ENTRY_10a517c0"

__declspec(naked) void FUN_10a517c0(void)

{
  __asm mov dword ptr [LAB_121a44d4], 0
  __asm mov dword ptr [ecx], LAB_118f5b3c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a517e0; body size 38 bytes.
#line 1 "ENTRY_10a517e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a517e0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a51810; body size 21 bytes.
#line 1 "ENTRY_10a51810"

__declspec(naked) void FUN_10a51810(void)

{
  __asm mov dword ptr [LAB_121a44e4], 0
  __asm mov dword ptr [ecx], LAB_118f5cc0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a51830; body size 38 bytes.
#line 1 "ENTRY_10a51830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51830(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a51860; body size 21 bytes.
#line 1 "ENTRY_10a51860"

__declspec(naked) void FUN_10a51860(void)

{
  __asm mov dword ptr [LAB_121a44e8], 0
  __asm mov dword ptr [ecx], LAB_118f5d14
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a51880; body size 38 bytes.
#line 1 "ENTRY_10a51880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51880(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a518b0; body size 21 bytes.
#line 1 "ENTRY_10a518b0"

__declspec(naked) void FUN_10a518b0(void)

{
  __asm mov dword ptr [LAB_121a44b8], 0
  __asm mov dword ptr [ecx], LAB_118f58c8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a518d0; body size 38 bytes.
#line 1 "ENTRY_10a518d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a518d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a51900; body size 21 bytes.
#line 1 "ENTRY_10a51900"

__declspec(naked) void FUN_10a51900(void)

{
  __asm mov dword ptr [LAB_121a44bc], 0
  __asm mov dword ptr [ecx], LAB_118f5918
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a51920; body size 38 bytes.
#line 1 "ENTRY_10a51920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51920(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a51950; body size 21 bytes.
#line 1 "ENTRY_10a51950"

__declspec(naked) void FUN_10a51950(void)

{
  __asm mov dword ptr [LAB_121a44c4], 0
  __asm mov dword ptr [ecx], LAB_118f59cc
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a51ab0; body size 21 bytes.
#line 1 "ENTRY_10a51ab0"

__declspec(naked) void FUN_10a51ab0(void)

{
  __asm mov dword ptr [LAB_121a44cc], 0
  __asm mov dword ptr [ecx], LAB_118f5a84
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a51b80; body size 21 bytes.
#line 1 "ENTRY_10a51b80"

__declspec(naked) void FUN_10a51b80(void)

{
  __asm mov dword ptr [LAB_121a44d0], 0
  __asm mov dword ptr [ecx], LAB_118f5ae0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a51ba0; body size 38 bytes.
#line 1 "ENTRY_10a51ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a51ba0(undefined4 *param_1)

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



// Reference entry 10a51bd0; transcribed reference bytes.
#line 1 "ENTRY_10a51bd0"

__declspec(naked) void FUN_10a51bd0(void)

{
  __asm mov dword ptr [LAB_121a44e0], 0
  __asm mov dword ptr [ecx], LAB_118f5c60
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a51ed0; body size 65 bytes.
#line 1 "ENTRY_10a51ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10a51ed0(int *param_2)
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


// Reference entry 10a51fa0; body size 65 bytes.
#line 1 "ENTRY_10a51fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10a51fa0(int *param_2)
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


// Reference entry 10a52070; body size 132 bytes.
#line 1 "ENTRY_10a52070"

__declspec(naked) void FUN_10a52070(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x6a
  __asm mov eax, dword ptr [esi]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x40
  __asm mov ecx, dword ptr [esi + 8]
  __asm sub ecx, eax
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x4b
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [edi + 8]
  __asm mov dword ptr [esi + 8], eax
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}




// Reference entry 10a52120; body size 218 bytes.
#line 1 "ENTRY_10a52120"

__declspec(naked) void FUN_10a52120(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm cmp esi, eax
  __asm je LAB_10a521e6
  __asm mov ebx, dword ptr [eax + 4]
  __asm mov eax, dword ptr [eax]
  __asm sub ebx, eax
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov edx, ebx
  __asm mov edi, dword ptr [esi]
  __asm sub ecx, edi
  __asm sar edx, 2
  __asm sar ecx, 2
  __asm mov dword ptr [esp + 0x14], eax
  __asm cmp edx, ecx
  __asm jbe LAB_10a521d5
  __asm cmp edx, 0x3fffffff
  __asm ja LAB_10a521f5
  __asm mov ebp, ecx
  __asm mov eax, 0x3fffffff
  __asm _emit 0xd1 __asm _emit 0xed
  __asm sub eax, ebp
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov ebp, 0x3fffffff
  __asm _emit 0xeb __asm _emit 0x07
  __asm add ebp, ecx
  __asm cmp ebp, edx
  __asm cmovb ebp, edx
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x3b
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [edi - 4]
  __asm add ecx, 0x23
  __asm sub edi, edx
  __asm lea eax, [edi - 4]
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x53
  __asm mov edi, edx
  __asm push ecx
  __asm push edi
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push ebp
  __asm mov ecx, esi
  __asm call LAB_10046515
  __asm mov edi, eax
  __asm mov eax, dword ptr [esp + 0x14]
  __asm mov dword ptr [esi], edi
  __asm mov dword ptr [esi + 4], edi
  __asm lea ecx, [edi + ebp*4]
  __asm mov dword ptr [esi + 8], ecx
  __asm push ebx
  __asm push eax
  __asm push edi
  __asm call LAB_1148cdf3
  __asm lea eax, [ebx + edi]
  __asm add esp, 0xc
  __asm mov dword ptr [esi + 4], eax
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_10032cd1
}




// Reference entry 10a52240; body size 14 bytes.
#line 1 "ENTRY_10a52240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10a52240(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10a52260; body size 14 bytes.
#line 1 "ENTRY_10a52260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10a52260(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10a52280; body size 14 bytes.
#line 1 "ENTRY_10a52280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10a52280(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10a522a0; body size 14 bytes.
#line 1 "ENTRY_10a522a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10a522a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10a522c0; body size 12 bytes.
#line 1 "ENTRY_10a522c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10a522c0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10a522d0; body size 12 bytes.
#line 1 "ENTRY_10a522d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10a522d0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10a522e0; body size 3 bytes.
#line 1 "ENTRY_10a522e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a522e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a522f0; body size 3 bytes.
#line 1 "ENTRY_10a522f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a522f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a52300; body size 3 bytes.
#line 1 "ENTRY_10a52300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a52300(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a52310; body size 3 bytes.
#line 1 "ENTRY_10a52310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a52310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a52320; body size 3 bytes.
#line 1 "ENTRY_10a52320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a52320(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a52330; body size 3 bytes.
#line 1 "ENTRY_10a52330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a52330(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a52340; body size 3 bytes.
#line 1 "ENTRY_10a52340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a52340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a52350; body size 6 bytes.
#line 1 "ENTRY_10a52350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10a52350(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10a52360; body size 6 bytes.
#line 1 "ENTRY_10a52360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10a52360(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10a52370; body size 16 bytes.
#line 1 "ENTRY_10a52370"

__declspec(naked) void FUN_10a52370(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [eax], edx
  __asm add edx, 8
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}




// Reference entry 10a52390; body size 6 bytes.
#line 1 "ENTRY_10a52390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10a52390(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10a523a0; body size 16 bytes.
#line 1 "ENTRY_10a523a0"

__declspec(naked) void FUN_10a523a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [eax], edx
  __asm add edx, 8
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}




// Reference entry 10a523c0; body size 6 bytes.
#line 1 "ENTRY_10a523c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10a523c0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10a53960; body size 30 bytes.
#line 1 "ENTRY_10a53960"

__declspec(naked) void FUN_10a53960(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_10046515
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + esi*4]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a53990; body size 30 bytes.
#line 1 "ENTRY_10a53990"

__declspec(naked) void FUN_10a53990(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_1004329d
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + esi*8]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a539c0; body size 30 bytes.
#line 1 "ENTRY_10a539c0"

__declspec(naked) void FUN_10a539c0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_1008472f
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + esi*8]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a539f0; body size 49 bytes.
#line 1 "ENTRY_10a539f0"

__declspec(naked) void FUN_10a539f0(void)

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




// Reference entry 10a53a30; body size 49 bytes.
#line 1 "ENTRY_10a53a30"

__declspec(naked) void FUN_10a53a30(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x1fffffff
  __asm sar edx, 3
  __asm push esi
  __asm mov esi, edx
  __asm _emit 0xd1 __asm _emit 0xee
  __asm sub ecx, esi
  __asm cmp edx, ecx
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x1fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10a53a70; body size 49 bytes.
#line 1 "ENTRY_10a53a70"

__declspec(naked) void FUN_10a53a70(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x1fffffff
  __asm sar edx, 3
  __asm push esi
  __asm mov esi, edx
  __asm _emit 0xd1 __asm _emit 0xee
  __asm sub ecx, esi
  __asm cmp edx, ecx
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x1fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10a53c40; body size 159 bytes.
#line 1 "ENTRY_10a53c40"

__declspec(naked) void FUN_10a53c40(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp ebx, 0x3fffffff
  __asm ja LAB_10a53cda
  __asm mov edx, dword ptr [esi + 8]
  __asm mov eax, 0x3fffffff
  __asm mov ecx, dword ptr [esi]
  __asm sub edx, ecx
  __asm sar edx, 2
  __asm push edi
  __asm mov edi, edx
  __asm _emit 0xd1 __asm _emit 0xef
  __asm sub eax, edi
  __asm cmp edx, eax
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov edi, 0x3fffffff
  __asm _emit 0xeb __asm _emit 0x07
  __asm add edi, edx
  __asm cmp edi, ebx
  __asm cmovb edi, ebx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x3b
  __asm shl edx, 2
  __asm cmp edx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov ebx, dword ptr [ecx - 4]
  __asm add edx, 0x23
  __asm sub ecx, ebx
  __asm lea eax, [ecx - 4]
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x39
  __asm mov ecx, ebx
  __asm push edx
  __asm push ecx
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push edi
  __asm mov ecx, esi
  __asm call LAB_10046515
  __asm mov dword ptr [esi], eax
  __asm mov dword ptr [esi + 4], eax
  __asm lea eax, [eax + edi*4]
  __asm pop edi
  __asm mov dword ptr [esi + 8], eax
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_10032cd1
}




// Reference entry 10a53d10; body size 3 bytes.
#line 1 "ENTRY_10a53d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10a53d10(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10a53d20; body size 3 bytes.
#line 1 "ENTRY_10a53d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10a53d20(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10a53d30; body size 208 bytes.
#line 1 "ENTRY_10a53d30"

__declspec(naked) void FUN_10a53d30(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm mov ebp, dword ptr [eax + 4]
  __asm mov eax, dword ptr [eax]
  __asm sub ebp, eax
  __asm push edi
  __asm mov edi, ecx
  __asm mov dword ptr [esp + 0x14], eax
  __asm mov edx, ebp
  __asm sar edx, 2
  __asm mov ecx, dword ptr [edi + 8]
  __asm mov esi, dword ptr [edi]
  __asm sub ecx, esi
  __asm sar ecx, 2
  __asm cmp edx, ecx
  __asm jbe LAB_10a53ddd
  __asm cmp edx, 0x3fffffff
  __asm ja LAB_10a53dfb
  __asm mov ebx, ecx
  __asm mov eax, 0x3fffffff
  __asm _emit 0xd1 __asm _emit 0xeb
  __asm sub eax, ebx
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov ebx, 0x3fffffff
  __asm _emit 0xeb __asm _emit 0x07
  __asm add ebx, ecx
  __asm cmp ebx, edx
  __asm cmovb ebx, edx
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x3b
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [esi - 4]
  __asm add ecx, 0x23
  __asm sub esi, edx
  __asm lea eax, [esi - 4]
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x51
  __asm mov esi, edx
  __asm push ecx
  __asm push esi
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10046515
  __asm mov esi, eax
  __asm mov eax, dword ptr [esp + 0x14]
  __asm mov dword ptr [edi], esi
  __asm mov dword ptr [edi + 4], esi
  __asm lea ecx, [esi + ebx*4]
  __asm mov dword ptr [edi + 8], ecx
  __asm push ebp
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [esi + ebp]
  __asm mov dword ptr [edi + 4], eax
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_10032cd1
}




// Reference entry 10a53e40; body size 3 bytes.
#line 1 "ENTRY_10a53e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10a53e40(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10a53e90; body size 3 bytes.
#line 1 "ENTRY_10a53e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53ea0; body size 3 bytes.
#line 1 "ENTRY_10a53ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53eb0; body size 3 bytes.
#line 1 "ENTRY_10a53eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53ec0; body size 3 bytes.
#line 1 "ENTRY_10a53ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53ed0; body size 3 bytes.
#line 1 "ENTRY_10a53ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53ed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53ee0; body size 3 bytes.
#line 1 "ENTRY_10a53ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53ef0; body size 3 bytes.
#line 1 "ENTRY_10a53ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53f00; body size 3 bytes.
#line 1 "ENTRY_10a53f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53f00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53f10; body size 3 bytes.
#line 1 "ENTRY_10a53f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53f10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53f20; body size 3 bytes.
#line 1 "ENTRY_10a53f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53f30; body size 3 bytes.
#line 1 "ENTRY_10a53f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53f30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53f40; body size 3 bytes.
#line 1 "ENTRY_10a53f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a53f40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a53ff0; body size 3 bytes.
#line 1 "ENTRY_10a53ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10a53ff0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10a54000; body size 3 bytes.
#line 1 "ENTRY_10a54000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10a54000(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10a54010; body size 3 bytes.
#line 1 "ENTRY_10a54010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10a54010(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10a54020; body size 6 bytes.
#line 1 "ENTRY_10a54020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a54020(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10a54030; body size 6 bytes.
#line 1 "ENTRY_10a54030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a54030(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10a54040; body size 43 bytes.
#line 1 "ENTRY_10a54040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a54040(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10a541f0; body size 38 bytes.
#line 1 "ENTRY_10a541f0"

__declspec(naked) void FUN_10a541f0(void)

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




// Reference entry 10a54360; body size 27 bytes.
#line 1 "ENTRY_10a54360"

__declspec(naked) void FUN_10a54360(void)

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




// Reference entry 10a54390; body size 24 bytes.
#line 1 "ENTRY_10a54390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a54390(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10a4d3b0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a543b0; body size 24 bytes.
#line 1 "ENTRY_10a543b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a543b0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10a4d450(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a543d0; body size 27 bytes.
#line 1 "ENTRY_10a543d0"

__declspec(naked) void FUN_10a543d0(void)

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




// Reference entry 10a54400; body size 24 bytes.
#line 1 "ENTRY_10a54400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a54400(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10a4d3b0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a54420; body size 24 bytes.
#line 1 "ENTRY_10a54420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a54420(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10a4d450(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10a54440; body size 3 bytes.
#line 1 "ENTRY_10a54440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a54440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a54450; body size 3 bytes.
#line 1 "ENTRY_10a54450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a54450(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a54460; body size 4 bytes.
#line 1 "ENTRY_10a54460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a54460(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10a54470; body size 4 bytes.
#line 1 "ENTRY_10a54470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a54470(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10a548a0; body size 11 bytes.
#line 1 "ENTRY_10a548a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a548a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10a548b0; body size 11 bytes.
#line 1 "ENTRY_10a548b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a548b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10a54980; body size 9 bytes.
#line 1 "ENTRY_10a54980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a54980(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10a54990; body size 9 bytes.
#line 1 "ENTRY_10a54990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a54990(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10a549a0; body size 9 bytes.
#line 1 "ENTRY_10a549a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a549a0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10a55fd0; body size 61 bytes.
#line 1 "ENTRY_10a55fd0"

__declspec(naked) void FUN_10a55fd0(void)

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




// Reference entry 10a560e0; body size 12 bytes.
#line 1 "ENTRY_10a560e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a560e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10a560f0; body size 12 bytes.
#line 1 "ENTRY_10a560f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a560f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10a5c890; body size 23 bytes.
#line 1 "ENTRY_10a5c890"

__declspec(naked) void FUN_10a5c890(void)

{
  __asm lea eax, [ecx + 0xf4]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_1006948e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10a5c8b0; body size 28 bytes.
#line 1 "ENTRY_10a5c8b0"

__declspec(naked) void FUN_10a5c8b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x118]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a5d770; body size 23 bytes.
#line 1 "ENTRY_10a5d770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10a5d770(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x108));
  return (SCStr *)(param_2);
}


// Reference entry 10a615d0; body size 6 bytes.
#line 1 "ENTRY_10a615d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a615d0(void)

{
  return (undefined4)(DAT_121a44c8);
}


// Reference entry 10a615e0; body size 6 bytes.
#line 1 "ENTRY_10a615e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a615e0(void)

{
  return (undefined4)(DAT_121a44c0);
}


// Reference entry 10a615f0; body size 6 bytes.
#line 1 "ENTRY_10a615f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a615f0(void)

{
  return (undefined4)(DAT_121a44dc);
}


// Reference entry 10a61600; body size 6 bytes.
#line 1 "ENTRY_10a61600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61600(void)

{
  return (undefined4)(DAT_121a44d8);
}


// Reference entry 10a61610; body size 6 bytes.
#line 1 "ENTRY_10a61610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61610(void)

{
  return (undefined4)(DAT_121a44d4);
}


// Reference entry 10a61620; body size 6 bytes.
#line 1 "ENTRY_10a61620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61620(void)

{
  return (undefined4)(DAT_121a44e4);
}


// Reference entry 10a61630; body size 6 bytes.
#line 1 "ENTRY_10a61630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61630(void)

{
  return (undefined4)(DAT_121a44e8);
}


// Reference entry 10a61640; body size 6 bytes.
#line 1 "ENTRY_10a61640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61640(void)

{
  return (undefined4)(DAT_121a44b8);
}


// Reference entry 10a61650; body size 6 bytes.
#line 1 "ENTRY_10a61650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61650(void)

{
  return (undefined4)(DAT_121a44bc);
}


// Reference entry 10a61660; body size 6 bytes.
#line 1 "ENTRY_10a61660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61660(void)

{
  return (undefined4)(DAT_121a44c4);
}


// Reference entry 10a61670; body size 6 bytes.
#line 1 "ENTRY_10a61670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61670(void)

{
  return (undefined4)(DAT_121a44cc);
}


// Reference entry 10a61680; body size 6 bytes.
#line 1 "ENTRY_10a61680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61680(void)

{
  return (undefined4)(DAT_121a44d0);
}


// Reference entry 10a61690; body size 6 bytes.
#line 1 "ENTRY_10a61690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61690(void)

{
  return (undefined4)(DAT_121a44e0);
}


// Reference entry 10a616a0; body size 6 bytes.
#line 1 "ENTRY_10a616a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a616a0(void)

{
  return (undefined4)(DAT_121a44b4);
}


// Reference entry 10a616b0; body size 5 bytes.
#line 1 "ENTRY_10a616b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a616b0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10a616c0; body size 5 bytes.
#line 1 "ENTRY_10a616c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a616c0(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10a616d0; body size 5 bytes.
#line 1 "ENTRY_10a616d0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a616d0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10a616e0; body size 5 bytes.
#line 1 "ENTRY_10a616e0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a616e0(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10a616f0; body size 5 bytes.
#line 1 "ENTRY_10a616f0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a616f0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10a61700; body size 5 bytes.
#line 1 "ENTRY_10a61700"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a61700(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10a61710; body size 7 bytes.
#line 1 "ENTRY_10a61710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a61710(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x111));
}


// Reference entry 10a618c0; body size 5 bytes.
#line 1 "ENTRY_10a618c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a618c0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a618d0; body size 5 bytes.
#line 1 "ENTRY_10a618d0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a618d0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a618e0; body size 5 bytes.
#line 1 "ENTRY_10a618e0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a618e0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a618f0; body size 5 bytes.
#line 1 "ENTRY_10a618f0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a618f0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a61900; body size 5 bytes.
#line 1 "ENTRY_10a61900"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a61900(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a61910; body size 5 bytes.
#line 1 "ENTRY_10a61910"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a61910(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a61920; body size 25 bytes.
#line 1 "ENTRY_10a61920"

__declspec(naked) void FUN_10a61920(void)

{
  __asm mov eax, dword ptr [ecx + 0xf8]
  __asm sub eax, dword ptr [ecx + 0xf4]
  __asm sar eax, 2
  __asm cmp dword ptr [ecx + 0x114], eax
  __asm setl al
  __asm ret
}




// Reference entry 10a61940; body size 18 bytes.
#line 1 "ENTRY_10a61940"

__declspec(naked) bool FUN_10a61940(void)

{
  __asm push dword ptr [LAB_121a44dc]
  __asm call LAB_1004d644
  __asm cmp eax, 2
  __asm setg al
  __asm ret
}




// Reference entry 10a61960; body size 18 bytes.
#line 1 "ENTRY_10a61960"

__declspec(naked) bool FUN_10a61960(void)

{
  __asm push dword ptr [LAB_121a44bc]
  __asm call LAB_1004d644
  __asm cmp eax, 2
  __asm setg al
  __asm ret
}




// Reference entry 10a61980; body size 7 bytes.
#line 1 "ENTRY_10a61980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a61980(int param_1)

{
  *(int*)(param_1 + 0x114) = (int)(*(int *)(param_1 + 0x114) + 1);
  return;
}


// Reference entry 10a61a70; body size 7 bytes.
#line 1 "ENTRY_10a61a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a61a70(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x110));
}


// Reference entry 10a61a80; body size 6 bytes.
#line 1 "ENTRY_10a61a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61a80(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10a61a90; body size 6 bytes.
#line 1 "ENTRY_10a61a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61a90(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10a61aa0; body size 6 bytes.
#line 1 "ENTRY_10a61aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61aa0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10a61ab0; body size 6 bytes.
#line 1 "ENTRY_10a61ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61ab0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10a61ac0; body size 6 bytes.
#line 1 "ENTRY_10a61ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61ac0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10a61ad0; body size 6 bytes.
#line 1 "ENTRY_10a61ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a61ad0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10a64290; body size 3 bytes.
#line 1 "ENTRY_10a64290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a64290(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a642a0; body size 36 bytes.
#line 1 "ENTRY_10a642a0"

__declspec(naked) void FUN_10a642a0(void)

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
  __asm call LAB_1000fa51
  __asm ret 4
}




// Reference entry 10a64370; body size 28 bytes.
#line 1 "ENTRY_10a64370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a64370(undefined4 *param_1)

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


// Reference entry 10a643a0; body size 28 bytes.
#line 1 "ENTRY_10a643a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a643a0(undefined4 *param_1)

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


// Reference entry 10a644f0; body size 5 bytes.
#line 1 "ENTRY_10a644f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a644f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a64500; body size 5 bytes.
#line 1 "ENTRY_10a64500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a64510; body size 5 bytes.
#line 1 "ENTRY_10a64510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a646d0; body size 39 bytes.
#line 1 "ENTRY_10a646d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a646d0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x100));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10a64860; body size 39 bytes.
#line 1 "ENTRY_10a64860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a64860(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x108));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10a64890; body size 13 bytes.
#line 1 "ENTRY_10a64890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a64890(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x111) = (undefined1)(param_2);
  return;
}


// Reference entry 10a648a0; body size 9 bytes.
#line 1 "ENTRY_10a648a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a648a0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10a648b0; body size 9 bytes.
#line 1 "ENTRY_10a648b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a648b0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10a648c0; body size 6 bytes.
#line 1 "ENTRY_10a648c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a648c0(void)

{
  return (undefined4)(DAT_121a4558);
}


// Reference entry 10a648d0; body size 6 bytes.
#line 1 "ENTRY_10a648d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a648d0(void)

{
  return (undefined4)(DAT_121a4560);
}


// Reference entry 10a648e0; body size 6 bytes.
#line 1 "ENTRY_10a648e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a648e0(void)

{
  return (undefined4)(DAT_121a455c);
}


// Reference entry 10a648f0; body size 6 bytes.
#line 1 "ENTRY_10a648f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a648f0(void)

{
  return (undefined4)(DAT_121a454c);
}


// Reference entry 10a64900; body size 6 bytes.
#line 1 "ENTRY_10a64900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64900(void)

{
  return (undefined4)(DAT_121a4554);
}


// Reference entry 10a64910; body size 6 bytes.
#line 1 "ENTRY_10a64910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64910(void)

{
  return (undefined4)(DAT_121a4550);
}


// Reference entry 10a64920; body size 6 bytes.
#line 1 "ENTRY_10a64920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64920(void)

{
  return (undefined4)(DAT_121a4564);
}


// Reference entry 10a64930; body size 6 bytes.
#line 1 "ENTRY_10a64930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64930(void)

{
  return (undefined4)(DAT_121a4568);
}


// Reference entry 10a64940; body size 6 bytes.
#line 1 "ENTRY_10a64940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64940(void)

{
  return (undefined4)(DAT_121a453c);
}


// Reference entry 10a64950; body size 6 bytes.
#line 1 "ENTRY_10a64950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64950(void)

{
  return (undefined4)(DAT_121a4540);
}


// Reference entry 10a64960; body size 6 bytes.
#line 1 "ENTRY_10a64960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64960(void)

{
  return (undefined4)(DAT_121a4548);
}


// Reference entry 10a64970; body size 6 bytes.
#line 1 "ENTRY_10a64970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a64970(void)

{
  return (undefined4)(DAT_121a4544);
}


// Reference entry 10a64990; body size 57 bytes.
#line 1 "ENTRY_10a64990"

__declspec(naked) void FUN_10a64990(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f7224
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7280
  __asm mov dword ptr [esi + 0x8c], LAB_118f728c
  __asm mov dword ptr [esi + 0xa8], LAB_118f7298
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a65520; body size 57 bytes.
#line 1 "ENTRY_10a65520"

__declspec(naked) void FUN_10a65520(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f7a34
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7a90
  __asm mov dword ptr [esi + 0x8c], LAB_118f7a9c
  __asm mov dword ptr [esi + 0xa8], LAB_118f7aa8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a65670; body size 57 bytes.
#line 1 "ENTRY_10a65670"

__declspec(naked) void FUN_10a65670(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f7c08
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7c64
  __asm mov dword ptr [esi + 0x8c], LAB_118f7c70
  __asm mov dword ptr [esi + 0xa8], LAB_118f7c7c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a657c0; body size 57 bytes.
#line 1 "ENTRY_10a657c0"

__declspec(naked) void FUN_10a657c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f7b08
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7b64
  __asm mov dword ptr [esi + 0x8c], LAB_118f7b70
  __asm mov dword ptr [esi + 0xa8], LAB_118f7b7c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a65910; body size 57 bytes.
#line 1 "ENTRY_10a65910"

__declspec(naked) void FUN_10a65910(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f772c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7788
  __asm mov dword ptr [esi + 0x8c], LAB_118f7794
  __asm mov dword ptr [esi + 0xa8], LAB_118f77a0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a65a60; body size 57 bytes.
#line 1 "ENTRY_10a65a60"

__declspec(naked) void FUN_10a65a60(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f793c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7998
  __asm mov dword ptr [esi + 0x8c], LAB_118f79a4
  __asm mov dword ptr [esi + 0xa8], LAB_118f79b0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a65bb0; body size 57 bytes.
#line 1 "ENTRY_10a65bb0"

__declspec(naked) void FUN_10a65bb0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f7814
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7870
  __asm mov dword ptr [esi + 0x8c], LAB_118f787c
  __asm mov dword ptr [esi + 0xa8], LAB_118f7888
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a65d00; body size 57 bytes.
#line 1 "ENTRY_10a65d00"

__declspec(naked) void FUN_10a65d00(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f7cf8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7d54
  __asm mov dword ptr [esi + 0x8c], LAB_118f7d60
  __asm mov dword ptr [esi + 0xa8], LAB_118f7d6c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a65e50; body size 57 bytes.
#line 1 "ENTRY_10a65e50"

__declspec(naked) void FUN_10a65e50(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f7dc0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7e1c
  __asm mov dword ptr [esi + 0x8c], LAB_118f7e28
  __asm mov dword ptr [esi + 0xa8], LAB_118f7e34
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a65fa0; body size 57 bytes.
#line 1 "ENTRY_10a65fa0"

__declspec(naked) void FUN_10a65fa0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f72bc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7318
  __asm mov dword ptr [esi + 0x8c], LAB_118f7324
  __asm mov dword ptr [esi + 0xa8], LAB_118f7330
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a660f0; body size 57 bytes.
#line 1 "ENTRY_10a660f0"

__declspec(naked) void FUN_10a660f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f73e8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7444
  __asm mov dword ptr [esi + 0x8c], LAB_118f7450
  __asm mov dword ptr [esi + 0xa8], LAB_118f745c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a66240; body size 57 bytes.
#line 1 "ENTRY_10a66240"

__declspec(naked) void FUN_10a66240(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f7650
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f76ac
  __asm mov dword ptr [esi + 0x8c], LAB_118f76b8
  __asm mov dword ptr [esi + 0xa8], LAB_118f76c4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a66390; body size 57 bytes.
#line 1 "ENTRY_10a66390"

__declspec(naked) void FUN_10a66390(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f7530
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f758c
  __asm mov dword ptr [esi + 0x8c], LAB_118f7598
  __asm mov dword ptr [esi + 0xa8], LAB_118f75a4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a664e0; body size 57 bytes.
#line 1 "ENTRY_10a664e0"

__declspec(naked) void FUN_10a664e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], LAB_118f6d24
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f6d78
  __asm mov dword ptr [esi + 0x8c], LAB_118f6d84
  __asm mov dword ptr [esi + 0xa8], LAB_118f6d90
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a67050; body size 38 bytes.
#line 1 "ENTRY_10a67050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67050(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a67080; body size 11 bytes.
#line 1 "ENTRY_10a67080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a67090; body size 11 bytes.
#line 1 "ENTRY_10a67090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a670a0; body size 11 bytes.
#line 1 "ENTRY_10a670a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a670a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a670b0; body size 11 bytes.
#line 1 "ENTRY_10a670b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a670b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a670c0; body size 11 bytes.
#line 1 "ENTRY_10a670c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a670c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a670d0; body size 11 bytes.
#line 1 "ENTRY_10a670d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a670d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a670e0; body size 11 bytes.
#line 1 "ENTRY_10a670e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a670e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a670f0; body size 11 bytes.
#line 1 "ENTRY_10a670f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a670f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a67100; body size 11 bytes.
#line 1 "ENTRY_10a67100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a67110; body size 11 bytes.
#line 1 "ENTRY_10a67110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67110(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a67120; body size 11 bytes.
#line 1 "ENTRY_10a67120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67120(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a67130; body size 11 bytes.
#line 1 "ENTRY_10a67130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a67140; body size 38 bytes.
#line 1 "ENTRY_10a67140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67140(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a67170; body size 21 bytes.
#line 1 "ENTRY_10a67170"

__declspec(naked) void FUN_10a67170(void)

{
  __asm mov dword ptr [LAB_121a4558], 0
  __asm mov dword ptr [ecx], LAB_118f703c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a67190; body size 38 bytes.
#line 1 "ENTRY_10a67190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67190(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a671c0; body size 21 bytes.
#line 1 "ENTRY_10a671c0"

__declspec(naked) void FUN_10a671c0(void)

{
  __asm mov dword ptr [LAB_121a4560], 0
  __asm mov dword ptr [ecx], LAB_118f70f4
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a671e0; body size 38 bytes.
#line 1 "ENTRY_10a671e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a671e0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a67210; body size 21 bytes.
#line 1 "ENTRY_10a67210"

__declspec(naked) void FUN_10a67210(void)

{
  __asm mov dword ptr [LAB_121a455c], 0
  __asm mov dword ptr [ecx], LAB_118f7090
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a67230; body size 38 bytes.
#line 1 "ENTRY_10a67230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67230(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a67260; body size 21 bytes.
#line 1 "ENTRY_10a67260"

__declspec(naked) void FUN_10a67260(void)

{
  __asm mov dword ptr [LAB_121a454c], 0
  __asm mov dword ptr [ecx], LAB_118f6f2c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a67280; body size 38 bytes.
#line 1 "ENTRY_10a67280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67280(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a672b0; body size 21 bytes.
#line 1 "ENTRY_10a672b0"

__declspec(naked) void FUN_10a672b0(void)

{
  __asm mov dword ptr [LAB_121a4554], 0
  __asm mov dword ptr [ecx], LAB_118f6fe0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a672d0; body size 38 bytes.
#line 1 "ENTRY_10a672d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a672d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a67300; body size 21 bytes.
#line 1 "ENTRY_10a67300"

__declspec(naked) void FUN_10a67300(void)

{
  __asm mov dword ptr [LAB_121a4550], 0
  __asm mov dword ptr [ecx], LAB_118f6f80
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a67320; body size 38 bytes.
#line 1 "ENTRY_10a67320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67320(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a67350; body size 21 bytes.
#line 1 "ENTRY_10a67350"

__declspec(naked) void FUN_10a67350(void)

{
  __asm mov dword ptr [LAB_121a4564], 0
  __asm mov dword ptr [ecx], LAB_118f7158
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a67370; body size 38 bytes.
#line 1 "ENTRY_10a67370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67370(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a673a0; body size 21 bytes.
#line 1 "ENTRY_10a673a0"

__declspec(naked) void FUN_10a673a0(void)

{
  __asm mov dword ptr [LAB_121a4568], 0
  __asm mov dword ptr [ecx], LAB_118f71ac
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a673c0; body size 38 bytes.
#line 1 "ENTRY_10a673c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a673c0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a673f0; body size 21 bytes.
#line 1 "ENTRY_10a673f0"

__declspec(naked) void FUN_10a673f0(void)

{
  __asm mov dword ptr [LAB_121a453c], 0
  __asm mov dword ptr [ecx], LAB_118f6dcc
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a67410; body size 38 bytes.
#line 1 "ENTRY_10a67410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67410(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a67440; body size 21 bytes.
#line 1 "ENTRY_10a67440"

__declspec(naked) void FUN_10a67440(void)

{
  __asm mov dword ptr [LAB_121a4540], 0
  __asm mov dword ptr [ecx], LAB_118f6e1c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a67460; body size 38 bytes.
#line 1 "ENTRY_10a67460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67460(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a67490; body size 21 bytes.
#line 1 "ENTRY_10a67490"

__declspec(naked) void FUN_10a67490(void)

{
  __asm mov dword ptr [LAB_121a4548], 0
  __asm mov dword ptr [ecx], LAB_118f6ed0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a674b0; body size 38 bytes.
#line 1 "ENTRY_10a674b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a674b0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a674e0; body size 21 bytes.
#line 1 "ENTRY_10a674e0"

__declspec(naked) void FUN_10a674e0(void)

{
  __asm mov dword ptr [LAB_121a4544], 0
  __asm mov dword ptr [ecx], LAB_118f6e70
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a67500; body size 5 bytes.
#line 1 "ENTRY_10a67500"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a67500(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10a70ff0; body size 6 bytes.
#line 1 "ENTRY_10a70ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a70ff0(void)

{
  return (undefined4)(DAT_121a4558);
}


// Reference entry 10a71000; body size 6 bytes.
#line 1 "ENTRY_10a71000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71000(void)

{
  return (undefined4)(DAT_121a4560);
}


// Reference entry 10a71010; body size 6 bytes.
#line 1 "ENTRY_10a71010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71010(void)

{
  return (undefined4)(DAT_121a455c);
}


// Reference entry 10a71020; body size 6 bytes.
#line 1 "ENTRY_10a71020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71020(void)

{
  return (undefined4)(DAT_121a454c);
}


// Reference entry 10a71030; body size 6 bytes.
#line 1 "ENTRY_10a71030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71030(void)

{
  return (undefined4)(DAT_121a4554);
}


// Reference entry 10a71040; body size 6 bytes.
#line 1 "ENTRY_10a71040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71040(void)

{
  return (undefined4)(DAT_121a4550);
}


// Reference entry 10a71050; body size 6 bytes.
#line 1 "ENTRY_10a71050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71050(void)

{
  return (undefined4)(DAT_121a4564);
}


// Reference entry 10a71060; body size 6 bytes.
#line 1 "ENTRY_10a71060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71060(void)

{
  return (undefined4)(DAT_121a4568);
}


// Reference entry 10a71070; body size 6 bytes.
#line 1 "ENTRY_10a71070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71070(void)

{
  return (undefined4)(DAT_121a453c);
}


// Reference entry 10a71080; body size 6 bytes.
#line 1 "ENTRY_10a71080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71080(void)

{
  return (undefined4)(DAT_121a4540);
}


// Reference entry 10a71090; body size 6 bytes.
#line 1 "ENTRY_10a71090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a71090(void)

{
  return (undefined4)(DAT_121a4548);
}


// Reference entry 10a710a0; body size 6 bytes.
#line 1 "ENTRY_10a710a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a710a0(void)

{
  return (undefined4)(DAT_121a4544);
}


// Reference entry 10a710b0; body size 6 bytes.
#line 1 "ENTRY_10a710b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a710b0(void)

{
  return (undefined4)(DAT_121a456c);
}


// Reference entry 10a711c0; body size 6 bytes.
#line 1 "ENTRY_10a711c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a711c0(void)

{
  return (undefined4)(DAT_121a45c0);
}


// Reference entry 10a711d0; body size 6 bytes.
#line 1 "ENTRY_10a711d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a711d0(void)

{
  return (undefined4)(DAT_121a45b8);
}


// Reference entry 10a711e0; body size 6 bytes.
#line 1 "ENTRY_10a711e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a711e0(void)

{
  return (undefined4)(DAT_121a45bc);
}


// Reference entry 10a71200; body size 57 bytes.
#line 1 "ENTRY_10a71200"

__declspec(naked) void FUN_10a71200(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f8024
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f8080
  __asm mov dword ptr [esi + 0x8c], LAB_118f808c
  __asm mov dword ptr [esi + 0xa8], LAB_118f8098
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a71520; body size 57 bytes.
#line 1 "ENTRY_10a71520"

__declspec(naked) void FUN_10a71520(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f8238
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f8294
  __asm mov dword ptr [esi + 0x8c], LAB_118f82a0
  __asm mov dword ptr [esi + 0xa8], LAB_118f82ac
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a71670; body size 57 bytes.
#line 1 "ENTRY_10a71670"

__declspec(naked) void FUN_10a71670(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f80bc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f8118
  __asm mov dword ptr [esi + 0x8c], LAB_118f8124
  __asm mov dword ptr [esi + 0xa8], LAB_118f8130
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a717c0; body size 57 bytes.
#line 1 "ENTRY_10a717c0"

__declspec(naked) void FUN_10a717c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f8184
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f81e0
  __asm mov dword ptr [esi + 0x8c], LAB_118f81ec
  __asm mov dword ptr [esi + 0xa8], LAB_118f81f8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a71910; body size 57 bytes.
#line 1 "ENTRY_10a71910"

__declspec(naked) void FUN_10a71910(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], LAB_118f7e98
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f7eec
  __asm mov dword ptr [esi + 0x8c], LAB_118f7ef8
  __asm mov dword ptr [esi + 0xa8], LAB_118f7f04
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a71cb0; body size 38 bytes.
#line 1 "ENTRY_10a71cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71cb0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a71ce0; body size 11 bytes.
#line 1 "ENTRY_10a71ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a71cf0; body size 11 bytes.
#line 1 "ENTRY_10a71cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71cf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a71d00; body size 11 bytes.
#line 1 "ENTRY_10a71d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71d00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a71d10; body size 38 bytes.
#line 1 "ENTRY_10a71d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71d10(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a71d40; body size 21 bytes.
#line 1 "ENTRY_10a71d40"

__declspec(naked) void FUN_10a71d40(void)

{
  __asm mov dword ptr [LAB_121a45c0], 0
  __asm mov dword ptr [ecx], LAB_118f7fc8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a71d60; body size 38 bytes.
#line 1 "ENTRY_10a71d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71d60(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a71d90; body size 21 bytes.
#line 1 "ENTRY_10a71d90"

__declspec(naked) void FUN_10a71d90(void)

{
  __asm mov dword ptr [LAB_121a45b8], 0
  __asm mov dword ptr [ecx], LAB_118f7f40
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a71db0; body size 38 bytes.
#line 1 "ENTRY_10a71db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71db0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a71de0; body size 21 bytes.
#line 1 "ENTRY_10a71de0"

__declspec(naked) void FUN_10a71de0(void)

{
  __asm mov dword ptr [LAB_121a45bc], 0
  __asm mov dword ptr [ecx], LAB_118f7f84
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a71e00; body size 5 bytes.
#line 1 "ENTRY_10a71e00"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a71e00(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10a741a0; body size 6 bytes.
#line 1 "ENTRY_10a741a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a741a0(void)

{
  return (undefined4)(DAT_121a45c0);
}


// Reference entry 10a741b0; body size 6 bytes.
#line 1 "ENTRY_10a741b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a741b0(void)

{
  return (undefined4)(DAT_121a45b8);
}


// Reference entry 10a741c0; body size 6 bytes.
#line 1 "ENTRY_10a741c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a741c0(void)

{
  return (undefined4)(DAT_121a45bc);
}


// Reference entry 10a741d0; body size 6 bytes.
#line 1 "ENTRY_10a741d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a741d0(void)

{
  return (undefined4)(DAT_121a45c4);
}


// Reference entry 10a742e0; body size 25 bytes.
#line 1 "ENTRY_10a742e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a742e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a74300; body size 22 bytes.
#line 1 "ENTRY_10a74300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a74300(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10a74470; body size 22 bytes.
#line 1 "ENTRY_10a74470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a74470(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10a74490; body size 83 bytes.
#line 1 "ENTRY_10a74490"

__declspec(naked) void FUN_10a74490(void)

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




// Reference entry 10a74500; body size 33 bytes.
#line 1 "ENTRY_10a74500"

__declspec(naked) void FUN_10a74500(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x10
  __asm nop
  __asm mov ecx, esi
  __asm call LAB_1004bdcb
  __asm add esi, 0x18
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 10a74c70; body size 7 bytes.
#line 1 "ENTRY_10a74c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a74c70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a74c80; body size 3 bytes.
#line 1 "ENTRY_10a74c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10a74c80(void)

{
  return;
}


// Reference entry 10a74c90; body size 5 bytes.
#line 1 "ENTRY_10a74c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a74c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a74ec0; body size 5 bytes.
#line 1 "ENTRY_10a74ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a74ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a75160; body size 9 bytes.
#line 1 "ENTRY_10a75160"

__declspec(naked) void FUN_10a75160(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm jmp LAB_1004bdcb
}




// Reference entry 10a75240; body size 5 bytes.
#line 1 "ENTRY_10a75240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a75250; body size 5 bytes.
#line 1 "ENTRY_10a75250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a75260; body size 5 bytes.
#line 1 "ENTRY_10a75260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a75270; body size 5 bytes.
#line 1 "ENTRY_10a75270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a75280; body size 5 bytes.
#line 1 "ENTRY_10a75280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a75290; body size 6 bytes.
#line 1 "ENTRY_10a75290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75290(void)

{
  return (undefined4)(DAT_121a45e4);
}


// Reference entry 10a752a0; body size 6 bytes.
#line 1 "ENTRY_10a752a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a752a0(void)

{
  return (undefined4)(DAT_121a45e0);
}


// Reference entry 10a752b0; body size 6 bytes.
#line 1 "ENTRY_10a752b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a752b0(void)

{
  return (undefined4)(DAT_121a45e8);
}


// Reference entry 10a75410; body size 5 bytes.
#line 1 "ENTRY_10a75410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a75420; body size 5 bytes.
#line 1 "ENTRY_10a75420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a75420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a75430; body size 54 bytes.
#line 1 "ENTRY_10a75430"

__declspec(naked) void FUN_10a75430(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11881068
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], LAB_118f84b0
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10a75480; body size 57 bytes.
#line 1 "ENTRY_10a75480"

__declspec(naked) void FUN_10a75480(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f84cc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f8528
  __asm mov dword ptr [esi + 0x8c], LAB_118f8534
  __asm mov dword ptr [esi + 0xa8], LAB_118f8540
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a757a0; body size 32 bytes.
#line 1 "ENTRY_10a757a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a757a0(undefined4 *param_2)
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


// Reference entry 10a757d0; body size 16 bytes.
#line 1 "ENTRY_10a757d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a757d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a757f0; body size 16 bytes.
#line 1 "ENTRY_10a757f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a757f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a75810; body size 32 bytes.
#line 1 "ENTRY_10a75810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a75810(undefined4 *param_2)
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


// Reference entry 10a75840; body size 16 bytes.
#line 1 "ENTRY_10a75840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a75840(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a75860; body size 9 bytes.
#line 1 "ENTRY_10a75860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a75860(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a75870; body size 9 bytes.
#line 1 "ENTRY_10a75870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a75870(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a75880; body size 21 bytes.
#line 1 "ENTRY_10a75880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a75880(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10a758a0; body size 23 bytes.
#line 1 "ENTRY_10a758a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a758a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a758c0; body size 3 bytes.
#line 1 "ENTRY_10a758c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a758c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a75950; body size 23 bytes.
#line 1 "ENTRY_10a75950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a75950(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a75970; body size 96 bytes.
#line 1 "ENTRY_10a75970"

__declspec(naked) void FUN_10a75970(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f86e8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f8744
  __asm mov dword ptr [esi + 0x8c], LAB_118f8750
  __asm mov dword ptr [esi + 0xa8], LAB_118f875c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [esi + 0xec], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a75af0; body size 57 bytes.
#line 1 "ENTRY_10a75af0"

__declspec(naked) void FUN_10a75af0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f8564
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f85c0
  __asm mov dword ptr [esi + 0x8c], LAB_118f85cc
  __asm mov dword ptr [esi + 0xa8], LAB_118f85d8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a75c40; body size 57 bytes.
#line 1 "ENTRY_10a75c40"

__declspec(naked) void FUN_10a75c40(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f8630
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f868c
  __asm mov dword ptr [esi + 0x8c], LAB_118f8698
  __asm mov dword ptr [esi + 0xa8], LAB_118f86a4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a769a0; body size 38 bytes.
#line 1 "ENTRY_10a769a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a769a0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a769d0; body size 11 bytes.
#line 1 "ENTRY_10a769d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a769d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a769e0; body size 11 bytes.
#line 1 "ENTRY_10a769e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a769e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a769f0; body size 11 bytes.
#line 1 "ENTRY_10a769f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a769f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a76c90; body size 21 bytes.
#line 1 "ENTRY_10a76c90"

__declspec(naked) void FUN_10a76c90(void)

{
  __asm mov dword ptr [LAB_121a45e4], 0
  __asm mov dword ptr [ecx], LAB_118f83e0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a76cb0; body size 38 bytes.
#line 1 "ENTRY_10a76cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a76cb0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a76ce0; body size 21 bytes.
#line 1 "ENTRY_10a76ce0"

__declspec(naked) void FUN_10a76ce0(void)

{
  __asm mov dword ptr [LAB_121a45e0], 0
  __asm mov dword ptr [ecx], LAB_118f8394
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a76d00; body size 38 bytes.
#line 1 "ENTRY_10a76d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a76d00(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a76d30; body size 21 bytes.
#line 1 "ENTRY_10a76d30"

__declspec(naked) void FUN_10a76d30(void)

{
  __asm mov dword ptr [LAB_121a45e8], 0
  __asm mov dword ptr [ecx], LAB_118f8430
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a770b0; body size 67 bytes.
#line 1 "ENTRY_10a770b0"

__declspec(naked) void FUN_10a770b0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp edi, ebx
  __asm _emit 0x74 __asm _emit 0x30
  __asm push esi
  __asm mov esi, dword ptr [edi]
  __asm push dword ptr [esi + 4]
  __asm push edi
  __asm call LAB_10058a5d
  __asm mov dword ptr [esi + 4], esi
  __asm mov dword ptr [esi], esi
  __asm mov dword ptr [esi + 8], esi
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi]
  __asm mov eax, dword ptr [ebx]
  __asm mov dword ptr [edi], eax
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov dword ptr [ebx], ecx
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm mov dword ptr [ebx + 4], ecx
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm pop ebx
  __asm ret 4
}




// Reference entry 10a77110; body size 67 bytes.
#line 1 "ENTRY_10a77110"

__declspec(naked) void FUN_10a77110(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp edi, ebx
  __asm _emit 0x74 __asm _emit 0x30
  __asm push esi
  __asm mov esi, dword ptr [edi]
  __asm push dword ptr [esi + 4]
  __asm push edi
  __asm call LAB_10058a5d
  __asm mov dword ptr [esi + 4], esi
  __asm mov dword ptr [esi], esi
  __asm mov dword ptr [esi + 8], esi
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi]
  __asm mov eax, dword ptr [ebx]
  __asm mov dword ptr [edi], eax
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov dword ptr [ebx], ecx
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm mov dword ptr [ebx + 4], ecx
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm pop ebx
  __asm ret 4
}




// Reference entry 10a77170; body size 15 bytes.
#line 1 "ENTRY_10a77170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10a77170(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x18);
}


// Reference entry 10a77190; body size 7 bytes.
#line 1 "ENTRY_10a77190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10a77190(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10a771a0; body size 3 bytes.
#line 1 "ENTRY_10a771a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a771a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a771b0; body size 3 bytes.
#line 1 "ENTRY_10a771b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a771b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a777f0; body size 63 bytes.
#line 1 "ENTRY_10a777f0"

__declspec(naked) void FUN_10a777f0(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov eax, 0x2aaaaaab
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0xaaaaaaa
  __asm imul edx
  __asm push esi
  __asm sar edx, 2
  __asm mov esi, edx
  __asm shr esi, 0x1f
  __asm add esi, edx
  __asm mov edx, esi
  __asm _emit 0xd1 __asm _emit 0xea
  __asm sub ecx, edx
  __asm cmp esi, ecx
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0xaaaaaaa
  __asm pop esi
  __asm ret 4
  __asm lea eax, [edx + esi]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10a77930; body size 5 bytes.
#line 1 "ENTRY_10a77930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a77930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a77940; body size 3 bytes.
#line 1 "ENTRY_10a77940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a77950; body size 3 bytes.
#line 1 "ENTRY_10a77950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a77960; body size 3 bytes.
#line 1 "ENTRY_10a77960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a77970; body size 3 bytes.
#line 1 "ENTRY_10a77970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a77980; body size 3 bytes.
#line 1 "ENTRY_10a77980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a77990; body size 3 bytes.
#line 1 "ENTRY_10a77990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a77990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a779f0; body size 3 bytes.
#line 1 "ENTRY_10a779f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10a779f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10a77a00; body size 6 bytes.
#line 1 "ENTRY_10a77a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a77a00(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10a77db0; body size 90 bytes.
#line 1 "ENTRY_10a77db0"

__declspec(naked) void FUN_10a77db0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xaaaaaaa
  __asm _emit 0x77 __asm _emit 0x4a
  __asm lea eax, [eax + eax*2]
  __asm shl eax, 3
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




// Reference entry 10a783b0; body size 23 bytes.
#line 1 "ENTRY_10a783b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a783b0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x18);
}


// Reference entry 10a78830; body size 16 bytes.
#line 1 "ENTRY_10a78830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10a78830(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 0x18);
}


// Reference entry 10a78850; body size 23 bytes.
#line 1 "ENTRY_10a78850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10a78850(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf0));
  return (SCStr *)(param_2);
}


// Reference entry 10a79e80; body size 17 bytes.
#line 1 "ENTRY_10a79e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10a79e80(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_2))->m_op_ctor(param_1);
  return (SCStr *)(param_2);
}


// Reference entry 10a7a900; body size 37 bytes.
#line 1 "ENTRY_10a7a900"

__declspec(naked) void FUN_10a7a900(void)

{
  __asm mov eax, dword ptr [ecx + 0xf8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [ecx + 0xfc]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a7a930; body size 23 bytes.
#line 1 "ENTRY_10a7a930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10a7a930(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xe8));
  return (SCStr *)(param_2);
}


// Reference entry 10a7a950; body size 20 bytes.
#line 1 "ENTRY_10a7a950"

__declspec(naked) void FUN_10a7a950(void)

{
  __asm lea eax, [ecx + 8]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_1006e600
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10a7bfb0; body size 23 bytes.
#line 1 "ENTRY_10a7bfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10a7bfb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf4));
  return (SCStr *)(param_2);
}


// Reference entry 10a7bfd0; body size 6 bytes.
#line 1 "ENTRY_10a7bfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7bfd0(void)

{
  return (undefined4)(DAT_121a45e4);
}


// Reference entry 10a7bfe0; body size 6 bytes.
#line 1 "ENTRY_10a7bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7bfe0(void)

{
  return (undefined4)(DAT_121a45e0);
}


// Reference entry 10a7bff0; body size 6 bytes.
#line 1 "ENTRY_10a7bff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7bff0(void)

{
  return (undefined4)(DAT_121a45e8);
}


// Reference entry 10a7c000; body size 6 bytes.
#line 1 "ENTRY_10a7c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7c000(void)

{
  return (undefined4)(DAT_121a45dc);
}


// Reference entry 10a7c020; body size 23 bytes.
#line 1 "ENTRY_10a7c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10a7c020(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xec));
  return (SCStr *)(param_2);
}


// Reference entry 10a7c040; body size 5 bytes.
#line 1 "ENTRY_10a7c040"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a7c040(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a7c050; body size 5 bytes.
#line 1 "ENTRY_10a7c050"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a7c050(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a7c060; body size 4 bytes.
#line 1 "ENTRY_10a7c060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10a7c060(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 10a7c0b0; body size 6 bytes.
#line 1 "ENTRY_10a7c0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7c0b0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10a7c0c0; body size 6 bytes.
#line 1 "ENTRY_10a7c0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7c0c0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10a7ca90; body size 3 bytes.
#line 1 "ENTRY_10a7ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a7ca90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10a7cbf0; body size 28 bytes.
#line 1 "ENTRY_10a7cbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7cbf0(undefined4 *param_1)

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


// Reference entry 10a7cc20; body size 28 bytes.
#line 1 "ENTRY_10a7cc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7cc20(undefined4 *param_1)

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


// Reference entry 10a7ce70; body size 39 bytes.
#line 1 "ENTRY_10a7ce70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a7ce70(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xec));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10a7cea0; body size 24 bytes.
#line 1 "ENTRY_10a7cea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a7cea0(int param_1)

{
  return (int)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x18);
}


// Reference entry 10a7cec0; body size 4 bytes.
#line 1 "ENTRY_10a7cec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a7cec0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10a7ced0; body size 23 bytes.
#line 1 "ENTRY_10a7ced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a7ced0(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x18);
}


// Reference entry 10a7cef0; body size 6 bytes.
#line 1 "ENTRY_10a7cef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7cef0(void)

{
  return (undefined4)(DAT_121a4664);
}


// Reference entry 10a7cf00; body size 6 bytes.
#line 1 "ENTRY_10a7cf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7cf00(void)

{
  return (undefined4)(DAT_121a4668);
}


// Reference entry 10a7cf10; body size 6 bytes.
#line 1 "ENTRY_10a7cf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a7cf10(void)

{
  return (undefined4)(DAT_121a466c);
}


// Reference entry 10a7cf30; body size 57 bytes.
#line 1 "ENTRY_10a7cf30"

__declspec(naked) void FUN_10a7cf30(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f89fc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f8a58
  __asm mov dword ptr [esi + 0x8c], LAB_118f8a64
  __asm mov dword ptr [esi + 0xa8], LAB_118f8a70
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a7d250; body size 57 bytes.
#line 1 "ENTRY_10a7d250"

__declspec(naked) void FUN_10a7d250(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f8a94
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f8af0
  __asm mov dword ptr [esi + 0x8c], LAB_118f8afc
  __asm mov dword ptr [esi + 0xa8], LAB_118f8b08
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a7d3a0; body size 57 bytes.
#line 1 "ENTRY_10a7d3a0"

__declspec(naked) void FUN_10a7d3a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f8b60
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f8bbc
  __asm mov dword ptr [esi + 0x8c], LAB_118f8bc8
  __asm mov dword ptr [esi + 0xa8], LAB_118f8bd4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a7d4f0; body size 57 bytes.
#line 1 "ENTRY_10a7d4f0"

__declspec(naked) void FUN_10a7d4f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f8c24
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f8c80
  __asm mov dword ptr [esi + 0x8c], LAB_118f8c8c
  __asm mov dword ptr [esi + 0xa8], LAB_118f8c98
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a7d9e0; body size 38 bytes.
#line 1 "ENTRY_10a7d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7d9e0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a7da10; body size 11 bytes.
#line 1 "ENTRY_10a7da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7da10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a7da20; body size 11 bytes.
#line 1 "ENTRY_10a7da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7da20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a7da30; body size 11 bytes.
#line 1 "ENTRY_10a7da30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7da30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a7da40; body size 38 bytes.
#line 1 "ENTRY_10a7da40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7da40(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a7da70; body size 21 bytes.
#line 1 "ENTRY_10a7da70"

__declspec(naked) void FUN_10a7da70(void)

{
  __asm mov dword ptr [LAB_121a4664], 0
  __asm mov dword ptr [ecx], LAB_118f8944
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a7da90; body size 38 bytes.
#line 1 "ENTRY_10a7da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7da90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a7dac0; body size 21 bytes.
#line 1 "ENTRY_10a7dac0"

__declspec(naked) void FUN_10a7dac0(void)

{
  __asm mov dword ptr [LAB_121a4668], 0
  __asm mov dword ptr [ecx], LAB_118f897c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a7dae0; body size 38 bytes.
#line 1 "ENTRY_10a7dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7dae0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a7db10; body size 21 bytes.
#line 1 "ENTRY_10a7db10"

__declspec(naked) void FUN_10a7db10(void)

{
  __asm mov dword ptr [LAB_121a466c], 0
  __asm mov dword ptr [ecx], LAB_118f89b4
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a7db30; body size 5 bytes.
#line 1 "ENTRY_10a7db30"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a7db30(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10a80340; body size 6 bytes.
#line 1 "ENTRY_10a80340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a80340(void)

{
  return (undefined4)(DAT_121a4664);
}


// Reference entry 10a80350; body size 6 bytes.
#line 1 "ENTRY_10a80350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a80350(void)

{
  return (undefined4)(DAT_121a4668);
}


// Reference entry 10a80360; body size 6 bytes.
#line 1 "ENTRY_10a80360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a80360(void)

{
  return (undefined4)(DAT_121a466c);
}


// Reference entry 10a80370; body size 6 bytes.
#line 1 "ENTRY_10a80370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a80370(void)

{
  return (undefined4)(DAT_121a4670);
}


// Reference entry 10a803d0; body size 6 bytes.
#line 1 "ENTRY_10a803d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a803d0(void)

{
  return (undefined4)(DAT_121a468c);
}


// Reference entry 10a803e0; body size 6 bytes.
#line 1 "ENTRY_10a803e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a803e0(void)

{
  return (undefined4)(DAT_121a4688);
}


// Reference entry 10a80400; body size 16 bytes.
#line 1 "ENTRY_10a80400"

__declspec(naked) void FUN_10a80400(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov edx, dword ptr [eax]
  __asm cmp edx, dword ptr [ecx]
  __asm cmovl eax, ecx
  __asm ret
}




// Reference entry 10a80420; body size 57 bytes.
#line 1 "ENTRY_10a80420"

__declspec(naked) void FUN_10a80420(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f8e1c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f8e78
  __asm mov dword ptr [esi + 0x8c], LAB_118f8e84
  __asm mov dword ptr [esi + 0xa8], LAB_118f8e90
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a80650; body size 57 bytes.
#line 1 "ENTRY_10a80650"

__declspec(naked) void FUN_10a80650(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f900c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f9068
  __asm mov dword ptr [esi + 0x8c], LAB_118f9074
  __asm mov dword ptr [esi + 0xa8], LAB_118f9080
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a809b0; body size 57 bytes.
#line 1 "ENTRY_10a809b0"

__declspec(naked) void FUN_10a809b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], LAB_118f8cd0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f8d24
  __asm mov dword ptr [esi + 0x8c], LAB_118f8d30
  __asm mov dword ptr [esi + 0xa8], LAB_118f8d3c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a80ca0; body size 11 bytes.
#line 1 "ENTRY_10a80ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a80ca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a80cb0; body size 11 bytes.
#line 1 "ENTRY_10a80cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a80cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a80cc0; body size 38 bytes.
#line 1 "ENTRY_10a80cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a80cc0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a80cf0; body size 21 bytes.
#line 1 "ENTRY_10a80cf0"

__declspec(naked) void FUN_10a80cf0(void)

{
  __asm mov dword ptr [LAB_121a468c], 0
  __asm mov dword ptr [ecx], LAB_118f8dc0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a80df0; body size 21 bytes.
#line 1 "ENTRY_10a80df0"

__declspec(naked) void FUN_10a80df0(void)

{
  __asm mov dword ptr [LAB_121a4688], 0
  __asm mov dword ptr [ecx], LAB_118f8d78
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a80e10; body size 5 bytes.
#line 1 "ENTRY_10a80e10"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a80e10(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10a82f60; body size 6 bytes.
#line 1 "ENTRY_10a82f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a82f60(void)

{
  return (undefined4)(DAT_121a468c);
}


// Reference entry 10a82f70; body size 6 bytes.
#line 1 "ENTRY_10a82f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a82f70(void)

{
  return (undefined4)(DAT_121a4688);
}


// Reference entry 10a82f80; body size 6 bytes.
#line 1 "ENTRY_10a82f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a82f80(void)

{
  return (undefined4)(DAT_121a4690);
}


// Reference entry 10a83b60; body size 6 bytes.
#line 1 "ENTRY_10a83b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a83b60(void)

{
  return (undefined4)(DAT_121a46d4);
}


// Reference entry 10a83b70; body size 6 bytes.
#line 1 "ENTRY_10a83b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a83b70(void)

{
  return (undefined4)(DAT_121a46d8);
}


// Reference entry 10a83b80; body size 6 bytes.
#line 1 "ENTRY_10a83b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a83b80(void)

{
  return (undefined4)(DAT_121a46dc);
}


// Reference entry 10a83ba0; body size 57 bytes.
#line 1 "ENTRY_10a83ba0"

__declspec(naked) void FUN_10a83ba0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f92f4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f9350
  __asm mov dword ptr [esi + 0x8c], LAB_118f935c
  __asm mov dword ptr [esi + 0xa8], LAB_118f9368
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a83ec0; body size 57 bytes.
#line 1 "ENTRY_10a83ec0"

__declspec(naked) void FUN_10a83ec0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f938c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f93e8
  __asm mov dword ptr [esi + 0x8c], LAB_118f93f4
  __asm mov dword ptr [esi + 0xa8], LAB_118f9400
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a84010; body size 57 bytes.
#line 1 "ENTRY_10a84010"

__declspec(naked) void FUN_10a84010(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f947c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f94d8
  __asm mov dword ptr [esi + 0x8c], LAB_118f94e4
  __asm mov dword ptr [esi + 0xa8], LAB_118f94f0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a84160; body size 57 bytes.
#line 1 "ENTRY_10a84160"

__declspec(naked) void FUN_10a84160(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f9764
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f97c0
  __asm mov dword ptr [esi + 0x8c], LAB_118f97cc
  __asm mov dword ptr [esi + 0xa8], LAB_118f97d8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a842b0; body size 57 bytes.
#line 1 "ENTRY_10a842b0"

__declspec(naked) void FUN_10a842b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], LAB_118f9168
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f91bc
  __asm mov dword ptr [esi + 0x8c], LAB_118f91c8
  __asm mov dword ptr [esi + 0xa8], LAB_118f91d4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a846e0; body size 38 bytes.
#line 1 "ENTRY_10a846e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a846e0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a84710; body size 11 bytes.
#line 1 "ENTRY_10a84710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a84720; body size 11 bytes.
#line 1 "ENTRY_10a84720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a84730; body size 11 bytes.
#line 1 "ENTRY_10a84730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84730(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a84740; body size 38 bytes.
#line 1 "ENTRY_10a84740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84740(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a84770; body size 21 bytes.
#line 1 "ENTRY_10a84770"

__declspec(naked) void FUN_10a84770(void)

{
  __asm mov dword ptr [LAB_121a46d4], 0
  __asm mov dword ptr [ecx], LAB_118f9210
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a84790; body size 38 bytes.
#line 1 "ENTRY_10a84790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84790(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a847c0; body size 21 bytes.
#line 1 "ENTRY_10a847c0"

__declspec(naked) void FUN_10a847c0(void)

{
  __asm mov dword ptr [LAB_121a46d8], 0
  __asm mov dword ptr [ecx], LAB_118f9250
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a847e0; body size 38 bytes.
#line 1 "ENTRY_10a847e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a847e0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a84810; body size 21 bytes.
#line 1 "ENTRY_10a84810"

__declspec(naked) void FUN_10a84810(void)

{
  __asm mov dword ptr [LAB_121a46dc], 0
  __asm mov dword ptr [ecx], LAB_118f9294
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a84830; body size 5 bytes.
#line 1 "ENTRY_10a84830"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a84830(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10a87e40; body size 6 bytes.
#line 1 "ENTRY_10a87e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a87e40(void)

{
  return (undefined4)(DAT_121a46d4);
}


// Reference entry 10a87e50; body size 6 bytes.
#line 1 "ENTRY_10a87e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a87e50(void)

{
  return (undefined4)(DAT_121a46d8);
}


// Reference entry 10a87e60; body size 6 bytes.
#line 1 "ENTRY_10a87e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a87e60(void)

{
  return (undefined4)(DAT_121a46dc);
}


// Reference entry 10a87e70; body size 6 bytes.
#line 1 "ENTRY_10a87e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a87e70(void)

{
  return (undefined4)(DAT_121a46e0);
}


// Reference entry 10a88a60; body size 152 bytes.
#line 1 "ENTRY_10a88a60"

__declspec(naked) void FUN_10a88a60(void)

{
  __asm push ecx
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [ecx]
  __asm mov ebx, ebp
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm mov esi, dword ptr [ebp + 4]
  __asm mov dword ptr [esp + 0x10], ebp
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x42
  __asm mov ebp, dword ptr [edi + 0x14]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov edx, edi
  __asm cmp ebp, 0x10
  __asm _emit 0x72 __asm _emit 0x02
  __asm mov edx, dword ptr [edi]
  __asm cmp dword ptr [esi + 0x24], 0x10
  __asm lea ecx, [esi + 0x10]
  __asm _emit 0x72 __asm _emit 0x03
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm push dword ptr [edi + 0x10]
  __asm push edx
  __asm push dword ptr [esi + 0x20]
  __asm push ecx
  __asm call LAB_100248ac
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x79 __asm _emit 0x05
  __asm mov esi, dword ptr [esi + 8]
  __asm _emit 0xeb __asm _emit 0x04
  __asm mov ebx, esi
  __asm mov esi, dword ptr [esi]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xc8
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm cmp byte ptr [ebx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x2c
  __asm cmp dword ptr [ebx + 0x24], 0x10
  __asm lea edx, [ebx + 0x10]
  __asm _emit 0x72 __asm _emit 0x03
  __asm mov edx, dword ptr [ebx + 0x10]
  __asm cmp dword ptr [edi + 0x14], 0x10
  __asm mov ecx, edi
  __asm _emit 0x72 __asm _emit 0x02
  __asm mov ecx, dword ptr [edi]
  __asm push dword ptr [ebx + 0x20]
  __asm push edx
  __asm push dword ptr [edi + 0x10]
  __asm push ecx
  __asm call LAB_100248ac
  __asm add esp, 0x10
  __asm test eax, eax
  __asm mov eax, ebx
  __asm _emit 0x79 __asm _emit 0x02
  __asm mov eax, ebp
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a88b20; body size 127 bytes.
#line 1 "ENTRY_10a88b20"

__declspec(naked) void FUN_10a88b20(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, dword ptr [eax + 4]
  __asm mov dword ptr [edi], esi
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edi + 8], eax
  __asm _emit 0x75 __asm _emit 0x5b
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push ebp
  __asm mov eax, dword ptr [ebx + 0x10]
  __asm mov ebp, dword ptr [ebx + 0x14]
  __asm mov dword ptr [esp + 0x14], eax
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov dword ptr [edi], esi
  __asm mov edx, ebx
  __asm cmp ebp, 0x10
  __asm _emit 0x72 __asm _emit 0x02
  __asm mov edx, dword ptr [ebx]
  __asm cmp dword ptr [esi + 0x24], 0x10
  __asm lea ecx, [esi + 0x10]
  __asm _emit 0x72 __asm _emit 0x03
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm push dword ptr [esp + 0x14]
  __asm push edx
  __asm push dword ptr [esi + 0x20]
  __asm push ecx
  __asm call LAB_100248ac
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x79 __asm _emit 0x07
  __asm mov esi, dword ptr [esi + 8]
  __asm xor eax, eax
  __asm _emit 0xeb __asm _emit 0x0a
  __asm mov dword ptr [edi + 8], esi
  __asm mov eax, 1
  __asm mov esi, dword ptr [esi]
  __asm mov dword ptr [edi + 4], eax
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xba
  __asm pop ebp
  __asm pop ebx
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10a88bc0; body size 5 bytes.
#line 1 "ENTRY_10a88bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a88bd0; body size 68 bytes.
#line 1 "ENTRY_10a88bd0"

__declspec(naked) void FUN_10a88bd0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x35
  __asm cmp dword ptr [eax + 0x24], 0x10
  __asm lea edx, [eax + 0x10]
  __asm _emit 0x72 __asm _emit 0x03
  __asm mov edx, dword ptr [eax + 0x10]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [ecx + 0x14], 0x10
  __asm _emit 0x72 __asm _emit 0x02
  __asm mov esi, dword ptr [ecx]
  __asm push dword ptr [eax + 0x20]
  __asm push edx
  __asm push dword ptr [ecx + 0x10]
  __asm push esi
  __asm call LAB_100248ac
  __asm add esp, 0x10
  __asm pop esi
  __asm test eax, eax
  __asm _emit 0x78 __asm _emit 0x05
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}




// Reference entry 10a88c30; body size 5 bytes.
#line 1 "ENTRY_10a88c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a88c40; body size 6 bytes.
#line 1 "ENTRY_10a88c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88c40(void)

{
  return (undefined4)(DAT_121a46fc);
}


// Reference entry 10a88c50; body size 6 bytes.
#line 1 "ENTRY_10a88c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88c50(void)

{
  return (undefined4)(DAT_121a4704);
}


// Reference entry 10a88c60; body size 6 bytes.
#line 1 "ENTRY_10a88c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88c60(void)

{
  return (undefined4)(DAT_121a4708);
}


// Reference entry 10a88c70; body size 6 bytes.
#line 1 "ENTRY_10a88c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a88c70(void)

{
  return (undefined4)(DAT_121a4700);
}


// Reference entry 10a88c90; body size 57 bytes.
#line 1 "ENTRY_10a88c90"

__declspec(naked) void FUN_10a88c90(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f9a54
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f9ab0
  __asm mov dword ptr [esi + 0x8c], LAB_118f9abc
  __asm mov dword ptr [esi + 0xa8], LAB_118f9ac8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a890a0; body size 32 bytes.
#line 1 "ENTRY_10a890a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a890a0(undefined4 *param_2)
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


// Reference entry 10a890d0; body size 16 bytes.
#line 1 "ENTRY_10a890d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10a890d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10a890f0; body size 11 bytes.
#line 1 "ENTRY_10a890f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a890f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10a89100; body size 24 bytes.
#line 1 "ENTRY_10a89100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10a89100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11262400((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDateTime);
  return (undefined4 *)(param_1);
}


// Reference entry 10a89120; body size 57 bytes.
#line 1 "ENTRY_10a89120"

__declspec(naked) void FUN_10a89120(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f9aec
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f9b48
  __asm mov dword ptr [esi + 0x8c], LAB_118f9b54
  __asm mov dword ptr [esi + 0xa8], LAB_118f9b60
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a89270; body size 57 bytes.
#line 1 "ENTRY_10a89270"

__declspec(naked) void FUN_10a89270(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f9d00
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f9d5c
  __asm mov dword ptr [esi + 0x8c], LAB_118f9d68
  __asm mov dword ptr [esi + 0xa8], LAB_118f9d74
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a893c0; body size 57 bytes.
#line 1 "ENTRY_10a893c0"

__declspec(naked) void FUN_10a893c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f9de8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f9e44
  __asm mov dword ptr [esi + 0x8c], LAB_118f9e50
  __asm mov dword ptr [esi + 0xa8], LAB_118f9e5c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a89510; body size 57 bytes.
#line 1 "ENTRY_10a89510"

__declspec(naked) void FUN_10a89510(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118f9c00
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f9c5c
  __asm mov dword ptr [esi + 0x8c], LAB_118f9c68
  __asm mov dword ptr [esi + 0xa8], LAB_118f9c74
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a89660; body size 97 bytes.
#line 1 "ENTRY_10a89660"

__declspec(naked) void FUN_10a89660(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], LAB_118f9828
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118f987c
  __asm mov dword ptr [esi + 0x8c], LAB_118f9888
  __asm mov dword ptr [esi + 0xa8], LAB_118f9894
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0xf4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a89b40; body size 38 bytes.
#line 1 "ENTRY_10a89b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89b40(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a89b70; body size 11 bytes.
#line 1 "ENTRY_10a89b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89b70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a89b80; body size 11 bytes.
#line 1 "ENTRY_10a89b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89b80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a89b90; body size 11 bytes.
#line 1 "ENTRY_10a89b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a89ba0; body size 11 bytes.
#line 1 "ENTRY_10a89ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a89bb0; body size 38 bytes.
#line 1 "ENTRY_10a89bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89bb0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a89be0; body size 21 bytes.
#line 1 "ENTRY_10a89be0"

__declspec(naked) void FUN_10a89be0(void)

{
  __asm mov dword ptr [LAB_121a46fc], 0
  __asm mov dword ptr [ecx], LAB_118f98d0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a89c00; body size 38 bytes.
#line 1 "ENTRY_10a89c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89c00(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a89c30; body size 21 bytes.
#line 1 "ENTRY_10a89c30"

__declspec(naked) void FUN_10a89c30(void)

{
  __asm mov dword ptr [LAB_121a4704], 0
  __asm mov dword ptr [ecx], LAB_118f9974
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a89c50; body size 38 bytes.
#line 1 "ENTRY_10a89c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89c50(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a89c80; body size 21 bytes.
#line 1 "ENTRY_10a89c80"

__declspec(naked) void FUN_10a89c80(void)

{
  __asm mov dword ptr [LAB_121a4708], 0
  __asm mov dword ptr [ecx], LAB_118f99c4
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a89ca0; body size 38 bytes.
#line 1 "ENTRY_10a89ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a89ca0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a89cd0; body size 21 bytes.
#line 1 "ENTRY_10a89cd0"

__declspec(naked) void FUN_10a89cd0(void)

{
  __asm mov dword ptr [LAB_121a4700], 0
  __asm mov dword ptr [ecx], LAB_118f9920
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a89e30; body size 65 bytes.
#line 1 "ENTRY_10a89e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10a89e30(int *param_2)
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


// Reference entry 10a89e90; body size 14 bytes.
#line 1 "ENTRY_10a89e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10a89e90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10a89eb0; body size 14 bytes.
#line 1 "ENTRY_10a89eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10a89eb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10a89ed0; body size 6 bytes.
#line 1 "ENTRY_10a89ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a89ed0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10a89ee0; body size 6 bytes.
#line 1 "ENTRY_10a89ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10a89ee0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10a8a4e0; body size 3 bytes.
#line 1 "ENTRY_10a8a4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a8a4e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a8a4f0; body size 3 bytes.
#line 1 "ENTRY_10a8a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a8a4f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a8a9b0; body size 11 bytes.
#line 1 "ENTRY_10a8a9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10a8a9b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10a8a9c0; body size 168 bytes.
#line 1 "ENTRY_10a8a9c0"

__declspec(naked) void FUN_10a8a9c0(void)

{
  __asm push ecx
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [ecx]
  __asm mov ebx, ebp
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x1c]
  __asm mov esi, dword ptr [ebp + 4]
  __asm mov dword ptr [esp + 0x10], ebp
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x42
  __asm mov ebp, dword ptr [edi + 0x14]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov edx, edi
  __asm cmp ebp, 0x10
  __asm _emit 0x72 __asm _emit 0x02
  __asm mov edx, dword ptr [edi]
  __asm cmp dword ptr [esi + 0x24], 0x10
  __asm lea ecx, [esi + 0x10]
  __asm _emit 0x72 __asm _emit 0x03
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm push dword ptr [edi + 0x10]
  __asm push edx
  __asm push dword ptr [esi + 0x20]
  __asm push ecx
  __asm call LAB_100248ac
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x79 __asm _emit 0x05
  __asm mov esi, dword ptr [esi + 8]
  __asm _emit 0xeb __asm _emit 0x04
  __asm mov ebx, esi
  __asm mov esi, dword ptr [esi]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xc8
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm cmp byte ptr [ebx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x38
  __asm cmp dword ptr [ebx + 0x24], 0x10
  __asm lea edx, [ebx + 0x10]
  __asm _emit 0x72 __asm _emit 0x03
  __asm mov edx, dword ptr [ebx + 0x10]
  __asm cmp dword ptr [edi + 0x14], 0x10
  __asm mov ecx, edi
  __asm _emit 0x72 __asm _emit 0x02
  __asm mov ecx, dword ptr [edi]
  __asm push dword ptr [ebx + 0x20]
  __asm push edx
  __asm push dword ptr [edi + 0x10]
  __asm push ecx
  __asm call LAB_100248ac
  __asm add esp, 0x10
  __asm test eax, eax
  __asm _emit 0x78 __asm _emit 0x0e
  __asm mov eax, dword ptr [esp + 0x18]
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov dword ptr [eax], ebx
  __asm pop ebx
  __asm pop ecx
  __asm ret 8
  __asm mov eax, dword ptr [esp + 0x18]
  __asm pop edi
  __asm pop esi
  __asm mov dword ptr [eax], ebp
  __asm pop ebp
  __asm pop ebx
  __asm pop ecx
  __asm ret 8
}




// Reference entry 10a8e1d0; body size 37 bytes.
#line 1 "ENTRY_10a8e1d0"

__declspec(naked) void FUN_10a8e1d0(void)

{
  __asm mov eax, dword ptr [ecx + 0xe8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [ecx + 0xec]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a90600; body size 23 bytes.
#line 1 "ENTRY_10a90600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10a90600(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf4));
  return (SCStr *)(param_2);
}


// Reference entry 10a90620; body size 23 bytes.
#line 1 "ENTRY_10a90620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10a90620(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf0));
  return (SCStr *)(param_2);
}


// Reference entry 10a90640; body size 6 bytes.
#line 1 "ENTRY_10a90640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90640(void)

{
  return (undefined4)(DAT_121a46fc);
}


// Reference entry 10a90650; body size 6 bytes.
#line 1 "ENTRY_10a90650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90650(void)

{
  return (undefined4)(DAT_121a4704);
}


// Reference entry 10a90660; body size 6 bytes.
#line 1 "ENTRY_10a90660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90660(void)

{
  return (undefined4)(DAT_121a4708);
}


// Reference entry 10a90670; body size 6 bytes.
#line 1 "ENTRY_10a90670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90670(void)

{
  return (undefined4)(DAT_121a4700);
}


// Reference entry 10a90680; body size 6 bytes.
#line 1 "ENTRY_10a90680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90680(void)

{
  return (undefined4)(DAT_121a46f8);
}


// Reference entry 10a906a0; body size 5 bytes.
#line 1 "ENTRY_10a906a0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a906a0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a906b0; body size 5 bytes.
#line 1 "ENTRY_10a906b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a906b0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a90d30; body size 5 bytes.
#line 1 "ENTRY_10a90d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10a90f40; body size 6 bytes.
#line 1 "ENTRY_10a90f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f40(void)

{
  return (undefined4)(DAT_121a476c);
}


// Reference entry 10a90f50; body size 6 bytes.
#line 1 "ENTRY_10a90f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f50(void)

{
  return (undefined4)(DAT_121a4764);
}


// Reference entry 10a90f60; body size 6 bytes.
#line 1 "ENTRY_10a90f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f60(void)

{
  return (undefined4)(DAT_121a4760);
}


// Reference entry 10a90f70; body size 6 bytes.
#line 1 "ENTRY_10a90f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f70(void)

{
  return (undefined4)(DAT_121a475c);
}


// Reference entry 10a90f80; body size 6 bytes.
#line 1 "ENTRY_10a90f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f80(void)

{
  return (undefined4)(DAT_121a4770);
}


// Reference entry 10a90f90; body size 6 bytes.
#line 1 "ENTRY_10a90f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90f90(void)

{
  return (undefined4)(DAT_121a4768);
}


// Reference entry 10a90fa0; body size 6 bytes.
#line 1 "ENTRY_10a90fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a90fa0(void)

{
  return (undefined4)(DAT_121a4758);
}


// Reference entry 10a90fc0; body size 57 bytes.
#line 1 "ENTRY_10a90fc0"

__declspec(naked) void FUN_10a90fc0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fa2a8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fa304
  __asm mov dword ptr [esi + 0x8c], LAB_118fa310
  __asm mov dword ptr [esi + 0xa8], LAB_118fa31c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a916a0; body size 57 bytes.
#line 1 "ENTRY_10a916a0"

__declspec(naked) void FUN_10a916a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fa674
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fa6d0
  __asm mov dword ptr [esi + 0x8c], LAB_118fa6dc
  __asm mov dword ptr [esi + 0xa8], LAB_118fa6e8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a917f0; body size 57 bytes.
#line 1 "ENTRY_10a917f0"

__declspec(naked) void FUN_10a917f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fa8f0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fa94c
  __asm mov dword ptr [esi + 0x8c], LAB_118fa958
  __asm mov dword ptr [esi + 0xa8], LAB_118fa964
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a91940; body size 57 bytes.
#line 1 "ENTRY_10a91940"

__declspec(naked) void FUN_10a91940(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fa824
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fa880
  __asm mov dword ptr [esi + 0x8c], LAB_118fa88c
  __asm mov dword ptr [esi + 0xa8], LAB_118fa898
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a91a90; body size 77 bytes.
#line 1 "ENTRY_10a91a90"

__declspec(naked) void FUN_10a91a90(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fa73c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fa798
  __asm mov dword ptr [esi + 0x8c], LAB_118fa7a4
  __asm mov dword ptr [esi + 0xa8], LAB_118fa7b0
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a91bf0; body size 87 bytes.
#line 1 "ENTRY_10a91bf0"

__declspec(naked) void FUN_10a91bf0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fa9b8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118faa14
  __asm mov dword ptr [esi + 0x8c], LAB_118faa20
  __asm mov dword ptr [esi + 0xa8], LAB_118faa2c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a91f00; body size 57 bytes.
#line 1 "ENTRY_10a91f00"

__declspec(naked) void FUN_10a91f00(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fa340
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fa39c
  __asm mov dword ptr [esi + 0x8c], LAB_118fa3a8
  __asm mov dword ptr [esi + 0xa8], LAB_118fa3b4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a92050; body size 97 bytes.
#line 1 "ENTRY_10a92050"

__declspec(naked) void FUN_10a92050(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], LAB_118fa010
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fa064
  __asm mov dword ptr [esi + 0x8c], LAB_118fa070
  __asm mov dword ptr [esi + 0xa8], LAB_118fa07c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0x1c __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a927d0; body size 11 bytes.
#line 1 "ENTRY_10a927d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a927d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a927e0; body size 11 bytes.
#line 1 "ENTRY_10a927e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a927e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a927f0; body size 11 bytes.
#line 1 "ENTRY_10a927f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a927f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a92800; body size 11 bytes.
#line 1 "ENTRY_10a92800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92800(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a92810; body size 11 bytes.
#line 1 "ENTRY_10a92810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a92820; body size 11 bytes.
#line 1 "ENTRY_10a92820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a92830; body size 11 bytes.
#line 1 "ENTRY_10a92830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a92840; body size 38 bytes.
#line 1 "ENTRY_10a92840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92840(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a92870; body size 21 bytes.
#line 1 "ENTRY_10a92870"

__declspec(naked) void FUN_10a92870(void)

{
  __asm mov dword ptr [LAB_121a476c], 0
  __asm mov dword ptr [ecx], LAB_118fa20c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a92890; body size 38 bytes.
#line 1 "ENTRY_10a92890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92890(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a928c0; body size 21 bytes.
#line 1 "ENTRY_10a928c0"

__declspec(naked) void FUN_10a928c0(void)

{
  __asm mov dword ptr [LAB_121a4764], 0
  __asm mov dword ptr [ecx], LAB_118fa184
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a928e0; body size 38 bytes.
#line 1 "ENTRY_10a928e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a928e0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a92910; body size 21 bytes.
#line 1 "ENTRY_10a92910"

__declspec(naked) void FUN_10a92910(void)

{
  __asm mov dword ptr [LAB_121a4760], 0
  __asm mov dword ptr [ecx], LAB_118fa140
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a929e0; body size 21 bytes.
#line 1 "ENTRY_10a929e0"

__declspec(naked) void FUN_10a929e0(void)

{
  __asm mov dword ptr [LAB_121a475c], 0
  __asm mov dword ptr [ecx], LAB_118fa0fc
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a92a50; body size 21 bytes.
#line 1 "ENTRY_10a92a50"

__declspec(naked) void FUN_10a92a50(void)

{
  __asm mov dword ptr [LAB_121a4770], 0
  __asm mov dword ptr [ecx], LAB_118fa24c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a92b20; body size 21 bytes.
#line 1 "ENTRY_10a92b20"

__declspec(naked) void FUN_10a92b20(void)

{
  __asm mov dword ptr [LAB_121a4768], 0
  __asm mov dword ptr [ecx], LAB_118fa1c8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a92b40; body size 38 bytes.
#line 1 "ENTRY_10a92b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a92b40(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a92b70; body size 21 bytes.
#line 1 "ENTRY_10a92b70"

__declspec(naked) void FUN_10a92b70(void)

{
  __asm mov dword ptr [LAB_121a4758], 0
  __asm mov dword ptr [ecx], LAB_118fa0b8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a92c80; body size 7 bytes.
#line 1 "ENTRY_10a92c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10a92c80(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10a99920; body size 6 bytes.
#line 1 "ENTRY_10a99920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99920(void)

{
  return (undefined4)(DAT_121a476c);
}


// Reference entry 10a99930; body size 6 bytes.
#line 1 "ENTRY_10a99930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99930(void)

{
  return (undefined4)(DAT_121a4764);
}


// Reference entry 10a99940; body size 6 bytes.
#line 1 "ENTRY_10a99940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99940(void)

{
  return (undefined4)(DAT_121a4760);
}


// Reference entry 10a99950; body size 6 bytes.
#line 1 "ENTRY_10a99950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99950(void)

{
  return (undefined4)(DAT_121a475c);
}


// Reference entry 10a99960; body size 6 bytes.
#line 1 "ENTRY_10a99960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99960(void)

{
  return (undefined4)(DAT_121a4770);
}


// Reference entry 10a99970; body size 6 bytes.
#line 1 "ENTRY_10a99970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99970(void)

{
  return (undefined4)(DAT_121a4768);
}


// Reference entry 10a99980; body size 6 bytes.
#line 1 "ENTRY_10a99980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99980(void)

{
  return (undefined4)(DAT_121a4758);
}


// Reference entry 10a99990; body size 6 bytes.
#line 1 "ENTRY_10a99990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a99990(void)

{
  return (undefined4)(DAT_121a4754);
}


// Reference entry 10a999b0; body size 5 bytes.
#line 1 "ENTRY_10a999b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a999b0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10a999c0; body size 5 bytes.
#line 1 "ENTRY_10a999c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a999c0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10a9a200; body size 6 bytes.
#line 1 "ENTRY_10a9a200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a200(void)

{
  return (undefined4)(DAT_121a47cc);
}


// Reference entry 10a9a210; body size 6 bytes.
#line 1 "ENTRY_10a9a210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a210(void)

{
  return (undefined4)(DAT_121a47d4);
}


// Reference entry 10a9a220; body size 6 bytes.
#line 1 "ENTRY_10a9a220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a220(void)

{
  return (undefined4)(DAT_121a47c0);
}


// Reference entry 10a9a230; body size 6 bytes.
#line 1 "ENTRY_10a9a230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a230(void)

{
  return (undefined4)(DAT_121a47c8);
}


// Reference entry 10a9a240; body size 6 bytes.
#line 1 "ENTRY_10a9a240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a240(void)

{
  return (undefined4)(DAT_121a47c4);
}


// Reference entry 10a9a250; body size 6 bytes.
#line 1 "ENTRY_10a9a250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10a9a250(void)

{
  return (undefined4)(DAT_121a47d0);
}


// Reference entry 10a9a270; body size 57 bytes.
#line 1 "ENTRY_10a9a270"

__declspec(naked) void FUN_10a9a270(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fad4c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fada8
  __asm mov dword ptr [esi + 0x8c], LAB_118fadb4
  __asm mov dword ptr [esi + 0xa8], LAB_118fadc0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a9a8a0; body size 57 bytes.
#line 1 "ENTRY_10a9a8a0"

__declspec(naked) void FUN_10a9a8a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fb0bc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fb118
  __asm mov dword ptr [esi + 0x8c], LAB_118fb124
  __asm mov dword ptr [esi + 0xa8], LAB_118fb130
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a9a9f0; body size 57 bytes.
#line 1 "ENTRY_10a9a9f0"

__declspec(naked) void FUN_10a9a9f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fb244
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fb2a0
  __asm mov dword ptr [esi + 0x8c], LAB_118fb2ac
  __asm mov dword ptr [esi + 0xa8], LAB_118fb2b8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a9ab40; body size 57 bytes.
#line 1 "ENTRY_10a9ab40"

__declspec(naked) void FUN_10a9ab40(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fade4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fae40
  __asm mov dword ptr [esi + 0x8c], LAB_118fae4c
  __asm mov dword ptr [esi + 0xa8], LAB_118fae58
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a9ac90; body size 147 bytes.
#line 1 "ENTRY_10a9ac90"

__declspec(naked) void FUN_10a9ac90(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fafdc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fb038
  __asm mov dword ptr [esi + 0x8c], LAB_118fb044
  __asm mov dword ptr [esi + 0xa8], LAB_118fb050
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x78 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf8 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a9ae50; body size 57 bytes.
#line 1 "ENTRY_10a9ae50"

__declspec(naked) void FUN_10a9ae50(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118faefc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118faf58
  __asm mov dword ptr [esi + 0x8c], LAB_118faf64
  __asm mov dword ptr [esi + 0xa8], LAB_118faf70
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a9afa0; body size 57 bytes.
#line 1 "ENTRY_10a9afa0"

__declspec(naked) void FUN_10a9afa0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fb170
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fb1cc
  __asm mov dword ptr [esi + 0x8c], LAB_118fb1d8
  __asm mov dword ptr [esi + 0xa8], LAB_118fb1e4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a9b0f0; body size 107 bytes.
#line 1 "ENTRY_10a9b0f0"

__declspec(naked) void FUN_10a9b0f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], LAB_118faad0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fab24
  __asm mov dword ptr [esi + 0x8c], LAB_118fab30
  __asm mov dword ptr [esi + 0xa8], LAB_118fab3c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0xf4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10a9b770; body size 38 bytes.
#line 1 "ENTRY_10a9b770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b770(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a9b7a0; body size 11 bytes.
#line 1 "ENTRY_10a9b7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a9b7b0; body size 11 bytes.
#line 1 "ENTRY_10a9b7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a9b7c0; body size 11 bytes.
#line 1 "ENTRY_10a9b7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a9b7d0; body size 11 bytes.
#line 1 "ENTRY_10a9b7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a9b7e0; body size 11 bytes.
#line 1 "ENTRY_10a9b7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a9b7f0; body size 11 bytes.
#line 1 "ENTRY_10a9b7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b7f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10a9b800; body size 38 bytes.
#line 1 "ENTRY_10a9b800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b800(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a9b830; body size 21 bytes.
#line 1 "ENTRY_10a9b830"

__declspec(naked) void FUN_10a9b830(void)

{
  __asm mov dword ptr [LAB_121a47cc], 0
  __asm mov dword ptr [ecx], LAB_118fac5c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a9b850; body size 38 bytes.
#line 1 "ENTRY_10a9b850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b850(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a9b880; body size 21 bytes.
#line 1 "ENTRY_10a9b880"

__declspec(naked) void FUN_10a9b880(void)

{
  __asm mov dword ptr [LAB_121a47d4], 0
  __asm mov dword ptr [ecx], LAB_118facf0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a9b8a0; body size 38 bytes.
#line 1 "ENTRY_10a9b8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b8a0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a9b8d0; body size 21 bytes.
#line 1 "ENTRY_10a9b8d0"

__declspec(naked) void FUN_10a9b8d0(void)

{
  __asm mov dword ptr [LAB_121a47c0], 0
  __asm mov dword ptr [ecx], LAB_118fab78
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a9b9b0; body size 21 bytes.
#line 1 "ENTRY_10a9b9b0"

__declspec(naked) void FUN_10a9b9b0(void)

{
  __asm mov dword ptr [LAB_121a47c8], 0
  __asm mov dword ptr [ecx], LAB_118fac0c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a9b9d0; body size 38 bytes.
#line 1 "ENTRY_10a9b9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9b9d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a9ba00; body size 21 bytes.
#line 1 "ENTRY_10a9ba00"

__declspec(naked) void FUN_10a9ba00(void)

{
  __asm mov dword ptr [LAB_121a47c4], 0
  __asm mov dword ptr [ecx], LAB_118fabbc
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a9ba20; body size 38 bytes.
#line 1 "ENTRY_10a9ba20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10a9ba20(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10a9ba50; body size 21 bytes.
#line 1 "ENTRY_10a9ba50"

__declspec(naked) void FUN_10a9ba50(void)

{
  __asm mov dword ptr [LAB_121a47d0], 0
  __asm mov dword ptr [ecx], LAB_118faca8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10a9bbf0; body size 14 bytes.
#line 1 "ENTRY_10a9bbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10a9bbf0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10a9f830; body size 7 bytes.
#line 1 "ENTRY_10a9f830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10a9f830(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xe8));
}


// Reference entry 10a9faf0; body size 23 bytes.
#line 1 "ENTRY_10a9faf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10a9faf0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf4));
  return (SCStr *)(param_2);
}


// Reference entry 10a9fb10; body size 28 bytes.
#line 1 "ENTRY_10a9fb10"

__declspec(naked) void FUN_10a9fb10(void)

{
  __asm mov ecx, dword ptr [ecx + 0xec]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10a9fdd0; body size 23 bytes.
#line 1 "ENTRY_10a9fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10a9fdd0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf8));
  return (SCStr *)(param_2);
}


// Reference entry 10aa1440; body size 6 bytes.
#line 1 "ENTRY_10aa1440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1440(void)

{
  return (undefined4)(DAT_121a47cc);
}


// Reference entry 10aa1450; body size 6 bytes.
#line 1 "ENTRY_10aa1450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1450(void)

{
  return (undefined4)(DAT_121a47d4);
}


// Reference entry 10aa1460; body size 6 bytes.
#line 1 "ENTRY_10aa1460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1460(void)

{
  return (undefined4)(DAT_121a47c0);
}


// Reference entry 10aa1470; body size 6 bytes.
#line 1 "ENTRY_10aa1470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1470(void)

{
  return (undefined4)(DAT_121a47c8);
}


// Reference entry 10aa1480; body size 6 bytes.
#line 1 "ENTRY_10aa1480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1480(void)

{
  return (undefined4)(DAT_121a47c4);
}


// Reference entry 10aa1490; body size 6 bytes.
#line 1 "ENTRY_10aa1490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa1490(void)

{
  return (undefined4)(DAT_121a47d0);
}


// Reference entry 10aa14a0; body size 6 bytes.
#line 1 "ENTRY_10aa14a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa14a0(void)

{
  return (undefined4)(DAT_121a47d8);
}


// Reference entry 10aa18b0; body size 5 bytes.
#line 1 "ENTRY_10aa18b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10aa18b0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10aa18c0; body size 5 bytes.
#line 1 "ENTRY_10aa18c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10aa18c0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10aa18d0; body size 7 bytes.
#line 1 "ENTRY_10aa18d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10aa18d0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10aa2710; body size 13 bytes.
#line 1 "ENTRY_10aa2710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10aa2710(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xe8) = (undefined4)(param_2);
  return;
}


// Reference entry 10aa2720; body size 39 bytes.
#line 1 "ENTRY_10aa2720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10aa2720(SCStr *param_2)
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


// Reference entry 10aa27d0; body size 39 bytes.
#line 1 "ENTRY_10aa27d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10aa27d0(SCStr *param_2)
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


// Reference entry 10aa2960; body size 6 bytes.
#line 1 "ENTRY_10aa2960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2960(void)

{
  return (undefined4)(DAT_121a4864);
}


// Reference entry 10aa2970; body size 6 bytes.
#line 1 "ENTRY_10aa2970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2970(void)

{
  return (undefined4)(DAT_121a4860);
}


// Reference entry 10aa2980; body size 6 bytes.
#line 1 "ENTRY_10aa2980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2980(void)

{
  return (undefined4)(DAT_121a482c);
}


// Reference entry 10aa2990; body size 6 bytes.
#line 1 "ENTRY_10aa2990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2990(void)

{
  return (undefined4)(DAT_121a4858);
}


// Reference entry 10aa29a0; body size 6 bytes.
#line 1 "ENTRY_10aa29a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29a0(void)

{
  return (undefined4)(DAT_121a4850);
}


// Reference entry 10aa29b0; body size 6 bytes.
#line 1 "ENTRY_10aa29b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29b0(void)

{
  return (undefined4)(DAT_121a4854);
}


// Reference entry 10aa29c0; body size 6 bytes.
#line 1 "ENTRY_10aa29c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29c0(void)

{
  return (undefined4)(DAT_121a484c);
}


// Reference entry 10aa29d0; body size 6 bytes.
#line 1 "ENTRY_10aa29d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29d0(void)

{
  return (undefined4)(DAT_121a4830);
}


// Reference entry 10aa29e0; body size 6 bytes.
#line 1 "ENTRY_10aa29e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29e0(void)

{
  return (undefined4)(DAT_121a4828);
}


// Reference entry 10aa29f0; body size 6 bytes.
#line 1 "ENTRY_10aa29f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa29f0(void)

{
  return (undefined4)(DAT_121a485c);
}


// Reference entry 10aa2a00; body size 6 bytes.
#line 1 "ENTRY_10aa2a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a00(void)

{
  return (undefined4)(DAT_121a4838);
}


// Reference entry 10aa2a10; body size 6 bytes.
#line 1 "ENTRY_10aa2a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a10(void)

{
  return (undefined4)(DAT_121a4834);
}


// Reference entry 10aa2a20; body size 6 bytes.
#line 1 "ENTRY_10aa2a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a20(void)

{
  return (undefined4)(DAT_121a4848);
}


// Reference entry 10aa2a30; body size 6 bytes.
#line 1 "ENTRY_10aa2a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a30(void)

{
  return (undefined4)(DAT_121a4840);
}


// Reference entry 10aa2a40; body size 6 bytes.
#line 1 "ENTRY_10aa2a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a40(void)

{
  return (undefined4)(DAT_121a4844);
}


// Reference entry 10aa2a50; body size 6 bytes.
#line 1 "ENTRY_10aa2a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aa2a50(void)

{
  return (undefined4)(DAT_121a483c);
}


// Reference entry 10aa2a70; body size 57 bytes.
#line 1 "ENTRY_10aa2a70"

__declspec(naked) void FUN_10aa2a70(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fb854
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fb8b0
  __asm mov dword ptr [esi + 0x8c], LAB_118fb8bc
  __asm mov dword ptr [esi + 0xa8], LAB_118fb8c8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa39c0; body size 118 bytes.
#line 1 "ENTRY_10aa39c0"

__declspec(naked) void FUN_10aa39c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [esi], LAB_118fc624
  __asm mov dword ptr [esi + 0x10], LAB_118fc680
  __asm mov dword ptr [esi + 0x8c], LAB_118fc68c
  __asm mov dword ptr [esi + 0xa8], LAB_118fc698
  __asm movups xmmword ptr [esi + 0xe0], xmm0
  __asm mov eax, dword ptr [LAB_12119c10]
  __asm mov dword ptr [esi + 0xf0], eax
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa3b60; body size 57 bytes.
#line 1 "ENTRY_10aa3b60"

__declspec(naked) void FUN_10aa3b60(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fc470
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fc4cc
  __asm mov dword ptr [esi + 0x8c], LAB_118fc4d8
  __asm mov dword ptr [esi + 0xa8], LAB_118fc4e4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa3cb0; body size 64 bytes.
#line 1 "ENTRY_10aa3cb0"

__declspec(naked) void FUN_10aa3cb0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fba58
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fbab4
  __asm mov dword ptr [esi + 0x8c], LAB_118fbac0
  __asm mov dword ptr [esi + 0xa8], LAB_118fbacc
  __asm mov byte ptr [esi + 0xe0], 1
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa3e00; body size 57 bytes.
#line 1 "ENTRY_10aa3e00"

__declspec(naked) void FUN_10aa3e00(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fc2b0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fc30c
  __asm mov dword ptr [esi + 0x8c], LAB_118fc318
  __asm mov dword ptr [esi + 0xa8], LAB_118fc324
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa3f50; body size 57 bytes.
#line 1 "ENTRY_10aa3f50"

__declspec(naked) void FUN_10aa3f50(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fc148
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fc1a4
  __asm mov dword ptr [esi + 0x8c], LAB_118fc1b0
  __asm mov dword ptr [esi + 0xa8], LAB_118fc1bc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa40a0; body size 57 bytes.
#line 1 "ENTRY_10aa40a0"

__declspec(naked) void FUN_10aa40a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fc1fc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fc258
  __asm mov dword ptr [esi + 0x8c], LAB_118fc264
  __asm mov dword ptr [esi + 0xa8], LAB_118fc270
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa41f0; body size 57 bytes.
#line 1 "ENTRY_10aa41f0"

__declspec(naked) void FUN_10aa41f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fc098
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fc0f4
  __asm mov dword ptr [esi + 0x8c], LAB_118fc100
  __asm mov dword ptr [esi + 0xa8], LAB_118fc10c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa4340; body size 64 bytes.
#line 1 "ENTRY_10aa4340"

__declspec(naked) void FUN_10aa4340(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fbb3c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fbb98
  __asm mov dword ptr [esi + 0x8c], LAB_118fbba4
  __asm mov dword ptr [esi + 0xa8], LAB_118fbbb0
  __asm mov byte ptr [esi + 0xe0], 1
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa4490; body size 57 bytes.
#line 1 "ENTRY_10aa4490"

__declspec(naked) void FUN_10aa4490(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fb8ec
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fb948
  __asm mov dword ptr [esi + 0x8c], LAB_118fb954
  __asm mov dword ptr [esi + 0xa8], LAB_118fb960
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa45e0; body size 68 bytes.
#line 1 "ENTRY_10aa45e0"

__declspec(naked) void FUN_10aa45e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [esi], LAB_118fc368
  __asm mov dword ptr [esi + 0x10], LAB_118fc3c4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x8c], LAB_118fc3d0
  __asm mov dword ptr [esi + 0xa8], LAB_118fc3dc
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa4740; body size 57 bytes.
#line 1 "ENTRY_10aa4740"

__declspec(naked) void FUN_10aa4740(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fbd00
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fbd5c
  __asm mov dword ptr [esi + 0x8c], LAB_118fbd68
  __asm mov dword ptr [esi + 0xa8], LAB_118fbd74
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa4890; body size 57 bytes.
#line 1 "ENTRY_10aa4890"

__declspec(naked) void FUN_10aa4890(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fbc18
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fbc74
  __asm mov dword ptr [esi + 0x8c], LAB_118fbc80
  __asm mov dword ptr [esi + 0xa8], LAB_118fbc8c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa49e0; body size 57 bytes.
#line 1 "ENTRY_10aa49e0"

__declspec(naked) void FUN_10aa49e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fbfe0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fc03c
  __asm mov dword ptr [esi + 0x8c], LAB_118fc048
  __asm mov dword ptr [esi + 0xa8], LAB_118fc054
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa4b30; body size 57 bytes.
#line 1 "ENTRY_10aa4b30"

__declspec(naked) void FUN_10aa4b30(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fbe78
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fbed4
  __asm mov dword ptr [esi + 0x8c], LAB_118fbee0
  __asm mov dword ptr [esi + 0xa8], LAB_118fbeec
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa4c80; body size 57 bytes.
#line 1 "ENTRY_10aa4c80"

__declspec(naked) void FUN_10aa4c80(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fbf2c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fbf88
  __asm mov dword ptr [esi + 0x8c], LAB_118fbf94
  __asm mov dword ptr [esi + 0xa8], LAB_118fbfa0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa4dd0; body size 57 bytes.
#line 1 "ENTRY_10aa4dd0"

__declspec(naked) void FUN_10aa4dd0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fbdc8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fbe24
  __asm mov dword ptr [esi + 0x8c], LAB_118fbe30
  __asm mov dword ptr [esi + 0xa8], LAB_118fbe3c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa4f20; body size 57 bytes.
#line 1 "ENTRY_10aa4f20"

__declspec(naked) void FUN_10aa4f20(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], LAB_118fb2f4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fb348
  __asm mov dword ptr [esi + 0x8c], LAB_118fb354
  __asm mov dword ptr [esi + 0xa8], LAB_118fb360
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aa5e10; body size 38 bytes.
#line 1 "ENTRY_10aa5e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e10(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa5e40; body size 11 bytes.
#line 1 "ENTRY_10aa5e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5e50; body size 11 bytes.
#line 1 "ENTRY_10aa5e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5e60; body size 11 bytes.
#line 1 "ENTRY_10aa5e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5e70; body size 11 bytes.
#line 1 "ENTRY_10aa5e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5e80; body size 11 bytes.
#line 1 "ENTRY_10aa5e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5e90; body size 11 bytes.
#line 1 "ENTRY_10aa5e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5e90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5ea0; body size 11 bytes.
#line 1 "ENTRY_10aa5ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5eb0; body size 11 bytes.
#line 1 "ENTRY_10aa5eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5ec0; body size 11 bytes.
#line 1 "ENTRY_10aa5ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5ed0; body size 11 bytes.
#line 1 "ENTRY_10aa5ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5ee0; body size 11 bytes.
#line 1 "ENTRY_10aa5ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5ee0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5ef0; body size 11 bytes.
#line 1 "ENTRY_10aa5ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5f00; body size 11 bytes.
#line 1 "ENTRY_10aa5f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5f10; body size 11 bytes.
#line 1 "ENTRY_10aa5f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5f20; body size 11 bytes.
#line 1 "ENTRY_10aa5f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5f30; body size 11 bytes.
#line 1 "ENTRY_10aa5f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aa5f40; body size 38 bytes.
#line 1 "ENTRY_10aa5f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f40(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa5f70; body size 21 bytes.
#line 1 "ENTRY_10aa5f70"

__declspec(naked) void FUN_10aa5f70(void)

{
  __asm mov dword ptr [LAB_121a4864], 0
  __asm mov dword ptr [ecx], LAB_118fb7ec
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa5f90; body size 38 bytes.
#line 1 "ENTRY_10aa5f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5f90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa5fc0; body size 21 bytes.
#line 1 "ENTRY_10aa5fc0"

__declspec(naked) void FUN_10aa5fc0(void)

{
  __asm mov dword ptr [LAB_121a4860], 0
  __asm mov dword ptr [ecx], LAB_118fb798
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa5fe0; body size 38 bytes.
#line 1 "ENTRY_10aa5fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa5fe0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa6010; body size 21 bytes.
#line 1 "ENTRY_10aa6010"

__declspec(naked) void FUN_10aa6010(void)

{
  __asm mov dword ptr [LAB_121a482c], 0
  __asm mov dword ptr [ecx], LAB_118fb3e4
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa6030; body size 38 bytes.
#line 1 "ENTRY_10aa6030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6030(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa6060; body size 21 bytes.
#line 1 "ENTRY_10aa6060"

__declspec(naked) void FUN_10aa6060(void)

{
  __asm mov dword ptr [LAB_121a4858], 0
  __asm mov dword ptr [ecx], LAB_118fb700
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa6080; body size 38 bytes.
#line 1 "ENTRY_10aa6080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6080(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa60b0; body size 21 bytes.
#line 1 "ENTRY_10aa60b0"

__declspec(naked) void FUN_10aa60b0(void)

{
  __asm mov dword ptr [LAB_121a4850], 0
  __asm mov dword ptr [ecx], LAB_118fb668
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa60d0; body size 38 bytes.
#line 1 "ENTRY_10aa60d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa60d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa6100; body size 21 bytes.
#line 1 "ENTRY_10aa6100"

__declspec(naked) void FUN_10aa6100(void)

{
  __asm mov dword ptr [LAB_121a4854], 0
  __asm mov dword ptr [ecx], LAB_118fb6b4
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa6120; body size 38 bytes.
#line 1 "ENTRY_10aa6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6120(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa6150; body size 21 bytes.
#line 1 "ENTRY_10aa6150"

__declspec(naked) void FUN_10aa6150(void)

{
  __asm mov dword ptr [LAB_121a484c], 0
  __asm mov dword ptr [ecx], LAB_118fb620
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa6170; body size 38 bytes.
#line 1 "ENTRY_10aa6170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6170(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa61a0; body size 21 bytes.
#line 1 "ENTRY_10aa61a0"

__declspec(naked) void FUN_10aa61a0(void)

{
  __asm mov dword ptr [LAB_121a4830], 0
  __asm mov dword ptr [ecx], LAB_118fb428
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa61c0; body size 38 bytes.
#line 1 "ENTRY_10aa61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa61c0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa61f0; body size 21 bytes.
#line 1 "ENTRY_10aa61f0"

__declspec(naked) void FUN_10aa61f0(void)

{
  __asm mov dword ptr [LAB_121a4828], 0
  __asm mov dword ptr [ecx], LAB_118fb39c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa6210; body size 38 bytes.
#line 1 "ENTRY_10aa6210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6210(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa6240; body size 21 bytes.
#line 1 "ENTRY_10aa6240"

__declspec(naked) void FUN_10aa6240(void)

{
  __asm mov dword ptr [LAB_121a485c], 0
  __asm mov dword ptr [ecx], LAB_118fb74c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa6260; body size 38 bytes.
#line 1 "ENTRY_10aa6260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6260(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa6290; body size 21 bytes.
#line 1 "ENTRY_10aa6290"

__declspec(naked) void FUN_10aa6290(void)

{
  __asm mov dword ptr [LAB_121a4838], 0
  __asm mov dword ptr [ecx], LAB_118fb4b0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa62b0; body size 38 bytes.
#line 1 "ENTRY_10aa62b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa62b0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa62e0; body size 21 bytes.
#line 1 "ENTRY_10aa62e0"

__declspec(naked) void FUN_10aa62e0(void)

{
  __asm mov dword ptr [LAB_121a4834], 0
  __asm mov dword ptr [ecx], LAB_118fb46c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa6300; body size 38 bytes.
#line 1 "ENTRY_10aa6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6300(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa6330; body size 21 bytes.
#line 1 "ENTRY_10aa6330"

__declspec(naked) void FUN_10aa6330(void)

{
  __asm mov dword ptr [LAB_121a4848], 0
  __asm mov dword ptr [ecx], LAB_118fb5d4
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa6350; body size 38 bytes.
#line 1 "ENTRY_10aa6350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6350(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa6380; body size 21 bytes.
#line 1 "ENTRY_10aa6380"

__declspec(naked) void FUN_10aa6380(void)

{
  __asm mov dword ptr [LAB_121a4840], 0
  __asm mov dword ptr [ecx], LAB_118fb53c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa63a0; body size 38 bytes.
#line 1 "ENTRY_10aa63a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa63a0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa63d0; body size 21 bytes.
#line 1 "ENTRY_10aa63d0"

__declspec(naked) void FUN_10aa63d0(void)

{
  __asm mov dword ptr [LAB_121a4844], 0
  __asm mov dword ptr [ecx], LAB_118fb588
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa63f0; body size 38 bytes.
#line 1 "ENTRY_10aa63f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa63f0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aa6420; body size 21 bytes.
#line 1 "ENTRY_10aa6420"

__declspec(naked) void FUN_10aa6420(void)

{
  __asm mov dword ptr [LAB_121a483c], 0
  __asm mov dword ptr [ecx], LAB_118fb4f4
  __asm jmp LAB_1003c4f2
}




// Reference entry 10aa6440; body size 5 bytes.
#line 1 "ENTRY_10aa6440"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aa6440(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10ab2480; body size 6 bytes.
#line 1 "ENTRY_10ab2480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2480(void)

{
  return (undefined4)(DAT_121a4864);
}


// Reference entry 10ab2490; body size 6 bytes.
#line 1 "ENTRY_10ab2490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2490(void)

{
  return (undefined4)(DAT_121a4860);
}


// Reference entry 10ab24a0; body size 6 bytes.
#line 1 "ENTRY_10ab24a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24a0(void)

{
  return (undefined4)(DAT_121a482c);
}


// Reference entry 10ab24b0; body size 6 bytes.
#line 1 "ENTRY_10ab24b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24b0(void)

{
  return (undefined4)(DAT_121a4858);
}


// Reference entry 10ab24c0; body size 6 bytes.
#line 1 "ENTRY_10ab24c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24c0(void)

{
  return (undefined4)(DAT_121a4850);
}


// Reference entry 10ab24d0; body size 6 bytes.
#line 1 "ENTRY_10ab24d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24d0(void)

{
  return (undefined4)(DAT_121a4854);
}


// Reference entry 10ab24e0; body size 6 bytes.
#line 1 "ENTRY_10ab24e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24e0(void)

{
  return (undefined4)(DAT_121a484c);
}


// Reference entry 10ab24f0; body size 6 bytes.
#line 1 "ENTRY_10ab24f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab24f0(void)

{
  return (undefined4)(DAT_121a4830);
}


// Reference entry 10ab2500; body size 6 bytes.
#line 1 "ENTRY_10ab2500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2500(void)

{
  return (undefined4)(DAT_121a4828);
}


// Reference entry 10ab2510; body size 6 bytes.
#line 1 "ENTRY_10ab2510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2510(void)

{
  return (undefined4)(DAT_121a485c);
}


// Reference entry 10ab2520; body size 6 bytes.
#line 1 "ENTRY_10ab2520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2520(void)

{
  return (undefined4)(DAT_121a4838);
}


// Reference entry 10ab2530; body size 6 bytes.
#line 1 "ENTRY_10ab2530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2530(void)

{
  return (undefined4)(DAT_121a4834);
}


// Reference entry 10ab2540; body size 6 bytes.
#line 1 "ENTRY_10ab2540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2540(void)

{
  return (undefined4)(DAT_121a4848);
}


// Reference entry 10ab2550; body size 6 bytes.
#line 1 "ENTRY_10ab2550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2550(void)

{
  return (undefined4)(DAT_121a4840);
}


// Reference entry 10ab2560; body size 6 bytes.
#line 1 "ENTRY_10ab2560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2560(void)

{
  return (undefined4)(DAT_121a4844);
}


// Reference entry 10ab2570; body size 6 bytes.
#line 1 "ENTRY_10ab2570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2570(void)

{
  return (undefined4)(DAT_121a483c);
}


// Reference entry 10ab2580; body size 6 bytes.
#line 1 "ENTRY_10ab2580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2580(void)

{
  return (undefined4)(DAT_121a4824);
}


// Reference entry 10ab2ed0; body size 6 bytes.
#line 1 "ENTRY_10ab2ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab2ed0(void)

{
  return (undefined4)(DAT_121a48b4);
}


// Reference entry 10ab2ef0; body size 57 bytes.
#line 1 "ENTRY_10ab2ef0"

__declspec(naked) void FUN_10ab2ef0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fc9d8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fca34
  __asm mov dword ptr [esi + 0x8c], LAB_118fca40
  __asm mov dword ptr [esi + 0xa8], LAB_118fca4c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab3030; body size 57 bytes.
#line 1 "ENTRY_10ab3030"

__declspec(naked) void FUN_10ab3030(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fca70
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fcacc
  __asm mov dword ptr [esi + 0x8c], LAB_118fcad8
  __asm mov dword ptr [esi + 0xa8], LAB_118fcae4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab3180; body size 57 bytes.
#line 1 "ENTRY_10ab3180"

__declspec(naked) void FUN_10ab3180(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], LAB_118fc8c8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fc91c
  __asm mov dword ptr [esi + 0x8c], LAB_118fc928
  __asm mov dword ptr [esi + 0xa8], LAB_118fc934
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab3360; body size 38 bytes.
#line 1 "ENTRY_10ab3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab3360(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10ab3390; body size 11 bytes.
#line 1 "ENTRY_10ab3390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab3390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10ab33a0; body size 38 bytes.
#line 1 "ENTRY_10ab33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab33a0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10ab33d0; body size 21 bytes.
#line 1 "ENTRY_10ab33d0"

__declspec(naked) void FUN_10ab33d0(void)

{
  __asm mov dword ptr [LAB_121a48b4], 0
  __asm mov dword ptr [ecx], LAB_118fc970
  __asm jmp LAB_1003c4f2
}




// Reference entry 10ab33f0; body size 5 bytes.
#line 1 "ENTRY_10ab33f0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab33f0(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10ab3ef0; body size 6 bytes.
#line 1 "ENTRY_10ab3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab3ef0(void)

{
  return (undefined4)(DAT_121a48b4);
}


// Reference entry 10ab3f00; body size 6 bytes.
#line 1 "ENTRY_10ab3f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab3f00(void)

{
  return (undefined4)(DAT_121a48b8);
}


// Reference entry 10ab3f40; body size 6 bytes.
#line 1 "ENTRY_10ab3f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab3f40(void)

{
  return (undefined4)(DAT_121a48cc);
}


// Reference entry 10ab3f50; body size 6 bytes.
#line 1 "ENTRY_10ab3f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab3f50(void)

{
  return (undefined4)(DAT_121a48d0);
}


// Reference entry 10ab3f70; body size 57 bytes.
#line 1 "ENTRY_10ab3f70"

__declspec(naked) void FUN_10ab3f70(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fcd88
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fcde4
  __asm mov dword ptr [esi + 0x8c], LAB_118fcdf0
  __asm mov dword ptr [esi + 0xa8], LAB_118fcdfc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab41a0; body size 57 bytes.
#line 1 "ENTRY_10ab41a0"

__declspec(naked) void FUN_10ab41a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fce20
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fce7c
  __asm mov dword ptr [esi + 0x8c], LAB_118fce88
  __asm mov dword ptr [esi + 0xa8], LAB_118fce94
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab42f0; body size 57 bytes.
#line 1 "ENTRY_10ab42f0"

__declspec(naked) void FUN_10ab42f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fcec0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fcf1c
  __asm mov dword ptr [esi + 0x8c], LAB_118fcf28
  __asm mov dword ptr [esi + 0xa8], LAB_118fcf34
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab4780; body size 38 bytes.
#line 1 "ENTRY_10ab4780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab4780(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10ab47b0; body size 11 bytes.
#line 1 "ENTRY_10ab47b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab47b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10ab47c0; body size 11 bytes.
#line 1 "ENTRY_10ab47c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab47c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10ab47d0; body size 38 bytes.
#line 1 "ENTRY_10ab47d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab47d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10ab4800; body size 21 bytes.
#line 1 "ENTRY_10ab4800"

__declspec(naked) void FUN_10ab4800(void)

{
  __asm mov dword ptr [LAB_121a48cc], 0
  __asm mov dword ptr [ecx], LAB_118fcc00
  __asm jmp LAB_1003c4f2
}




// Reference entry 10ab4820; body size 38 bytes.
#line 1 "ENTRY_10ab4820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab4820(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10ab4850; body size 21 bytes.
#line 1 "ENTRY_10ab4850"

__declspec(naked) void FUN_10ab4850(void)

{
  __asm mov dword ptr [LAB_121a48d0], 0
  __asm mov dword ptr [ecx], LAB_118fcc3c
  __asm jmp LAB_1003c4f2
}




// Reference entry 10ab4870; body size 5 bytes.
#line 1 "ENTRY_10ab4870"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab4870(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10ab5f50; body size 6 bytes.
#line 1 "ENTRY_10ab5f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab5f50(void)

{
  return (undefined4)(DAT_121a48cc);
}


// Reference entry 10ab5f60; body size 6 bytes.
#line 1 "ENTRY_10ab5f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab5f60(void)

{
  return (undefined4)(DAT_121a48d0);
}


// Reference entry 10ab5f70; body size 6 bytes.
#line 1 "ENTRY_10ab5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab5f70(void)

{
  return (undefined4)(DAT_121a48d4);
}


// Reference entry 10ab5fc0; body size 7 bytes.
#line 1 "ENTRY_10ab5fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ab5fc0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xe9));
}


// Reference entry 10ab5fd0; body size 7 bytes.
#line 1 "ENTRY_10ab5fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ab5fd0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xe8));
}


// Reference entry 10ab6090; body size 57 bytes.
#line 1 "ENTRY_10ab6090"

__declspec(naked) void FUN_10ab6090(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], LAB_118fcf80
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fcfd4
  __asm mov dword ptr [esi + 0x8c], LAB_118fcfe0
  __asm mov dword ptr [esi + 0xa8], LAB_118fcfec
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab6180; body size 5 bytes.
#line 1 "ENTRY_10ab6180"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab6180(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10ab6190; body size 11 bytes.
#line 1 "ENTRY_10ab6190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ab6190(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHapticWizardType);

  thunk_FUN_106de840(param_1);

}


// Reference entry 10ab6370; body size 6 bytes.
#line 1 "ENTRY_10ab6370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6370(void)

{
  return (undefined4)(DAT_121a48f4);
}


// Reference entry 10ab63a0; body size 6 bytes.
#line 1 "ENTRY_10ab63a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63a0(void)

{
  return (undefined4)(DAT_121a4938);
}


// Reference entry 10ab63b0; body size 6 bytes.
#line 1 "ENTRY_10ab63b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63b0(void)

{
  return (undefined4)(DAT_121a4974);
}


// Reference entry 10ab63c0; body size 6 bytes.
#line 1 "ENTRY_10ab63c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63c0(void)

{
  return (undefined4)(DAT_121a4980);
}


// Reference entry 10ab63d0; body size 6 bytes.
#line 1 "ENTRY_10ab63d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63d0(void)

{
  return (undefined4)(DAT_121a4978);
}


// Reference entry 10ab63e0; body size 6 bytes.
#line 1 "ENTRY_10ab63e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63e0(void)

{
  return (undefined4)(DAT_121a4984);
}


// Reference entry 10ab63f0; body size 6 bytes.
#line 1 "ENTRY_10ab63f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab63f0(void)

{
  return (undefined4)(DAT_121a4988);
}


// Reference entry 10ab6400; body size 6 bytes.
#line 1 "ENTRY_10ab6400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6400(void)

{
  return (undefined4)(DAT_121a497c);
}


// Reference entry 10ab6410; body size 6 bytes.
#line 1 "ENTRY_10ab6410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6410(void)

{
  return (undefined4)(DAT_121a499c);
}


// Reference entry 10ab6420; body size 6 bytes.
#line 1 "ENTRY_10ab6420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6420(void)

{
  return (undefined4)(DAT_121a4998);
}


// Reference entry 10ab6430; body size 6 bytes.
#line 1 "ENTRY_10ab6430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6430(void)

{
  return (undefined4)(DAT_121a4994);
}


// Reference entry 10ab6440; body size 6 bytes.
#line 1 "ENTRY_10ab6440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6440(void)

{
  return (undefined4)(DAT_121a4990);
}


// Reference entry 10ab6450; body size 6 bytes.
#line 1 "ENTRY_10ab6450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6450(void)

{
  return (undefined4)(DAT_121a498c);
}


// Reference entry 10ab6460; body size 6 bytes.
#line 1 "ENTRY_10ab6460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6460(void)

{
  return (undefined4)(DAT_121a4918);
}


// Reference entry 10ab6470; body size 6 bytes.
#line 1 "ENTRY_10ab6470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6470(void)

{
  return (undefined4)(DAT_121a4924);
}


// Reference entry 10ab6480; body size 6 bytes.
#line 1 "ENTRY_10ab6480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6480(void)

{
  return (undefined4)(DAT_121a4920);
}


// Reference entry 10ab6490; body size 6 bytes.
#line 1 "ENTRY_10ab6490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6490(void)

{
  return (undefined4)(DAT_121a491c);
}


// Reference entry 10ab64a0; body size 6 bytes.
#line 1 "ENTRY_10ab64a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64a0(void)

{
  return (undefined4)(DAT_121a4910);
}


// Reference entry 10ab64b0; body size 6 bytes.
#line 1 "ENTRY_10ab64b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64b0(void)

{
  return (undefined4)(DAT_121a4914);
}


// Reference entry 10ab64c0; body size 6 bytes.
#line 1 "ENTRY_10ab64c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64c0(void)

{
  return (undefined4)(DAT_121a4940);
}


// Reference entry 10ab64d0; body size 6 bytes.
#line 1 "ENTRY_10ab64d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64d0(void)

{
  return (undefined4)(DAT_121a4944);
}


// Reference entry 10ab64e0; body size 6 bytes.
#line 1 "ENTRY_10ab64e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64e0(void)

{
  return (undefined4)(DAT_121a4948);
}


// Reference entry 10ab64f0; body size 6 bytes.
#line 1 "ENTRY_10ab64f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab64f0(void)

{
  return (undefined4)(DAT_121a4968);
}


// Reference entry 10ab6500; body size 6 bytes.
#line 1 "ENTRY_10ab6500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6500(void)

{
  return (undefined4)(DAT_121a495c);
}


// Reference entry 10ab6510; body size 6 bytes.
#line 1 "ENTRY_10ab6510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6510(void)

{
  return (undefined4)(DAT_121a4964);
}


// Reference entry 10ab6520; body size 6 bytes.
#line 1 "ENTRY_10ab6520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6520(void)

{
  return (undefined4)(DAT_121a4960);
}


// Reference entry 10ab6530; body size 6 bytes.
#line 1 "ENTRY_10ab6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6530(void)

{
  return (undefined4)(DAT_121a496c);
}


// Reference entry 10ab6540; body size 6 bytes.
#line 1 "ENTRY_10ab6540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6540(void)

{
  return (undefined4)(DAT_121a4970);
}


// Reference entry 10ab6550; body size 6 bytes.
#line 1 "ENTRY_10ab6550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6550(void)

{
  return (undefined4)(DAT_121a4934);
}


// Reference entry 10ab6560; body size 6 bytes.
#line 1 "ENTRY_10ab6560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6560(void)

{
  return (undefined4)(DAT_121a4930);
}


// Reference entry 10ab6570; body size 6 bytes.
#line 1 "ENTRY_10ab6570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6570(void)

{
  return (undefined4)(DAT_121a493c);
}


// Reference entry 10ab6580; body size 6 bytes.
#line 1 "ENTRY_10ab6580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6580(void)

{
  return (undefined4)(DAT_121a4950);
}


// Reference entry 10ab6590; body size 6 bytes.
#line 1 "ENTRY_10ab6590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab6590(void)

{
  return (undefined4)(DAT_121a494c);
}


// Reference entry 10ab65a0; body size 6 bytes.
#line 1 "ENTRY_10ab65a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab65a0(void)

{
  return (undefined4)(DAT_121a4958);
}


// Reference entry 10ab65b0; body size 6 bytes.
#line 1 "ENTRY_10ab65b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab65b0(void)

{
  return (undefined4)(DAT_121a490c);
}


// Reference entry 10ab65c0; body size 6 bytes.
#line 1 "ENTRY_10ab65c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab65c0(void)

{
  return (undefined4)(DAT_121a4928);
}


// Reference entry 10ab65d0; body size 6 bytes.
#line 1 "ENTRY_10ab65d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab65d0(void)

{
  return (undefined4)(DAT_121a492c);
}


// Reference entry 10ab65e0; body size 6 bytes.
#line 1 "ENTRY_10ab65e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ab65e0(void)

{
  return (undefined4)(DAT_121a4954);
}


// Reference entry 10ab6600; body size 57 bytes.
#line 1 "ENTRY_10ab6600"

__declspec(naked) void FUN_10ab6600(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fdc1c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fdc78
  __asm mov dword ptr [esi + 0x8c], LAB_118fdc84
  __asm mov dword ptr [esi + 0xa8], LAB_118fdc90
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab8900; body size 57 bytes.
#line 1 "ENTRY_10ab8900"

__declspec(naked) void FUN_10ab8900(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fefd0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ff02c
  __asm mov dword ptr [esi + 0x8c], LAB_118ff038
  __asm mov dword ptr [esi + 0xa8], LAB_118ff044
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab8a50; body size 57 bytes.
#line 1 "ENTRY_10ab8a50"

__declspec(naked) void FUN_10ab8a50(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_11900108
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_11900164
  __asm mov dword ptr [esi + 0x8c], LAB_11900170
  __asm mov dword ptr [esi + 0xa8], LAB_1190017c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab8ba0; body size 57 bytes.
#line 1 "ENTRY_10ab8ba0"

__declspec(naked) void FUN_10ab8ba0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_11900400
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_1190045c
  __asm mov dword ptr [esi + 0x8c], LAB_11900468
  __asm mov dword ptr [esi + 0xa8], LAB_11900474
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab8cf0; body size 57 bytes.
#line 1 "ENTRY_10ab8cf0"

__declspec(naked) void FUN_10ab8cf0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_11900268
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_119002c4
  __asm mov dword ptr [esi + 0x8c], LAB_119002d0
  __asm mov dword ptr [esi + 0xa8], LAB_119002dc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab8e40; body size 57 bytes.
#line 1 "ENTRY_10ab8e40"

__declspec(naked) void FUN_10ab8e40(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_11900520
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_1190057c
  __asm mov dword ptr [esi + 0x8c], LAB_11900588
  __asm mov dword ptr [esi + 0xa8], LAB_11900594
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab8f90; body size 57 bytes.
#line 1 "ENTRY_10ab8f90"

__declspec(naked) void FUN_10ab8f90(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_119005dc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_11900638
  __asm mov dword ptr [esi + 0x8c], LAB_11900644
  __asm mov dword ptr [esi + 0xa8], LAB_11900650
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab90e0; body size 57 bytes.
#line 1 "ENTRY_10ab90e0"

__declspec(naked) void FUN_10ab90e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_11900328
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_11900384
  __asm mov dword ptr [esi + 0x8c], LAB_11900390
  __asm mov dword ptr [esi + 0xa8], LAB_1190039c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab9230; body size 57 bytes.
#line 1 "ENTRY_10ab9230"

__declspec(naked) void FUN_10ab9230(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_11900b8c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_11900be8
  __asm mov dword ptr [esi + 0x8c], LAB_11900bf4
  __asm mov dword ptr [esi + 0xa8], LAB_11900c00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab9380; body size 57 bytes.
#line 1 "ENTRY_10ab9380"

__declspec(naked) void FUN_10ab9380(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_11900a38
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_11900a94
  __asm mov dword ptr [esi + 0x8c], LAB_11900aa0
  __asm mov dword ptr [esi + 0xa8], LAB_11900aac
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab94d0; body size 57 bytes.
#line 1 "ENTRY_10ab94d0"

__declspec(naked) void FUN_10ab94d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_1190093c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_11900998
  __asm mov dword ptr [esi + 0x8c], LAB_119009a4
  __asm mov dword ptr [esi + 0xa8], LAB_119009b0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab9620; body size 57 bytes.
#line 1 "ENTRY_10ab9620"

__declspec(naked) void FUN_10ab9620(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_119007cc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_11900828
  __asm mov dword ptr [esi + 0x8c], LAB_11900834
  __asm mov dword ptr [esi + 0xa8], LAB_11900840
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab9770; body size 57 bytes.
#line 1 "ENTRY_10ab9770"

__declspec(naked) void FUN_10ab9770(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_119006bc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_11900718
  __asm mov dword ptr [esi + 0x8c], LAB_11900724
  __asm mov dword ptr [esi + 0xa8], LAB_11900730
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab98c0; body size 57 bytes.
#line 1 "ENTRY_10ab98c0"

__declspec(naked) void FUN_10ab98c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fe39c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fe3f8
  __asm mov dword ptr [esi + 0x8c], LAB_118fe404
  __asm mov dword ptr [esi + 0xa8], LAB_118fe410
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab9a10; body size 57 bytes.
#line 1 "ENTRY_10ab9a10"

__declspec(naked) void FUN_10ab9a10(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fe71c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fe778
  __asm mov dword ptr [esi + 0x8c], LAB_118fe784
  __asm mov dword ptr [esi + 0xa8], LAB_118fe790
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab9b60; body size 57 bytes.
#line 1 "ENTRY_10ab9b60"

__declspec(naked) void FUN_10ab9b60(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fe5ac
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fe608
  __asm mov dword ptr [esi + 0x8c], LAB_118fe614
  __asm mov dword ptr [esi + 0xa8], LAB_118fe620
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab9cb0; body size 57 bytes.
#line 1 "ENTRY_10ab9cb0"

__declspec(naked) void FUN_10ab9cb0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fe4e0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fe53c
  __asm mov dword ptr [esi + 0x8c], LAB_118fe548
  __asm mov dword ptr [esi + 0xa8], LAB_118fe554
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab9e00; body size 57 bytes.
#line 1 "ENTRY_10ab9e00"

__declspec(naked) void FUN_10ab9e00(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fdfac
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fe008
  __asm mov dword ptr [esi + 0x8c], LAB_118fe014
  __asm mov dword ptr [esi + 0xa8], LAB_118fe020
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10ab9f50; body size 57 bytes.
#line 1 "ENTRY_10ab9f50"

__declspec(naked) void FUN_10ab9f50(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fe184
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fe1e0
  __asm mov dword ptr [esi + 0x8c], LAB_118fe1ec
  __asm mov dword ptr [esi + 0xa8], LAB_118fe1f8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aba0a0; body size 57 bytes.
#line 1 "ENTRY_10aba0a0"

__declspec(naked) void FUN_10aba0a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ff26c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ff2c8
  __asm mov dword ptr [esi + 0x8c], LAB_118ff2d4
  __asm mov dword ptr [esi + 0xa8], LAB_118ff2e0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aba1f0; body size 57 bytes.
#line 1 "ENTRY_10aba1f0"

__declspec(naked) void FUN_10aba1f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ff364
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ff3c0
  __asm mov dword ptr [esi + 0x8c], LAB_118ff3cc
  __asm mov dword ptr [esi + 0xa8], LAB_118ff3d8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aba340; body size 57 bytes.
#line 1 "ENTRY_10aba340"

__declspec(naked) void FUN_10aba340(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ff42c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ff488
  __asm mov dword ptr [esi + 0x8c], LAB_118ff494
  __asm mov dword ptr [esi + 0xa8], LAB_118ff4a0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aba490; body size 57 bytes.
#line 1 "ENTRY_10aba490"

__declspec(naked) void FUN_10aba490(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ffba8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ffc04
  __asm mov dword ptr [esi + 0x8c], LAB_118ffc10
  __asm mov dword ptr [esi + 0xa8], LAB_118ffc1c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aba5e0; body size 57 bytes.
#line 1 "ENTRY_10aba5e0"

__declspec(naked) void FUN_10aba5e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ff9a8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ffa04
  __asm mov dword ptr [esi + 0x8c], LAB_118ffa10
  __asm mov dword ptr [esi + 0xa8], LAB_118ffa1c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aba730; body size 57 bytes.
#line 1 "ENTRY_10aba730"

__declspec(naked) void FUN_10aba730(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ffb10
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ffb6c
  __asm mov dword ptr [esi + 0x8c], LAB_118ffb78
  __asm mov dword ptr [esi + 0xa8], LAB_118ffb84
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aba880; body size 57 bytes.
#line 1 "ENTRY_10aba880"

__declspec(naked) void FUN_10aba880(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ffa78
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ffad4
  __asm mov dword ptr [esi + 0x8c], LAB_118ffae0
  __asm mov dword ptr [esi + 0xa8], LAB_118ffaec
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10aba9d0; body size 57 bytes.
#line 1 "ENTRY_10aba9d0"

__declspec(naked) void FUN_10aba9d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ffd70
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ffdcc
  __asm mov dword ptr [esi + 0x8c], LAB_118ffdd8
  __asm mov dword ptr [esi + 0xa8], LAB_118ffde4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abab20; body size 57 bytes.
#line 1 "ENTRY_10abab20"

__declspec(naked) void FUN_10abab20(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fffb8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_11900014
  __asm mov dword ptr [esi + 0x8c], LAB_11900020
  __asm mov dword ptr [esi + 0xa8], LAB_1190002c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abac70; body size 57 bytes.
#line 1 "ENTRY_10abac70"

__declspec(naked) void FUN_10abac70(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fedfc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fee58
  __asm mov dword ptr [esi + 0x8c], LAB_118fee64
  __asm mov dword ptr [esi + 0xa8], LAB_118fee70
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abadc0; body size 57 bytes.
#line 1 "ENTRY_10abadc0"

__declspec(naked) void FUN_10abadc0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fe9c8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fea24
  __asm mov dword ptr [esi + 0x8c], LAB_118fea30
  __asm mov dword ptr [esi + 0xa8], LAB_118fea3c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abaf10; body size 57 bytes.
#line 1 "ENTRY_10abaf10"

__declspec(naked) void FUN_10abaf10(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ff188
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ff1e4
  __asm mov dword ptr [esi + 0x8c], LAB_118ff1f0
  __asm mov dword ptr [esi + 0xa8], LAB_118ff1fc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abb060; body size 57 bytes.
#line 1 "ENTRY_10abb060"

__declspec(naked) void FUN_10abb060(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ff6cc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ff728
  __asm mov dword ptr [esi + 0x8c], LAB_118ff734
  __asm mov dword ptr [esi + 0xa8], LAB_118ff740
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abb1b0; body size 57 bytes.
#line 1 "ENTRY_10abb1b0"

__declspec(naked) void FUN_10abb1b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ff5d8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ff634
  __asm mov dword ptr [esi + 0x8c], LAB_118ff640
  __asm mov dword ptr [esi + 0xa8], LAB_118ff64c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abb300; body size 57 bytes.
#line 1 "ENTRY_10abb300"

__declspec(naked) void FUN_10abb300(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ff85c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ff8b8
  __asm mov dword ptr [esi + 0x8c], LAB_118ff8c4
  __asm mov dword ptr [esi + 0xa8], LAB_118ff8d0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abb450; body size 57 bytes.
#line 1 "ENTRY_10abb450"

__declspec(naked) void FUN_10abb450(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fdcb4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fdd10
  __asm mov dword ptr [esi + 0x8c], LAB_118fdd1c
  __asm mov dword ptr [esi + 0xa8], LAB_118fdd28
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abb5a0; body size 57 bytes.
#line 1 "ENTRY_10abb5a0"

__declspec(naked) void FUN_10abb5a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fe7e4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fe840
  __asm mov dword ptr [esi + 0x8c], LAB_118fe84c
  __asm mov dword ptr [esi + 0xa8], LAB_118fe858
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abb6f0; body size 57 bytes.
#line 1 "ENTRY_10abb6f0"

__declspec(naked) void FUN_10abb6f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118fe8e8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118fe944
  __asm mov dword ptr [esi + 0x8c], LAB_118fe950
  __asm mov dword ptr [esi + 0xa8], LAB_118fe95c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abb840; body size 67 bytes.
#line 1 "ENTRY_10abb840"

__declspec(naked) void FUN_10abb840(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], LAB_118ff7c4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_118ff820
  __asm mov dword ptr [esi + 0x8c], LAB_118ff82c
  __asm mov dword ptr [esi + 0xa8], LAB_118ff838
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10abda90; body size 38 bytes.
#line 1 "ENTRY_10abda90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abda90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


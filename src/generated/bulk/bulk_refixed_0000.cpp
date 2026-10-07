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
struct __RFLD2 { int Data1; int Data2; int DebugInfo; int LockCount; int LockSemaphore; int OwningThread; int RecursionCount; int SpareWORD; int SpinCount; int tm_hour; int tm_isdst; int tm_mday; int tm_min; int tm_mon; int tm_sec; int tm_wday; int tm_yday; int tm_year; int unused; };
struct __RFLD { int Data1; int Data2; int DebugInfo; int LockCount; int LockSemaphore; int OwningThread; int RecursionCount; int SpareWORD; int SpinCount; int tm_hour; int tm_isdst; int tm_mday; int tm_min; int tm_mon; int tm_sec; int tm_wday; int tm_yday; int tm_year; int unused; };
namespace std { typedef int _Iterator_base0; }
struct SCHouseholdEventSink { char _pad; SCHouseholdEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_ctor(...) { return 0; } };
struct SCLibParameters { char _pad; SCLibParameters(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int hasDeveloperOption(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); };
struct SCSecureRegistrationResetPasswordSuccessOtherState { char _pad; SCSecureRegistrationResetPasswordSuccessOtherState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int vftable; };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int append(A...); template<class... A> int beginsWith(A...); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_allocStdRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } template<class... A> int split(A...); template<class... A> int stringWithFormat(A...); };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_ios { char _pad; basic_ios(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int setstate(A...); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_istream { char _pad; basic_istream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int _Ipfx(A...); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_ostream { char _pad; basic_ostream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_shl(...); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_streambuf { char _pad; basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int sbumpc(A...); template<class... A> int sgetc(A...); template<class... A> int snextc(A...); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct Api { char _pad; Api(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CLSID { char _pad; CLSID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CLSIDFromString { char _pad; CLSIDFromString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CStack_68 { char _pad; CStack_68(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CStack_78 { char _pad; CStack_78(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CancelledFlow { char _pad; CancelledFlow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Clearing { char _pad; Clearing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Connect { char _pad; Connect(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Connection { char _pad; Connection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CountryCode { char _pad; CountryCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CountryNames { char _pad; CountryNames(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CurrentControlSet { char _pad; CurrentControlSet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CurrentTrackMetaData { char _pad; CurrentTrackMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CustomerID { char _pad; CustomerID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DStack_9c { char _pad; DStack_9c(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Data1 { char _pad; Data1(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Data2 { char _pad; Data2(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DebugInfo { char _pad; DebugInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DesktopController { char _pad; DesktopController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DhcpDomain { char _pad; DhcpDomain(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Diagnostics { char _pad; Diagnostics(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Domain { char _pad; Domain(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Dtls { char _pad; Dtls(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct EnqueuedTransportURI { char _pad; EnqueuedTransportURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct EnqueuedTransportURIMetaData { char _pad; EnqueuedTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Example { char _pad; Example(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetAdaptersInfo { char _pad; GetAdaptersInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetAllPrefixLocations { char _pad; GetAllPrefixLocations(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetNumberOfInterfaces { char _pad; GetNumberOfInterfaces(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct HKEY__ { char _pad; HKEY__(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct HStack_8c { char _pad; HStack_8c(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct HVar3 { char _pad; HVar3(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct HadError { char _pad; HadError(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Heritage { char _pad; Heritage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct InitializeCriticalSection { char _pad; InitializeCriticalSection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Interface { char _pad; Interface(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Interfaces { char _pad; Interfaces(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct KeepAlive { char _pad; KeepAlive(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Key { char _pad; Key(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LPCRITICAL_SECTION { char _pad; LPCRITICAL_SECTION(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LVar2 { char _pad; LVar2(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LVar3 { char _pad; LVar3(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LatestSWGen { char _pad; LatestSWGen(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Libraries { char _pad; Libraries(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LockCount { char _pad; LockCount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LockSemaphore { char _pad; LockSemaphore(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Match { char _pad; Match(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MultiByteToWideChar { char _pad; MultiByteToWideChar(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ObjectID { char _pad; ObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OnSearchForZonePlayers { char _pad; OnSearchForZonePlayers(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_11 { char _pad; Ordinal_11(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_12 { char _pad; Ordinal_12(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_14 { char _pad; Ordinal_14(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_15 { char _pad; Ordinal_15(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OwningThread { char _pad; OwningThread(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Parameters { char _pad; Parameters(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Perform { char _pad; Perform(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayModelHeroView { char _pad; PlayModelHeroView(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PostalCode { char _pad; PostalCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PrefixAndIndexCSV { char _pad; PrefixAndIndexCSV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PrimaryDNSSuffix { char _pad; PrimaryDNSSuffix(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Product { char _pad; Product(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RecursionCount { char _pad; RecursionCount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RegCloseKey { char _pad; RegCloseKey(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RegCloseKey_exref { char _pad; RegCloseKey_exref(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RegEnumKeyExA { char _pad; RegEnumKeyExA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RegOpenKeyExA { char _pad; RegOpenKeyExA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RegOpenKeyExA_exref { char _pad; RegOpenKeyExA_exref(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RegQueryValueExW { char _pad; RegQueryValueExW(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Restarted { char _pad; Restarted(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCBondingSetup { char _pad; SCBondingSetup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCCountryList { char _pad; SCCountryList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCFetchUpdateManifestOp { char _pad; SCFetchUpdateManifestOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIUrlSessionProvider { char _pad; SCIUrlSessionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Safety { char _pad; Safety(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SearchList { char _pad; SearchList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Self { char _pad; Self(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Services { char _pad; Services(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Single { char _pad; Single(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SkipLogin { char _pad; SkipLogin(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sorting { char _pad; Sorting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SpareWORD { char _pad; SpareWORD(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SpinCount { char _pad; SpinCount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Start { char _pad; Start(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct StashedEmail { char _pad; StashedEmail(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Stop { char _pad; Stop(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sub { char _pad; Sub(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct System { char _pad; System(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Tcpip { char _pad; Tcpip(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThreadLocalStoragePointer { char _pad; ThreadLocalStoragePointer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct TotalPrefixes { char _pad; TotalPrefixes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct TransferAccount { char _pad; TransferAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Type { char _pad; Type(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UNK_1072fe00 { char _pad; UNK_1072fe00(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UNK_119ca0d8 { char _pad; UNK_119ca0d8(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UNK_119ca0e8 { char _pad; UNK_119ca0e8(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UPnP { char _pad; UPnP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unable { char _pad; Unable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unknown { char _pad; Unknown(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UpdateBranch { char _pad; UpdateBranch(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UpdateID { char _pad; UpdateID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UsageDataOptIn { char _pad; UsageDataOptIn(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UsageDataSet { char _pad; UsageDataSet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Using { char _pad; Using(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct WORD_12411e10 { char _pad; WORD_12411e10(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
template<class...> struct _func_basic_ostream { char _pad; _func_basic_ostream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
template<class...> struct basic_string { char _pad; basic_string(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int Data1; static int Data2; static int DebugInfo; static int LockCount; static int LockSemaphore; static int OwningThread; static int RecursionCount; static int SpinCount; static int unused; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *ACTION;
typedef void *AFTER;
typedef void *ALLOW_UNKNOWN_MODEL;
typedef void *ANALYZE;
typedef void *CASCADE;
typedef void *CHECK;
typedef void *DB;
typedef void *DEFAULT;
typedef void *HKEY;
typedef void *HTTP;
typedef void *ID;
typedef void *IP;
typedef void *L;
typedef void *LPBYTE;
typedef void *LPCOLESTR;
typedef void *LPCSTR;
typedef void *LPDWORD;
typedef void *LPSTR;
typedef void *LPWSTR;
typedef void *LSTATUS;
typedef void *NO;
typedef void *NOT;
typedef void *OLECHAR;
typedef void *P;
typedef void *PFILETIME;
typedef void *PHKEY;
typedef void *PRTL_CRITICAL_SECTION_DEBUG;
typedef void *RESTRICT;
typedef void *S;
typedef void *SET;
typedef void *SMAPI;
typedef void *SOFTWARE;
typedef void *SSID;
typedef void *WARNING;
typedef void *X;
typedef void *Y;
typedef void *ZP;
typedef void *_Ipfx;
typedef void *_PtFuncCompare;
typedef void (*_func_void_void_ptr)(...);
using namespace std;
struct Recovered_Bulk { char _pad; bool __thiscall m_FUN_101b87f0(char *param_2); template<class... A> int m_FUN_101b87f0(A...); bool __thiscall m_FUN_101b88f0(int *param_2); template<class... A> int m_FUN_101b88f0(A...); void __thiscall m_FUN_1021bf80(int *param_2,int *param_3); template<class... A> int m_FUN_1021bf80(A...); undefined4 __thiscall m_FUN_1038dec0(undefined1 *param_2); template<class... A> int m_FUN_1038dec0(A...); void __thiscall m_FUN_1086d990(undefined4 param_2); template<class... A> int m_FUN_1086d990(A...); void __thiscall m_FUN_10a3e140(undefined4 param_2); template<class... A> int m_FUN_10a3e140(A...); undefined1 __thiscall m_FUN_10c71f40(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10c71f40(A...); undefined4 * __thiscall m_FUN_10d3bf10(undefined4 *param_2,int *param_3); template<class... A> int m_FUN_10d3bf10(A...); void __thiscall m_FUN_10d93ba0(undefined1 *param_2); template<class... A> int m_FUN_10d93ba0(A...); undefined4 * __thiscall m_FUN_10ef34f0(byte param_2); template<class... A> int m_FUN_10ef34f0(A...); undefined4 * __thiscall m_FUN_10efc450(undefined4 *param_2); template<class... A> int m_FUN_10efc450(A...); void __thiscall m_FUN_10f85160(int param_2,short *param_3); template<class... A> int m_FUN_10f85160(A...); void __thiscall m_FUN_1106d3a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15); template<class... A> int m_FUN_1106d3a0(A...); void __thiscall m_FUN_11094940(undefined4 *param_2,int *param_3,undefined4 *param_4); template<class... A> int m_FUN_11094940(A...); void __thiscall m_FUN_11115d10(undefined1 *param_2,undefined4 param_3); template<class... A> int m_FUN_11115d10(A...); void __thiscall m_FUN_11124a80(byte *param_2,undefined4 *param_3); template<class... A> int m_FUN_11124a80(A...); void __thiscall m_FUN_111e86b0(undefined4 param_2); template<class... A> int m_FUN_111e86b0(A...); void __thiscall m_FUN_11201af0(byte *param_2,undefined4 param_3); template<class... A> int m_FUN_11201af0(A...); bool __thiscall m_FUN_11298db0(undefined4 param_2,uint param_3,int param_4); template<class... A> int m_FUN_11298db0(A...); int __thiscall m_FUN_113d2860(undefined4 *param_2,undefined4 param_3,uint param_4,int param_5,
            int *param_6); template<class... A> int m_FUN_113d2860(A...); };

extern __declspec(dllimport) int CLSIDFromString(...);
extern int FUN_1005a7b3(...);
extern int FUN_1005ef7a(...);
extern int FUN_1006f9dd(...);
extern int FUN_1086eaf0(...);
extern int FUN_1086ed30(...);
extern int FUN_108724e0(...);
extern int FUN_10872dc0(...);
extern int FUN_10ba4768(...);
extern int FUN_10baec50(...);
extern int FUN_11124530(...);
extern int FUN_112b2930(...);
extern int FUN_112b4020(...);
extern int FUN_112b7970(...);
extern int FUN_11302b00(...);
extern int FUN_113036d0(...);
extern int FUN_113061c0(...);
template<class... A> int FUN_113064b0(A...);
extern int FUN_11307f80(...);
extern int FUN_113089c0(...);
extern int FUN_11309520(...);
extern int FUN_1130e990(...);
extern int FUN_1130e9d0(...);
extern int FUN_1130eab0(...);
extern int FUN_1130eea0(...);
extern int FUN_11310d70(...);
extern int FUN_11311e10(...);
extern int FUN_11312ef0(...);
extern int FUN_113131a0(...);
extern int FUN_11316310(...);
extern int FUN_11316ce0(...);
extern int FUN_11317030(...);
extern int FUN_1131b700(...);
extern int FUN_1131ced0(...);
extern int FUN_1131dd60(...);
extern int FUN_1131dfc0(...);
extern int FUN_1131f140(...);
extern int FUN_1131f4c0(...);
extern int FUN_1131f6b0(...);
extern int FUN_11322960(...);
extern int FUN_11322a10(...);
extern int FUN_113251c0(...);
extern int FUN_11326440(...);
extern int FUN_11327f70(...);
extern int FUN_113285b0(...);
extern int FUN_113287e0(...);
extern int FUN_1132a0e0(...);
extern int FUN_1132a740(...);
extern int FUN_1132b150(...);
extern int FUN_1132b210(...);
extern int FUN_1132b960(...);
template<class... A> int FUN_1132bb30(A...);
extern int FUN_1132c1f0(...);
extern int FUN_1132f720(...);
extern int FUN_11332320(...);
extern int FUN_113323d0(...);
extern int FUN_11334f70(...);
extern int FUN_113350e0(...);
extern int FUN_11335340(...);
extern int FUN_11337cc0(...);
extern int FUN_113386c0(...);
extern int FUN_113396f0(...);
extern int FUN_1133a2b0(...);
extern int FUN_1133ab00(...);
extern int FUN_1133b7c0(...);
extern int FUN_1133d680(...);
extern int FUN_1133d960(...);
extern int FUN_1133d9b0(...);
extern int FUN_1133daa0(...);
extern int FUN_1133db60(...);
extern int FUN_1133f8f0(...);
extern int FUN_1133fdf0(...);
extern int FUN_11341510(...);
extern int FUN_11343050(...);
extern int FUN_113430d0(...);
extern int FUN_113433c0(...);
extern int FUN_113434e0(...);
extern int FUN_113439b0(...);
extern int FUN_11345ed0(...);
extern int FUN_113466d0(...);
extern int FUN_11347490(...);
extern int FUN_1134a920(...);
extern int FUN_1134ae80(...);
extern int FUN_1134bbf0(...);
extern int FUN_1134c5b0(...);
extern int FUN_1134d3a0(...);
extern int FUN_1134d470(...);
extern int FUN_1134f240(...);
extern int FUN_1134f7f0(...);
extern int FUN_11352480(...);
extern int FUN_11352e40(...);
extern int FUN_11353050(...);
extern int FUN_11354aa0(...);
extern int FUN_11357a40(...);
extern int FUN_11358530(...);
extern int FUN_11358b70(...);
extern int FUN_11358b90(...);
extern int FUN_11359810(...);
extern int FUN_11359a00(...);
extern int FUN_11359c50(...);
extern int FUN_11359d10(...);
extern int FUN_11359e30(...);
extern int FUN_1135a0c0(...);
extern int FUN_1135b7f0(...);
extern int FUN_1135c910(...);
extern int FUN_1135d530(...);
extern int FUN_1135e7f0(...);
extern int FUN_1135ea30(...);
extern int FUN_1135ee40(...);
extern int FUN_11363c30(...);
extern int FUN_11363d60(...);
extern int FUN_113644e0(...);
extern int FUN_1136cfd0(...);
extern int FUN_1136d300(...);
extern int FUN_1136e3b0(...);
extern int FUN_11370f70(...);
extern int FUN_11372120(...);
extern int FUN_11372190(...);
extern int FUN_11372200(...);
extern int FUN_11372280(...);
extern int FUN_113722f0(...);
extern int FUN_113723f0(...);
extern int FUN_113724a0(...);
extern int FUN_113725e0(...);
extern int FUN_11372dd0(...);
extern int FUN_1137d7b0(...);
extern int FUN_1137dfd0(...);
extern int FUN_1137ead0(...);
extern int FUN_1137f730(...);
extern int FUN_11380a70(...);
extern int FUN_11380ad0(...);
extern int FUN_11381c90(...);
extern int FUN_1139c620(...);
extern int FUN_1139c7e0(...);
extern int FUN_1139db10(...);
extern int FUN_1139ecf0(...);
extern int FUN_1139f3d0(...);
extern int FUN_1139f480(...);
extern int FUN_113a0c50(...);
extern int FUN_113a1470(...);
extern int FUN_113a1d40(...);
extern int FUN_113a1d70(...);
extern int FUN_113a1ee0(...);
extern int FUN_113a3170(...);
extern int FUN_113a3340(...);
extern int FUN_113a34c0(...);
extern int FUN_113a3d80(...);
extern int FUN_113a82c0(...);
extern int FUN_113ab2d0(...);
extern int FUN_113ac480(...);
extern int FUN_113b17e0(...);
extern int FUN_113b2640(...);
extern int FUN_113b97d0(...);
extern int FUN_113d2b80(...);
extern int FUN_11862580(...);
extern __declspec(dllimport) int GetAdaptersInfo(...);
extern __declspec(dllimport) int GetNumberOfInterfaces(...);
extern __declspec(dllimport) int InitializeCriticalSection(...);
extern int LOCK(...);
extern __declspec(dllimport) int MultiByteToWideChar(...);
extern __declspec(dllimport) int Ordinal_11(...);
extern __declspec(dllimport) int Ordinal_12(...);
extern __declspec(dllimport) int Ordinal_14(...);
extern __declspec(dllimport) int Ordinal_15(...);
extern __declspec(dllimport) int RegCloseKey(...);
extern __declspec(dllimport) int RegEnumKeyExA(...);
extern __declspec(dllimport) int RegOpenKeyExA(...);
extern __declspec(dllimport) int RegQueryValueExW(...);
extern int Sub(...);
extern int UNLOCK(...);
extern int ___scrt_is_ucrt_dll_in_use(...);
extern int __alldiv(...);
extern int __allmul(...);
extern int _atexit(...);
extern int _eh_vector_constructor_iterator_(...);
extern __declspec(dllimport) int _gmtime64(...);
extern __declspec(dllimport) int _gmtime64_s(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _localtime64(...);
extern __declspec(dllimport) int _localtime64_s(...);
extern __declspec(dllimport) int _mktime64(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int atoi(...);
extern __declspec(dllimport) int atol(...);
extern int createPropertyBag(...);
extern int createSCNullAsyncOperation(...);
extern int createSCStringArray(...);
extern int failed(...);
extern int func_0x10015311(...);
extern int hit(...);
extern __declspec(dllimport) int longjmp(...);
extern __declspec(dllimport) int memchr(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int qsort(...);
extern int stored(...);
extern __declspec(dllimport) int strncat(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strtoul(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011be40(...);
extern int thunk_FUN_1011f780(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
extern int thunk_FUN_1012cab0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101a2e90(...);
extern int thunk_FUN_101aa0b0(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101b5500(...);
extern int thunk_FUN_101b9160(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101bf370(...);
extern int thunk_FUN_101ccf90(...);
extern int thunk_FUN_101dd3a0(...);
extern int thunk_FUN_101fda20(...);
extern int thunk_FUN_101ff8b0(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_10206850(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10224630(...);
extern int thunk_FUN_10236af0(...);
extern int thunk_FUN_10246170(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10281490(...);
extern int thunk_FUN_102a3810(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102caa30(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_10302a50(...);
extern int thunk_FUN_1034de40(...);
extern int thunk_FUN_1034e460(...);
extern int thunk_FUN_10351370(...);
extern int thunk_FUN_103535f0(...);
extern int thunk_FUN_10365150(...);
extern int thunk_FUN_1036e270(...);
extern int thunk_FUN_103ac6e0(...);
extern int thunk_FUN_103cdb40(...);
extern int thunk_FUN_103cf4f0(...);
extern int thunk_FUN_103d42c0(...);
extern int thunk_FUN_103d45e0(...);
extern int thunk_FUN_103d5ff0(...);
extern int thunk_FUN_104068e0(...);
extern int thunk_FUN_10425b60(...);
extern int thunk_FUN_104d6ff0(...);
extern int thunk_FUN_104d7540(...);
extern int thunk_FUN_104da560(...);
extern int thunk_FUN_104ddfd0(...);
extern int thunk_FUN_104f7090(...);
extern int thunk_FUN_105055d0(...);
extern int thunk_FUN_105055e0(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105b6d40(...);
extern int thunk_FUN_105c12d0(...);
extern int thunk_FUN_105ee3e0(...);
extern int thunk_FUN_105ef430(...);
extern int thunk_FUN_10604790(...);
extern int thunk_FUN_10604820(...);
extern int thunk_FUN_10647480(...);
extern int thunk_FUN_106a5620(...);
extern int thunk_FUN_10785ae0(...);
extern int thunk_FUN_1086f290(...);
extern int thunk_FUN_1086f2f0(...);
extern int thunk_FUN_10878180(...);
extern int thunk_FUN_1087bdd0(...);
extern int thunk_FUN_1087e360(...);
extern int thunk_FUN_10a21a10(...);
extern int thunk_FUN_10a22590(...);
extern int thunk_FUN_10a3f3e0(...);
extern int thunk_FUN_10a40780(...);
extern int thunk_FUN_10ba4650(...);
extern int thunk_FUN_10ba5500(...);
extern int thunk_FUN_10ba78d0(...);
extern int thunk_FUN_10ba7e70(...);
extern int thunk_FUN_10baa630(...);
extern int thunk_FUN_10baa650(...);
extern int thunk_FUN_10be54d0(...);
extern int thunk_FUN_10be6d30(...);
extern int thunk_FUN_10bf11c0(...);
extern int thunk_FUN_10bf11e0(...);
extern int thunk_FUN_10c5ee20(...);
extern int thunk_FUN_10c5f1d0(...);
extern int thunk_FUN_10c5f450(...);
extern int thunk_FUN_10c5f840(...);
extern int thunk_FUN_10c61010(...);
extern int thunk_FUN_10c61ec0(...);
extern int thunk_FUN_10c61f70(...);
extern int thunk_FUN_10c66110(...);
extern int thunk_FUN_10c663b0(...);
extern int thunk_FUN_10c66690(...);
extern int thunk_FUN_10c72ac0(...);
extern int thunk_FUN_10c7c560(...);
extern int thunk_FUN_10c7cfe0(...);
extern int thunk_FUN_10c7d870(...);
extern int thunk_FUN_10c7fec0(...);
extern int thunk_FUN_10c96100(...);
extern int thunk_FUN_10c97390(...);
extern int thunk_FUN_10c97630(...);
extern int thunk_FUN_10c97650(...);
extern int thunk_FUN_10c97670(...);
extern int thunk_FUN_10c98c80(...);
extern int thunk_FUN_10c99930(...);
extern int thunk_FUN_10cc9cb0(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10d93470(...);
extern int thunk_FUN_10d93840(...);
extern int thunk_FUN_10dbbb20(...);
extern int thunk_FUN_10dc7a90(...);
extern int thunk_FUN_10dee620(...);
extern int thunk_FUN_10deee60(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10def490(...);
extern int thunk_FUN_10defac0(...);
extern int thunk_FUN_10df15a0(...);
extern int thunk_FUN_10df6f00(...);
extern int thunk_FUN_10dfba00(...);
extern int thunk_FUN_10dfbb10(...);
extern int thunk_FUN_10dfd7b0(...);
extern int thunk_FUN_10e09ee0(...);
extern int thunk_FUN_10e0ac90(...);
extern int thunk_FUN_10e0f250(...);
extern int thunk_FUN_10e0f500(...);
extern int thunk_FUN_10e25c70(...);
extern int thunk_FUN_10e26030(...);
extern int thunk_FUN_10e3bda0(...);
extern int thunk_FUN_10e3c100(...);
extern int thunk_FUN_10e3c400(...);
extern int thunk_FUN_10e3c5a0(...);
extern int thunk_FUN_10ea8cf0(...);
extern int thunk_FUN_10eab7c0(...);
extern int thunk_FUN_10eace00(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eba400(...);
extern int thunk_FUN_10ebb810(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebb920(...);
extern int thunk_FUN_10ebbab0(...);
extern int thunk_FUN_10ec0e00(...);
extern int thunk_FUN_10ec0ec0(...);
extern int thunk_FUN_10ec0fb0(...);
extern int thunk_FUN_10ec1b40(...);
extern int thunk_FUN_10ec1c00(...);
extern int thunk_FUN_10ec1f00(...);
extern int thunk_FUN_10ec3540(...);
extern int thunk_FUN_10ec3670(...);
extern int thunk_FUN_10ec3700(...);
extern int thunk_FUN_10eca560(...);
extern int thunk_FUN_10ecbbd0(...);
extern int thunk_FUN_10ecd3c0(...);
extern int thunk_FUN_10ece7b0(...);
extern int thunk_FUN_10ecec70(...);
extern int thunk_FUN_10eced20(...);
extern int thunk_FUN_10ecf6e0(...);
extern int thunk_FUN_10ed4540(...);
extern int thunk_FUN_10ee3c70(...);
extern int thunk_FUN_10ef31b0(...);
extern int thunk_FUN_10ef4180(...);
extern int thunk_FUN_10efb220(...);
extern int thunk_FUN_10efdbb0(...);
extern int thunk_FUN_10eff900(...);
extern int thunk_FUN_10f024a0(...);
extern int thunk_FUN_10f796f0(...);
extern int thunk_FUN_10f82020(...);
extern int thunk_FUN_10f82840(...);
extern int thunk_FUN_10f87c40(...);
extern int thunk_FUN_10ffaf30(...);
extern int thunk_FUN_11051f40(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106b2c0(...);
extern int thunk_FUN_1106e590(...);
extern int thunk_FUN_1106f6e0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110838a0(...);
extern int thunk_FUN_1108a9a0(...);
extern int thunk_FUN_11093530(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110b76d0(...);
extern int thunk_FUN_110b8d90(...);
extern int thunk_FUN_110b9070(...);
extern int thunk_FUN_110cb9c0(...);
extern int thunk_FUN_110d3140(...);
extern int thunk_FUN_110d3720(...);
extern int thunk_FUN_110d3ac0(...);
extern int thunk_FUN_110d55a0(...);
extern int thunk_FUN_110d8a70(...);
extern int thunk_FUN_110d9290(...);
extern int thunk_FUN_110d9580(...);
extern int thunk_FUN_110d9720(...);
extern int thunk_FUN_110f2980(...);
extern int thunk_FUN_110f4420(...);
extern int thunk_FUN_110f69f0(...);
extern int thunk_FUN_11111260(...);
extern int thunk_FUN_1111e210(...);
extern int thunk_FUN_1113ecc0(...);
extern int thunk_FUN_1113eda0(...);
extern int thunk_FUN_1117eaf0(...);
extern int thunk_FUN_11180fe0(...);
extern int thunk_FUN_1118a430(...);
extern int thunk_FUN_11194190(...);
extern int thunk_FUN_11194cd0(...);
extern int thunk_FUN_111a06b0(...);
extern int thunk_FUN_111a10b0(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a3310(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a5f10(...);
extern int thunk_FUN_111a7100(...);
extern int thunk_FUN_111bcc10(...);
extern int thunk_FUN_111bdc60(...);
extern int thunk_FUN_111be750(...);
extern int thunk_FUN_111c0480(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111cfd00(...);
extern int thunk_FUN_11202490(...);
extern int thunk_FUN_11202580(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11245a50(...);
extern int thunk_FUN_11245c20(...);
extern int thunk_FUN_11247e90(...);
extern int thunk_FUN_11248b40(...);
extern int thunk_FUN_11249060(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_11249230(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_112504b0(...);
extern int thunk_FUN_1125ba00(...);
extern int thunk_FUN_1125cec0(...);
extern int thunk_FUN_11273170(...);
extern int thunk_FUN_112782b0(...);
extern int thunk_FUN_11299630(...);
extern int thunk_FUN_112a1350(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a8530(...);
extern int thunk_FUN_112a8d70(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_112ba570(...);
extern int thunk_FUN_112ba6c0(...);
extern int thunk_FUN_112ba720(...);
extern int thunk_FUN_112bb1d0(...);
extern int thunk_FUN_1133fce0(...);
extern int thunk_FUN_11390f20(...);
extern int thunk_FUN_113949e0(...);
extern int thunk_FUN_11395140(...);
extern int thunk_FUN_11395910(...);
extern int thunk_FUN_11395b10(...);
extern int thunk_FUN_113973c0(...);
extern int thunk_FUN_113c1650(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113cfe50(...);
extern int thunk_FUN_113d03e0(...);
extern int thunk_FUN_113d15c0(...);
extern int thunk_FUN_113d2fb0(...);
extern int thunk_FUN_113d2fe0(...);
extern int thunk_FUN_113d3600(...);
extern int thunk_FUN_113d3650(...);
extern int thunk_FUN_113d39f0(...);
extern int thunk_FUN_113d3bb0(...);
extern int thunk_FUN_113d3c80(...);
extern int thunk_FUN_113d3e30(...);
extern int thunk_FUN_113dc730(...);
extern int thunk_FUN_113dde70(...);
extern int thunk_FUN_11401f20(...);
extern int thunk_FUN_11401ff0(...);
extern int thunk_FUN_1140ccc0(...);
extern int thunk_FUN_1140cd70(...);
extern int thunk_FUN_1140ce80(...);
extern int thunk_FUN_1140d570(...);
extern int thunk_FUN_1140d5f0(...);
extern int thunk_FUN_1140d620(...);
extern int thunk_FUN_1140d850(...);
extern int thunk_FUN_11413d00(...);
extern int thunk_FUN_11414d70(...);
extern int thunk_FUN_114156d0(...);
extern int thunk_FUN_11417320(...);
extern int thunk_FUN_11417bb0(...);
extern int thunk_FUN_11423ed0(...);
extern int thunk_FUN_114576f0(...);
extern int thunk_FUN_11457d40(...);
extern int thunk_FUN_1145a8d0(...);
extern int thunk_FUN_1145a960(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c460(...);
extern int thunk_FUN_1146c180(...);
extern int thunk_FUN_1146c9e0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148aaa4(...);
extern int thunk_FUN_1148ab00(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148af70(...);
extern int thunk_FUN_1148b0c0(...);
extern int thunk_FUN_1148b586(...);
extern int thunk_FUN_1148bc65(...);
extern int thunk_FUN_118064a0(...);
extern int DAT_00000004;
extern int DAT_00000007;
extern int DAT_0000000a;
extern int DAT_0000000c;
extern int DAT_1186d2ee;
extern int DAT_1186d560;
extern int DAT_1187b440;
extern int DAT_11880f98;
extern int DAT_11882ff0;
extern int DAT_1188465c;
extern int DAT_118850bc;
extern int DAT_1188bc94;
extern int DAT_1189f4a8;
extern int DAT_118a1c40;
extern int DAT_118d39d4;
extern int DAT_118da62c;
extern int DAT_118e8d3c;
extern int DAT_119106ac;
extern int DAT_119106b6;
extern int DAT_119106bc;
extern int DAT_119106be;
extern int DAT_119190cc;
extern int DAT_1194bf40;
extern int DAT_1195f830;
extern int DAT_119dd8b8;
extern int DAT_119df9ec;
extern int DAT_119e4e04;
extern int DAT_119f77dc;
extern int DAT_119f7d40;
extern int DAT_119f7da0;
extern int DAT_119f7de0;
extern int DAT_119f7dfc;
extern int DAT_119f7e04;
extern int DAT_119f7f08;
extern int DAT_119fb300;
extern int DAT_119fb400;
extern int DAT_119fd0ec;
extern int DAT_119fd164;
extern int DAT_11a01588;
extern int DAT_11a01638;
extern int DAT_11a016b4;
extern int DAT_11a016bc;
extern int DAT_11a016cc;
extern int DAT_11a016d0;
extern int DAT_11a016e0;
extern int DAT_11a0173c;
extern int DAT_11a017c8;
extern int DAT_11a02e50;
extern int DAT_11a02f80;
extern int DAT_11c03ce8;
extern int DAT_1211e604;
extern int DAT_12120420;
extern int DAT_1212057c;
extern int DAT_1212058c;
extern int DAT_12120590;
extern int DAT_12121e80;
extern int DAT_12121ea4;
extern int DAT_12121eac;
extern int DAT_12121ed0;
extern int DAT_12121ed8;
extern int DAT_12121ef8;
extern int DAT_12121f14;
extern int DAT_12121f28;
extern int DAT_12121f2c;
extern int DAT_12121f78;
extern int DAT_12121fa0;
extern int DAT_121220e8;
extern int DAT_12126b84;
extern int DAT_121a2008;
extern int DAT_121a200c;
extern int DAT_121a2010;
extern int DAT_121a2014;
extern int DAT_121a2018;
extern int DAT_121a201c;
extern int DAT_121a2020;
extern int DAT_121a2024;
extern int DAT_121a2030;
extern int DAT_122e8a30;
extern int DAT_122f5664;
extern int DAT_122f5670;
extern int DAT_122f6cc0;
extern int DAT_122f6cc4;
extern int DAT_122f6cc8;
extern int DAT_122f6d28;
extern int DAT_122f6d2c;
extern int DAT_122f6d30;
extern int DAT_122f6d4c;
extern int DAT_122f6d88;
extern int DAT_122f7038;
extern int DAT_122f703c;
extern int DAT_122f7040;
extern int DAT_122f7044;
extern int DAT_122f7048;
extern int DAT_122f704c;
extern int DAT_122f7050;
extern int DAT_122f7054;
extern int DAT_122f705c;
extern int DAT_122fabd8;
extern int RegCloseKey_exref;
extern int RegOpenKeyExA_exref;
extern int UNK_1072fe00;
extern int UNK_119ca0d8;
extern int UNK_119ca0e8;
extern int _UNK_119ca0d0;
extern int _UNK_119ca0dc;
extern int _UNK_119ca0e4;
extern int _UNK_11a02f84;
extern int _UNK_11a02f88;
extern int _UNK_11a02f8c;
extern int _tls_index;
extern int cerr_exref;
extern int free_exref;
extern int g_lSCObjCount;
extern int ghidra_vftable_RAsyncBrowseCacheCB;
extern int ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp;
extern int ghidra_vftable_RZPDevice;
extern int ghidra_vftable_SCAggregateHelperCB;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface;
extern int ghidra_vftable_SCCountry;
extern int ghidra_vftable_SCGenericEventSink;
extern int ghidra_vftable_SCGenericEventSinkCB;
extern int ghidra_vftable_SCHomePageDataSource;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIEventSink;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIReorderable;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCSearchTypeNonSonosItem;
extern int ghidra_vftable_SCSearchTypeSonosItem;
extern int ghidra_vftable_SCSecureRegistrationAccountEmailState;
extern int ghidra_vftable_SCSecureRegistrationAccountEmailSubmitState;
extern int ghidra_vftable_SCSecureRegistrationAccountExistsState;
extern int ghidra_vftable_SCSecureRegistrationCheckPasswordState;
extern int ghidra_vftable_SCSecureRegistrationCompleteState;
extern int ghidra_vftable_SCSecureRegistrationCountryState;
extern int ghidra_vftable_SCSecureRegistrationCreatedState;
extern int ghidra_vftable_SCSecureRegistrationDataOptInSubmitState;
extern int ghidra_vftable_SCSecureRegistrationLoginPrepState;
extern int ghidra_vftable_SCSecureRegistrationLoginSubmitState;
extern int ghidra_vftable_SCSecureRegistrationNetworkErrorState;
extern int ghidra_vftable_SCSecureRegistrationNewAccountIntroState;
extern int ghidra_vftable_SCSecureRegistrationNewAccountNetworkErrorState;
extern int ghidra_vftable_SCSecureRegistrationNewAccountState;
extern int ghidra_vftable_SCSecureRegistrationPasswordSetState;
extern int ghidra_vftable_SCSecureRegistrationPhoneState;
extern int ghidra_vftable_SCSecureRegistrationPostalState;
extern int ghidra_vftable_SCSecureRegistrationResetPasswordEmailFailState;
extern int ghidra_vftable_SCSecureRegistrationResetPasswordFailState;
extern int ghidra_vftable_SCSecureRegistrationResetPasswordState;
extern int ghidra_vftable_SCSecureRegistrationState;
extern int ghidra_vftable_SCSecureRegistrationVerifyEmailErrorState;
extern int ghidra_vftable_SCSecureRegistrationVerifyEmailState;
extern int ghidra_vftable_SCSecureRegistrationVerifyEmailSubmitState;
extern int ghidra_vftable_SCSetupAssetSet;
extern int ghidra_vftable_SCStrPropDelegate;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_Tarball;
extern int in_XMM0_Qa;
extern int in_stack_00000020;
extern int in_stack_00000024;
extern int in_stack_00000028;
extern int in_stack_0000002c;
extern int in_stack_00000030;
extern int malloc_exref;
extern int uStack0000001d;
extern int uStackY_68;
extern int uStack_108;
extern int uStack_1c;
extern int uStack_20;
extern int uStack_24;
extern int uStack_28;
extern int uStack_2c;
extern int uStack_4;
extern int uStack_48;
extern int uStack_4a;
extern int uStack_4c;
extern int uStack_50;
extern int uStack_54;
extern int uStack_58;
extern int uStack_5c;
extern int uStack_60;
extern int uStack_6c;
extern int uStack_70;
extern int uStack_74;
extern int uStack_78;
extern int uStack_7c;
extern int uStack_8;
extern int uStack_80;
extern int uStack_84;
extern int uStack_88;
extern int uStack_d4;
extern int uStack_ec;
extern int uStack_f0;
extern int uStack_f4;
extern int unaff_EBP;
extern int unaff_EBX;
extern int unaff_EDI;
extern undefined1 LAB_10007ca7[];
extern undefined1 LAB_10011770[];
extern undefined1 LAB_10068c3c[];
extern undefined1 LAB_10070eaf[];
extern undefined1 LAB_10073b5f[];
extern undefined1 LAB_100755e0[];
extern undefined1 LAB_1021c23a[];
extern undefined1 LAB_1021c243[];
extern undefined1 LAB_1021c391[];
extern undefined1 LAB_1021c629[];
extern undefined1 LAB_1038dfff[];
extern undefined1 LAB_1038e05d[];
extern undefined1 LAB_107c0512[];
extern undefined1 LAB_107c0565[];
extern undefined1 LAB_107c0644[];
extern undefined1 LAB_108790a4[];
extern undefined1 LAB_10879170[];
extern undefined1 LAB_1087a092[];
extern undefined1 LAB_1087a0df[];
extern undefined1 LAB_10a99d87[];
extern undefined1 LAB_10b749ae[];
extern undefined1 LAB_10b749b4[];
extern undefined1 LAB_10bae8ed[];
extern undefined1 LAB_10bae906[];
extern undefined1 LAB_10baf219[];
extern undefined1 LAB_10baf53b[];
extern undefined1 LAB_10baf57b[];
extern undefined1 LAB_10baf5bb[];
extern undefined1 LAB_10baf5f5[];
extern undefined1 LAB_10baf625[];
extern undefined1 LAB_10baf62d[];
extern undefined1 LAB_10baf663[];
extern undefined1 LAB_10baf6d1[];
extern undefined1 LAB_10baf83d[];
extern undefined1 LAB_10bafb5d[];
extern undefined1 LAB_10bafb83[];
extern undefined1 LAB_10bafbcb[];
extern undefined1 LAB_10bafbd6[];
extern undefined1 LAB_10bafbdb[];
extern undefined1 LAB_10c66196[];
extern undefined1 LAB_10c661ca[];
extern undefined1 LAB_10c66e56[];
extern undefined1 LAB_10c66fec[];
extern undefined1 LAB_10c71fc0[];
extern undefined1 LAB_10d3bf9e[];
extern undefined1 LAB_10d93ed4[];
extern undefined1 LAB_10d93ee3[];
extern undefined1 LAB_10d93f57[];
extern undefined1 LAB_10dbc6db[];
extern undefined1 LAB_10dbc736[];
extern undefined1 LAB_10e3ce16[];
extern undefined1 LAB_10e3dea9[];
extern undefined1 LAB_10ee39a5[];
extern undefined1 LAB_10ee39d1[];
extern undefined1 LAB_10ee3a09[];
extern undefined1 LAB_10ee3a0e[];
extern undefined1 LAB_10ee3a1d[];
extern undefined1 LAB_10ee3a62[];
extern undefined1 LAB_10efc4ef[];
extern undefined1 LAB_10efc63d[];
extern undefined1 LAB_10f851c2[];
extern undefined1 LAB_10f852fe[];
extern undefined1 LAB_10f85454[];
extern undefined1 LAB_10f855c3[];
extern undefined1 LAB_11080488[];
extern undefined1 LAB_110be27b[];
extern undefined1 LAB_110be2bd[];
extern undefined1 LAB_110be72c[];
extern undefined1 LAB_110be9d3[];
extern undefined1 LAB_110beac2[];
extern undefined1 LAB_11115da0[];
extern undefined1 LAB_11115da5[];
extern undefined1 LAB_11115fa1[];
extern undefined1 LAB_11124b97[];
extern undefined1 LAB_111e87b0[];
extern undefined1 LAB_111e87b5[];
extern undefined1 LAB_111e881d[];
extern undefined1 LAB_11201b50[];
extern undefined1 LAB_11201b55[];
extern undefined1 LAB_11201c70[];
extern undefined1 LAB_11201c75[];
extern undefined1 LAB_1124777a[];
extern undefined1 LAB_11298e4c[];
extern undefined1 LAB_11298ea5[];
extern undefined1 LAB_11298eaa[];
extern undefined1 LAB_11298f0d[];
extern undefined1 LAB_11298f64[];
extern undefined1 LAB_11298f69[];
extern undefined1 LAB_11298fc1[];
extern undefined1 LAB_112990fc[];
extern undefined1 LAB_11299104[];
extern undefined1 LAB_1129919d[];
extern undefined1 LAB_112992cc[];
extern undefined1 LAB_112992f7[];
extern undefined1 LAB_112a8f35[];
extern undefined1 LAB_112a8f50[];
extern undefined1 LAB_112a8f63[];
extern undefined1 LAB_11305e71[];
extern undefined1 LAB_1130601d[];
extern undefined1 LAB_113060b5[];
extern undefined1 LAB_113065c3[];
extern undefined1 LAB_113065fb[];
extern undefined1 LAB_11306607[];
extern undefined1 LAB_11306825[];
extern undefined1 LAB_11306b22[];
extern undefined1 LAB_11307051[];
extern undefined1 LAB_1130711b[];
extern undefined1 LAB_1130720f[];
extern undefined1 LAB_11307229[];
extern undefined1 LAB_11307474[];
extern undefined1 LAB_11307580[];
extern undefined1 LAB_11307696[];
extern undefined1 LAB_11307909[];
extern undefined1 LAB_11307920[];
extern undefined1 LAB_1131fe92[];
extern undefined1 LAB_1131fec6[];
extern undefined1 LAB_113212ac[];
extern undefined1 LAB_1132bbb7[];
extern undefined1 LAB_1135efea[];
extern undefined1 LAB_1135f40f[];
extern undefined1 LAB_1135f47d[];
extern undefined1 LAB_1135f512[];
extern undefined1 LAB_1135f54e[];
extern undefined1 LAB_1135f574[];
extern undefined1 LAB_1135fa3f[];
extern undefined1 LAB_1135fabf[];
extern undefined1 LAB_1135fc56[];
extern undefined1 LAB_1135fc5f[];
extern undefined1 LAB_1135fcbf[];
extern undefined1 LAB_1135fed1[];
extern undefined1 LAB_113609c1[];
extern undefined1 LAB_11360ad4[];
extern undefined1 LAB_11361acc[];
extern undefined1 LAB_11361ce2[];
extern undefined1 LAB_11361d64[];
extern undefined1 LAB_11361e61[];
extern undefined1 LAB_11362191[];
extern undefined1 LAB_11362310[];
extern undefined1 LAB_11362502[];
extern undefined1 LAB_11362522[];
extern undefined1 LAB_113625a0[];
extern undefined1 LAB_113625a9[];
extern undefined1 LAB_113625c1[];
extern undefined1 LAB_113625ce[];
extern undefined1 LAB_1136b280[];
extern undefined1 LAB_11384160[];
extern undefined1 LAB_113a3110[];
extern undefined1 LAB_113a42c4[];
extern undefined1 LAB_113a43d7[];
extern undefined1 LAB_113ab167[];
extern undefined1 LAB_113b3580[];
extern undefined1 LAB_113b377b[];
extern undefined1 LAB_113b378e[];
extern undefined1 LAB_113c0ec0[];
extern undefined1 LAB_113c0ec3[];
extern undefined1 LAB_113d0fec[];
extern undefined1 LAB_113d10f0[];
extern undefined1 LAB_113d10f5[];
extern undefined1 LAB_113d1106[];
extern undefined1 LAB_113d1123[];
extern undefined1 LAB_113d2967[];
extern undefined1 LAB_113d2a23[];
extern undefined1 LAB_113d2a7f[];
extern undefined1 LAB_1141d36c[];
extern undefined1 LAB_1150769f[];
extern undefined1 LAB_1152fe1f[];
extern undefined1 LAB_11546835[];
extern undefined1 LAB_1160ac45[];
extern undefined1 LAB_1162ad45[];
extern undefined1 LAB_1162c04c[];
extern undefined1 LAB_1162c1ff[];
extern undefined1 LAB_11680db5[];
extern undefined1 LAB_116927d2[];
extern undefined1 LAB_116bac75[];
extern undefined1 LAB_116c29f5[];
extern undefined1 LAB_116c40a5[];
extern undefined1 LAB_116c41c9[];
extern undefined1 LAB_116e307d[];
extern undefined1 LAB_1170b9dc[];
extern undefined1 LAB_1171d14d[];
extern undefined1 LAB_1172522d[];
extern undefined1 LAB_1173341d[];
extern undefined1 LAB_1173f566[];
extern undefined1 LAB_117535fd[];
extern undefined1 LAB_1175eeff[];
extern undefined1 LAB_117617f0[];
extern undefined1 LAB_11761820[];
extern undefined1 LAB_11762bbe[];
extern undefined1 LAB_1177d501[];
extern undefined1 LAB_1178ecf3[];
extern undefined1 LAB_117a36e5[];
extern undefined1 LAB_117a7677[];
extern undefined1 LAB_117aace5[];
extern undefined1 LAB_117b1cfd[];
extern undefined1 LAB_117b3410[];
extern undefined1 LAB_117b4865[];
extern undefined1 LAB_117be50c[];
extern undefined1 LAB_117cca1d[];
extern undefined1 LAB_117cd248[];
extern undefined1 LAB_117d03a7[];
extern int *PTR_DAT_1211e5e8;
extern int *PTR_DAT_1211e5ec;
extern int *PTR_DAT_12120410;
extern int *PTR_DAT_12120418;
extern int *PTR_GetCurrentProcessId_12122330;
extern int *PTR_GetSystemTime_121223c0;
extern int *PTR_GetTickCount_121223f0;
extern int *PTR_QueryPerformanceCounter_121224c8;
extern int *PTR_free_12121e64;
extern int *PTR_realloc_12121e60;
extern int *PTR_s_COMPILER_msvc_1928_119fc028;
extern int *PTR_s_acr_hdpi_1211e5f0;
extern int *PTR_s_activate_extensions_119f78c8;
extern int *PTR_s_delete_119f7d80;
extern int *PTR_s_image_1211e5fc;
extern int *PTR_s_macdcr_1211e5e4;
extern int *PTR_s_pcdcr_1211e5e0;
extern int *PTR_s_presentationmap_1211e600;
extern int *PTR_s_service_1211e5f8;
extern int *PTR_s_sized_1211e5f4;
extern char s_fixed_point_overflow_in_11c05f38[];
extern char s_local_time_unavailable_119fe60c[];
extern char s_service__119dd8ac[];
extern char s_x_rincon_cpcontainer__118abbf4[];
extern void *ExceptionList;
void FUN_1000155a(undefined4 *param_1,int param_2,undefined4 *param_3);
template<class... A> int FUN_1000155a(A...);
void __fastcall FUN_10302a60(int param_1);
template<class... A> int FUN_10302a60(A...);
void __fastcall FUN_107c03d0(int param_1);
template<class... A> int FUN_107c03d0(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_10878180(undefined4 param_1,char *param_2);
template<class... A> int FUN_10878180(A...);
void FUN_10879b10(void);
template<class... A> int FUN_10879b10(A...);
void __fastcall FUN_10a99b40(int param_1);
template<class... A> int FUN_10a99b40(A...);
char * FUN_10b74210(char *param_1,undefined1 *param_2,undefined4 param_3,char param_4);
template<class... A> int FUN_10b74210(A...);
basic_istream<char,std::char_traits<char>> * FUN_10ba4650(basic_istream<char,std::char_traits<char>> *param_1,undefined4 *param_2,byte param_3);
template<class... A> int FUN_10ba4650(A...);
undefined1 * FUN_10bae6d0(int *param_1,char *param_2);
template<class... A> int FUN_10bae6d0(A...);
/* WARNING: Removing unreachable block (ram,0x10baf0cd) */ /* WARNING: Heritage AFTER dead removal. Example location: s0xfffffb1c : 0x10baf700 */ /* WARNING: Restarted to delay deadcode elimination for space: stack */ void FUN_10baec50(undefined4 *param_1,undefined4 param_2,char param_3,int param_4);
uint FUN_10c66110(int param_1,uint param_2,uint param_3,byte *param_4,uint param_5);
template<class... A> int FUN_10c66110(A...);
void FUN_10c66d50(int *param_1,char *param_2,undefined4 param_3);
template<class... A> int FUN_10c66d50(A...);
void __fastcall FUN_10dbc660(int param_1);
template<class... A> int FUN_10dbc660(A...);
void FUN_10e066e0(float param_1);
template<class... A> int FUN_10e066e0(A...);
int * __fastcall FUN_10e3cae0(int *param_1);
template<class... A> int FUN_10e3cae0(A...);
SCStr * FUN_10ea8270(SCStr *param_1,SCStr *param_2);
template<class... A> int FUN_10ea8270(A...);
void __fastcall FUN_10ee36d0(int param_1);
template<class... A> int FUN_10ee36d0(A...);
void __fastcall FUN_10ef3470(undefined4 *param_1);
template<class... A> int FUN_10ef3470(A...);
void FUN_10ef35a0(byte *param_1);
template<class... A> int FUN_10ef35a0(A...);
void FUN_10ef3920(int param_1,uint param_2);
template<class... A> int FUN_10ef3920(A...);
undefined4 * __fastcall FUN_10feca10(undefined4 *param_1);
template<class... A> int FUN_10feca10(A...);
void FUN_11038b00(undefined4 param_1);
template<class... A> int FUN_11038b00(A...);
void FUN_11080360(undefined4 param_1,undefined1 *param_2);
template<class... A> int FUN_11080360(A...);
undefined1 FUN_110be010(undefined4 param_1,undefined4 param_2,char **param_3,char **param_4);
template<class... A> int FUN_110be010(A...);
void __fastcall FUN_111054d0(int param_1);
template<class... A> int FUN_111054d0(A...);
void FUN_11185050(char *param_1);
template<class... A> int FUN_11185050(A...);
void FUN_111fd660(void);
template<class... A> int FUN_111fd660(A...);
void FUN_1123b6a0(undefined1 *param_1,undefined4 *param_2);
template<class... A> int FUN_1123b6a0(A...);
/* WARNING: Type propagation algorithm not settling */ /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_11247490(undefined4 param_1);
template<class... A> int FUN_11247490(A...);
void FUN_112a8d70(undefined4 *param_1,int param_2,undefined4 *param_3);
template<class... A> int FUN_112a8d70(A...);
void FUN_112b41c0(int *param_1);
template<class... A> int FUN_112b41c0(A...);
void FUN_112b7810(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_112b7810(A...);
void FUN_112b81d0(int param_1,undefined4 param_2);
template<class... A> int FUN_112b81d0(A...);
LPCRITICAL_SECTION FUN_112f5bb0(PRTL_CRITICAL_SECTION_DEBUG param_1);
template<class... A> int FUN_112f5bb0(A...);
void FUN_112fef90(undefined4 param_1,size_t param_2,void *param_3);
template<class... A> int FUN_112fef90(A...);
void FUN_11305d50(char *param_1);
template<class... A> int FUN_11305d50(A...);
/* WARNING: Type propagation algorithm not settling */ void FUN_113064b0(int param_1,int *param_2,int param_3,int param_4,int param_5);
void FUN_1130c8c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_1130c8c0(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 FUN_1131fc40(undefined4 param_1,int param_2,undefined4 *param_3,longlong *param_4);
template<class... A> int FUN_1131fc40(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_11321070(undefined4 *param_1,int *param_2,undefined4 *param_3);
template<class... A> int FUN_11321070(A...);
int FUN_1132bb30(undefined4 *param_1,int param_2,char *param_3,code *param_4,int param_5);
/* WARNING: Removing unreachable block_1135ee40 (ram,0x11361ff3) */ void FUN_1135ee40(int *param_1,undefined4 param_2,byte *param_3,undefined4 param_4,int param_5);
int FUN_113a4210(int *param_1);
template<class... A> int FUN_113a4210(A...);
int FUN_113aae40(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_113aae40(A...);
void FUN_113b3430(int *param_1);
template<class... A> int FUN_113b3430(A...);
void FUN_113c0ca0(int param_1,char *param_2,uint param_3,byte *param_4);
template<class... A> int FUN_113c0ca0(A...);
void FUN_113d0870(undefined4 param_1,int param_2);
template<class... A> int FUN_113d0870(A...);
void FUN_113d0e60(undefined4 param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,uint *param_8);
template<class... A> int FUN_113d0e60(A...);
void FUN_1141d1c0(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
template<class... A> int FUN_1141d1c0(A...);
tm * FUN_11423ea0(__time64_t *param_1,tm *param_2);
template<class... A> int FUN_11423ea0(A...);
int FUN_11439e39(void);
template<class... A> int FUN_11439e39(A...);
void FUN_1146c1b0(undefined4 param_1,int param_2);
template<class... A> int FUN_1146c1b0(A...);
void FUN_114894f0(int *param_1,byte *param_2,byte *param_3);
template<class... A> int FUN_114894f0(A...);
/* Library Function - Single Match ___scrt_acquire_startup_lock Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */undefined4 FUN_1148a5d1(void);
template<class... A> int FUN_1148a5d1(A...);
// Reference entry 1000155a; body size 5 bytes.
extern char iRam00000001;
extern char pbRam1211e5d4;
extern char pbRam1211e5d8;
extern char pbRam1211e5dc;
extern char pppppbRam12120580;
extern char pppppbRam12120584;
extern char pppppbRam12120588;
typedef int errno_t;
typedef int word;
extern char WORD_12411e10_v[];
#define WORD_12411e10 WORD_12411e10_v
extern char _bStack0000001c;
extern char Self_v[];
#define Self Self_v
#line 1 "ENTRY_1000155a"

void FUN_1000155a(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *_Memory;
  LSTATUS LVar2;
  HRESULT HVar3;
  LPCOLESTR lpWideCharStr;
  int *piVar4;
  undefined4 uVar5;
  CLSID *pCVar6;
  CLSID *pCVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  code *pcVar11;
  code *pcVar12;
  bool bVar13;
  int iStack_a4;
  size_t sStack_a0;
  DWORD DStack_9c;
  HKEY apHStack_98 [2];
  undefined4 *puStack_90;
  HKEY__ HStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  CLSID CStack_78;
  CLSID CStack_68;
  OLECHAR aOStack_58 [42];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&iStack_a4);
  puStack_90 = (undefined4 *)(param_1);
  (*(struct __RFLD *)&HStack_8c).unused = (int)(param_2);
  iStack_84 = (int)(0);
  iStack_80 = (int)(0);
  uStack_7c = (undefined4)(0);
  (*(struct __RFLD *)&CStack_78).Data1 = (int)(0);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  if ((undefined4 *)(param_3) != (undefined4 *)(0x0)) {
    *param_3 = (undefined4)(0);
    param_3[1] = (undefined4)(0);
    param_3[2] = (undefined4)(0);
    param_3[3] = (undefined4)(0);
  }
  thunk_FUN_1145c250(param_2,&DAT_118da62c,0x10);
  iVar1 = (int)(GetNumberOfInterfaces(&sStack_a0), 0);
  pcVar11 = (code *)(malloc_exref);
  if (iVar1 == 0) {
    sStack_a0 = (size_t)(iStack_a4 * 0x288);
    _Memory = (int *)(malloc( (void *)(sStack_a0) ), 0);
    if ((int *)(_Memory) != (int *)(0x0)) {
      iVar1 = (int)(GetAdaptersInfo(_Memory,&sStack_a0), 0);
      if (iVar1 == 0) {
        LVar2 = (LSTATUS)(RegOpenKeyExA((HKEY)0x80000002,"SOFTWARE\\Sonos\\DesktopController",0,0x20019, (uint)&apHStack_98), 0);
        piVar10 = (int *)(_Memory);
        pcVar12 = (code *)(free_exref);
        if (LVar2 == (LSTATUS)(0)) {
          DStack_9c = (DWORD)(0x4e);
          LVar2 = (LSTATUS)(RegQueryValueExW(apHStack_98[0],L"Interface",(LPDWORD)0x0,(LPDWORD)&HStack_8c, (LPBYTE)(uint)&aOStack_58,&DStack_9c), 0);
          pcVar12 = (code *)(free_exref);
          if ((LVar2 == (LSTATUS)(0)) &&
             (HVar3 = (HRESULT)(CLSIDFromString((uint)&aOStack_58,&CStack_68), 0), piVar8 = (int *)(_Memory), pcVar12 = (code *)(free_exref), HVar3 == (HRESULT)(0))) {
            do {
              iVar1 = (int)(MultiByteToWideChar(0,0,(LPCSTR)(piVar8 + 2),-1,(LPWSTR)0x0,0), 0);
              lpWideCharStr = (LPCOLESTR)((LPCOLESTR)(*pcVar11)(iVar1 * 2), 0);
              MultiByteToWideChar(0,0,(LPCSTR)(piVar8 + 2),-1,lpWideCharStr,iVar1);
              HVar3 = (HRESULT)(CLSIDFromString(lpWideCharStr,&CStack_78), 0);
              pcVar12 = (code *)(free_exref);
              free(lpWideCharStr);
              if (HVar3 == (HRESULT)(0)) {
                pCVar6 = (CLSID *)(&CStack_78);
                uVar9 = (uint)(0xc);
                pCVar7 = (CLSID *)(&CStack_68);
                while (pCVar6->Data1 == pCVar7->Data1) {
                  pCVar6 = (CLSID *)((CLSID * *)((struct __RFLD *)(uintptr_t)(((uint)&pCVar6)))->Data2);
                  pCVar7 = (CLSID *)((CLSID * *)((struct __RFLD *)(uintptr_t)(((uint)&pCVar7)))->Data2);
                  bVar13 = (bool)(uVar9 < 4);
                  uVar9 = (uint)(uVar9 - 4);
                  if (bVar13) {
                    if ((int *)(piVar8) != (int *)(0x0)) goto LAB_112a8f50;
                    goto LAB_112a8f35;
                  }
                }
              }
              piVar8 = (int *)((int *)*piVar8);
              pcVar11 = (code *)(malloc_exref);
            } while ((int *)(piVar8) != (int *)(0x0));
          }
        }
LAB_112a8f35:
        do {
          piVar4 = (int *)((int *)thunk_FUN_112a8530(piVar10), 0);
          if ((int *)(piVar4) != (int *)(0x0)) goto LAB_112a8f63;
          piVar10 = (int *)((int *)*piVar10);
          piVar8 = (int *)(_Memory);
        } while ((int *)(piVar10) != (int *)(0x0));
LAB_112a8f50:
        piVar4 = (int *)((int *)thunk_FUN_112a8530(piVar8), 0);
        if ((int *)(piVar4) == (int *)(0x0)) {
          piVar4 = (int *)(piVar8 + 0x6b);
        }
LAB_112a8f63:
        iVar1 = (int)(Ordinal_11(piVar4 + 1), 0);
        iStack_88 = (int)(iVar1);
        (*pcVar12)(_Memory);
        ((struct __RFLD *)(apHStack_98[0]))->unused = (*(struct __RFLD *)&HStack_8c).unused;
        ((struct __RFLD *)(apHStack_98[0]))[1].unused = iStack_88;
        ((struct __RFLD *)(apHStack_98[0]))[2].unused = iStack_84;
        ((struct __RFLD *)(apHStack_98[0]))[3].unused = iStack_80;
        uVar5 = (undefined4)(Ordinal_12(iVar1,0x10), 0);
        thunk_FUN_1145c250(apHStack_98[0],uVar5);
        thunk_FUN_1148ac28();
        return;
      }
      free(_Memory);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 101b87f0; body size 199 bytes.
#line 1 "ENTRY_101b87f0"

bool __thiscall Recovered_Bulk::m_FUN_101b87f0(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  pcVar2 = (char *)((char *)thunk_FUN_1148b586((int)pcVar2 - (int)(param_2 + 1)), 0);
  pcVar3 = (char *)(strstr(param_2,"-diag"), 0);
  *(int *)(uintptr_t)(param_1 + 0x14) = (bool)((uintptr_t)( pcVar3) != (uintptr_t)(0x0));
  pcVar3 = (char *)(strstr(param_2,"-beta"), 0);
  *(int *)(uintptr_t)(param_1 + 0x15) = (bool)((uintptr_t)( pcVar3) != (uintptr_t)(0x0));
  pcVar3 = (char *)(strstr(param_2,"-dev"), 0);
  *(int *)(uintptr_t)(param_1 + 0x16) = (bool)((uintptr_t)( pcVar3) != (uintptr_t)(0x0));
  iVar4 = (int)(thunk_FUN_101b9160(param_2,"%d.%d-%d%s",param_1 + 8,param_1 + 0xc,param_1 + 0x10,pcVar2), 0);
  if (iVar4 == 4) {
    ((SCStr *)((SCStr *)(param_1 + 0x18)))->int_release();
    ((SCStr *)((SCStr *)(param_1 + 0x18)))->int_allocRep(pcVar2,4);
    free(pcVar2);
    return (bool)(true);
  }
  free(pcVar2);
  return (bool)(iVar4 == 3);
}


// Reference entry 101b88f0; body size 209 bytes.
#line 1 "ENTRY_101b88f0"

bool __thiscall Recovered_Bulk::m_FUN_101b88f0(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *_Str;
  
  _Str = (char *)("");
  if ((char *)*param_2 != (char *)((0x0))) {
    _Str = (char *)((char *)*param_2);
  }
  pcVar2 = (char *)(_Str);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  pcVar2 = (char *)((char *)thunk_FUN_1148b586((int)pcVar2 - (int)(_Str + 1)), 0);
  pcVar3 = (char *)(strstr(_Str,"-diag"), 0);
  *(int *)(uintptr_t)(param_1 + 0x14) = (bool)((uintptr_t)( pcVar3) != (uintptr_t)(0x0));
  pcVar3 = (char *)(strstr(_Str,"-beta"), 0);
  *(int *)(uintptr_t)(param_1 + 0x15) = (bool)((uintptr_t)( pcVar3) != (uintptr_t)(0x0));
  pcVar3 = (char *)(strstr(_Str,"-dev"), 0);
  *(int *)(uintptr_t)(param_1 + 0x16) = (bool)((uintptr_t)( pcVar3) != (uintptr_t)(0x0));
  iVar4 = (int)(thunk_FUN_101b9160(_Str,"%d.%d-%d%s",param_1 + 8,param_1 + 0xc,param_1 + 0x10,pcVar2), 0);
  if (iVar4 == 4) {
    ((SCStr *)((SCStr *)(param_1 + 0x18)))->int_release();
    ((SCStr *)((SCStr *)(param_1 + 0x18)))->int_allocRep(pcVar2,4);
    free(pcVar2);
    return (bool)(true);
  }
  free(pcVar2);
  return (bool)(iVar4 == 3);
}


// Reference entry 1021bf80; body size 1735 bytes.
#line 1 "ENTRY_1021bf80"

void __thiscall Recovered_Bulk::m_FUN_1021bf80(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  char cVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  SCLibrary *pSVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  SCStr *pSVar19;
  undefined4 uVar20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *(undefined1*)(param_1 + 0x31) = (undefined1)(1);
  *(undefined2*)(param_1 + 0x33) = (undefined2)(0);
  param_1[0x32] = (int)((int)param_3);
  iVar5 = (int)(thunk_FUN_110828b0(uVar4), 0);
  puVar14 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[0x2e] != (undefined1 *)(((0x0)))) {
    puVar14 = (undefined1 *)((undefined1 *)param_1[0x2e]);
  }
  param_3 = (int *)((int *)thunk_FUN_11093530(puVar14,0), 0);
  if (param_1[0x1a] != 0) {
    piVar10 = (int *)((int *)param_1[0x1b]);
    if ((int *)(piVar10) != (int *)(0x0)) {
      param_1[0x1a] = (int)(0);
      param_1[0x1b] = (int)(0);
      (**(code **)(*piVar10 + 8))();
    }
    param_1[0x1a] = (int)(0);
    param_1[0x1b] = (int)(0);
  }
  if (param_1[0x2b] != 0) {
    piVar10 = (int *)((int *)param_1[0x2c]);
    if ((int *)(piVar10) != (int *)(0x0)) {
      param_1[0x2b] = (int)(0);
      param_1[0x2c] = (int)(0);
      (**(code **)(*piVar10 + 8))();
    }
    param_1[0x2b] = (int)(0);
    param_1[0x2c] = (int)(0);
  }
  *(undefined2*)((int)param_1 + 0xcf) = (undefined2)(0);
  pcVar15 = (char *)("");
  if ((char *)param_2[0xf] != (char *)(((0x0)))) {
    pcVar15 = (char *)((char *)param_2[0xf]);
  }
  uVar6 = (ulong)(strtoul(pcVar15,(char **)0x0,10), 0);
  if ((uVar6 & 1) != 0) {
    *(undefined1*)((int)param_1 + 0xd2) = (undefined1)(1);
  }
  if (((char *)param_1[0x2f] == (char *)(((0x0)))) || (*(char *)param_1[0x2f] == '\0')) goto LAB_1021c23a;
  piVar10 = (int *)(param_1 + 0x30);
  cVar1 = (char)(thunk_FUN_110a5ba0(piVar10,"object.container.album.musicAlbum"), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_110a5ba0(piVar10,"object.item.audioItem.audioBroadcast"), 0);
    if (cVar1 != '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x78))(), 0);
      if (cVar1 != '\0') {
        *(undefined2*)((int)param_1 + 0xcf) = (undefined2)(1);
        goto LAB_1021c243;
      }
    }
    bVar2 = (bool)(((SCStr *)((SCStr *)(param_1 + 0x2d)))->beginsWith("S://"), 0);
    if (bVar2) {
      *(bool*)((int)param_1 + 0xcf) = (bool)(param_1[0x32] != 0);
      *(int *)(uintptr_t)(param_1 + 0x34) = (bool)(1 < (uintptr_t)param_1[0x32]);
    }
    else {
      cVar1 = (char)(thunk_FUN_110a5ba0(piVar10,"object.container.playlistContainer"), 0);
      if (cVar1 == '\0') {
        pcVar15 = (char *)("");
        if ((char *)*piVar10 != (char *)((0x0))) {
          pcVar15 = (char *)((char *)*piVar10);
        }
        iVar8 = (int)(strncmp(pcVar15,"object.container.radioShow",0x1a), 0);
        if ((iVar8 != 0) ||
           (((cVar1 = (char)(pcVar15[0x1a]), cVar1 != '.' && (cVar1 != '#')) && (cVar1 != '\0')))) {
          pcVar15 = (char *)("");
          if ((char *)*piVar10 != (char *)((0x0))) {
            pcVar15 = (char *)((char *)*piVar10);
          }
          iVar8 = (int)(strncmp(pcVar15,"object.container.podcast",0x18), 0);
          if ((iVar8 != 0) ||
             (((cVar1 = (char)(pcVar15[0x18]), cVar1 != '.' && (cVar1 != '#')) && (cVar1 != '\0')))) {
            cVar1 = (char)(thunk_FUN_110a5ba0(param_2 + 2,"object.item.audioItem.musicTrack"), 0);
            if ((cVar1 != '\0') && ((int *)(param_3) != (int *)(0x0))) {
              puVar14 = (undefined1 *)(&DAT_1186d2ee);
              if ((undefined1 *)param_1[0x2d] != (undefined1 *)(((0x0)))) {
                puVar14 = (undefined1 *)((undefined1 *)param_1[0x2d]);
              }
              cVar1 = (char)((**(code **)(*param_3 + 0xa8))(puVar14), 0);
              if (cVar1 != '\0') {
                *(bool*)((int)param_1 + 0xcf) = (bool)(param_1[0x32] != 0);
                *(int *)(uintptr_t)(param_1 + 0x34) = (bool)(1 < (uintptr_t)param_1[0x32]);
              }
            }
            goto LAB_1021c243;
          }
        }
LAB_1021c23a:
        *(undefined2*)((int)param_1 + 0xcf) = (undefined2)(0);
      }
      else {
        *(bool*)((int)param_1 + 0xcf) = (bool)(param_1[0x32] != 0);
        *(int *)(uintptr_t)(param_1 + 0x34) = (bool)(1 < (uintptr_t)param_1[0x32]);
      }
    }
  }
  else {
    *(bool*)((int)param_1 + 0xcf) = (bool)(param_1[0x32] != 0);
    *(int *)(uintptr_t)(param_1 + 0x34) = (bool)(1 < (uintptr_t)param_1[0x32]);
  }
LAB_1021c243:
  if (*(char *)((int)param_1 + 0xcf) != '\0') {
    piVar7 = (int *)((int *)(**(code **)(*param_1 + 0x198))(&param_2,0), 0);
    piVar10 = (int *)((int *)*piVar7);
    *piVar7 = (int)(0);
    piVar7 = (int *)((int *)param_1[0x1b]);

    if ((int *)(piVar7) != (int *)(0x0)) {
      param_1[0x1a] = (int)(0);
      param_1[0x1b] = (int)(0);
      (**(code **)(*piVar7 + 8))();
    }
    param_1[0x1a] = (int)((int)piVar10);
    if ((int *)(piVar10) == (int *)(0x0)) {
      iVar8 = (int)(0);
    }
    else {
      iVar8 = (int)((**(code **)(*piVar10 + 0xc))(), 0);
    }
    param_1[0x1b] = (int)(iVar8);

    if ((int *)(param_2) != (int *)(0x0)) {
      (**(code **)(*param_2 + 8))();
    }

    pcVar15 = (char *)("");
    if ((char *)param_1[0x30] != (char *)(((0x0)))) {
      pcVar15 = (char *)((char *)param_1[0x30]);
    }
    iVar8 = (int)(strncmp(pcVar15,"object.container.podcast",0x18), 0);
    if ((iVar8 != 0) ||
       (((cVar1 = (char)(pcVar15[0x18]), cVar1 != '.' && (cVar1 != '#')) && (cVar1 != '\0')))) {
      cVar1 = (char)(thunk_FUN_110a5ba0(param_1 + 0x30,"object.item.audioItem.audioBroadcast"), 0);
      if (cVar1 != '\0') {
        cVar1 = (char)((**(code **)(*param_1 + 0x78))(), 0);
        if (cVar1 != '\0') goto LAB_1021c391;
      }
      piVar7 = (int *)((int *)(**(code **)(*param_1 + 0x198))(&param_2,1), 0);
      piVar10 = (int *)((int *)*piVar7);
      *piVar7 = (int)(0);
      piVar7 = (int *)((int *)param_1[0x2c]);

      if ((int *)(piVar7) != (int *)(0x0)) {
        param_1[0x2b] = (int)(0);
        param_1[0x2c] = (int)(0);
        (**(code **)(*piVar7 + 8))();
      }
      param_1[0x2b] = (int)((int)piVar10);
      if ((int *)(piVar10) == (int *)(0x0)) {
        iVar8 = (int)(0);
      }
      else {
        iVar8 = (int)((**(code **)(*piVar10 + 0xc))(), 0);
      }
      param_1[0x2c] = (int)(iVar8);

      if ((int *)(param_2) != (int *)(0x0)) {
        (**(code **)(*param_2 + 8))();
      }

    }
LAB_1021c391:
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("PlayModelHeroView");
    pSVar19 = (SCStr *)((SCStr *)&param_2);

    pSVar9 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
    bVar2 = (bool)(((SCLibParameters *)(*(SCLibParameters **)(pSVar9 + 0x4c)))->hasDeveloperOption(pSVar19), 0);

    ((SCStr *)((SCStr *)&param_2))->int_release();

    if (bVar2) {
      if ((int *)param_1[0x1a] != (int *)(((0x0)))) {
        (**(code **)(*(int *)param_1[0x1a] + 0x14))(param_1[0x26],1);
      }
      if ((int *)param_1[0x2b] != (int *)(((0x0)))) {
        (**(code **)(*(int *)param_1[0x2b] + 0x14))(param_1[0x26],1);
      }
    }
  }
  piVar10 = (int *)(param_3);
  *(undefined1*)(param_1 + 0x36) = (undefined1)(1);
  if ((0x13 < (uint)param_1[0x32]) && ((int *)(param_3) != (int *)(0x0))) {
    puVar14 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)param_1[0x2d] != (undefined1 *)(((0x0)))) {
      puVar14 = (undefined1 *)((undefined1 *)param_1[0x2d]);
    }
    cVar1 = (char)((**(code **)(*param_3 + 0xa4))(puVar14), 0);
    if (cVar1 != '\0') {
      puVar14 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)param_1[0x2e] != (undefined1 *)(((0x0)))) {
        puVar14 = (undefined1 *)((undefined1 *)param_1[0x2e]);
      }
      iVar8 = (int)(thunk_FUN_110935f0(puVar14,0), 0);
      if (iVar8 == 0) {
        iVar5 = (int)((*(code *)**(undefined4 **)(iVar5 + 0x1c))(), 0);
        if (iVar5 == 0) goto LAB_1021c629;
        param_2 = (int *)((int *)thunk_FUN_110cb9c0(), 0);
        if ((int *)(param_2) == (int *)(0x0)) goto LAB_1021c629;
        piVar10 = (int *)(operator_new(0xdbd8), 0);

        param_3 = (int *)(piVar10);
        if ((int *)(piVar10) == (int *)(0x0)) {
          piVar10 = (int *)((int *)0x0);
        }
        else {
          iVar5 = (int)(param_2[0xb]);
          uVar11 = (undefined4)((**(code **)(*(int *)(iVar5 + 4 + *(int *)(*(int *)(iVar5 + 4) + 4)) + 0x48))(), 0);
          uVar20 = (undefined4)(0);
          uVar18 = (undefined4)(0);
          iVar8 = (int)(*(int *)(*(int *)(iVar5 + 4) + 4));
          uVar17 = (undefined4)(2000);
          uVar16 = (undefined4)(2000);
          uVar12 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 4) + 4) + 4 + iVar5) + 0x50)) (2000,2000,0,0), 0);
          pcVar15 = (char *)("GetAllPrefixLocations");
          uVar13 = (undefined4)((**(code **)(*(int *)(iVar5 + iVar8 + 4) + 0x68))("GetAllPrefixLocations",uVar12), 0);
          thunk_FUN_111c0760(uVar11,uVar13,pcVar15,uVar12,uVar16,uVar17,uVar18,uVar20);
          *piVar10 = (int)((int)(uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp);
          piVar10[0x18] = (int)((int)(uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp);
          piVar10[0x11b] = (int)((int)(uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp);
          piVar10[0x35f4] = (int)(0);
          piVar10[0x36f5] = (int)(0);
          *(undefined1*)(piVar10 + 0x35f5) = (undefined1)(0);
        }

        puVar14 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)param_1[0x2d] != (undefined1 *)(((0x0)))) {
          puVar14 = (undefined1 *)((undefined1 *)param_1[0x2d]);
        }
        piVar7 = (int *)((int *)thunk_FUN_1124ffa0("ObjectID",0), 0);
        (**(code **)(*piVar7 + 0xc))(puVar14);
        piVar7 = (int *)(piVar10 + 0x35f4);
        thunk_FUN_1124ff50("TotalPrefixes");
        thunk_FUN_112504b0(piVar7);
        uVar11 = (undefined4)(0x400);
        piVar7 = (int *)(piVar10 + 0x35f5);
        thunk_FUN_1124ff50("PrefixAndIndexCSV");
        thunk_FUN_112503c0(piVar7,uVar11);
        piVar7 = (int *)(piVar10 + 0x36f5);
        thunk_FUN_1124ff50("UpdateID");
        thunk_FUN_112504b0(piVar7);
        *(undefined1*)(param_1 + 0x36) = (undefined1)(0);
      }
      else {
        piVar10 = (int *)((int *)(**(code **)(*piVar10 + 0x28))(), 0);
        puVar14 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)param_1[0x2d] != (undefined1 *)(((0x0)))) {
          puVar14 = (undefined1 *)((undefined1 *)param_1[0x2d]);
        }
        sVar3 = (short)((**(code **)(*piVar10 + 0x10))(puVar14,&param_3), 0);
        if (sVar3 != 0) goto LAB_1021c629;
        *(undefined1*)(param_1 + 0x36) = (undefined1)(0);
        piVar10 = (int *)((int *)(-(uint)((int *)(param_3) != (int *)(0x0)) & (uint)(param_3 + 1)));
      }
      thunk_FUN_102207b0(piVar10,param_1 + 0x22,0);
    }
  }
LAB_1021c629:
  (**(code **)(*param_1 + 0x18c))();

  return;

 } catch (...) { }
}


// Reference entry 10302a60; body size 923 bytes.
#line 1 "ENTRY_10302a60"

void __fastcall FUN_10302a60(int param_1)

{ int stack0xfffffffc;
 try {
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  void *_Dst;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined1 *_Src;
  int iVar9;
  int *piVar10;
  int *local_30;
  int *local_2c;
  int *local_24;
  undefined1 *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 8) == 0) {
    pcVar3 = (char *)((char *)thunk_FUN_1109aba0(0x1a5,&DAT_11882ff0,DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);
    ((SCStr *)((SCStr *)&local_20))->int_allocRep(pcVar3);

    _Src = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(local_20) != (undefined1 *)(0x0)) {
      _Src = (undefined1 *)(local_20);
    }
    uVar4 = (uint)(((SCStr *)((SCStr *)&local_20))->length(), 0);
    thunk_FUN_112af4e0("SCCountryList",4,"CountryNames: %s",_Src);
    _Dst = (char *)((char *)thunk_FUN_1148b586(uVar4 + 1), 0);
    *(void**)(param_1 + 8) = (void *)(_Dst);
    memcpy(_Dst,_Src,uVar4 + 1);
    *(undefined1*)(uVar4 + *(int *)(param_1 + 8)) = (undefined1)(0);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(1);
    for (; (-1 < (int)uVar4 && (*(char *)(uVar4 + *(int *)(param_1 + 8)) == '\n'));
        uVar4 = uVar4 - 1) {
      *(undefined1*)(uVar4 + *(int *)(param_1 + 8)) = (undefined1)(0);
    }
    iVar5 = (int)(0);
    if (0 < (int)uVar4) {
      do {
        if (*(char *)(*(int *)(param_1 + 8) + iVar5) == '\n') {
          *(int*)(param_1 + 0x10) = (int)(*(int *)(param_1 + 0x10) + 1);
        }
        iVar5 = (int)(iVar5 + 1);
      } while (iVar5 < (int)uVar4);
    }
    lVar2 = (longlong)((ulonglong)*(uint *)(param_1 + 0x10) * 8);
    puVar6 = (undefined4 *)((undefined4 *) thunk_FUN_1148b586(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2), 0);
    *(undefined4**)(param_1 + 0xc) = (undefined4 *)(puVar6);
    iVar5 = (int)(0);
    *puVar6 = (undefined4)(*(undefined4 *)(param_1 + 8));
    (*(undefined4**)(param_1 + 0xc))[1] = (undefined4)(uintptr_t)((undefined4 *)((undefined4)(**(undefined4 **)(param_1 + 0xc)), 0));
    if (-1 < (int)uVar4) {
      iVar9 = (int)(0);
      do {
        iVar1 = (int)(*(int *)(param_1 + 8));
        if (*(char *)(iVar1 + iVar5) == ':') {
          *(undefined1*)(iVar1 + iVar5) = (undefined1)(0);
          *(int*)(*(int *)(param_1 + 0xc) + 4 + iVar9) = (int)(*(int *)(param_1 + 8) + 1 + iVar5);
        }
        else if (*(char *)(iVar1 + iVar5) == '\n') {
          *(undefined1*)(iVar1 + iVar5) = (undefined1)(0);
          iVar9 = (int)(iVar9 + 8);
          *(int*)(iVar9 + *(int *)(param_1 + 0xc)) = (int)(*(int *)(param_1 + 8) + 1 + iVar5);
          *(undefined4*)(*(int *)(param_1 + 0xc) + 4 + iVar9) = (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar9));
        }
        iVar5 = (int)(iVar5 + 1);
      } while (iVar5 <= (int)uVar4);
    }
    thunk_FUN_112af4e0("SCCountryList",4,"Sorting %d items",*(int *)(param_1 + 0x10) + -1);
    qsort((char *)(*(int *)(param_1 + 0xc) + 8),*(int *)(param_1 + 0x10) - 1,8, (_PtFuncCompare *)LAB_10011770);
    piVar10 = (int *)((int *)0x0);
    local_30 = (int *)((int *)0x0);
    local_2c = (int *)((int *)0x0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    local_1c = (int *)(operator_new(0x14), 0);
    if ((int *)(local_1c) == (int *)(0x0)) {
      piVar7 = (int *)((int *)0x0);
    }
    else {
      *local_1c = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      local_1c[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *local_1c = (int)((int)(uint)&ghidra_vftable_SCArray);
      local_1c[2] = (int)(0);
      local_1c[3] = (int)(0);
      local_1c[4] = (int)(0);
      piVar7 = (int *)(local_1c);
    }
    if ((int *)(piVar7) != *(int **)(param_1 + 0x14)) {
      piVar8 = (int *)(*(int **)(param_1 + 0x18), 0);
      if ((int *)(piVar8) != (int *)(0x0)) {
        *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
        *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
        (**(code **)(*piVar8 + 8))();
      }
      *(int**)(param_1 + 0x14) = (int *)(piVar7);
      if ((int *)(piVar7) == (int *)(0x0)) {
        *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
      }
      else {
        if (*(code **)(*piVar7 + 0xc) != (code *)((thunk_FUN_101aa0b0))) {
          piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0xc))(), 0);
        }
        *(int**)(param_1 + 0x18) = (int *)(piVar7);
        (**(code **)(*piVar7 + 4))();
      }
    }
    local_1c = (int *)((int *)0x0);
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        piVar7 = (int *)(operator_new(0x10), 0);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
        local_24 = (int *)(piVar7);
        if ((int *)(piVar7) == (int *)(0x0)) {
          piVar7 = (int *)((int *)0x0);
        }
        else {
          ((SCStr *)((SCStr *)&local_18))->int_allocRep(*(char **)(*(int *)(param_1 + 0xc) + 4 + (int)local_1c * 8));
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
          ((SCStr *)((SCStr *)&local_14))->int_allocRep(*(char **)(*(int *)(param_1 + 0xc) + (int)local_1c * 8));
          *piVar7 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
          piVar7[1] = (int)(0);
          g_lSCObjCount = (int)(g_lSCObjCount + 1);
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
          *piVar7 = (int)((int)(uint)&ghidra_vftable_SCCountry);
          ((SCStr *)((SCStr *)(piVar7 + 2)))->m_op_ctor((SCStr *)&local_14);
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
          ((SCStr *)((SCStr *)(piVar7 + 3)))->m_op_ctor((SCStr *)&local_18);
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
          ((SCStr *)((SCStr *)&local_14))->int_release();

          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
          ((SCStr *)((SCStr *)&local_18))->int_release();

        }
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
        piVar8 = (int *)(local_30);
        if ((int *)(piVar7) != (int *)(local_30)) {
          if ((int *)(piVar10) != (int *)(0x0)) {
            local_30 = (int *)((int *)0x0);
            local_2c = (int *)((int *)0x0);
            (**(code **)(*piVar10 + 8))();
          }
          piVar8 = (int *)(piVar7);
          local_30 = (int *)(piVar7);
          if ((int *)(piVar7) == (int *)(0x0)) {
            piVar10 = (int *)((int *)0x0);
            local_2c = (int *)((int *)0x0);
          }
          else if (*(code **)(*piVar7 + 0xc) == (code *)((thunk_FUN_10302a50))) {
            local_2c = (int *)(piVar7);
            (**(code **)(*piVar7 + 4))();
            piVar10 = (int *)(piVar7);
          }
          else {
            piVar10 = (int *)((int *)(**(code **)(*piVar7 + 0xc))(), 0);
            local_2c = (int *)(piVar10);
            (**(code **)(*piVar10 + 4))();
            piVar8 = (int *)(local_30);
          }
        }
        iVar5 = (int)(*(int *)(param_1 + 0x14));
        puVar6 = (undefined4 *)(*(undefined4 **)(iVar5 + 0xc), 0);
        if ((undefined4 *)(puVar6) == *(undefined4 **)(iVar5 + 0x10)) {
          thunk_FUN_102a3810(puVar6,&local_30);
        }
        else {
          *puVar6 = (undefined4)(piVar8);
          puVar6[1] = (undefined4)(piVar10);
          if ((int *)(piVar10) != (int *)(0x0)) {
            (**(code **)(*piVar10 + 4))();
          }
          *(int*)(iVar5 + 0xc) = (int)(*(int *)(iVar5 + 0xc) + 8);
        }
        local_1c = (int *)((int *)((int)local_1c + 1));
      } while ((int)(int)(local_1c) < *(int *)(param_1 + 0x10));
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
    if ((int *)(piVar10) != (int *)(0x0)) {
      (**(code **)(*piVar10 + 8))();
    }

    ((SCStr *)((SCStr *)&local_20))->int_release();
  }

  return;

 } catch (...) { }
}


// Reference entry 1038dec0; body size 499 bytes.
#line 1 "ENTRY_1038dec0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1038dec0(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this; int stack0xfffffffc;
 try {
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar3 = (undefined1 *)(param_2);


  if ((undefined1 *)(param_2) == (undefined1 *)(0x0)) {
    return (undefined4)(0);
  }
  if (param_2[0x51e] != '\0') {
    return (undefined4)(0);
  }

  local_18 = (undefined1 *)(param_1);
  cVar1 = (char)(thunk_FUN_110d3ac0(DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);
  if (cVar1 == '\0') {

    return (undefined4)(0);
  }
  if (puVar3[0x520] == '\0') {

    return (undefined4)(0);
  }
  cVar1 = (char)(thunk_FUN_110d8a70(), 0);
  if (cVar1 == '\0') {

    return (undefined4)(0);
  }
  cVar1 = (char)(thunk_FUN_110d3140(), 0);
  if ((cVar1 != '\0') && (cVar1 = (char)(thunk_FUN_110d55a0(), 0), cVar1 == '\0')) {

    return (undefined4)(0);
  }
  if (((uintptr_t)(*(int *)(uintptr_t)(puVar3 + 0x534))!= (uintptr_t)((undefined1 **)&DAT_00000004)) &&
     (*(undefined1 **)(puVar3 + 0x534) != (undefined1 *)((0x2)))) {

    return (undefined4)(0);
  }
  if (puVar3[0xa70] == '\0') {
    cVar1 = (char)(FUN_1005a7b3(), 0);
    if (cVar1 != '\0') {
      thunk_FUN_110d9720(&param_2);

      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)(param_2) != (undefined1 *)(0x0)) {
        puVar3 = (undefined1 *)(param_2);
      }
      iVar2 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 4))(puVar3,1), 0);
      if (iVar2 == 0) goto LAB_1038dfff;

      thunk_FUN_101ba300();
    }
  }
  else {
    cVar1 = (char)(thunk_FUN_110d3720(), 0);
    if (cVar1 != '\0') {
      thunk_FUN_110d9580(&local_14,0);

      thunk_FUN_110d9580(&param_2,1);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)(local_14) != (undefined1 *)(0x0)) {
        puVar3 = (undefined1 *)(local_14);
      }
      iVar2 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 4))(puVar3,1), 0);
      if (iVar2 != 0) {
        puVar3 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)(param_2) != (undefined1 *)(0x0)) {
          puVar3 = (undefined1 *)(param_2);
        }
        iVar2 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 4))(puVar3,1), 0);
        if (iVar2 != 0) {
          thunk_FUN_101ba300();

          thunk_FUN_101ba300();
          param_1 = (undefined1 *)(local_18);
          goto LAB_1038e05d;
        }
      }
      thunk_FUN_101ba300();
      goto LAB_1038dfff;
    }
  }
LAB_1038e05d:
  cVar1 = (char)(FUN_1006f9dd(), 0);
  if (cVar1 == '\0') {

    return (undefined4)(1);
  }
  thunk_FUN_110d9290(&local_18);

  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(local_18) != (undefined1 *)(0x0)) {
    puVar3 = (undefined1 *)(local_18);
  }
  iVar2 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 4))(puVar3,1), 0);
  if (iVar2 != 0) {
    thunk_FUN_101ba300();

    return (undefined4)(1);
  }
LAB_1038dfff:
  thunk_FUN_101ba300();

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 107c03d0; body size 660 bytes.
#line 1 "ENTRY_107c03d0"

void __fastcall FUN_107c03d0(int param_1)

{ int stack0xfffffffc;
 try {
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  SCStr *pSVar8;
  int *piVar9;
  SCStr *this_;
  SCStr local_40 [12];
  undefined1 local_34 [8];
  int *local_2c;
  int *local_28;
  int local_24;
  int *local_20;
  int *local_18;
  SCStr *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);

  cVar3 = (char)(thunk_FUN_10def450(uVar4), 0);

  thunk_FUN_10def0d0();
  if (cVar3 == '\0') {

    return;
  }
  iVar5 = (int)(thunk_FUN_10eb41b0(), 0);
  iVar5 = (int)(*(int *)(*(int *)(iVar5 + 0x128) + 0x28));
  iVar6 = (int)(thunk_FUN_10eb41b0(), 0);
  local_14 = (SCStr *)(*(SCStr **)(iVar6 + 0x128), 0);
  if ((SCStr *)(local_14) != (SCStr *)(0x0)) {
    (**(code **)(*(int *)local_14 + 4))();
  }

  thunk_FUN_10785ae0(&local_14);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
  if ((SCStr *)(local_14) != (SCStr *)(0x0)) {
    (**(code **)(*(int *)local_14 + 8))();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  uVar4 = (undefined4)(thunk_FUN_10efdbb0(&local_14), 0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
  thunk_FUN_10351370(uVar4);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
  if ((SCStr *)(local_14) != (SCStr *)(0x0)) {
    (**(code **)(*(int *)local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  piVar7 = (int *)((int *)thunk_FUN_10eff900(1), 0);
  piVar9 = (int *)((int *)0x0);
  local_28 = (int *)((int *)0x0);
  local_2c = (int *)(piVar7);
  if ((int *)(piVar7) != (int *)(0x0)) {
    piVar9 = (int *)((int *)(**(code **)(*piVar7 + 0xc))(), 0);
    local_28 = (int *)(piVar9);
    (**(code **)(*piVar9 + 4))();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
  if ((iVar5 == 8) && (iVar6 = (int)(thunk_FUN_10eb41b0(), 0), *(char *)(iVar6 + 0x118) != '\0')) {
    bVar1 = (bool)(true);
  }
  else {
    bVar1 = (bool)(false);
  }
  if (((local_24 == 0) && ((int *)(piVar7) != (int *)(0x0))) && (iVar5 == 7)) {
    bVar2 = (bool)(true);
LAB_107c0512:
    if (!bVar1) {
      if (!bVar2) {
        *(undefined1*)(param_1 + 0xe1) = (undefined1)(1);
        thunk_FUN_10ebb8e0("exitTimer",1000);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
        if ((int *)(piVar9) != (int *)(0x0)) {
          (**(code **)(*piVar9 + 8))();
        }
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
        if ((int *)(local_20) != (int *)(0x0)) {
          (**(code **)(*local_20 + 8))();
        }

        goto LAB_107c0644;
      }
LAB_107c0565:
      thunk_FUN_10c5f1d0(local_24);
      local_14 = (SCStr *)((SCStr *)thunk_FUN_10c61010((uint)&local_40,(uint)&local_34,5,0,0), 0);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
      if ((SCStr *)(local_14) != (SCStr *)(param_1 + 0xe8)) {
        ((SCStr *)((SCStr *)(param_1 + 0xe8)))->int_release();
        *(undefined4*)(param_1 + 0xe8) = (undefined4)(*(undefined4 *)local_14);
        ((SCStr *)((SCStr *)(param_1 + 0xe8)))->int_addref();
      }
      *(undefined4*)(param_1 + 0xec) = (undefined4)(*(undefined4 *)(local_14 + 4));
      *(undefined4*)(param_1 + 0xf0) = (undefined4)(*(undefined4 *)(local_14 + 8));
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xe);
      ((SCStr *)((uint)&local_40))->int_release();
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
    }
  }
  else {
    bVar2 = (bool)(false);
    if (local_24 == 0) goto LAB_107c0512;
    if (!bVar1) goto LAB_107c0565;
  }
  if (iVar5 == 7) {
    *(int *)(uintptr_t)(param_1 + 0xe0) = (bool)((uintptr_t)( piVar7) != (uintptr_t)(0x0));
  }
  pSVar8 = (SCStr *)((SCStr *)thunk_FUN_10efb220(&local_14), 0);
  this_ = (SCStr *)((SCStr *)(param_1 + 0xe4));
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xf);
  if ((SCStr *)(pSVar8) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar8));
    ((SCStr *)(this_))->int_addref();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x10);
  ((SCStr *)((SCStr * *)(&local_14)))->int_release();
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
  if ((int *)(piVar9) != (int *)(0x0)) {
    (**(code **)(*piVar9 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
  if ((int *)(local_20) != (int *)(0x0)) {
    (**(code **)(*local_20 + 8))();
  }

LAB_107c0644:
  if ((int *)(local_18) != (int *)(0x0)) {
    (**(code **)(*local_18 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1086d990; body size 680 bytes.
#line 1 "ENTRY_1086d990"

void __thiscall Recovered_Bulk::m_FUN_1086d990(undefined4 param_2)
{
  int param_1 = (int )this; int stack0xffffff8c;
 try {
  char cVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *local_28;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10dfbb10();

  cVar1 = (char)(thunk_FUN_10def450(), 0);

  thunk_FUN_10def0d0();
  if (cVar1 == '\0') {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("removeVoiceAccounts");

    thunk_FUN_10dfba00();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x13)));
    cVar1 = (char)(thunk_FUN_10def450(), 0);
    thunk_FUN_10def0d0();

    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4)(0);

    if (cVar1 != '\0') {
      iVar4 = (int)(thunk_FUN_10eb41b0(), 0);
      *(undefined1*)(iVar4 + 0x101) = (undefined1)(0);
      iVar4 = (int)(thunk_FUN_10eb41b0(), 0);
      *(undefined1*)(iVar4 + 0x100) = (undefined1)(1);
    }
  }
  else {
    cVar1 = (char)(thunk_FUN_10eba400(), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10ebb920();
    }
    createSCNullAsyncOperation((int)&local_14);

    thunk_FUN_102caa30();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
    if ((int *)(local_14) != (int *)(0x0)) {
      (**(code **)(*local_14 + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
    thunk_FUN_10ebb810("tryAgainTimeout");
    thunk_FUN_10eb41b0();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
    thunk_FUN_10cf34e0();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
    thunk_FUN_10c98c80();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
    if ((int *)(local_18) != (int *)(0x0)) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
    pvVar2 = (void *)(operator_new(0x48), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
    if ((void *)(pvVar2) == (void *)(0x0)) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      ((SCStr *)((SCStr *)&stack0xffffff8c))->m_op_ctor((SCStr *)&param_2);
      piVar3 = (int *)((int *)thunk_FUN_10cc9cb0(2), 0);
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
    if ((int *)(piVar3) != (int *)(0x0)) {
      (**(code **)(*piVar3 + 4))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xb);
    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4)(0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
    thunk_FUN_10ebb810("removeVoiceAccounts");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xc);
    if ((int *)(piVar3) != (int *)(0x0)) {
      (**(code **)(*piVar3 + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
    thunk_FUN_10eb41b0();
    thunk_FUN_10cf34e0();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
    thunk_FUN_10c98c80();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xe);
    thunk_FUN_10302280(param_1 + 0xa8);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xf);
    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x10)));
    (**(code **)(iRam00000001 + 8))();

    if ((int *)(local_28) != (int *)(0x0)) {
      (**(code **)(*local_28 + 8))();

      return;
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10878180; body size 4085 bytes.
#line 1 "ENTRY_10878180"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10878180(undefined4 param_1,char *param_2)

{
 try {
  int *piVar1;
  char **ppcVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  undefined4 *****pppppuVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined1 *puVar15;
  char *pcVar16;
  int *piVar17;
  int *piVar18;
  char **ppcVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  SCStr local_270 [4];
  undefined4 local_26c;
  undefined4 local_268 [6];
  int local_250 [2];
  int local_248 [3];
  undefined4 local_23c;
  undefined4 local_238 [5];
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c [6];
  int local_204 [2];
  int local_1fc [3];
  undefined4 local_1f0;
  undefined4 local_1ec [5];
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0 [6];
  int local_1b8 [2];
  int local_1b0 [3];
  undefined4 local_1a4;
  undefined4 local_1a0 [5];
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184 [6];
  int local_16c [2];
  int local_164 [3];
  undefined4 local_158;
  undefined4 local_154 [5];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined4 local_130;
  undefined1 local_12c [12];
  undefined4 local_120;
  int *local_11c;
  undefined4 local_118 [2];
  undefined4 local_110;
  int *local_10c;
  undefined4 local_108;
  undefined4 local_104 [2];
  char *local_fc;
  char *local_f8;
  char **local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8 [6];
  int local_d0 [2];
  int local_c8 [3];
  undefined4 local_bc;
  undefined4 local_b8 [5];
  undefined4 local_a4;
  int *local_a0;
  int *local_9c;
  undefined4 local_98;
  undefined4 local_94 [2];
  undefined4 local_8c;
  undefined4 local_88 [2];
  int *local_80 [2];
  char *local_78;
  int *local_74;
  undefined1 *local_70;
  undefined1 *local_6c;
  char *local_68 [2];
  undefined4 local_60;
  int *local_5c;
  undefined4 local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  uint local_48;
  char **local_44;
  undefined4 ****local_40;
  char *local_3c;
  int *local_38;
  char *local_34;
  char **local_30;
  undefined4 ****local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  char *local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar5 = (uint)(DAT_12126b84);

  local_130 = (undefined4)(param_1);
  local_8c = (undefined4)(param_1);


  local_14 = (uint)(uVar5);
  thunk_FUN_10ec0ec0(&param_2);

  thunk_FUN_10eb41c0(uVar5);
  thunk_FUN_10eace00((uint)&local_68);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  pcVar16 = (char *)("");
  if ((char *)(local_68[0]) != (char *)(0x0)) {
    pcVar16 = (char *)(local_68[0]);
  }
  ((SCStr *)((SCStr *)&local_38))->int_allocRep(pcVar16);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  thunk_FUN_10c61f70(&local_70,&local_38);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
  ((SCStr *)((SCStr *)&local_38))->int_release();
  local_38 = (int *)((int *)0x0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
  thunk_FUN_10ec0e00();
  uVar20 = (undefined4)(9);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
  thunk_FUN_1087e360(0);
  uVar20 = (undefined4)(thunk_FUN_10647480(uVar20), 0);
  thunk_FUN_10ec3670(uVar20);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
  ((SCStr *)((SCStr *)&local_58))->int_release();
  piVar18 = (int *)(local_5c);

  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
  if ((int *)(local_5c) != (int *)(0x0)) {

    local_5c = (int *)((int *)0x0);
    (**(code **)(*piVar18 + 8))();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
  uVar3 = (undefined1)((undefined1)local_8);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
  if (((char *)(local_68[0]) == (char *)(0x0)) || (*local_68[0] == '\0')) {
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar3);
    uVar20 = (undefined4)(thunk_FUN_10c5f450((uint)&local_88,0x287e,&DAT_11882ff0), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xf);
    thunk_FUN_10ec1b40("title");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x10);
    iVar6 = (int)(thunk_FUN_10eced20(uVar20), 0);
    thunk_FUN_10ec3700(iVar6 + 4);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
    ((SCStr *)((SCStr *)&local_58))->int_release();
    piVar18 = (int *)(local_5c);

    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x12);
    if ((int *)(local_5c) != (int *)(0x0)) {

      local_5c = (int *)((int *)0x0);
      (**(code **)(*piVar18 + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x13);
  }
  else {
    puVar15 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(local_70) != (undefined1 *)(0x0)) {
      puVar15 = (undefined1 *)(local_70);
    }
    uVar20 = (undefined4)(thunk_FUN_10c5f450((uint)&local_88,0x287d,&DAT_1188465c,puVar15), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
    thunk_FUN_10ec1b40("title");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xb);
    iVar6 = (int)(thunk_FUN_10eced20(uVar20), 0);
    thunk_FUN_10ec3700(iVar6 + 4);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xc);
    ((SCStr *)((SCStr *)&local_58))->int_release();
    piVar18 = (int *)(local_5c);

    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
    if ((int *)(local_5c) != (int *)(0x0)) {

      local_5c = (int *)((int *)0x0);
      (**(code **)(*piVar18 + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xe);
  }
  ((SCStr *)((SCStr *)(uint)&local_88))->int_release();
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
  thunk_FUN_105c12d0((uint)&local_80);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x14);
  uVar3 = (undefined1)((undefined1)local_8);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x14);
  local_38 = (int *)((int *)*local_80[0]);
  if ((uintptr_t)((int)((local_38)))!= (uintptr_t)(local_80[0])) {
    local_9c = (int *)((int *)((int)((void *)__readfsdword(0x18)) + _tls_index * 4));
    do {
      piVar17 = (int *)(local_38);
      piVar18 = (int *)(local_38 + 4);
      local_34 = (char *)((char *)local_38[8]);
      local_1c = (char *)((char *)0x0);

      if (0xf < (uint)local_38[9]) {
        piVar18 = (int *)((int *)*piVar18);
      }
      if ((char *)(local_34) < (char *)0x10) {
        local_40 = (undefined4 ****)((undefined4 ****)*piVar18);
        iStack_28 = (int)(piVar18[1]);
        iStack_24 = (int)(piVar18[2]);
        iStack_20 = (int)(piVar18[3]);

        local_2c = (undefined4 ****)(local_40);
      }
      else {
        local_48 = (uint)((uint)local_34 | 0xf);
        if (0x7fffffff < local_48) {

        }
        uVar5 = (uint)(local_48 + 1);
        if (uVar5 < 0x1000) {
          if (uVar5 == 0) {
            local_40 = (undefined4 ****)((undefined4 *****)0x0);
          }
          else {
            local_40 = (undefined4 ****)(operator_new(uVar5), 0);
          }
        }
        else {
          if (local_48 + 0x24 <= uVar5) goto LAB_10879170;
          ppppuVar7 = (undefined4 ****)(operator_new(local_48 + 0x24), 0);
          if ((undefined4 ****)(ppppuVar7) == (undefined4 ****)(0x0)) goto LAB_108790a4;
          local_40 = (undefined4 ****)((undefined4 ****)((int)ppppuVar7 + 0x23U & 0xffffffe0));
          local_40[-1] = (undefined4 ***)(ppppuVar7);
        }
        local_2c = (undefined4 ****)(local_40);
        memcpy(local_40,piVar18,(size_t)(local_34 + 1));
        local_18 = (uint)(local_48);
      }
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x15);
      pcVar16 = (char *)("");
      if ((char *)(param_2) != (char *)(0x0)) {
        pcVar16 = (char *)(param_2);
      }
      pcVar14 = (char *)(pcVar16);
      do {
        cVar4 = (char)(*pcVar14);
        pcVar14 = (char *)(pcVar14 + 1);
      } while (cVar4 != '\0');
      pppppuVar8 = (undefined4 *****)(&local_2c);
      if (0xf < local_18) {
        pppppuVar8 = (undefined4 *****)((undefined4 *****)local_40);
      }
      local_48 = (uint)(local_18);
      local_1c = (char *)(local_34);
      local_34 = (char *)(pcVar16 + 1);
      cVar4 = (char)(thunk_FUN_104068e0(pppppuVar8,local_1c,pcVar16,(int)pcVar14 - (int)(pcVar16 + 1)), 0);
      if (cVar4 != '\0') {
        ppcVar19 = (char **)((char **)piVar17[10]);
        local_30 = (char **)((char **)piVar17[0xb]);
        local_34 = (char *)((char *)0x0);
        local_54 = (char *)((char *)0x0);
        local_3c = (char *)((char *)0x0);
        local_50 = (char *)((char *)0x0);
        local_4c = (char *)((char *)0x0);
        local_44 = (char **)(ppcVar19);
        if ((char **)(ppcVar19) != (char **)(local_30)) {
          uVar5 = (uint)((int)local_30 - (int)ppcVar19 >> 3);
          if (0x1fffffff < uVar5) {
LAB_10879170:
                    
            thunk_FUN_1012a2a0();
          }
          local_44 = (char **)((char **)(uVar5 * 8));
          if ((char **)(local_44) < (char **)0x1000) {
            if ((char **)(local_44) == (char **)(0x0)) {
              local_3c = (char *)((char *)0x0);
            }
            else {
              local_3c = (char *)(operator_new((uint)local_44), 0);
            }
          }
          else {
            if ((char **)(((int)local_44 + 0x23U)) <= (char **)(local_44)) goto LAB_10879170;
            pvVar9 = (char *)(operator_new((int)local_44 + 0x23U), 0);
            if ((void *)(pvVar9) == (void *)(0x0)) goto LAB_108790a4;
            local_3c = (char *)((char *)((int)pvVar9 + 0x23U & 0xffffffe0));
            *(void**)(local_3c + -4) = (void *)(pvVar9);
          }
          ppcVar2 = (char **)(local_30);
          local_4c = (char *)((char *)((int)local_44 + (int)local_3c));
          local_f4 = (char **)(&local_54);
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x17);
          local_fc = (char *)(local_3c);
          local_54 = (char *)(local_3c);
          local_50 = (char *)(local_3c);
          local_44 = (char **)(local_f4);
          do {
            *(char**)local_3c = (char *)((char *)(*ppcVar19));
            piVar18 = (int *)((int *)ppcVar19[1]);
            *(int**)(local_3c + 4) = (int *)(piVar18);
            if ((int *)(piVar18) != (int *)(0x0)) {
              local_f8 = (char *)(local_3c);
              (**(code **)(*piVar18 + 4))();
            }
            local_3c = (char *)(local_3c + 8);
            ppcVar19 = (char **)(ppcVar19 + 2);
          } while ((char **)((ppcVar19)) != (char **)(ppcVar2));
          local_34 = (char *)(local_54);
          piVar17 = (int *)(local_38);
          local_fc = (char *)(local_3c);
          local_f8 = (char *)(local_3c);
        }
        pcVar16 = (char *)(local_34);
        local_54 = (char *)(local_34);
        local_50 = (char *)(local_3c);
        if ((char *)((local_34)) != (char *)(local_3c)) {
          do {
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x19);
            piVar18 = (int *)(*(int **)(pcVar16 + 4), 0);
            local_78 = (char *)(*(char **)pcVar16);
            local_74 = (int *)(piVar18);
            local_34 = (char *)(local_78);
            if ((int *)(piVar18) != (int *)(0x0)) {
              (**(code **)(*piVar18 + 4))();
            }
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1a);
            pcVar14 = (char *)(local_34);
            piVar17 = (int *)(piVar18);
            if ((int *)(piVar18) != (int *)(0x0)) {
              (**(code **)(*piVar18 + 4))(local_34,piVar18);
            }
            uVar20 = (undefined4)(thunk_FUN_10f024a0(pcVar14,piVar17), 0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1b);
            thunk_FUN_10c61ec0(&local_6c,uVar20);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1e);
            ((SCStr *)((SCStr *)(uint)&local_b8))->int_release();
            local_b8[0] = (undefined4)(0);
            local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1f)));
            ((SCStr *)((SCStr *)&local_bc))->int_release();

            thunk_FUN_102a3ea0((uint)&local_c8,*(undefined4 *)(local_c8[0] + 4));
            thunk_FUN_1148a50e(local_c8[0],0x14);
            cVar4 = (char)(*(char *)((int)*(int **)(local_d0[0] + 4) + 0xd), 0);
            piVar17 = (int *)(*(int **)(local_d0[0] + 4), 0);
            while (cVar4 == '\0') {
              thunk_FUN_1086f2f0((uint)&local_d0,piVar17[2]);
              piVar1 = (int *)((int *)*piVar17);
              thunk_FUN_1148a50e(piVar17,0x14);
              piVar18 = (int *)(local_74);
              piVar17 = (int *)(piVar1);
              cVar4 = (char)(*(char *)((int)piVar1 + 0xd));
            }
            thunk_FUN_1148a50e(local_d0[0],0x14);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x20);
            ((SCStr *)((SCStr *)(uint)&local_e8))->int_release();
            local_e8[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x21);
            ((SCStr *)((SCStr *)&local_ec))->int_release();

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x22);
            ((SCStr *)((SCStr *)&local_f0))->int_release();

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1d);
            pcVar14 = (char *)(local_34);
            piVar17 = (int *)(piVar18);
            if ((int *)(piVar18) != (int *)(0x0)) {
              (**(code **)(*piVar18 + 4))(local_34,piVar18);
            }
            uVar20 = (undefined4)(thunk_FUN_10f024a0(pcVar14,piVar17), 0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x23);
            thunk_FUN_10c5ee20(uVar20);
            thunk_FUN_10c61010(&local_60,(uint)&local_138,6,0,0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x26);
            ((SCStr *)((SCStr *)(uint)&local_154))->int_release();
            local_154[0] = (undefined4)(0);
            local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x27)));
            ((SCStr *)((SCStr *)&local_158))->int_release();

            thunk_FUN_102a3ea0((uint)&local_164,*(undefined4 *)(local_164[0] + 4));
            thunk_FUN_1148a50e(local_164[0],0x14);
            cVar4 = (char)(*(char *)((int)*(int **)(local_16c[0] + 4) + 0xd), 0);
            piVar17 = (int *)(*(int **)(local_16c[0] + 4), 0);
            while (cVar4 == '\0') {
              thunk_FUN_1086f2f0((uint)&local_16c,piVar17[2]);
              piVar18 = (int *)((int *)*piVar17);
              thunk_FUN_1148a50e(piVar17,0x14);
              cVar4 = (char)(*(char *)((int)piVar18 + 0xd));
              piVar17 = (int *)(piVar18);
              piVar18 = (int *)(local_74);
            }
            thunk_FUN_1148a50e(local_16c[0],0x14);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x28);
            ((SCStr *)((SCStr *)(uint)&local_184))->int_release();
            local_184[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x29);
            ((SCStr *)((SCStr *)&local_188))->int_release();

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2a);
            ((SCStr *)((SCStr *)&local_18c))->int_release();

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x25);
            pcVar14 = (char *)(local_34);
            piVar17 = (int *)(piVar18);
            if ((int *)(piVar18) != (int *)(0x0)) {
              (**(code **)(*piVar18 + 4))(local_34,piVar18);
            }
            uVar20 = (undefined4)(thunk_FUN_10f024a0(pcVar14,piVar17), 0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2b);
            thunk_FUN_10c5ee20(uVar20);
            if ((*(int *)(*local_9c + 0x104) < (int)(DAT_121a2030)) &&
               (thunk_FUN_1148ab00(&DAT_121a2030), DAT_121a2030 == -1)) {
              DAT_121a200c = (int)(0);
              DAT_121a2010 = (int)(0);
              DAT_121a2014 = (int)(0);
              *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2d);
              DAT_121a2008 = (int)((uint)&ghidra_vftable_SCSetupAssetSet);
              DAT_121a2018 = (int)((void *)0x0);
              DAT_121a201c = (int)(0);
              DAT_121a2018 = (int)(operator_new(0x18), 0);
              *(void**)DAT_121a2018 = (void *)((int)(DAT_121a2018));
              *(void**)((int)DAT_121a2018 + 4) = (void *)(DAT_121a2018);
              *(void**)((int)DAT_121a2018 + 8) = (void *)(DAT_121a2018);
              *(undefined2*)((int)DAT_121a2018 + 0xc) = (undefined2)(0x101);
              *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2e);
              DAT_121a2020 = (int)((void *)0x0);
              DAT_121a2024 = (int)(0);
              DAT_121a2020 = (int)(operator_new(0x18), 0);
              *(void**)DAT_121a2020 = (void *)((int)(DAT_121a2020));
              *(void**)((int)DAT_121a2020 + 4) = (void *)(DAT_121a2020);
              *(void**)((int)DAT_121a2020 + 8) = (void *)(DAT_121a2020);
              *(undefined2*)((int)DAT_121a2020 + 0xc) = (undefined2)(0x101);
              _atexit(thunk_FUN_118064a0);
              *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2b);
              thunk_FUN_1148aaa4(&DAT_121a2030);
            }
            local_44 = (char **)((char **)thunk_FUN_10e0f250((uint)&local_140), 0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2f);
            ((SCStr *)((SCStr *)(uint)&local_b8))->int_release();
            local_b8[0] = (undefined4)(0);
            local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x30)));
            ((SCStr *)((SCStr *)&local_bc))->int_release();

            thunk_FUN_102a3ea0((uint)&local_c8,*(undefined4 *)(local_c8[0] + 4));
            thunk_FUN_1148a50e(local_c8[0],0x14);
            cVar4 = (char)(*(char *)((int)*(int **)(local_d0[0] + 4) + 0xd), 0);
            piVar17 = (int *)(*(int **)(local_d0[0] + 4), 0);
            while (cVar4 == '\0') {
              thunk_FUN_1086f2f0((uint)&local_d0,piVar17[2]);
              piVar18 = (int *)((int *)*piVar17);
              thunk_FUN_1148a50e(piVar17,0x14);
              cVar4 = (char)(*(char *)((int)piVar18 + 0xd));
              piVar17 = (int *)(piVar18);
              piVar18 = (int *)(local_74);
            }
            thunk_FUN_1148a50e(local_d0[0],0x14);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x31);
            ((SCStr *)((SCStr *)(uint)&local_e8))->int_release();
            local_e8[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x32);
            ((SCStr *)((SCStr *)&local_ec))->int_release();

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x33);
            ((SCStr *)((SCStr *)&local_f0))->int_release();

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x25);
            pcVar14 = (char *)(local_34);
            piVar17 = (int *)(piVar18);
            if ((int *)(piVar18) != (int *)(0x0)) {
              (**(code **)(*piVar18 + 4))(local_34,piVar18);
            }
            uVar20 = (undefined4)(thunk_FUN_10f024a0(pcVar14,piVar17), 0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x34);
            thunk_FUN_10c5ee20(uVar20);
            thunk_FUN_10c5f840(&local_60);
            uVar21 = (undefined4)(4);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x35);
            uVar20 = (undefined4)(thunk_FUN_10e0f500(&local_a4,3), 0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x36);
            pcVar14 = (char *)(local_34);
            piVar17 = (int *)(piVar18);
            if ((int *)(piVar18) != (int *)(0x0)) {
              (**(code **)(*piVar18 + 4))(local_34,piVar18,uVar20,uVar21);
            }
            puVar10 = (undefined4 *)((undefined4 *)thunk_FUN_10f024a0(pcVar14,piVar17), 0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x37);
            puVar15 = (undefined1 *)(&DAT_1186d2ee);
            if ((undefined1 *)*puVar10 != (undefined1 *)((0x0))) {
              puVar15 = (undefined1 *)((undefined1 *)*puVar10);
            }
            thunk_FUN_10ec1c00(puVar15);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x38);
            uVar20 = (undefined4)(thunk_FUN_10ecbbd0(uVar20), 0);
            puVar15 = (undefined1 *)(&DAT_1186d2ee);
            if ((undefined1 *)(local_6c) != (undefined1 *)(0x0)) {
              puVar15 = (undefined1 *)(local_6c);
            }
            uVar11 = (undefined4)(thunk_FUN_10c5f450((uint)&local_88,0x277d,&DAT_1188465c,puVar15,uVar20), 0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x39);
            uVar12 = (undefined4)(thunk_FUN_10ed4540((uint)&local_104,(uint)&local_12c,uVar11), 0);
            puVar10 = (undefined4 *)((uint)&local_94);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x3a);
            pcVar14 = (char *)(local_34);
            piVar17 = (int *)(piVar18);
            if ((int *)(piVar18) != (int *)(0x0)) {
              (**(code **)(*piVar18 + 4))(local_34,piVar18,puVar10,uVar12);
            }
            puVar13 = (undefined4 *)((undefined4 *)thunk_FUN_10f024a0(pcVar14,piVar17), 0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x3b);
            puVar15 = (undefined1 *)(&DAT_1186d2ee);
            if ((undefined1 *)*puVar13 != (undefined1 *)((0x0))) {
              puVar15 = (undefined1 *)((undefined1 *)*puVar13);
            }
            thunk_FUN_10ec1f00(puVar15);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x3c);
            thunk_FUN_10ecec70(puVar10);
            thunk_FUN_10ecf6e0(uVar12);
            thunk_FUN_10ece7b0(uVar11);
            iVar6 = (int)(thunk_FUN_10ecd3c0(uVar20,uVar21), 0);
            thunk_FUN_10ec3700(iVar6 + 4);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x3d);
            ((SCStr *)((SCStr *)&local_108))->int_release();
            piVar17 = (int *)(local_10c);

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x3e);
            if ((int *)(local_10c) != (int *)(0x0)) {

              local_10c = (int *)((int *)0x0);
              (**(code **)(*piVar17 + 8))();
            }
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x3f);
            ((SCStr *)((SCStr *)(uint)&local_1a0))->int_release();
            local_1a0[0] = (undefined4)(0);
            local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x40)));
            ((SCStr *)((SCStr *)&local_1a4))->int_release();

            thunk_FUN_102a3ea0((uint)&local_1b0,*(undefined4 *)(local_1b0[0] + 4));
            thunk_FUN_1148a50e(local_1b0[0],0x14);
            cVar4 = (char)(*(char *)((int)*(int **)(local_1b8[0] + 4) + 0xd), 0);
            piVar17 = (int *)(*(int **)(local_1b8[0] + 4), 0);
            while (cVar4 == '\0') {
              thunk_FUN_1086f2f0((uint)&local_1b8,piVar17[2]);
              piVar18 = (int *)((int *)*piVar17);
              thunk_FUN_1148a50e(piVar17,0x14);
              cVar4 = (char)(*(char *)((int)piVar18 + 0xd));
              piVar17 = (int *)(piVar18);
              piVar18 = (int *)(local_74);
            }
            thunk_FUN_1148a50e(local_1b8[0],0x14);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x41);
            ((SCStr *)((SCStr *)(uint)&local_1d0))->int_release();
            local_1d0[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x42);
            ((SCStr *)((SCStr *)&local_1d4))->int_release();

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x43);
            ((SCStr *)((SCStr *)&local_1d8))->int_release();

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x44);
            ((SCStr *)((SCStr *)(uint)&local_104))->int_release();
            local_104[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x45);
            ((SCStr *)((SCStr *)(uint)&local_88))->int_release();
            local_88[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x46);
            ((SCStr *)((SCStr *)(uint)&local_118))->int_release();
            piVar17 = (int *)(local_11c);
            local_118[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x47);
            if ((int *)(local_11c) != (int *)(0x0)) {

              local_11c = (int *)((int *)0x0);
              (**(code **)(*piVar17 + 8))();
            }
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x48);
            ((SCStr *)((SCStr *)(uint)&local_1ec))->int_release();
            local_1ec[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x49);
            ((SCStr *)((SCStr *)&local_1f0))->int_release();

            thunk_FUN_102a3ea0((uint)&local_1fc,*(undefined4 *)(local_1fc[0] + 4));
            thunk_FUN_1148a50e(local_1fc[0],0x14);
            thunk_FUN_1086f2f0((uint)&local_204,*(undefined4 *)(local_204[0] + 4));
            thunk_FUN_1148a50e(local_204[0],0x14);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4a);
            ((SCStr *)((SCStr *)(uint)&local_21c))->int_release();
            local_21c[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4b);
            ((SCStr *)((SCStr *)&local_220))->int_release();

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4c);
            ((SCStr *)((SCStr *)&local_224))->int_release();
            piVar17 = (int *)(local_a0);

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4d);
            if ((int *)(local_a0) != (int *)(0x0)) {

              local_a0 = (int *)((int *)0x0);
              (**(code **)(*piVar17 + 8))();
            }
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4e);
            ((SCStr *)((SCStr *)(uint)&local_94))->int_release();
            local_94[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4f);
            ((SCStr *)((SCStr *)(uint)&local_238))->int_release();
            local_238[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x50);
            ((SCStr *)((SCStr *)&local_23c))->int_release();

            thunk_FUN_102a3ea0((uint)&local_248,*(undefined4 *)(local_248[0] + 4));
            thunk_FUN_1148a50e(local_248[0],0x14);
            thunk_FUN_1086f2f0((uint)&local_250,*(undefined4 *)(local_250[0] + 4));
            thunk_FUN_1148a50e(local_250[0],0x14);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x51);
            ((SCStr *)((SCStr *)(uint)&local_268))->int_release();
            local_268[0] = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x52);
            ((SCStr *)((SCStr *)&local_26c))->int_release();

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x53);
            ((SCStr *)((uint)&local_270))->int_release();
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x54);
            ((SCStr *)((SCStr *)&local_60))->int_release();

            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x55);
            ((SCStr *)((SCStr *)&local_6c))->int_release();
            local_6c = (undefined1 *)((undefined1 *)0x0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x56);
            if ((int *)(piVar18) != (int *)(0x0)) {
              local_78 = (char *)((char *)0x0);
              local_74 = (int *)((int *)0x0);
              (**(code **)(*piVar18 + 8))();
            }
            pcVar16 = (char *)(pcVar16 + 8);
          } while ((char *)(pcVar16) != (char *)(local_3c));
          local_3c = (char *)(local_50);
          piVar17 = (int *)(local_38);
        }
        local_50 = (char *)(local_3c);
        if ((char *)(local_54) != (char *)(0x0)) {
          pcVar16 = (char *)(local_3c);
          pcVar14 = (char *)(local_54);
          if ((char *)(local_54) != (char *)(local_3c)) {
            do {
              piVar18 = (int *)(*(int **)(pcVar14 + 4), 0);
              *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x57);
              if ((int *)(piVar18) != (int *)(0x0)) {
                pcVar14[0] = (char)('\0');
                pcVar14[1] = (char)('\0');
                pcVar14[2] = (char)('\0');
                pcVar14[3] = (char)('\0');
                pcVar14[4] = (char)('\0');
                pcVar14[5] = (char)('\0');
                pcVar14[6] = (char)('\0');
                pcVar14[7] = (char)('\0');
                (**(code **)(*piVar18 + 8))();
                pcVar16 = (char *)(local_3c);
              }
              pcVar14 = (char *)(pcVar14 + 8);
            } while ((char *)(pcVar14) != (char *)(pcVar16));
          }
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x15);
          uVar5 = (uint)(((int)local_4c - (int)local_54 >> 3) * 8);
          pcVar16 = (char *)(local_54);
          if (0xfff < uVar5) {
            pcVar16 = (char *)(*(char **)(local_54 + -4), 0);
            uVar5 = (uint)(uVar5 + 0x23);
            if ((char *)(0x1f) < (char *)((local_54) + (-4 - (int)pcVar16))) goto LAB_108790a4;
          }
          thunk_FUN_1148a50e(pcVar16,uVar5);
          local_54 = (char *)((char *)0x0);
          local_50 = (char *)((char *)0x0);
          local_4c = (char *)((char *)0x0);
        }
      }
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x14);
      if (0xf < local_48) {
        uVar5 = (uint)(local_48 + 1);
        pppppuVar8 = (undefined4 *****)((undefined4 *****)local_40);
        if (0xfff < uVar5) {
          pppppuVar8 = (undefined4 *****)((undefined4 *****)local_40[-1]);
          uVar5 = (uint)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_40 + (-4 - (int)pppppuVar8))) {
LAB_108790a4:
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(pppppuVar8,uVar5);
      }
      local_38 = (int *)((int *)piVar17[2]);
      if (*(char *)((int)local_38 + 0xd) == '\0') {
        cVar4 = (char)(*(char *)(*local_38 + 0xd));
        piVar18 = (int *)((int *)*local_38);
        while (cVar4 == '\0') {
          cVar4 = (char)(*(char *)(*piVar18 + 0xd));
          local_38 = (int *)(piVar18);
          piVar18 = (int *)((int *)*piVar18);
        }
      }
      else {
        cVar4 = (char)(*(char *)(piVar17[1] + 0xd));
        piVar18 = (int *)((int *)piVar17[1]);
        while ((local_38 = (int *)(piVar18), cVar4 == '\0' && ((int *)(piVar17) == (int *)local_38[2]))) {
          cVar4 = (char)(*(char *)(local_38[1] + 0xd));
          piVar18 = (int *)((int *)local_38[1]);
          piVar17 = (int *)(local_38);
        }
      }
      uVar3 = (undefined1)((undefined1)local_8);
    } while ((uintptr_t)((int)((local_38)))!= (uintptr_t)(local_80[0]));
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar3);
  thunk_FUN_105b6d40((uint)&local_80,local_80[0][1]);
  thunk_FUN_1148a50e(local_80[0],0x34);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x58);
  ((SCStr *)((SCStr *)&local_70))->int_release();
  local_70 = (undefined1 *)((undefined1 *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x59)));
  ((SCStr *)((SCStr *)(uint)&local_68))->int_release();
  local_68[0] = (char *)((char *)0x0);

  ((SCStr *)((SCStr *)&param_2))->int_release();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10879b10; body size 1492 bytes.
#line 1 "ENTRY_10879b10"

void FUN_10879b10(void)

{ int stack0xffffff4c;
 try {
  undefined1 uVar1;
  undefined3 uVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>> *pbVar10;
  undefined4 *puVar11;
  uint uVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>> *pbVar13;
  int *local_78 [2];
  int local_70;
  basic_string<char,std::char_traits<char>,std::allocator<char>> *local_6c;
  int local_68;
  int local_64;
  basic_string<char,std::char_traits<char>,std::allocator<char>> *local_60;
  int *local_5c;
  uint local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  basic_string<char,std::char_traits<char>,std::allocator<char>> *local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>> *local_48;
  undefined4 *local_44;
  undefined1 local_3d;
  basic_string<char,std::char_traits<char>,std::allocator<char>> *local_3c;
  SCStr local_38 [4];
  undefined **local_34;
  void *local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>> *local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  thunk_FUN_10ec0fb0();

  thunk_FUN_105c12d0();
  local_3c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)0x0);
  local_6c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)0x0);



  *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
  uVar2 = (undefined3)(*(unsigned short *)((char *)&local_8 + 1));
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(0);
  local_5c = (int *)((int *)*local_78[0]);
  if ((uintptr_t)((int)((local_5c)))!= (uintptr_t)(local_78[0])) {
    do {
      piVar8 = (int *)(local_5c);
      piVar9 = (int *)(local_5c + 4);
      local_3c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)local_5c[8]);
      local_1c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)0x0);

      if (0xf < (uint)local_5c[9]) {
        piVar9 = (int *)((int *)*piVar9);
      }
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_3c) < (basic_string<char,std::char_traits<char>,std::allocator<char>> *)0x10) {
        local_2c = (void *)((void *)*piVar9);
        iStack_28 = (int)(piVar9[1]);
        iStack_24 = (int)(piVar9[2]);
        iStack_20 = (int)(piVar9[3]);

        local_1c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_3c);
      }
      else {
        local_58 = (uint)((uint)local_3c | 0xf);
        if (0x7fffffff < local_58) {

        }
        uVar4 = (uint)(local_58 + 1);
        if (uVar4 < 0x1000) {
          if (uVar4 == 0) {
            local_2c = (void *)((void *)0x0);
          }
          else {
            local_2c = (void *)(operator_new(uVar4), 0);
          }
        }
        else {
          if (local_58 + 0x24 <= uVar4) goto LAB_1087a0df;
          pvVar5 = (char *)(operator_new(local_58 + 0x24), 0);
          if ((void *)(pvVar5) == (void *)(0x0)) goto LAB_1087a092;
          local_2c = (char *)((char *)((int)pvVar5 + 0x23U & 0xffffffe0));
          *(void**)((int)local_2c - 4) = (void *)(pvVar5);
        }
        memcpy(local_2c,piVar9,(size_t)(local_3c + 1));
        local_1c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_3c);
      }
      pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)piVar8[10]);
      local_3c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)piVar8[0xb]);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
      local_54 = (undefined4 *)((undefined4 *)0x0);
      local_44 = (undefined4 *)((undefined4 *)0x0);
      local_50 = (undefined4 *)((undefined4 *)0x0);
      local_4c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)0x0);
      local_18 = (uint)(local_58);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(pbVar10) != (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_3c)) {
        uVar4 = (uint)((int)local_3c - (int)pbVar10 >> 3);
        local_48 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(pbVar10);
        if (0x1fffffff < uVar4) {
LAB_1087a0df:
                    
          thunk_FUN_1012a2a0();
        }
        local_48 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(uVar4 * 8));
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_48) < (basic_string<char,std::char_traits<char>,std::allocator<char>> *)0x1000) {
          if ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_48) == (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(0x0)) {
            local_44 = (undefined4 *)((undefined4 *)0x0);
          }
          else {
            local_44 = (undefined4 *)(operator_new((uint)local_48), 0);
          }
        }
        else {
          if (local_48 + 0x23 <= (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_48)) goto LAB_1087a0df;
          pvVar5 = (char *)(operator_new((uint)(local_48 + 0x23)), 0);
          if ((void *)(pvVar5) == (void *)(0x0)) goto LAB_1087a092;
          local_44 = (undefined4 *)((undefined4 *)((int)pvVar5 + 0x23U & 0xffffffe0));
          local_44[-1] = (undefined4)(pvVar5);
        }
        pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_3c);
        local_4c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_48 + (int)local_44);
        local_60 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_54);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
        local_54 = (undefined4 *)(local_44);
        local_50 = (undefined4 *)(local_44);
        do {
          *local_44 = (undefined4)(*(undefined4 *)pbVar10);
          piVar9 = (int *)(*(int **)(pbVar10 + 4), 0);
          local_44[1] = (undefined4)(piVar9);
          if ((int *)(piVar9) != (int *)(0x0)) {
            (**(code **)(*piVar9 + 4))();
          }
          local_44 = (undefined4 *)(local_44 + 2);
          pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(pbVar10 + 8);
          piVar8 = (int *)(local_5c);
        } while ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(pbVar10) != (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(pbVar13));
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
      local_3c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)0x0);
      local_60 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *) ((int)local_44 - (int)local_54 >> 3));
      local_48 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_60);
      if ((undefined4 *)(local_54) != (undefined4 *)(local_44)) {
        pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)0x0);
        puVar6 = (undefined4 *)(local_54);
        local_50 = (undefined4 *)(local_44);
        do {
          piVar9 = (int *)((int *)puVar6[1]);
          if ((int *)(piVar9) != (int *)(0x0)) {
            (**(code **)(*piVar9 + 4))();
          }
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
          cVar3 = (char)(thunk_FUN_1034e460(), 0);
          if (cVar3 != '\0') {
            pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(pbVar10 + 1);
            local_3c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(pbVar10);
          }
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
          if ((int *)(piVar9) != (int *)(0x0)) {
            (**(code **)(*piVar9 + 8))();
          }
          puVar6 = (undefined4 *)(puVar6 + 2);
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
        } while ((undefined4 *)(puVar6) != (undefined4 *)(local_44));
        local_44 = (undefined4 *)(local_50);
        piVar8 = (int *)(local_5c);
      }
      iVar7 = (int)(local_68);

      if ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_60) != (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(0x0)) {
        local_50 = (undefined4 *)(local_44);
        if (local_68 == local_70) {
          FUN_1086ed30(local_68,&local_2c,&local_48,&local_3c);
          local_70 = (int)(local_64);
          local_58 = (uint)(local_18);
          local_44 = (undefined4 *)(local_50);
        }
        else {
          FUN_10872dc0(&local_6c);
          local_68 = (int)(iVar7 + 0x24);
          local_58 = (uint)(local_18);
          local_44 = (undefined4 *)(local_50);
        }
      }
      local_50 = (undefined4 *)(local_44);
      if ((undefined4 *)(local_54) != (undefined4 *)(0x0)) {
        puVar6 = (undefined4 *)(local_44);
        puVar11 = (undefined4 *)(local_54);
        if ((undefined4 *)(local_54) != (undefined4 *)(local_44)) {
          do {
            piVar9 = (int *)((int *)puVar11[1]);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
            if ((int *)(piVar9) != (int *)(0x0)) {
              *puVar11 = (undefined4)(0);
              puVar11[1] = (undefined4)(0);
              (**(code **)(*piVar9 + 8))();
              puVar6 = (undefined4 *)(local_44);
            }
            puVar11 = (undefined4 *)(puVar11 + 2);
          } while ((undefined4 *)((puVar11)) != (undefined4 *)(puVar6));
        }
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
        puVar6 = (undefined4 *)(local_54);
        if ((0xfff < (uint)(((int)local_4c - (int)local_54 >> 3) * 8)) &&
           (puVar6 = (undefined4 *)((undefined4 *)local_54[-1]), 0x1f < (uint)((int)local_54 + (-4 - (int)puVar6)))) goto LAB_1087a092;
        thunk_FUN_1148a50e(puVar6);
        local_54 = (undefined4 *)((undefined4 *)0x0);
        local_50 = (undefined4 *)((undefined4 *)0x0);
        local_4c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *)0x0);
      }
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
      if (0xf < local_58) {
        pvVar5 = (void *)(local_2c);
        if ((0xfff < local_58 + 1) &&
           (pvVar5 = (char *)(*(void **)((int)local_2c + -4), 0), 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar5)))) goto LAB_1087a092;
        thunk_FUN_1148a50e(pvVar5);
      }
      local_5c = (int *)((int *)piVar8[2]);
      if (*(char *)((int)local_5c + 0xd) == '\0') {
        cVar3 = (char)(*(char *)(*local_5c + 0xd));
        piVar9 = (int *)((int *)*local_5c);
        while (cVar3 == '\0') {
          cVar3 = (char)(*(char *)(*piVar9 + 0xd));
          local_5c = (int *)(piVar9);
          piVar9 = (int *)((int *)*piVar9);
        }
      }
      else {
        cVar3 = (char)(*(char *)(piVar8[1] + 0xd));
        piVar9 = (int *)((int *)piVar8[1]);
        while ((local_5c = (int *)(piVar9), cVar3 == '\0' && ((int *)(piVar8) == (int *)local_5c[2]))) {
          cVar3 = (char)(*(char *)(local_5c[1] + 0xd));
          piVar9 = (int *)((int *)local_5c[1]);
          piVar8 = (int *)(local_5c);
        }
      }
    } while ((uintptr_t)((int)((local_5c)))!= (uintptr_t)(local_78[0]));
    local_3c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_6c);
    uVar2 = (undefined3)(*(unsigned short *)((char *)&local_8 + 1));
  }
  *(unsigned short*)((char *)&local_8 + 1) = (unsigned short)(uVar2);
  pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_3c);
  uVar4 = (uint)((local_68 - (int)local_3c) / 0x24);
  local_6c = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_3c);
  if (uVar4 != 0) {
    local_60 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((basic_string<char,std::char_traits<char>,std::allocator<char>> *) ((uint)local_60 & 0xffffff00));
    FUN_108724e0(local_3c,local_68,uVar4);
    uVar12 = (uint)(0);
    uVar1 = (undefined1)((undefined1)local_8);
    do {
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar1);
      local_48 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(pbVar10);
      ((SCStr *)((SCStr *)&stack0xffffff4c))->int_allocStdRep(pbVar10);
      thunk_FUN_10878180((uint)&local_38);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xb);
      thunk_FUN_10ec3540();
      thunk_FUN_10604790();
      thunk_FUN_10604820();
      local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xc);
      ((SCStr *)((uint)&local_38))->int_release();
      uVar12 = (uint)(uVar12 + 1);
      pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_48 + 0x24);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
      uVar1 = (undefined1)((undefined1)local_8);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
      local_48 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(pbVar10);
    } while (uVar12 < uVar4);
  }
  pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(local_3c);
  iVar7 = (int)(thunk_FUN_10eca560(), 0);
  if (iVar7 == 0) {
    thunk_FUN_1087bdd0();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
    thunk_FUN_10ec3540();
    thunk_FUN_10604790();
    thunk_FUN_10604820();
    local_34 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xe);
    ((SCStr *)((uint)&local_38))->int_release();
  }
  if ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(pbVar10) != (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(0x0)) {
    FUN_1086eaf0(pbVar10,local_68);
    pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(pbVar10);
    if ((0xfff < (uint)(((local_70 - (int)pbVar10) / 0x24) * 0x24)) &&
       (pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(*(basic_string<char,std::char_traits<char>,std::allocator<char>> **) (pbVar10 + -4), 0), (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(0x1f) < (basic_string<char,std::char_traits<char>,std::allocator<char>> *)((pbVar10) + (-4 - (int)pbVar13)))) {
LAB_1087a092:
                    
      _invalid_parameter_noinfo_noreturn();
    }
    thunk_FUN_1148a50e(pbVar13);
  }
  thunk_FUN_105b6d40((uint)&local_78);
  thunk_FUN_1148a50e(local_78[0]);

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10a3e140; body size 1041 bytes.
#line 1 "ENTRY_10a3e140"

void __thiscall Recovered_Bulk::m_FUN_10a3e140(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_d8 [88];
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined1 local_74 [24];
  undefined1 local_5c [28];
  undefined1 local_40 [40];
  undefined1 local_18 [12];
  SCStr local_c [4];
  undefined4 local_8;


  uVar4 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)(uint)&local_74), 0);

  cVar3 = (char)(thunk_FUN_10def450(uVar4), 0);

  thunk_FUN_10def0d0();
  if (cVar3 == '\0') {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("forward");

    uVar4 = (undefined4)(thunk_FUN_10df6f00(&param_2), 0);
    local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(3)));
    cVar3 = (char)(thunk_FUN_10def450(uVar4), 0);
    thunk_FUN_10def0d0();

    ((SCStr *)((SCStr *)&param_2))->int_release();

    if (cVar3 == '\0') {
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("chooseAnother");

      uVar4 = (undefined4)(thunk_FUN_10df6f00(&param_2), 0);
      local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(6)));
      cVar3 = (char)(thunk_FUN_10def450(uVar4), 0);
      thunk_FUN_10def0d0();

      ((SCStr *)((SCStr *)&param_2))->int_release();

      if (cVar3 != '\0') {
        iVar5 = (int)(thunk_FUN_10eb41b0(), 0);
        *(undefined1*)(iVar5 + 0x140) = (undefined1)(1);

        return;
      }
      ((SCStr *)((uint)&local_c))->int_allocRep("remove");

      uVar4 = (undefined4)(thunk_FUN_10dfba00((uint)&local_c), 0);
      *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(9);
      thunk_FUN_10deee60(uVar4);
      *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(10);
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("removeFromBondingGroup");
      *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xb);
      thunk_FUN_10dfba00(&param_2);
      *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xc);
      uVar4 = (undefined4)(thunk_FUN_10defac0((uint)&local_5c,(uint)&local_40), 0);
      *(unsigned char*)((char *)&local_78 + 0) = (unsigned char)(0xd);
      cVar3 = (char)(thunk_FUN_10def490(uVar4), 0);
      thunk_FUN_105a1d20();
      thunk_FUN_105a1c80();
      thunk_FUN_10def0d0();
      local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0xe)));
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (undefined4)(0);
      thunk_FUN_105a1d20();
      thunk_FUN_105a1c80();
      thunk_FUN_10def0d0();

      ((SCStr *)((uint)&local_c))->int_release();

      if (cVar3 == '\0') {
        ((SCStr *)((SCStr *)&local_8))->int_allocRep("wait");

        uVar4 = (undefined4)(thunk_FUN_10dfd7b0(&local_8), 0);
        local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x11)));
        cVar3 = (char)(thunk_FUN_10def450(uVar4), 0);
        thunk_FUN_10def0d0();

        ((SCStr *)((SCStr *)&local_8))->int_release();


        if (cVar3 == '\0') {

          return;
        }
      }
      else {
        cVar3 = (char)(thunk_FUN_10be6d30(1), 0);
        if ((cVar3 != '\0') && (cVar3 = (char)(thunk_FUN_10be6d30(3), 0), cVar3 != '\0')) {
          thunk_FUN_10ebb8e0(&DAT_118d39d4,1000);

          return;
        }
      }
      thunk_FUN_10eb41b0();
      thunk_FUN_10a40780();
      iVar5 = (int)(thunk_FUN_10eb41b0(), 0);
      *(undefined4*)(param_1 + 0xe0) = (undefined4)(*(undefined4 *)(iVar5 + 0x11c));
    }
    iVar5 = (int)(thunk_FUN_10eb41b0(), 0);
    if (*(int *)(iVar5 + 0x11c) == 0) {

      return;
    }
    thunk_FUN_10a3f3e0();

    return;
  }
  thunk_FUN_10ebbab0(4);
  iVar5 = (int)(thunk_FUN_10eb41b0(), 0);
  thunk_FUN_10a21a10(iVar5 + 0x100);

  thunk_FUN_10a22590((uint)&local_d8);

  thunk_FUN_10365150();
  iVar5 = (int)(thunk_FUN_10eb41b0(), 0);
  uVar2 = (uint)(*(uint *)(iVar5 + 0x11c));
  *(uint*)(param_1 + 0xe0) = (uint)(uVar2);
  *(bool*)(param_1 + 0xe5) = (bool)((uVar2 & 0x70) != 0);
  *(undefined4*)(param_1 + 0x13c) = (undefined4)(*(undefined4 *)(param_1 + 0x108));
  piVar6 = (int *)((int *)thunk_FUN_10be54d0((uint)&local_18,1,0), 0);
  piVar1 = (int *)((int *)(param_1 + 0xe8));
  if ((int *)(piVar1) != (int *)(piVar6)) {
    thunk_FUN_1036e270();
    *piVar1 = (int)(*piVar6);
    *(int*)(param_1 + 0xec) = (int)(piVar6[1]);
    *(int*)(param_1 + 0xf0) = (int)(piVar6[2]);
    *piVar6 = (int)(0);
    piVar6[1] = (int)(0);
    piVar6[2] = (int)(0);
  }
  thunk_FUN_1036e270();
  if ((*(int *)(param_1 + 0x13c) != 1) && (*(int *)(param_1 + 0x13c) != 3)) {
    *(int *)(uintptr_t)(param_1 + 0xe7) = (bool)(1 < (uintptr_t)((*(int *)(uintptr_t)(param_1 + 0xec) - *piVar1) / 0x1c));
    uVar2 = (uint)(*(uint *)(param_1 + 0xe0));
    if ((uVar2 & 0x22) != 0) {
      if ((uVar2 & 0x44) != 0) {
        *(undefined1*)(param_1 + 0xe6) = (undefined1)(1);

        return;
      }
      *(undefined4*)(param_1 + 0x140) = (undefined4)(1);

      return;
    }
    if ((uVar2 & 0x44) != 0) {
      *(undefined4*)(param_1 + 0x140) = (undefined4)(3);

      return;
    }
    if ((uVar2 & 0x11) == 0) {

      return;
    }
  }
  *(undefined4*)(param_1 + 0x140) = (undefined4)(2);

  return;

 } catch (...) { }
}


// Reference entry 10a99b40; body size 614 bytes.
#line 1 "ENTRY_10a99b40"

void __fastcall FUN_10a99b40(int param_1)

{
 try {
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_d4;
  char *local_d0;
  int *piStack_cc;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int *local_80;
  void *local_7c;
  undefined1 *puStack_78;
  undefined4 local_74;
  undefined4 *local_70;
  void *local_6c [14];
  int *local_34;
  int *local_c;
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)&local_70);

  thunk_FUN_10dfbb10();

  piStack_cc = (int *)((int *)0x10a99b8c);
  cVar2 = (char)(thunk_FUN_10def450(), 0);

  thunk_FUN_10def0d0();
  if (cVar2 == '\0') {
    piStack_cc = (int *)((int *)0x10a99caa);
    ((SCStr *)((SCStr *)(uint)&local_6c))->int_allocRep("getProduct");

    piStack_cc = (int *)((int *)0x10a99cbd);
    thunk_FUN_10dfba00();
    local_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_74 + 1)) << 8 | (uint)(5)));
    piStack_cc = (int *)((int *)0x10a99cc9);
    cVar2 = (char)(thunk_FUN_10def450(), 0);
    thunk_FUN_10def0d0();

    ((SCStr *)((SCStr *)(uint)&local_6c))->int_release();

    if (cVar2 == '\0') goto LAB_10a99d87;
    piStack_cc = (int *)((int *)0x10a99d00);
    thunk_FUN_10e0ac90();
    local_70 = (undefined4 *)(&local_b4);



    local_80 = (int *)((int *)0x0);
    *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(8);
    *(unsigned short*)((char *)&local_74 + 1) = (unsigned short)(0);
    piStack_cc = (int *)((int *)0x10a99d39);
    thunk_FUN_105ef430();
    *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(9);
    thunk_FUN_10eb41b0();
    local_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_74 + 1)) << 8 | (uint)(10)));
    piStack_cc = (int *)((int *)0x10a99d57);
    thunk_FUN_105ef430();
    local_c = (int *)(local_34);
    if ((int *)(local_80) != (int *)(0x0)) {
      piStack_cc = (int *)((int *)0x10a99d6f);
      (**(code **)(*local_80 + 0x10))();
      local_c = (int *)(local_34);
    }
  }
  else {


    thunk_FUN_105ee3e0();

    thunk_FUN_10224630();

    piStack_cc = (int *)((int *)0x10a99bcf);
    local_6c[0] = (void *)(operator_new(0x1a8), 0);
    if (local_6c[0] == (uintptr_t)(0x0)) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piStack_cc = (int *)((int *)0x3e8);
      local_70 = (undefined4 *)(&uStack_f4);
      local_d0 = (char *)((char *)0x0);
      *(unsigned char*)((char *)&local_74 + 0) = (unsigned char)(3);
      puVar1 = (undefined4 *)(&uStack_f4);
      if ((int *)(local_c) != (int *)(0x0)) {
        local_d0 = (char *)((char *)(**(code **)*local_c)(&uStack_f4), 0);
        puVar1 = (undefined4 *)(local_70);
      }
      local_70 = (undefined4 *)(puVar1);
      local_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_74 + 1)) << 8 | (uint)(2)));
      piVar3 = (int *)((int *)thunk_FUN_10e09ee0(), 0);
    }
    piVar4 = (int *)(*(int **)(param_1 + 0xe0), 0);
    local_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_74 + 1)) << 8 | (uint)(1)));
    if ((int *)(piVar3) != (int *)(piVar4)) {
      piVar4 = (int *)(*(int **)(param_1 + 0xe4), 0);
      if ((int *)(piVar4) != (int *)(0x0)) {
        *(undefined4*)(param_1 + 0xe0) = (undefined4)(0);
        *(undefined4*)(param_1 + 0xe4) = (undefined4)(0);
        (**(code **)(*piVar4 + 8))();
      }
      *(int**)(param_1 + 0xe0) = (int *)(piVar3);
      if ((int *)(piVar3) == (int *)(0x0)) {
        *(undefined4*)(param_1 + 0xe4) = (undefined4)(0);
        piVar4 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(), 0);
        *(int**)(param_1 + 0xe4) = (int *)(piVar3);
        (**(code **)(*piVar3 + 4))();
        piVar4 = (int *)(*(int **)(param_1 + 0xe0), 0);
      }
    }
    local_d0 = (char *)("getProduct");

    piStack_cc = (int *)(piVar4);
    thunk_FUN_10ebb810();
  }
  if ((int *)(local_c) != (int *)(0x0)) {
    piStack_cc = (int *)((int *)0x10a99d87);
    (**(code **)(*local_c + 0x10))();
  }
LAB_10a99d87:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10b74210; body size 1961 bytes.
#line 1 "ENTRY_10b74210"

char * FUN_10b74210(char *param_1,undefined1 *param_2,undefined4 param_3,char param_4)

{
 try {
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  SCStr *pSVar16;
  int *piVar17;
  SCStr *this_;
  SCStr *pSVar18;
  bool bVar19;
  undefined1 *local_68;
  SCStr *local_64;
  SCStr *local_60;
  SCStr *local_5c;
  undefined4 local_58;
  SCStr *local_54;
  SCStr *local_50;
  SCStr **local_4c;
  int *local_48 [2];
  int *local_40;
  undefined4 local_3c;
  SCStr *local_38;
  SCStr *local_34;
  SCStr **local_30;
  int *local_2c;
  char *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  char *local_1c;
  int *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar14 = (undefined1 *)(param_2);


  uVar5 = (uint)(DAT_12126b84);

  pSVar18 = (SCStr *)((SCStr *)(param_2 + 8));
  ((SCStr *)((SCStr *)&local_28))->m_op_ctor(pSVar18);
  if (((char *)(local_28) == (char *)(0x0)) || (*local_28 == (char)(('\0')))) {
    bVar19 = (bool)(true);
  }
  else {
    bVar19 = (bool)(false);
  }

  ((SCStr *)((SCStr *)&local_28))->int_release();

  if (bVar19) {
    ((SCStr *)((SCStr *)&local_24))->m_op_ctor((SCStr *)(puVar14 + 4));

    puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_103d42c0(&local_28), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
    puVar14 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(local_24) != (undefined1 *)(0x0)) {
      puVar14 = (undefined1 *)(local_24);
    }
    puVar13 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar6 != (undefined1 *)((0x0))) {
      puVar13 = (undefined1 *)((undefined1 *)*puVar6);
    }
    ((SCStr *)(param_1))->stringWithFormat("<a href=\"testpoint?name=%s\">%s</a>",puVar13,puVar14,uVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    ((SCStr *)((SCStr *)&local_28))->int_release();
    local_28 = (char *)((char *)0x0);

    pSVar18 = (SCStr *)((SCStr *)&local_24);
  }
  else {
    ((SCStr *)((SCStr *)&local_24))->int_allocRep("</p>");

    ((SCStr *)((SCStr *)&local_18))->int_allocRep("<p>");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
    ((SCStr *)((SCStr *)&local_1c))->m_op_ctor(pSVar18);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
    uVar7 = (undefined4)(thunk_FUN_101a2e90(&local_28,&local_18,&local_1c), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
    thunk_FUN_101a2e90(&local_20,uVar7,&local_24);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xb);
    ((SCStr *)((SCStr *)&local_28))->int_release();
    local_28 = (char *)((char *)0x0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (char *)((char *)0x0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xf);
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (int *)((int *)0x0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
    ((SCStr *)((SCStr *)&local_24))->int_release();
    local_24 = (undefined1 *)((undefined1 *)0x0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x10);
    thunk_FUN_103cf4f0(puVar14 + 0x1c);
    uVar7 = (undefined4)(param_3);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x12);
    uVar4 = (undefined1)((undefined1)local_8);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x12);
    local_2c = (int *)((int *)*local_48[0]);
    if ((uintptr_t)((int)((local_2c)))!= (uintptr_t)(local_48[0])) {
      do {
        piVar17 = (int *)(local_2c);
        ((SCStr *)((SCStr *)&local_1c))->m_op_ctor((SCStr *)(local_2c + 4));
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x13);
        ((SCStr *)((SCStr *)&local_24))->m_op_ctor((SCStr *)(piVar17 + 5));
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x14);
        puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_103d45e0(&local_28,uVar7,&local_1c,0), 0);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x15);
        puVar14 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)(local_24) != (undefined1 *)(0x0)) {
          puVar14 = (undefined1 *)(local_24);
        }
        puVar13 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)*puVar6 != (undefined1 *)((0x0))) {
          puVar13 = (undefined1 *)((undefined1 *)*puVar6);
        }
        pcVar10 = (char *)("");
        if ((char *)(local_1c) != (char *)(0x0)) {
          pcVar10 = (char *)(local_1c);
        }
        ((SCStr *)((char *)&local_18))->stringWithFormat("<div> <span class=\"label\">%1$s</span> <input type=\"text\" name=\"%1$s\" value=\"%2$s\"> <span class=\"note\">%3$s</span> </div>"
                   ,pcVar10,puVar13,puVar14);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x18);
        ((SCStr *)((SCStr *)&local_28))->int_release();
        local_28 = (char *)((char *)0x0);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x17);
        piVar17 = (int *)((int *)&DAT_1186d2ee);
        if ((int *)(local_18) != (int *)(0x0)) {
          piVar17 = (int *)(local_18);
        }
        uVar5 = (uint)(((SCStr *)((SCStr *)&local_18))->length(), 0);
        ((SCStr *)((SCStr *)&local_20))->append((char *)piVar17,uVar5);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x19);
        ((SCStr *)((SCStr *)&local_18))->int_release();
        local_18 = (int *)((int *)0x0);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1a);
        ((SCStr *)((SCStr *)&local_24))->int_release();
        local_24 = (undefined1 *)((undefined1 *)0x0);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1b);
        ((SCStr *)((SCStr *)&local_1c))->int_release();
        local_1c = (char *)((char *)0x0);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x12);
        ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                      *)&local_2c))->op_inc();
        puVar14 = (undefined1 *)(param_2);
        uVar4 = (undefined1)((undefined1)local_8);
      } while ((uintptr_t)((int)((local_2c)))!= (uintptr_t)(local_48[0]));
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar4);
    local_38 = (SCStr *)((SCStr *)&local_40);
    local_40 = (int *)((int *)0x0);

    local_34 = (SCStr *)(local_38);
    local_40 = (int *)(operator_new(0x28), 0);
    *local_40 = (int)((int)local_40);
    local_40[1] = (int)((int)local_40);
    local_40[2] = (int)((int)local_40);
    *(undefined2*)(local_40 + 3) = (undefined2)(0x101);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1c);
    iVar8 = (int)(thunk_FUN_103cdb40(*(undefined4 *)(*(int *)(puVar14 + 0x24) + 4),local_40,param_2), 0);
    local_40[1] = (int)(iVar8);
    local_3c = (undefined4)(*(undefined4 *)(puVar14 + 0x28));
    piVar17 = (int *)((int *)local_40[1]);
    if (*(char *)((int)piVar17 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar17 + 0xd));
      piVar2 = (int *)((int *)*piVar17);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        piVar17 = (int *)(piVar2);
        piVar2 = (int *)((int *)*piVar2);
      }
      *local_40 = (int)((int)piVar17);
      iVar8 = (int)(*(int *)(local_40[1] + 8));
      cVar1 = (char)(*(char *)(iVar8 + 0xd));
      iVar3 = (int)(local_40[1]);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*(int *)(iVar8 + 8) + 0xd));
        iVar3 = (int)(iVar8);
        iVar8 = (int)(*(int *)(iVar8 + 8));
      }
      local_40[2] = (int)(iVar3);
    }
    else {
      *local_40 = (int)((int)local_40);
      local_40[2] = (int)((int)local_40);
    }
    local_18 = (int *)((int *)*local_40);
    if ((int *)((local_18)) != (int *)(local_40)) {
      do {
        piVar17 = (int *)(local_18);
        local_28 = (char *)((char *)0x0);
        pSVar18 = (SCStr *)((SCStr *)(local_18 + 5));
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1e);
        ((SCStr *)((SCStr *)&local_68))->m_op_ctor(pSVar18);
        local_34 = (SCStr *)((SCStr *)piVar17[7]);
        pSVar16 = (SCStr *)((SCStr *)piVar17[6]);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1f);
        uVar4 = (undefined1)((undefined1)local_8);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1f);
        local_64 = (SCStr *)((SCStr *)0x0);
        local_60 = (SCStr *)((SCStr *)0x0);
        local_5c = (SCStr *)((SCStr *)0x0);
        if ((SCStr *)(pSVar16) != (SCStr *)(local_34)) {
          uVar5 = (uint)((int)local_34 - (int)pSVar16 >> 3);
          if (0x1fffffff < uVar5) {
LAB_10b749b4:
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar4);
                    
            thunk_FUN_1012a2a0();
          }
          local_30 = (SCStr **)((SCStr **)(uVar5 * 8));
          if ((SCStr **)(local_30) < (SCStr **)0x1000) {
            if ((SCStr **)(local_30) == (SCStr **)(0x0)) {
              this_ = (SCStr *)((SCStr *)0x0);
            }
            else {
              this_ = (SCStr *)(operator_new((uint)local_30), 0);
            }
          }
          else {
            if ((SCStr **)(((int)local_30 + 0x23U)) <= (SCStr **)(local_30)) goto LAB_10b749b4;
            pvVar9 = (char *)(operator_new((int)local_30 + 0x23U), 0);
            if ((void *)(pvVar9) == (void *)(0x0)) goto LAB_10b749ae;
            this_ = (SCStr *)((SCStr *)((int)pvVar9 + 0x23U & 0xffffffe0));
            *(void**)(this_ + -4) = (void *)(pvVar9);
          }
          pSVar18 = (SCStr *)(local_34);
          local_5c = (SCStr *)((SCStr *)((int)local_30 + (int)this_));
          local_4c = (SCStr **)(&local_64);
          local_64 = (SCStr *)(this_);
          local_60 = (SCStr *)(this_);
          local_54 = (SCStr *)(this_);
          local_30 = (SCStr **)(local_4c);
          do {
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x21);
            local_50 = (SCStr *)(this_);
            local_34 = (SCStr *)(this_);
            ((SCStr *)(this_))->m_op_ctor(pSVar16);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x22);
            ((SCStr *)(this_ + 4))->m_op_ctor(pSVar16 + 4);
            this_ = (SCStr *)(this_ + 8);
            pSVar16 = (SCStr *)(pSVar16 + 8);
          } while ((SCStr *)(pSVar16) != (SCStr *)(pSVar18));
          pSVar18 = (SCStr *)((SCStr *)(local_18 + 5));
          piVar17 = (int *)(local_18);
          local_60 = (SCStr *)(this_);
          local_54 = (SCStr *)(this_);
          local_50 = (SCStr *)(this_);
        }
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x25);
        ((SCStr *)((SCStr *)&local_58))->m_op_ctor(pSVar18 + 0x10);
        pSVar18 = (SCStr *)(local_64);
        if ((SCStr *)(local_64) != (SCStr *)(local_60)) {
          do {
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x26);
            local_11 = (undefined1)(((SCStr *)((SCStr *)&local_58))->op_eq(pSVar18), 0);
            pcVar10 = (char *)(" selected");
            puVar14 = (undefined1 *)(&DAT_1186d2ee);
            if (*(undefined1 **)(pSVar18 + 4) != (undefined1 *)((0x0))) {
              puVar14 = (undefined1 *)(*(undefined1 **)(pSVar18 + 4), 0);
            }
            puVar13 = (undefined1 *)(&DAT_1186d2ee);
            if (*(undefined1 **)pSVar18 != (undefined1 *)((0x0))) {
              puVar13 = (undefined1 *)(*(undefined1 **)pSVar18);
            }
            if (!(bool)local_11) {
              pcVar10 = (char *)("");
            }
            pSVar16 = (SCStr *)((SCStr *)((SCStr *)((char *)&local_2c))->stringWithFormat("<option value=\"%2$s\"%3$s>%1$s</option>",puVar13,puVar14
                                          ,pcVar10), 0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x27);
            pcVar10 = (char *)("");
            if (*(char **)pSVar16 != (char *)((0x0))) {
              pcVar10 = (char *)(*(char **)pSVar16);
            }
            uVar5 = (uint)(((SCStr *)(pSVar16))->length(), 0);
            ((SCStr *)((SCStr *)&local_28))->append(pcVar10,uVar5);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x28);
            ((SCStr *)((SCStr *)&local_2c))->int_release();
            pSVar18 = (SCStr *)(pSVar18 + 8);
            local_2c = (int *)((int *)0x0);
            piVar17 = (int *)(local_18);
          } while ((SCStr *)(pSVar18) != (SCStr *)(local_60));
        }
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x26);
        ((SCStr *)((SCStr *)&local_24))->m_op_ctor((SCStr *)(piVar17 + 4));
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x29);
        puVar14 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)(local_68) != (undefined1 *)(0x0)) {
          puVar14 = (undefined1 *)(local_68);
        }
        pcVar10 = (char *)("");
        if ((char *)(local_28) != (char *)(0x0)) {
          pcVar10 = (char *)(local_28);
        }
        puVar13 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)(local_24) != (undefined1 *)(0x0)) {
          puVar13 = (undefined1 *)(local_24);
        }
        ((SCStr *)((char * *)(&local_1c)))->stringWithFormat("<div> <span class=\"label\">%1$s</span> <select name=\"%1$s\"> %2$s </select> <span class=\"note\">%3$s</span> </div>"
                   ,puVar13,pcVar10,puVar14);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2a);
        pcVar10 = (char *)("");
        if ((char *)(local_1c) != (char *)(0x0)) {
          pcVar10 = (char *)(local_1c);
        }
        uVar5 = (uint)(((SCStr *)((SCStr *)&local_1c))->length(), 0);
        ((SCStr *)((SCStr *)&local_20))->append(pcVar10,uVar5);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2b);
        ((SCStr *)((SCStr *)&local_1c))->int_release();
        local_1c = (char *)((char *)0x0);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2c);
        ((SCStr *)((SCStr *)&local_24))->int_release();
        local_24 = (undefined1 *)((undefined1 *)0x0);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2d);
        ((SCStr *)((SCStr *)&local_58))->int_release();
        pSVar16 = (SCStr *)(local_60);

        pSVar18 = (SCStr *)(local_64);
        if ((SCStr *)(local_64) != (SCStr *)(0x0)) {
          for (;(SCStr *)((pSVar18)) != (SCStr *)(pSVar16); pSVar18 = pSVar18 + 8) {
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2e);
            ((SCStr *)(pSVar18 + 4))->int_release();
            *(undefined4*)(pSVar18 + 4) = (undefined4)(0);
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x2f);
            ((SCStr *)(pSVar18))->int_release();
            *(undefined4*)pSVar18 = (undefined4)((SCStr *)(0));
            piVar17 = (int *)(local_18);
          }
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1e);
          uVar5 = (uint)(((int)local_5c - (int)local_64 >> 3) * 8);
          pSVar18 = (SCStr *)(local_64);
          if (0xfff < uVar5) {
            pSVar18 = (SCStr *)(*(SCStr **)(local_64 + -4), 0);
            uVar5 = (uint)(uVar5 + 0x23);
            if ((SCStr *)(0x1f) < (SCStr *)((local_64) + (-4 - (int)pSVar18))) {
LAB_10b749ae:
                    
              _invalid_parameter_noinfo_noreturn();
            }
          }
          thunk_FUN_1148a50e(pSVar18,uVar5);
          local_64 = (SCStr *)((SCStr *)0x0);
          local_60 = (SCStr *)((SCStr *)0x0);
          local_5c = (SCStr *)((SCStr *)0x0);
        }
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x30);
        ((SCStr *)((SCStr *)&local_68))->int_release();
        local_68 = (undefined1 *)((undefined1 *)0x0);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x31);
        ((SCStr *)((SCStr *)&local_28))->int_release();
        local_18 = (int *)((int *)piVar17[2]);
        if (*(char *)((int)local_18 + 0xd) == '\0') {
          cVar1 = (char)(*(char *)(*local_18 + 0xd));
          piVar17 = (int *)((int *)*local_18);
          while (cVar1 == '\0') {
            cVar1 = (char)(*(char *)(*piVar17 + 0xd));
            local_18 = (int *)(piVar17);
            piVar17 = (int *)((int *)*piVar17);
          }
        }
        else {
          cVar1 = (char)(*(char *)(piVar17[1] + 0xd));
          piVar2 = (int *)((int *)piVar17[1]);
          while ((local_18 = (int *)(piVar2), cVar1 == '\0' && ((int *)(piVar17) == (int *)local_18[2]))) {
            cVar1 = (char)(*(char *)(local_18[1] + 0xd));
            piVar2 = (int *)((int *)local_18[1]);
            piVar17 = (int *)(local_18);
          }
        }
        puVar14 = (undefined1 *)(param_2);
      } while ((int *)((local_18)) != (int *)(local_40));
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1d);
    puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_103d42c0(&local_2c), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x32);
    ((SCStr *)((SCStr *)&param_2))->m_op_ctor((SCStr *)(puVar14 + 4));
    local_34 = (SCStr *)((SCStr *)0x11889d1c);
    puVar14 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(local_20) != (undefined1 *)(0x0)) {
      puVar14 = (undefined1 *)(local_20);
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x33);
    puVar13 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar6 != (undefined1 *)((0x0))) {
      puVar13 = (undefined1 *)((undefined1 *)*puVar6);
    }
    puVar15 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(param_2) != (undefined1 *)(0x0)) {
      puVar15 = (undefined1 *)(param_2);
    }
    bVar19 = (bool)(param_4 == '\0');
    pcVar10 = (char *)("style=\"display: block\"");
    if (bVar19) {
      pcVar10 = (char *)("");
    }
    pcVar11 = (char *)("true");
    if (bVar19) {
      pcVar11 = (char *)("false");
    }
    pcVar12 = (char *)("active");
    if (bVar19) {
      pcVar12 = (char *)("");
    }
    ((SCStr *)(param_1))->stringWithFormat("<div class=\"collapse-row %4$s\"> <button class=\"submit-button\" form=\"%1$s\" title=\"Perform\" aria-label=\"Perform\"> <i class=\"fas fa-play-circle fa-2x\"></i> </button> <button class=\"collapse-button %4$s\" aria-controls=\"content-%1$s\" aria-expanded=\"%5$s\"> %1$s </button> </div> <div id=\"content-%1$s\" class=\"collapse-content\" %6$s> <form id=\"%1$s\" action=\"/testpoint\"> <input type=\"hidden\" name=\"name\" value=\"%2$s\"> %3$s </form> </div>"
               ,puVar15,puVar13,puVar14,pcVar12,pcVar11,pcVar10);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x34);
    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined1 *)((undefined1 *)0x0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x35)));
    ((SCStr *)((SCStr *)&local_2c))->int_release();
    local_2c = (int *)((int *)0x0);
    thunk_FUN_10246170(&local_40,local_40[1]);
    thunk_FUN_1148a50e(local_40,0x28);
    thunk_FUN_10246290((uint)&local_48,local_48[0][1]);
    thunk_FUN_1148a50e(local_48[0],0x18);

    pSVar18 = (SCStr *)((SCStr *)&local_20);
  }
  ((SCStr *)(pSVar18))->int_release();

  return (char *)(param_1);

 } catch (...) { }
}


// Reference entry 10ba4650; body size 245 bytes.
#line 1 "ENTRY_10ba4650"

basic_istream<char,std::char_traits<char>> *
FUN_10ba4650(basic_istream<char,std::char_traits<char>> *param_1,undefined4 *param_2,byte param_3)

{
 try {
  bool bVar1;
  uint uVar2;
  basic_istream<char,std::char_traits<char>> *pbVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) != (uint)0x0) {
    (**(code **)(**(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) + 4))();
  }

  bVar1 = (bool)(((std::basic_istream<> *)(param_1))->_Ipfx(true), 0);

  if (bVar1) {

    param_2[4] = (undefined4)(0);
    puVar4 = (undefined4 *)(param_2);
    if (0xf < (uint)param_2[5]) {
      puVar4 = (undefined4 *)((undefined4 *)*param_2);
    }
    *(undefined1*)puVar4 = (undefined1)((undefined4 *)(0));
    uVar2 = (uint)(((std::basic_streambuf<> *)(*(basic_streambuf<char,std::char_traits<char>> **) (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38)))->sgetc(), 0);
    while( true ) {
      if (uVar2 == 0xffffffff) {
        pbVar3 = (basic_istream<char,std::char_traits<char>> *)((basic_istream<char,std::char_traits<char>> *)FUN_10ba4768(), 0);
        return (basic_istream<char,std::char_traits<char>> *)(pbVar3);
      }
      if (uVar2 == param_3) break;
      if (0x7ffffffe < (uint)param_2[4]) {
        pbVar3 = (basic_istream<char,std::char_traits<char>> *)((basic_istream<char,std::char_traits<char>> *)FUN_10ba4768(), 0);
        return (basic_istream<char,std::char_traits<char>> *)(pbVar3);
      }
      thunk_FUN_101dd3a0(uVar2);
      uVar2 = (uint)(((std::basic_streambuf<> *)(*(basic_streambuf<char,std::char_traits<char>> **) (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38)))->snextc(), 0);
    }
    ((std::basic_streambuf<> *)(*(basic_streambuf<char,std::char_traits<char>> **) (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38)))->sbumpc();
    pbVar3 = (basic_istream<char,std::char_traits<char>> *)((basic_istream<char,std::char_traits<char>> *)FUN_10ba4768(), 0);
    return (basic_istream<char,std::char_traits<char>> *)(pbVar3);
  }
  ((std::basic_ios<> *)((basic_ios<char,std::char_traits<char>> *)(param_1 + *(int *)(*(int *)param_1 + 4))))->setstate(2, false);

  if (*(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) != (uint)0x0) {
    (**(code **)(**(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) + 8))();
  }

  return (basic_istream<char,std::char_traits<char>> *)(param_1);

 } catch (...) { }
}


// Reference entry 10bae6d0; body size 597 bytes.
#line 1 "ENTRY_10bae6d0"

undefined1 * FUN_10bae6d0(int *param_1,char *param_2)

{
 try {
  char cVar1;
  char cVar2;
  int *piVar3;
  tm *ptVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStackY_100 [152];
  undefined4 uStackY_68;
  int **ppiStackY_64;
  int *local_40;
  int *local_3c;
  __time64_t local_38;
  __time64_t local_30;
  int *local_28;
  int *local_24;
  int *local_20;
  tm *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((int *)(param_1) == (int *)(0x0)) {
    return (undefined1 *)((uint)&auStackY_100);
  }

  cVar1 = (char)((**(code **)(*param_1 + 0x9c))(), 0);
  local_18 = (int)((**(code **)(*param_1 + 0xa4))(), 0);
  piVar6 = (int *)((int *)0x0);
  local_14 = (int *)((int *)0x0);
  iVar9 = (int)(0);
  local_1c = (tm *)((tm *)0x0);
  cVar2 = (char)((**(code **)(*param_1 + 0x48))(), 0);
  if ((cVar2 == '\0') || (cVar2 = (char)((**(code **)(*param_1 + 0x9c))(), 0), cVar2 == '\0')) {
    iVar8 = (int)(0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*param_1 + 0x40))(), 0);

    piVar6 = (int *)((int *)*piVar3);
    *piVar3 = (int)(0);
    local_28 = (int *)(piVar6);
    if ((int *)(piVar6) == (int *)(0x0)) {
      local_24 = (int *)((int *)0x0);
    }
    else {
      local_24 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(), 0);
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
    if ((tm *)(local_1c) != (tm *)(0x0)) {
      (**(code **)(local_1c->tm_sec + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
    (**(code **)(*param_1 + 0x30))();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
    thunk_FUN_10425b60();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
    if ((int *)(local_20) != (int *)(0x0)) {
      (**(code **)(*local_20 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
    local_30 = (__time64_t)(_time64((__time64_t *)0x0), 0);
    ppiStackY_64 = (int **)((int **)0x10bae7e6);
    ptVar4 = (tm *)(_localtime64(&local_30), 0);
    iVar9 = (int)((**(code **)(*local_40 + 0x30))(), 0);
    ptVar4->tm_min = (int)(iVar9);
    iVar9 = (int)((**(code **)(*local_40 + 0x1c))(), 0);
    ptVar4->tm_hour = (int)(iVar9);
    ptVar4->tm_isdst = (int)(-1);
    local_38 = (__time64_t)(_mktime64(ptVar4), 0);
    ppiStackY_64 = (int **)((int **)0x10bae820);
    ptVar4 = (tm *)(_gmtime64(&local_38), 0);
    local_1c = (tm *)(ptVar4);
    iVar9 = (int)((**(code **)(*piVar6 + 0x1c))(), 0);
    if (iVar9 != 0) {
      uVar7 = (uint)(0);
      do {
        cVar2 = (char)((**(code **)(*piVar6 + 0x24))(), 0);
        if (cVar2 != '\0') {
          if (6 < uVar7) {
                    
            thunk_FUN_10baa650();
          }
          (&local_14)[uVar7 >> 5] = (int *)(uintptr_t)((int)((int *)((uint)(&local_14)[uVar7 >> 5] | 1 << ((byte)uVar7 & 0x1f))));
        }
        uVar7 = (uint)(uVar7 + 1);
        ptVar4 = (tm *)(local_1c);
      } while ((int)uVar7 < 7);
    }
    ppiStackY_64 = (int **)(&local_14);
    uStackY_68 = (undefined4)(0x10bae87d);
    iVar9 = (int)(thunk_FUN_10f796f0(), 0);
    piVar6 = (int *)((int *)ptVar4->tm_hour);
    iVar8 = (int)(ptVar4->tm_min);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    local_1c = (tm *)((tm *)piVar6);
    if ((int *)(local_3c) != (int *)(0x0)) {
      (**(code **)(*local_3c + 8))();
    }

    if ((int *)(local_24) != (int *)(0x0)) {
      (**(code **)(*local_24 + 8))();
    }
  }
  if ((((char)(cVar1) == *param_2) && ((int)(local_18) == *(int *)(param_2 + 4))) &&
     ((int *)(local_14) == *(int **)(param_2 + 8))) {
    if ((int *)(local_14) != (int *)(0x0)) {
      if (((int *)(piVar6) == *(int **)(param_2 + 0xc)) && ((int)(iVar8) == *(int *)(param_2 + 0x10))) {
        bVar5 = (bool)(false);
        goto LAB_10bae906;
      }
      goto LAB_10bae8ed;
    }
    bVar5 = (bool)((int)(iVar9) != *(int *)(param_2 + 0x14));
    if ((int)(iVar9) == *(int *)(param_2 + 0x14)) goto LAB_10bae906;
  }
  else {
LAB_10bae8ed:
    bVar5 = (bool)(true);
  }
  *param_2 = (char)(cVar1);
  *(int**)(param_2 + 8) = (int *)(local_14);
  *(int*)(param_2 + 4) = (int)(local_18);
  *(tm**)(param_2 + 0xc) = (tm *)(local_1c);
  *(int*)(param_2 + 0x10) = (int)(iVar8);
LAB_10bae906:
  *(int*)(param_2 + 0x14) = (int)(iVar9);

  return (undefined1 *)((undefined1 *)(uint)bVar5);

 } catch (...) { }
}


// Reference entry 10baec50; body size 3984 bytes.
#line 1 "ENTRY_10baec50"

/* WARNING: Removing unreachable block (ram,0x10baf0cd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffb1c : 0x10baf700 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10baec50(undefined4 *param_1,undefined4 param_2,char param_3,int param_4)

{
 try {
  char cVar1;
  byte bVar2;
  byte *****pppppbVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 ******ppppppuVar8;
  int iVar9;
  uint *puVar10;
  char ******ppppppcVar11;
  char *pcVar12;
  byte *pbVar13;
  byte ******ppppppbVar14;
  byte ******ppppppbVar15;
  byte ******ppppppbVar16;
  char *pcVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 local_598 [168];
  undefined4 local_4f0;
  int local_4ec;
  byte *****local_4e8;
  uint local_4e4;
  byte bStack_4dd;
  char *****local_4dc;
  byte *****local_4d8;
  char *****local_4d4;
  uint local_4d0;
  uint local_4cc;
  byte *****local_4c8;
  uint local_4c4;
  byte *****local_4c0;
  char local_4bc [256];
  char local_3bc [256];
  char local_2bc [256];
  char local_1bc [256];
  byte *****local_bc [4];
  uint local_ac;
  uint local_a8;
  byte *****local_a4 [4];
  byte *****local_94;
  char *****local_90;
  uint local_8c;
  undefined8 uStack_88;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  undefined4 *****local_74 [4];
  size_t local_64;
  uint local_60;
  byte *****local_5c [4];
  char *****local_4c;
  uint local_48;
  byte *****local_44 [4];
  int local_34;
  uint local_30;
  char *****local_2c [4];
  char *local_1c;
  byte *****local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);

  local_4f0 = (undefined4)(param_2);


  pcVar17 = (char *)("");
  if ((char *)*param_1 != (char *)((0x0))) {
    pcVar17 = (char *)((char *)*param_1);
  }
  local_8c = (uint)(local_8c & 0xffffff00);

  pcVar12 = (char *)(pcVar17);
  do {
    cVar1 = (char)(*pcVar12);
    pcVar12 = (char *)(pcVar12 + 1);
  } while (cVar1 != '\0');
  local_14 = (uint)(uVar5);
  thunk_FUN_1012d130(pcVar17,(int)pcVar12 - (int)(pcVar17 + 1));

  thunk_FUN_10ba5500(&local_8c,1,1);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  if (0xf < uStack_78) {
    uVar18 = (uint)(uStack_78 + 1);
    uVar20 = (uint)(local_8c);
    if (0xfff < uVar18) {
      uVar20 = (uint)(*(uint *)(local_8c - 4));
      uVar18 = (uint)(uStack_78 + 0x24);
      if (0x1f < (local_8c - uVar20) - 4) goto LAB_10bafb83;
    }
    thunk_FUN_1148a50e(uVar20,uVar18,uVar5);
  }


  local_74[0] = (undefined4 *****)((undefined4 *****)((uint)local_74[0] & 0xffffff00));
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  piVar6 = (int *)((int *)thunk_FUN_10ba4650((uint)&local_598,(uint)&local_74,0x3b), 0);
  bVar2 = (byte)(*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6));
joined_r0x10baed55:
  if ((bVar2 & 6) != 0) goto LAB_10bafb5d;
  ppppppuVar8 = (undefined4 ******)((uint)&local_74);
  if (0xf < local_60) {
    ppppppuVar8 = (undefined4 ******)((undefined4 ******)local_74[0]);
  }
  if (((local_64 == 0) || (pvVar7 = (void *)(memchr(ppppppuVar8,0x2f,local_64), 0),(void *)( pvVar7) == (void *)(0x0))) ||
     (uVar5 = (uint)((int)pvVar7 - (int)ppppppuVar8), uVar5 == 0xffffffff)) goto LAB_10baf62d;

  uVar20 = (uint)(uVar5);
  if (local_64 < uVar5) {
    uVar20 = (uint)(local_64);
  }
  ppppppuVar8 = (undefined4 ******)((uint)&local_74);
  if (0xf < local_60) {
    ppppppuVar8 = (undefined4 ******)((undefined4 ******)local_74[0]);
  }

  local_44[0] = (byte *****)((byte *****)((uint)local_44[0] & 0xffffff00));
  thunk_FUN_1012d130(ppppppuVar8,uVar20);
  pppppbVar3 = (byte *****)(local_44[0]);
  local_4cc = (uint)(local_4cc | 1);
  local_4c0 = (byte *****)((byte *****)(uint)&local_44);
  if (0xf < local_30) {
    local_4c0 = (byte *****)(local_44[0]);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
  if (local_34 != 0) {
    memset((char *)&local_1bc,0,0x100);
    pbVar13 = (byte *)(&DAT_119106ac);
    do {
      bVar2 = (byte)(*pbVar13);
      pbVar13 = (byte *)(pbVar13 + 1);
      local_1bc[bVar2] = (char)('\x01');
    } while ((byte *)(pbVar13) != (byte *)(&DAT_119106b6));
    for (ppppppbVar14 = (byte ******)((byte ******)local_4c0);(byte ******)(
        ppppppbVar14) < (byte ******)((int)local_4c0 + local_34);
        ppppppbVar14 = (byte ******)((int)ppppppbVar14 + 1)) {
      if (local_1bc[*(byte *)ppppppbVar14] == '\0') {
        if ((int)ppppppbVar14 - (int)local_4c0 != -1) {
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
          if (local_30 < 0x10) goto LAB_10baf62d;
          uVar5 = (uint)(local_30 + 1);
          ppppppbVar14 = (byte ******)((byte ******)pppppbVar3);
          if (uVar5 < 0x1000) goto LAB_10baf625;
          uVar5 = (uint)(local_30 + 0x24);
          ppppppbVar14 = (byte ******)((byte ******)pppppbVar3[-1]);
          if ((byte *)((int)pppppbVar3 + (-4 - (int)pppppbVar3[-1])) < (byte *)0x20) goto LAB_10baf625;
          goto LAB_10bafb83;
        }
        break;
      }
    }
  }
  ppppppbVar14 = (byte ******)((uint)&local_44);
  if (0xf < local_30) {
    ppppppbVar14 = (byte ******)((byte ******)pppppbVar3);
  }
  local_4ec = (int)(atoi((char *)ppppppbVar14), 0);
  if ((0 < local_4ec) && ((param_3 == '\0' || (local_4ec == param_4)))) {
    uVar5 = (uint)(uVar5 + 1);
    local_4c = (char *****)((char *****)0x0);

    local_5c[0] = (byte *****)((byte *****)((uint)local_5c[0] & 0xffffff00));
    if (local_64 < uVar5) goto LAB_10bafbdb;
    ppppppcVar11 = (char ******)((char ******)0xffffffff);
    if ((char ******)((local_64 - uVar5)) != (char ******)(0xffffffff)) {
      ppppppcVar11 = (char ******)((char ******)(local_64 - uVar5));
    }
    ppppppuVar8 = (undefined4 ******)((uint)&local_74);
    if (0xf < local_60) {
      ppppppuVar8 = (undefined4 ******)((undefined4 ******)local_74[0]);
    }
    local_4c8 = (byte *****)((byte *****)((int)ppppppuVar8 + uVar5));
    local_4d4 = (char *****)((char *****)ppppppcVar11);
    if ((char ******)(ppppppcVar11) < (char ******)0x10) {
      local_4c = (char *****)((char *****)ppppppcVar11);
      memmove((char *)&local_5c,local_4c8,(size_t)ppppppcVar11);
      *(char*)((int)(uint)&local_5c + (int)ppppppcVar11) = (char)('\0');
      local_4c4 = (uint)(local_48);
      local_4d4 = (char *****)(local_4c);
      ppppppcVar11 = (char ******)((char ******)local_4c);
    }
    else {
      if ((char ******)(0x7fffffff) < (char ******)((ppppppcVar11))) goto LAB_10bafbd6;
      uVar5 = (uint)((uint)ppppppcVar11 | 0xf);
      if (uVar5 < 0x80000000) {
        if (uVar5 < 0x16) {
          uVar5 = (uint)(0x16);
        }
      }
      else {
        uVar5 = (uint)(0x7fffffff);
      }
      local_4c4 = (uint)(uVar5);
      ppppppbVar14 = (byte ******)((byte ******)thunk_FUN_1012cab0(uVar5 + 1), 0);
      ppppppcVar11 = (char ******)((char ******)local_4d4);
      local_4c = (char *****)(local_4d4);
      local_48 = (uint)(uVar5);
      memcpy(ppppppbVar14,local_4c8,(size_t)local_4d4);
      *(byte*)((int)ppppppbVar14 + (int)ppppppcVar11) = (byte)(0);
      local_5c[0] = (byte *****)((byte *****)ppppppbVar14);
    }
    ppppppbVar14 = (byte ******)((byte ******)local_5c[0]);
    local_4cc = (uint)(local_4cc | 2);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
    if ((char ******)(ppppppcVar11) < (char ******)0xe) {
LAB_10baf5bb:
      if (local_4c4 < 0x10) goto LAB_10baf5f5;
      uVar5 = (uint)(local_4c4 + 1);
      if (0xfff < uVar5) {
        pbVar13 = (byte *)((byte *)((int)ppppppbVar14 + (-4 - (int)ppppppbVar14[-1])));
        ppppppbVar14 = (byte ******)((byte ******)ppppppbVar14[-1]);
        uVar5 = (uint)(local_4c4);
joined_r0x10bafa7e:
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
        uVar5 = (uint)(uVar5 + 0x24);
        if ((byte *)(0x1f) < (byte *)((pbVar13))) goto LAB_10bafb83;
      }
    }
    else {
      ppppppbVar16 = (byte ******)((uint)&local_5c);
      if (0xf < local_4c4) {
        ppppppbVar16 = (byte ******)((byte ******)local_5c[0]);
      }
      if ((char ******)local_4d4 != (char ******)((0x0))) {
        memset((char *)&local_2bc,0,0x100);
        pbVar13 = (byte *)(&DAT_119106ac);
        do {
          bVar2 = (byte)(*pbVar13);
          pbVar13 = (byte *)(pbVar13 + 1);
          local_2bc[bVar2] = (char)('\x01');
        } while ((byte *)(pbVar13) != (byte *)(&DAT_119106b6));
        for (ppppppbVar15 = (byte ******)(ppppppbVar16);(byte ******)(
            ppppppbVar15) < (byte ******)((int)local_4d4 + (int)ppppppbVar16);
            ppppppbVar15 = (byte ******)((int)ppppppbVar15 + 1)) {
          if (local_2bc[*(byte *)ppppppbVar15] == '\0') {
            if ((int)ppppppbVar15 - (int)ppppppbVar16 != -1) goto LAB_10baf5bb;
            break;
          }
        }
      }


      local_bc[0] = (byte *****)((byte *****)((uint)local_bc[0] & 0xffffff00));
      uVar5 = (uint)((uint)((char ******)local_4d4 != (char ******)((0x0))));
      local_4c8 = (byte *****)((byte *****)(uint)&local_5c);
      if (0xf < local_4c4) {
        local_4c8 = (byte *****)((byte *****)ppppppbVar14);
      }
      if (uVar5 < 0x10) {
        local_ac = (uint)(uVar5);
        memmove((char *)&local_bc,local_4c8,uVar5);
        *(undefined1*)((int)(uint)&local_bc + uVar5) = (undefined1)(0);
        local_4d0 = (uint)(local_a8);
        local_4d8 = (byte *****)(local_bc[0]);
        uVar5 = (uint)(local_ac);
      }
      else {
        if (0x7fffffff < uVar5) goto LAB_10bafbd6;

        local_4d8 = (byte *****)((byte *****)thunk_FUN_1012cab0(0x17), 0);
        local_a8 = (uint)(local_4d0);
        local_ac = (uint)(uVar5);
        memcpy(local_4d8,local_4c8,uVar5);
        local_bc[0] = (byte *****)(local_4d8);
        *(byte*)((int)local_4d8 + uVar5) = (byte)(0);
      }
      local_4cc = (uint)(local_4cc | 4);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
      local_4c0 = (byte *****)((byte *****)(uint)&local_bc);
      if (0xf < local_4d0) {
        local_4c0 = (byte *****)(local_bc[0]);
      }
      local_4d8 = (byte *****)(local_bc[0]);
      if (uVar5 != 0) {
        memset((char *)&local_3bc,0,0x100);
        pbVar13 = (byte *)(&DAT_119106bc);
        do {
          bVar2 = (byte)(*pbVar13);
          pbVar13 = (byte *)(pbVar13 + 1);
          local_3bc[bVar2] = (char)('\x01');
        } while ((byte *)(pbVar13) != (byte *)(&DAT_119106be));
        for (ppppppbVar16 = (byte ******)((byte ******)local_4c0);(byte ******)(
            ppppppbVar16) < (byte ******)((int)local_4c0 + uVar5);
            ppppppbVar16 = (byte ******)((int)ppppppbVar16 + 1)) {
          if (local_3bc[*(byte *)ppppppbVar16] == '\0') {
            if ((int)ppppppbVar16 - (int)local_4c0 != -1) goto LAB_10baf57b;
            break;
          }
        }
      }



      ppppppbVar16 = (byte ******)((uint)&local_bc);
      if (0xf < local_4d0) {
        ppppppbVar16 = (byte ******)((byte ******)local_4d8);
      }

      if (uVar5 == 1) {
        if (*(byte *)ppppppbVar16 == 0x31) {
          uVar5 = (uint)(0);
        }
        else {
          uVar5 = (uint)(-(uint)(*(byte *)ppppppbVar16 < 0x31) | 1);
        }
        if (uVar5 != 0) goto LAB_10baf219;
        uVar4 = (undefined1)(1);
      }
      else {
LAB_10baf219:
        uVar4 = (undefined1)(0);
      }
      local_8c = (uint)(((uint)(*(unsigned short *)((char *)&local_8c + 1)) << 8 | (uint)(uVar4)));
      local_1c = (char *)((char *)0x0);
      local_18 = (byte *****)((byte *****)0xf);
      local_2c[0] = (char *****)((char *****)((uint)local_2c[0] & 0xffffff00));
      if ((char ******)local_4d4 == (char ******)((0x0))) goto LAB_10bafbdb;
      pcVar17 = (char *)((char *)0x2);
      if ((char *)(((int)local_4d4 + -1)) < (char *)(0x2)) {
        pcVar17 = (char *)((char *)((int)local_4d4 + -1));
      }
      local_4c8 = (byte *****)((byte *****)(uint)&local_5c);
      if (0xf < local_4c4) {
        local_4c8 = (byte *****)((byte *****)ppppppbVar14);
      }
      local_4c8 = (byte *****)((byte *****)((int)local_4c8 + 1));
      if ((char *)(pcVar17) < (char *)0x10) {
        local_1c = (char *)(pcVar17);
        memmove((char *)&local_2c,local_4c8,(size_t)pcVar17);
        *(char*)((int)(uint)&local_2c + (int)pcVar17) = (char)('\0');
      }
      else {
        if ((char *)(0x7fffffff) < (char *)((pcVar17))) goto LAB_10bafbd6;
        local_4c0 = (byte *****)((byte *****)((uint)pcVar17 | 0xf));
        if ((byte *****)(local_4c0) < (byte *****)0x80000000) {
          if ((byte *****)(local_4c0) < (byte *****)0x16) {
            local_4c0 = (byte *****)((byte *****)0x16);
          }
        }
        else {
          local_4c0 = (byte *****)((byte *****)0x7fffffff);
        }
        local_4dc = (char *****)((char *****)thunk_FUN_1012cab0((byte *)((int)local_4c0 + 1)), 0);
        local_18 = (byte *****)(local_4c0);
        local_1c = (char *)(pcVar17);
        memcpy(local_4dc,local_4c8,(size_t)pcVar17);
        pcVar17[(int)local_4dc] = (char)('\0');
        local_2c[0] = (char *****)(local_4dc);
      }
      local_4cc = (uint)(local_4cc | 8);
      ppppppcVar11 = (char ******)((uint)&local_2c);
      if ((byte ******)(byte *****)(0xf) < (byte ******)((local_18))) {
        ppppppcVar11 = (char ******)((char ******)local_2c[0]);
      }
      iVar9 = (int)(atoi((char *)ppppppcVar11), 0);
      uStack_88 = (undefined8)(((unsigned long long)(*(uint *)((char *)&uStack_88 + 4)) << 32 | (unsigned long long)(iVar9)));
      if ((byte ******)(byte *****)(0xf) < (byte ******)((local_18))) {
        ppppppbVar16 = (byte ******)((byte ******)((int)local_18 + 1));
        ppppppcVar11 = (char ******)((char ******)local_2c[0]);
        if ((byte ******)(0xfff) < (byte ******)((ppppppbVar16))) {
          ppppppcVar11 = (char ******)((char ******)local_2c[0][-1]);
          ppppppbVar16 = (byte ******)((byte ******)(local_18 + 9));
          if ((char *)(0x1f) < (char *)((int)local_2c[0] + (-4 - (int)ppppppcVar11))) goto LAB_10bafb83;
        }
        thunk_FUN_1148a50e(ppppppcVar11,ppppppbVar16);
      }
      if (0x62 < iVar9 - 1U) {
LAB_10baf57b:
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
        if (0xf < local_4d0) {
          uVar5 = (uint)(local_4d0 + 1);
          ppppppbVar16 = (byte ******)((byte ******)local_4d8);
          if (0xfff < uVar5) {
            ppppppbVar16 = (byte ******)((byte ******)local_4d8[-1]);
            uVar5 = (uint)(local_4d0 + 0x24);
            if ((byte *)(0x1f) < (byte *)((int)local_4d8 + (-4 - (int)ppppppbVar16))) goto LAB_10bafb83;
          }
          thunk_FUN_1148a50e(ppppppbVar16,uVar5);
        }
        goto LAB_10baf5bb;
      }
      local_94 = (byte *****)((byte *****)0x0);
      local_90 = (char *****)((char *****)0xf);
      local_a4[0] = (byte *****)((byte *****)((uint)local_a4[0] & 0xffffff00));
      if ((char *****)(local_4d4) < (char *****)0x3) goto LAB_10bafbdb;
      ppppppbVar16 = (byte ******)((byte ******)&DAT_00000007);
      if ((uintptr_t)((uintptr_t)((int)local_4d4 + -3))< (uintptr_t)(&DAT_00000007)) {
        ppppppbVar16 = (byte ******)((byte ******)((int)local_4d4 + -3));
      }
      local_4c8 = (byte *****)((byte *****)(uint)&local_5c);
      if (0xf < local_4c4) {
        local_4c8 = (byte *****)((byte *****)ppppppbVar14);
      }
      local_4c8 = (byte *****)((byte *****)((int)local_4c8 + 3));
      if ((byte ******)(ppppppbVar16) < (byte ******)0x10) {
        local_94 = (byte *****)((byte *****)ppppppbVar16);
        memmove((char *)&local_a4,local_4c8,(size_t)ppppppbVar16);
        *(byte*)((int)(uint)&local_a4 + (int)ppppppbVar16) = (byte)(0);
        local_4dc = (char *****)(local_90);
        local_4c0 = (byte *****)(local_a4[0]);
        ppppppbVar16 = (byte ******)((byte ******)local_94);
      }
      else {
        if ((byte ******)(0x7fffffff) < (byte ******)((ppppppbVar16))) goto LAB_10bafbd6;
        local_4dc = (char *****)((char *****)((uint)ppppppbVar16 | 0xf));
        if ((char *****)(local_4dc) < (char *****)0x80000000) {
          if ((char *****)(local_4dc) < (char *****)0x16) {
            local_4dc = (char *****)((char *****)0x16);
          }
        }
        else {
          local_4dc = (char *****)((char *****)0x7fffffff);
        }
        local_4c0 = (byte *****)((byte *****)thunk_FUN_1012cab0((char *)((int)local_4dc + 1)), 0);
        local_90 = (char *****)(local_4dc);
        local_94 = (byte *****)((byte *****)ppppppbVar16);
        memcpy(local_4c0,local_4c8,(size_t)ppppppbVar16);
        local_a4[0] = (byte *****)(local_4c0);
        *(byte*)((int)local_4c0 + (int)ppppppbVar16) = (byte)(0);
      }
      local_4cc = (uint)(local_4cc | 0x10);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
      local_4c8 = (byte *****)((byte *****)(uint)&local_a4);
      if ((char ******)(char *****)(0xf) < (char ******)((local_4dc))) {
        local_4c8 = (byte *****)(local_a4[0]);
      }
      local_4c0 = (byte *****)(local_a4[0]);
      if ((byte ******)(ppppppbVar16) != (byte ******)(0x0)) {
        memset((char *)&local_4bc,0,0x100);
        pbVar13 = (byte *)(&DAT_119106bc);
        do {
          bVar2 = (byte)(*pbVar13);
          pbVar13 = (byte *)(pbVar13 + 1);
          local_4bc[bVar2] = (char)('\x01');
        } while ((byte *)(pbVar13) != (byte *)(&DAT_119106be));
        for (ppppppbVar15 = (byte ******)((byte ******)local_4c8);(byte ******)(
            ppppppbVar15) < (byte ******)((int)ppppppbVar16 + (int)local_4c8);
            ppppppbVar15 = (byte ******)((int)ppppppbVar15 + 1)) {
          if (local_4bc[*(byte *)ppppppbVar15] == '\0') {
            if ((int)ppppppbVar15 - (int)local_4c8 != -1) goto LAB_10baf53b;
            break;
          }
        }
      }
      local_4c8 = (byte *****)((byte *****)(byte ******)0xffffffff);
      if ((byte ******)(ppppppbVar16) != (byte ******)(0xffffffff)) {
        local_4c8 = (byte *****)((byte *****)ppppppbVar16);
      }
      local_4e8 = (byte *****)((byte *****)(uint)&local_a4);
      if ((char ******)(char *****)(0xf) < (char ******)((local_4dc))) {
        local_4e8 = (byte *****)(local_4c0);
      }
      if ((byte *****)(local_4c8) < (byte *****)0x8) {
        if ((byte ******)local_4c8 != (byte ******)((0x0))) goto LAB_10baf663;
LAB_10baf6d1:
        puVar10 = (uint *)(&local_4e4);
        for (iVar9 = (int)(1); iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar10 = (uint)(0);
          puVar10 = (uint *)(puVar10 + 1);
        }
      }
      else {
        ppppppbVar16 = (byte ******)((byte ******)&DAT_00000007);
        do {
          if ((*(byte *)((int)ppppppbVar16 + (int)local_4e8) != 0x31) &&
             (*(byte *)((int)ppppppbVar16 + (int)local_4e8) != 0x30)) goto LAB_10bafbcb;
          ppppppbVar16 = (byte ******)((byte ******)((int)ppppppbVar16 + 1));
        } while ((byte ******)(ppppppbVar16) < (byte ******)(local_4c8));
        local_4c8 = (byte *****)((byte *****)&DAT_00000007);
LAB_10baf663:
        local_4c8 = (byte *****)((byte *****)((int)local_4c8 + (int)local_4e8));
        iVar9 = (int)(0);
        uVar5 = (uint)(0);
        iVar19 = (int)(0);
        do {
          local_4c8 = (byte *****)((byte *****)((int)local_4c8 + -1));
          bStack_4dd = (byte)(*(byte *)local_4c8);
          uVar5 = (uint)(uVar5 | (uint)(bStack_4dd == 0x31) << ((byte)iVar9 & 0x1f));
          if ((bStack_4dd != 0x31) && (bStack_4dd != 0x30)) goto LAB_10bafbcb;
          iVar9 = (int)(iVar9 + 1);
          if (iVar9 == 0x20) {
            (&local_4e4)[iVar19] = (int)(uVar5);
            iVar19 = (int)(iVar19 + 1);
            uVar5 = (uint)(0);
            iVar9 = (int)(0);
          }
        } while ((byte *****)(local_4e8) != (byte *****)(local_4c8));
        if (iVar9 != 0) {
          (&local_4e4)[iVar19] = (int)(uVar5);
          iVar19 = (int)(iVar19 + 1);
        }
        if (iVar19 == 0) goto LAB_10baf6d1;
      }
      uStack_88 = (undefined8)(((unsigned long long)(local_4e4) << 32 | (unsigned long long)((uint)uStack_88)));
      if (local_4e4 == 0) {
        if ((char ******)(char *****)(0x13) < (char ******)((local_4d4))) {
          local_1c = (char *)((char *)0x0);
          local_18 = (byte *****)((byte *****)0xf);
          local_2c[0] = (char *****)((char *****)((uint)*(unsigned short *)((char *)&local_2c[0] + 1) << 8));
          if ((char *****)(local_4d4) < (char *****)(&DAT_0000000a)) goto LAB_10bafbdb;
          pcVar17 = (char *)((char *)0xffffffff);
          if ((uintptr_t)(((int)local_4d4 + -10)) != (uint)0xffffffff) {
            pcVar17 = (char *)((char *)((int)local_4d4 + -10));
          }
          local_4e8 = (byte *****)((byte *****)(uint)&local_5c);
          if (0xf < local_4c4) {
            local_4e8 = (byte *****)((byte *****)ppppppbVar14);
          }
          local_4e8 = (byte *****)((byte *****)((int)local_4e8 + 10));
          if ((char *)(pcVar17) < (char *)0x10) {
            local_1c = (char *)(pcVar17);
            memmove((char *)&local_2c,local_4e8,(size_t)pcVar17);
            *(char*)((int)(uint)&local_2c + (int)pcVar17) = (char)('\0');
          }
          else {
            if ((char *)(0x7fffffff) < (char *)((pcVar17))) goto LAB_10bafbd6;
            local_4c8 = (byte *****)((byte *****)((uint)pcVar17 | 0xf));
            if ((byte *****)(local_4c8) < (byte *****)0x80000000) {
              if ((byte *****)(local_4c8) < (byte *****)0x16) {
                local_4c8 = (byte *****)((byte *****)0x16);
              }
            }
            else {
              local_4c8 = (byte *****)((byte *****)0x7fffffff);
            }
            local_4d4 = (char *****)((char *****)thunk_FUN_1012cab0((byte *)((int)local_4c8 + 1)), 0);
            local_18 = (byte *****)(local_4c8);
            local_1c = (char *)(pcVar17);
            memcpy(local_4d4,local_4e8,(size_t)pcVar17);
            *(char*)((int)local_4d4 + (int)pcVar17) = (char)('\0');
            local_2c[0] = (char *****)(local_4d4);
          }
          local_4cc = (uint)(local_4cc | 0x20);
          ppppppcVar11 = (char ******)((uint)&local_2c);
          if ((byte ******)(byte *****)(0xf) < (byte ******)((local_18))) {
            ppppppcVar11 = (char ******)((char ******)local_2c[0]);
          }
          uStack_78 = (uint)(atol((char *)ppppppcVar11), 0);
          uVar5 = (uint)(local_4c4);
          if ((byte ******)(byte *****)(0xf) < (byte ******)((local_18))) {
            ppppppbVar16 = (byte ******)((byte ******)((int)local_18 + 1));
            ppppppcVar11 = (char ******)((char ******)local_2c[0]);
            if ((byte ******)(0xfff) < (byte ******)((ppppppbVar16))) {
              ppppppcVar11 = (char ******)((char ******)local_2c[0][-1]);
              ppppppbVar16 = (byte ******)((byte ******)(local_18 + 9));
              if ((char *)(0x1f) < (char *)((int)local_2c[0] + (-4 - (int)ppppppcVar11))) goto LAB_10bafb83;
            }
            thunk_FUN_1148a50e(ppppppcVar11,ppppppbVar16);
            uVar5 = (uint)(local_4c4);
          }
LAB_10baf83d:
          puVar10 = (uint *)((uint *)thunk_FUN_10ba78d0(&local_4ec), 0);
          *puVar10 = (uint)(local_8c);
          puVar10[1] = (uint)((uint)uStack_88);
          puVar10[2] = (uint)(*(uint *)((char *)&uStack_88 + 4));
          puVar10[3] = (uint)(uStack_80);
          puVar10[4] = (uint)(local_7c);
          puVar10[5] = (uint)(uStack_78);
          if (param_3 == '\0') {
            thunk_FUN_1011f780();
            thunk_FUN_1011f780();
            thunk_FUN_1011f780();
            *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
            thunk_FUN_1011f780();
            goto LAB_10baf62d;
          }
          if ((char ******)(char *****)(0xf) < (char ******)((local_4dc))) {
            ppppppcVar11 = (char ******)((char ******)((int)local_4dc + 1));
            ppppppbVar16 = (byte ******)((byte ******)local_4c0);
            if ((char ******)(0xfff) < (char ******)((ppppppcVar11))) {
              ppppppbVar16 = (byte ******)((byte ******)local_4c0[-1]);
              ppppppcVar11 = (char ******)((char ******)(local_4dc + 9));
              if ((byte *)(0x1f) < (byte *)((int)local_4c0 + (-4 - (int)ppppppbVar16))) goto LAB_10bafb83;
            }
            thunk_FUN_1148a50e(ppppppbVar16,ppppppcVar11);
          }
          if (0xf < local_4d0) {
            uVar20 = (uint)(local_4d0 + 1);
            ppppppbVar16 = (byte ******)((byte ******)local_4d8);
            if (0xfff < uVar20) {
              ppppppbVar16 = (byte ******)((byte ******)local_4d8[-1]);
              uVar20 = (uint)(local_4d0 + 0x24);
              if ((byte *)(0x1f) < (byte *)((int)local_4d8 + (-4 - (int)ppppppbVar16))) goto LAB_10bafb83;
            }
            thunk_FUN_1148a50e(ppppppbVar16,uVar20);
          }
          if (0xf < uVar5) {
            uVar20 = (uint)(uVar5 + 1);
            ppppppbVar16 = (byte ******)(ppppppbVar14);
            if (0xfff < uVar20) {
              ppppppbVar16 = (byte ******)((byte ******)ppppppbVar14[-1]);
              uVar20 = (uint)(uVar5 + 0x24);
              if ((byte *)(0x1f) < (byte *)((int)ppppppbVar14 + (-4 - (int)ppppppbVar16))) goto LAB_10bafb83;
            }
            thunk_FUN_1148a50e(ppppppbVar16,uVar20);
          }
          if (0xf < local_30) {
            uVar5 = (uint)(local_30 + 1);
            ppppppbVar14 = (byte ******)((byte ******)local_44[0]);
            if (0xfff < uVar5) {
              ppppppbVar14 = (byte ******)((byte ******)local_44[0][-1]);
              uVar5 = (uint)(local_30 + 0x24);
              if ((byte *)(0x1f) < (byte *)((int)local_44[0] + (-4 - (int)ppppppbVar14))) goto LAB_10bafb83;
            }
            thunk_FUN_1148a50e(ppppppbVar14,uVar5);
          }
          goto LAB_10bafb5d;
        }
LAB_10baf53b:
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
        if ((char ******)(char *****)(0xf) < (char ******)((local_4dc))) {
          ppppppcVar11 = (char ******)((char ******)((int)local_4dc + 1));
          ppppppbVar16 = (byte ******)((byte ******)local_4c0);
          if ((char ******)(0xfff) < (char ******)((ppppppcVar11))) {
            ppppppbVar16 = (byte ******)((byte ******)local_4c0[-1]);
            ppppppcVar11 = (char ******)((char ******)(local_4dc + 9));
            if ((byte *)(0x1f) < (byte *)((int)local_4c0 + (-4 - (int)ppppppbVar16))) goto LAB_10bafb83;
          }
          thunk_FUN_1148a50e(ppppppbVar16,ppppppcVar11);
        }
        goto LAB_10baf57b;
      }
      if ((char ******)local_4d4 != (char ******)((0xe))) goto LAB_10baf53b;
      ppppppbVar16 = (byte ******)((uint)&local_5c);
      if (0xf < local_4c4) {
        ppppppbVar16 = (byte ******)(ppppppbVar14);
      }
      local_1c = (char *)((char *)0x0);
      local_18 = (byte *****)((byte *****)0xf);
      local_2c[0] = (char *****)((char *****)((uint)*(unsigned short *)((char *)&local_2c[0] + 1) << 8));
      thunk_FUN_1012d130((byte *)((int)ppppppbVar16 + 10),2);
      ppppppcVar11 = (char ******)((uint)&local_2c);
      if ((byte ******)(byte *****)(0xf) < (byte ******)((local_18))) {
        ppppppcVar11 = (char ******)((char ******)local_2c[0]);
      }
      uVar5 = (uint)(atoi((char *)ppppppcVar11), 0);
      uStack_80 = (uint)(uVar5);
      if ((byte ******)(byte *****)(0xf) < (byte ******)((local_18))) {
        ppppppbVar14 = (byte ******)((byte ******)((int)local_18 + 1));
        ppppppcVar11 = (char ******)((char ******)local_2c[0]);
        if ((byte ******)(0xfff) < (byte ******)((ppppppbVar14))) {
          ppppppcVar11 = (char ******)((char ******)local_2c[0][-1]);
          ppppppbVar14 = (byte ******)((byte ******)(local_18 + 9));
          if ((char *)(0x1f) < (char *)((int)local_2c[0] + (-4 - (int)ppppppcVar11))) goto LAB_10bafb83;
        }
        thunk_FUN_1148a50e(ppppppcVar11,ppppppbVar14);
      }
      local_1c = (char *)((char *)0x0);
      local_18 = (byte *****)((byte *****)0xf);
      local_2c[0] = (char *****)((char *****)((uint)local_2c[0] & 0xffffff00));
      if ((char *****)(local_4c) < (char *****)(&DAT_0000000c)) {
LAB_10bafbdb:
                    
        thunk_FUN_106a5620();
      }
      ppppppcVar11 = (char ******)((char ******)0x2);
      if (local_4c + -3 < (char *****)0x2) {
        ppppppcVar11 = (char ******)((char ******)(local_4c + -3));
      }
      ppppppbVar14 = (byte ******)((uint)&local_5c);
      if (0xf < local_48) {
        ppppppbVar14 = (byte ******)((byte ******)local_5c[0]);
      }
      thunk_FUN_1012d130(ppppppbVar14 + 3,ppppppcVar11);
      local_4cc = (uint)(local_4cc | 0xc0);
      ppppppcVar11 = (char ******)((uint)&local_2c);
      if ((byte ******)(byte *****)(0xf) < (byte ******)((local_18))) {
        ppppppcVar11 = (char ******)((char ******)local_2c[0]);
      }
      uVar20 = (uint)(atoi((char *)ppppppcVar11), 0);
      local_7c = (uint)(uVar20);
      if ((byte ******)(byte *****)(0xf) < (byte ******)((local_18))) {
        ppppppbVar14 = (byte ******)((byte ******)((int)local_18 + 1));
        ppppppcVar11 = (char ******)((char ******)local_2c[0]);
        if ((byte ******)(0xfff) < (byte ******)((ppppppbVar14))) {
          ppppppcVar11 = (char ******)((char ******)local_2c[0][-1]);
          ppppppbVar14 = (byte ******)((byte ******)(local_18 + 9));
          if ((char *)(0x1f) < (char *)((int)local_2c[0] + (-4 - (int)ppppppcVar11))) goto LAB_10bafb83;
        }
        thunk_FUN_1148a50e(ppppppcVar11,ppppppbVar14);
      }
      if ((uVar5 < 0x18) &&
         (ppppppbVar14 = (byte ******)((byte ******)local_5c[0]), uVar5 = (uint)(local_48), uVar20 < 0x3c)) goto LAB_10baf83d;
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
      if ((char ******)(char *****)(0xf) < (char ******)((local_4dc))) {
        ppppppcVar11 = (char ******)((char ******)((int)local_4dc + 1));
        ppppppbVar14 = (byte ******)((byte ******)local_4c0);
        if ((char ******)(0xfff) < (char ******)((ppppppcVar11))) {
          ppppppbVar14 = (byte ******)((byte ******)local_4c0[-1]);
          ppppppcVar11 = (char ******)((char ******)(local_4dc + 9));
          if ((byte *)(0x1f) < (byte *)((int)local_4c0 + (-4 - (int)ppppppbVar14))) goto LAB_10bafb83;
        }
        thunk_FUN_1148a50e(ppppppbVar14,ppppppcVar11);
      }
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
      if (0xf < local_4d0) {
        uVar5 = (uint)(local_4d0 + 1);
        ppppppbVar14 = (byte ******)((byte ******)local_4d8);
        if (0xfff < uVar5) {
          ppppppbVar14 = (byte ******)((byte ******)local_4d8[-1]);
          uVar5 = (uint)(local_4d0 + 0x24);
          if ((byte *)(0x1f) < (byte *)((int)local_4d8 + (-4 - (int)ppppppbVar14))) goto LAB_10bafb83;
        }
        thunk_FUN_1148a50e(ppppppbVar14,uVar5);
      }
      if (local_48 < 0x10) goto LAB_10baf5f5;
      uVar5 = (uint)(local_48 + 1);
      ppppppbVar14 = (byte ******)((byte ******)local_5c[0]);
      if (0xfff < uVar5) {
        pbVar13 = (byte *)((byte *)((int)local_5c[0] + (-4 - (int)local_5c[0][-1])));
        ppppppbVar14 = (byte ******)((byte ******)local_5c[0][-1]);
        uVar5 = (uint)(local_48);
        goto joined_r0x10bafa7e;
      }
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
    thunk_FUN_1148a50e(ppppppbVar14,uVar5);
  }
LAB_10baf5f5:
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  if (0xf < local_30) {
    uVar5 = (uint)(local_30 + 1);
    ppppppbVar14 = (byte ******)((byte ******)local_44[0]);
    if (0xfff < uVar5) {
      ppppppbVar14 = (byte ******)((byte ******)local_44[0][-1]);
      uVar5 = (uint)(local_30 + 0x24);
      if ((byte *)(0x1f) < (byte *)((int)local_44[0] + (-4 - (int)ppppppbVar14))) goto LAB_10bafb83;
    }
LAB_10baf625:
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
    thunk_FUN_1148a50e(ppppppbVar14,uVar5);
  }
LAB_10baf62d:
  piVar6 = (int *)((int *)thunk_FUN_10ba4650((uint)&local_598,(uint)&local_74,0x3b), 0);
  bVar2 = (byte)(*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6));
  goto joined_r0x10baed55;
LAB_10bafbcb:
  thunk_FUN_10baa630();
LAB_10bafbd6:
                    
  thunk_FUN_1012a4c0();
LAB_10bafb5d:
  if (0xf < local_60) {
    uVar5 = (uint)(local_60 + 1);
    ppppppuVar8 = (undefined4 ******)((undefined4 ******)local_74[0]);
    if (0xfff < uVar5) {
      ppppppuVar8 = (undefined4 ******)((undefined4 ******)local_74[0][-1]);
      uVar5 = (uint)(local_60 + 0x24);
      if (0x1f < (uint)((int)local_74[0] + (-4 - (int)ppppppuVar8))) {
LAB_10bafb83:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppppuVar8,uVar5);
  }


  local_74[0] = (undefined4 *****)((undefined4 *****)((uint)local_74[0] & 0xffffff00));
  thunk_FUN_10ba7e70();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10c66110; body size 238 bytes.
#line 1 "ENTRY_10c66110"

uint FUN_10c66110(int param_1,uint param_2,uint param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  if ((param_5 <= param_2) && (param_3 <= param_2 - param_5)) {
    if (param_5 == 0) {
      return (uint)(param_3);
    }
    iVar5 = (int)((param_1 - param_5) + param_2 + 1);
    bVar1 = (byte)(*param_4);
    for (pbVar6 = (byte *)(memchr((char *)(param_1 + param_3),(int)(char)bVar1, iVar5 - (int)(param_1 + param_3)), 0); pbVar3 = (byte *)((byte *)(param_4)), pbVar4 = (byte *)(pbVar6), uVar7 = (uint)(param_5),(byte *)( pbVar6) != (byte *)(0x0);
        pbVar6 = (byte *)(uintptr_t)(memchr(pbVar6 + 1,(int)(char)bVar1,iVar5 - (int)(pbVar6 + 1)))) {
      while (uVar2 = (uint)(uVar7 - 4), 3 < uVar7) {
        if (*(int *)(pbVar4) != *(int *)(pbVar3)) goto LAB_10c66196;
        pbVar3 = (byte *)(pbVar3 + 4);
        pbVar4 = (byte *)(pbVar4 + 4);
        uVar7 = (uint)(uVar2);
      }
      if (uVar2 == 0xfffffffc) {
LAB_10c661ca:
        uVar7 = (uint)(0);
      }
      else {
LAB_10c66196:
        bVar8 = (bool)(*pbVar4 < (byte)(*(pbVar3)));
        if ((*pbVar4 == (byte)(*(pbVar3))) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = (bool)(pbVar4[1] < pbVar3[1]), pbVar4[1] == pbVar3[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = (bool)(pbVar4[2] < pbVar3[2]), pbVar4[2] == pbVar3[2] &&
               ((uVar2 == 0xffffffff || (bVar8 = (bool)(pbVar4[3] < pbVar3[3]), pbVar4[3] == pbVar3[3])))))) )))))) goto LAB_10c661ca;
        uVar7 = (uint)(-(uint)bVar8 | 1);
      }
      if (uVar7 == 0) {
        return (uint)((int)pbVar6 - param_1);
      }
    }
  }
  return (uint)(0xffffffff);
}


// Reference entry 10c66d50; body size 758 bytes.
#line 1 "ENTRY_10c66d50"

void FUN_10c66d50(int *param_1,char *param_2,undefined4 param_3)

{
 try {
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 ****ppppuVar7;
  char ****ppppcVar8;
  SCStr *pSVar9;
  char *pcVar10;
  uint uVar11;
  int *local_60;
  int *local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  char ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar3);
  if ((char *)(param_2) == (char *)(0x0)) {
    *param_1 = (int)(0);
  }
  else {
    uVar4 = (undefined4)(createSCStringArray(), 0);

    thunk_FUN_101ccf90(uVar4);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
    if ((int *)(param_1) != (int *)(0x0)) {
      (**(code **)(*param_1 + 8))(uVar3);
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);


    local_2c[0] = (undefined4 ***)((undefined4 ***)((uint)local_2c[0] & 0xffffff00));
    pcVar10 = (char *)(param_2);
    do {
      cVar2 = (char)(*pcVar10);
      pcVar10 = (char *)(pcVar10 + 1);
    } while (cVar2 != '\0');
    thunk_FUN_1012d130(param_2,(int)pcVar10 - (int)(param_2 + 1));

    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    do {
      uVar3 = (uint)(local_1c);
      ppppuVar7 = (undefined4 ****)((uint)&local_2c);
      if (0xf < local_18) {
        ppppuVar7 = (undefined4 ****)((undefined4 ****)local_2c[0]);
      }
      if (local_1c != 0) {
        for (pbVar5 = (byte *)(memchr(ppppuVar7,0x2c,local_1c), 0);(byte *)( pbVar5) != (byte *)(0x0);
            pbVar5 = (byte *)(uintptr_t)(memchr(pbVar5 + 1,0x2c,(int)ppppuVar7 + (uVar3 - (int)(pbVar5 + 1))))) {
          if (*pbVar5 == (byte)((0x2c))) {
            uVar6 = (uint)(0);
          }
          else {
            uVar6 = (uint)(-(uint)(*pbVar5 < (byte)((0x2c))) | 1);
          }
          if (uVar6 == 0) {
            uVar6 = (uint)((int)pbVar5 - (int)ppppuVar7);
            goto LAB_10c66e56;
          }
        }
      }
      uVar6 = (uint)(0xffffffff);
LAB_10c66e56:


      uVar11 = (uint)(uVar6);
      if (uVar3 < uVar6) {
        uVar11 = (uint)(uVar3);
      }
      local_44[0] = (char ***)((char ***)((uint)local_44[0] & 0xffffff00));
      ppppuVar7 = (undefined4 ****)((uint)&local_2c);
      if (0xf < local_18) {
        ppppuVar7 = (undefined4 ****)((undefined4 ****)local_2c[0]);
      }
      thunk_FUN_1012d130(ppppuVar7,uVar11);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
      ppppcVar8 = (char ****)((uint)&local_44);
      if (0xf < local_30) {
        ppppcVar8 = (char ****)((char ****)local_44[0]);
      }
      ((SCStr *)((SCStr *)&local_4c))->int_allocRep((char *)ppppcVar8);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
      ((SCStr *)((SCStr *)&local_48))->int_release();
      local_48 = (undefined4)(local_4c);
      ((SCStr *)((SCStr *)&local_48))->int_addref();
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
      ((SCStr *)((SCStr *)&local_4c))->int_release();

      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
      uVar1 = (undefined1)((undefined1)local_8);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
      if (0xf < local_30) {
        uVar3 = (uint)(local_30 + 1);
        ppppcVar8 = (char ****)((char ****)local_44[0]);
        if (0xfff < uVar3) {
          ppppcVar8 = (char ****)((char ****)local_44[0][-1]);
          uVar3 = (uint)(local_30 + 0x24);
          if ((char *)(0x1f) < (char *)((int)local_44[0] + (-4 - (int)ppppcVar8))) goto LAB_10c66fec;
        }
        thunk_FUN_1148a50e(ppppcVar8,uVar3);
      }
      uVar3 = (uint)(uVar6 + 1);
      if (local_1c < uVar6 + 1) {
        uVar3 = (uint)(local_1c);
      }
      ppppuVar7 = (undefined4 ****)((uint)&local_2c);
      if (0xf < local_18) {
        ppppuVar7 = (undefined4 ****)((undefined4 ****)local_2c[0]);
      }
      local_1c = (uint)(local_1c - uVar3);
      memmove(ppppuVar7,(char *)((int)ppppuVar7 + uVar3),local_1c + 1);
      pSVar9 = (SCStr *)((SCStr *)thunk_FUN_10c663b0(&local_50,&local_48,param_3), 0);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
      if ((SCStr *)(pSVar9) != (SCStr *)((SCStr*)&local_48)) {
        ((SCStr *)((SCStr *)&local_48))->int_release();
        local_48 = (undefined4)(*(undefined4 *)pSVar9);
        ((SCStr *)((SCStr *)&local_48))->int_addref();
      }
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
      ((SCStr *)((SCStr *)&local_50))->int_release();

      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
      cVar2 = (char)(thunk_FUN_10c66690(&local_48,local_60,param_3), 0);
      if (cVar2 != '\0') {
        (**(code **)(*local_60 + 0x24))(&local_48);
      }
    } while (uVar6 <= local_1c);
    *param_1 = (int)((int)local_60);
    if ((int *)(local_60) != (int *)(0x0)) {
      (**(code **)(*local_60 + 4))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xb);
    ((SCStr *)((SCStr *)&local_48))->int_release();

    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
    if (0xf < local_18) {
      uVar3 = (uint)(local_18 + 1);
      ppppuVar7 = (undefined4 ****)((undefined4 ****)local_2c[0]);
      if (0xfff < uVar3) {
        ppppuVar7 = (undefined4 ****)((undefined4 ****)local_2c[0][-1]);
        uVar3 = (uint)(local_18 + 0x24);
        uVar1 = (undefined1)((undefined1)local_8);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar7))) {
LAB_10c66fec:
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar1);
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(ppppuVar7,uVar3);
    }


    local_2c[0] = (undefined4 ***)((undefined4 ***)((uint)local_2c[0] & 0xffffff00));

    if ((int *)(local_5c) != (int *)(0x0)) {
      (**(code **)(*local_5c + 8))();
    }
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10c71f40; body size 375 bytes.
#line 1 "ENTRY_10c71f40"

undefined1 __thiscall Recovered_Bulk::m_FUN_10c71f40(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar2 = (undefined4 *)(param_2);
  if ((undefined4 *)(param_2) != (undefined4 *)(0x0)) {
    *(undefined1*)(param_2 + 1) = (undefined1)(1);
    thunk_FUN_10c7cfe0(0);
  }
  param_1[0x13] = (undefined4)(param_1[0x15]);
  *param_1 = (undefined4)(param_1[0x15]);
  thunk_FUN_10c7fec0(param_1[0x1a],0);
  iVar4 = (int)(param_1[5]);
  uVar8 = (uint)(param_1[0x1a]);
  uVar7 = (uint)(param_1[6] - iVar4 >> 3);
  if (uVar8 < uVar7) {
    iVar4 = (int)(uVar8 * 8 + iVar4);
  }
  else {
    if (uVar8 <= uVar7) goto LAB_10c71fc0;
    if ((uint)(param_1[7] - iVar4 >> 3) < uVar8) {
      thunk_FUN_10c72ac0(uVar8,&param_2);
      goto LAB_10c71fc0;
    }
    iVar4 = (int)(thunk_FUN_10c7d870(param_1[6],uVar8 - uVar7,param_2), 0);
  }
  param_1[6] = (undefined4)(iVar4);
LAB_10c71fc0:
  param_1[0x1e] = (undefined4)(10000000);
  param_1[0x1f] = (undefined4)(1000);
  *(undefined1*)(param_1 + 0x19) = (undefined1)(0);
  *(int *)(uintptr_t)((int)param_1 + 0x65) = (bool)((uintptr_t)( puVar2) != (uintptr_t)(0x0));
  *(undefined1*)(param_1 + 0x1d) = (undefined1)((undefined1)param_3);
  cVar3 = (char)(thunk_FUN_10c7c560(param_1[0x16]), 0);
  if (cVar3 == '\0') {
    return (undefined1)(0);
  }
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    thunk_FUN_10c7cfe0(param_1[0x1a]);
    uVar8 = (uint)(0);
    if (param_1[0x1a] != 0) {
      iVar4 = (int)(0);
      do {
        puVar5 = (undefined1 *)((undefined1 *)(puVar2[2] + 8 + iVar4));
        if ((*(uint *)(param_1[9] + (uVar8 >> 5) * 4) & 1 << ((byte)uVar8 & 0x1f)) == 0) {
          *puVar5 = (undefined1)(0);
          *(undefined4*)(iVar4 + puVar2[2]) = (undefined4)(param_1[0x14]);
          uVar6 = (undefined4)(param_1[0x14]);
        }
        else {
          *puVar5 = (undefined1)(1);
          *(undefined4*)(iVar4 + puVar2[2]) = (undefined4)(*(undefined4 *)(param_1[0xd] + uVar8 * 8));
          uVar6 = (undefined4)(*(undefined4 *)(param_1[0xd] + 4 + uVar8 * 8));
        }
        uVar8 = (uint)(uVar8 + 1);
        *(undefined4*)(iVar4 + 4 + puVar2[2]) = (undefined4)(uVar6);
        iVar4 = (int)(iVar4 + 0xc);
      } while (uVar8 < (uint)param_1[0x1a]);
    }
    *puVar2 = (undefined4)(param_1[0x13]);
    iVar4 = (int)(param_1[0x13]);
    puVar2[5] = (undefined4)(iVar4);
    iVar1 = (int)(*(int *)puVar2[2]);
    puVar2[6] = (undefined4)(iVar1);
    *(bool*)(puVar2 + 7) = (bool)(iVar4 != iVar1);
    iVar4 = (int)(((int *)puVar2[2])[1]);
    puVar2[8] = (undefined4)(iVar4);
    iVar1 = (int)(param_1[0x14]);
    puVar2[9] = (undefined4)(iVar1);
    *(bool*)(puVar2 + 10) = (bool)(iVar4 != iVar1);
    puVar2[0xb] = (undefined4)(param_1[0x14]);
    puVar2[0xc] = (undefined4)(param_1[0x14]);
  }
  return (undefined1)(1);
}


// Reference entry 10d3bf10; body size 930 bytes.
#line 1 "ENTRY_10d3bf10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3bf10(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this; int stack0xfffffffc;
 try {
  char *_Memory;
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  SCStr *this_;
  undefined1 *puVar9;
  int *local_34;
  int *local_30;
  SCStr *local_2c;
  undefined4 local_28;
  char *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  bVar2 = (bool)(false);
  local_30 = (int *)(param_1);
  thunk_FUN_110828b0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_2c = (SCStr *)((SCStr *)(param_1 + 0x24));
  puVar9 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[0x24] != (undefined1 *)(((0x0)))) {
    puVar9 = (undefined1 *)((undefined1 *)param_1[0x24]);
  }
  piVar4 = (int *)((int *)thunk_FUN_11093530(puVar9,0), 0);
  if (((char)param_1[0x21] == '\0') &&
     (((int *)(piVar4) == (int *)(0x0) || (uVar5 = (uint)((**(code **)(*piVar4 + 0x78))(), 0),(int *)((uVar5)) < (int *)(param_3))))) {
LAB_10d3bf9e:
    *param_2 = (undefined4)(0);

    return (undefined4 *)(param_2);
  }
  if ((char)param_1[0x21] == '\0') {
    local_24 = (char *)((char *)0x0);

    (**(code **)(*piVar4 + 0x80))(param_3,&local_24,&local_34);

    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
    cVar3 = (char)((**(code **)(*piVar4 + 0x88))(param_3), 0);
    pcVar8 = (char *)("object.container.sonos-incrementalSearch");
    if (cVar3 == '\0') {
      pcVar8 = (char *)("object.container.sonos-search");
    }
    ((SCStr *)((SCStr *)&local_28))->int_allocRep(pcVar8);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(local_28);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
    ((SCStr *)((SCStr *)&local_28))->int_release();

    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
    ((SCStr *)(this_))->format((char *)&local_18);
    ((SCStr *)((SCStr *)&param_3))->int_allocRep("");
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
    thunk_FUN_103ac6e0(&local_20,&param_3,local_2c,&local_14,&local_18,0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
    ((SCStr *)((SCStr *)&param_3))->int_release();
    param_3 = (int *)((int *)0x0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(7);
    piVar4 = (int *)(operator_new(0x40), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(9);
    param_3 = (int *)(piVar4);
    if ((int *)(piVar4) == (int *)(0x0)) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      pcVar8 = (char *)("");
      if ((char *)(local_24) != (char *)(0x0)) {
        pcVar8 = (char *)(local_24);
      }
      ((SCStr *)((SCStr *)&local_1c))->int_allocRep(pcVar8);
      bVar2 = (bool)(true);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
      thunk_FUN_104da560();

      thunk_FUN_103d5ff0();
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xc);
      *piVar4 = (int)((int)(uint)&ghidra_vftable_SCSearchTypeNonSonosItem);
      piVar4[6] = (int)((int)(uint)&ghidra_vftable_SCSearchTypeNonSonosItem);
      ((SCStr *)((SCStr *)(piVar4 + 0xe)))->m_op_ctor((SCStr *)&local_20);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
      ((SCStr *)((SCStr *)(piVar4 + 0xf)))->m_op_ctor((SCStr *)&local_1c);
    }

    *param_2 = (undefined4)(piVar4);
    if ((int *)(piVar4) != (int *)(0x0)) {
      (**(code **)(*piVar4 + 4))();
    }

    if (bVar2) {

      ((SCStr *)((SCStr *)&local_1c))->int_release();

    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x10);
    ((SCStr *)((SCStr *)&local_20))->int_release();

    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
    ((SCStr *)((SCStr *)&local_18))->int_release();

    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
    ((SCStr *)((SCStr *)&local_14))->int_release();
    pcVar8 = (char *)(local_24);


    if ((((char *)(local_24) != (char *)(0x0)) &&
        (_Memory = (char *)(local_24 + -0x10), *(int *)(local_24 + -0x10) < 0xffff)) &&
       (iVar7 = (int)(thunk_FUN_1123fcd0(_Memory), 0), iVar7 == 0)) {
      uVar1 = (undefined4)(*(undefined4 *)(pcVar8 + -4));
      pcVar8[-0xffffffff00000008] = (char)('\0');
      pcVar8[-0xffffffff00000007] = (char)('\0');
      pcVar8[-0xffffffff00000006] = (char)('\0');
      pcVar8[-0xffffffff00000005] = (char)('\0');
      pcVar8[-0xffffffff0000000c] = (char)('\0');
      pcVar8[-0xffffffff0000000b] = (char)('\0');
      pcVar8[-0xffffffff0000000a] = (char)('\0');
      pcVar8[-0xffffffff00000009] = (char)('\0');
      thunk_FUN_113cfb70(pcVar8,uVar1);
      free(_Memory);
    }
  }
  else {
    if ((uintptr_t)((uint)param_1[0x27])< (uintptr_t)(param_3)) goto LAB_10d3bf9e;
    piVar4 = (int *)(operator_new(0xf8), 0);

    local_34 = (int *)(piVar4);
    if ((int *)(piVar4) == (int *)(0x0)) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      thunk_FUN_104da560();
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x15);
      thunk_FUN_103d5ff0();
      piVar4[0xe] = (int)((int)(uint)&ghidra_vftable_RAsyncBrowseCacheCB);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x17);
      *piVar4 = (int)((int)(uint)&ghidra_vftable_SCSearchTypeSonosItem);
      piVar4[6] = (int)((int)(uint)&ghidra_vftable_SCSearchTypeSonosItem);
      piVar4[0xe] = (int)((int)(uint)&ghidra_vftable_SCSearchTypeSonosItem);
      ((SCStr *)((SCStr *)(piVar4 + 0xf)))->m_op_ctor(local_2c);
      piVar6 = (int *)(local_30);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x18);
      ((SCStr *)((SCStr *)(piVar4 + 0x10)))->m_op_ctor((SCStr *)(local_30 + 0x23));
      piVar4[0x11] = (int)((int)param_3);
      piVar4[0x12] = (int)((int)piVar6);
      piVar4[0x13] = (int)(0);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x19);
      piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(), 0);
      piVar4[0x13] = (int)((int)piVar6);
      (**(code **)(*piVar6 + 4))();
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1a)));
      *(undefined1*)(piVar4 + 0x14) = (undefined1)(0);
      thunk_FUN_101ff8b0();
      *(undefined1*)(piVar4 + 0x3c) = (undefined1)(0);
    }

    *param_2 = (undefined4)(piVar4);
    if ((int *)(piVar4) != (int *)(0x0)) {
      (**(code **)(*piVar4 + 4))();
    }
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10d93ba0; body size 986 bytes.
#line 1 "ENTRY_10d93ba0"

void __thiscall Recovered_Bulk::m_FUN_10d93ba0(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  SCLibrary *pSVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  char *pcVar14;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *(undefined1*)(param_1 + 0x1c) = (undefined1)(0);
  thunk_FUN_10d93470(&local_14);

  if (((undefined1 *)(param_2) == (undefined1 *)(0x0)) || ((undefined1 *)(param_2) != *(undefined1 **)(param_1 + 8))) {
    puVar10 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(local_14) != (undefined1 *)(0x0)) {
      puVar10 = (undefined1 *)(local_14);
    }
    thunk_FUN_112af4e0("SCFetchUpdateManifestOp",1,"Error: bad connection from %s",puVar10,uVar3);
    if (*(int **)(param_1 + 8) == (int *)((0x0))) {
      uVar12 = (undefined4)(0);
    }
    else {
      uVar12 = (undefined4)((**(code **)(**(int **)(param_1 + 8) + 0x1c))(), 0);
    }
    (**(code **)(**(int **)(param_1 + 0x14) + 4))(uVar12,1000);
    goto LAB_10d93f57;
  }
  piVar4 = (int *)((int *)thunk_FUN_10bf11c0(&local_20), 0);
  piVar11 = (int *)((int *)*piVar4);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
  *piVar4 = (int)(0);
  if ((int *)(piVar11) == (int *)(0x0)) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar11 + 0xc))(), 0);
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
  if ((int *)(local_20) != (int *)(0x0)) {
    (**(code **)(*local_20 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if ((int *)(piVar11) == (int *)(0x0)) {
    puVar10 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(local_14) != (undefined1 *)(0x0)) {
      puVar10 = (undefined1 *)(local_14);
    }
    thunk_FUN_112af4e0("SCFetchUpdateManifestOp",1,"Error: null response from %s",puVar10,uVar3);
    if (*(int **)(param_1 + 8) == (int *)((0x0))) {
      uVar5 = (undefined4)(0);
      uVar12 = (undefined4)(1000);
    }
    else {
      uVar5 = (undefined4)((**(code **)(**(int **)(param_1 + 8) + 0x1c))(), 0);
      uVar12 = (undefined4)(1000);
    }
  }
  else {
    param_2 = (undefined1 *)((undefined1 *)(**(code **)(*piVar11 + 0x14))(), 0);
    iVar6 = (int)(thunk_FUN_10bf11e0(), 0);
    if (iVar6 == 0) {
      if ((undefined1 *)(param_2) != (undefined1 *)(0xc8)) {
        thunk_FUN_112af4e0("SCFetchUpdateManifestOp",1,"HTTP error %d",param_2);
        goto LAB_10d93ee3;
      }
      thunk_FUN_112af4e0("SCFetchUpdateManifestOp",2,"HTTP 200: request has succeeded");
      piVar8 = (int *)(piVar11);
      piVar13 = (int *)(piVar4);
      if ((int *)(piVar4) != (int *)(0x0)) {
        (**(code **)(*piVar4 + 4))(piVar11,piVar4);
      }
      cVar2 = (char)(thunk_FUN_10d93840(piVar8,piVar13), 0);
      if (cVar2 == '\0') {
        thunk_FUN_112af4e0("SCFetchUpdateManifestOp",1,"Unable to parse manifest, clearing cache");
        pSVar7 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
        if (*(int **)(*(int *)(pSVar7 + 0x4c) + 0xe8) == (int *)((0x0))) {
          pcVar14 = (char *)("Unable to clear cache, can\'t get the delegate factory");
          goto LAB_10d93ed4;
        }
        piVar8 = (int *)((int *)(**(code **)(**(int **)(*(int *)(pSVar7 + 0x4c) + 0xe8) + 4)) (&local_18,0x10), 0);
        piVar11 = (int *)((int *)*piVar8);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xf);
        *piVar8 = (int)(0);
        if ((int *)(piVar11) == (int *)(0x0)) {
          local_28 = (int *)((int *)0x0);
        }
        else {
          local_28 = (int *)((int *)(**(code **)(*piVar11 + 0xc))(), 0);
        }
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x10);
        if ((int *)(piVar11) == (int *)(0x0)) {
          piVar11 = (int *)((int *)0x0);
          local_1c = (int *)((int *)0x0);
        }
        else {
          ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIUrlSessionProvider");
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
          puVar9 = (undefined4 *)((undefined4 *)(**(code **)*piVar11)(&local_24,&param_2), 0);
          piVar11 = (int *)((int *)*puVar9);
          *puVar9 = (undefined4)(0);
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x13);
          local_1c = (int *)(piVar11);
          if ((int *)(local_24) != (int *)(0x0)) {
            (**(code **)(*local_24 + 8))();
          }
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x14);
          ((SCStr *)((SCStr *)&param_2))->int_release();
          param_2 = (undefined1 *)((undefined1 *)0x0);
        }
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x15);
        if ((int *)(local_28) != (int *)(0x0)) {
          (**(code **)(*local_28 + 8))();
        }
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x18);
        if ((int *)(local_18) != (int *)(0x0)) {
          (**(code **)(*local_18 + 8))();
        }
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x17);
        uVar1 = (undefined1)((undefined1)local_8);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x17);
        if ((int *)(piVar11) == (int *)(0x0)) {
          thunk_FUN_112af4e0("SCFetchUpdateManifestOp",1, "Unable to clear cache, can\'t get a provider");
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
        }
        else {
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(uVar1);
          (**(code **)(*piVar11 + 0x20))();
          thunk_FUN_112af4e0("SCFetchUpdateManifestOp",1,"Clearing cache");
          *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1a);
          (**(code **)(*piVar11 + 8))();
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
        }
        goto LAB_10d93ee3;
      }
      uVar12 = (undefined4)((**(code **)(*piVar11 + 0x18))(&local_24), 0);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(8);
      thunk_FUN_101aa9f0(uVar12);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xb);
      if ((int *)(local_24) != (int *)(0x0)) {
        (**(code **)(*local_24 + 8))();
      }
      local_1c = (int *)((int *)(uint)DAT_119e4e04);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(10);
      ((SCStr *)((SCStr *)&local_18))->int_allocRep("X-Sonos-LatestSWGen");
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xc);
      (**(code **)(*local_2c + 0x18))(&param_2,&local_18);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xd);
      ((SCStr *)((SCStr *)&local_18))->int_release();
      puVar10 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)(param_2) != (undefined1 *)(0x0)) {
        puVar10 = (undefined1 *)(param_2);
      }
      cVar2 = (char)(thunk_FUN_1145c460(puVar10,&local_1c), 0);
      if ((cVar2 != '\0') && ((uintptr_t)(uint)*(int *)(uintptr_t)(param_1 + 0x1a) < (ushort)((local_1c)))) {
        *(short*)(param_1 + 0x1a) = (short)((short)local_1c);
      }
      uVar12 = (undefined4)(0);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0xe);
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (undefined1 *)((undefined1 *)0x0);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
      thunk_FUN_1011be40();
    }
    else {
      pcVar14 = (char *)("Error: Connection Failed");
LAB_10d93ed4:
      thunk_FUN_112af4e0("SCFetchUpdateManifestOp",1,pcVar14);
LAB_10d93ee3:
      uVar12 = (undefined4)(1000);
    }
    if (*(int **)(param_1 + 8) == (int *)((0x0))) {
      uVar5 = (undefined4)(0);
    }
    else {
      uVar5 = (undefined4)((**(code **)(**(int **)(param_1 + 8) + 0x1c))(), 0);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 4))(uVar5,uVar12);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1b)));
  if ((int *)(piVar4) != (int *)(0x0)) {
    (**(code **)(*piVar4 + 8))();
  }
LAB_10d93f57:

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10dbc660; body size 676 bytes.
#line 1 "ENTRY_10dbc660"

void __fastcall FUN_10dbc660(int param_1)

{
 try {
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *_Str1;
  int local_a7c;
  char local_a76;
  char local_a75;
  void *local_a74;
  undefined1 *puStack_a70;
  undefined4 local_a6c;
  undefined1 local_a68 [664];
  undefined1 local_7d0 [664];
  undefined1 local_538 [664];
  undefined1 local_2a0 [664];
  uint local_8;


  uVar3 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_a68);

  local_8 = (uint)(uVar3);
  if (*(int *)(param_1 + 0x18) == 0) {
LAB_10dbc6db:
    local_a76 = (char)('\0');
  }
  else {
    pcVar2 = (char *)(*(char **)(*(int *)(param_1 + 0x18) + 8), 0);
    _Str1 = (char *)("");
    if ((char *)(pcVar2) != (char *)(0x0)) {
      _Str1 = (char *)(pcVar2);
    }
    iVar4 = (int)(strncmp(_Str1,"object.item.audioItem.audioBook",0x1f), 0);
    if ((iVar4 != 0) || (((cVar1 = (char)(_Str1[0x1f]), cVar1 != '.' && (cVar1 != '#')) && (cVar1 != '\0'))) ) goto LAB_10dbc6db;
    local_a76 = (char)('\x01');
  }
  if (*(char *)(param_1 + 0x3e6) == '\0') {
    puVar6 = (undefined1 *)(*(undefined1 **)(*(int *)(param_1 + 0x10) + 0x14), 0);
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(puVar6) != (undefined1 *)(0x0)) {
      puVar7 = (undefined1 *)(puVar6);
    }
    thunk_FUN_1106a8d0(param_1 + 0x3e6,puVar7,0x81,uVar3);
  }
  pcVar2 = (char *)(*(char **)(*(int *)(param_1 + 0xc) + 0x28), 0);
  if ((char *)(pcVar2) != (char *)(0x0)) {
    if (*(int *)(pcVar2 + -0x10) < 0xffff) {
      thunk_FUN_1123fce0(pcVar2 + -0x10);
    }
    local_a75 = (char)('\0');
    if (*pcVar2 != (char)(('\0'))) goto LAB_10dbc736;
  }
  local_a75 = (char)('\x01');
LAB_10dbc736:

  if ((((char *)(pcVar2) != (char *)(0x0)) && (*(int *)(pcVar2 + -0x10) < 0xffff)) &&
     (iVar4 = (int)(thunk_FUN_1123fcd0(pcVar2 + -0x10), 0), iVar4 == 0)) {
    pcVar2[-0xffffffff00000008] = (char)('\0');
    pcVar2[-0xffffffff00000007] = (char)('\0');
    pcVar2[-0xffffffff00000006] = (char)('\0');
    pcVar2[-0xffffffff00000005] = (char)('\0');
    pcVar2[-0xffffffff0000000c] = (char)('\0');
    pcVar2[-0xffffffff0000000b] = (char)('\0');
    pcVar2[-0xffffffff0000000a] = (char)('\0');
    pcVar2[-0xffffffff00000009] = (char)('\0');
    thunk_FUN_113cfb70(pcVar2,*(undefined4 *)(pcVar2 + -4));
    free(pcVar2 + -0x10);
  }

  if (local_a75 != '\0') {
    puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10206850(&local_a7c,0), 0);

    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar5 != (undefined1 *)((0x0))) {
      puVar6 = (undefined1 *)((undefined1 *)*puVar5);
    }
    thunk_FUN_10dc7a90(puVar6);

    if (((local_a7c != 0) && (*(int *)(local_a7c + -0x10) < 0xffff)) &&
       (iVar4 = (int)(thunk_FUN_1123fcd0((char *)(local_a7c + -0x10)), 0), iVar4 == 0)) {
      *(undefined4*)(local_a7c + -8) = (undefined4)(0);
      *(undefined4*)(local_a7c + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(local_a7c,*(undefined4 *)(local_a7c + -4));
      free((char *)(local_a7c + -0x10));
    }
  }

  if (*(char *)(param_1 + 0x5f8) == '\0') {
    puVar6 = (undefined1 *)(*(undefined1 **)(*(int *)(param_1 + 0x10) + 0xc), 0);
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(puVar6) != (undefined1 *)(0x0)) {
      puVar7 = (undefined1 *)(puVar6);
    }
    thunk_FUN_1106a8d0(param_1 + 0x5f8,puVar7,99);
  }
  if (*(char *)(param_1 + 0x6be) == '\0') {
    puVar6 = (undefined1 *)(*(undefined1 **)(*(int *)(param_1 + 0x10) + 0x10), 0);
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(puVar6) != (undefined1 *)(0x0)) {
      puVar7 = (undefined1 *)(puVar6);
    }
    thunk_FUN_1106a8d0(param_1 + 0x6be,puVar7,99);
  }
  if (*(char *)(param_1 + 0x65b) == '\0') {
    puVar6 = (undefined1 *)(*(undefined1 **)(*(int *)(param_1 + 0x10) + 0x30), 0);
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(puVar6) != (undefined1 *)(0x0)) {
      puVar7 = (undefined1 *)(puVar6);
    }
    thunk_FUN_1106a8d0(param_1 + 0x65b,puVar7,99);
  }
  if ((*(char *)(param_1 + 0x784) == '\0') && (local_a76 != '\0')) {
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)**(int **)(uintptr_t)(param_1 + 0x18) != (uintptr_t)(0x0)) {
      puVar6 = (undefined1 *)((undefined1 *)**(undefined4 **)(param_1 + 0x18), 0);
    }
    thunk_FUN_1106a8d0(param_1 + 0x784,puVar6,99);
  }
  thunk_FUN_111cfd00();
  thunk_FUN_111cfd00();
  thunk_FUN_111cfd00();
  thunk_FUN_111cfd00();
  thunk_FUN_10dbbb20((uint)&local_a68,(uint)&local_7d0,(uint)&local_538,(uint)&local_2a0);

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10e066e0; body size 260 bytes.
#line 1 "ENTRY_10e066e0"

void FUN_10e066e0(float param_1)

{
 try {
  ulonglong uVar1;
  void *pvVar2;
  void *local_44;
  undefined1 local_30 [8];
  int *local_28;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_44 = (char *)(uintptr_t)(5.246100552583303e-224);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("transferTestUpdate");
  local_18 = (undefined1 *)((undefined1 *)&local_44);

  local_44 = (void *)(uintptr_t)(0.0);
  pvVar2 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar2 = (void *)((void *)(pvVar2));
  *(void**)((int)pvVar2 + 4) = (void *)(pvVar2);
  *(void**)((int)pvVar2 + 8) = (void *)(pvVar2);
  *(undefined2*)((int)pvVar2 + 0xc) = (undefined2)(0x101);
  uVar1 = (ulonglong)((ulonglong)local_44 >> 0x20);
  local_44 = (void *)(uint)((double)((unsigned long long)((int)uVar1) << 32 | (unsigned long long)(pvVar2)));
  thunk_FUN_10dee620(&local_14,0x2b,0);

  local_44 = (void *)(uint)((double)((unsigned long long)(0x10e0676b) << 32 | (unsigned long long)(local_44)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  local_44 = (char *)(uintptr_t)(5.246199488628511e-224);
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("progressPct");
  local_44 = (void *)(uint)((double)param_1);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  (**(code **)(*local_28 + 0x34))(&local_18);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined1 *)((undefined1 *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10df15a0((uint)&local_30);
  thunk_FUN_10def0d0();

  return;

 } catch (...) { }
}


// Reference entry 10e3cae0; body size 5102 bytes.
#line 1 "ENTRY_10e3cae0"

int * __fastcall FUN_10e3cae0(int *param_1)

{ int stack0x00000004;
 try {
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar5 = (uint)(DAT_12126b84);

  bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.new_account_intro"), 0);
  if (bVar2) {
    piVar6 = (int *)(operator_new(0xc), 0);
    local_20 = (int *)(piVar6);
    if ((int *)(piVar6) != (int *)(0x0)) {
      piVar6[1] = (int)((int)param_1);
      piVar6[2] = (int)((int)param_1);
      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationNewAccountIntroState);
      goto LAB_10e3dea9;
    }
  }
  else {
    bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.new_account"), 0);
    if (bVar2) {
      piVar6 = (int *)(operator_new(0x118), 0);
      local_20 = (int *)(piVar6);
      if ((int *)(piVar6) != (int *)(0x0)) {
        piVar6[1] = (int)((int)param_1);
        piVar6[2] = (int)((int)param_1);
        piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
        piVar6[4] = (int)(0);
        piVar6[5] = (int)(0);
        piVar6[6] = (int)((int)(uint)&ghidra_vftable_SCStrPropDelegate);
        *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationNewAccountState);
        piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationNewAccountState);
        piVar6[6] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationNewAccountState);
        piVar6[7] = (int)(0);
        piVar6[8] = (int)(0);
        piVar6[9] = (int)(0);
        piVar6[10] = (int)(0);
        piVar6[0xb] = (int)(0);
        piVar6[0xc] = (int)(0);
        piVar6[0xd] = (int)(0);
        piVar6[0xe] = (int)(0);
        piVar6[0xf] = (int)(0);
        piVar6[0x10] = (int)(0);
        *(undefined1*)(piVar6 + 0x11) = (undefined1)(0);
        piVar6[0x13] = (int)(0);
        piVar6[0x14] = (int)(0);
        piVar6[0x16] = (int)(0);
        piVar6[0x17] = (int)(0);
        piVar6[0x12] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
        piVar6[0x15] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
        piVar6[0x21] = (int)(0);
        piVar6[0x2b] = (int)(0);
        piVar6[0x2d] = (int)(0);
        piVar6[0x2e] = (int)(0);
        piVar6[0x30] = (int)(0);
        piVar6[0x31] = (int)(0);
        piVar6[0x2c] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
        piVar6[0x2f] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
        piVar6[0x3b] = (int)(0);
        piVar6[0x45] = (int)(0);
        local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
        thunk_FUN_10e3c100(uVar5);
        goto LAB_10e3dea9;
      }
    }
    else {
      bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.error.new_account.network"), 0);
      if (bVar2) {
        piVar6 = (int *)(operator_new(0xc), 0);
        local_20 = (int *)(piVar6);
        if ((int *)(piVar6) != (int *)(0x0)) {
          piVar6[1] = (int)((int)param_1);
          piVar6[2] = (int)((int)param_1);
          *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationNewAccountNetworkErrorState);
          goto LAB_10e3dea9;
        }
      }
      else {
        bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.account_email"), 0);
        if (bVar2) {
          piVar6 = (int *)(operator_new(0xa8), 0);
          local_20 = (int *)(piVar6);
          if ((int *)(piVar6) != (int *)(0x0)) {
            piVar6[1] = (int)((int)param_1);
            piVar6[2] = (int)((int)param_1);
            piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCStrPropDelegate);
            piVar6[4] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
            piVar6[5] = (int)(0);
            piVar6[6] = (int)(0);
            *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationAccountEmailState);
            piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationAccountEmailState);
            piVar6[4] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationAccountEmailState);
            piVar6[9] = (int)(0);
            piVar6[10] = (int)(0);
            piVar6[0xc] = (int)(0);
            piVar6[0xd] = (int)(0);
            piVar6[8] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
            piVar6[0xb] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
            piVar6[0x17] = (int)(0);
            piVar6[0x21] = (int)(0);
            piVar6[0x22] = (int)(0);
            piVar6[0x23] = (int)(0);
            *(undefined1*)(piVar6 + 0x24) = (undefined1)(0);
            piVar6[0x25] = (int)(0);
            piVar6[0x26] = (int)(0);
            piVar6[0x27] = (int)(0);
            piVar6[0x28] = (int)(0);
            local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x16)));
            thunk_FUN_10e3bda0();
            goto LAB_10e3dea9;
          }
        }
        else {
          bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.account_email_submit"), 0);
          if (bVar2) {
            piVar6 = (int *)(operator_new(0x80), 0);
            local_20 = (int *)(piVar6);
            if ((int *)(piVar6) != (int *)(0x0)) {
              piVar6[1] = (int)((int)param_1);
              piVar6[2] = (int)((int)param_1);
              piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
              piVar6[4] = (int)(0);
              piVar6[5] = (int)(0);
              *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationAccountEmailSubmitState);
              piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationAccountEmailSubmitState);
LAB_10e3ce16:
              piVar6[7] = (int)(0);
              piVar6[8] = (int)(0);
              piVar6[10] = (int)(0);
              piVar6[0xb] = (int)(0);
              piVar6[6] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
              piVar6[9] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
              piVar6[0x15] = (int)(0);
              piVar6[0x1f] = (int)(0);
              local_20 = (int *)(piVar6);
              goto LAB_10e3dea9;
            }
          }
          else {
            bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.login_prep"), 0);
            if (bVar2) {
              piVar6 = (int *)(operator_new(0xf8), 0);
              local_20 = (int *)(piVar6);
              if ((int *)(piVar6) != (int *)(0x0)) {
                piVar6[1] = (int)((int)param_1);
                piVar6[2] = (int)((int)param_1);
                piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
                piVar6[4] = (int)(0);
                piVar6[5] = (int)(0);
                *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationLoginPrepState);
                piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationLoginPrepState);
                piVar6[7] = (int)(0);
                piVar6[8] = (int)(0);
                piVar6[10] = (int)(0);
                piVar6[0xb] = (int)(0);
                piVar6[6] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                piVar6[9] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                piVar6[0x15] = (int)(0);
                piVar6[0x1f] = (int)(0);
                piVar6[0x21] = (int)(0);
                piVar6[0x22] = (int)(0);
                piVar6[0x24] = (int)(0);
                piVar6[0x25] = (int)(0);
                piVar6[0x20] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                piVar6[0x23] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                piVar6[0x2f] = (int)(0);
                piVar6[0x39] = (int)(0);
                piVar6[0x3a] = (int)(0);
                piVar6[0x3b] = (int)(0);
                piVar6[0x3c] = (int)(0);
                piVar6[0x3d] = (int)(0);
                goto LAB_10e3dea9;
              }
            }
            else {
              bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.input_login"), 0);
              if (bVar2) {
                local_20 = (int *)(operator_new(0xb8), 0);
                local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1a)));
                if ((int *)(local_20) != (int *)(0x0)) {
                  piVar6 = (int *)((int *)thunk_FUN_10e26030(param_1), 0);
                  goto LAB_10e3dea9;
                }
              }
              else {
                bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.login_submit"), 0);
                if (bVar2) {
                  piVar6 = (int *)(operator_new(0x80), 0);
                  local_20 = (int *)(piVar6);
                  if ((int *)(piVar6) != (int *)(0x0)) {
                    piVar6[1] = (int)((int)param_1);
                    piVar6[2] = (int)((int)param_1);
                    piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
                    piVar6[4] = (int)(0);
                    piVar6[5] = (int)(0);
                    *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationLoginSubmitState);
                    piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationLoginSubmitState);
                    piVar6[7] = (int)(0);
                    piVar6[8] = (int)(0);
                    piVar6[10] = (int)(0);
                    piVar6[0xb] = (int)(0);
                    piVar6[6] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                    piVar6[9] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                    piVar6[0x15] = (int)(0);
                    piVar6[0x1f] = (int)(0);
                    goto LAB_10e3dea9;
                  }
                }
                else {
                  bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.verify_email.existing"), 0);
                  if (bVar2) {
                    piVar6 = (int *)(operator_new(0x90), 0);
                    local_20 = (int *)(piVar6);
                    if ((int *)(piVar6) != (int *)(0x0)) {
                      piVar6[1] = (int)((int)param_1);
                      piVar6[2] = (int)((int)param_1);
                      piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
                      piVar6[4] = (int)(0);
                      piVar6[5] = (int)(0);
                      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailState);
                      piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailState);
                      piVar6[6] = (int)(0);
                      piVar6[7] = (int)(0);
                      piVar6[9] = (int)(0);
                      piVar6[10] = (int)(0);
                      piVar6[0xc] = (int)(0);
                      piVar6[0xd] = (int)(0);
                      piVar6[8] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                      piVar6[0xb] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                      piVar6[0x17] = (int)(0);
                      piVar6[0x21] = (int)(0);
                      *(undefined1*)(piVar6 + 0x22) = (undefined1)(1);
                      goto LAB_10e3dea9;
                    }
                  }
                  else {
                    bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.verify_email"), 0);
                    if (bVar2) {
                      piVar6 = (int *)(operator_new(0x90), 0);
                      local_20 = (int *)(piVar6);
                      if ((int *)(piVar6) != (int *)(0x0)) {
                        piVar6[1] = (int)((int)param_1);
                        piVar6[2] = (int)((int)param_1);
                        piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
                        piVar6[4] = (int)(0);
                        piVar6[5] = (int)(0);
                        *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailState);
                        piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailState);
                        piVar6[6] = (int)(0);
                        piVar6[7] = (int)(0);
                        piVar6[9] = (int)(0);
                        piVar6[10] = (int)(0);
                        piVar6[0xc] = (int)(0);
                        piVar6[0xd] = (int)(0);
                        piVar6[8] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                        piVar6[0xb] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                        piVar6[0x17] = (int)(0);
                        piVar6[0x21] = (int)(0);
                        *(undefined1*)(piVar6 + 0x22) = (undefined1)(0);
                        goto LAB_10e3dea9;
                      }
                    }
                    else {
                      bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.verify_email_submit.existing"), 0);
                      if (bVar2) {
                        piVar6 = (int *)(operator_new(0x88), 0);
                        local_20 = (int *)(piVar6);
                        if ((int *)(piVar6) != (int *)(0x0)) {
                          piVar6[1] = (int)((int)param_1);
                          piVar6[2] = (int)((int)param_1);
                          piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
                          piVar6[4] = (int)(0);
                          piVar6[5] = (int)(0);
                          *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailSubmitState);
                          piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailSubmitState);
                          piVar6[7] = (int)(0);
                          piVar6[8] = (int)(0);
                          piVar6[10] = (int)(0);
                          piVar6[0xb] = (int)(0);
                          piVar6[6] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                          piVar6[9] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                          piVar6[0x15] = (int)(0);
                          piVar6[0x1f] = (int)(0);
                          *(undefined1*)(piVar6 + 0x20) = (undefined1)(1);
                          goto LAB_10e3dea9;
                        }
                      }
                      else {
                        bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.verify_email_submit"), 0);
                        if (bVar2) {
                          piVar6 = (int *)(operator_new(0x88), 0);
                          local_20 = (int *)(piVar6);
                          if ((int *)(piVar6) != (int *)(0x0)) {
                            piVar6[1] = (int)((int)param_1);
                            piVar6[2] = (int)((int)param_1);
                            piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
                            piVar6[4] = (int)(0);
                            piVar6[5] = (int)(0);
                            *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailSubmitState);
                            piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailSubmitState);
                            piVar6[7] = (int)(0);
                            piVar6[8] = (int)(0);
                            piVar6[10] = (int)(0);
                            piVar6[0xb] = (int)(0);
                            piVar6[6] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                            piVar6[9] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                            piVar6[0x15] = (int)(0);
                            piVar6[0x1f] = (int)(0);
                            *(undefined1*)(piVar6 + 0x20) = (undefined1)(0);
                            goto LAB_10e3dea9;
                          }
                        }
                        else {
                          bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.done"), 0);
                          if (bVar2) {
                            piVar6 = (int *)(operator_new(0xc), 0);
                            local_20 = (int *)(piVar6);
                            if ((int *)(piVar6) != (int *)(0x0)) {
                              piVar6[1] = (int)((int)param_1);
                              piVar6[2] = (int)((int)param_1);
                              *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationState);
                              goto LAB_10e3dea9;
                            }
                          }
                          else {
                            bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.account_create_password"), 0);
                            if (bVar2) {
                              local_20 = (int *)(operator_new(0x110), 0);
                              local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x22)));
                              if ((int *)(local_20) != (int *)(0x0)) {
                                piVar6 = (int *)((int *)thunk_FUN_10e25c70(param_1,1), 0);
                                goto LAB_10e3dea9;
                              }
                            }
                            else {
                              bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.reset_password_input"), 0);
                              if (bVar2) {
                                local_20 = (int *)(operator_new(0x110), 0);
                                local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x24)));
                                if ((int *)(local_20) != (int *)(0x0)) {
                                  piVar6 = (int *)((int *)thunk_FUN_10e25c70(param_1,0), 0);
                                  goto LAB_10e3dea9;
                                }
                              }
                              else {
                                bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.password_set"), 0);
                                if (bVar2) {
                                  piVar6 = (int *)(operator_new(0xc), 0);
                                  local_20 = (int *)(piVar6);
                                  if ((int *)(piVar6) != (int *)(0x0)) {
                                    piVar6[1] = (int)((int)param_1);
                                    piVar6[2] = (int)((int)param_1);
                                    *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationPasswordSetState);
                                    goto LAB_10e3dea9;
                                  }
                                }
                                else {
                                  bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.error.account_already_exists"), 0);
                                  if (bVar2) {
                                    piVar6 = (int *)(operator_new(0xc), 0);
                                    local_20 = (int *)(piVar6);
                                    if ((int *)(piVar6) != (int *)(0x0)) {
                                      piVar6[1] = (int)((int)param_1);
                                      piVar6[2] = (int)((int)param_1);
                                      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationAccountExistsState);
                                      goto LAB_10e3dea9;
                                    }
                                  }
                                  else {
                                    bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.verify_email_error"), 0);
                                    if (bVar2) {
                                      piVar6 = (int *)(operator_new(0xc), 0);
                                      local_20 = (int *)(piVar6);
                                      if ((int *)(piVar6) != (int *)(0x0)) {
                                        piVar6[1] = (int)((int)param_1);
                                        piVar6[2] = (int)((int)param_1);
                                        *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationVerifyEmailErrorState);
                                        goto LAB_10e3dea9;
                                      }
                                    }
                                    else {
                                      bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.account_created"), 0);
                                      if (bVar2) {
                                        piVar6 = (int *)(operator_new(0x10), 0);
                                        local_20 = (int *)(piVar6);
                                        if ((int *)(piVar6) != (int *)(0x0)) {
                                          piVar6[1] = (int)((int)param_1);
                                          piVar6[2] = (int)((int)param_1);
                                          *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationCreatedState);
                                          *(undefined1*)(piVar6 + 3) = (undefined1)(0);
                                          goto LAB_10e3dea9;
                                        }
                                      }
                                      else {
                                        bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.country"), 0);
                                        if (bVar2) {
                                          piVar6 = (int *)(operator_new(0x1c), 0);
                                          local_20 = (int *)(piVar6);
                                          if ((int *)(piVar6) != (int *)(0x0)) {
                                            piVar6[1] = (int)((int)param_1);
                                            piVar6[2] = (int)((int)param_1);
                                            *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationCountryState);
                                            piVar6[3] = (int)(0);
                                            piVar6[4] = (int)(0);
                                            piVar6[5] = (int)(0);
                                            *(undefined1*)(piVar6 + 6) = (undefined1)(0);
                                            goto LAB_10e3dea9;
                                          }
                                        }
                                        else {
                                          bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.postal"), 0);
                                          if (bVar2) {
                                            piVar6 = (int *)(operator_new(0x2c), 0);
                                            local_20 = (int *)(piVar6);
                                            if ((int *)(piVar6) != (int *)(0x0)) {
                                              piVar6[1] = (int)((int)param_1);
                                              piVar6[2] = (int)((int)param_1);
                                              piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCStrPropDelegate);
                                              *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationPostalState);
                                              piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationPostalState);
                                              piVar6[4] = (int)(0);
                                              piVar6[5] = (int)(0);
                                              piVar6[6] = (int)(0);
                                              piVar6[7] = (int)(0);
                                              piVar6[8] = (int)(0);
                                              piVar6[9] = (int)(0);
                                              local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x30)));
                                              *(undefined1*)(piVar6 + 10) = (undefined1)(0);
                                              thunk_FUN_10e3c5a0();
                                              goto LAB_10e3dea9;
                                            }
                                          }
                                          else {
                                            bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.phone"), 0);
                                            if (bVar2) {
                                              piVar6 = (int *)(operator_new(0x2c), 0);
                                              local_20 = (int *)(piVar6);
                                              if ((int *)(piVar6) != (int *)(0x0)) {
                                                piVar6[1] = (int)((int)param_1);
                                                piVar6[2] = (int)((int)param_1);
                                                piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCStrPropDelegate);
                                                *piVar6 = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationPhoneState);
                                                piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCSecureRegistrationPhoneState);
                                                piVar6[4] = (int)(0);
                                                piVar6[5] = (int)(0);
                                                piVar6[6] = (int)(0);
                                                piVar6[7] = (int)(0);
                                                piVar6[8] = (int)(0);
                                                piVar6[9] = (int)(0);
                                                local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x37)));
                                                *(undefined1*)(piVar6 + 10) = (undefined1)(0);
                                                thunk_FUN_10e3c400();
                                                goto LAB_10e3dea9;
                                              }
                                            }
                                            else {
                                              bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.data_opt_in_submit"), 0);
                                              if (bVar2) {
                                                piVar6 = (int *)(operator_new(0x88), 0);
                                                local_20 = (int *)(piVar6);
                                                if ((int *)(piVar6) != (int *)(0x0)) {
                                                  piVar6[1] = (int)((int)param_1);
                                                  piVar6[2] = (int)((int)param_1);
                                                  piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
                                                  piVar6[4] = (int)(0);
                                                  piVar6[5] = (int)(0);
                                                  *piVar6 = (int)((int) (uint)&ghidra_vftable_SCSecureRegistrationDataOptInSubmitState);
                                                  piVar6[3] = (int)((int) (uint)&ghidra_vftable_SCSecureRegistrationDataOptInSubmitState);
                                                  piVar6[7] = (int)(0);
                                                  piVar6[8] = (int)(0);
                                                  piVar6[10] = (int)(0);
                                                  piVar6[0xb] = (int)(0);
                                                  piVar6[6] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                                                  piVar6[9] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                                                  piVar6[0x15] = (int)(0);
                                                  piVar6[0x1f] = (int)(0);
                                                  piVar6[0x20] = (int)(0);
                                                  piVar6[0x21] = (int)(0);
                                                  goto LAB_10e3dea9;
                                                }
                                              }
                                              else {
                                                bVar2 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq("sec_registration.reset_password"), 0);
                                                if (bVar2) {
                                                  piVar6 = (int *)(operator_new(0x88), 0);
                                                  local_20 = (int *)(piVar6);
                                                  if ((int *)(piVar6) != (int *)(0x0)) {
                                                    piVar6[1] = (int)((int)param_1);
                                                    piVar6[2] = (int)((int)param_1);
                                                    piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
                                                    piVar6[4] = (int)(0);
                                                    piVar6[5] = (int)(0);
                                                    *piVar6 = (int)((int) (uint)&ghidra_vftable_SCSecureRegistrationResetPasswordState);
                                                  piVar6[3] = (int)((int) (uint)&ghidra_vftable_SCSecureRegistrationResetPasswordState);
                                                  piVar6[6] = (int)(0);
                                                  piVar6[7] = (int)(0);
                                                  piVar6[9] = (int)(0);
                                                  piVar6[10] = (int)(0);
                                                  piVar6[0xc] = (int)(0);
                                                  piVar6[0xd] = (int)(0);
                                                  piVar6[8] = (int)((int)(uint)&ghidra_vftable_SCOpRef);
                                                  piVar6[0xb] = (int)((int) (uint)&ghidra_vftable_SCOpRef);
                                                  piVar6[0x17] = (int)(0);
                                                  piVar6[0x21] = (int)(0);
                                                  goto LAB_10e3dea9;
                                                  }
                                                }
                                                else {
                                                  bVar2 = (bool)(((SCStr *)((SCStr *)&
                                                  stack0x00000004))->op_eq("sec_registration.reset_password_fail"), 0);
                                                  if (bVar2) {
                                                    piVar6 = (int *)(operator_new(0xc), 0);
                                                    local_20 = (int *)(piVar6);
                                                    if ((int *)(piVar6) != (int *)(0x0)) {
                                                      piVar6[1] = (int)((int)param_1);
                                                      piVar6[2] = (int)((int)param_1);
                                                      *piVar6 = (int)((int) (uint)&ghidra_vftable_SCSecureRegistrationResetPasswordFailState);
                                                  goto LAB_10e3dea9;
                                                  }
                                                  }
                                                  else {
                                                    bVar2 = (bool)(((SCStr *)((SCStr *)&
                                                  stack0x00000004))->op_eq("sec_registration.password_email_submit"), 0);
                                                  if (bVar2) {
                                                    piVar6 = (int *)(operator_new(0x80), 0);
                                                    local_20 = (int *)(piVar6);
                                                    if ((int *)(piVar6) != (int *)(0x0)) {
                                                      piVar6[1] = (int)((int)param_1);
                                                      piVar6[2] = (int)((int)param_1);
                                                      piVar6[3] = (int)((int)(uint)&ghidra_vftable_SCIOpCBDelegate);
                                                      piVar6[4] = (int)(0);
                                                      piVar6[5] = (int)(0);
                                                      *piVar6 = (int)((int) (uint)&ghidra_vftable_SCSecureRegistrationCheckPasswordState);
                                                  piVar6[3] = (int)((int) (uint)&ghidra_vftable_SCSecureRegistrationCheckPasswordState);
                                                  goto LAB_10e3ce16;
                                                  }
                                                  }
                                                  else {
                                                    bVar2 = (bool)(((SCStr *)((SCStr *)&
                                                  stack0x00000004))->op_eq("sec_registration.reset_password_email_fail"), 0);
                                                  if (bVar2) {
                                                    piVar6 = (int *)(operator_new(0xc), 0);
                                                    local_20 = (int *)(piVar6);
                                                    if ((int *)(piVar6) != (int *)(0x0)) {
                                                      piVar6[1] = (int)((int)param_1);
                                                      piVar6[2] = (int)((int)param_1);
                                                      *piVar6 = (int)((int) (uint)&ghidra_vftable_SCSecureRegistrationResetPasswordEmailFailState);
                                                  goto LAB_10e3dea9;
                                                  }
                                                  }
                                                  else {
                                                    bVar2 = (bool)(((SCStr *)((SCStr *)&
                                                  stack0x00000004))->op_eq("sec_registration.reset_password_success_other"), 0);
                                                  if (bVar2) {
                                                    piVar6 = (int *)(operator_new(0xc), 0);
                                                    local_20 = (int *)(piVar6);
                                                    if ((int *)(piVar6) != (int *)(0x0)) {
                                                      piVar6[1] = (int)((int)param_1);
                                                      piVar6[2] = (int)((int)param_1);
                                                      *piVar6 = (int)((int) SCSecureRegistrationResetPasswordSuccessOtherState
                                                  ::vftable);
                                                  goto LAB_10e3dea9;
                                                  }
                                                  }
                                                  else {
                                                    bVar2 = (bool)(((SCStr *)((SCStr *)&
                                                  stack0x00000004))->op_eq("sec_registration.error.network"), 0);
                                                  if (bVar2) {
                                                    piVar6 = (int *)(operator_new(0x10), 0);
                                                    local_20 = (int *)(piVar6);
                                                    if ((int *)(piVar6) != (int *)(0x0)) {
                                                      piVar6[1] = (int)((int)param_1);
                                                      piVar6[2] = (int)((int)param_1);
                                                      *piVar6 = (int)((int) (uint)&ghidra_vftable_SCSecureRegistrationNetworkErrorState);
                                                  *(undefined1*)(piVar6 + 3) = (undefined1)(0);
                                                  goto LAB_10e3dea9;
                                                  }
                                                  }
                                                  else {
                                                    bVar2 = (bool)(((SCStr *)((SCStr *)&
                                                  stack0x00000004))->op_eq("sec_registration.complete"), 0);
                                                  if (bVar2) {
                                                    cVar3 = (char)((**(code **)(*param_1 + 0xf8))(), 0);
                                                    if (cVar3 != '\0') {
                                                      ((SCStr *)((SCStr *)&local_18))->int_allocRep("HadError");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x40);
                                                      ((SCStr *)((SCStr *)&local_14))->int_allocRep("HadError");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x41);
                                                      uVar4 = (undefined1)((**(code **)(*param_1 + 0xe0)) (&local_18), 0);
                                                      local_1c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1c + 1)) << 8 | (uint)(uVar4)));
                                                      (**(code **)(*(int *)param_1[0x2f] + 0x40)) (&local_14,local_1c);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x42);
                                                      ((SCStr *)((SCStr *)&local_14))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x43);
                                                      ((SCStr *)((SCStr *)&local_18))->int_release();
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_allocRep("CustomerID");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x44);
                                                      ((SCStr *)((SCStr *)&local_14))->int_allocRep("CustomerID");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x45);
                                                      puVar7 = (undefined4 *)((undefined4 *) (**(code **)(*param_1 + 0xf4)) (&local_20), 0);
                                                      piVar6 = (int *)((int *)*puVar7);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x46);
                                                      uVar8 = (undefined4)((**(code **)(*param_1 + 0xd0)) (&local_18,&local_1c), 0);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x47);
                                                      (**(code **)(*piVar6 + 0x1c))(&local_14,uVar8) ;
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x48);
                                                      ((SCStr *)((SCStr *)&local_18))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x49);
                                                      if ((int *)(local_20) != (int *)(0x0)) {
                                                        (**(code **)(*local_20 + 8))();
                                                      }
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4a);
                                                      ((SCStr *)((SCStr *)&local_14))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4b);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_release();
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
                                                      ((SCStr *)((SCStr *)&local_18))->int_allocRep("StashedEmail");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4c);
                                                      ((SCStr *)((SCStr *)&local_14))->int_allocRep("StashedEmail");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4d);
                                                      puVar7 = (undefined4 *)((undefined4 *) (**(code **)(*param_1 + 0xf4)) (&local_20), 0);
                                                      piVar6 = (int *)((int *)*puVar7);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4e);
                                                      uVar8 = (undefined4)((**(code **)(*param_1 + 0xd0)) (&local_1c,&local_18), 0);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x4f);
                                                      (**(code **)(*piVar6 + 0x1c))(&local_14,uVar8) ;
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x50);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x51);
                                                      if ((int *)(local_20) != (int *)(0x0)) {
                                                        (**(code **)(*local_20 + 8))();
                                                      }
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x52);
                                                      ((SCStr *)((SCStr *)&local_14))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x53);
                                                      ((SCStr *)((SCStr *)&local_18))->int_release();
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
                                                      ((SCStr *)((SCStr *)&local_18))->int_allocRep("UpdateBranch");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x54);
                                                      ((SCStr *)((SCStr *)&local_14))->int_allocRep("UpdateBranch");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x55);
                                                      puVar7 = (undefined4 *)((undefined4 *) (**(code **)(*param_1 + 0xf4)) (&local_20), 0);
                                                      piVar6 = (int *)((int *)*puVar7);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x56);
                                                      uVar8 = (undefined4)((**(code **)(*param_1 + 0xd0)) (&local_1c,&local_18), 0);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x57);
                                                      (**(code **)(*piVar6 + 0x1c))(&local_14,uVar8) ;
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x58);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x59);
                                                      if ((int *)(local_20) != (int *)(0x0)) {
                                                        (**(code **)(*local_20 + 8))();
                                                      }
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x5a);
                                                      ((SCStr *)((SCStr *)&local_14))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x5b);
                                                      ((SCStr *)((SCStr *)&local_18))->int_release();
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
                                                      ((SCStr *)((SCStr *)&local_18))->int_allocRep("CountryCode");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x5c);
                                                      ((SCStr *)((SCStr *)&local_14))->int_allocRep("CountryCode");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x5d);
                                                      puVar7 = (undefined4 *)((undefined4 *) (**(code **)(*param_1 + 0xf4)) (&local_20), 0);
                                                      piVar6 = (int *)((int *)*puVar7);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x5e);
                                                      uVar8 = (undefined4)((**(code **)(*param_1 + 0xd0)) (&local_1c,&local_18), 0);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x5f);
                                                      (**(code **)(*piVar6 + 0x1c))(&local_14,uVar8) ;
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x60);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x61);
                                                      if ((int *)(local_20) != (int *)(0x0)) {
                                                        (**(code **)(*local_20 + 8))();
                                                      }
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x62);
                                                      ((SCStr *)((SCStr *)&local_14))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(99);
                                                      ((SCStr *)((SCStr *)&local_18))->int_release();
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
                                                      ((SCStr *)((SCStr *)&local_18))->int_allocRep("PostalCode");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(100);
                                                      ((SCStr *)((SCStr *)&local_14))->int_allocRep("PostalCode");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x65);
                                                      puVar7 = (undefined4 *)((undefined4 *) (**(code **)(*param_1 + 0xf4)) (&local_20), 0);
                                                      piVar6 = (int *)((int *)*puVar7);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x66);
                                                      uVar8 = (undefined4)((**(code **)(*param_1 + 0xd0)) (&local_1c,&local_18), 0);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x67);
                                                      (**(code **)(*piVar6 + 0x1c))(&local_14,uVar8) ;
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x68);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x69);
                                                      if ((int *)(local_20) != (int *)(0x0)) {
                                                        (**(code **)(*local_20 + 8))();
                                                      }
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x6a);
                                                      ((SCStr *)((SCStr *)&local_14))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x6b);
                                                      ((SCStr *)((SCStr *)&local_18))->int_release();
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_allocRep("UsageDataOptIn");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x6c);
                                                      ((SCStr *)((SCStr *)&local_14))->int_allocRep("UsageDataOptIn");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x6d);
                                                      puVar7 = (undefined4 *)((undefined4 *) (**(code **)(*param_1 + 0xf4)) (&local_20), 0);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x6e);
                                                      iVar1 = (int)(*(int *)*puVar7);
                                                      uVar4 = (undefined1)((**(code **)(*param_1 + 0xe0)) (&local_1c), 0);
                                                      (**(code **)(iVar1 + 0x40))(&local_14,uVar4);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x6f);
                                                      if ((int *)(local_20) != (int *)(0x0)) {
                                                        (**(code **)(*local_20 + 8))();
                                                      }
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x70);
                                                      ((SCStr *)((SCStr *)&local_14))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x71);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_release();
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_allocRep("UsageDataSet");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x72);
                                                      ((SCStr *)((SCStr *)&local_14))->int_allocRep("UsageDataSet");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x73);
                                                      puVar7 = (undefined4 *)((undefined4 *) (**(code **)(*param_1 + 0xf4)) (&local_20), 0);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x74);
                                                      iVar1 = (int)(*(int *)*puVar7);
                                                      uVar4 = (undefined1)((**(code **)(*param_1 + 0xe0)) (&local_1c), 0);
                                                      (**(code **)(iVar1 + 0x40))(&local_14,uVar4);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x75);
                                                      if ((int *)(local_20) != (int *)(0x0)) {
                                                        (**(code **)(*local_20 + 8))();
                                                      }
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x76);
                                                      ((SCStr *)((SCStr *)&local_14))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x77);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_release();
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_allocRep("CancelledFlow");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x78);
                                                      ((SCStr *)((SCStr *)&local_14))->int_allocRep("CancelledFlow");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x79);
                                                      puVar7 = (undefined4 *)((undefined4 *) (**(code **)(*param_1 + 0xf4)) (&local_20), 0);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x7a);
                                                      iVar1 = (int)(*(int *)*puVar7);
                                                      uVar4 = (undefined1)((**(code **)(*param_1 + 0xe0)) (&local_1c), 0);
                                                      (**(code **)(iVar1 + 0x40))(&local_14,uVar4);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x7b);
                                                      if ((int *)(local_20) != (int *)(0x0)) {
                                                        (**(code **)(*local_20 + 8))();
                                                      }
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x7c);
                                                      ((SCStr *)((SCStr *)&local_14))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x7d);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_release();
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SkipLogin");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x7e);
                                                      ((SCStr *)((SCStr *)&local_14))->int_allocRep("SkipLogin");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x7f);
                                                      puVar7 = (undefined4 *)((undefined4 *) (**(code **)(*param_1 + 0xf4)) (&local_20), 0);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x80);
                                                      iVar1 = (int)(*(int *)*puVar7);
                                                      uVar4 = (undefined1)((**(code **)(*param_1 + 0xe0)) (&local_1c), 0);
                                                      (**(code **)(iVar1 + 0x40))(&local_14,uVar4);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x81);
                                                      if ((int *)(local_20) != (int *)(0x0)) {
                                                        (**(code **)(*local_20 + 8))();
                                                      }
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x82);
                                                      ((SCStr *)((SCStr *)&local_14))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x83);
                                                      ((SCStr *)((SCStr *)&local_1c))->int_release();
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
                                                      ((SCStr *)((SCStr *)&local_18))->int_allocRep("TransferAccount");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x84);
                                                      ((SCStr *)((SCStr *)&local_14))->int_allocRep("TransferAccount");
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x85);
                                                      puVar7 = (undefined4 *)((undefined4 *) (**(code **)(*param_1 + 0xf4)) (&local_20), 0);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x86);
                                                      iVar1 = (int)(*(int *)*puVar7);
                                                      uVar4 = (undefined1)((**(code **)(*param_1 + 0xe0)) (&local_18), 0);
                                                      (**(code **)(iVar1 + 0x40))(&local_14,uVar4);
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x87);
                                                      if ((int *)(local_20) != (int *)(0x0)) {
                                                        (**(code **)(*local_20 + 8))();
                                                      }
                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x88);
                                                      ((SCStr *)((SCStr *)&local_14))->int_release();

                                                      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x89);
                                                      ((SCStr *)((SCStr *)&local_18))->int_release();
                                                      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
                                                    }
                                                    piVar6 = (int *)(operator_new(0xc), 0);
                                                    local_20 = (int *)(piVar6);
                                                    if ((int *)(piVar6) != (int *)(0x0)) {
                                                      piVar6[1] = (int)((int)param_1);
                                                      piVar6[2] = (int)((int)param_1);
                                                      *piVar6 = (int)((int) (uint)&ghidra_vftable_SCSecureRegistrationCompleteState);
                                                  goto LAB_10e3dea9;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  piVar6 = (int *)((int *)0x0);
LAB_10e3dea9:

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (int *)(piVar6);

 } catch (...) { }
}


// Reference entry 10ea8270; body size 1199 bytes.
#line 1 "ENTRY_10ea8270"

SCStr * FUN_10ea8270(SCStr *param_1,SCStr *param_2)

{
 try {
  SCStr *pSVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  void *pvVar6;
  SCStr *pSVar7;
  SCStr *this_;
  int *piVar8;
  SCStr *pSVar9;
  SCStr local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  SCStr local_64;
  SCStr local_63;
  SCStr local_62;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  SCStr local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  SCStr *local_20;
  SCStr *local_1c;
  SCStr *local_18;
  byte local_13;
  byte local_12;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (((SCStr *)(param_1) != (SCStr *)(param_2)) && (this_ = (SCStr *)(param_1 + 0x4c),(SCStr *)( this_) != (SCStr *)(param_2))) {
    pSVar9 = (SCStr *)(param_1 + 0x78);

    do {

      local_1c = (SCStr *)(pSVar9);
      local_18 = (SCStr *)(this_);
      ((SCStr *)((uint)&local_70))->m_op_ctor(this_);

      ((SCStr *)((SCStr *)&local_6c))->m_op_ctor(pSVar9 + -0x28);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
      ((SCStr *)((SCStr *)&local_68))->m_op_ctor(pSVar9 + -0x24);
      local_64 = (SCStr)(pSVar9[-0x20]);
      local_5c = (undefined4)(*(undefined4 *)(pSVar9 + -0x18));
      local_63 = (SCStr)(pSVar9[-0x1f]);
      local_62 = (SCStr)(pSVar9[-0x1e]);
      local_60 = (undefined4)(*(undefined4 *)(pSVar9 + -0x1c));
      local_58 = (undefined4)(*(undefined4 *)(pSVar9 + -0x14));
      local_54 = (undefined4)(*(undefined4 *)(pSVar9 + -0x10));
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);


      pvVar6 = (void *)(operator_new(0x14), 0);
      *(void**)pvVar6 = (void *)((void *)(pvVar6));
      *(void**)((int)pvVar6 + 4) = (void *)(pvVar6);
      *(void**)((int)pvVar6 + 8) = (void *)(pvVar6);
      *(undefined2*)((int)pvVar6 + 0xc) = (undefined2)(0x101);
      local_50 = (undefined4)(*(undefined4 *)(pSVar9 + -0xc));
      uVar2 = (undefined4)(*(undefined4 *)(pSVar9 + -8));
      *(void**)(pSVar9 + -0xc) = (void *)(pvVar6);
      *(undefined4*)(pSVar9 + -8) = (undefined4)(local_4c);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);


      local_4c = (undefined4)(uVar2);
      pvVar6 = (void *)(operator_new(0x14), 0);
      *(void**)pvVar6 = (void *)((void *)(pvVar6));
      *(void**)((int)pvVar6 + 4) = (void *)(pvVar6);
      *(void**)((int)pvVar6 + 8) = (void *)(pvVar6);
      *(undefined2*)((int)pvVar6 + 0xc) = (undefined2)(0x101);
      local_48 = (int)(*(int *)(pSVar9 + -4));
      uVar2 = (undefined4)(*(undefined4 *)pSVar9);
      *(void**)(pSVar9 + -4) = (void *)(pvVar6);
      *(undefined4*)pSVar9 = (undefined4)((SCStr *)(local_44));
      local_40 = (SCStr)(pSVar9[4]);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
      local_44 = (undefined4)(uVar2);
      ((SCStr *)((SCStr *)&local_3c))->m_op_ctor(pSVar9 + 8);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
      ((SCStr *)((SCStr *)&local_38))->m_op_ctor(pSVar9 + 0xc);
      local_34 = (undefined4)(*(undefined4 *)(pSVar9 + 0x10));
      local_30 = (undefined4)(*(undefined4 *)(pSVar9 + 0x14));
      local_2c = (undefined4)(*(undefined4 *)(pSVar9 + 0x18));
      local_28 = (undefined4)(*(undefined4 *)(pSVar9 + 0x1c));

      local_11 = (byte)(thunk_FUN_114576f0(local_28), 0);
      local_12 = (byte)(thunk_FUN_114576f0(*(undefined4 *)(param_1 + 0x48)), 0);
      local_13 = (byte)(thunk_FUN_11457d40(local_28), 0);
      bVar5 = (byte)(thunk_FUN_11457d40(*(undefined4 *)(param_1 + 0x48)), 0);
      if (((uintptr_t)((byte)param_1[0xe])< (uintptr_t)((SCStr)local_62)) ||
         (((uintptr_t)((byte)param_1[0xe])<= (uintptr_t)((SCStr)local_62)&&
          ((local_12 < local_11 || ((local_12 <= local_11 && (bVar5 < local_13)))))))) {
        thunk_FUN_10ea8cf0(param_1,this_,pSVar9 + 0x20);
        thunk_FUN_10eab7c0((uint)&local_70);
      }
      else {
        while( true ) {
          pSVar7 = (SCStr *)(pSVar9 + -0x4c);
          local_20 = (SCStr *)(pSVar7);
          local_13 = (byte)(thunk_FUN_114576f0(local_28), 0);
          local_12 = (byte)(thunk_FUN_114576f0(*(undefined4 *)(pSVar9 + -0x30)), 0);
          local_11 = (byte)(thunk_FUN_11457d40(local_28), 0);
          bVar5 = (byte)(thunk_FUN_11457d40(*(undefined4 *)(pSVar9 + -0x30)), 0);
          if (((byte)local_62 <= (byte)pSVar9[-0x6a]) &&
             (((byte)local_62 < (byte)pSVar9[-0x6a] ||
              ((local_13 <= local_12 && ((local_13 < local_12 || (local_11 <= bVar5)))))))) break;
          if (pSVar9 + -0x78 != (SCStr *)(this_)) {
            ((SCStr *)(this_))->int_release();
            *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)(pSVar9 + -0x78)));
            ((SCStr *)(this_))->int_addref();
          }
          pSVar1 = (SCStr *)(this_ + 4);
          if (pSVar9 + -0x74 != (SCStr *)(pSVar1)) {
            ((SCStr *)(pSVar1))->int_release();
            *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(pSVar9 + -0x74)));
            ((SCStr *)(pSVar1))->int_addref();
          }
          pSVar1 = (SCStr *)(this_ + 8);
          if (pSVar9 + -0x70 != (SCStr *)(pSVar1)) {
            ((SCStr *)(pSVar1))->int_release();
            *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(pSVar9 + -0x70)));
            ((SCStr *)(pSVar1))->int_addref();
          }
          this_[0xc] = (SCStr)(pSVar9[-0x6c]);
          this_[0xd] = (SCStr)(pSVar9[-0x6b]);
          this_[0xe] = (SCStr)(pSVar9[-0x6a]);
          uVar2 = (undefined4)(*(undefined4 *)(pSVar9 + -100));
          *(undefined4*)(this_ + 0x10) = (undefined4)(*(undefined4 *)(pSVar9 + -0x68));
          *(undefined4*)(this_ + 0x14) = (undefined4)(uVar2);
          uVar2 = (undefined4)(*(undefined4 *)(pSVar9 + -0x5c));
          *(undefined4*)(this_ + 0x18) = (undefined4)(*(undefined4 *)(pSVar9 + -0x60));
          *(undefined4*)(this_ + 0x1c) = (undefined4)(uVar2);
          if (this_ + 0x20 != (SCStr *)(pSVar9) + -0x58) {
            local_24 = (int)(*(int *)(this_ + 0x20));
            if (*(char *)((int)*(int **)(local_24 + 4) + 0xd) == '\0') {
              piVar8 = (int *)(*(int **)(local_24 + 4), 0);
              do {
                thunk_FUN_1086f2f0(this_ + 0x20,piVar8[2]);
                piVar3 = (int *)((int *)*piVar8);
                thunk_FUN_1148a50e(piVar8,0x14);
                pSVar7 = (SCStr *)(local_20);
                piVar8 = (int *)(piVar3);
              } while (*(char *)((int)piVar3 + 0xd) == '\0');
            }
            *(int*)(local_24 + 4) = (int)(local_24);
            *(int*)local_24 = (int)((int)(local_24));
            *(int*)(local_24 + 8) = (int)(local_24);
            *(undefined4*)(this_ + 0x24) = (undefined4)(0);
            uVar2 = (undefined4)(*(undefined4 *)(this_ + 0x20));
            *(undefined4*)(this_ + 0x20) = (undefined4)(*(undefined4 *)(pSVar7 + -0xc));
            *(undefined4*)(pSVar7 + -0xc) = (undefined4)(uVar2);
            uVar2 = (undefined4)(*(undefined4 *)(this_ + 0x24));
            *(undefined4*)(this_ + 0x24) = (undefined4)(*(undefined4 *)(pSVar7 + -8));
            *(undefined4*)(pSVar7 + -8) = (undefined4)(uVar2);
          }
          pSVar9 = (SCStr *)(this_ + 0x28);
          if ((SCStr *)((pSVar9)) != (SCStr *)(pSVar7) + -4) {
            iVar4 = (int)(*(int *)pSVar9);
            thunk_FUN_102a3ea0(pSVar9,*(undefined4 *)(iVar4 + 4));
            *(int*)(iVar4 + 4) = (int)(iVar4);
            *(int*)iVar4 = (int)((int)(iVar4));
            *(int*)(iVar4 + 8) = (int)(iVar4);
            *(undefined4*)(this_ + 0x2c) = (undefined4)(0);
            uVar2 = (undefined4)(*(undefined4 *)(this_ + 0x28));
            *(undefined4*)(this_ + 0x28) = (undefined4)(*(undefined4 *)(pSVar7 + -4));
            *(undefined4*)(pSVar7 + -4) = (undefined4)(uVar2);
            uVar2 = (undefined4)(*(undefined4 *)(this_ + 0x2c));
            *(undefined4*)(this_ + 0x2c) = (undefined4)(*(undefined4 *)pSVar7);
            *(undefined4*)pSVar7 = (undefined4)((SCStr *)(uVar2));
          }
          pSVar9 = (SCStr *)(this_ + 0x34);
          this_[0x30] = (SCStr)(pSVar7[4]);
          if (pSVar7 + 8 != (SCStr *)(pSVar9)) {
            ((SCStr *)(pSVar9))->int_release();
            *(undefined4*)pSVar9 = (undefined4)((SCStr *)(*(undefined4 *)(pSVar7 + 8)));
            ((SCStr *)(pSVar9))->int_addref();
          }
          pSVar9 = (SCStr *)(this_ + 0x38);
          if (pSVar7 + 0xc != (SCStr *)(pSVar9)) {
            ((SCStr *)(pSVar9))->int_release();
            *(undefined4*)pSVar9 = (undefined4)((SCStr *)(*(undefined4 *)(pSVar7 + 0xc)));
            ((SCStr *)(pSVar9))->int_addref();
          }
          *(undefined4*)(this_ + 0x3c) = (undefined4)(*(undefined4 *)(pSVar7 + 0x10));
          *(undefined4*)(this_ + 0x40) = (undefined4)(*(undefined4 *)(pSVar7 + 0x14));
          *(undefined4*)(this_ + 0x44) = (undefined4)(*(undefined4 *)(pSVar7 + 0x18));
          *(undefined4*)(this_ + 0x48) = (undefined4)(*(undefined4 *)(pSVar7 + 0x1c));
          this_ = (SCStr *)(pSVar7 + -0x2c);
          pSVar9 = (SCStr *)(pSVar7);
        }
        thunk_FUN_10eab7c0((uint)&local_70);
        this_ = (SCStr *)(local_18);
        pSVar9 = (SCStr *)(local_1c);
      }

      ((SCStr *)((SCStr *)&local_38))->int_release();


      ((SCStr *)((SCStr *)&local_3c))->int_release();

      thunk_FUN_102a3ea0(&local_48,*(undefined4 *)(local_48 + 4));
      thunk_FUN_1148a50e(local_48,0x14);
      thunk_FUN_1086f290(&local_50);

      ((SCStr *)((SCStr *)&local_68))->int_release();


      ((SCStr *)((SCStr *)&local_6c))->int_release();


      ((SCStr *)((uint)&local_70))->int_release();
      this_ = (SCStr *)(this_ + 0x4c);
      pSVar9 = (SCStr *)(pSVar9 + 0x4c);
    } while ((SCStr *)(this_) != (SCStr *)(param_2));

    return (SCStr *)(param_2);
  }
  return (SCStr *)(param_2);

 } catch (...) { }
}


// Reference entry 10ee36d0; body size 944 bytes.
#line 1 "ENTRY_10ee36d0"

void __fastcall FUN_10ee36d0(int param_1)

{
 try {
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined1 *puVar9;
  int local_48;
  int local_44;
  char *local_40;
  SCStr *local_3c;
  int local_38;
  byte local_31;
  uint local_30;
  char *local_2c;
  char local_26;
  char local_25;
  void *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  iVar1 = (int)(param_1 + 4);
  local_26 = (char)('\x01');
  *(undefined4*)(param_1 + 0xc0) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb8) = (undefined4)(1);
  local_14 = (uint)(uVar4);
  thunk_FUN_10302280(iVar1,"Stop the KeepAlive timer",uVar4);
  *(undefined4*)(param_1 + 0xa8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xac) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb0) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb4) = (undefined4)(0);
  if ((*(int *)(param_1 + 0xd4) != 0) && (*(int *)(*(int *)(param_1 + 0xd4) + 8) != 0)) {
    switch(*(undefined4 *)(param_1 + 0xcc)) {
    default:

      break;
    case 1:

      break;
    case 2:

      break;
    case 3:
    case 4:
    case 5:
    case 6:;}
    local_25 = (char)('\0');
    cVar2 = (char)(thunk_FUN_11248b40(1), 0);
    puVar9 = (undefined1 *)((uint)&local_1c);
    cVar3 = (char)(local_25);
    if (cVar2 != '\0') {
      cVar3 = (char)('\x01');
    }
    thunk_FUN_10c97630((uint)&local_24);
    thunk_FUN_1125cec0(puVar9);
    ((SCStr *)((SCStr *)&local_2c))->int_allocRep((char *)0x0);

    iVar5 = (int)(thunk_FUN_10c96100(), 0);
    local_31 = (byte)(iVar5 < 3);
    if ((local_30 == 2) || ((local_30 & 0x14) != 0)) {
      local_3c = (SCStr *)((SCStr *)thunk_FUN_10c97390(&local_38), 0);
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
      if ((SCStr *)(local_3c) != (SCStr *)((SCStr*)&local_2c)) {
        ((SCStr *)((SCStr *)&local_2c))->int_release();
        local_2c = (char *)(*(char **)local_3c);
        ((SCStr *)((SCStr *)&local_2c))->int_addref();
      }
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(2);
      ((SCStr *)((SCStr *)&local_38))->int_release();
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
      if (((char *)(local_2c) == (char *)(0x0)) || (*local_2c == (char)(('\0')))) {
        thunk_FUN_10302280(iVar1,"Product IP is empty!");
        ((SCStr *)((SCStr *)&local_40))->int_allocRep("10.69.69.1");
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
        ((SCStr *)((SCStr *)&local_2c))->int_release();
        local_2c = (char *)(local_40);
        ((SCStr *)((SCStr *)&local_2c))->int_addref();
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(4);
        ((SCStr *)((SCStr *)&local_40))->int_release();
        local_40 = (char *)((char *)0x0);
      }
      *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
      local_38 = (int)(*(int *)(param_1 + 0x17c));
      if ((local_38 == 0) || (*(int *)(param_1 + 0x180) == 0)) {
        local_3c = (SCStr *)((SCStr *)0x0);


        thunk_FUN_10302280(iVar1,"NOT using auth pskId");
      }
      else {
        local_3c = (SCStr *)((SCStr *)(param_1 + 0xdc));
        local_48 = (int)(param_1 + 0xfc);
        thunk_FUN_10302280(iVar1,"Using auth pskId: %s",local_48);
      }
      local_25 = (char)(*(char *)(param_1 + 0xd0));
      if (local_25 == '\0') {
        local_30 = (uint)(thunk_FUN_10c97670(), 0);
        local_25 = (char)(*(char *)(param_1 + 0xd0));
        if (local_25 == '\0') {
          local_44 = (int)(thunk_FUN_10c97650(), 0);
          local_25 = (char)(*(char *)(param_1 + 0xd0));
        }
        else {

        }
      }
      else {


      }
      pcVar6 = (char *)("");
      if ((char *)(local_2c) != (char *)(0x0)) {
        pcVar6 = (char *)(local_2c);
      }
      if (*(int *)(param_1 + 0x84) == 0) {
        local_24[0] = (void *)(operator_new(0x2088), 0);
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(5);
        if (local_24[0] == (uintptr_t)(0x0)) {
          iVar5 = (int)(0);
        }
        else {
          iVar5 = (int)(thunk_FUN_111bcc10(), 0);
        }
        *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0);
        *(int*)(param_1 + 0x84) = (int)(iVar5);
        if (iVar5 != 0) {
          thunk_FUN_111be750(param_1);
          goto LAB_10ee39a5;
        }
LAB_10ee3a09:
        uVar7 = (undefined4)(1000);
LAB_10ee3a0e:
        thunk_FUN_10302280(iVar1,"Dtls handshake failed (%d)",uVar7);
        goto LAB_10ee3a1d;
      }
LAB_10ee39a5:
      bVar8 = (byte)(local_31 | 2);
      if (cVar3 == '\0') {
        bVar8 = (byte)(local_31);
      }
      if (local_25 != '\0') {
        if ((local_44 == 0) && (local_30 == 0)) {
          bVar8 = (byte)(bVar8 | 0x10);
          goto LAB_10ee39d1;
        }
        thunk_FUN_10302280(iVar1,"model/submodel must be zero while using ALLOW_UNKNOWN_MODEL");
        uVar7 = (undefined4)(0xffff);
        goto LAB_10ee3a0e;
      }
LAB_10ee39d1:
      cVar3 = (char)(thunk_FUN_111bdc60(0,bVar8,pcVar6,0x1b36,0x1b35,(uint)&local_1c,local_44,local_30,local_3c, local_38,local_48), 0);
      if (cVar3 == '\0') {
        *(undefined4*)(param_1 + 0xb8) = (undefined4)(0);
        goto LAB_10ee3a09;
      }
    }
    else {
      thunk_FUN_10302280(iVar1,"Unknown transport type.");
LAB_10ee3a1d:
      local_26 = (char)('\0');
    }

    ((SCStr *)((SCStr *)&local_2c))->int_release();
    local_2c = (char *)((char *)0x0);

    if (local_26 != '\0') goto LAB_10ee3a62;
  }
  thunk_FUN_10302280(iVar1,"Start Dtls initial session failed.",uVar4);
  thunk_FUN_10ee3c70(1000,1,7);
LAB_10ee3a62:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10ef3470; body size 93 bytes.
#line 1 "ENTRY_10ef3470"

void __fastcall FUN_10ef3470(undefined4 *param_1)

{
 try {
  uint uVar1;
  basic_ostream<char,std::char_traits<char>> *this_;
  int
  *p_Var2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_Tarball);
  if (*(char *)(param_1 + 1) == '\0') {

    this_ = (basic_ostream<char,std::char_traits<char>> *)((basic_ostream<char,std::char_traits<char>> *) thunk_FUN_10ef31b0(cerr_exref,"[warning]tar file was not finished.",LAB_10007ca7,uVar1), 0);
    ((std::basic_ostream<> *)(this_))->op_shl(p_Var2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10ef34f0; body size 125 bytes.
#line 1 "ENTRY_10ef34f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef34f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  basic_ostream<char,std::char_traits<char>> *this_;
  int
  *p_Var2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_Tarball);
  if (*(char *)(param_1 + 1) == '\0') {

    this_ = (basic_ostream<char,std::char_traits<char>> *)((basic_ostream<char,std::char_traits<char>> *) thunk_FUN_10ef31b0(cerr_exref,"[warning]tar file was not finished.",LAB_10007ca7,uVar1), 0);
    ((std::basic_ostream<> *)(this_))->op_shl(p_Var2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10ef35a0; body size 162 bytes.
#line 1 "ENTRY_10ef35a0"

void FUN_10ef35a0(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  char acStack_37 [7];
  char *pcStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  int iStack_20;
  char local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_14);
  iStack_20 = (int)(0);
  pbVar1 = (byte *)(param_1 + 0x94);
  iVar6 = (int)(0x200);
  pbVar1[0] = (byte)(0x20);
  pbVar1[1] = (byte)(0x20);
  pbVar1[2] = (byte)(0x20);
  pbVar1[3] = (byte)(0x20);
  param_1[0x98] = (byte)(0x20);
  param_1[0x99] = (byte)(0x20);
  param_1[0x9a] = (byte)(0x20);
  param_1[0x9b] = (byte)(0x20);
  pbVar4 = (byte *)(param_1);
  do {
    bVar2 = (byte)(*pbVar4);
    pbVar4 = (byte *)(pbVar4 + 1);
    iStack_20 = (int)(iStack_20 + (uint)bVar2);
    iVar6 = (int)(iVar6 + -1);
  } while (iVar6 != 0);
  uStack_24 = (undefined4)(7);
  pcStack_28 = (char *)("%0*lo");
  pcStack_30 = (char *)((uint)&local_14);
  uStack_2c = (undefined4)(0xd);
  acStack_37[3] = (char)(-0xf);
  acStack_37[4] = (char)('5');
  acStack_37[5] = (char)(-0x11);
  acStack_37[6] = (char)('\x10');
  thunk_FUN_10ef4180();
  pcVar5 = (char *)((uint)&local_14);
  do {
    cVar3 = (char)(*pcVar5);
    pcVar5 = (char *)(pcVar5 + 1);
  } while (cVar3 != '\0');
  pcVar5 = (char *)((uint)&local_14 + 0xd + (int)(pcVar5 + (-0x31 - (int)&pcStack_30)) + (((int *)(uintptr_t)((uint)&local_14 + 0xd))[(int)(pcVar5 + (-0x31 - (int)&pcStack_30))] == '0'));
  *(undefined4*)pbVar1 = (undefined4)((byte *)(*(undefined4 *)pcVar5));
  *(undefined2*)(param_1 + 0x98) = (undefined2)(*(undefined2 *)(pcVar5 + 4));
  param_1[0x9a] = (byte)(pcVar5[6]);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ef3920; body size 120 bytes.
#line 1 "ENTRY_10ef3920"

void FUN_10ef3920(int param_1,uint param_2)

{ int stack0x00000000;
 try {
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char acStack_34 [4];
  char acStack_30 [4];
  char *pcStack_2c;
  undefined4 uStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  char local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_14);
  uStack_1c = (uint)(param_2 & 0xfff);

  pcStack_24 = (char *)("%0*lo");
  pcStack_2c = (char *)((uint)&local_14);

  acStack_30[0] = (char)('P');
  acStack_30[1] = (char)('9');
  acStack_30[2] = (char)(-0x11);
  acStack_30[3] = (char)('\x10');
  thunk_FUN_10ef4180();
  pcVar3 = (char *)((uint)&local_14);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  pcVar3 = (char *)(pcVar3 + (-0x2d - (int)&pcStack_2c));
  uVar2 = (undefined4)(*(undefined4 *) (pcVar3 + (int)(&stack0x00000000 + ((((int *)(uintptr_t)((uint)&local_14 + 0xc))[(int)pcVar3] == '0') - 4))));
  *(undefined4*)(param_1 + 100) = (undefined4)(*(undefined4 *) (pcVar3 + (int)(&stack0x00000000 + ((((int *)(uintptr_t)((uint)&local_14 + 0xc))[(int)pcVar3] == '0') - 8))));
  *(undefined4*)(param_1 + 0x68) = (undefined4)(uVar2);
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10efc450; body size 734 bytes.
#line 1 "ENTRY_10efc450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10efc450(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *local_2c;
  int *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  uVar9 = (uint)(1);


  piVar10 = (int *)((int *)**(int **)(param_1 + 0x2c), 0);
  local_24 = (int)(param_1);
  if ((int *)(piVar10) != *(int **)(param_1 + 0x2c)) {
    do {
      piVar1 = (int *)((int *)piVar10[5]);
      if ((int *)(piVar1) == (int *)(0x0)) {
        puVar7 = (undefined1 *)(&DAT_1194bf40);
LAB_10efc4ef:
        thunk_FUN_112af4e0("SCBondingSetup",1,"%s is missing whose channel ID is %d",puVar7, piVar10[4]);
        if ((uVar9 & 2) != 0) {
          uVar9 = (uint)(uVar9 & 0xfffffffd);

          local_14 = (uint)(uVar9);
          ((SCStr *)((SCStr *)&local_18))->int_release();

          local_8 = (uint)(local_8 & 0xffffff00);
        }
        if ((int *)(piVar1) != (int *)(0x0)) {
          local_20 = (int *)(piVar1);
          local_1c = (int *)((int *)(**(code **)(*piVar1 + 0xc))(), 0);
          (**(code **)(*local_1c + 4))();
          piVar2 = (int *)(local_1c);

          piVar6 = (int *)((int *)param_2[1]);
          if ((int *)(piVar6) == (int *)param_2[2]) {
            thunk_FUN_103535f0(piVar6,&local_20);
          }
          else {
            *piVar6 = (int)((int)piVar1);
            piVar6[1] = (int)((int)local_1c);
            (**(code **)(*local_1c + 4))();
            param_2[1] = (undefined4)(param_2[1] + 8);
            local_1c = (int *)(piVar2);
          }
          iVar8 = (int)(*local_1c);

          local_20 = (int *)((int *)0x0);
          local_1c = (int *)((int *)0x0);
          (**(code **)(iVar8 + 8))();
          local_8 = (uint)(local_8 & 0xffffff00);
        }
      }
      else {
        cVar3 = (char)(thunk_FUN_10c99930(uVar4), 0);
        if (cVar3 == '\0') {
          puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10c98c80(&local_18), 0);
          uVar9 = (uint)(uVar9 | 2);
          puVar7 = (undefined1 *)(&DAT_1186d2ee);
          local_14 = (uint)(uVar9);
          if ((undefined1 *)*puVar5 != (undefined1 *)((0x0))) {
            puVar7 = (undefined1 *)((undefined1 *)*puVar5);
          }
          goto LAB_10efc4ef;
        }
      }
      piVar1 = (int *)((int *)piVar10[2]);
      if (*(char *)((int)piVar1 + 0xd) == '\0') {
        cVar3 = (char)(*(char *)(*piVar1 + 0xd));
        piVar10 = (int *)(piVar1);
        piVar1 = (int *)((int *)*piVar1);
        while (cVar3 == '\0') {
          cVar3 = (char)(*(char *)(*piVar1 + 0xd));
          piVar10 = (int *)(piVar1);
          piVar1 = (int *)((int *)*piVar1);
        }
      }
      else {
        cVar3 = (char)(*(char *)(piVar10[1] + 0xd));
        piVar6 = (int *)((int *)piVar10[1]);
        piVar1 = (int *)(piVar10);
        while ((piVar10 = (int *)(piVar6), cVar3 == '\0' && ((int *)(piVar1) == (int *)piVar10[2]))) {
          cVar3 = (char)(*(char *)(piVar10[1] + 0xd));
          piVar6 = (int *)((int *)piVar10[1]);
          piVar1 = (int *)(piVar10);
        }
      }
    } while ((int *)(piVar10) != *(int **)(local_24 + 0x2c));
  }
  iVar8 = (int)(*(int *)(local_24 + 0x34));
  local_1c = (int *)((int *)0x0);
  if (*(int *)(local_24 + 0x38) - iVar8 >> 3 == 0) {

    return (undefined4 *)(param_2);
  }
  do {
    piVar10 = (int *)(*(int **)(iVar8 + (int)local_1c * 8), 0);
    if ((int *)(piVar10) == (int *)(0x0)) {
      puVar7 = (undefined1 *)(&DAT_1194bf40);
LAB_10efc63d:
      thunk_FUN_112af4e0("SCBondingSetup",1,"Sub (%s) is missing",puVar7);
      if ((uVar9 & 4) != 0) {
        uVar9 = (uint)(uVar9 & 0xfffffffb);

        local_14 = (uint)(uVar9);
        ((SCStr *)((SCStr *)&local_18))->int_release();

        local_8 = (uint)(local_8 & 0xffffff00);
      }
      if ((int *)(piVar10) != (int *)(0x0)) {
        local_2c = (int *)(piVar10);
        piVar6 = (int *)((int *)(**(code **)(*piVar10 + 0xc))(), 0);
        local_28 = (int *)(piVar6);
        (**(code **)(*piVar6 + 4))();

        piVar1 = (int *)((int *)param_2[1]);
        if ((int *)(piVar1) == (int *)param_2[2]) {
          thunk_FUN_103535f0(piVar1,&local_2c);
        }
        else {
          *piVar1 = (int)((int)piVar10);
          piVar1[1] = (int)((int)piVar6);
          (**(code **)(*piVar6 + 4))();
          param_2[1] = (undefined4)(param_2[1] + 8);
        }

        local_2c = (int *)((int *)0x0);
        local_28 = (int *)((int *)0x0);
        (**(code **)(*piVar6 + 8))();
        local_8 = (uint)(local_8 & 0xffffff00);
      }
    }
    else {
      cVar3 = (char)(thunk_FUN_10c99930(uVar4), 0);
      if (cVar3 == '\0') {
        puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10c98c80(&local_18), 0);
        uVar9 = (uint)(uVar9 | 4);
        puVar7 = (undefined1 *)(&DAT_1186d2ee);
        local_14 = (uint)(uVar9);
        if ((undefined1 *)*puVar5 != (undefined1 *)((0x0))) {
          puVar7 = (undefined1 *)((undefined1 *)*puVar5);
        }
        goto LAB_10efc63d;
      }
    }
    local_1c = (int *)((int *)((int)local_1c + 1));
    iVar8 = (int)(*(int *)(local_24 + 0x34));
    if ((uintptr_t)((uint)(*(int *)(uintptr_t)(local_24 + 0x38) - iVar8 >> 3))<= (uintptr_t)(local_1c)) {

      return (undefined4 *)(param_2);
    }
  } while( true );

 } catch (...) { }
}


// Reference entry 10f85160; body size 1162 bytes.
#line 1 "ENTRY_10f85160"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::m_FUN_10f85160(int param_2,short *param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined4 *puVar14;
  int *local_7108 [3];
  uint local_70fc;
  undefined4 local_70f4 [4];
  undefined4 local_70e4;
  int local_70e0;
  uint local_70dc;
  undefined4 local_70d8;
  undefined4 local_70d4;
  undefined4 local_70d0;
  int *local_70cc;
  char local_70c5;
  void *local_70c4;
  undefined1 *puStack_70c0;
  undefined4 local_70bc;
  undefined **local_70b8 [222];
  undefined **local_6d40;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_70b8);

  if (*(int **)(param_1 + 0x2c) == (int *)((0x0))) {
LAB_10f851c2:
    iVar5 = (int)(*(int *)(param_1 + 0x30));
  }
  else {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(local_8), 0);
    if (cVar2 == '\0') goto LAB_10f851c2;
    iVar5 = (int)((**(code **)(**(int **)(param_1 + 0x2c) + 8))(), 0);
  }
  if ((param_2 != iVar5) || (*param_3 != (short)((0)))) goto LAB_10f855c3;
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  thunk_FUN_10f82020();
  local_70b8[0] = (undefined **)((uint)&ghidra_vftable_RZPDevice);
  local_6d40 = (undefined **)((uint)&ghidra_vftable_RZPDevice);
  local_70dc = (uint)(*(uint *)(*(int *)(param_1 + 0x2c) + 0xc090));
  local_70f4[0] = (undefined4)(0);
  *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(1);
  *(unsigned short*)((char *)&local_70bc + 1) = (unsigned short)(0);


  cVar2 = (char)(thunk_FUN_111a5f10("hardwareVersion",(uint)&local_70f4), 0);
  if (cVar2 != '\0') {
    thunk_FUN_111a3310(&local_70cc);
    *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(2);

    piVar6 = (int *)((int *)&DAT_1186d2ee);
    if ((int *)(local_70cc) != (int *)(0x0)) {
      piVar6 = (int *)(local_70cc);
    }





    thunk_FUN_1145a8d0(piVar6);
    local_70e0 = (int)(local_1c);
    local_70e4 = (undefined4)(local_18);
    *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(1);
    thunk_FUN_101ba300();
  }
  piVar6 = (int *)((int *)thunk_FUN_1034de40(&local_70cc), 0);
  local_70bc = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70bc + 1)) << 8 | (uint)(3)));

  if (*piVar6 == (int)((0))) {
    cVar2 = (char)(thunk_FUN_111a5f10("softwareVersion",(uint)&local_70f4), 0);
    local_70c5 = (char)('\x01');
    if (cVar2 == '\0') goto LAB_10f852fe;
  }
  else {
LAB_10f852fe:
    local_70c5 = (char)('\0');
  }

  if ((int *)(local_70cc) != (int *)(0x0)) {
    (**(code **)(*local_70cc + 8))();
  }
  *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(1);
  if (local_70c5 != '\0') {
    pcVar7 = (char *)((char *)thunk_FUN_111a32a0(), 0);
    ((SCStr *)((SCStr *)&local_70cc))->int_allocRep(pcVar7);
    *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(5);
    ((SCStr *)((SCStr *)&local_70d8))->int_allocRep(".");
    *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(6);
    ((SCStr *)((SCStr *)&local_70cc))->split((SCStr *)(uint)&local_7108);
    *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(9);
    ((SCStr *)((SCStr *)&local_70d8))->int_release();

    *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(8);
    pcVar7 = (char *)("");
    if ((char *)*local_7108[0] != (char *)(((0x0)))) {
      pcVar7 = (char *)((char *)*local_7108[0]);
    }
    local_70fc = (uint)(atoi(pcVar7), 0);
    pcVar7 = (char *)("");
    if ((uintptr_t)(int *)(local_7108[0][1]) != (uintptr_t)(0x0)) {
      pcVar7 = (char *)((char *)local_7108[0][1]);
    }
    iVar5 = (int)(atoi(pcVar7), 0);
    ((SCStr *)((SCStr *)&local_70d0))->int_allocRep("-");
    puVar14 = (undefined4 *)(&local_70d0);
    *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(10);
    piVar6 = (int *)((int *)((SCStr *)((SCStr *)&local_70cc))->split((SCStr *)&local_14), 0);
    pcVar7 = (char *)("");
    if (*(char **)(*piVar6 + 4) != (char *)((0x0))) {
      pcVar7 = (char *)(*(char **)(*piVar6 + 4), 0);
    }
    iVar8 = (int)(atoi(pcVar7), 0);
    thunk_FUN_101a2bf0(puVar14);
    *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(0xb);
    ((SCStr *)((SCStr *)&local_70d0))->int_release();
    local_70d4 = (undefined4)(local_70d4 & 0xfffffff8);
    iVar1 = (int)(*(int *)(param_1 + 0x20));
    bVar13 = (byte)((byte)iVar5);
    bVar3 = (byte)((byte)local_70fc);
    local_70d4 = (undefined4)(((uint)(((uint)(*(uint *)((char *)&local_70d4 + 3)) << 8 | (uint)(bVar13))) << 16 | (uint)(((uint)(bVar3) << 8 | (uint)((undefined1)local_70d4)))));
    *(undefined1*)(iVar1 + 0xe0) = (undefined1)(1);
    *(uint*)(iVar1 + 0xe4) = (uint)(local_70fc & 0xff);
    *(undefined1*)(iVar1 + 0xe8) = (undefined1)(1);
    *(uint*)(iVar1 + 0xec) = (uint)(((uint)(*(uint *)((char *)&local_70d4 + 3)) << 8 | (uint)(bVar13)) & 0xff);
    *(undefined1*)(iVar1 + 0xf0) = (undefined1)(1);
    *(int*)(iVar1 + 0xf4) = (int)(iVar8);
    if (bVar3 < 0x34) {
      if (bVar3 == 0x33) {
        if (bVar13 < 2) {
          if (bVar13 != 1) goto LAB_10f85454;
          uVar4 = (undefined1)(1);
        }
        else {
          uVar4 = (undefined1)(1);
        }
      }
      else {
LAB_10f85454:
        uVar4 = (undefined1)(0);
      }
    }
    else {
      uVar4 = (undefined1)(1);
    }
    *(undefined1*)(iVar1 + 0x66) = (undefined1)(1);
    *(undefined1*)(iVar1 + 0x67) = (undefined1)(uVar4);
    thunk_FUN_101a2bf0(puVar14);
    *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(0xc);
    ((SCStr *)((SCStr *)&local_70cc))->int_release();
  }
  *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(1);
  iVar5 = (int)(0);
  cVar2 = (char)(thunk_FUN_111a5f10("nsVersion",(uint)&local_70f4), 0);
  if (cVar2 != '\0') {
    iVar5 = (int)(thunk_FUN_111a2df0(), 0);
  }
  cVar2 = (char)(thunk_FUN_111a5f10("minApiVersion",(uint)&local_70f4), 0);
  if (cVar2 == '\0') {
    uVar12 = (uint)(0xffffffff);
  }
  else {
    pcVar9 = (char *)((char *)thunk_FUN_111a32a0(), 0);


    local_20 = (uint)(local_20 & 0xffffff00);
    pcVar7 = (char *)(pcVar9);
    do {
      cVar2 = (char)(*pcVar7);
      pcVar7 = (char *)(pcVar7 + 1);
    } while (cVar2 != '\0');
    thunk_FUN_1012d130(pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
    *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(0xd);
    pbVar10 = (byte *)((byte *)thunk_FUN_10f87c40(&local_20), 0);
    *(unsigned char*)((char *)&local_70bc + 0) = (unsigned char)(1);
    local_70dc = (uint)((uint)*pbVar10);
    uVar12 = (uint)(local_70dc);
    if (0xf < local_c) {
      uVar12 = (uint)(local_c + 1);
      uVar11 = (uint)(local_20);
      if (0xfff < uVar12) {
        uVar11 = (uint)(*(uint *)(local_20 - 4));
        uVar12 = (uint)(local_c + 0x24);
        if (0x1f < (local_20 - uVar11) - 4) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(uVar11,uVar12);
      uVar12 = (uint)(local_70dc);
    }
  }
  if (local_70e0 != 0) {
    iVar1 = (int)(*(int *)(param_1 + 0x20));
    *(int*)(iVar1 + 0x84) = (int)(local_70e0);
    *(undefined1*)(iVar1 + 0x80) = (undefined1)(1);
    *(undefined1*)(iVar1 + 0x88) = (undefined1)(1);
    *(undefined4*)(iVar1 + 0x8c) = (undefined4)(local_70e4);
    if (0 < iVar5) {
      *(undefined1*)(iVar1 + 0xa0) = (undefined1)(1);
      *(int*)(iVar1 + 0xa4) = (int)(iVar5);
      *(undefined1*)(iVar1 + 0x68) = (undefined1)(1);
      *(bool*)(iVar1 + 0x69) = (bool)(0x14 < iVar5);
    }
    if (0 < (int)uVar12) {
      *(undefined1*)(iVar1 + 0xa8) = (undefined1)(1);
      *(uint*)(iVar1 + 0xac) = (uint)(uVar12);
    }
  }
  local_70bc = (undefined4)(((uint)(*(unsigned short *)((char *)&local_70bc + 1)) << 8 | (uint)(0xe)));
  thunk_FUN_111a36f0();
  thunk_FUN_10f82840();
LAB_10f855c3:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10feca10; body size 1397 bytes.
#line 1 "ENTRY_10feca10"

undefined4 * __fastcall FUN_10feca10(undefined4 *param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  SCLibrary *pSVar5;
  int *piVar6;
  SCStr *pSVar7;
  char *pcVar8;
  int **ppiVar9;
  int *local_20;
  int *local_1c;
  SCStr *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("x-sonos-scuri://homepage");

  thunk_FUN_104d6ff0(&local_14);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&local_14))->int_release();
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCIReorderable);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCIEventSink);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAggregateHelperCB);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(6);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCGenericEventSinkCB);
  ((SCHouseholdEventSink *)((SCHouseholdEventSink *)(param_1 + 0x25)))->m_op_ctor();
  param_1[0x28] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  param_1[0x29] = (undefined4)(0);
  param_1[0x2a] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHomePageDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCHomePageDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCHomePageDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCHomePageDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCHomePageDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCHomePageDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCHomePageDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCHomePageDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCHomePageDataSource);
  param_1[0x28] = (undefined4)((uint)&ghidra_vftable_SCHomePageDataSource);
  param_1[0x2b] = (undefined4)(0);
  param_1[0x2c] = (undefined4)(0);
  param_1[0x2d] = (undefined4)(0);
  param_1[0x2e] = (undefined4)(0);
  param_1[0x2f] = (undefined4)(0);
  param_1[0x30] = (undefined4)(0);
  param_1[0x31] = (undefined4)(0);
  param_1[0x32] = (undefined4)(0);
  param_1[0x33] = (undefined4)(0);
  param_1[0x34] = (undefined4)(0);
  param_1[0x35] = (undefined4)(0);
  param_1[0x36] = (undefined4)(0);
  param_1[0x37] = (undefined4)(0);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  param_1[0x3b] = (undefined4)(0);
  param_1[0x3c] = (undefined4)(0);
  param_1[0x3d] = (undefined4)(0);
  param_1[0x3e] = (undefined4)(0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x11);
  thunk_FUN_104d7540(uVar2);
  param_1[0x40] = (undefined4)(0);
  param_1[0x41] = (undefined4)(0);
  param_1[0x42] = (undefined4)(0);
  param_1[0x43] = (undefined4)(0);
  param_1[0x44] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x45) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0x116) = (undefined1)(0);
  param_1[0x46] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x47) = (undefined1)(0);
  param_1[0x48] = (undefined4)(0);
  param_1[0x49] = (undefined4)(0);
  param_1[0x4a] = (undefined4)(0);
  param_1[0x4b] = (undefined4)(0);
  param_1[0x4c] = (undefined4)(0);
  param_1[0x4d] = (undefined4)(0);
  param_1[0x4e] = (undefined4)(0);
  param_1[0x4f] = (undefined4)(0);
  param_1[0x50] = (undefined4)(0);
  param_1[0x51] = (undefined4)(0);
  param_1[0x52] = (undefined4)(0);
  param_1[0x53] = (undefined4)(0);
  param_1[0x54] = (undefined4)(0);
  param_1[0x55] = (undefined4)(0);
  param_1[0x56] = (undefined4)(0);
  param_1[0x57] = (undefined4)(0);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1b);
  param_1[0x4a] = (undefined4)(0);
  param_1[0x4b] = (undefined4)(0);
  param_1[0x4c] = (undefined4)(0);
  param_1[0x4d] = (undefined4)(0);
  piVar3 = (int *)((int *)createPropertyBag(), 0);
  piVar6 = (int *)((int *)*piVar3);
  *piVar3 = (int)(0);
  piVar3 = (int *)((int *)param_1[0x32]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1c)));
  if ((int *)(piVar3) != (int *)(0x0)) {
    param_1[0x31] = (undefined4)(0);
    param_1[0x32] = (undefined4)(0);
    (**(code **)(*piVar3 + 8))();
  }
  param_1[0x31] = (undefined4)(piVar6);
  if ((int *)(piVar6) == (int *)(0x0)) {
    uVar4 = (undefined4)(0);
  }
  else {
    uVar4 = (undefined4)((**(code **)(*piVar6 + 0xc))(), 0);
  }
  param_1[0x32] = (undefined4)(uVar4);
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1d);
  if ((int *)(local_14) != (int *)(0x0)) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1b);
  pSVar5 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  if ((SCLibrary *)(pSVar5) != (SCLibrary *)(0x0)) {
    pSVar7 = (SCStr *)((SCStr *)&DAT_1186d2ee);
    if ((SCStr *)**(int **)(uintptr_t)(pSVar5 + 0x4c) != (uintptr_t)(0x0)) {
      pSVar7 = (SCStr *)((SCStr *)**(int **)(pSVar5 + 0x4c), 0);
    }
    pcVar8 = (char *)("%s/mysonos.json");
    ((SCStr *)(pSVar7))->format((char *)(param_1 + 0x44));
    piVar6 = (int *)((int *)thunk_FUN_110828b0(pcVar8,pSVar7), 0);
    local_18 = (SCStr *)((SCStr *)piVar6);
    local_1c = (int *)(operator_new(0x20), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1e);
    if ((int *)(local_1c) == (int *)(0x0)) {
      uVar4 = (undefined4)(0);
    }
    else {
      uVar4 = (undefined4)(thunk_FUN_104ddfd0(param_1 + 0x22,piVar6), 0);
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1b);
    param_1[0x37] = (undefined4)(uVar4);
    local_1c = (int *)(operator_new(0x1c), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1f);
    if ((int *)(local_1c) == (int *)(0x0)) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      piVar6 = (int *)((int *)thunk_FUN_10ffaf30(param_1 + 0x23), 0);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1b)));
    if ((int *)(piVar6) != (int *)param_1[0x33]) {
      piVar3 = (int *)((int *)param_1[0x34]);
      if ((int *)(piVar3) != (int *)(0x0)) {
        param_1[0x33] = (undefined4)(0);
        param_1[0x34] = (undefined4)(0);
        (**(code **)(*piVar3 + 8))();
      }
      param_1[0x33] = (undefined4)(piVar6);
      if ((int *)(piVar6) == (int *)(0x0)) {
        param_1[0x34] = (undefined4)(0);
      }
      else {
        piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(), 0);
        param_1[0x34] = (undefined4)(piVar6);
        (**(code **)(*piVar6 + 4))();
      }
    }
    local_1c = (int *)(operator_new(0xc), 0);
    if ((int *)(local_1c) == (int *)(0x0)) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      *local_1c = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      local_1c[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *local_1c = (int)((int)(uint)&ghidra_vftable_SCGenericEventSink);
      local_1c[2] = (int)((int)(param_1 + 0x24));
      piVar6 = (int *)(local_1c);
    }
    if ((int *)(piVar6) != (int *)param_1[0x35]) {
      piVar3 = (int *)((int *)param_1[0x36]);
      if ((int *)(piVar3) != (int *)(0x0)) {
        param_1[0x35] = (undefined4)(0);
        param_1[0x36] = (undefined4)(0);
        (**(code **)(*piVar3 + 8))();
      }
      param_1[0x35] = (undefined4)(piVar6);
      if ((int *)(piVar6) == (int *)(0x0)) {
        param_1[0x36] = (undefined4)(0);
      }
      else {
        if (*(code **)(*piVar6 + 0xc) != (code *)((thunk_FUN_101b5500))) {
          piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))(), 0);
        }
        param_1[0x36] = (undefined4)(piVar6);
        (**(code **)(*piVar6 + 4))();
      }
    }
    ppiVar9 = (int **)(&local_14);
    pSVar5 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
    uVar4 = (undefined4)(((SCLibrary *)(pSVar5))->getSCHousehold(), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x20);
    thunk_FUN_101bf370(uVar4);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x23);
    if ((int *)(local_14) != (int *)(0x0)) {
      (**(code **)(*local_14 + 8))(ppiVar9);
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x22);
    if ((int *)(local_20) != (int *)(0x0)) {
      (**(code **)(*local_20 + 0xc4))(param_1[0x26]);
    }
    uVar1 = (undefined1)((**(code **)(*(int *)local_18 + 0x3c))(), 0);
    *(undefined1*)(param_1 + 0x47) = (undefined1)(uVar1);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x24);
    if ((int *)(local_1c) != (int *)(0x0)) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x1b);
  }
  local_18 = (SCStr *)((SCStr *)thunk_FUN_104f7090(&local_1c), 0);
  pSVar7 = (SCStr *)((SCStr *)(param_1 + 0x48));
  *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(0x25);
  if ((SCStr *)((local_18)) != (SCStr *)(pSVar7)) {
    ((SCStr *)(pSVar7))->int_release();
    *(undefined4*)pSVar7 = (undefined4)((SCStr *)(*(undefined4 *)local_18));
    ((SCStr *)(pSVar7))->int_addref();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x26)));
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 11038b00; body size 27 bytes.
#line 1 "ENTRY_11038b00"

void FUN_11038b00(undefined4 param_1)

{
  int *_Buf;
  int _Value;
  
  _Value = (int)(1);
  _Buf = (int *)((int *)thunk_FUN_1146c9e0(param_1,(code *)&longjmp,0x40), 0);
                    
  longjmp(_Buf,_Value);
}


// Reference entry 1106d3a0; body size 477 bytes.
#line 1 "ENTRY_1106d3a0"

void __thiscall Recovered_Bulk::m_FUN_1106d3a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101ba530(param_2);
  thunk_FUN_101ba530(param_11);
  thunk_FUN_101ba530(param_3);
  thunk_FUN_101ba530(param_4);
  thunk_FUN_101ba530(param_5);
  local_18[1] = (int)(0);

  if ((uint)&local_18 + 1 != (uintptr_t)(param_1 + 0x14)) {
    iVar2 = (int)(*(int *)(param_1 + 0x14));
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      iVar3 = (int)(thunk_FUN_1123fcd0((char *)(iVar2 + -0x10)), 0);
      if (iVar3 == 0) {
        *(undefined4*)(iVar2 + -8) = (undefined4)(0);
        *(undefined4*)(iVar2 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
        free((char *)(iVar2 + -0x10));
      }
    }
    *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  }
  piVar1 = (int *)((int *)(param_1 + 0x60));

  thunk_FUN_101fda20(*piVar1,*(undefined4 *)(param_1 + 100),piVar1);
  piVar1 = (int *)((int *)*piVar1);
  *(int**)(param_1 + 100) = (int *)(piVar1);
  if ((int *)(piVar1) == *(int **)(param_1 + 0x68)) {
    thunk_FUN_1106b2c0(piVar1,param_6);
  }
  else {
    iVar2 = (int)(*param_6);
    *piVar1 = (int)(iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
    }
    *(int*)(param_1 + 100) = (int)(*(int *)(param_1 + 100) + 4);
  }
  thunk_FUN_101ba530(param_7);
  thunk_FUN_101ba530(param_9);
  thunk_FUN_101ba530(param_8);
  local_18[0] = (int)(0);

  if ((int *)((uint)&local_18) != (int *)(param_1 + 0x20)) {
    iVar2 = (int)(*(int *)(param_1 + 0x20));
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      iVar3 = (int)(thunk_FUN_1123fcd0((char *)(iVar2 + -0x10)), 0);
      if (iVar3 == 0) {
        *(undefined4*)(iVar2 + -8) = (undefined4)(0);
        *(undefined4*)(iVar2 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
        free((char *)(iVar2 + -0x10));
      }
    }
    *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  }

  thunk_FUN_101ba530(param_10);
  thunk_FUN_101ba530(param_12);
  thunk_FUN_101ba530(param_13);
  thunk_FUN_101ba530(param_14);
  thunk_FUN_101ba530(param_15);
  thunk_FUN_1106f6e0();
  thunk_FUN_1106e590();

  return;

 } catch (...) { }
}


// Reference entry 11080360; body size 322 bytes.
#line 1 "ENTRY_11080360"

void FUN_11080360(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  uint _Size;
  size_t _Size_00;
  void *local_834 [2];
  int local_82c;
  uint local_828;
  int local_824;
  undefined1 local_80c [1028];
  undefined1 local_408 [1028];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_834);
  thunk_FUN_11245a50(param_1,(uint)&local_834);
  if ((((local_834[0] != (uintptr_t)(0x0)) && (local_82c != 0)) && (local_824 != 0)) && (5 < local_828)) {
    iVar1 = (int)(strncmp((char *)(local_82c + (local_828 - 6)),".x-udn",6), 0);
    if (iVar1 == 0) {
      _Size_00 = (size_t)(local_82c - (int)local_834[0]);
      thunk_FUN_11245c20(&local_82c,(uint)&local_80c,0x401,0x2e);
      memcpy(param_2,local_834[0],_Size_00);
      piVar2 = (int *)((int *)thunk_FUN_110935f0((uint)&local_80c,0), 0);
      if ((int *)(piVar2) != (int *)(0x0)) {
        _Size = (uint)((**(code **)(*piVar2 + 0x2c))((uint)&local_408,0x401), 0);
        if (_Size != 0) {
          if (0x2000 - _Size_00 < _Size) {
            _Size = (uint)(0x2000 - _Size_00);
          }
          memcpy(param_2 + _Size_00,(char *)&local_408,_Size);
          thunk_FUN_1106a8d0(param_2 + _Size_00 + _Size,local_824,0x2001 - (_Size_00 + _Size));
          goto LAB_11080488;
        }
      }
      *param_2 = (undefined1)(0);
      goto LAB_11080488;
    }
  }
  thunk_FUN_1106a8d0(param_2,param_1,0x2001);
LAB_11080488:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11094940; body size 1565 bytes.
#line 1 "ENTRY_11094940"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::m_FUN_11094940(undefined4 *param_2,int *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  void *_Memory;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  int local_28b8;
  undefined4 *local_28b4;
  int *local_28b0;
  undefined4 *local_28ac;
  undefined4 *local_28a8;
  undefined1 *local_28a4;
  void *local_28a0;
  undefined1 *puStack_289c;
  int local_2898;
  undefined1 local_2894 [4120];
  undefined1 local_187c [66];
  undefined1 local_183a [33];
  undefined1 local_1819 [17];
  undefined1 local_1808 [100];
  undefined1 local_17a4 [1032];
  uint local_139c [1253];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_2894);

  local_28ac = (undefined4 *)(param_2);
  local_28b0 = (int *)(param_3);
  local_28a8 = (undefined4 *)(param_4);
  thunk_FUN_112af4e0("household",1,"network changed, re-subscribing to UPnP services",local_8);
  cVar3 = (char)(thunk_FUN_111a06b0(local_28ac), 0);
  if (((cVar3 == '\0') || (cVar3 = (char)(thunk_FUN_111a06b0(param_3), 0), cVar3 == '\0')) ||
     (cVar3 = (char)(thunk_FUN_111a06b0(param_4), 0), cVar3 == '\0')) {
    puVar11 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x2d43c) != (undefined1 *)((0x0))) {
      puVar11 = (undefined1 *)(*(undefined1 **)(param_1 + 0x2d43c), 0);
    }
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x2d438) != (undefined1 *)((0x0))) {
      puVar9 = (undefined1 *)(*(undefined1 **)(param_1 + 0x2d438), 0);
    }
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x2d434) != (undefined1 *)((0x0))) {
      puVar7 = (undefined1 *)(*(undefined1 **)(param_1 + 0x2d434), 0);
    }
    thunk_FUN_112af4e0("household",1,"previous network - %s:%s:%s",puVar7,puVar9,puVar11);
    puVar11 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)((0x0))) {
      puVar11 = (undefined1 *)((undefined1 *)*param_4);
    }
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*local_28b0 != (undefined1 *)((0x0))) {
      puVar9 = (undefined1 *)((undefined1 *)*local_28b0);
    }
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*local_28ac != (undefined1 *)((0x0))) {
      puVar7 = (undefined1 *)((undefined1 *)*local_28ac);
    }
    thunk_FUN_112af4e0("household",1,"current network - %s:%s:%s",puVar7,puVar9,puVar11);
    thunk_FUN_11249060();

    puVar11 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x2d434) != (undefined1 *)((0x0))) {
      puVar11 = (undefined1 *)(*(undefined1 **)(param_1 + 0x2d434), 0);
    }
    thunk_FUN_11249230("previousNetworkName",puVar11);
    puVar11 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x2d438) != (undefined1 *)((0x0))) {
      puVar11 = (undefined1 *)(*(undefined1 **)(param_1 + 0x2d438), 0);
    }
    thunk_FUN_11249230("previousIPv4Address",puVar11);
    puVar11 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x2d43c) != (undefined1 *)((0x0))) {
      puVar11 = (undefined1 *)(*(undefined1 **)(param_1 + 0x2d43c), 0);
    }
    thunk_FUN_11249230("previousNetworkBSSID",puVar11);
    puVar11 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*local_28ac != (undefined1 *)((0x0))) {
      puVar11 = (undefined1 *)((undefined1 *)*local_28ac);
    }
    thunk_FUN_11249230("currentNetworkName",puVar11);
    puVar11 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*local_28b0 != (undefined1 *)((0x0))) {
      puVar11 = (undefined1 *)((undefined1 *)*local_28b0);
    }
    thunk_FUN_11249230("currentIPv4Address",puVar11);
    puVar11 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*local_28a8 != (undefined1 *)((0x0))) {
      puVar11 = (undefined1 *)((undefined1 *)*local_28a8);
    }
    thunk_FUN_11249230("currentNetworkBSSID",puVar11);
    thunk_FUN_110838a0((uint)&local_2894);
    iVar4 = (int)(thunk_FUN_112782b0(), 0);
    (**(code **)(*(int *)(iVar4 + 4) + 0xc))((uint)&local_2894,"household","networkChange",1,1);
    thunk_FUN_101ba530(local_28ac);
    thunk_FUN_101ba530(local_28b0);
    thunk_FUN_101ba530(local_28a8);
    *(undefined1*)(param_1 + 0x1d4) = (undefined1)(1);
    if (*(int *)(param_1 + 0x1e0) == 0) {
      local_28a4 = (undefined1 *)(operator_new(0x6c), 0);
      *(unsigned char*)((char *)&local_2898 + 0) = (unsigned char)(1);
      if ((undefined1 *)(local_28a4) == (undefined1 *)(0x0)) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(thunk_FUN_111c06e0(5000), 0);
      }
      local_2898 = (int)((uint)*(unsigned short *)((char *)&local_2898 + 1) << 8);
      thunk_FUN_102207b0(uVar5,-(uint)(param_1 != 0) & param_1 + 0x20U,0);
    }
    thunk_FUN_111a7100("OnSearchForZonePlayers",0,0);
    thunk_FUN_10236af0(&local_28b0);
    piVar2 = (int *)(local_28b0);
    *(unsigned char*)((char *)&local_2898 + 0) = (unsigned char)(2);
    if (((*(char *)(param_1 + 0x2d420) != '\0') && ((int *)(local_28b0) != (int *)(0x0))) &&
       ((char)*local_28b0 != (int)(('\0')))) {
      local_28a4 = (undefined1 *)((undefined1 *)thunk_FUN_110f2980(), 0);
      local_28b4 = (undefined4 *)((undefined4 *)0x0);

      puVar12 = (undefined4 *)(*(undefined4 **)(param_1 + 0x2d43c), 0);
      *(unsigned char*)((char *)&local_2898 + 0) = (unsigned char)(3);
      local_28a8 = (undefined4 *)(puVar12);
      if (((undefined4 *)(puVar12) != (undefined4 *)(0x0)) && ((int)puVar12[-4] < 0xffff)) {
        thunk_FUN_1123fce0(puVar12 + -4);
      }
      puVar1 = (undefined4 *)(local_28b4);
      local_2898 = (int)(((uint)(*(unsigned short *)((char *)&local_2898 + 1)) << 8 | (uint)(6)));
      if ((((undefined4 *)(local_28b4) != (undefined4 *)(0x0)) &&
          (piVar10 = (int *)((int *)((int)local_28b4 + -0x10)), *piVar10 < (int)((0xffff)))) &&
         (iVar4 = (int)(thunk_FUN_1123fcd0(piVar10), 0), iVar4 == 0)) {
        *(undefined4*)((int)puVar1 + -8) = (undefined4)(0);
        *(undefined4*)((int)puVar1 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,*(undefined4 *)((int)puVar1 + -4));
        free(piVar10);
      }
      local_28b4 = (undefined4 *)(puVar12);
      if (((undefined4 *)(puVar12) != (undefined4 *)(0x0)) && ((int)puVar12[-4] < 0xffff)) {
        thunk_FUN_1123fce0(puVar12 + -4);
      }
      *(unsigned char*)((char *)&local_2898 + 0) = (unsigned char)(7);
      if ((((undefined4 *)(puVar12) != (undefined4 *)(0x0)) && (piVar10 = (int *)(puVar12 + -4), *piVar10 < (int)((0xffff)))) &&
         (iVar4 = (int)(thunk_FUN_1123fcd0(piVar10), 0), iVar4 == 0)) {
        puVar12[-2] = (undefined4)(0);
        puVar12[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar12,puVar12[-1]);
        free(piVar10);
      }
      *(unsigned char*)((char *)&local_2898 + 0) = (unsigned char)(3);
      local_28a4 = (undefined1 *)((undefined1 *)thunk_FUN_110f4420(&local_28b8,2,(uint)&local_187c,5), 0);
      puVar11 = (undefined1 *)((undefined1 *)0x0);
      if ((undefined1 *)(local_28a4) != (undefined1 *)(0x0)) {
        puVar8 = (uint *)((uint)&local_139c);
        do {
          local_28a8 = (undefined4 *)((undefined4 *)(puVar8[-1] & 0xffff));
          if ((uintptr_t)((0xfffe)) < (int)((puVar8[-1])) - 1) {
            local_28a8 = (undefined4 *)((undefined4 *)0x0);
          }
          puVar12 = (undefined4 *)((undefined4 *)(*puVar8 & 0xffff));
          if ((uint)(0xfffe) < *puVar8 - 1) {
            puVar12 = (undefined4 *)((undefined4 *)(uint)DAT_11c03ce8);
          }
          local_28ac = (undefined4 *)(puVar12);
          if ((((char)puVar8[-0x102] != '\0') && ((char)puVar8[-0x11b] != '\0')) &&
             (*(char *)((int)puVar8 + -0x49e) != '\0')) {
            thunk_FUN_112af4e0("household",2,"Connect to the last connected ZP from SSID DB");
            iVar4 = (int)((int)puVar11 * 0x4e4);
            thunk_FUN_1108a9a0((uint)&local_1808 + iVar4,(uint)&local_17a4 + iVar4,puVar12,local_28a8,0, (uint)&local_183a + iVar4,&DAT_1186d2ee,1);
            break;
          }
          if (((*(char *)((int)puVar8 + -0x47d) != '\0') && ((char)puVar8[-0x11b] != '\0')) &&
             (*(char *)((int)puVar8 + -0x49e) != '\0')) {
            thunk_FUN_112af4e0("household",2, "Connect to the last connected ZP from SSID DB (IP only)");
            puVar12 = (undefined4 *)(local_28ac);
            local_28a4 = (undefined1 *)((undefined1 *)0x0);
            iVar4 = (int)((int)puVar11 * 0x4e4);
            *(unsigned char*)((char *)&local_2898 + 0) = (unsigned char)(8);
            thunk_FUN_111a10b0(&local_28a4,"http://%s:%hu/xml/device_description.xml", (uint)&local_1819 + iVar4,(uint)local_28ac & 0xffff);
            puVar11 = (undefined1 *)(&DAT_1186d2ee);
            if ((undefined1 *)(local_28a4) != (undefined1 *)(0x0)) {
              puVar11 = (undefined1 *)(local_28a4);
            }
            thunk_FUN_1108a9a0((uint)&local_1808 + iVar4,puVar11,puVar12,local_28a8,0,(uint)&local_183a + iVar4, &DAT_1186d2ee,1);
            puVar11 = (undefined1 *)(local_28a4);
            *(unsigned char*)((char *)&local_2898 + 0) = (unsigned char)(9);
            if ((((undefined1 *)(local_28a4) != (undefined1 *)(0x0)) &&
                (puVar9 = (undefined1 *)(local_28a4 + -0x10), *(int *)(local_28a4 + -0x10) < 0xffff)) &&
               (iVar4 = (int)(thunk_FUN_1123fcd0(puVar9), 0), iVar4 == 0)) {
              *(undefined4*)(puVar11 + -8) = (undefined4)(0);
              *(undefined4*)(puVar11 + -0xc) = (undefined4)(0);
              thunk_FUN_113cfb70(puVar11,*(undefined4 *)(puVar11 + -4));
              free(puVar9);
            }
            break;
          }
          puVar11 = (undefined1 *)(puVar11 + 1);
          puVar8 = (uint *)(puVar8 + 0x139);
        } while ((undefined1 *)(puVar11) < (undefined1 *)(local_28a4));
      }
      puVar12 = (undefined4 *)(local_28b4);
      *(unsigned char*)((char *)&local_2898 + 0) = (unsigned char)(10);
      if ((((undefined4 *)(local_28b4) != (undefined4 *)(0x0)) &&
          (puVar1 = (undefined4 *)(local_28b4 + -4), (int)local_28b4[-4] < 0xffff)) &&
         (iVar4 = (int)(thunk_FUN_1123fcd0(puVar1), 0), iVar4 == 0)) {
        puVar12[-2] = (undefined4)(0);
        puVar12[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar12,puVar12[-1]);
        free(puVar1);
      }
      iVar4 = (int)(local_28b8);
      *(unsigned char*)((char *)&local_2898 + 0) = (unsigned char)(0xb);
      if (((local_28b8 != 0) &&
          (_Memory = (char *)((char *)(local_28b8 + -0x10)), *(int *)(local_28b8 + -0x10) < 0xffff)) &&
         (iVar6 = (int)(thunk_FUN_1123fcd0(_Memory), 0), iVar6 == 0)) {
        *(undefined4*)(iVar4 + -8) = (undefined4)(0);
        *(undefined4*)(iVar4 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
        free(_Memory);
      }
    }
    local_2898 = (int)(((uint)(*(unsigned short *)((char *)&local_2898 + 1)) << 8 | (uint)(0xc)));
    if ((((int *)(piVar2) != (int *)(0x0)) && (piVar10 = (int *)(piVar2 + -4), *piVar10 < (int)((0xffff)))) &&
       (iVar4 = (int)(thunk_FUN_1123fcd0(piVar10), 0), iVar4 == 0)) {
      piVar2[-2] = (int)(0);
      piVar2[-3] = (int)(0);
      thunk_FUN_113cfb70(piVar2,piVar2[-1]);
      free(piVar10);
    }
    thunk_FUN_11249110();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 110be010; body size 2764 bytes.
#line 1 "ENTRY_110be010"

undefined1 FUN_110be010(undefined4 param_1,undefined4 param_2,char **param_3,char **param_4)

{
 try {
  char **_Memory;
  char **ppcVar1;
  char **ppcVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  char **ppcVar10;
  undefined1 local_4c [8];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  ppcVar2 = (char **)(param_3);


  uVar5 = (uint)(DAT_12126b84);

  pcVar7 = (char *)(*param_3);
  if ((((char *)(pcVar7) != (char *)(0x0)) && (*(int *)(pcVar7 + -0x10) < 0xffff)) &&
     (iVar6 = (int)(thunk_FUN_1123fcd0(pcVar7 + -0x10,uVar5), 0), iVar6 == 0)) {
    pcVar7[-0xffffffff00000008] = (char)('\0');
    pcVar7[-0xffffffff00000007] = (char)('\0');
    pcVar7[-0xffffffff00000006] = (char)('\0');
    pcVar7[-0xffffffff00000005] = (char)('\0');
    pcVar7[-0xffffffff0000000c] = (char)('\0');
    pcVar7[-0xffffffff0000000b] = (char)('\0');
    pcVar7[-0xffffffff0000000a] = (char)('\0');
    pcVar7[-0xffffffff00000009] = (char)('\0');
    thunk_FUN_113cfb70(pcVar7,*(undefined4 *)(pcVar7 + -4));
    free(pcVar7 + -0x10);
  }
  ppcVar1 = (char **)(param_4);
  *ppcVar2 = (char *)((char *)0x0);
  ppcVar10 = (char **)((char **)*param_4);
  param_3 = (char **)(ppcVar10);
  if ((((char **)(ppcVar10) != (char **)(0x0)) && ((int)ppcVar10[-4] < 0xffff)) &&
     (iVar6 = (int)(thunk_FUN_1123fcd0(ppcVar10 + -4,uVar5), 0), iVar6 == 0)) {
    ppcVar10[-2] = (char *)((char *)0x0);
    ppcVar10[-3] = (char *)((char *)0x0);
    thunk_FUN_113cfb70(param_3,ppcVar10[-1]);
    free(ppcVar10 + -4);
  }
  *ppcVar1 = (char *)((char *)0x0);
  switch(param_1) {
  default:
    cVar3 = (char)(thunk_FUN_105055d0(), 0);
    if (cVar3 != '\0') {
      puVar8 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(&local_44,"CurrentTrackMetaData"), 0);
      local_38 = (int)(puVar8[1]);
      local_3c = (undefined4)(*puVar8);
      thunk_FUN_1113eda0(&param_4,"r:EnqueuedTransportURI");

      ppcVar10 = (char **)((char **)&DAT_1186d2ee);
      if ((char **)(param_4) != (char **)(0x0)) {
        ppcVar10 = (char **)(param_4);
      }
      uVar4 = (undefined1)(thunk_FUN_110b8d90(ppcVar10), 0);
      ppcVar10 = (char **)(param_4);
      param_3 = (char **)((char **)((uint)(uVar4) << 24 | (uint)(*(uint *)((char *)&param_3 + 0))));

      if ((((char **)(param_4) != (char **)(0x0)) && (_Memory = (char **)(param_4 + -4), (int)param_4[-4] < 0xffff)) &&
         (iVar6 = (int)(thunk_FUN_1123fcd0(_Memory), 0), iVar6 == 0)) {
        ppcVar10[-2] = (char *)((char *)0x0);
        ppcVar10[-3] = (char *)((char *)0x0);
        thunk_FUN_113cfb70(ppcVar10,ppcVar10[-1]);
        free(_Memory);
      }

      if (*(uint *)((char *)&param_3 + 3) == '\0') {
        if (local_38 == 0) {

          return (undefined1)(0);
        }
        thunk_FUN_1113eda0(&param_3,"dc:title");

        if ((char ***)(&param_3) != (char ***)ppcVar2) {
          ppcVar10 = (char **)((char **)*ppcVar2);
          param_4 = (char **)(ppcVar10);
          if ((((char **)(ppcVar10) != (char **)(0x0)) && ((int)ppcVar10[-4] < 0xffff)) &&
             (iVar6 = (int)(thunk_FUN_1123fcd0(ppcVar10 + -4), 0), iVar6 == 0)) {
            ppcVar10[-2] = (char *)((char *)0x0);
            ppcVar10[-3] = (char *)((char *)0x0);
            thunk_FUN_113cfb70(param_4,ppcVar10[-1]);
            free(ppcVar10 + -4);
          }
          *ppcVar2 = (char *)((char *)param_3);
          if (((char **)(param_3) != (char **)(0x0)) && ((int)param_3[-4] < 0xffff)) {
            thunk_FUN_1123fce0(param_3 + -4);
          }
        }

        thunk_FUN_101ba300();
        thunk_FUN_1113eda0(&param_3,"dc:creator");

        if ((char ***)(&param_3) != (char ***)ppcVar1) {
          ppcVar10 = (char **)((char **)*ppcVar1);
          param_4 = (char **)(ppcVar10);
          if ((((char **)(ppcVar10) != (char **)(0x0)) && ((int)ppcVar10[-4] < 0xffff)) &&
             (iVar6 = (int)(thunk_FUN_1123fcd0(ppcVar10 + -4), 0), iVar6 == 0)) {
            ppcVar10[-2] = (char *)((char *)0x0);
            ppcVar10[-3] = (char *)((char *)0x0);
            thunk_FUN_113cfb70(param_4,ppcVar10[-1]);
            free(ppcVar10 + -4);
          }
          *ppcVar1 = (char *)((char *)param_3);
          if (((char **)(param_3) != (char **)(0x0)) && ((int)param_3[-4] < 0xffff)) {
            thunk_FUN_1123fce0(param_3 + -4);
          }
        }

        thunk_FUN_101ba300();
        if (((uintptr_t)(*ppcVar2) != (uintptr_t)(0x0)) && (**ppcVar2 != (uintptr_t)(('\0')))) {

          return (undefined1)(local_11);
        }
        if (((uintptr_t)(*ppcVar1) != (uintptr_t)(0x0)) && (**ppcVar1 != (uintptr_t)(('\0')))) {

          return (undefined1)(local_11);
        }
        uVar9 = (undefined4)(thunk_FUN_1109aba0(0x1ef,&DAT_11882ff0), 0);
        thunk_FUN_101b9a40(uVar9);

        if ((char **)((&local_30)) != (char **)(ppcVar2)) {
          pcVar7 = (char *)(*ppcVar2);
          if ((((char *)(pcVar7) != (char *)(0x0)) && (*(int *)(pcVar7 + -0x10) < 0xffff)) &&
             (iVar6 = (int)(thunk_FUN_1123fcd0(pcVar7 + -0x10), 0), iVar6 == 0)) {
            pcVar7[-0xffffffff00000008] = (char)('\0');
            pcVar7[-0xffffffff00000007] = (char)('\0');
            pcVar7[-0xffffffff00000006] = (char)('\0');
            pcVar7[-0xffffffff00000005] = (char)('\0');
            pcVar7[-0xffffffff0000000c] = (char)('\0');
            pcVar7[-0xffffffff0000000b] = (char)('\0');
            pcVar7[-0xffffffff0000000a] = (char)('\0');
            pcVar7[-0xffffffff00000009] = (char)('\0');
            thunk_FUN_113cfb70(pcVar7,*(undefined4 *)(pcVar7 + -4));
            free(pcVar7 + -0x10);
          }
          *ppcVar2 = (char *)(local_30);
          if (((char *)(local_30) != (char *)(0x0)) && (*(int *)(local_30 + -0x10) < 0xffff)) {
            thunk_FUN_1123fce0(local_30 + -0x10);
          }
        }
        goto LAB_110beac2;
      }
      if (local_38 != 0) {
        thunk_FUN_1113eda0(&param_3,"dc:title");

        if ((char ***)(&param_3) != (char ***)ppcVar2) {
          ppcVar10 = (char **)((char **)*ppcVar2);
          param_4 = (char **)(ppcVar10);
          if ((((char **)(ppcVar10) != (char **)(0x0)) && ((int)ppcVar10[-4] < 0xffff)) &&
             (iVar6 = (int)(thunk_FUN_1123fcd0(ppcVar10 + -4), 0), iVar6 == 0)) {
            ppcVar10[-2] = (char *)((char *)0x0);
            ppcVar10[-3] = (char *)((char *)0x0);
            thunk_FUN_113cfb70(param_4,ppcVar10[-1]);
            free(ppcVar10 + -4);
          }
          *ppcVar2 = (char *)((char *)param_3);
          if (((char **)(param_3) != (char **)(0x0)) && ((int)param_3[-4] < 0xffff)) {
            thunk_FUN_1123fce0(param_3 + -4);
          }
        }

        thunk_FUN_101ba300();
      }
      puVar8 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0((uint)&local_4c,"r:EnqueuedTransportURIMetaData"), 0);
      local_40 = (undefined4)(puVar8[1]);
      local_44 = (undefined4)(*puVar8);
      thunk_FUN_1113eda0(&local_18,"dc:title");

      if (((char *)(local_18) != (char *)(0x0)) && (*local_18 != (char)(('\0')))) {
        ppcVar10 = (char **)((char **)*ppcVar2);
        param_3 = (char **)(ppcVar10);
        if (((char **)(ppcVar10) == (char **)(0x0)) || (*(char *)ppcVar10 == '\0')) {
          if ((char **)((&local_18)) != (char **)(ppcVar2)) {
            if ((((char **)(ppcVar10) != (char **)(0x0)) && ((int)ppcVar10[-4] < 0xffff)) &&
               (iVar6 = (int)(thunk_FUN_1123fcd0(ppcVar10 + -4), 0), iVar6 == 0)) {
              ppcVar10[-2] = (char *)((char *)0x0);
              ppcVar10[-3] = (char *)((char *)0x0);
              thunk_FUN_113cfb70(param_3,ppcVar10[-1]);
              free(ppcVar10 + -4);
            }
            *ppcVar2 = (char *)(local_18);
            goto LAB_110be72c;
          }
        }
        else if ((char **)((&local_18)) != (char **)(ppcVar1)) {
          ppcVar10 = (char **)((char **)*ppcVar1);
          param_3 = (char **)(ppcVar10);
          if ((((char **)(ppcVar10) != (char **)(0x0)) && ((int)ppcVar10[-4] < 0xffff)) &&
             (iVar6 = (int)(thunk_FUN_1123fcd0(ppcVar10 + -4), 0), iVar6 == 0)) {
            ppcVar10[-2] = (char *)((char *)0x0);
            ppcVar10[-3] = (char *)((char *)0x0);
            thunk_FUN_113cfb70(param_3,ppcVar10[-1]);
            free(ppcVar10 + -4);
          }
          *ppcVar1 = (char *)(local_18);
LAB_110be72c:
          if (((char *)(local_18) != (char *)(0x0)) && (*(int *)(local_18 + -0x10) < 0xffff)) {
            thunk_FUN_1123fce0(local_18 + -0x10);
          }
        }
      }
      if ((((uintptr_t)(*ppcVar2) == (uintptr_t)(0x0)) || (**ppcVar2 == (uintptr_t)(('\0')))) &&
         (((uintptr_t)(*ppcVar1) == (uintptr_t)(0x0) || (**ppcVar1 == (uintptr_t)(('\0')))))) {
        uVar9 = (undefined4)(thunk_FUN_1109aba0(0x1ef,&DAT_11882ff0), 0);
        thunk_FUN_101b9a40(uVar9);
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
        if ((char **)((&local_2c)) != (char **)(ppcVar2)) {
          pcVar7 = (char *)(*ppcVar2);
          if ((((char *)(pcVar7) != (char *)(0x0)) && (*(int *)(pcVar7 + -0x10) < 0xffff)) &&
             (iVar6 = (int)(thunk_FUN_1123fcd0(pcVar7 + -0x10), 0), iVar6 == 0)) {
            pcVar7[-0xffffffff00000008] = (char)('\0');
            pcVar7[-0xffffffff00000007] = (char)('\0');
            pcVar7[-0xffffffff00000006] = (char)('\0');
            pcVar7[-0xffffffff00000005] = (char)('\0');
            pcVar7[-0xffffffff0000000c] = (char)('\0');
            pcVar7[-0xffffffff0000000b] = (char)('\0');
            pcVar7[-0xffffffff0000000a] = (char)('\0');
            pcVar7[-0xffffffff00000009] = (char)('\0');
            thunk_FUN_113cfb70(pcVar7,*(undefined4 *)(pcVar7 + -4));
            free(pcVar7 + -0x10);
          }
          *ppcVar2 = (char *)(local_2c);
          if (((char *)(local_2c) != (char *)(0x0)) && (*(int *)(local_2c + -0x10) < 0xffff)) {
            thunk_FUN_1123fce0(local_2c + -0x10);
          }
        }
        thunk_FUN_101ba300();
      }
      goto LAB_110beac2;
    }
    puVar8 = (undefined4 *)((undefined4 *)thunk_FUN_105055e0(&param_4), 0);
    ppcVar10 = (char **)(param_4);
    if ((char *)*puVar8 == (char *)((0x0))) {
LAB_110be9d3:
      param_3 = (char **)((char **)((uint)param_3 & 0xffffff));
    }
    else {
      param_3 = (char **)((char **)((uint)(1) << 24 | (uint)(*(uint *)((char *)&param_3 + 0))));
      if (*(char *)*puVar8 == (char)((('\0')))) goto LAB_110be9d3;
    }

    if ((((char **)(param_4) != (char **)(0x0)) && (ppcVar1 = (char **)(param_4 + -4), (int)param_4[-4] < 0xffff)) &&
       (iVar6 = (int)(thunk_FUN_1123fcd0(ppcVar1,uVar5), 0), iVar6 == 0)) {
      ppcVar10[-2] = (char *)((char *)0x0);
      ppcVar10[-3] = (char *)((char *)0x0);
      thunk_FUN_113cfb70(ppcVar10,ppcVar10[-1]);
      free(ppcVar1);
    }

    if (*(uint *)((char *)&param_3 + 3) == '\0') {
      uVar9 = (undefined4)(thunk_FUN_1109aba0(0x1f0,&DAT_11882ff0), 0);
      thunk_FUN_101b9a40(uVar9);

      if ((char **)((&local_34)) != (char **)(ppcVar2)) {
        pcVar7 = (char *)(*ppcVar2);
        if ((((char *)(pcVar7) != (char *)(0x0)) && (*(int *)(pcVar7 + -0x10) < 0xffff)) &&
           (iVar6 = (int)(thunk_FUN_1123fcd0(pcVar7 + -0x10), 0), iVar6 == 0)) {
          pcVar7[-0xffffffff00000008] = (char)('\0');
          pcVar7[-0xffffffff00000007] = (char)('\0');
          pcVar7[-0xffffffff00000006] = (char)('\0');
          pcVar7[-0xffffffff00000005] = (char)('\0');
          pcVar7[-0xffffffff0000000c] = (char)('\0');
          pcVar7[-0xffffffff0000000b] = (char)('\0');
          pcVar7[-0xffffffff0000000a] = (char)('\0');
          pcVar7[-0xffffffff00000009] = (char)('\0');
          thunk_FUN_113cfb70(pcVar7,*(undefined4 *)(pcVar7 + -4));
          free(pcVar7 + -0x10);
        }
        *ppcVar2 = (char *)(local_34);
        if (((char *)(local_34) != (char *)(0x0)) && (*(int *)(local_34 + -0x10) < 0xffff)) {
          thunk_FUN_1123fce0(local_34 + -0x10);
        }
      }
      goto LAB_110beac2;
    }
    param_3 = (char **)((char **)thunk_FUN_105055e0(&param_4), 0);

    break;
  case 3:
    uVar9 = (undefined4)(thunk_FUN_1109aba0(0x1be,&DAT_11882ff0), 0);
    thunk_FUN_101b9a40(uVar9);

    if ((char **)((&local_1c)) != (char **)(ppcVar2)) {
      ppcVar10 = (char **)((char **)*ppcVar2);
      param_3 = (char **)(ppcVar10);
      if ((((char **)(ppcVar10) != (char **)(0x0)) && ((int)ppcVar10[-4] < 0xffff)) &&
         (iVar6 = (int)(thunk_FUN_1123fcd0(ppcVar10 + -4), 0), iVar6 == 0)) {
        ppcVar10[-2] = (char *)((char *)0x0);
        ppcVar10[-3] = (char *)((char *)0x0);
        thunk_FUN_113cfb70(param_3,ppcVar10[-1]);
        free(ppcVar10 + -4);
      }
      *ppcVar2 = (char *)(local_1c);
      if (((char *)(local_1c) != (char *)(0x0)) && (*(int *)(local_1c + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0(local_1c + -0x10);
      }
    }

    thunk_FUN_101ba300();
    thunk_FUN_105055e0(&param_3);

    if ((char ***)(&param_3) != (char ***)ppcVar1) {
      pcVar7 = (char *)(*ppcVar1);
      if ((((char *)(pcVar7) != (char *)(0x0)) && (*(int *)(pcVar7 + -0x10) < 0xffff)) &&
         (iVar6 = (int)(thunk_FUN_1123fcd0(pcVar7 + -0x10), 0), iVar6 == 0)) {
        pcVar7[-0xffffffff00000008] = (char)('\0');
        pcVar7[-0xffffffff00000007] = (char)('\0');
        pcVar7[-0xffffffff00000006] = (char)('\0');
        pcVar7[-0xffffffff00000005] = (char)('\0');
        pcVar7[-0xffffffff0000000c] = (char)('\0');
        pcVar7[-0xffffffff0000000b] = (char)('\0');
        pcVar7[-0xffffffff0000000a] = (char)('\0');
        pcVar7[-0xffffffff00000009] = (char)('\0');
        thunk_FUN_113cfb70(pcVar7,*(undefined4 *)(pcVar7 + -4));
        free(pcVar7 + -0x10);
      }
      *ppcVar1 = (char *)((char *)param_3);
      if (((char **)(param_3) != (char **)(0x0)) && ((int)param_3[-4] < 0xffff)) {
        thunk_FUN_1123fce0(param_3 + -4);
      }
    }
    goto LAB_110beac2;
  case 4:
    param_4 = (char **)((char **)thunk_FUN_11051f40(&param_1), 0);

    if ((char **)((param_4)) != (char **)(ppcVar2)) {
      ppcVar10 = (char **)((char **)*ppcVar2);
      param_3 = (char **)(ppcVar10);
      if ((((char **)(ppcVar10) != (char **)(0x0)) && ((int)ppcVar10[-4] < 0xffff)) &&
         (iVar6 = (int)(thunk_FUN_1123fcd0(ppcVar10 + -4), 0), iVar6 == 0)) {
        ppcVar10[-2] = (char *)((char *)0x0);
        ppcVar10[-3] = (char *)((char *)0x0);
        thunk_FUN_113cfb70(param_3,ppcVar10[-1]);
        free(ppcVar10 + -4);
      }
      pcVar7 = (char *)(*param_4);
      *ppcVar2 = (char *)(pcVar7);
      if (((char *)(pcVar7) != (char *)(0x0)) && (*(int *)(pcVar7 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0(pcVar7 + -0x10);
      }
    }

    thunk_FUN_101ba300();
    param_3 = (char **)((char **)thunk_FUN_110b76d0(&param_4), 0);

    goto LAB_110be27b;
  case 6:
    uVar9 = (undefined4)(thunk_FUN_1109aba0(0x1c6,&DAT_11882ff0), 0);
    thunk_FUN_101b9a40(uVar9);

    if ((char **)((&local_24)) != (char **)(ppcVar2)) {
      ppcVar10 = (char **)((char **)*ppcVar2);
      param_3 = (char **)(ppcVar10);
      if ((((char **)(ppcVar10) != (char **)(0x0)) && ((int)ppcVar10[-4] < 0xffff)) &&
         (iVar6 = (int)(thunk_FUN_1123fcd0(ppcVar10 + -4), 0), iVar6 == 0)) {
        ppcVar10[-2] = (char *)((char *)0x0);
        ppcVar10[-3] = (char *)((char *)0x0);
        thunk_FUN_113cfb70(param_3,ppcVar10[-1]);
        free(ppcVar10 + -4);
      }
      *ppcVar2 = (char *)(local_24);
      if (((char *)(local_24) != (char *)(0x0)) && (*(int *)(local_24 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0(local_24 + -0x10);
      }
    }

    thunk_FUN_101ba300();
    uVar9 = (undefined4)(thunk_FUN_1109aba0(0x1c5,&DAT_11882ff0), 0);
    thunk_FUN_101b9a40(uVar9);

    if ((char **)((&local_28)) != (char **)(ppcVar1)) {
      pcVar7 = (char *)(*ppcVar1);
      if ((((char *)(pcVar7) != (char *)(0x0)) && (*(int *)(pcVar7 + -0x10) < 0xffff)) &&
         (iVar6 = (int)(thunk_FUN_1123fcd0(pcVar7 + -0x10), 0), iVar6 == 0)) {
        pcVar7[-0xffffffff00000008] = (char)('\0');
        pcVar7[-0xffffffff00000007] = (char)('\0');
        pcVar7[-0xffffffff00000006] = (char)('\0');
        pcVar7[-0xffffffff00000005] = (char)('\0');
        pcVar7[-0xffffffff0000000c] = (char)('\0');
        pcVar7[-0xffffffff0000000b] = (char)('\0');
        pcVar7[-0xffffffff0000000a] = (char)('\0');
        pcVar7[-0xffffffff00000009] = (char)('\0');
        thunk_FUN_113cfb70(pcVar7,*(undefined4 *)(pcVar7 + -4));
        free(pcVar7 + -0x10);
      }
      *ppcVar1 = (char *)(local_28);
      if (((char *)(local_28) != (char *)(0x0)) && (*(int *)(local_28 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0(local_28 + -0x10);
      }
    }
    goto LAB_110beac2;
  case 7:
    param_3 = (char **)((char **)thunk_FUN_105055e0(&param_4), 0);

    break;
  case 9:

    return (undefined1)(0);
  case 0xb:
    uVar9 = (undefined4)(thunk_FUN_1109aba0(0x2bd,&DAT_11882ff0), 0);
    thunk_FUN_101b9a40(uVar9);

    if ((char **)((&local_20)) != (char **)(ppcVar2)) {
      ppcVar10 = (char **)((char **)*ppcVar2);
      param_3 = (char **)(ppcVar10);
      if ((((char **)(ppcVar10) != (char **)(0x0)) && ((int)ppcVar10[-4] < 0xffff)) &&
         (iVar6 = (int)(thunk_FUN_1123fcd0(ppcVar10 + -4), 0), iVar6 == 0)) {
        ppcVar10[-2] = (char *)((char *)0x0);
        ppcVar10[-3] = (char *)((char *)0x0);
        thunk_FUN_113cfb70(param_3,ppcVar10[-1]);
        free(ppcVar10 + -4);
      }
      *ppcVar2 = (char *)(local_20);
      if (((char *)(local_20) != (char *)(0x0)) && (*(int *)(local_20 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0(local_20 + -0x10);
      }
    }

    thunk_FUN_101ba300();
    param_3 = (char **)((char **)thunk_FUN_110b76d0(&param_4), 0);

LAB_110be27b:
    if ((char **)((param_3)) == (char **)(ppcVar1)) goto LAB_110beac2;
    pcVar7 = (char *)(*ppcVar1);
    if ((((char *)(pcVar7) != (char *)(0x0)) && (*(int *)(pcVar7 + -0x10) < 0xffff)) &&
       (iVar6 = (int)(thunk_FUN_1123fcd0(pcVar7 + -0x10), 0), iVar6 == 0)) {
      pcVar7[-0xffffffff00000008] = (char)('\0');
      pcVar7[-0xffffffff00000007] = (char)('\0');
      pcVar7[-0xffffffff00000006] = (char)('\0');
      pcVar7[-0xffffffff00000005] = (char)('\0');
      pcVar7[-0xffffffff0000000c] = (char)('\0');
      pcVar7[-0xffffffff0000000b] = (char)('\0');
      pcVar7[-0xffffffff0000000a] = (char)('\0');
      pcVar7[-0xffffffff00000009] = (char)('\0');
      thunk_FUN_113cfb70(pcVar7,*(undefined4 *)(pcVar7 + -4));
      free(pcVar7 + -0x10);
    }
    pcVar7 = (char *)(*param_3);
    *ppcVar1 = (char *)(pcVar7);
    goto LAB_110be2bd;
  }
  if ((char **)((param_3)) != (char **)(ppcVar2)) {
    pcVar7 = (char *)(*ppcVar2);
    if ((((char *)(pcVar7) != (char *)(0x0)) && (*(int *)(pcVar7 + -0x10) < 0xffff)) &&
       (iVar6 = (int)(thunk_FUN_1123fcd0(pcVar7 + -0x10,uVar5), 0), iVar6 == 0)) {
      pcVar7[-0xffffffff00000008] = (char)('\0');
      pcVar7[-0xffffffff00000007] = (char)('\0');
      pcVar7[-0xffffffff00000006] = (char)('\0');
      pcVar7[-0xffffffff00000005] = (char)('\0');
      pcVar7[-0xffffffff0000000c] = (char)('\0');
      pcVar7[-0xffffffff0000000b] = (char)('\0');
      pcVar7[-0xffffffff0000000a] = (char)('\0');
      pcVar7[-0xffffffff00000009] = (char)('\0');
      thunk_FUN_113cfb70(pcVar7,*(undefined4 *)(pcVar7 + -4));
      free(pcVar7 + -0x10);
    }
    pcVar7 = (char *)(*param_3);
    *ppcVar2 = (char *)(pcVar7);
LAB_110be2bd:
    if (((char *)(pcVar7) != (char *)(0x0)) && (*(int *)(pcVar7 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0(pcVar7 + -0x10);
    }
  }
LAB_110beac2:
  thunk_FUN_101ba300();

  return (undefined1)(local_11);

 } catch (...) { }
}


// Reference entry 111054d0; body size 432 bytes.
#line 1 "ENTRY_111054d0"

void __fastcall FUN_111054d0(int param_1)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  memset((char *)(param_1 + 0x2c),0,0x46c);
  local_18[1] = (int)(0);

  if ((uint)&local_18 + 1 != (uintptr_t)(param_1 + 0x514)) {
    iVar2 = (int)(*(int *)(param_1 + 0x514));
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      iVar4 = (int)(thunk_FUN_1123fcd0((char *)(iVar2 + -0x10),uVar3), 0);
      if (iVar4 == 0) {
        *(undefined4*)(iVar2 + -8) = (undefined4)(0);
        *(undefined4*)(iVar2 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
        free((char *)(iVar2 + -0x10));
      }
    }
    *(undefined4*)(param_1 + 0x514) = (undefined4)(0);
  }
  local_18[0] = (int)(0);
  piVar1 = (int *)((int *)(param_1 + 0x518));

  if ((int *)(((uint)&local_18)) != (int *)(piVar1)) {
    iVar2 = (int)(*piVar1);
    local_1c = (int)(iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      iVar4 = (int)(thunk_FUN_1123fcd0((char *)(iVar2 + -0x10),uVar3), 0);
      if (iVar4 == 0) {
        *(undefined4*)(iVar2 + -8) = (undefined4)(0);
        *(undefined4*)(iVar2 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(local_1c,*(undefined4 *)(iVar2 + -4));
        free((char *)(iVar2 + -0x10));
      }
    }
    *piVar1 = (int)(0);
  }

  piVar1 = (int *)((int *)(param_1 + 0x51c));

  if ((int *)((&local_20)) != (int *)(piVar1)) {
    iVar2 = (int)(*piVar1);
    local_1c = (int)(iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      iVar4 = (int)(thunk_FUN_1123fcd0((char *)(iVar2 + -0x10),uVar3), 0);
      if (iVar4 == 0) {
        *(undefined4*)(iVar2 + -8) = (undefined4)(0);
        *(undefined4*)(iVar2 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(local_1c,*(undefined4 *)(iVar2 + -4));
        free((char *)(iVar2 + -0x10));
      }
    }
    *piVar1 = (int)(0);
  }
  *(undefined1*)(param_1 + 0x520) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x6b0) = (undefined1)(0);
  memset((char *)(param_1 + 0x521),0,0x104);
  *(undefined4*)(param_1 + 0x628) = (undefined4)(0x104);
  memset((char *)(param_1 + 0x62c),0,0x80);
  *(undefined4*)(param_1 + 0x6ac) = (undefined4)(0x80);

  return;

 } catch (...) { }
}


// Reference entry 11115d10; body size 967 bytes.
#line 1 "ENTRY_11115d10"

void __thiscall Recovered_Bulk::m_FUN_11115d10(undefined1 *param_2,undefined4 param_3)
{
  char *param_1 = (char *)this;
 try {
  char **ppcVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *_Memory;
  size_t _Size;
  char *pcVar10;
  bool bVar11;
  undefined1 local_a6c [20];
  undefined4 local_a58 [4];
  char *local_a48;
  char *local_a44;
  undefined1 *local_a40;
  char *local_a3c;
  char local_a35;
  void *local_a34;
  undefined1 *puStack_a30;
  undefined4 local_a2c;
  undefined1 local_a28 [2436];
  char *local_a4 [39];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_a28);

  ppcVar1 = (char **)((char **)(param_1 + 0x10));
  local_a40 = (undefined1 *)(param_2);
  local_a35 = (char)('\0');
  local_a44 = (char *)(param_1);
  if ((*(char **)(param_1 + 0x10) == (char *)((0x0))) || (**(char **)(param_1 + 0x10) == '\0')) {
    pcVar9 = (char *)("x-rincon-buzzer:0");
    pbVar4 = (byte *)((byte *)(param_1 + 0x14));
    do {
      bVar2 = (byte)(*pbVar4);
      bVar11 = (bool)(bVar2 < (byte)*pcVar9);
      if ((char)(bVar2) != *pcVar9) {
LAB_11115da0:
        uVar5 = (uint)(-(uint)bVar11 | 1);
        goto LAB_11115da5;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar4[1]);
      bVar11 = (bool)(bVar2 < (byte)pcVar9[1]);
      if ((char)((bVar2)) != pcVar9[1]) goto LAB_11115da0;
      pbVar4 = (byte *)(pbVar4 + 2);
      pcVar9 = (char *)(pcVar9 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
LAB_11115da5:
    if (uVar5 == 0) {
      local_a3c = (char *)((char *)thunk_FUN_1109aba0(0x187,&DAT_11882ff0), 0);
      if (((char *)(local_a3c) == (char *)(0x0)) || (*local_a3c == (char)(('\0')))) {
        local_a3c = (char *)((char *)0x0);
      }
      else {
        pcVar9 = (char *)(local_a3c);
        do {
          cVar3 = (char)(*pcVar9);
          pcVar9 = (char *)(pcVar9 + 1);
        } while (cVar3 != '\0');
        _Size = (size_t)((int)pcVar9 - (int)(local_a3c + 1));
        puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11), 0);
        pcVar9 = (char *)((char *)(puVar6 + 4));
        *puVar6 = (undefined4)(1);
        puVar6[3] = (undefined4)(_Size);
        puVar6[2] = (undefined4)(0);
        puVar6[1] = (undefined4)(0);
        memcpy(pcVar9,local_a3c,_Size);
        pcVar9[_Size] = (char)('\0');
        local_a3c = (char *)(pcVar9);
      }
      pcVar9 = (char *)(local_a3c);

      pcVar10 = (char *)(local_a3c);
      local_a48 = (char *)(local_a3c);
      if ((char **)((&local_a48)) != (char **)(ppcVar1)) {
        pcVar10 = (char *)(*ppcVar1);
        local_a44 = (char *)(pcVar10);
        if ((((char *)(pcVar10) != (char *)(0x0)) && (*(int *)(pcVar10 + -0x10) < 0xffff)) &&
           (iVar7 = (int)(thunk_FUN_1123fcd0(pcVar10 + -0x10), 0), iVar7 == 0)) {
          pcVar10[-0xffffffff00000008] = (char)('\0');
          pcVar10[-0xffffffff00000007] = (char)('\0');
          pcVar10[-0xffffffff00000006] = (char)('\0');
          pcVar10[-0xffffffff00000005] = (char)('\0');
          pcVar10[-0xffffffff0000000c] = (char)('\0');
          pcVar10[-0xffffffff0000000b] = (char)('\0');
          pcVar10[-0xffffffff0000000a] = (char)('\0');
          pcVar10[-0xffffffff00000009] = (char)('\0');
          thunk_FUN_113cfb70(local_a44,*(undefined4 *)(pcVar10 + -4));
          free(pcVar10 + -0x10);
        }
        pcVar10 = (char *)(local_a3c);
        *ppcVar1 = (char *)(pcVar9);
        if (((char *)(local_a3c) != (char *)(0x0)) && (*(int *)(pcVar9 + -0x10) < 0xffff)) {
          thunk_FUN_1123fce0(pcVar9 + -0x10);
        }
      }

      if ((((char *)(pcVar10) != (char *)(0x0)) && (_Memory = (int *)((int *)(pcVar9 + -0x10)), *_Memory < (int)((0xffff)))) &&
         (iVar7 = (int)(thunk_FUN_1123fcd0(_Memory), 0), iVar7 == 0)) {
        uVar8 = (undefined4)(*(undefined4 *)(pcVar9 + -4));
        pcVar9[-0xffffffff00000008] = (char)('\0');
        pcVar9[-0xffffffff00000007] = (char)('\0');
        pcVar9[-0xffffffff00000006] = (char)('\0');
        pcVar9[-0xffffffff00000005] = (char)('\0');
        pcVar9[-0xffffffff0000000c] = (char)('\0');
        pcVar9[-0xffffffff0000000b] = (char)('\0');
        pcVar9[-0xffffffff0000000a] = (char)('\0');
        pcVar9[-0xffffffff00000009] = (char)('\0');
        thunk_FUN_113cfb70(pcVar9,uVar8);
        free(_Memory);
      }
      cVar3 = (char)('\x01');
    }
    else {
      cVar3 = (char)(thunk_FUN_110b9070(param_1 + 0x14,0,local_8), 0);
      if (cVar3 != '\0') {
        thunk_FUN_11194190(0,0);

        thunk_FUN_11202490((uint)&local_a6c,0);
        *(unsigned char*)((char *)&local_a2c + 0) = (unsigned char)(3);
        pcVar9 = (char *)(param_1 + 0x415);
        do {
          cVar3 = (char)(*pcVar9);
          pcVar9 = (char *)(pcVar9 + 1);
        } while (cVar3 != '\0');
        thunk_FUN_1125ba00(param_1 + 0x415,(int)pcVar9 - (int)(param_1 + 0x416));
        puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_11194cd0(), 0);
        if ((undefined4 *)(puVar6) != (undefined4 *)(0x0)) {
          local_a58[0] = (undefined4)(0);
          local_a2c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_a2c + 1)) << 8 | (uint)(4)));
          cVar3 = (char)(thunk_FUN_111a5f10("dc:title",(uint)&local_a58), 0);
          if (cVar3 != '\0') {
            uVar8 = (undefined4)(thunk_FUN_111a32a0(param_3), 0);
            thunk_FUN_1145c250(local_a40,uVar8);
            iVar7 = (int)(thunk_FUN_1123fcd0(puVar6 + 1), 0);
            if (iVar7 == 0) {
              (**(code **)*puVar6)(1);
            }
            local_a2c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_a2c + 1)) << 8 | (uint)(5)));
            thunk_FUN_111a36f0();
            thunk_FUN_11202580();
            thunk_FUN_110f69f0();
            goto LAB_11115fa1;
          }
          iVar7 = (int)(thunk_FUN_1123fcd0(puVar6 + 1), 0);
          if (iVar7 == 0) {
            (**(code **)*puVar6)(1);
          }
          *(unsigned char*)((char *)&local_a2c + 0) = (unsigned char)(6);
          thunk_FUN_111a36f0();
        }
        thunk_FUN_11202580();

        thunk_FUN_110f69f0();
      }
      if (((uintptr_t)(*ppcVar1) == (uintptr_t)(0x0)) || (cVar3 = (char)(local_a35), **ppcVar1 == (uintptr_t)(('\0')))) {
        thunk_FUN_11111260((uint)&local_a4);

        if (((char *)(local_a4[0]) != (char *)(0x0)) && ((*local_a4[0] != '\0' && ((char **)(((uint)&local_a4)) != (char **)(ppcVar1))))) {
          pcVar9 = (char *)(*ppcVar1);
          if (((char *)(pcVar9) != (char *)(0x0)) &&
             ((*(int *)(pcVar9 + -0x10) < 0xffff &&
              (iVar7 = (int)(thunk_FUN_1123fcd0(pcVar9 + -0x10), 0), iVar7 == 0)))) {
            pcVar9[-0xffffffff00000008] = (char)('\0');
            pcVar9[-0xffffffff00000007] = (char)('\0');
            pcVar9[-0xffffffff00000006] = (char)('\0');
            pcVar9[-0xffffffff00000005] = (char)('\0');
            pcVar9[-0xffffffff0000000c] = (char)('\0');
            pcVar9[-0xffffffff0000000b] = (char)('\0');
            pcVar9[-0xffffffff0000000a] = (char)('\0');
            pcVar9[-0xffffffff00000009] = (char)('\0');
            thunk_FUN_113cfb70(pcVar9,*(undefined4 *)(pcVar9 + -4));
            free(pcVar9 + -0x10);
          }
          *ppcVar1 = (char *)(local_a4[0]);
          if (((char *)(local_a4[0]) != (char *)(0x0)) && (*(int *)(local_a4[0] + -0x10) < 0xffff)) {
            thunk_FUN_1123fce0(local_a4[0] + -0x10);
          }
        }
        thunk_FUN_10202e00();
        cVar3 = (char)(local_a35);
      }
    }
  }
  else {
    cVar3 = (char)('\x01');
  }
  pcVar9 = (char *)(*ppcVar1);
  if (((char *)(pcVar9) == (char *)(0x0)) || (*pcVar9 == (char)(('\0')))) {
    if (cVar3 == '\0') {
      *local_a40 = (undefined1)(0);
    }
  }
  else {
    thunk_FUN_1145c250(local_a40,pcVar9,param_3);
  }
LAB_11115fa1:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11124a80; body size 239 bytes.
#line 1 "ENTRY_11124a80"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void __thiscall Recovered_Bulk::m_FUN_11124a80(byte *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  undefined8 *puVar1;
  byte bVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  size_t sVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  bool bVar18;
  longlong lVar19;
  undefined1 uStack_5c;
  char cStack_5b;
  char cStack_5a;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined8 *puStack_44;
  undefined8 *puStack_40;
  undefined8 *puStack_3c;
  undefined8 *puStack_38;
  undefined8 *puStack_34;
  undefined8 *puStack_30;
  undefined1 auStack_2c [4];
  byte *pbStack_28;
  int iStack_24;
  undefined8 *puStack_20;
  int local_1c;
  undefined8 *puStack_18;
  undefined8 *puStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar5 = (uint)(DAT_12126b84);
  if (*(char *)(param_1 + 0xc0c8) != '\0') {
    return;
  }

  *(int*)(param_1 + 0xc0cc) = (int)(*(int *)(param_1 + 0xc0cc) + 1);
  if (4 < *(uint *)(param_1 + 0xc0cc)) {
LAB_11124b97:
    *(undefined1*)(param_1 + 0xc0c8) = (undefined1)(1);

    return;
  }
  *(undefined4*)(param_1 + 0xc088 + *(uint *)(param_1 + 0xc0cc) * 4) = (undefined4)(0);
  if ((DAT_122e8a30 == '\0') ||
     (((DAT_1211e604 != 6 && (DAT_1211e604 != 7)) && (DAT_1211e604 != 8)))) {
    bVar18 = (bool)(false);
  }
  else {
    bVar18 = (bool)(true);
  }
  if ((2 < *(uint *)(param_1 + 0xc0cc)) &&
     ((iVar8 = (int)(*(int *)(param_1 + 0xc090)), iVar8 != DAT_1211e604 || (bVar18)))) {
    if (DAT_122e8a30 == '\0') {

      return;
    }
    if ((iVar8 != 9) && (iVar8 != 0xc)) {

      return;
    }
  }
  local_1c = (int)(param_1);
  switch(*(uint *)(param_1 + 0xc0cc)) {
  case 1:
    pbVar12 = (byte *)(pbRam1211e5d4);
    do {
      bVar2 = (byte)(*param_2);
      bVar18 = (bool)((byte)(bVar2) < *pbVar12);
      if ((byte)(bVar2) != *pbVar12) {
code_r0x11124b70:
        uVar5 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124b75;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(param_2[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar12[1]);
      if ((byte)((bVar2)) != pbVar12[1]) goto code_r0x11124b70;
      param_2 = (byte *)(param_2 + 2);
      pbVar12 = (byte *)(pbVar12 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
code_r0x11124b75:
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0xc08c) = (undefined4)(1);

      return;
    }
    goto LAB_11124b97;
  case 2:
    pbVar12 = (byte *)(param_2);
    pbVar11 = (byte *)(pbRam1211e5d8);
    do {
      bVar2 = (byte)(*pbVar12);
      bVar18 = (bool)((byte)(bVar2) < *pbVar11);
      if ((byte)(bVar2) != *pbVar11) {
code_r0x11124be0:
        uVar5 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124be5;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar12[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar11[1]);
      if ((byte)((bVar2)) != pbVar11[1]) goto code_r0x11124be0;
      pbVar12 = (byte *)(pbVar12 + 2);
      pbVar11 = (byte *)(pbVar11 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
code_r0x11124be5:
    pbVar12 = (byte *)(param_2);
    pbVar11 = (byte *)(pbRam1211e5dc);
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0xc090) = (undefined4)(2);

      return;
    }
    do {
      bVar2 = (byte)(*pbVar12);
      bVar18 = (bool)((byte)(bVar2) < *pbVar11);
      if ((byte)(bVar2) != *pbVar11) {
code_r0x11124c30:
        uVar5 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124c35;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar12[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar11[1]);
      if ((byte)((bVar2)) != pbVar11[1]) goto code_r0x11124c30;
      pbVar12 = (byte *)(pbVar12 + 2);
      pbVar11 = (byte *)(pbVar11 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
code_r0x11124c35:
    pbVar12 = (byte *)(param_2);
    pbVar11 = (byte *)(PTR_s_pcdcr_1211e5e0);
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0xc090) = (undefined4)(3);

      return;
    }
    do {
      bVar2 = (byte)(*pbVar12);
      bVar18 = (bool)((byte)(bVar2) < *pbVar11);
      if ((byte)(bVar2) != *pbVar11) {
code_r0x11124c80:
        uVar5 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124c85;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar12[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar11[1]);
      if ((byte)((bVar2)) != pbVar11[1]) goto code_r0x11124c80;
      pbVar12 = (byte *)(pbVar12 + 2);
      pbVar11 = (byte *)(pbVar11 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
code_r0x11124c85:
    pbVar12 = (byte *)(param_2);
    pbVar11 = (byte *)(PTR_s_macdcr_1211e5e4);
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0xc090) = (undefined4)(4);

      return;
    }
    do {
      bVar2 = (byte)(*pbVar12);
      bVar18 = (bool)((byte)(bVar2) < *pbVar11);
      if ((byte)(bVar2) != *pbVar11) {
code_r0x11124cd0:
        uVar5 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124cd5;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar12[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar11[1]);
      if ((byte)((bVar2)) != pbVar11[1]) goto code_r0x11124cd0;
      pbVar12 = (byte *)(pbVar12 + 2);
      pbVar11 = (byte *)(pbVar11 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
code_r0x11124cd5:
    pbVar12 = (byte *)(param_2);
    pbVar11 = (byte *)(PTR_DAT_1211e5e8);
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0xc090) = (undefined4)(5);

      return;
    }
    do {
      bVar2 = (byte)(*pbVar12);
      bVar18 = (bool)((byte)(bVar2) < *pbVar11);
      if ((byte)(bVar2) != *pbVar11) {
code_r0x11124d20:
        uVar5 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124d25;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar12[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar11[1]);
      if ((byte)((bVar2)) != pbVar11[1]) goto code_r0x11124d20;
      pbVar12 = (byte *)(pbVar12 + 2);
      pbVar11 = (byte *)(pbVar11 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
code_r0x11124d25:
    pbVar12 = (byte *)(param_2);
    pbVar11 = (byte *)(PTR_DAT_1211e5ec);
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0xc090) = (undefined4)(6);

      return;
    }
    do {
      bVar2 = (byte)(*pbVar12);
      bVar18 = (bool)((byte)(bVar2) < *pbVar11);
      if ((byte)(bVar2) != *pbVar11) {
code_r0x11124d70:
        uVar5 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124d75;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar12[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar11[1]);
      if ((byte)((bVar2)) != pbVar11[1]) goto code_r0x11124d70;
      pbVar12 = (byte *)(pbVar12 + 2);
      pbVar11 = (byte *)(pbVar11 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
code_r0x11124d75:
    pbVar12 = (byte *)(param_2);
    pbVar11 = (byte *)(PTR_s_acr_hdpi_1211e5f0);
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0xc090) = (undefined4)(7);

      return;
    }
    do {
      bVar2 = (byte)(*pbVar12);
      bVar18 = (bool)((byte)(bVar2) < *pbVar11);
      if ((byte)(bVar2) != *pbVar11) {
code_r0x11124dc0:
        uVar5 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124dc5;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar12[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar11[1]);
      if ((byte)((bVar2)) != pbVar11[1]) goto code_r0x11124dc0;
      pbVar12 = (byte *)(pbVar12 + 2);
      pbVar11 = (byte *)(pbVar11 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
code_r0x11124dc5:
    pbVar12 = (byte *)(param_2);
    pbVar11 = (byte *)(PTR_s_sized_1211e5f4);
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0xc090) = (undefined4)(8);

      return;
    }
    do {
      bVar2 = (byte)(*pbVar12);
      bVar18 = (bool)((byte)(bVar2) < *pbVar11);
      if ((byte)(bVar2) != *pbVar11) {
code_r0x11124e10:
        uVar5 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124e15;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar12[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar11[1]);
      if ((byte)((bVar2)) != pbVar11[1]) goto code_r0x11124e10;
      pbVar12 = (byte *)(pbVar12 + 2);
      pbVar11 = (byte *)(pbVar11 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
code_r0x11124e15:
    pbVar12 = (byte *)(PTR_s_presentationmap_1211e600);
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0xc090) = (undefined4)(9);

      return;
    }
    do {
      bVar2 = (byte)(*param_2);
      bVar18 = (bool)((byte)(bVar2) < *pbVar12);
      if ((byte)(bVar2) != *pbVar12) {
code_r0x11124e60:
        uVar5 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124e65;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(param_2[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar12[1]);
      if ((byte)((bVar2)) != pbVar12[1]) goto code_r0x11124e60;
      param_2 = (byte *)(param_2 + 2);
      pbVar12 = (byte *)(pbVar12 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
code_r0x11124e65:
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0xc090) = (undefined4)(0xc);

      return;
    }
    break;
  case 3:
    pbVar12 = (byte *)(PTR_s_service_1211e5f8);
    do {
      bVar2 = (byte)(*param_2);
      bVar18 = (bool)((byte)(bVar2) < *pbVar12);
      if ((byte)(bVar2) != *pbVar12) {
code_r0x11124eb4:
        uVar5 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124eb9;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(param_2[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar12[1]);
      if ((byte)((bVar2)) != pbVar12[1]) goto code_r0x11124eb4;
      param_2 = (byte *)(param_2 + 2);
      pbVar12 = (byte *)(pbVar12 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
code_r0x11124eb9:
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0xc094) = (undefined4)(10);
      iVar8 = (int)(-1);
      pbVar12 = (byte *)((byte *)*param_3);
      if ((byte *)(pbVar12) == (byte *)(0x0)) {
code_r0x11124f4a:
        *(undefined1*)(local_1c + 0xc0c8) = (undefined1)(1);
        *(int*)(local_1c + 0xc0c0) = (int)(iVar8);

        return;
      }
      do {
        pbVar11 = (byte *)(&DAT_1187b440);
        do {
          bVar2 = (byte)(*pbVar12);
          bVar18 = (bool)((byte)(bVar2) < *pbVar11);
          if ((byte)(bVar2) != *pbVar11) {
code_r0x11124f00:
            uVar5 = (uint)(-(uint)bVar18 | 1);
            goto code_r0x11124f05;
          }
          if (bVar2 == 0) break;
          bVar2 = (byte)(pbVar12[1]);
          bVar18 = (bool)((byte)((bVar2)) < pbVar11[1]);
          if ((byte)((bVar2)) != pbVar11[1]) goto code_r0x11124f00;
          pbVar12 = (byte *)(pbVar12 + 2);
          pbVar11 = (byte *)(pbVar11 + 2);
        } while (bVar2 != 0);
        uVar5 = (uint)(0);
code_r0x11124f05:
        if (uVar5 == 0) {
          iVar8 = (int)(atoi((char *)param_3[1]), 0);
          if (iVar8 != -1) {
            *(int*)(local_1c + 0xc0c0) = (int)(iVar8);

            return;
          }
          goto code_r0x11124f4a;
        }
        pbVar12 = (byte *)((byte *)param_3[2]);
        param_3 = (undefined4 *)(param_3 + 2);
        if ((byte *)(pbVar12) == (byte *)(0x0)) {
          *(undefined1*)(param_1 + 0xc0c8) = (undefined1)(1);
          *(undefined4*)(param_1 + 0xc0c0) = (undefined4)(0xffffffff);

          return;
        }
      } while( true );
    }
    break;
  case 4:
    pbVar12 = (byte *)(PTR_s_image_1211e5fc);
    if (*(int *)(param_1 + 0xc094) != 10) {

      return;
    }
    do {
      bVar2 = (byte)(*param_2);
      bVar18 = (bool)((byte)(bVar2) < *pbVar12);
      if ((byte)(bVar2) != *pbVar12) {
code_r0x11124fc1:
        uVar6 = (uint)(-(uint)bVar18 | 1);
        goto code_r0x11124fc6;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(param_2[1]);
      bVar18 = (bool)((byte)((bVar2)) < pbVar12[1]);
      if ((byte)((bVar2)) != pbVar12[1]) goto code_r0x11124fc1;
      param_2 = (byte *)(param_2 + 2);
      pbVar12 = (byte *)(pbVar12 + 2);
    } while (bVar2 != 0);
    uVar6 = (uint)(0);
code_r0x11124fc6:
    if (uVar6 != 0) {

      return;
    }
    puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x1a,uVar5), 0);
    *puVar7 = (undefined4)(1);
    puVar16 = (undefined8 *)((undefined8 *)(puVar7 + 4));
    puVar7[3] = (undefined4)(9);
    puVar7[2] = (undefined4)(0);
    puVar7[1] = (undefined4)(0);
    *puVar16 = (undefined8)(_UNK_119ca0d0);
    *(undefined1*)(puVar7 + 6) = (undefined1)(UNK_119ca0d8);
    *(undefined1*)((int)puVar7 + 0x19) = (undefined1)(0);

    puStack_38 = (undefined8 *)(puVar16);
    puStack_20 = (undefined8 *)(puVar16);
    puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x1e), 0);
    *puVar7 = (undefined4)(1);
    puVar17 = (undefined8 *)((undefined8 *)(puVar7 + 4));
    puVar7[3] = (undefined4)(0xd);
    puVar7[2] = (undefined4)(0);
    puVar7[1] = (undefined4)(0);
    *puVar17 = (undefined8)(_UNK_119ca0dc);
    puVar7[6] = (undefined4)(_UNK_119ca0e4);
    *(undefined1*)(puVar7 + 7) = (undefined1)(UNK_119ca0e8);
    *(undefined1*)((int)puVar7 + 0x1d) = (undefined1)(0);
    puStack_18 = (undefined8 *)((undefined8 *)0x0);
    puStack_14 = (undefined8 *)((undefined8 *)0x0);
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(3)));
    iStack_24 = (int)(0);
    pbStack_28 = (byte *)((byte *)*param_3);
    puStack_40 = (undefined8 *)(puVar17);
    if ((byte *)(pbStack_28) != (byte *)(0x0)) {
      do {
        puVar7 = (undefined4 *)(param_3 + 1);
        pcVar15 = (char *)("placement");
        pbVar12 = (byte *)(pbStack_28);
        do {
          bVar2 = (byte)(*pbVar12);
          bVar18 = (bool)(bVar2 < (byte)*pcVar15);
          if ((char)(bVar2) != *pcVar15) {
code_r0x111250bc:
            uVar6 = (uint)(-(uint)bVar18 | 1);
            goto code_r0x111250c1;
          }
          if (bVar2 == 0) break;
          bVar2 = (byte)(pbVar12[1]);
          bVar18 = (bool)(bVar2 < (byte)pcVar15[1]);
          if ((char)((bVar2)) != pcVar15[1]) goto code_r0x111250bc;
          pbVar12 = (byte *)(pbVar12 + 2);
          pcVar15 = (char *)(pcVar15 + 2);
        } while (bVar2 != 0);
        uVar6 = (uint)(0);
code_r0x111250c1:
        if (uVar6 == 0) {
          pcVar15 = (char *)((char *)*puVar7);
          if (((char *)(pcVar15) == (char *)(0x0)) || (*pcVar15 == (char)(('\0')))) {
            puVar16 = (undefined8 *)((undefined8 *)0x0);
          }
          else {
            pcVar13 = (char *)(pcVar15);
            do {
              cVar4 = (char)(*pcVar13);
              pcVar13 = (char *)(pcVar13 + 1);
            } while (cVar4 != '\0');
            sVar14 = (size_t)((int)pcVar13 - (int)(pcVar15 + 1));
            puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar14 + 0x11,uVar5), 0);
            puVar16 = (undefined8 *)((undefined8 *)(puVar7 + 4));
            *puVar7 = (undefined4)(1);
            puVar7[3] = (undefined4)(sVar14);
            puVar7[2] = (undefined4)(0);
            puVar7[1] = (undefined4)(0);
            memcpy(puVar16,pcVar15,sVar14);
            *(undefined1*)((int)puVar16 + sVar14) = (undefined1)(0);
          }
          puVar9 = (undefined8 *)(puStack_14);
          uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(4)));
          puStack_30 = (undefined8 *)(puVar16);
          if ((((undefined8 *)(puStack_14) != (undefined8 *)(0x0)) &&
              (puVar1 = (undefined8 *)(puStack_14 + -2), *(int *)(puStack_14 + -2) < 0xffff)) &&
             (iVar8 = (int)(thunk_FUN_1123fcd0(puVar1), 0), iVar8 == 0)) {
            *(undefined4*)(puVar9 + -1) = (undefined4)(0);
            *(undefined4*)((int)puVar9 + -0xc) = (undefined4)(0);
            thunk_FUN_113cfb70(puVar9,*(undefined4 *)((int)puVar9 + -4));
            free(puVar1);
          }
          puStack_14 = (undefined8 *)(puVar16);
          if (((undefined8 *)(puVar16) != (undefined8 *)(0x0)) && (*(int *)(puVar16 + -2) < 0xffff)) {
            thunk_FUN_1123fce0(puVar16 + -2);
          }
          uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(5)));
code_r0x1112548d:
          if ((((undefined8 *)(puVar16) != (undefined8 *)(0x0)) &&
              (piVar10 = (int *)((int *)(puVar16 + -2)), *piVar10 < (int)((0xffff)))) &&
             (iVar8 = (int)(thunk_FUN_1123fcd0(piVar10), 0), iVar8 == 0)) {
            *(undefined4*)(puVar16 + -1) = (undefined4)(0);
            *(undefined4*)((int)puVar16 + -0xc) = (undefined4)(0);
            thunk_FUN_113cfb70(puVar16,*(undefined4 *)((int)puVar16 + -4));
            free(piVar10);
          }
          uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(3)));
        }
        else {
          pcVar15 = (char *)("firstValid");
          pbVar12 = (byte *)(pbStack_28);
          do {
            bVar2 = (byte)(*pbVar12);
            bVar18 = (bool)(bVar2 < (byte)*pcVar15);
            if ((char)(bVar2) != *pcVar15) {
code_r0x111251bb:
              uVar6 = (uint)(-(uint)bVar18 | 1);
              goto code_r0x111251c0;
            }
            if (bVar2 == 0) break;
            bVar2 = (byte)(pbVar12[1]);
            bVar18 = (bool)(bVar2 < (byte)pcVar15[1]);
            if ((char)((bVar2)) != pcVar15[1]) goto code_r0x111251bb;
            pbVar12 = (byte *)(pbVar12 + 2);
            pcVar15 = (char *)(pcVar15 + 2);
          } while (bVar2 != 0);
          uVar6 = (uint)(0);
code_r0x111251c0:
          if (uVar6 == 0) {
            pcVar15 = (char *)((char *)*puVar7);
            if (((char *)(pcVar15) == (char *)(0x0)) || (*pcVar15 == (char)(('\0')))) {
              puVar16 = (undefined8 *)((undefined8 *)0x0);
            }
            else {
              pcVar13 = (char *)(pcVar15);
              do {
                cVar4 = (char)(*pcVar13);
                pcVar13 = (char *)(pcVar13 + 1);
              } while (cVar4 != '\0');
              sVar14 = (size_t)((int)pcVar13 - (int)(pcVar15 + 1));
              puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar14 + 0x11,uVar5), 0);
              puVar16 = (undefined8 *)((undefined8 *)(puVar7 + 4));
              *puVar7 = (undefined4)(1);
              puVar7[3] = (undefined4)(sVar14);
              puVar7[2] = (undefined4)(0);
              puVar7[1] = (undefined4)(0);
              memcpy(puVar16,pcVar15,sVar14);
              *(undefined1*)((int)puVar16 + sVar14) = (undefined1)(0);
            }
            puVar9 = (undefined8 *)(puStack_20);
            uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(6)));
            puStack_34 = (undefined8 *)(puVar16);
            if ((((undefined8 *)(puStack_20) != (undefined8 *)(0x0)) &&
                (puVar1 = (undefined8 *)(puStack_20 + -2), *(int *)(puStack_20 + -2) < 0xffff)) &&
               (iVar8 = (int)(thunk_FUN_1123fcd0(puVar1), 0), iVar8 == 0)) {
              *(undefined4*)(puVar9 + -1) = (undefined4)(0);
              *(undefined4*)((int)puVar9 + -0xc) = (undefined4)(0);
              thunk_FUN_113cfb70(puVar9,*(undefined4 *)((int)puVar9 + -4));
              free(puVar1);
            }
            puStack_38 = (undefined8 *)(puVar16);
            puStack_20 = (undefined8 *)(puVar16);
            if (((undefined8 *)(puVar16) != (undefined8 *)(0x0)) && (*(int *)(puVar16 + -2) < 0xffff)) {
              thunk_FUN_1123fce0(puVar16 + -2);
            }
            uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(7)));
            goto code_r0x1112548d;
          }
          pcVar15 = (char *)("lastValid");
          pbVar12 = (byte *)(pbStack_28);
          do {
            bVar2 = (byte)(*pbVar12);
            bVar18 = (bool)(bVar2 < (byte)*pcVar15);
            if ((char)(bVar2) != *pcVar15) {
code_r0x111252cb:
              uVar6 = (uint)(-(uint)bVar18 | 1);
              goto code_r0x111252d0;
            }
            if (bVar2 == 0) break;
            bVar2 = (byte)(pbVar12[1]);
            bVar18 = (bool)(bVar2 < (byte)pcVar15[1]);
            if ((char)((bVar2)) != pcVar15[1]) goto code_r0x111252cb;
            pbVar12 = (byte *)(pbVar12 + 2);
            pcVar15 = (char *)(pcVar15 + 2);
          } while (bVar2 != 0);
          uVar6 = (uint)(0);
code_r0x111252d0:
          if (uVar6 == 0) {
            pcVar15 = (char *)((char *)*puVar7);
            if (((char *)(pcVar15) == (char *)(0x0)) || (*pcVar15 == (char)(('\0')))) {
              puVar16 = (undefined8 *)((undefined8 *)0x0);
            }
            else {
              pcVar13 = (char *)(pcVar15);
              do {
                cVar4 = (char)(*pcVar13);
                pcVar13 = (char *)(pcVar13 + 1);
              } while (cVar4 != '\0');
              sVar14 = (size_t)((int)pcVar13 - (int)(pcVar15 + 1));
              puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar14 + 0x11,uVar5), 0);
              puVar16 = (undefined8 *)((undefined8 *)(puVar7 + 4));
              *puVar7 = (undefined4)(1);
              puVar7[3] = (undefined4)(sVar14);
              puVar7[2] = (undefined4)(0);
              puVar7[1] = (undefined4)(0);
              memcpy(puVar16,pcVar15,sVar14);
              *(undefined1*)((int)puVar16 + sVar14) = (undefined1)(0);
            }
            uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(8)));
            puStack_3c = (undefined8 *)(puVar16);
            if ((((undefined8 *)(puVar17) != (undefined8 *)(0x0)) &&
                (piVar10 = (int *)((int *)(puVar17 + -2)), *piVar10 < (int)((0xffff)))) &&
               (iVar8 = (int)(thunk_FUN_1123fcd0(piVar10), 0), iVar8 == 0)) {
              *(undefined4*)(puVar17 + -1) = (undefined4)(0);
              *(undefined4*)((int)puVar17 + -0xc) = (undefined4)(0);
              thunk_FUN_113cfb70(puVar17,*(undefined4 *)((int)puVar17 + -4));
              free(piVar10);
            }
            puStack_40 = (undefined8 *)(puVar16);
            if (((undefined8 *)(puVar16) != (undefined8 *)(0x0)) && (*(int *)(puVar16 + -2) < 0xffff)) {
              thunk_FUN_1123fce0(puVar16 + -2);
            }
            uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(9)));
            puVar17 = (undefined8 *)(puVar16);
            goto code_r0x1112548d;
          }
          pcVar15 = (char *)("lastModified");
          pbVar12 = (byte *)(pbStack_28);
          do {
            bVar2 = (byte)(*pbVar12);
            bVar18 = (bool)(bVar2 < (byte)*pcVar15);
            if ((char)(bVar2) != *pcVar15) {
code_r0x111253c1:
              uVar6 = (uint)(-(uint)bVar18 | 1);
              goto code_r0x111253c6;
            }
            if (bVar2 == 0) break;
            bVar2 = (byte)(pbVar12[1]);
            bVar18 = (bool)(bVar2 < (byte)pcVar15[1]);
            if ((char)((bVar2)) != pcVar15[1]) goto code_r0x111253c1;
            pbVar12 = (byte *)(pbVar12 + 2);
            pcVar15 = (char *)(pcVar15 + 2);
          } while (bVar2 != 0);
          uVar6 = (uint)(0);
code_r0x111253c6:
          if (uVar6 == 0) {
            pcVar15 = (char *)((char *)*puVar7);
            if (((char *)(pcVar15) == (char *)(0x0)) || (*pcVar15 == (char)(('\0')))) {
              puVar16 = (undefined8 *)((undefined8 *)0x0);
            }
            else {
              pcVar13 = (char *)(pcVar15);
              do {
                cVar4 = (char)(*pcVar13);
                pcVar13 = (char *)(pcVar13 + 1);
              } while (cVar4 != '\0');
              sVar14 = (size_t)((int)pcVar13 - (int)(pcVar15 + 1));
              puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar14 + 0x11,uVar5), 0);
              puVar16 = (undefined8 *)((undefined8 *)(puVar7 + 4));
              *puVar7 = (undefined4)(1);
              puVar7[3] = (undefined4)(sVar14);
              puVar7[2] = (undefined4)(0);
              puVar7[1] = (undefined4)(0);
              memcpy(puVar16,pcVar15,sVar14);
              *(undefined1*)((int)puVar16 + sVar14) = (undefined1)(0);
            }
            puVar9 = (undefined8 *)(puStack_18);
            uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(10)));
            puStack_44 = (undefined8 *)(puVar16);
            if ((((undefined8 *)(puStack_18) != (undefined8 *)(0x0)) &&
                (puVar1 = (undefined8 *)(puStack_18 + -2), *(int *)(puStack_18 + -2) < 0xffff)) &&
               (iVar8 = (int)(thunk_FUN_1123fcd0(puVar1), 0), iVar8 == 0)) {
              *(undefined4*)(puVar9 + -1) = (undefined4)(0);
              *(undefined4*)((int)puVar9 + -0xc) = (undefined4)(0);
              thunk_FUN_113cfb70(puVar9,*(undefined4 *)((int)puVar9 + -4));
              free(puVar1);
            }
            puStack_18 = (undefined8 *)(puVar16);
            if (((undefined8 *)(puVar16) != (undefined8 *)(0x0)) && (*(int *)(puVar16 + -2) < 0xffff)) {
              thunk_FUN_1123fce0(puVar16 + -2);
            }
            uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0xb)));
            goto code_r0x1112548d;
          }
          pcVar15 = (char *)("priority");
          pbVar12 = (byte *)(pbStack_28);
          do {
            bVar2 = (byte)(*pbVar12);
            bVar18 = (bool)(bVar2 < (byte)*pcVar15);
            if ((char)(bVar2) != *pcVar15) {
code_r0x111254f2:
              uVar6 = (uint)(-(uint)bVar18 | 1);
              goto code_r0x111254f7;
            }
            if (bVar2 == 0) break;
            bVar2 = (byte)(pbVar12[1]);
            bVar18 = (bool)(bVar2 < (byte)pcVar15[1]);
            if ((char)((bVar2)) != pcVar15[1]) goto code_r0x111254f2;
            pbVar12 = (byte *)(pbVar12 + 2);
            pcVar15 = (char *)(pcVar15 + 2);
          } while (bVar2 != 0);
          uVar6 = (uint)(0);
code_r0x111254f7:
          if (uVar6 == 0) {
            iStack_24 = (int)(atoi((char *)*puVar7), 0);
          }
        }
        param_3 = (undefined4 *)(param_3 + 2);
        pbStack_28 = (byte *)((byte *)*param_3);
      } while ((byte *)(pbStack_28) != (byte *)(0x0));
      pbStack_28 = (byte *)((byte *)0x0);
      puVar16 = (undefined8 *)(puStack_20);
    }
    uStack_54 = (undefined4)(uStack_54 & 0xfffffff8);
    uStack_4c = (undefined4)(uStack_4c & 0xfffffff8);
    *(uint*)((char *)&uStack_54 + 0) = (uint)((uint3)(byte)uStack_54);

    *(uint*)((char *)&uStack_4c + 0) = (uint)((uint3)(byte)uStack_4c);

    thunk_FUN_11273170(&uStack_5c);
    puVar9 = (undefined8 *)((undefined8 *)&DAT_1186d2ee);
    if ((undefined8 *)(puVar16) != (undefined8 *)(0x0)) {
      puVar9 = (undefined8 *)(puVar16);
    }
    cVar4 = (char)(thunk_FUN_1145a960(puVar9), 0);
    if (cVar4 == '\0') {
code_r0x11125757:
      puVar9 = (undefined8 *)(puStack_14);
      *(undefined1*)(local_1c + 0xc0c8) = (undefined1)(1);
      *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(0xc);
      if (((undefined8 *)(puStack_14) != (undefined8 *)(0x0)) &&
         ((puVar1 = (undefined8 *)(puStack_14 + -2), *(int *)(puStack_14 + -2) < 0xffff &&
          (iVar8 = (int)(thunk_FUN_1123fcd0(puVar1), 0), iVar8 == 0)))) {
        *(undefined4*)(puVar9 + -1) = (undefined4)(0);
        *(undefined4*)((int)puVar9 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(puVar9,*(undefined4 *)((int)puVar9 + -4));
        free(puVar1);
      }
      puVar9 = (undefined8 *)(puStack_18);
      *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(0xd);
      if ((((undefined8 *)(puStack_18) != (undefined8 *)(0x0)) &&
          (puVar1 = (undefined8 *)(puStack_18 + -2), *(int *)(puStack_18 + -2) < 0xffff)) &&
         (iVar8 = (int)(thunk_FUN_1123fcd0(puVar1), 0), iVar8 == 0)) {
        *(undefined4*)(puVar9 + -1) = (undefined4)(0);
        *(undefined4*)((int)puVar9 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(puVar9,*(undefined4 *)((int)puVar9 + -4));
        free(puVar1);
      }
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0xe)));
      if ((((undefined8 *)(puVar17) != (undefined8 *)(0x0)) && (piVar10 = (int *)((int *)(puVar17 + -2)), *piVar10 < (int)((0xffff)))) && (iVar8 = (int)(thunk_FUN_1123fcd0(piVar10), 0), iVar8 == 0)) {
        *(undefined4*)(puVar17 + -1) = (undefined4)(0);
        *(undefined4*)((int)puVar17 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(puVar17,*(undefined4 *)((int)puVar17 + -4));
        free(piVar10);
      }

    }
    else {
      puVar9 = (undefined8 *)((undefined8 *)&DAT_1186d2ee);
      if ((undefined8 *)(puVar17) != (undefined8 *)(0x0)) {
        puVar9 = (undefined8 *)(puVar17);
      }
      cVar4 = (char)(thunk_FUN_1145a960(puVar9), 0);
      iVar8 = (int)(local_1c);
      if ((cVar4 == '\0') || (((cStack_5b == '\0' && (cStack_5a == '\0')) && (iStack_58 == 0)))) goto code_r0x11125757;
      if ((*(uint *)(((char *)&uStack_4c + 1)) <= *(uint *)((char *)&uStack_54 + 1)) &&
         ((*(uint *)(((char *)&uStack_4c + 1)) != *(uint *)((char *)&uStack_54 + 1) ||
          ((*(uint *)(((char *)&uStack_4c + 2)) <= *(uint *)((char *)&uStack_54 + 2) &&
           ((*(uint *)(((char *)&uStack_4c + 2)) != *(uint *)((char *)&uStack_54 + 2) ||
            ((uStack_48 <= uStack_50 && (uStack_48 != uStack_50)))))))))) goto code_r0x11125757;
      thunk_FUN_101ba530(&puStack_14);
      cVar4 = (char)(func_0x10015311(&uStack_5c), 0);
      if (cVar4 != '\0') {
        piVar10 = (int *)((int *)thunk_FUN_1111e210((uint)&auStack_2c,iVar8 + 0xc0c0), 0);
        iVar8 = (int)(*piVar10);
        if (*(int *)(iVar8 + 0x20) < (int)(iStack_24)) {
          puVar9 = (undefined8 *)((undefined8 *)&DAT_1186d2ee);
          if ((undefined8 *)(puStack_18) != (undefined8 *)(0x0)) {
            puVar9 = (undefined8 *)(puStack_18);
          }
          lVar19 = (longlong)(FUN_11124530(puVar9), 0);
          if (lVar19 == -1) {
            *(undefined1*)(local_1c + 0xc0c8) = (undefined1)(1);
          }
          else {
            *(int*)(iVar8 + 0x18) = (int)((int)lVar19);
            *(int*)(iVar8 + 0x20) = (int)(iStack_24);
            *(int*)(iVar8 + 0x1c) = (int)((int)((ulonglong)lVar19 >> 0x20));
            *(undefined4*)(local_1c + 0xc098) = (undefined4)(0xb);
            thunk_FUN_10281490();
          }
        }
      }
      puVar9 = (undefined8 *)(puStack_14);
      *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(0x10);
      if ((((undefined8 *)(puStack_14) != (undefined8 *)(0x0)) &&
          (puVar1 = (undefined8 *)(puStack_14 + -2), *(int *)(puStack_14 + -2) < 0xffff)) &&
         (iVar8 = (int)(thunk_FUN_1123fcd0(puVar1), 0), iVar8 == 0)) {
        *(undefined4*)(puVar9 + -1) = (undefined4)(0);
        *(undefined4*)((int)puVar9 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(puVar9,*(undefined4 *)((int)puVar9 + -4));
        free(puVar1);
      }
      puVar9 = (undefined8 *)(puStack_18);
      *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(0x11);
      if ((((undefined8 *)(puStack_18) != (undefined8 *)(0x0)) &&
          (puVar1 = (undefined8 *)(puStack_18 + -2), *(int *)(puStack_18 + -2) < 0xffff)) &&
         (iVar8 = (int)(thunk_FUN_1123fcd0(puVar1), 0), iVar8 == 0)) {
        *(undefined4*)(puVar9 + -1) = (undefined4)(0);
        *(undefined4*)((int)puVar9 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(puVar9,*(undefined4 *)((int)puVar9 + -4));
        free(puVar1);
      }
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0x12)));
      if ((((undefined8 *)(puVar17) != (undefined8 *)(0x0)) && (piVar10 = (int *)((int *)(puVar17 + -2)), *piVar10 < (int)((0xffff)))) && (iVar8 = (int)(thunk_FUN_1123fcd0(piVar10), 0), iVar8 == 0)) {
        *(undefined4*)(puVar17 + -1) = (undefined4)(0);
        *(undefined4*)((int)puVar17 + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(puVar17,*(undefined4 *)((int)puVar17 + -4));
        free(piVar10);
      }

    }
    if ((((undefined8 *)(puVar16) != (undefined8 *)(0x0)) && (piVar10 = (int *)((int *)(puVar16 + -2)), *piVar10 < (int)((0xffff)))) &&
       (iVar8 = (int)(thunk_FUN_1123fcd0(piVar10), 0), iVar8 == 0)) {
      *(undefined4*)(puVar16 + -1) = (undefined4)(0);
      *(undefined4*)((int)puVar16 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(puVar16,*(undefined4 *)((int)puVar16 + -4));
      free(piVar10);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 11185050; body size 366 bytes.
#line 1 "ENTRY_11185050"

void FUN_11185050(char *param_1)

{ int stack0xfffffffc;
 try {
  char *_Src;
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  size_t _Size;
  void **ppvVar7;
  void *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  _Src = (char *)(param_1);


  if (((char *)(param_1) == (char *)(0x0)) || (*param_1 == (char)(('\0')))) {
    param_1 = (char *)((char *)0x0);
  }
  else {
    pcVar6 = (char *)(param_1);
    do {
      cVar1 = (char)(*pcVar6);
      pcVar6 = (char *)(pcVar6 + 1);
    } while (cVar1 != '\0');
    _Size = (size_t)((int)pcVar6 - (int)(param_1 + 1));
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);
    puVar4 = (undefined4 *)(puVar2 + 4);
    *puVar2 = (undefined4)(1);
    puVar2[3] = (undefined4)(_Size);
    puVar2[2] = (undefined4)(0);
    puVar2[1] = (undefined4)(0);
    memcpy(puVar4,_Src,_Size);
    *(undefined1*)((int)puVar4 + _Size) = (undefined1)(0);
    param_1 = (char *)((char *)puVar4);
  }

  ppvVar7 = (void **)((uint)&local_18);
  puVar4 = (undefined4 *)((undefined4 *)param_1);
  if (((char *)(param_1) != (char *)(0x0)) && (*(int *)((int)param_1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)((int)param_1 + -0x10),param_1,ppvVar7);
  }
  cVar1 = (char)(thunk_FUN_1118a430(puVar4,ppvVar7), 0);
  if (cVar1 == '\0') {
    local_18[0] = (void *)(operator_new(0x2c), 0);
    *(unsigned char*)((char *)&local_8 + 0) = (unsigned char)(1);
    if (local_18[0] == (uintptr_t)(0x0)) {
      uVar3 = (undefined4)(0);
    }
    else {
      puVar4 = (undefined4 *)((undefined4 *)param_1);
      if (((char *)(param_1) != (char *)(0x0)) && (*(int *)((int)param_1 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)((int)param_1 + -0x10),param_1);
      }
      uVar3 = (undefined4)(thunk_FUN_1117eaf0(puVar4), 0);
    }
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_11180fe0(&param_1), 0);
    *puVar4 = (undefined4)(uVar3);
  }
  puVar4 = (undefined4 *)((undefined4 *)param_1);

  if (((char *)(param_1) != (char *)(0x0)) &&
     (puVar2 = (undefined4 *)((undefined4 *)((int)param_1 + -0x10)), *(int *)((int)param_1 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0(puVar2), 0);
    if (iVar5 == 0) {
      puVar4[-2] = (undefined4)(0);
      puVar4[-3] = (undefined4)(0);
      thunk_FUN_113cfb70(puVar4,puVar4[-1]);
      free(puVar2);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 111e86b0; body size 399 bytes.
#line 1 "ENTRY_111e86b0"

void __thiscall Recovered_Bulk::m_FUN_111e86b0(undefined4 param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  void *_Dst;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  byte *local_b4;
  undefined1 local_b0 [8];
  int local_a8;
  uint local_a4;
  byte local_88 [132];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_b4);
  thunk_FUN_11245a50(param_2,(uint)&local_b0);
  uVar7 = (uint)(0);
  if (local_a4 != 0) {
    do {
      if (uVar7 == 0x80) {
        local_88[0x80] = (byte)(0);
        thunk_FUN_112b0270("sonoscp",3,"SMAPI hostname %s too long, truncating",(uint)&local_88);
      }
      else {
        if (*(byte *)(uVar7 + local_a8) == 0x3a) break;
        local_88[uVar7] = (byte)(*(byte *)(uVar7 + local_a8));
      }
      uVar7 = (uint)(uVar7 + 1);
    } while (uVar7 < local_a4);
    if (0x80 < uVar7) {
                    
      thunk_FUN_1148bc65();
    }
  }
  pbVar4 = (byte *)((uint)&local_88);
  local_88[uVar7] = (byte)(0);
  do {
    bVar1 = (byte)(*pbVar4);
    pbVar4 = (byte *)(pbVar4 + 1);
  } while (bVar1 != 0);
  uVar7 = (uint)(*(uint *)(param_1 + 0x8508));
  pbVar4 = (byte *)(pbVar4 + (1 - (int)((uint)&local_88 + 1)));
  local_b4 = (byte *)(pbVar4);
  if ((uVar7 < 0x100) && ((uintptr_t)(pbVar4 + *(int *)(uintptr_t)(param_1 + 0x850c))< (uintptr_t)((int)(0x8100)))) {
    uVar9 = (uint)(0);
    if (uVar7 != 0) {
      puVar6 = (undefined4 *)((undefined4 *)(param_1 + 0x8108));
      do {
        pbVar2 = (byte *)((byte *)*puVar6);
        pbVar5 = (byte *)((uint)&local_88);
        do {
          bVar1 = (byte)(*pbVar2);
          bVar10 = (bool)((byte)(bVar1) < *pbVar5);
          if ((byte)(bVar1) != *pbVar5) {
LAB_111e87b0:
            uVar3 = (uint)(-(uint)bVar10 | 1);
            goto LAB_111e87b5;
          }
          if (bVar1 == 0) break;
          bVar1 = (byte)(pbVar2[1]);
          bVar10 = (bool)((byte)((bVar1)) < pbVar5[1]);
          if ((byte)((bVar1)) != pbVar5[1]) goto LAB_111e87b0;
          pbVar2 = (byte *)(pbVar2 + 2);
          pbVar5 = (byte *)(pbVar5 + 2);
        } while (bVar1 != 0);
        uVar3 = (uint)(0);
LAB_111e87b5:
        if (-1 < (int)uVar3) break;
        uVar9 = (uint)(uVar9 + 1);
        puVar6 = (undefined4 *)(puVar6 + 1);
      } while (uVar9 < uVar7);
      if (uVar3 == 0) goto LAB_111e881d;
    }
    if (uVar9 < uVar7) {
      iVar8 = (int)(uVar7 - uVar9);
      puVar6 = (undefined4 *)((undefined4 *)(param_1 + 0x8108 + uVar7 * 4));
      do {
        *puVar6 = (undefined4)(puVar6[-1]);
        iVar8 = (int)(iVar8 + -1);
        puVar6 = (undefined4 *)(puVar6 + -1);
      } while (iVar8 != 0);
    }
    _Dst = (char *)((char *)(*(int *)(param_1 + 0x850c) + 8 + param_1));
    *(void**)(param_1 + 0x8108 + uVar9 * 4) = (void *)(_Dst);
    memcpy(_Dst,(char *)&local_88,(size_t)pbVar4);
    *(int*)(param_1 + 0x850c) = (int)((int)(pbVar4 + *(int *)(param_1 + 0x850c)));
    *(int*)(param_1 + 0x8508) = (int)(*(int *)(param_1 + 0x8508) + 1);
  }
LAB_111e881d:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 111fd660; body size 443 bytes.
#line 1 "ENTRY_111fd660"

void FUN_111fd660(void)

{ int stack0xffffff94; int stack0xffffffa4;
 try {
  uint *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  undefined1 *local_44;
  int local_40;
  int local_38;
  int local_34;
  undefined4 local_30;
  uint local_2c [4];
  uint local_1c [4];
  undefined1 local_c [8];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_44);
  local_44 = (undefined1 *)(malloc(0x80), 0);
  uVar19 = (uint)(DAT_12120420);
  if (((undefined1 *)(local_44) != (undefined1 *)(0x0)) && (*local_44 = 0, uVar19 + 1 < 0x26)) {
    uVar23 = (uint)(0);
    if (uVar19 != 0) {
      if (((0x3f < uVar19) &&
          ((puVar2 = (undefined *)(uintptr_t)((uintptr_t)((uintptr_t)((int)(uint)&local_2c + (uVar19 - 1)))), (uintptr_t)(PTR_DAT_12120418 + (uVar19 - 1))< (uintptr_t)((uint)&local_2c)|| ((uintptr_t)(puVar2) < (uintptr_t)(PTR_DAT_12120418))))) &&
         (((uintptr_t)(PTR_DAT_12120410 + (uVar19 - 1))< (uintptr_t)((uint)&local_2c)|| ((uintptr_t)(puVar2) < (uintptr_t)(PTR_DAT_12120410))))) {
        iVar22 = (int)((int)PTR_DAT_12120410 - (int)PTR_DAT_12120418);
        iVar20 = (int)(-(int)PTR_DAT_12120418);
        local_38 = (int)((int)(uint)&local_2c + iVar20 + 0x10);
        local_30 = (undefined4)(uVar19 - (uVar19 & 0x3f));
        iVar5 = (int)(-(int)PTR_DAT_12120418);
        local_34 = (int)((int)(uint)&local_2c + (0x20 - (int)PTR_DAT_12120418));
        puVar17 = (uint *)((uint *)(PTR_DAT_12120418 + 0x10));
        puVar21 = (uint *)((uint *)(PTR_DAT_12120410 + 0x30));
        local_40 = (int)(iVar22);
        do {
          iVar16 = (int)(local_34);
          uVar19 = (uint)(puVar21[-0xb]);
          uVar6 = (uint)(puVar21[-10]);
          uVar7 = (uint)(puVar21[-9]);
          uVar8 = (uint)(puVar17[-3]);
          uVar9 = (uint)(puVar17[-2]);
          uVar10 = (uint)(puVar17[-1]);
          puVar1 = (uint *)(puVar17 + 0x10);
          uVar11 = (uint)(*puVar17);
          uVar12 = (uint)(puVar17[1]);
          uVar13 = (uint)(puVar17[2]);
          uVar14 = (uint)(puVar17[3]);
          *(uint*)((int)(uint)&local_2c + uVar23) = (uint)(puVar17[-4] ^ puVar21[-0xc]);
          *(uint*)((int)(uint)&local_2c + uVar23 + 4) = (uint)(uVar8 ^ uVar19);
          *(uint*)((int)(uint)&local_2c + uVar23 + 8) = (uint)(uVar9 ^ uVar6);
          *(uint*)((int)(uint)&local_2c + uVar23 + 0xc) = (uint)(uVar10 ^ uVar7);
          uVar23 = (uint)(uVar23 + 0x40);
          puVar3 = (uint *)((uint *)(iVar22 + -0x40 + (int)puVar1));
          uVar19 = (uint)(puVar3[1]);
          uVar6 = (uint)(puVar3[2]);
          uVar7 = (uint)(puVar3[3]);
          uVar8 = (uint)(puVar21[-4]);
          uVar9 = (uint)(puVar21[-3]);
          uVar10 = (uint)(puVar21[-2]);
          uVar15 = (uint)(puVar21[-1]);
          puVar4 = (uint *)((uint *)(&stack0xffffff94 + iVar5 + (int)puVar1));
          *puVar4 = (uint)(*puVar3 ^ uVar11);
          puVar4[1] = (uint)(uVar19 ^ uVar12);
          puVar4[2] = (uint)(uVar6 ^ uVar13);
          puVar4[3] = (uint)(uVar7 ^ uVar14);
          uVar19 = (uint)(puVar17[5]);
          uVar6 = (uint)(puVar17[6]);
          uVar7 = (uint)(puVar17[7]);
          uVar11 = (uint)(*puVar21);
          uVar12 = (uint)(puVar21[1]);
          uVar13 = (uint)(puVar21[2]);
          uVar14 = (uint)(puVar21[3]);
          puVar3 = (uint *)((uint *)(&stack0xffffffa4 + iVar20 + (int)puVar1));
          *puVar3 = (uint)(puVar17[4] ^ uVar8);
          puVar3[1] = (uint)(uVar19 ^ uVar9);
          puVar3[2] = (uint)(uVar6 ^ uVar10);
          puVar3[3] = (uint)(uVar7 ^ uVar15);
          uVar19 = (uint)(puVar17[9]);
          uVar6 = (uint)(puVar17[10]);
          uVar7 = (uint)(puVar17[0xb]);
          puVar3 = (uint *)((uint *)((int)puVar17 + iVar16));
          *puVar3 = (uint)(puVar17[8] ^ uVar11);
          puVar3[1] = (uint)(uVar19 ^ uVar12);
          puVar3[2] = (uint)(uVar6 ^ uVar13);
          puVar3[3] = (uint)(uVar7 ^ uVar14);
          puVar17 = (uint *)(puVar1);
          uVar19 = (uint)(DAT_12120420);
          puVar21 = (uint *)(puVar21 + 0x10);
        } while (uVar23 < local_30);
      }
      if (uVar23 < uVar19) {
        iVar20 = (int)(uVar19 - uVar23);
        pbVar18 = (byte *)(PTR_DAT_12120418 + uVar23);
        uVar23 = (uint)(uVar23 + iVar20);
        do {
          pbVar18[(int)(uint)&local_2c - (int)PTR_DAT_12120418] = (byte)(pbVar18[(int)PTR_DAT_12120410 - (int)PTR_DAT_12120418] ^ *pbVar18);
          iVar20 = (int)(iVar20 + -1);
          pbVar18 = (byte *)(pbVar18 + 1);
        } while (iVar20 != 0);
      }
      if (0x24 < uVar23) {
                    
        thunk_FUN_1148bc65();
      }
    }
    *(undefined1*)((int)(uint)&local_2c + uVar23) = (undefined1)(0);
    thunk_FUN_111c0480(local_44,0x80,"X-Sonos-Diagnostics-Api-Key: %s\r\n",(uint)&local_2c);
    thunk_FUN_113cfb70((uint)&local_2c,0x25);
  }
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11201af0; body size 440 bytes.
#line 1 "ENTRY_11201af0"

void __thiscall Recovered_Bulk::m_FUN_11201af0(byte *param_2,undefined4 param_3)
{
  int param_1 = (int )this; int stack0xfffffbe8;
 try {
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 local_40c;
  char local_408 [4];
  char acStack_404 [4];
  char acStack_400 [4];
  char acStack_3fc [4];
  char local_3f8 [4];
  char local_3f4;
  char local_3f3 [1007];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_40c);
  local_40c = (undefined4)(param_3);
  if (*(char *)(param_1 + 0x40c) != '\0') {
    pcVar7 = (char *)("http://purl.org/dc/elements/1.1/|title");
    pbVar4 = (byte *)(param_2);
    do {
      bVar1 = (byte)(*pbVar4);
      bVar8 = (bool)(bVar1 < (byte)*pcVar7);
      if ((char)(bVar1) != *pcVar7) {
LAB_11201b50:
        uVar5 = (uint)(-(uint)bVar8 | 1);
        goto LAB_11201b55;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar4[1]);
      bVar8 = (bool)(bVar1 < (byte)pcVar7[1]);
      if ((char)((bVar1)) != pcVar7[1]) goto LAB_11201b50;
      pbVar4 = (byte *)(pbVar4 + 2);
      pcVar7 = (char *)(pcVar7 + 2);
    } while (bVar1 != 0);
    uVar5 = (uint)(0);
LAB_11201b55:
    if (uVar5 == 0) {
      local_3f8[0] = (char)(*(char(*)[4])&*(uint *)((char * *)((uint)&s_x_rincon_cpcontainer__118abbf4) + 16));
      local_3f4 = (char)(s_x_rincon_cpcontainer__118abbf4[0x14]);
      local_408[0] = (char)(*(char(*)[4])&*(uint *)((char * *)((uint)&s_x_rincon_cpcontainer__118abbf4) + 0));
      acStack_404[0] = (char)(*(char(*)[4])&*(uint *)((char * *)((uint)&s_x_rincon_cpcontainer__118abbf4) + 4));
      acStack_400[0] = (char)(*(char(*)[4])&*(uint *)((char * *)((uint)&s_x_rincon_cpcontainer__118abbf4) + 8));
      acStack_3fc[0] = (char)(*(char(*)[4])&*(uint *)((char * *)((uint)&s_x_rincon_cpcontainer__118abbf4) + 12));
      thunk_FUN_1106a8d0();
      pcVar7 = (char *)((uint)&local_3f3);
      do {
        pcVar6 = (char *)(pcVar7);
        pcVar7 = (char *)(pcVar6 + 1);
      } while (*pcVar6 != (char)(('\0')));
      thunk_FUN_1106a8d0();
      uVar3 = (undefined4)(local_40c);
      do {
        cVar2 = (char)(*pcVar6);
        pcVar6 = (char *)(pcVar6 + 1);
      } while (cVar2 != '\0');
      thunk_FUN_11247e90();
      (**(code **)(**(int **)(param_1 + 0x408) + 0xc))((uint)&local_3f3);
      if (*(char *)(param_1 + 0x40e) != '\0') {
        (**(code **)(**(int **)(param_1 + 0x408) + 0x14)) ("x-rincon-cpcontainer:*:*:*",0xffffffff,&DAT_1186d2ee,&stack0xfffffbe8);
      }
      *(undefined1*)(param_1 + 0x40d) = (undefined1)(1);
      (**(code **)(**(int **)(param_1 + 0x408) + 0x20))(param_2,uVar3);
    }
    else {
      pcVar7 = (char *)("urn:schemas-upnp-org:metadata-1-0/upnp/|class");
      do {
        bVar1 = (byte)(*param_2);
        bVar8 = (bool)(bVar1 < (byte)*pcVar7);
        if ((char)(bVar1) != *pcVar7) {
LAB_11201c70:
          uVar5 = (uint)(-(uint)bVar8 | 1);
          goto LAB_11201c75;
        }
        if (bVar1 == 0) break;
        bVar1 = (byte)(param_2[1]);
        bVar8 = (bool)(bVar1 < (byte)pcVar7[1]);
        if ((char)((bVar1)) != pcVar7[1]) goto LAB_11201c70;
        param_2 = (byte *)(param_2 + 2);
        pcVar7 = (char *)(pcVar7 + 2);
      } while (bVar1 != 0);
      uVar5 = (uint)(0);
LAB_11201c75:
      if (uVar5 == 0) {
        thunk_FUN_1106a8d0();
      }
    }
  }
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1123b6a0; body size 281 bytes.
#line 1 "ENTRY_1123b6a0"

void FUN_1123b6a0(undefined1 *param_1,undefined4 *param_2)

{
 try {
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char local_2c [4];
  char local_28 [4];
  undefined1 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);


  local_2c[0] = (char)(*(char(*)[4])&*(uint *)((char * *)((uint)&s_service__119dd8ac) + 0));
  local_28[0] = (char)(*(char(*)[4])&*(uint *)((char * *)((uint)&s_service__119dd8ac) + 4));


  puVar3 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar3 = (undefined4 *)((undefined4 *)*param_2);
  }
  local_14 = (uint)(uVar1);
  iVar2 = (int)(thunk_FUN_10c66110(puVar3,param_2[4],0,(uint)&local_2c,8,uVar1), 0);
  puVar3 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar3 = (undefined4 *)((undefined4 *)*param_2);
  }
  iVar4 = (int)(thunk_FUN_10c66110(puVar3,param_2[4],0,&DAT_119dd8b8,2,uVar1), 0);
  if ((iVar2 == -1) || (iVar4 == -1)) {
    thunk_FUN_10118c40(param_2);
  }
  else {
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
    uVar1 = (uint)(iVar2 + 8);
    *param_1 = (undefined1)(0);
    if ((uint)param_2[4] < uVar1) {
                    
      thunk_FUN_106a5620();
    }
    uVar6 = (uint)(param_2[4] - uVar1);
    uVar5 = (uint)((iVar4 + -8) - iVar2);
    if (uVar6 < uVar5) {
      uVar5 = (uint)(uVar6);
    }
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)((undefined4 *)*param_2);
    }
    thunk_FUN_1012d130((int)param_2 + uVar1,uVar5);
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11247490; body size 876 bytes.
#line 1 "ENTRY_11247490"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_11247490(undefined4 param_1)

{
 try {
  char cVar1;
  char *pcVar2;
  byte *******pppppppbVar3;
  byte ************_Dst;
  byte ******ppppppbVar4;
  char *pcVar5;
  uint uVar6;
  byte ************ppppppppppppbVar7;
  uint local_90;
  byte *******local_84 [4];
  uint local_74;
  uint local_70;
  byte ***********local_6c;
  byte ******ppppppbStack_68;
  byte ******ppppppbStack_64;
  byte ******ppppppbStack_60;
  uint local_5c;
  uint uStack_58;
  byte **********local_54;
  byte **********ppppppppppbStack_50;
  byte **********ppppppppppbStack_4c;
  byte **********ppppppppppbStack_48;
  byte **********local_44;
  byte **********ppppppppppbStack_40;
  byte **********ppppppppppbStack_3c;
  byte **********ppppppppppbStack_38;
  byte **********local_34;
  byte **********ppppppppppbStack_30;
  byte **********ppppppppppbStack_2c;
  byte **********ppppppppppbStack_28;
  byte **********local_24;
  byte **********ppppppppppbStack_20;
  byte **********ppppppppppbStack_1c;
  byte **********ppppppppppbStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  pcVar2 = (char *)((char *)thunk_FUN_112a1350(param_1,"x-sonos-upnp-loopback-token",local_14), 0);


  local_84[0] = (byte *******)((byte *******)((uint)local_84[0] & 0xffffff00));
  pcVar5 = (char *)("");
  if ((char *)(pcVar2) != (char *)(0x0)) {
    pcVar5 = (char *)(pcVar2);
  }
  pcVar2 = (char *)(pcVar5);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar5,(int)pcVar2 - (int)(pcVar5 + 1));

  if ((*(int *)(*(int *)((int)((void *)__readfsdword(0x18)) + _tls_index * 4) + 0x104) < DAT_122f5670) && (thunk_FUN_1148ab00(&DAT_122f5670), DAT_122f5670 == -1)) {
    DAT_1212058c = (int)(0xf00000000);
    DAT_1212057c = (int)((byte ******)((uint)DAT_1212057c & 0xffffff00));
    _atexit(FUN_11862580);
    thunk_FUN_1148aaa4(&DAT_122f5670);
  }
  cVar1 = (char)(thunk_FUN_112a7f50(&DAT_122f5664), 0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  uVar6 = (uint)(DAT_1212058c);
  if (DAT_1212058c == 0) {
    thunk_FUN_113d2fe0(&local_54,0x40, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",0x3e);
    local_6c = (byte ***********)((byte ***********)thunk_FUN_1012cab0(0x50), 0);


    *local_6c = (byte **********)(local_54);
    local_6c[1] = (byte **********)(ppppppppppbStack_50);
    local_6c[2] = (byte **********)(ppppppppppbStack_4c);
    local_6c[3] = (byte **********)(ppppppppppbStack_48);
    local_6c[4] = (byte **********)(local_44);
    local_6c[5] = (byte **********)(ppppppppppbStack_40);
    local_6c[6] = (byte **********)(ppppppppppbStack_3c);
    local_6c[7] = (byte **********)(ppppppppppbStack_38);
    local_6c[8] = (byte **********)(local_34);
    local_6c[9] = (byte **********)(ppppppppppbStack_30);
    local_6c[10] = (byte **********)(ppppppppppbStack_2c);
    local_6c[0xb] = (byte **********)(ppppppppppbStack_28);
    local_6c[0xc] = (byte **********)(local_24);
    local_6c[0xd] = (byte **********)(ppppppppppbStack_20);
    local_6c[0xe] = (byte **********)(ppppppppppbStack_1c);
    local_6c[0xf] = (byte **********)(ppppppppppbStack_18);
    *(undefined1*)(local_6c + 0x10) = (undefined1)(0);
    if (0xf < DAT_12120590) {
      uVar6 = (uint)(DAT_12120590 + 1);
      ppppppbVar4 = (byte ******)(DAT_1212057c);
      if (0xfff < uVar6) {
        ppppppbVar4 = (byte ******)((byte ******)((int *)&DAT_1212057c)[-1]);
        uVar6 = (uint)(DAT_12120590 + 0x24);
        if (0x1f < (uint)((int)DAT_1212057c + (-4 - (int)ppppppbVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(ppppppbVar4,uVar6);
    }
    DAT_1212057c = (int)((byte ******)local_6c);
    pppppbRam12120580 = (char)(uintptr_t)(ppppppbStack_68);
    pppppbRam12120584 = (char)(uintptr_t)(ppppppbStack_64);
    pppppbRam12120588 = (char)(uintptr_t)(ppppppbStack_60);
    DAT_1212058c = (int)(((unsigned long long)(uStack_58) << 32 | (unsigned long long)(local_5c)));
    uVar6 = (uint)(local_5c);
  }
  pppppppbVar3 = (byte *******)(&DAT_1212057c);
  if (0xf < DAT_12120590) {
    pppppppbVar3 = (byte *******)((byte *******)DAT_1212057c);
  }
  if (uVar6 < 0x10) {
    _Dst = (byte ************)((byte ************)*pppppppbVar3);

    local_6c = (byte ***********)((byte ***********)_Dst);
    ppppppbStack_68 = (byte ******)(pppppppbVar3[1]);
    ppppppbStack_64 = (byte ******)(pppppppbVar3[2]);
    ppppppbStack_60 = (byte ******)(pppppppbVar3[3]);
  }
  else {
    local_90 = (uint)(uVar6 | 0xf);
    if (0x7fffffff < local_90) {

    }
    _Dst = (byte ************)((byte ************)thunk_FUN_1012cab0(local_90 + 1), 0);
    local_6c = (byte ***********)((byte ***********)_Dst);
    memcpy(_Dst,pppppppbVar3,uVar6 + 1);
  }
  uStack_58 = (uint)(local_90);
  local_5c = (uint)(uVar6);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(&DAT_122f5664);
  }
  pppppppbVar3 = (byte *******)((byte *******)(uint)&local_84);
  if (0xf < local_70) {
    pppppppbVar3 = (byte *******)(local_84[0]);
  }
  ppppppppppppbVar7 = (byte ************)(&local_6c);
  if (0xf < local_90) {
    ppppppppppppbVar7 = (byte ************)(_Dst);
  }
  if (uVar6 == local_74) {
    for (; (3 < uVar6 && ((byte ***********)(*ppppppppppppbVar7) == (byte ***********)*pppppppbVar3));
        ppppppppppppbVar7 = ppppppppppppbVar7 + 1) {
      pppppppbVar3 = (byte *******)(pppppppbVar3 + 1);
      uVar6 = (uint)(uVar6 - 4);
    }
  }
  if (0xf < local_90) {
    uVar6 = (uint)(local_90 + 1);
    ppppppppppppbVar7 = (byte ************)(_Dst);
    if (0xfff < uVar6) {
      ppppppppppppbVar7 = (byte ************)((byte ************)_Dst[-1]);
      uVar6 = (uint)(local_90 + 0x24);
      if ((char *)(0x1f) < (char *)((int)_Dst + (-4 - (int)ppppppppppppbVar7))) goto LAB_1124777a;
    }
    thunk_FUN_1148a50e(ppppppppppppbVar7,uVar6);
  }
  if (0xf < local_70) {
    uVar6 = (uint)(local_70 + 1);
    pppppppbVar3 = (byte *******)(local_84[0]);
    if (0xfff < uVar6) {
      pppppppbVar3 = (byte *******)((byte *******)local_84[0][-1]);
      uVar6 = (uint)(local_70 + 0x24);
      if (0x1f < (uint)((int)local_84[0] + (-4 - (int)pppppppbVar3))) {
LAB_1124777a:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pppppppbVar3,uVar6);
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11298db0; body size 1374 bytes.
#line 1 "ENTRY_11298db0"

bool __thiscall Recovered_Bulk::m_FUN_11298db0(undefined4 param_2,uint param_3,int param_4)
{
  undefined4 *param_1 = (undefined4 *)this; int stack0xfffffffc;
 try {
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  bool bVar12;
  longlong lVar13;
  char *pcVar14;
  undefined4 uVar15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  lVar13 = (longlong)((**(code **)(*(int *)param_1[1] + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);
  piVar11 = (int *)((int *)0x0);
  piVar1 = (int *)(param_1 + 2);
  for (piVar9 = (int *)((int *)param_1[2]);(int *)( piVar9) != (int *)(0x0); piVar9 = (int *)piVar9[1]) {
    iVar3 = (int)((**(code **)(*piVar9 + 8))(param_2,param_3), 0);
    if (iVar3 == 0) {
      iVar3 = (int)(*(int *)(param_4 + 0x34));
      uVar5 = (uint)(*(uint *)(iVar3 + 0x74));
      if (uVar5 != 0) {
        if ((int)((uVar5)) != piVar9[0x67]) goto LAB_11298fc1;
        piVar11 = (int *)(*(int **)(iVar3 + 0x70), 0);
        piVar8 = (int *)((int *)piVar9[0x66]);
        goto joined_r0x11298e92;
      }
      uVar5 = (uint)(*(uint *)(iVar3 + 0x14));
      if ((uVar5 == 0) || ((int)((uVar5)) != piVar9[0x4f])) goto LAB_11298fc1;
      piVar8 = (int *)((int *)(iVar3 + 0x18));
      piVar11 = (int *)(piVar9 + 0x50);
      goto joined_r0x11298f51;
    }
    if (param_1[4] == param_1[9]) {
      if ((int *)(piVar11) != (int *)(0x0)) {
        if ((piVar11[0x47] < piVar9[0x47]) ||
           ((piVar11[0x47] <= piVar9[0x47] && ((uint)piVar11[0x46] <= (int)piVar9[0x46])))) goto LAB_11298e4c;
      }
      piVar11 = (int *)(piVar9);
    }
    else if (iVar3 < 0) break;
LAB_11298e4c:;}
  if ((uint)param_1[4] < (undefined4)param_1[9]) {
    uVar5 = (uint)(0);
    if (param_1[10] != 0) {
      do {
        uVar7 = (uint)(0);
        piVar9 = (int *)((int *)(param_1[uVar5 + 5] + 0xc));
        do {
          if (*piVar9 == (int)((0))) {
            piVar9 = (int *)((int *)(uVar7 * 0x300 + param_1[uVar5 + 5]));
            goto LAB_112990fc;
          }
          uVar7 = (uint)(uVar7 + 1);
          piVar9 = (int *)(piVar9 + 0xc0);
        } while (uVar7 < 8);
        uVar5 = (uint)(uVar5 + 1);
      } while (uVar5 < (uint)param_1[10]);
    }
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x1804), 0);

    if ((undefined4 *)(puVar4) == (undefined4 *)(0x0)) {
      puVar10 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      puVar10 = (undefined4 *)(puVar4 + 1);
      *puVar4 = (undefined4)(8);
      _eh_vector_constructor_iterator_
                (puVar10,0x300,8,(_func_void_void_ptr *)LAB_10068c3c, (_func_void_void_ptr *)LAB_10070eaf);
    }

    param_1[param_1[10] + 5] = (undefined4)(uintptr_t)(puVar10);
    piVar9 = (int *)((int *)param_1[param_1[10] + 5]);
    param_1[10] = (undefined4)(param_1[10] + 1);
LAB_112990fc:
    if ((int *)(piVar9) == (int *)(0x0)) goto LAB_11299104;
LAB_1129919d:
    iVar3 = (int)(thunk_FUN_113dc730(param_4,piVar9 + 0x4a), 0);
    if (iVar3 == 0) {
      *(longlong*)(piVar9 + 0x46) = (longlong)(lVar13);
      *(short*)(piVar9 + 4) = (short)((short)param_3);
      thunk_FUN_1145c250((int)piVar9 + 0x12,param_2,0x100);
      uVar5 = (uint)(*(uint *)(*(int *)(param_4 + 0x34) + 0x78));
      if (uVar5 == 0) {
        uVar5 = (uint)(0x15180);
      }
      *(ulonglong*)(piVar9 + 0x48) = (ulonglong)(lVar13 + (ulonglong)uVar5);
      if (piVar9[3] == 0) {
        iVar3 = (int)(*piVar1);
        if (iVar3 == 0) {
          *piVar1 = (int)((int)piVar9);
          param_1[3] = (undefined4)(piVar9);
        }
        else {
          do {
            iVar6 = (int)((**(code **)(*piVar9 + 4))(iVar3), 0);
            if (-1 < iVar6) {
              piVar9[2] = (int)(*(int *)(iVar3 + 8));
              *(int**)(iVar3 + 8) = (int *)(piVar9);
              piVar9[1] = (int)(iVar3);
              if (piVar9[2] == 0) {
                *piVar1 = (int)((int)piVar9);
              }
              else {
                *(int**)(piVar9[2] + 4) = (int *)(piVar9);
              }
              goto LAB_112992cc;
            }
            iVar3 = (int)(*(int *)(iVar3 + 4));
          } while (iVar3 != 0);
          if (*piVar1 == (int)((0))) {
            *piVar1 = (int)((int)piVar9);
            param_1[3] = (undefined4)(piVar9);
          }
          else {
            piVar9[2] = (int)(param_1[3]);
            *(int**)(param_1[3] + 4) = (int *)(piVar9);
            param_1[3] = (undefined4)(piVar9);
          }
        }
LAB_112992cc:
        param_1[4] = (undefined4)(param_1[4] + 1);
        piVar9[3] = (int)((int)piVar1);
        thunk_FUN_112b0270(&DAT_119df9ec,8,"%s:%hu cache stored (%s)",param_2,param_3 & 0xffff, *param_1);
      }
      else {
        thunk_FUN_112b0270(&DAT_119df9ec,8,"%s:%hu cache insert failed (%s)",param_2, param_3 & 0xffff,*param_1);
        *(undefined2*)(piVar9 + 4) = (undefined2)(0);
        piVar9[0x46] = (int)(0);
        piVar9[0x47] = (int)(0);
        piVar9[0x48] = (int)(0);
        piVar9[0x49] = (int)(0);
        *(undefined1*)((int)piVar9 + 0x12) = (undefined1)(0);
        thunk_FUN_113dde70(piVar9 + 0x4a);
        piVar9 = (int *)((int *)0x0);
      }
    }
    else {
      thunk_FUN_112b0270(&DAT_119df9ec,4,"get session failed");
    }
  }
  else {
    piVar9 = (int *)((int *)0x0);
LAB_11299104:
    if (((int *)(piVar11) != (int *)(0x0)) && ((int *)piVar11[3] == (int *)((piVar1)))) {
      if (piVar11[1] == 0) {
        param_1[3] = (undefined4)(piVar11[2]);
      }
      else {
        *(int*)(piVar11[1] + 8) = (int)(piVar11[2]);
      }
      if (piVar11[2] == 0) {
        *piVar1 = (int)(piVar11[1]);
      }
      else {
        *(int*)(piVar11[2] + 4) = (int)(piVar11[1]);
      }
      param_1[4] = (undefined4)(param_1[4] + -1);
      piVar11[2] = (int)(0);
      piVar11[1] = (int)(0);
      piVar11[3] = (int)(0);
      thunk_FUN_112b0270(&DAT_119df9ec,8,"cache evicted [%s:%hu] (%s)", (undefined1 *)((int)piVar11 + 0x12),(short)piVar11[4],*param_1);
      *(undefined2*)(piVar11 + 4) = (undefined2)(0);
      piVar11[0x46] = (int)(0);
      piVar11[0x47] = (int)(0);
      piVar11[0x48] = (int)(0);
      piVar11[0x49] = (int)(0);
      *(undefined1*)((int)piVar11 + 0x12) = (undefined1)(0);
      thunk_FUN_113dde70(piVar11 + 0x4a);
      piVar9 = (int *)(piVar11);
      goto LAB_1129919d;
    }
  }
  bVar12 = (bool)((int *)(piVar9) == (int *)(0x0));
LAB_112992f7:

  return (bool)(!bVar12);
joined_r0x11298e92:
  uVar7 = (uint)(uVar5 - 4);
  if (uVar5 < 4) goto LAB_11298ea5;
  if (*piVar11 != (int)(*(piVar8))) goto LAB_11298eaa;
  piVar11 = (int *)(piVar11 + 1);
  piVar8 = (int *)(piVar8 + 1);
  uVar5 = (uint)(uVar7);
  goto joined_r0x11298e92;
LAB_11298ea5:
  if (uVar7 != 0xfffffffc) {
LAB_11298eaa:
    if (((char)*piVar11 != (char)*piVar8) ||
       ((uVar7 != 0xfffffffd &&
        ((*(char *)(((int)piVar11 + 1)) != *(char *)((int)piVar8 + 1) ||
         ((uVar7 != 0xfffffffe &&
          ((*(char *)(((int)piVar11 + 2)) != *(char *)((int)piVar8 + 2) ||
           ((uVar7 != 0xffffffff && (*(char *)(((int)piVar11 + 3)) != *(char *)((int)piVar8 + 3))))))) )))))) goto LAB_11298fc1;
  }
  *(longlong*)(piVar9 + 0x46) = (longlong)(lVar13);
  uVar15 = (undefined4)(*param_1);
  pcVar14 = (char *)("%s:%hu cache store hit (%s): ticket match");
  goto LAB_11298f0d;
joined_r0x11298f51:
  uVar7 = (uint)(uVar5 - 4);
  if (uVar5 < 4) goto LAB_11298f64;
  if (*piVar8 != (int)(*(piVar11))) goto LAB_11298f69;
  piVar8 = (int *)(piVar8 + 1);
  piVar11 = (int *)(piVar11 + 1);
  uVar5 = (uint)(uVar7);
  goto joined_r0x11298f51;
LAB_11298f64:
  if (uVar7 != 0xfffffffc) {
LAB_11298f69:
    if (((char)*piVar8 != (char)*piVar11) ||
       ((uVar7 != 0xfffffffd &&
        ((*(char *)(((int)piVar8 + 1)) != *(char *)((int)piVar11 + 1) ||
         ((uVar7 != 0xfffffffe &&
          ((*(char *)(((int)piVar8 + 2)) != *(char *)((int)piVar11 + 2) ||
           ((uVar7 != 0xffffffff && (*(char *)(((int)piVar8 + 3)) != *(char *)((int)piVar11 + 3))))))) )))))) {
LAB_11298fc1:
      cVar2 = (char)(thunk_FUN_11299630(lVar13,param_4), 0);
      if (cVar2 != '\0') {

        return (bool)(true);
      }
      piVar9[0x46] = (int)(0);
      piVar9[0x47] = (int)(0);
      *(undefined2*)(piVar9 + 4) = (undefined2)(0);
      piVar9[0x48] = (int)(0);
      piVar9[0x49] = (int)(0);
      *(undefined1*)((int)piVar9 + 0x12) = (undefined1)(0);
      thunk_FUN_113dde70(piVar9 + 0x4a);
      if ((int *)piVar9[3] == (int *)((piVar1))) {
        if (piVar9[1] == 0) {
          param_1[3] = (undefined4)(piVar9[2]);
        }
        else {
          *(int*)(piVar9[1] + 8) = (int)(piVar9[2]);
        }
        if (piVar9[2] == 0) {
          *piVar1 = (int)(piVar9[1]);
        }
        else {
          *(int*)(piVar9[2] + 4) = (int)(piVar9[1]);
        }
        param_1[4] = (undefined4)(param_1[4] + -1);
        piVar9[2] = (int)(0);
        piVar9[1] = (int)(0);
        piVar9[3] = (int)(0);
      }
      bVar12 = (bool)(true);
      if ((int *)(piVar9) == (int *)(0x0)) goto LAB_112992f7;
      goto LAB_1129919d;
    }
  }
  *(longlong*)(piVar9 + 0x46) = (longlong)(lVar13);
  uVar15 = (undefined4)(*param_1);
  pcVar14 = (char *)("%s%hu cache store hit (%s): id match");
LAB_11298f0d:
  thunk_FUN_112b0270(&DAT_119df9ec,8,pcVar14,param_2,param_3 & 0xffff,uVar15);

  return (bool)(true);

 } catch (...) { }
}


// Reference entry 112a8d70; body size 585 bytes.
#line 1 "ENTRY_112a8d70"

void FUN_112a8d70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *_Memory;
  LSTATUS LVar2;
  HRESULT HVar3;
  LPCOLESTR lpWideCharStr;
  int *piVar4;
  undefined4 uVar5;
  CLSID *pCVar6;
  CLSID *pCVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  code *pcVar11;
  code *pcVar12;
  bool bVar13;
  int iStack_a4;
  size_t local_a0;
  DWORD DStack_9c;
  HKEY apHStack_98 [2];
  undefined4 *local_90;
  HKEY__ local_8c;
  int iStack_88;
  int local_84;
  int iStack_80;
  undefined4 uStack_7c;
  CLSID CStack_78;
  CLSID CStack_68;
  OLECHAR aOStack_58 [42];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&iStack_a4);
  local_90 = (undefined4 *)(param_1);
  (*(struct __RFLD *)&local_8c).unused = (int)(param_2);
  local_84 = (int)(0);
  iStack_80 = (int)(0);
  uStack_7c = (undefined4)(0);
  (*(struct __RFLD *)&CStack_78).Data1 = (int)(0);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  if ((undefined4 *)(param_3) != (undefined4 *)(0x0)) {
    *param_3 = (undefined4)(0);
    param_3[1] = (undefined4)(0);
    param_3[2] = (undefined4)(0);
    param_3[3] = (undefined4)(0);
  }
  thunk_FUN_1145c250(param_2,&DAT_118da62c,0x10);
  iVar1 = (int)(GetNumberOfInterfaces(&local_a0), 0);
  pcVar11 = (code *)(malloc_exref);
  if (iVar1 == 0) {
    local_a0 = (size_t)(iStack_a4 * 0x288);
    _Memory = (int *)(malloc( (void *)(local_a0) ), 0);
    if ((int *)(_Memory) != (int *)(0x0)) {
      iVar1 = (int)(GetAdaptersInfo(_Memory,&local_a0), 0);
      if (iVar1 == 0) {
        LVar2 = (LSTATUS)(RegOpenKeyExA((HKEY)0x80000002,"SOFTWARE\\Sonos\\DesktopController",0,0x20019, (uint)&apHStack_98), 0);
        piVar10 = (int *)(_Memory);
        pcVar12 = (code *)(free_exref);
        if (LVar2 == (LSTATUS)(0)) {
          DStack_9c = (DWORD)(0x4e);
          LVar2 = (LSTATUS)(RegQueryValueExW(apHStack_98[0],L"Interface",(LPDWORD)0x0,(LPDWORD)&local_8c, (LPBYTE)(uint)&aOStack_58,&DStack_9c), 0);
          pcVar12 = (code *)(free_exref);
          if ((LVar2 == (LSTATUS)(0)) &&
             (HVar3 = (HRESULT)(CLSIDFromString((uint)&aOStack_58,&CStack_68), 0), piVar8 = (int *)(_Memory), pcVar12 = (code *)(free_exref), HVar3 == (HRESULT)(0))) {
            do {
              iVar1 = (int)(MultiByteToWideChar(0,0,(LPCSTR)(piVar8 + 2),-1,(LPWSTR)0x0,0), 0);
              lpWideCharStr = (LPCOLESTR)((LPCOLESTR)(*pcVar11)(iVar1 * 2), 0);
              MultiByteToWideChar(0,0,(LPCSTR)(piVar8 + 2),-1,lpWideCharStr,iVar1);
              HVar3 = (HRESULT)(CLSIDFromString(lpWideCharStr,&CStack_78), 0);
              pcVar12 = (code *)(free_exref);
              free(lpWideCharStr);
              if (HVar3 == (HRESULT)(0)) {
                pCVar6 = (CLSID *)(&CStack_78);
                uVar9 = (uint)(0xc);
                pCVar7 = (CLSID *)(&CStack_68);
                while (pCVar6->Data1 == pCVar7->Data1) {
                  pCVar6 = (CLSID *)((CLSID * *)((struct __RFLD *)(uintptr_t)(((uint)&pCVar6)))->Data2);
                  pCVar7 = (CLSID *)((CLSID * *)((struct __RFLD *)(uintptr_t)(((uint)&pCVar7)))->Data2);
                  bVar13 = (bool)(uVar9 < 4);
                  uVar9 = (uint)(uVar9 - 4);
                  if (bVar13) {
                    if ((int *)(piVar8) != (int *)(0x0)) goto LAB_112a8f50;
                    goto LAB_112a8f35;
                  }
                }
              }
              piVar8 = (int *)((int *)*piVar8);
              pcVar11 = (code *)(malloc_exref);
            } while ((int *)(piVar8) != (int *)(0x0));
          }
        }
LAB_112a8f35:
        do {
          piVar4 = (int *)((int *)thunk_FUN_112a8530(piVar10), 0);
          if ((int *)(piVar4) != (int *)(0x0)) goto LAB_112a8f63;
          piVar10 = (int *)((int *)*piVar10);
          piVar8 = (int *)(_Memory);
        } while ((int *)(piVar10) != (int *)(0x0));
LAB_112a8f50:
        piVar4 = (int *)((int *)thunk_FUN_112a8530(piVar8), 0);
        if ((int *)(piVar4) == (int *)(0x0)) {
          piVar4 = (int *)(piVar8 + 0x6b);
        }
LAB_112a8f63:
        iVar1 = (int)(Ordinal_11(piVar4 + 1), 0);
        iStack_88 = (int)(iVar1);
        (*pcVar12)(_Memory);
        ((struct __RFLD *)(apHStack_98[0]))->unused = (*(struct __RFLD *)&local_8c).unused;
        ((struct __RFLD *)(apHStack_98[0]))[1].unused = iStack_88;
        ((struct __RFLD *)(apHStack_98[0]))[2].unused = local_84;
        ((struct __RFLD *)(apHStack_98[0]))[3].unused = iStack_80;
        uVar5 = (undefined4)(Ordinal_12(iVar1,0x10), 0);
        thunk_FUN_1145c250(apHStack_98[0],uVar5);
        thunk_FUN_1148ac28();
        return;
      }
      free(_Memory);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112b41c0; body size 1166 bytes.
#line 1 "ENTRY_112b41c0"

void FUN_112b41c0(int *param_1)

{ int stack0xfffffeac; int stack0xfffffec0; int stack0xfffffec4; int stack0xfffffed8;
 try {
  char cVar1;
  int iVar2;
  LSTATUS LVar3;
  char *pcVar4;
  char *pcVar5;
  int *dwIndex;
  char *pcVar6;
  code *pcVar7;
  HKEY unaff_EDI;
  code *pcVar8;
  char *_Source;
  HKEY pHStack_14c;
  HKEY pHStack_148;
  int *piStack_144;
  undefined1 *puVar9;
  HKEY hKey;
  HKEY__ *pHVar10;
  undefined4 local_118;
  HKEY__ local_114 [68];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_118);
  dwIndex = (int *)((int *)0x0);

  *param_1 = (int)(0);
  iVar2 = (int)(thunk_FUN_112ba570(), 0);
  pcVar7 = (code *)(RegOpenKeyExA_exref);
  if (iVar2 == 3) {
    LVar3 = (LSTATUS)(RegOpenKeyExA((HKEY)0x80000002,"System\\CurrentControlSet\\Services\\Tcpip\\Parameters", 0,0x20019,(PHKEY)(uint)&local_114), 0);
    pcVar8 = (code *)(RegCloseKey_exref);
    if (LVar3 == (LSTATUS)(0)) {
      FUN_112b4020();
      piStack_144 = (int *)((int *)0x112b4255);
      iVar2 = (int)(FUN_112b4020(), 0);
      if (iVar2 != 0) {
        FUN_112b2930();
        (*(code *)PTR_free_12121e64)();

        pcVar7 = (code *)(RegOpenKeyExA_exref);
      }
      RegCloseKey((HKEY)(*(struct __RFLD *)(uintptr_t)(local_114[0])).unused);
    }
    pHVar10 = (HKEY__ *)((uint)&local_114);
    hKey = (HKEY)((HKEY)0x80000002);
    iVar2 = (int)((*pcVar7)(), 0);
    if (iVar2 == 0) {
      piStack_144 = (int *)((int *)0x119e970c);
      pHStack_14c = (HKEY)((HKEY)0x112b42b0);
      pHStack_148 = (HKEY)(unaff_EDI);
      iVar2 = (int)(FUN_112b4020(), 0);
      if (iVar2 != 0) {
        piStack_144 = (int *)(param_1);
        pHStack_148 = (HKEY)((HKEY)0x112b42c2);
        FUN_112b2930();
        pHStack_14c = (HKEY)((HKEY)0x112b42c9);
        pHStack_148 = (HKEY)(pHVar10);
        (*(code *)PTR_free_12121e64)();
        pcVar7 = (code *)(RegOpenKeyExA_exref);
      }
      piStack_144 = (int *)((int *)0x112b42dc);
      RegCloseKey(unaff_EDI);
    }
    puVar9 = (undefined1 *)(&stack0xfffffed8);
    piStack_144 = (int *)((int *)0x20019);
    pHStack_148 = (HKEY)((HKEY)0x0);
    pHStack_14c = (HKEY)((HKEY)0x119e9760);
    iVar2 = (int)((*pcVar7)(), 0);
    if (iVar2 == 0) {
      iVar2 = (int)(FUN_112b4020(hKey,"PrimaryDNSSuffix"), 0);
      if (iVar2 != 0) {
        FUN_112b2930(param_1);
        (*(code *)PTR_free_12121e64)(puVar9);
        pcVar7 = (code *)(RegOpenKeyExA_exref);
      }
      RegCloseKey(hKey);
    }
    _Source = (char *)(&stack0xfffffec4);
    iVar2 = (int)((*pcVar7)(0x80000002, "System\\CurrentControlSet\\Services\\Tcpip\\Parameters\\Interfaces",0,0x20019
                     ), 0);
    if (iVar2 == 0) {
      pHStack_148 = (HKEY)((HKEY)0x100);
      iVar2 = (int)(RegEnumKeyExA((HKEY)0x80000002,0,&stack0xfffffec0,(LPDWORD)&pHStack_148,(LPDWORD)0x0, (LPSTR)0x0,(LPDWORD)0x0,(PFILETIME)0x0), 0);
      while (iVar2 == 0) {
        piStack_144 = (int *)((int *)((int)dwIndex + 1U));
        iVar2 = (int)((*pcVar7)(0x80000002,&stack0xfffffec0,0,1,&pHStack_14c), 0);
        dwIndex = (int *)((int *)((int)dwIndex + 1U));
        if (iVar2 == 0) {
          iVar2 = (int)(FUN_112b4020(pHStack_14c,"SearchList",&stack0xfffffeac), 0);
          if (iVar2 != 0) {
            pcVar6 = (char *)(_Source);
            do {
              cVar1 = (char)(*pcVar6);
              pcVar6 = (char *)(pcVar6 + 1);
            } while (cVar1 != '\0');
            pcVar4 = (char *)((char *)*param_1);
            if ((char *)(pcVar4) == (char *)(0x0)) {
              pcVar5 = (char *)((char *)0x1);
            }
            else {
              pcVar5 = (char *)(pcVar4);
              do {
                cVar1 = (char)(*pcVar5);
                pcVar5 = (char *)(pcVar5 + 1);
              } while (cVar1 != '\0');
              pcVar5 = (char *)(pcVar5 + (2 - (int)(pcVar4 + 1)));
            }
            pcVar4 = (char *)((char *)(*(code *)PTR_realloc_12121e60) (pcVar4,pcVar5 + ((int)pcVar6 - (int)(_Source + 1))), 0);
            if ((char *)(pcVar4) != (char *)(0x0)) {
              if (*param_1 == (int)((0))) {
                *pcVar4 = (char)('\0');
              }
              *param_1 = (int)((int)pcVar4);
              pcVar5 = (char *)(pcVar4);
              do {
                cVar1 = (char)(*pcVar5);
                pcVar5 = (char *)(pcVar5 + 1);
              } while (cVar1 != '\0');
              if ((char *)((pcVar5)) != (char *)(pcVar4) + 1) {
                pcVar4 = (char *)(pcVar4 + -1);
                do {
                  pcVar5 = (char *)(pcVar4 + 1);
                  pcVar4 = (char *)(pcVar4 + 1);
                } while (*pcVar5 != (char)(('\0')));
                *(undefined2*)pcVar4 = (undefined2)((char *)(DAT_118850bc));
                pcVar4 = (char *)((char *)*param_1);
              }
              strncat(pcVar4,_Source,(int)pcVar6 - (int)(_Source + 1));
            }
            (*(code *)PTR_free_12121e64)(_Source);
            _Source = (char *)((char *)0x0);
          }
          iVar2 = (int)(FUN_112b4020(pHStack_14c,"Domain",&stack0xfffffeac), 0);
          if (iVar2 != 0) {
            pcVar6 = (char *)(_Source);
            do {
              cVar1 = (char)(*pcVar6);
              pcVar6 = (char *)(pcVar6 + 1);
            } while (cVar1 != '\0');
            pcVar4 = (char *)((char *)*param_1);
            if ((char *)(pcVar4) == (char *)(0x0)) {
              pcVar5 = (char *)((char *)0x1);
            }
            else {
              pcVar5 = (char *)(pcVar4);
              do {
                cVar1 = (char)(*pcVar5);
                pcVar5 = (char *)(pcVar5 + 1);
              } while (cVar1 != '\0');
              pcVar5 = (char *)(pcVar5 + (2 - (int)(pcVar4 + 1)));
            }
            pcVar4 = (char *)((char *)(*(code *)PTR_realloc_12121e60) (pcVar4,pcVar5 + ((int)pcVar6 - (int)(_Source + 1))), 0);
            if ((char *)(pcVar4) != (char *)(0x0)) {
              if (*param_1 == (int)((0))) {
                *pcVar4 = (char)('\0');
              }
              *param_1 = (int)((int)pcVar4);
              pcVar5 = (char *)(pcVar4);
              do {
                cVar1 = (char)(*pcVar5);
                pcVar5 = (char *)(pcVar5 + 1);
              } while (cVar1 != '\0');
              if ((char *)((pcVar5)) != (char *)(pcVar4) + 1) {
                pcVar4 = (char *)(pcVar4 + -1);
                do {
                  pcVar5 = (char *)(pcVar4 + 1);
                  pcVar4 = (char *)(pcVar4 + 1);
                } while (*pcVar5 != (char)(('\0')));
                *(undefined2*)pcVar4 = (undefined2)((char *)(DAT_118850bc));
                pcVar4 = (char *)((char *)*param_1);
              }
              strncat(pcVar4,_Source,(int)pcVar6 - (int)(_Source + 1));
            }
            (*(code *)PTR_free_12121e64)(_Source);
            _Source = (char *)((char *)0x0);
          }
          iVar2 = (int)(FUN_112b4020(pHStack_14c,"DhcpDomain",&stack0xfffffeac), 0);
          if (iVar2 != 0) {
            pcVar6 = (char *)(_Source);
            do {
              cVar1 = (char)(*pcVar6);
              pcVar6 = (char *)(pcVar6 + 1);
            } while (cVar1 != '\0');
            pcVar4 = (char *)((char *)*param_1);
            if ((char *)(pcVar4) == (char *)(0x0)) {
              pcVar5 = (char *)((char *)0x1);
            }
            else {
              pcVar5 = (char *)(pcVar4);
              do {
                cVar1 = (char)(*pcVar5);
                pcVar5 = (char *)(pcVar5 + 1);
              } while (cVar1 != '\0');
              pcVar5 = (char *)(pcVar5 + (2 - (int)(pcVar4 + 1)));
            }
            pcVar4 = (char *)((char *)(*(code *)PTR_realloc_12121e60) (pcVar4,pcVar5 + ((int)pcVar6 - (int)(_Source + 1))), 0);
            if ((char *)(pcVar4) != (char *)(0x0)) {
              if (*param_1 == (int)((0))) {
                *pcVar4 = (char)('\0');
              }
              *param_1 = (int)((int)pcVar4);
              pcVar5 = (char *)(pcVar4);
              do {
                cVar1 = (char)(*pcVar5);
                pcVar5 = (char *)(pcVar5 + 1);
              } while (cVar1 != '\0');
              if ((char *)((pcVar5)) != (char *)(pcVar4) + 1) {
                pcVar4 = (char *)(pcVar4 + -1);
                do {
                  pcVar5 = (char *)(pcVar4 + 1);
                  pcVar4 = (char *)(pcVar4 + 1);
                } while (*pcVar5 != (char)(('\0')));
                *(undefined2*)pcVar4 = (undefined2)((char *)(DAT_118850bc));
                pcVar4 = (char *)((char *)*param_1);
              }
              strncat(pcVar4,_Source,(int)pcVar6 - (int)(_Source + 1));
            }
            (*(code *)PTR_free_12121e64)(_Source);
            _Source = (char *)((char *)0x0);
          }
          pcVar8 = (code *)(RegCloseKey_exref);
          RegCloseKey(pHStack_14c);
          dwIndex = (int *)(piStack_144);
          pcVar7 = (code *)(RegOpenKeyExA_exref);
        }
        pHStack_148 = (HKEY)((HKEY)0x100);
        iVar2 = (int)(RegEnumKeyExA((HKEY)0x80000002,(DWORD)dwIndex,&stack0xfffffec0,(LPDWORD)&pHStack_148
                              ,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,(PFILETIME)0x0), 0);
      }
      (*pcVar8)(0x80000002);
    }
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112b7810; body size 273 bytes.
#line 1 "ENTRY_112b7810"

void FUN_112b7810(int param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_c;
  
  iVar6 = (int)(param_2 * 0x58 + *(int *)(param_1 + 0x74));
  thunk_FUN_112bb1d0(param_1,iVar6);
  thunk_FUN_112ba6c0(&local_24);
  puVar7 = (undefined8 *)((undefined8 *)(iVar6 + 0x44));
  iVar4 = (int)(thunk_FUN_112ba720(&local_24), 0);
  iVar5 = (int)(thunk_FUN_112ba720(puVar7), 0);
  uVar1 = (undefined8)(*puVar7);
  uVar2 = (undefined4)(*(undefined4 *)(iVar6 + 0x4c));
  local_18 = (undefined8)(local_24);
  uVar3 = (undefined8)(local_18);
  local_c = (undefined8)(uVar1);
  if (iVar4 == 0) {
    *puVar7 = (undefined8)(local_24);
    *(undefined4*)(iVar6 + 0x4c) = (undefined4)(local_1c);
    *(uint*)((char *)&local_18 + 4) = (uint)((int *)((ulonglong)local_24 >> 0x20));
    **(uint**)((char *)&local_18 + 4) = (uint)((int)puVar7);
    *(uint*)((char *)&local_18 + 0) = (uint)((int)local_24);
    *(undefined8**)((int)local_18 + 4) = (undefined8 *)(puVar7);
    local_18 = (undefined8)(uVar3);
  }
  else {
    thunk_FUN_112ba6c0(puVar7);
  }
  if (iVar5 == 0) {
    **(uint**)((char *)&local_c + 4) = (uint)((int)&local_24);
    *(undefined8**)((int)local_c + 4) = (undefined8 *)(&local_24);
    local_24 = (undefined8)(uVar1);
    local_1c = (undefined4)(uVar2);
  }
  else {
    thunk_FUN_112ba6c0(&local_24);
  }
  puVar7 = (undefined8 *)(*(uint *)((char *)&local_24 + 4));
  if ((uintptr_t)(*(int *)(uintptr_t)((char *)&local_24 + 4))!= (uintptr_t)((uint *)&local_24)) {
    do {
      iVar4 = (int)(*(int *)(puVar7 + 1));
      puVar7 = (undefined8 *)(*(undefined8 **)((int)puVar7 + 4), 0);
      if (1 < *(int *)(param_1 + 0x78)) {
        *(undefined4*)(*(int *)(iVar4 + 0x5c) + param_2 * 8) = (undefined4)(1);
      }
      FUN_112b7970(param_1,iVar4,param_3);
    } while ((undefined8 *)(puVar7) != (undefined8 *)(&local_24));
  }
  return;
}


// Reference entry 112b81d0; body size 313 bytes.
#line 1 "ENTRY_112b81d0"

void FUN_112b81d0(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_c;
  
  iVar3 = (int)(param_1);
  iVar7 = (int)(0);
  if (0 < *(int *)(param_1 + 0x78)) {
    param_1 = (int)(0);
    do {
      iVar8 = (int)(param_1 + *(int *)(iVar3 + 0x74));
      if (*(int *)(iVar8 + 0x54) != 0) {
        thunk_FUN_112bb1d0(iVar3,iVar8);
        thunk_FUN_112ba6c0(&local_24);
        puVar9 = (undefined8 *)((undefined8 *)(iVar8 + 0x44));
        iVar5 = (int)(thunk_FUN_112ba720(&local_24), 0);
        iVar6 = (int)(thunk_FUN_112ba720(puVar9), 0);
        uVar1 = (undefined8)(*puVar9);
        uVar2 = (undefined4)(*(undefined4 *)(iVar8 + 0x4c));
        local_18 = (undefined8)(local_24);
        uVar4 = (undefined8)(local_18);
        local_c = (undefined8)(uVar1);
        if (iVar5 == 0) {
          *puVar9 = (undefined8)(local_24);
          *(undefined4*)(iVar8 + 0x4c) = (undefined4)(local_1c);
          *(uint*)((char *)&local_18 + 4) = (uint)((undefined4 *)((ulonglong)local_24 >> 0x20));
          **(uint**)((char *)&local_18 + 4) = (uint)(puVar9);
          *(uint*)((char *)&local_18 + 0) = (uint)((int)local_24);
          *(undefined8**)((int)local_18 + 4) = (undefined8 *)(puVar9);
          local_18 = (undefined8)(uVar4);
        }
        else {
          thunk_FUN_112ba6c0(puVar9);
        }
        if (iVar6 == 0) {
          **(uint**)((char *)&local_c + 4) = (uint)((int)&local_24);
          *(undefined8**)((int)local_c + 4) = (undefined8 *)(&local_24);
          local_24 = (undefined8)(uVar1);
          local_1c = (undefined4)(uVar2);
        }
        else {
          thunk_FUN_112ba6c0(&local_24);
        }
        puVar9 = (undefined8 *)(*(uint *)((char *)&local_24 + 4));
        if ((uintptr_t)(*(int *)(uintptr_t)((char *)&local_24 + 4))!= (uintptr_t)((uint *)&local_24)) {
          do {
            iVar8 = (int)(*(int *)(puVar9 + 1));
            puVar9 = (undefined8 *)(*(undefined8 **)((int)puVar9 + 4), 0);
            if (1 < *(int *)(iVar3 + 0x78)) {
              *(undefined4*)(*(int *)(iVar8 + 0x5c) + iVar7 * 8) = (undefined4)(1);
            }
            FUN_112b7970(iVar3,iVar8,param_2);
          } while ((undefined8 *)(puVar9) != (undefined8 *)(&local_24));
        }
      }
      iVar7 = (int)(iVar7 + 1);
      param_1 = (int)(param_1 + 0x58);
    } while ((int)(iVar7) < *(int *)(iVar3 + 0x78));
  }
  return;
}


// Reference entry 112f5bb0; body size 113 bytes.
#line 1 "ENTRY_112f5bb0"

LPCRITICAL_SECTION FUN_112f5bb0(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((param_1 != 0x0) && (param_1 != (PRTL_CRITICAL_SECTION_DEBUG)0x1) ) {
    return (LPCRITICAL_SECTION)((LPCRITICAL_SECTION)(&DAT_121220e8 + (int)&((__RFLD *)&param_1)[-1].SpareWORD * 0x1c));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((LPCRITICAL_SECTION)FUN_11358b90(0x1c,0), 0);
  if (lpCriticalSection != 0x0) {
    ((struct __RFLD *)(lpCriticalSection))->DebugInfo = (int)((PRTL_CRITICAL_SECTION_DEBUG)0x0);
    ((struct __RFLD *)(lpCriticalSection))->LockCount = (int)(0);
    ((struct __RFLD *)(lpCriticalSection))->RecursionCount = (int)(0);
    ((struct __RFLD *)(lpCriticalSection))->OwningThread = (int)((HANDLE)0x0);
    ((struct __RFLD *)(lpCriticalSection))->LockSemaphore = (int)((HANDLE)0x0);
    ((struct __RFLD *)(lpCriticalSection))->SpinCount = (int)(0);
    ((__RFLD *)&lpCriticalSection)[1].DebugInfo = (int)(uintptr_t)(param_1);
    InitializeCriticalSection(lpCriticalSection);
  }
  return (LPCRITICAL_SECTION)(lpCriticalSection);
}


// Reference entry 112fef90; body size 453 bytes.
#line 1 "ENTRY_112fef90"

void FUN_112fef90(undefined4 param_1,size_t param_2,void *param_3)

{ int stack0xffffffe8; int stack0xffffffe9; int stack0xffffffea; int stack0xffffffeb;
 try {
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int iVar4;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_14);
  memset(param_3,0,param_2);
  (*(code *)PTR_GetSystemTime_121223c0)((uint)&local_14);
  iVar3 = (int)(0);
  iVar4 = (int)(0);
  do {
    *(byte*)(iVar4 + (int)param_3) = (byte)(*(byte *)(iVar4 + (int)param_3) ^ (&stack0xffffffe8)[iVar3]);
    iVar2 = (int)(0);
    if (iVar4 + 1 < (int)param_2) {
      iVar2 = (int)(iVar4 + 1);
    }
    *(byte*)(iVar2 + (int)param_3) = (byte)(*(byte *)(iVar2 + (int)param_3) ^ (&stack0xffffffe9)[iVar3]);
    iVar4 = (int)(0);
    if (iVar2 + 1 < (int)param_2) {
      iVar4 = (int)(iVar2 + 1);
    }
    *(byte*)(iVar4 + (int)param_3) = (byte)(*(byte *)(iVar4 + (int)param_3) ^ (&stack0xffffffea)[iVar3]);
    iVar2 = (int)(0);
    if (iVar4 + 1 < (int)param_2) {
      iVar2 = (int)(iVar4 + 1);
    }
    *(byte*)(iVar2 + (int)param_3) = (byte)(*(byte *)(iVar2 + (int)param_3) ^ (&stack0xffffffeb)[iVar3]);
    iVar4 = (int)(0);
    if (iVar2 + 1 < (int)param_2) {
      iVar4 = (int)(iVar2 + 1);
    }
    iVar3 = (int)(iVar3 + 4);
  } while (iVar3 < 0x10);
  uVar1 = (undefined4)((*(code *)PTR_GetCurrentProcessId_12122330)(), 0);
  *(byte*)(iVar4 + (int)param_3) = (byte)(*(byte *)(iVar4 + (int)param_3) ^ (byte)uVar1);
  iVar3 = (int)(0);
  if (iVar4 + 1 < (int)param_2) {
    iVar3 = (int)(iVar4 + 1);
  }
  *(byte*)(iVar3 + (int)param_3) = (byte)(*(byte *)(iVar3 + (int)param_3) ^ (byte)((uint)uVar1 >> 8));
  iVar4 = (int)(0);
  if (iVar3 + 1 < (int)param_2) {
    iVar4 = (int)(iVar3 + 1);
  }
  *(byte*)(iVar4 + (int)param_3) = (byte)(*(byte *)(iVar4 + (int)param_3) ^ (byte)((uint)uVar1 >> 0x10));
  iVar3 = (int)(0);
  if (iVar4 + 1 < (int)param_2) {
    iVar3 = (int)(iVar4 + 1);
  }
  *(byte*)(iVar3 + (int)param_3) = (byte)(*(byte *)(iVar3 + (int)param_3) ^ (byte)((uint)uVar1 >> 0x18));
  iVar4 = (int)(0);
  if (iVar3 + 1 < (int)param_2) {
    iVar4 = (int)(iVar3 + 1);
  }
  uVar1 = (undefined4)((*(code *)PTR_GetTickCount_121223f0)(), 0);
  *(byte*)(iVar4 + (int)param_3) = (byte)(*(byte *)(iVar4 + (int)param_3) ^ (byte)uVar1);
  iVar3 = (int)(0);
  if (iVar4 + 1 < (int)param_2) {
    iVar3 = (int)(iVar4 + 1);
  }
  *(byte*)(iVar3 + (int)param_3) = (byte)(*(byte *)(iVar3 + (int)param_3) ^ (byte)((uint)uVar1 >> 8));
  iVar4 = (int)(0);
  if (iVar3 + 1 < (int)param_2) {
    iVar4 = (int)(iVar3 + 1);
  }
  *(byte*)(iVar4 + (int)param_3) = (byte)(*(byte *)(iVar4 + (int)param_3) ^ (byte)((uint)uVar1 >> 0x10));
  iVar3 = (int)(0);
  if (iVar4 + 1 < (int)param_2) {
    iVar3 = (int)(iVar4 + 1);
  }
  *(byte*)(iVar3 + (int)param_3) = (byte)(*(byte *)(iVar3 + (int)param_3) ^ (byte)((uint)uVar1 >> 0x18));
  iVar4 = (int)(0);
  if (iVar3 + 1 < (int)param_2) {
    iVar4 = (int)(iVar3 + 1);
  }
  (*(code *)PTR_QueryPerformanceCounter_121224c8)(&stack0xffffffe8);
  *(byte*)(iVar4 + (int)param_3) = (byte)(*(byte *)(iVar4 + (int)param_3) ^ (byte)unaff_EBP);
  iVar3 = (int)(0);
  if (iVar4 + 1 < (int)param_2) {
    iVar3 = (int)(iVar4 + 1);
  }
  *(byte*)(iVar3 + (int)param_3) = (byte)(*(byte *)(iVar3 + (int)param_3) ^ (byte)((uint)unaff_EBP >> 8));
  iVar4 = (int)(0);
  if (iVar3 + 1 < (int)param_2) {
    iVar4 = (int)(iVar3 + 1);
  }
  *(byte*)(iVar4 + (int)param_3) = (byte)(*(byte *)(iVar4 + (int)param_3) ^ (byte)((uint)unaff_EBP >> 0x10));
  iVar3 = (int)(0);
  if (iVar4 + 1 < (int)param_2) {
    iVar3 = (int)(iVar4 + 1);
  }
  *(byte*)(iVar3 + (int)param_3) = (byte)(*(byte *)(iVar3 + (int)param_3) ^ (byte)((uint)unaff_EBP >> 0x18));
  iVar4 = (int)(0);
  if (iVar3 + 1 < (int)param_2) {
    iVar4 = (int)(iVar3 + 1);
  }
  *(byte*)(iVar4 + (int)param_3) = (byte)(*(byte *)(iVar4 + (int)param_3) ^ (byte)unaff_EBX);
  iVar3 = (int)(0);
  if (iVar4 + 1 < (int)param_2) {
    iVar3 = (int)(iVar4 + 1);
  }
  *(byte*)(iVar3 + (int)param_3) = (byte)(*(byte *)(iVar3 + (int)param_3) ^ (byte)((uint)unaff_EBX >> 8));
  iVar4 = (int)(0);
  if (iVar3 + 1 < (int)param_2) {
    iVar4 = (int)(iVar3 + 1);
  }
  *(byte*)(iVar4 + (int)param_3) = (byte)(*(byte *)(iVar4 + (int)param_3) ^ (byte)((uint)unaff_EBX >> 0x10));
  iVar3 = (int)(0);
  if (iVar4 + 1 < (int)param_2) {
    iVar3 = (int)(iVar4 + 1);
  }
  *(byte*)(iVar3 + (int)param_3) = (byte)(*(byte *)(iVar3 + (int)param_3) ^ (byte)((uint)unaff_EBX >> 0x18));
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11305d50; body size 907 bytes.
#line 1 "ENTRY_11305d50"

void FUN_11305d50(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 *local_24;
  uint local_20;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_24);
  iVar9 = (int)(*(int *)(param_1 + 0x74));
  local_20 = (uint)((uint)(*(int *)(*(int *)(param_1 + 0x14) + 0x28) * 2) / 3);
  local_1c = (undefined4 *)((undefined4 *)0x0);
  do {
    while( true ) {
      if (((*(int *)(iVar9 + 0x14) < 0) && (iVar7 = (int)(FUN_113089c0(iVar9), 0), iVar7 != 0)) ||
         ((*(char *)(iVar9 + 0xc) == '\0' && (*(int *)(iVar9 + 0x14) <= (int)(local_20))))) goto LAB_113060b5;
      local_18 = (int)((int)param_1[0x44]);
      if (local_18 != 0) break;
      if (*(char *)(iVar9 + 0xc) == '\0') goto LAB_113060b5;
      for (pcVar2 = (char *)(*(char **)(*(int *)(param_1 + 0x14) + 8), 0);(char *)( pcVar2) != (char *)(0x0);
          pcVar2 = *(char **)(pcVar2 + 0x18)) {
        if ((((char *)(pcVar2) != (char *)(param_1)) && (*pcVar2 == (char)(('\0')))) &&
           (*(int *)((pcVar2 + 0x74)) == *(int *)((param_1 + 0x74)))) {
          thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x11b15, "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
          goto LAB_113060b5;
        }
      }
      iVar7 = (int)(FUN_113061c0(iVar9,param_1 + 0x7c), 0);
      if (iVar7 != 0) goto LAB_113060b5;
      param_1[0x44] = (char)('\x01');
      *(int*)(param_1 + 0x78) = (int)(iVar9);
      iVar9 = (int)(*(int *)(param_1 + 0x7c));
      param_1[0x46] = (char)('\0');
      param_1[0x47] = (char)('\0');
      param_1[0x48] = (char)('\0');
      param_1[0x49] = (char)('\0');
      *(int*)(param_1 + 0x74) = (int)(iVar9);
    }
    iVar7 = (int)(*(int *)(param_1 + local_18 * 4 + 0x74));
    local_24 = (undefined4 *)((undefined4 *)(uint)*(ushort *)(param_1 + local_18 * 2 + 0x46));
    iVar3 = (int)(*(int *)(iVar7 + 0x48));
    iVar4 = (int)(*(int *)(iVar3 + 0x14));
    if (((*(byte *)(iVar3 + 0x1c) & 4) == 0) || (*(uint *)((iVar4 + 0x18)) < *(uint *)((iVar3 + 0x18)))) {
      iVar8 = (int)(*(int *)(iVar4 + 0x28));
      if (iVar8 == 0) {
        if (*(uint *)((iVar4 + 0x98)) < *(uint *)((iVar4 + 0x94))) {
          iVar8 = (int)(FUN_11326440(), 0);
        }
        else {
          iVar8 = (int)(FUN_11327f70(iVar3), 0);
        }
        goto LAB_11305e71;
      }
    }
    else {
      if (*(int *)(iVar4 + 0x60) != 0) {
        iVar8 = (int)(FUN_1139c620(iVar3), 0);
LAB_11305e71:
        if (iVar8 != 0) goto LAB_1130601d;
      }
      if ((-1 < *(int *)(iVar7 + 0x14)) || (iVar8 = (int)(FUN_113089c0(iVar7), 0), iVar8 == 0)) {
        puVar6 = (undefined4 *)(local_24);
        if ((*(char *)(iVar9 + 3) == '\0') ||
           ((((*(char *)(iVar9 + 0xc) != '\x01' ||
              (*(int *)(uintptr_t)((iVar9 + 0x1c)) != *(int *)(uintptr_t)((iVar9 + 0x18)))) || (*(int *)(uintptr_t)(iVar7 + 4) == 1)) || ((uintptr_t)(uint)*(int *)(uintptr_t)(iVar7 + 0x18) != (ushort)((local_24)))))) {
          local_24 = (undefined4 *)((undefined4 *)FUN_1132a0e0(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24)), 0);
          iVar8 = (int)(FUN_113064b0(iVar7,puVar6,local_24,local_18 == 1,param_1[3] & 1), 0);
          puVar6 = (undefined4 *)(local_1c);
          if ((undefined4 *)(local_1c) != (undefined4 *)(0x0)) {
            if (((undefined4 *)(local_1c) < (undefined4 *)(DAT_122f703c)) || ((undefined4 *)((DAT_122f7040)) <= (undefined4 *)(local_1c))) {
              local_18 = (int)((*(code *)(uint)(DAT_12121eac))(local_1c), 0);
              if (DAT_122f7044 != 0) {
                (*(code *)(uint)(DAT_12121ed0))(DAT_122f7044);
              }
              DAT_122f6d30 = (int)(DAT_122f6d30 - local_18);
              if (DAT_122f7044 != 0) {
                (*(code *)(uint)(DAT_12121ed8))(DAT_122f7044);
              }
              if (DAT_12121e80 == 0) {
                (*(code *)(uint)(DAT_12121ea4))(puVar6);
              }
              else {
                if (DAT_122f6d88 != 0) {
                  (*(code *)(uint)(DAT_12121ed0))(DAT_122f6d88);
                }
                iVar7 = (int)((*(code *)(uint)(DAT_12121eac))(puVar6), 0);
                DAT_122f6d28 = (int)(DAT_122f6d28 - iVar7);
                DAT_122f6d4c = (int)(DAT_122f6d4c + -1);
                (*(code *)(uint)(DAT_12121ea4))(puVar6);
                if (DAT_122f6d88 != 0) {
                  (*(code *)(uint)(DAT_12121ed8))(DAT_122f6d88);
                }
              }
            }
            else {
              if (DAT_122f7044 != 0) {
                (*(code *)(uint)(DAT_12121ed0))(DAT_122f7044);
              }
              DAT_122f6d2c = (int)(DAT_122f6d2c + -1);
              *puVar6 = (undefined4)(DAT_122f7048);
              DAT_122f704c = (int)(DAT_122f704c + 1);
              DAT_122f7048 = (int)(puVar6);
              DAT_122f7050 = (int)((uint)(DAT_122f704c < DAT_122f7038));
              if (DAT_122f7044 != 0) {
                (*(code *)(uint)(DAT_12121ed8))(DAT_122f7044);
              }
            }
          }
          local_1c = (undefined4 *)(local_24);
        }
        else {
          iVar8 = (int)(FUN_11307f80(iVar7,iVar9,(uint)&local_14), 0);
        }
      }
    }
LAB_1130601d:
    iVar7 = (int)(*(int *)(iVar9 + 0x48));
    *(undefined1*)(iVar9 + 0xc) = (undefined1)(0);
    if ((*(byte *)(iVar7 + 0x1c) & 0x20) == 0) {
      FUN_1135ea30(iVar7);
    }
    else {
      iVar9 = (int)(*(int *)(iVar7 + 0x14));
      *(int*)(iVar9 + 0x78) = (int)(*(int *)(iVar9 + 0x78) + -1);
      *(undefined4*)(iVar7 + 0x10) = (undefined4)(*(undefined4 *)(iVar9 + 0x88));
      piVar5 = (int *)(*(int **)(iVar9 + 0x3c), 0);
      *(int*)(iVar9 + 0x88) = (int)(iVar7);
      uVar11 = (undefined4)(*(undefined4 *)(iVar7 + 4));
      iVar3 = (int)(*piVar5);
      uVar10 = (undefined8)(__allmul(*(int *)(iVar7 + 0x18) + -1,0,*(int *)(iVar9 + 0x98), *(int *)(iVar9 + 0x98) >> 0x1f), 0);
      (**(code **)(iVar3 + 0x48))(piVar5,uVar10,uVar11);
    }
    cVar1 = (char)(param_1[0x44]);
    param_1[0x44] = (char)(cVar1 + -1);
    iVar9 = (int)(*(int *)(param_1 + cVar1 * 4 + 0x74));
    *(int*)(param_1 + 0x74) = (int)(iVar9);
  } while (iVar8 == 0);
LAB_113060b5:
  if ((undefined4 *)(local_1c) != (undefined4 *)(0x0)) {
    FUN_1132a740(local_1c);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113064b0; body size 5489 bytes.
#line 1 "ENTRY_113064b0"

/* WARNING: Type propagation algorithm not settling */

void FUN_113064b0(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  short *psVar1;
  undefined2 uVar2;
  void *_Src;
  uint *puVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint **ppuVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  ushort *puVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  int iVar17;
  ushort *puVar18;
  int *piVar19;
  char *pcVar20;
  int iVar21;
  int *piVar22;
  undefined4 *puVar23;
  uint *puVar24;
  uint *puVar25;
  int iVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  int local_14c;
  byte bStack_145;
  uint *local_144;
  int local_140;
  uint *puStack_13c;
  uint *local_138;
  uint *local_134;
  int local_130;
  uint *puStack_12c;
  int local_128;
  int *local_124;
  uint *puStack_120;
  uint *local_11c;
  uint *local_118;
  int local_114;
  uint *local_110;
  ushort *local_10c;
  uint uStack_108;
  int *piStack_104;
  uint *local_100;
  int local_fc;
  int local_f8;
  uint uStack_f4;
  uint *puStack_f0;
  uint uStack_ec;
  char *pcStack_e8;
  uint local_e4;
  uint *puStack_e0;
  int local_dc;
  int iStack_d8;
  uint auStack_d4 [5];
  uint auStack_c0 [7];
  uint *local_a4 [7];
  uint uStack_88;
  uint auStack_84 [10];
  uint auStack_5c [4];
  ushort uStack_4c;
  ushort uStack_4a;
  uint auStack_48 [6];
  uint auStack_30 [6];
  undefined4 local_18;
  undefined1 local_14 [4];
  uint auStack_10 [4];
  
  auStack_10[3] = (uint)(DAT_12126b84 ^ (uint)&local_14c);
  local_128 = (int)(param_1);
  local_fc = (int)(param_3);
  local_124 = (int *)(*(int **)(param_1 + 0x34), 0);
  local_138 = (uint *)((uint *)0x0);
  local_130 = (int)(0);
  local_f8 = (int)(0);
  local_18 = (undefined4)(0);
  local_14[0] = (undefined1)(0);
  local_e4 = (uint)(0);
  local_dc = (int)(0);
  if (param_3 == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  local_10c = (ushort *)((ushort *)((uint)*(byte *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x18)));
  if ((ushort *)(local_10c) < (ushort *)0x2) {
    local_114 = (int)(0);
  }
  else {
    if ((int *)(param_2) == (int *)(0x0)) {
      local_114 = (int)(0);
    }
    else if ((ushort *)(param_2) == (ushort *)((local_10c))) {
      local_114 = (int)(param_5 + -2 + (int)local_10c);
    }
    else {
      local_114 = (int)((int)param_2 - 1);
    }
    local_10c = (ushort *)((ushort *)(2 - param_5));
  }
  local_11c = (uint *)((uint *)((int)local_10c + 1));
  uVar11 = (uint)((local_114 - (uint)*(byte *)(param_1 + 0xc)) + (int)local_10c);
  if ((ushort)(uVar11) == *(ushort *)(param_1 + 0x18)) {
    uVar11 = (uint)(*(byte *)(param_1 + 9) + 8);
  }
  else {
    uVar2 = (undefined2)(*(undefined2 *)(*(int *)(param_1 + 0x40) + uVar11 * 2));
    uVar11 = (uint)((uint)(((uint)((char)uVar2) << 8 | (uint)((char)((ushort)uVar2 >> 8))) & *(ushort *)(param_1 + 0x1a)));
  }
  local_118 = (uint *)((uint *)(uVar11 + *(int *)(param_1 + 0x38)));
  uVar11 = (uint)(*local_118);
  puVar25 = (uint *)((uint *)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                    uVar11 << 0x18));
  piVar22 = (int *)((int *)local_10c);
  puVar24 = (uint *)((uint *)((int)local_10c * 4));
  local_110 = (uint *)(puVar25);
  local_100 = (uint *)(puVar25);
LAB_113065c3:
  do {
    iVar17 = (int)(0);
    local_144 = (uint *)(puVar24);
    if ((uint *)local_124[0xc] < (uint *)((puVar25))) {
      thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x102f7, "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
      local_14c = (int)(0xb);
LAB_113065fb:
      local_140 = (int)(local_14c);
      if (local_14c == 0) goto LAB_11306607;
      puVar24 = (uint *)(puVar24 + 1);
LAB_11307909:
      local_14c = (int)(local_140);
      memset((char *)&local_a4,0,(size_t)puVar24);
      goto LAB_11307920;
    }
    local_14c = (int)((**(code **)(*local_124 + 0xcc))(*local_124,puVar25,&puStack_120,0), 0);
    if (local_14c != 0) goto LAB_113065fb;
    pcVar20 = (char *)((char *)puStack_120[2]);
    *(char**)((int)(uint)&local_a4 + (int)puVar24) = (char *)(pcVar20);
    if (*pcVar20 == (char)(('\0'))) {
      uVar11 = (uint)(puStack_120[2]);
      if ((uint *)(puVar25) != *(uint **)(uVar11 + 4)) {
        *(uint*)(uVar11 + 0x38) = (uint)(puStack_120[1]);
        *(int**)(uVar11 + 0x34) = (int *)(local_124);
        *(uint**)(uVar11 + 0x48) = (uint *)(puStack_120);
        *(uint**)(uVar11 + 4) = (uint *)(puVar25);
        *(byte*)(uVar11 + 9) = (byte)(((uint *)(puVar25) != (uint *)(0x1)) - 1U & 100);
        pcVar20 = (char *)(*(char **)((int)(uint)&local_a4 + (int)puVar24), 0);
      }
      local_14c = (int)(FUN_11309520(pcVar20), 0);
      if (local_14c != 0) {
        if (*(int *)((int)(uint)&local_a4 + (int)puVar24) != 0) {
          FUN_1135d530(*(undefined4 *)(*(int *)((int)(uint)&local_a4 + (int)puVar24) + 0x48));
        }
        goto LAB_113065fb;
      }
    }
    local_140 = (int)(0);
LAB_11306607:
    if ((*(int *)(*(int *)((int)(uint)&local_a4 + (int)puVar24) + 0x14) < 0) &&
       (local_14c = (int)(local_140), local_140 = (int)(FUN_113089c0(*(int *)((int)(uint)&local_a4 + (int)puVar24)), 0), local_140 != 0)) {
      puVar24 = (uint *)((uint *)((int)piVar22 * 4));
      goto LAB_11307909;
    }
    puVar25 = (uint *)(local_11c);
    piVar19 = (int *)((int *)((int)piVar22 - 1));
    local_14c = (int)(local_140);
    if ((int *)(piVar22) == (int *)(0x0)) {
      uVar11 = (uint)(((local_124[9] - 8U) / 6 + 4) * (int)local_11c + 3 & 0xfffffffc);
      iVar13 = (int)(local_124[9] + uVar11 * 6);
      local_dc = (int)(FUN_11358b90(iVar13,iVar13 >> 0x1f), 0);
      if (local_dc == 0) {
        local_14c = (int)(7);
        goto LAB_11307920;
      }
      iStack_d8 = (int)(local_dc + uVar11 * 4);
      puStack_13c = (uint *)((uint *)(iStack_d8 + uVar11 * 2));
      puStack_e0 = (uint *)(local_a4[0]);
      uStack_108 = (uint)((uint)(byte)local_a4[0][2] << 2);
      bStack_145 = (byte)(*(byte *)((int)local_a4[0] + 3));
      puStack_f0 = (uint *)((uint *)(uint)bStack_145);
      local_144 = (uint *)((uint *)0x0);
      if ((int)puVar25 < 1) goto LAB_11306b22;
      break;
    }
    piVar22 = (int *)(piVar19);
    if ((*(byte *)(local_128 + 0xc) != 0) &&
       (local_114 + (int)piVar19 == (uint)*(ushort *)(local_128 + 0x1c))) {
      puVar12 = (uint *)(*(uint **)(local_128 + 0x24), 0);
      *(uint**)((uint)&local_14 + (int)puVar24) = (uint *)(puVar12);
      uVar11 = (uint)(*puVar12);
      puVar25 = (uint *)((uint *)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                        uVar11 << 0x18));
      local_110 = (uint *)(puVar25);
      local_100 = (uint *)(puVar25);
      uVar11 = (uint)((**(code **)(local_128 + 0x4c))(local_128,puVar12), 0);
      *(uint*)((int)&uStack_88 + (int)puVar24) = (uint)(uVar11 & 0xffff);
      *(undefined1*)(local_128 + 0xc) = (undefined1)(0);
      puVar24 = (uint *)(puVar24 + -1);
      goto LAB_113065c3;
    }
    uVar2 = (undefined2)(*(undefined2 *) (*(int *)(local_128 + 0x40) + ((local_114 - (uint)*(byte *)(local_128 + 0xc)) + (int)piVar19) * 2));
    local_134 = (uint *)((uint *)(*(int *)(local_128 + 0x38) + (uint)(((uint)((char)uVar2) << 8 | (uint)((char)((ushort)uVar2 >> 8))) &
                              *(ushort *)(local_128 + 0x1a))));
    *(uint**)((uint)&local_14 + (int)puVar24) = (uint *)(local_134);
    uVar11 = (uint)(*local_134);
    puVar25 = (uint *)((uint *)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                      uVar11 << 0x18));
    local_110 = (uint *)(puVar25);
    local_100 = (uint *)(puVar25);
    uVar11 = (uint)((**(code **)(local_128 + 0x4c))(local_128,local_134), 0);
    puStack_12c = (uint *)((uint *)(uVar11 & 0xffff));
    *(uint**)((int)&uStack_88 + (int)puVar24) = (uint *)(puStack_12c);
    if ((*(byte *)(local_124 + 6) & 0xc) != 0) {
      if (local_124[10] < (int)((int)local_134 + ((int)puStack_12c - *(int *)(local_128 + 0x38)))) goto LAB_11306825;
      memcpy((char *)((int)local_134 + (local_fc - *(int *)(local_128 + 0x38))),local_134, (size_t)puStack_12c);
      *(char**)((uint)&local_14 + (int)puVar24) = (char *)((char *)((local_fc - *(int *)(local_128 + 0x38)) + (int)local_134));
    }
    FUN_11312ef0(local_128,(local_114 - (uint)*(byte *)(local_128 + 0xc)) + (int)piVar19,puStack_12c
                 ,&local_140);
    puVar24 = (uint *)(puVar24 + -1);
  } while( true );
  while( true ) {
    uVar6 = (ushort)(*(ushort *)((int)puVar24 + 0x12));
    uVar10 = (uint)(puVar24[6]);
    uVar11 = (uint)(local_e4);
    for (;(char *)((puVar25)) < (char *)(pcVar20) + (uint)(ushort)uVar10 * 2 + (uint)uVar6;
        puVar25 = (uint *)((int)puVar25 + 2)) {
      *(char**)(local_dc + uVar11 * 4) = (char *)(pcVar20 + ((uint)((uint)((char)(short)*puVar25) << 8 | (uint)((char)((ushort)(short)*puVar25 >> 8))) &
                     uStack_f4 & 0xffff));
      uVar11 = (uint)(uVar11 + 1);
      iVar17 = (int)(local_130);
      puVar24 = (uint *)(puStack_12c);
    }
    *(uint*)((int)((uint)&auStack_48 + 1) + (int)piStack_104) = (uint)(uVar11);
    local_e4 = (uint)(uVar11);
    if (((int)local_144 < (int)local_10c) && (bStack_145 == 0)) {
      uVar6 = (ushort)(*(ushort *)((int)(uint)&auStack_84 + (int)piStack_104));
      _Src = (char *)(*(void **)((int)(uint)&auStack_10 + (int)piStack_104), 0);
      pcVar20 = (char *)((char *)((int)puStack_13c + iVar17));
      *(ushort*)(iStack_d8 + uVar11 * 2) = (ushort)(uVar6);
      iVar17 = (int)(iVar17 + (uint)uVar6);
      local_130 = (int)(iVar17);
      memcpy(pcVar20,_Src,(uint)uVar6);
      *(char**)(local_dc + uVar11 * 4) = (char *)(pcVar20 + (uStack_108 & 0xffff));
      psVar1 = (short *)((short *)(iStack_d8 + uVar11 * 2));
      *psVar1 = (short)(*psVar1 - (short)uStack_108);
      if ((char)puVar24[2] == '\0') {
        **(undefined4**)(local_dc + uVar11 * 4) = (undefined4)(*(undefined4 *)(puVar24[0xe] + 8));
        local_e4 = (uint)(uVar11 + 1);
      }
      else {
        uVar6 = (ushort)(*(ushort *)(iStack_d8 + uVar11 * 2));
        while (uVar6 < 4) {
          *(char*)((int)puStack_13c + iVar17) = (char)('\0');
          iVar17 = (int)(iVar17 + 1);
          psVar1 = (short *)((short *)(iStack_d8 + uVar11 * 2));
          *psVar1 = (short)(*psVar1 + 1);
          local_130 = (int)(iVar17);
          uVar6 = (ushort)(*(ushort *)(iStack_d8 + uVar11 * 2));
        }
        local_e4 = (uint)(uVar11 + 1);
      }
    }
    local_144 = (uint *)((uint *)((int)local_144 + 1));
    if ((int)local_11c <= (int)local_144) break;
    piStack_104 = (int *)((int *)((int)local_144 * 4));
    puVar24 = (uint *)(local_a4[(int)local_144]);
    uStack_f4 = (uint)((uint)*(ushort *)((int)puVar24 + 0x1a));
    pcVar20 = (char *)((char *)puVar24[0xe]);
    puStack_120 = (uint *)((uint *)(uint)(ushort)puVar24[6]);
    puVar25 = (uint *)((uint *)(pcVar20 + *(ushort *)((int)puVar24 + 0x12)));
    local_134 = (uint *)(puVar25);
    puStack_12c = (uint *)(puVar24);
    uStack_ec = (uint)(uStack_f4);
    pcStack_e8 = (char *)(pcVar20);
    if ((char)(*pcVar20) != *(char *)local_a4[0][0xe]) {
      thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x11887, "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
      local_14c = (int)(0xb);
      iVar17 = (int)(local_14c);
      goto LAB_1130711b;
    }
    memset((char *)(iStack_d8 + local_e4 * 2),0,((uint)(byte)puVar24[3] + (int)puStack_120) * 2);
    cVar5 = (char)((char)puVar24[3]);
    if (cVar5 != '\0') {
      puVar12 = (uint *)((uint *)(uint)(ushort)puVar24[7]);
      if ((uint *)((puStack_120)) < (uint *)(puVar12)) {
        iVar17 = (int)(FUN_11341510(0x1189f), 0);
        goto LAB_1130711b;
      }
      if ((uint *)(puVar12) != (uint *)(0x0)) {
        do {
          uVar11 = (uint)(*puVar25);
          puVar25 = (uint *)((uint *)((int)puVar25 + 2));
          *(char**)(local_dc + local_e4 * 4) = (char *)(pcVar20 + ((uint)((uint)((char)(short)uVar11) << 8 | (uint)((char)((ushort)(short)uVar11 >> 8))) &
                         uStack_ec & 0xffff));
          local_e4 = (uint)(local_e4 + 1);
          puVar12 = (uint *)((uint *)((int)puVar12 - 1));
        } while ((uint *)(puVar12) != (uint *)(0x0));
        cVar5 = (char)((char)puStack_12c[3]);
        iVar17 = (int)(local_130);
        puVar24 = (uint *)(puStack_12c);
        local_134 = (uint *)(puVar25);
      }
      iVar13 = (int)(0);
      if (cVar5 != '\0') {
        puVar12 = (uint *)(puVar24 + 9);
        do {
          uVar11 = (uint)(*puVar12);
          puVar12 = (uint *)(puVar12 + 1);
          *(uint*)(local_dc + local_e4 * 4) = (uint)(uVar11);
          iVar13 = (int)(iVar13 + 1);
          local_e4 = (uint)(local_e4 + 1);
          pcVar20 = (char *)(pcStack_e8);
          iVar17 = (int)(local_130);
          puVar25 = (uint *)(local_134);
        } while (iVar13 < (int)(uint)(byte)puVar24[3]);
      }
    }
  }
LAB_11306b22:
  local_144 = (uint *)((uint *)0x0);
  local_134 = (uint *)((uint *)0x0);
  iVar17 = (int)((uStack_108 & 0xffff) + local_124[10] + -0xc);
  local_130 = (int)(iVar17);
  if (0 < (int)local_11c) {
    do {
      puVar24 = (uint *)(local_a4[(int)local_134]);
      uStack_f4 = (uint)(auStack_48[(int)((int)local_134 + 1)]);
      auStack_d4[(int)local_144] = (uint)(puVar24[0xf]);
      auStack_c0[(int)((int)local_144 + 1)] = (uint)(uStack_f4);
      if (((uint *)(local_144) != (uint *)(0x0)) && (uStack_f4 == auStack_c0[(int)local_144])) {
        local_144 = (uint *)((uint *)((int)local_144 + -1));
      }
      if (bStack_145 == 0) {
        auStack_d4[(int)local_144 + 1] = (uint)(*(uint *)(local_128 + 0x3c));
        auStack_c0[(int)((int)local_144 + 2)] = (uint)(uStack_f4 + 1);
        local_144 = (uint *)((uint *)((int)local_144 + 1));
      }
      local_10c = (ushort *)((ushort *)0x0);
      iVar13 = (int)(iVar17 - puVar24[5]);
      uVar11 = (uint)(puVar24[3]);
      piStack_104 = (int *)((int *)((uint)&auStack_84 + (int)local_134));
      *piStack_104 = (int)(iVar13);
      if ((char)uVar11 != '\0') {
        iVar17 = (int)(0);
        puVar25 = (uint *)(puVar24 + 9);
        do {
          uVar11 = (uint)((*(code *)puVar24[0x13])(puVar24,*puVar25), 0);
          puVar25 = (uint *)(puVar25 + 1);
          iVar17 = (int)(iVar17 + 1);
          iVar13 = (int)(iVar13 + (uVar11 & 0xffff) + 2);
        } while (iVar17 < (int)(uint)(byte)puVar24[3]);
        *piStack_104 = (int)(iVar13);
        iVar17 = (int)(local_130);
      }
      local_144 = (uint *)((uint *)((int)local_144 + 1));
      auStack_84[(int)(local_134 + 1) + 1] = (uint)(uStack_f4);
      local_134 = (uint *)((uint *)((int)local_134 + 1));
    } while ((int)local_134 < (int)local_11c);
  }
  puStack_13c = (uint *)(local_11c);
  puStack_12c = (uint *)((uint *)0x0);
  uVar11 = (uint)(local_e4);
  puVar24 = (uint *)(local_110);
  puVar25 = (uint *)(local_11c);
  if (0 < (int)local_11c) {
    iVar17 = (int)(0);
    local_144 = (uint *)((uint *)0x1);
    do {
      iVar13 = (int)(*(int *)((int)(uint)&auStack_84 + iVar17));
      if (local_130 < iVar13) {
        do {
          if ((int)puStack_13c <= (int)local_144) {
            puStack_13c = (uint *)((uint *)((int)local_144 + 1));
            if (5 < (int)puStack_13c) {
              thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x11904, "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2") ;
              local_14c = (int)(0xb);
              iVar17 = (int)(local_14c);
              goto LAB_1130711b;
            }
            *(undefined4*)((int)(uint)&auStack_84 + iVar17 + 4) = (undefined4)(0);
            iVar13 = (int)(*(int *)((int)(uint)&auStack_84 + iVar17));
            *(uint*)((int)(uint)&auStack_84 + iVar17 + 0x18) = (uint)(uVar11);
          }
          iVar26 = (int)(*(int *)((int)(uint)&auStack_84 + iVar17 + 0x14));
          iVar21 = (int)(iVar26 + -1);
          uVar6 = (ushort)(*(ushort *)(iStack_d8 + iVar21 * 2));
          if (uVar6 == 0) {
            uVar6 = (ushort)(FUN_1130e990(&local_e4,iVar21), 0);
          }
          iVar7 = (int)(uVar6 + 2);
          iVar13 = (int)(iVar13 - iVar7);
          *(int*)((int)(uint)&auStack_84 + iVar17) = (int)(iVar13);
          if (bStack_145 == 0) {
            if (iVar26 < (int)local_e4) {
              uVar6 = (ushort)(*(ushort *)(iStack_d8 + iVar26 * 2));
              if (uVar6 == 0) {
                uVar6 = (ushort)(FUN_1130e990(&local_e4,iVar26), 0);
              }
              iVar7 = (int)(uVar6 + 2);
            }
            else {
              iVar7 = (int)(0);
            }
          }
          piVar22 = (int *)((int *)((int)(uint)&auStack_84 + iVar17 + 4));
          *piVar22 = (int)(*piVar22 + iVar7);
          *(int*)((int)(uint)&auStack_84 + iVar17 + 0x14) = (int)(iVar21);
          uVar11 = (uint)(local_e4);
        } while (local_130 < iVar13);
      }
      iVar21 = (int)(*(int *)((int)(uint)&auStack_84 + iVar17 + 0x14));
      iVar26 = (int)(local_130);
      iVar7 = (int)(iStack_d8);
      while (puVar24 = (uint *)(local_144), iVar21 < (int)uVar11) {
        uVar6 = (ushort)(*(ushort *)(iVar7 + iVar21 * 2));
        if (uVar6 == 0) {
          uVar6 = (ushort)(FUN_1130e990(&local_e4,iVar21), 0);
          iVar7 = (int)(iStack_d8);
          iVar26 = (int)(local_130);
        }
        iVar8 = (int)(uVar6 + 2);
        iVar13 = (int)(iVar13 + iVar8);
        if (iVar26 < iVar13) {
          puVar24 = (uint *)(local_144);
          if (iVar21 < (int)uVar11) {
            if ((int)puStack_12c < 1) {
              iVar13 = (int)(0);
            }
            else {
              iVar13 = (int)(*(int *)((int)(uint)&auStack_84 + iVar17 + 0x10));
            }
            puVar24 = (uint *)(puStack_13c);
            if (iVar21 <= iVar13) {
              thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x11925, "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2") ;
              local_14c = (int)(0xb);
              iVar17 = (int)(local_14c);
              goto LAB_1130711b;
            }
          }
          break;
        }
        iVar21 = (int)(iVar21 + 1);
        *(int*)((int)(uint)&auStack_84 + iVar17) = (int)(iVar13);
        *(int*)((int)(uint)&auStack_84 + iVar17 + 0x14) = (int)(iVar21);
        if (bStack_145 == 0) {
          if (iVar21 < (int)uVar11) {
            uVar6 = (ushort)(*(ushort *)(iVar7 + iVar21 * 2));
            if (uVar6 == 0) {
              uVar6 = (ushort)(FUN_1130e990(&local_e4,iVar21), 0);
              iVar7 = (int)(iStack_d8);
              iVar26 = (int)(local_130);
            }
            iVar8 = (int)(uVar6 + 2);
          }
          else {
            iVar8 = (int)(0);
          }
        }
        piVar22 = (int *)((int *)((int)(uint)&auStack_84 + iVar17 + 4));
        *piVar22 = (int)(*piVar22 - iVar8);
      }
      puStack_13c = (uint *)(puVar24);
      puStack_12c = (uint *)((uint *)((int)puStack_12c + 1));
      local_144 = (uint *)((uint *)((int)local_144 + 1));
      iVar17 = (int)(iVar17 + 4);
      puVar24 = (uint *)(local_110);
      puVar25 = (uint *)(puStack_13c);
    } while ((int)puStack_12c < (int)puStack_13c);
  }
  do {
    local_134 = (uint *)((uint *)((int)puVar25 + -1));
    local_110 = (uint *)(puVar24);
    if ((int)local_134 < 1) {
      iVar13 = (int)(0);
      local_134 = (uint *)((uint *)(uint)*(byte *)local_a4[0][0xe]);
      if (0 < (int)puStack_13c) goto LAB_11307051;
      goto LAB_11307229;
    }
    puStack_12c = (uint *)((uint *)((int)local_134 * 4));
    local_144 = (uint *)((uint *)(&uStack_88)[(int)local_134]);
    iVar17 = (int)(auStack_84[(int)puVar25 + 0xffffffff]);
    puStack_120 = (uint *)((uint)&auStack_84 + 4);
    puVar18 = (ushort *)((ushort *)puStack_120[(int)local_134]);
    piVar22 = (int *)((int *)((int)puVar18 - 1));
    iVar13 = (int)((int)piVar22 + (1 - (int)puStack_f0));
    local_10c = (ushort *)((ushort *)(iStack_d8 + iVar13 * 2));
    puVar14 = (ushort *)(local_10c);
    if (*(short *)(iStack_d8 + iVar13 * 2) == 0) {
      FUN_1130e990(&local_e4,iVar13);
      puVar14 = (ushort *)(local_10c);
    }
    do {
      local_10c = (ushort *)((ushort *)piVar22);
      piStack_104 = (int *)(piVar22);
      if (*(short *)(iStack_d8 + (int)piVar22 * 2) == 0) {
        FUN_1130e990(&local_e4,piVar22);
      }
      if (iVar17 != 0) {
        piVar19 = (int *)((int *)puVar18);
        if (param_5 != 0) break;
        iVar13 = (int)(2);
        if ((uint *)(local_134) == (uint *)((int)puStack_13c + -1)) {
          iVar13 = (int)(0);
        }
        if ((int)((int)local_144 + (-(uint)*(ushort *)(iStack_d8 + (int)piVar22 * 2) - iVar13)) <
            (int)(*puVar14 + 2 + iVar17)) break;
      }
      iVar17 = (int)(iVar17 + *puVar14 + 2);
      local_144 = (uint *)((uint *)((int)local_144 + (-2 - (uint)*(ushort *)(iStack_d8 + (int)piVar22 * 2))));
      *(int**)((int)puStack_120 + (int)puStack_12c) = (int *)(piVar22);
      piVar22 = (int *)((int *)((int)piVar22 - 1));
      piVar19 = (int *)(piStack_104);
      puVar14 = (ushort *)(puVar14 + -1);
      puVar18 = (ushort *)(local_10c);
    } while (-1 < (int)piVar22);
    *(int*)((int)(uint)&auStack_84 + (int)puStack_12c) = (int)(iVar17);
    *(uint**)((int)&uStack_88 + (int)puStack_12c) = (uint *)(local_144);
    if ((uint *)(local_134) < (uint *)0x2) {
      iVar17 = (int)(0);
    }
    else {
      iVar17 = (int)(*(int *)((int)puStack_120 + (int)(puStack_12c + -1)));
    }
    uVar11 = (uint)(local_e4);
    puVar24 = (uint *)(local_110);
    puVar25 = (uint *)(local_134);
  } while (iVar17 < (int)piVar19);
  thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x1194f, "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
  local_14c = (int)(0xb);
  iVar17 = (int)(local_14c);
  goto LAB_1130711b;
LAB_11306825:
  thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x11844, "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
  local_14c = (int)(0xb);
  memset((char *)&local_a4,0,(size_t)local_144);
  goto LAB_11307920;
LAB_11307051:
  do {
    piVar22 = (int *)(local_124);
    if (iVar13 < (int)local_11c) {
      puStack_120 = (uint *)(local_a4[iVar13]);
      local_a4[iVar13 + 3] = (uint *)(puStack_120);
      local_a4[iVar13] = (uint *)((uint *)0x0);
      uVar10 = (uint)(puStack_120[0x12]);
      iVar17 = (int)(*(int *)(uVar10 + 0x14));
      if (((*(byte *)(uVar10 + 0x1c) & 4) == 0) ||
         (*(uint *)((iVar17 + 0x18)) < *(uint *)((uVar10 + 0x18)))) {
        local_14c = (int)(*(int *)(iVar17 + 0x28));
        if (local_14c != 0) {
          local_138 = (uint *)((uint *)((int)local_138 + 1));
          iVar17 = (int)(local_14c);
          goto LAB_1130711b;
        }
        if (*(uint *)((iVar17 + 0x98)) < *(uint *)((iVar17 + 0x94))) {
          local_14c = (int)(FUN_11326440(), 0);
        }
        else {
          local_14c = (int)(FUN_11327f70(uVar10), 0);
        }
      }
      else {
        if (*(int *)(iVar17 + 0x60) == 0) {
          local_138 = (uint *)((uint *)((int)local_138 + 1));
          local_14c = (int)(0);
          local_140 = (int)(0);
          goto LAB_1130720f;
        }
        local_14c = (int)(FUN_1139c620(uVar10), 0);
      }
      local_138 = (uint *)((uint *)((int)local_138 + 1));
joined_r0x11307205:
      iVar17 = (int)(local_14c);
      local_140 = (int)(local_14c);
      if (local_14c != 0) goto LAB_1130711b;
    }
    else {
      if (param_5 != 0) {
        puVar24 = (uint *)((uint *)0x1);
      }
      local_14c = (int)(FUN_11302b00(local_124,&puStack_120,&local_100,puVar24,0), 0);
      puVar25 = (uint *)(puStack_120);
      iVar17 = (int)(local_14c);
      local_140 = (int)(local_14c);
      if (local_14c != 0) goto LAB_1130711b;
      FUN_113b97d0(puStack_120,local_134);
      local_138 = (uint *)((uint *)((int)local_138 + 1));
      local_a4[iVar13 + 3] = (uint *)(puVar25);
      cVar5 = (char)(*(char *)((int)piVar22 + 0x11));
      auStack_48[iVar13 + 1] = (uint)(uVar11);
      puVar24 = (uint *)(local_100);
      if (cVar5 != '\0') {
        FUN_1132b960(piVar22,puVar25[1],5,*(undefined4 *)(local_128 + 4),&local_140);
        local_14c = (int)(local_140);
        puVar24 = (uint *)(local_100);
        goto joined_r0x11307205;
      }
    }
LAB_1130720f:
    iVar13 = (int)(iVar13 + 1);
  } while (iVar13 < (int)puStack_13c);
LAB_11307229:
  puVar24 = (uint *)(local_138);
  iVar17 = (int)(0);
  if (0 < (int)local_138) {
    do {
      uVar11 = (uint)(local_a4[iVar17 + 3][1]);
      uVar10 = (uint)(local_a4[iVar17 + 3][0x12]);
      auStack_30[iVar17] = (uint)(uVar11);
      auStack_5c[iVar17] = (uint)(uVar11);
      *(undefined2*)((int)(uint)&auStack_10 + iVar17 * 2) = (undefined2)(*(undefined2 *)(uVar10 + 0x1c));
      iVar13 = (int)(0);
      if (iVar17 != 0) {
        do {
          if (auStack_30[iVar13] == uVar11) {
            thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x11999, "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
            local_14c = (int)(0xb);
            iVar17 = (int)(local_14c);
            goto LAB_1130711b;
          }
          iVar13 = (int)(iVar13 + 1);
        } while (iVar13 < iVar17);
      }
      iVar17 = (int)(iVar17 + 1);
    } while (iVar17 < (int)local_138);
    iVar17 = (int)(0);
    do {
      iVar21 = (int)(0);
      iVar13 = (int)(1);
      if (1 < (int)puVar24) {
        iVar26 = (int)(0);
        do {
          if ((uint)(auStack_5c[iVar13]) < *(uint *)((int)(uint)&auStack_5c + iVar26)) {
            iVar21 = (int)(iVar13);
            iVar26 = (int)(iVar13 * 4);
          }
          iVar13 = (int)(iVar13 + 1);
        } while (iVar13 < (int)puVar24);
      }
      uVar11 = (uint)(auStack_5c[iVar21]);
      auStack_5c[iVar21] = (uint)(0xffffffff);
      if (iVar21 != iVar17) {
        if (iVar17 < iVar21) {
          iVar13 = (int)(local_124[0xc]);
          uVar10 = (uint)(local_a4[iVar21 + 3][0x12]);
          *(undefined2*)(uVar10 + 0x1c) = (undefined2)(0);
          FUN_1135e7f0(uVar10,iVar13 + 1 + iVar21);
        }
        uVar10 = (uint)(local_a4[iVar17 + 3][0x12]);
        *(undefined2*)(uVar10 + 0x1c) = (undefined2)(*(undefined2 *)((int)(uint)&auStack_10 + iVar21 * 2));
        FUN_1135e7f0(uVar10,uVar11);
        local_a4[iVar17 + 3][1] = uVar11;
      }
      iVar17 = (int)(iVar17 + 1);
    } while (iVar17 < (int)puVar24);
  }
  uVar11 = (uint)(local_a4[(int)((int)puVar24 + 2)][1]);
  *local_118 = (uint)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18);
  if ((((uint)local_134 & 8) == 0) && ((uint *)((local_11c)) != (uint *)(puVar24))) {
    ppuVar9 = (uint **)((uint **)((int)(uint)&local_a4 + 0xc));
    if ((int)puVar24 <= (int)local_11c) {
      ppuVar9 = (uint **)((uint)&local_a4);
    }
    *(undefined4*)(local_a4[(int)((int)puVar24 + 2)][0xe] + 8) = (undefined4)(*(undefined4 *)(ppuVar9[(int)((int)local_11c + -1)][0xe] + 8));
  }
  if (*(char *)((int)local_124 + 0x11) != '\0') {
    iVar26 = (int)(0);
    iVar21 = (int)(0);
    local_118 = (uint *)((uint *)0x0);
    iVar13 = (int)((uint)(ushort)local_a4[3][6] + (uint)(byte)local_a4[3][3]);
    if (0 < (int)local_e4) {
      puStack_120 = (uint *)((uint *)0x0);
      puStack_13c = (uint *)(local_a4[3]);
      uVar11 = (uint)(local_e4);
      puVar25 = (uint *)(local_a4[3]);
      puVar24 = (uint *)(local_a4[3]);
      do {
        local_110 = (uint *)(*(uint **)(local_dc + iVar21 * 4), 0);
        if (iVar21 == iVar13) {
          iVar17 = (int)(iVar26);
          do {
            iVar26 = (int)(iVar17 + 1);
            if (iVar26 < (int)local_138) {
              puVar24 = (uint *)(local_a4[iVar17 + 4]);
            }
            else {
              puVar24 = (uint *)(local_a4[iVar26]);
            }
            iVar13 = (int)(iVar13 + (uint)(byte)puVar24[3] + (uint)(ushort)puVar24[6] + (uint)(bStack_145 == 0));
            uVar11 = (uint)(local_e4);
            puVar25 = (uint *)(puStack_13c);
            iVar17 = (int)(iVar26);
          } while (iVar21 == iVar13);
        }
        if ((int)(iVar21) == *(int *)((int)((uint)&auStack_84 + 5) + (int)puStack_120)) {
          puVar12 = (uint *)((uint *)((int)local_118 + 1));
          puStack_120 = (uint *)((uint *)((int)puVar12 * 4));
          puVar25 = (uint *)(local_a4[(int)(local_118 + 1)]);
          puStack_13c = (uint *)(puVar25);
          local_118 = (uint *)(puVar12);
          if (bStack_145 != 0) goto LAB_11307474;
        }
        else {
LAB_11307474:
          if (((((int)local_138 <= iVar26) || (puVar25[1] != auStack_30[iVar26])) ||
              ((uint *)(local_110) < (uint *)puVar24[0xe])) ||
             (uVar11 = (uint)(local_e4), (uint *)puVar24[0xf] <= (uint *)((local_110)))) {
            if ((short)uStack_108 == 0) {
              uVar11 = (uint)(*local_110);
              FUN_1132b960(local_124, uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                           uVar11 << 0x18,5,puVar25[1],&local_140);
              local_14c = (int)(local_140);
              puVar25 = (uint *)(puStack_13c);
            }
            uVar6 = (ushort)(*(ushort *)(iStack_d8 + iVar21 * 2));
            if (uVar6 == 0) {
              uVar6 = (ushort)(FUN_1130e990(&local_e4,iVar21), 0);
              puVar25 = (uint *)(puStack_13c);
            }
            if ((ushort)puVar25[4] < uVar6) {
              iVar17 = (int)(local_14c);
              if (local_14c != 0) goto LAB_1130711b;
              (*(code *)puVar25[0x14])(puVar25,local_110,(uint)&auStack_5c);
              uVar11 = (uint)(local_e4);
              puVar25 = (uint *)(puStack_13c);
              if (auStack_5c[3] <= uStack_4c) goto LAB_11307580;
              if (((uint *)(local_110) <= (uint *)puVar24[0xf]) &&
                 ((uint *)puVar24[0xf] < (uint *)(((uint)uStack_4c + (int)local_110)))) {
                thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0xffdf, "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2"
                                  );
                local_14c = (int)(0xb);
                iVar17 = (int)(local_14c);
                goto LAB_1130711b;
              }
              uVar11 = (uint)(*(uint *)((uStack_4a - 4) + (int)local_110));
              FUN_1132b960(puStack_13c[0xd], uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                           uVar11 << 0x18,3,puStack_13c[1],&local_140);
              local_14c = (int)(local_140);
              puVar25 = (uint *)(puStack_13c);
            }
            uVar11 = (uint)(local_e4);
            iVar17 = (int)(local_14c);
            if (local_14c != 0) goto LAB_1130711b;
          }
        }
LAB_11307580:
        iVar21 = (int)(iVar21 + 1);
      } while (iVar21 < (int)uVar11);
    }
  }
  iVar13 = (int)(0);
  if ((uintptr_t)(local_138) != (uintptr_t)(0x1) && -1 < (uintptr_t)(((int)local_138 + -1))) {
    do {
      piVar22 = (int *)((int *)(local_dc + auStack_84[iVar13 + 5] * 4));
      puVar24 = (uint *)(local_a4[iVar13 + 3]);
      puVar15 = (undefined4 *)((undefined4 *)(local_fc + local_f8));
      uVar10 = (uint)((uint)*(ushort *)(iStack_d8 + auStack_84[iVar13 + 5] * 2));
      puVar23 = (undefined4 *)((undefined4 *)*piVar22);
      uVar11 = (uint)((uStack_108 & 0xffff) + uVar10);
      puStack_f0 = (uint *)(puVar24);
      if ((char)puVar24[2] == '\0') {
        *(undefined4*)(puVar24[0xe] + 8) = (undefined4)(*puVar23);
      }
      else if (bStack_145 == 0) {
        puVar23 = (undefined4 *)(puVar23 + -1);
        if (uVar10 == 4) {
          uVar11 = (uint)((**(code **)(local_128 + 0x4c))(local_128,puVar23), 0);
          uVar11 = (uint)(uVar11 & 0xffff);
        }
      }
      else {
        (*(code *)puVar24[0x14])(puVar24,piVar22[-1],(uint)&auStack_30);
        pbVar16 = (byte *)((byte *)(puVar15 + 1));
        puVar23 = (undefined4 *)(puVar15);
        if (auStack_30[1] == 0) {
          if (auStack_30[0] < 0x80) {
            *pbVar16 = (byte)((byte)auStack_30[0] & 0x7f);
            uVar11 = (uint)(5);
            puVar15 = (undefined4 *)((undefined4 *)0x0);
          }
          else {
            if (0x3fff < auStack_30[0]) goto LAB_11307696;
            *(byte*)((int)puVar15 + 5) = (byte)((byte)auStack_30[0] & 0x7f);
            *pbVar16 = (byte)((byte)(auStack_30[0] >> 7) | 0x80);
            uVar11 = (uint)(6);
            puVar15 = (undefined4 *)((undefined4 *)0x0);
          }
        }
        else {
LAB_11307696:
          iVar17 = (int)(FUN_1132c1f0(pbVar16,auStack_30[0],auStack_30[1]), 0);
          uVar11 = (uint)(iVar17 + 4);
          puVar15 = (undefined4 *)((undefined4 *)0x0);
        }
      }
      local_f8 = (int)(local_f8 + uVar11);
      FUN_1131f140(local_128,local_114 + iVar13,puVar23,uVar11,puVar15,puVar24[1],&local_140);
      local_14c = (int)(local_140);
      iVar17 = (int)(local_14c);
      if (local_140 != 0) goto LAB_1130711b;
      iVar13 = (int)(iVar13 + 1);
    } while (iVar13 < (int)((int)local_138 + -1));
  }
  local_118 = (uint *)((uint *)(1 - (int)local_138));
  if ((int)local_118 < (int)local_138) {
    do {
      iVar13 = (int)(((uint)local_118 ^ (int)local_118 >> 0x1f) - ((int)local_118 >> 0x1f));
      if ((local_14[iVar13 + -4] == '\0') &&
         ((-1 < (int)local_118 || ((int)auStack_84[iVar13 + 4] <= (int)auStack_48[iVar13])))) {
        if (iVar13 == 0) {
          uVar11 = (uint)(0);
          iVar17 = (int)(0);
          uVar10 = (uint)(auStack_84[5]);
        }
        else {
          uVar11 = (uint)(local_e4);
          if (iVar13 < (int)local_11c) {
            uVar11 = (uint)((uint)(bStack_145 == 0) + auStack_48[iVar13]);
          }
          iVar17 = (int)((uint)(bStack_145 == 0) + auStack_84[iVar13 + 4]);
          uVar10 = (uint)(auStack_84[iVar13 + 5] - iVar17);
        }
        local_14c = (int)(FUN_113131a0(local_a4[iVar13 + 3],uVar11,iVar17,uVar10,&local_e4), 0);
        iVar17 = (int)(local_14c);
        local_140 = (int)(local_14c);
        if (local_14c != 0) goto LAB_1130711b;
        puVar24 = (uint *)(local_a4[iVar13 + 3]);
        iVar17 = (int)(auStack_84[iVar13]);
        local_14[iVar13 + -4] = (undefined1)('\x01');
        puVar24[5] = (uint)(local_130 - iVar17);
      }
      local_118 = (uint *)((uint *)((int)local_118 + 1));
    } while ((int)local_118 < (int)local_138);
  }
  iVar17 = (int)(local_128);
  puVar24 = (uint *)(local_138);
  if (((param_4 == 0) || (*(short *)(local_128 + 0x18) != 0)) ||
     ((int)local_a4[3][5] < (int)(uint)*(byte *)(local_128 + 9))) {
    iVar17 = (int)(local_14c);
    iVar13 = (int)(local_14c);
    puVar25 = (uint *)(local_11c);
    if (((*(char *)((int)local_124 + 0x11) != '\0') && (iVar17 = (int)(local_14c), (short)uStack_108 == 0)) && (iVar21 = (int)(0), iVar17 = (int)(local_14c), 0 < (int)local_138)) {
      do {
        uVar11 = (uint)(*(uint *)(local_a4[iVar21 + 3][0xe] + 8));
        FUN_1132b960(local_124, uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18,5,local_a4[iVar21 + 3][1],&local_140);
        iVar21 = (int)(iVar21 + 1);
        iVar17 = (int)(local_140);
        iVar13 = (int)(local_140);
        puVar25 = (uint *)(local_11c);
      } while (iVar21 < (int)puVar24);
    }
  }
  else {
    local_140 = (int)(FUN_11311e10(local_a4[3],0xffffffff), 0);
    FUN_11310d70(local_a4[3],iVar17,&local_140);
    local_14c = (int)(local_140);
    iVar17 = (int)(local_140);
    iVar13 = (int)(local_140);
    puVar25 = (uint *)(local_11c);
    if (local_140 == 0) {
      iVar17 = (int)(FUN_1131b700(local_a4[3][0xd],local_a4[3],local_a4[3][1]), 0);
      iVar13 = (int)(iVar17);
      puVar25 = (uint *)(local_11c);
    }
  }
  for (; local_14c = (int)((int)(iVar13)), puVar12 = (uint *)(local_11c), bVar4 = (bool)((int)puVar24 < (int)local_11c), local_11c = (uint *)(puVar25), bVar4; puVar24 = (uint *)((int)puVar24 + 1)) {
    puVar3 = (uint *)(local_a4[(int)puVar24]);
    if (iVar17 == 0) {
      iVar17 = (int)(FUN_1131b700(puVar3[0xd],puVar3,puVar3[1]), 0);
    }
    iVar13 = (int)(local_14c);
    puVar25 = (uint *)(local_11c);
    local_11c = (uint *)(puVar12);
  }
LAB_1130711b:
  local_14c = (int)(iVar17);
  iVar17 = (int)(local_dc);
  if (local_dc != 0) {
    if (DAT_12121e80 == 0) {
      (*(code *)(uint)(DAT_12121ea4))(local_dc);
    }
    else {
      if (DAT_122f6d88 != 0) {
        (*(code *)(uint)(DAT_12121ed0))(DAT_122f6d88);
      }
      iVar13 = (int)((*(code *)(uint)(DAT_12121eac))(iVar17), 0);
      DAT_122f6d28 = (int)(DAT_122f6d28 - iVar13);
      DAT_122f6d4c = (int)(DAT_122f6d4c + -1);
      (*(code *)(uint)(DAT_12121ea4))(iVar17);
      if (DAT_122f6d88 != 0) {
        (*(code *)(uint)(DAT_12121ed8))(DAT_122f6d88);
      }
    }
  }
LAB_11307920:
  puVar24 = (uint *)(local_11c);
  iVar17 = (int)(0);
  if (0 < (int)local_11c) {
    do {
      if ((uint *)(local_a4[iVar17]) != (uint *)(0x0)) {
        uVar11 = (uint)(local_a4[iVar17][0x12]);
        if ((*(byte *)(uVar11 + 0x1c) & 0x20) == 0) {
          FUN_1135ea30(uVar11);
        }
        else {
          iVar13 = (int)(*(int *)(uVar11 + 0x14));
          *(int*)(iVar13 + 0x78) = (int)(*(int *)(iVar13 + 0x78) + -1);
          *(undefined4*)(uVar11 + 0x10) = (undefined4)(*(undefined4 *)(iVar13 + 0x88));
          piVar22 = (int *)(*(int **)(iVar13 + 0x3c), 0);
          *(uint*)(iVar13 + 0x88) = (uint)(uVar11);
          uVar28 = (undefined4)(*(undefined4 *)(uVar11 + 4));
          iVar21 = (int)(*piVar22);
          uVar27 = (undefined8)(__allmul(*(int *)(uVar11 + 0x18) + -1,0,*(int *)(iVar13 + 0x98), *(int *)(iVar13 + 0x98) >> 0x1f), 0);
          (**(code **)(iVar21 + 0x48))(piVar22,uVar27,uVar28);
        }
      }
      iVar17 = (int)(iVar17 + 1);
    } while (iVar17 < (int)puVar24);
  }
  puVar24 = (uint *)(local_138);
  iVar17 = (int)(0);
  if (0 < (int)local_138) {
    do {
      if ((uint *)(local_a4[iVar17 + 3]) != (uint *)(0x0)) {
        uVar11 = (uint)(local_a4[iVar17 + 3][0x12]);
        if ((*(byte *)(uVar11 + 0x1c) & 0x20) == 0) {
          FUN_1135ea30(uVar11);
        }
        else {
          iVar13 = (int)(*(int *)(uVar11 + 0x14));
          *(int*)(iVar13 + 0x78) = (int)(*(int *)(iVar13 + 0x78) + -1);
          *(undefined4*)(uVar11 + 0x10) = (undefined4)(*(undefined4 *)(iVar13 + 0x88));
          piVar22 = (int *)(*(int **)(iVar13 + 0x3c), 0);
          *(uint*)(iVar13 + 0x88) = (uint)(uVar11);
          uVar28 = (undefined4)(*(undefined4 *)(uVar11 + 4));
          iVar21 = (int)(*piVar22);
          uVar27 = (undefined8)(__allmul(*(int *)(uVar11 + 0x18) + -1,0,*(int *)(iVar13 + 0x98), *(int *)(iVar13 + 0x98) >> 0x1f), 0);
          (**(code **)(iVar21 + 0x48))(piVar22,uVar27,uVar28);
        }
      }
      iVar17 = (int)(iVar17 + 1);
    } while (iVar17 < (int)puVar24);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1130c8c0; body size 364 bytes.
#line 1 "ENTRY_1130c8c0"

void FUN_1130c8c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  size_t _Size;
  int *piVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar4 = (int *)((int *)*param_1);
  piVar1 = (int *)((int *)piVar4[2]);
  param_1[0xc] = (int)(param_1[0xc] | 1);
  iVar2 = (int)(piVar1[0x1b]);
  if ((int)((iVar2)) < piVar1[0x1c]) {
    piVar1[0x1b] = (int)(iVar2 + 1);
    iVar6 = (int)(piVar1[0x1a]);
    *(undefined4*)(iVar6 + iVar2 * 0x14) = (undefined4)(0x85);
    *(undefined4*)(iVar6 + 8 + iVar2 * 0x14) = (undefined4)(0);
    *(undefined4*)(iVar6 + 0x10 + iVar2 * 0x14) = (undefined4)(0);
    iVar6 = (int)(iVar6 + iVar2 * 0x14);
    *(undefined4*)(iVar6 + 4) = (undefined4)(param_4);
    *(undefined4*)(iVar6 + 0xc) = (undefined4)(param_3);
  }
  else {
    FUN_1131dfc0(piVar1,0x85,param_4,0,param_3);
  }
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    piVar5 = (int *)(piVar4);
    if ((int *)piVar4[0x1b] != (int *)(((0x0)))) {
      piVar5 = (int *)((int *)piVar4[0x1b]);
    }
    if (piVar5[0x14] == 0) {
      iVar2 = (int)(*(int *)(param_2 + 0xc));
      _Size = (size_t)(*(short *)(iVar2 + 0x2a) * 4 + 4);
      if (*piVar4 == (int)((0))) {
        piVar4 = (int *)((int *)FUN_11358b90(_Size,0), 0);
      }
      else {
        piVar4 = (int *)((int *)FUN_113434e0(*piVar4), 0);
      }
      if ((int *)(piVar4) != (int *)(0x0)) {
        memset(piVar4,0,_Size);
        iVar6 = (int)(0);
        *piVar4 = (int)((int)*(short *)(iVar2 + 0x2a));
        if (*(int *)(uintptr_t)(param_2 + 0x34) != 1 && -1 < (uintptr_t)(*(int *)(uintptr_t)(param_2 + 0x34) - 1)) {
          do {
            sVar3 = (short)(*(short *)(*(int *)(param_2 + 4) + iVar6 * 2));
            if (-1 < sVar3) {
              sVar3 = (short)(FUN_1136d300(iVar2,sVar3), 0);
              piVar4[sVar3 + 1] = (int)(iVar6 + 1);
            }
            iVar6 = (int)(iVar6 + 1);
          } while (iVar6 < (int)(*(ushort *)(param_2 + 0x34) - 1));
        }
        if (*(char *)(*piVar1 + 0x51) != '\0') {
          FUN_113433c0(*piVar1,piVar4);
          return;
        }
        iVar2 = (int)(piVar1[0x1a] + (piVar1[0x1b] + -1) * 0x14);
        if (*(char *)(piVar1[0x1a] + 1 + (piVar1[0x1b] + -1) * 0x14) != '\0') {
          FUN_1139f480(piVar1,iVar2,piVar4,0xfffffff1);
          return;
        }
        *(int**)(iVar2 + 0x10) = (int *)(piVar4);
        *(undefined1*)(iVar2 + 1) = (undefined1)(0xf1);
      }
    }
  }
  return;
}


// Reference entry 1131fc40; body size 1554 bytes.
#line 1 "ENTRY_1131fc40"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1131fc40(undefined4 param_1,int param_2,undefined4 *param_3,longlong *param_4)

{
  char cVar1;
  ushort uVar2;
  double *pdVar3;
  bool bVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  float10 fVar17;
  double in_XMM0_Qa;
  longlong lVar18;
  undefined8 uVar19;
  uint local_14;
  uint local_10;
  uint local_c;
  double local_8;
  
  memset(param_4,0,0x30);
  if (param_2 == 0) {
    uVar5 = (undefined4)(FUN_113350e0(param_1,param_4), 0);
    return (undefined4)(uVar5);
  }
  pdVar3 = (double *)((double *)*param_3);
  uVar2 = (ushort)(*(ushort *)(pdVar3 + 1));
  if (((&DAT_119f7d40)[uVar2 & 0x3f] == '\x02') || ((&DAT_119f7d40)[uVar2 & 0x3f] == '\x01')) {
    if ((uVar2 & 8) == 0) {
      if ((uVar2 & 0x24) == 0) {
        if ((uVar2 & 0x12) == 0) {
          in_XMM0_Qa = (double)(0.0);
        }
        else {
          fVar17 = (float10)((float10)FUN_11322a10(pdVar3), 0);
          in_XMM0_Qa = (double)((double)fVar17);
          local_8 = (double)(in_XMM0_Qa);
        }
      }
      else {
        thunk_FUN_1148b0c0();
      }
    }
    else {
      in_XMM0_Qa = (double)(*pdVar3);
    }
    param_4[4] = (longlong)((longlong)in_XMM0_Qa);
    *(undefined1*)((int)param_4 + 0x29) = (undefined1)(1);
    if ((0.0 <= in_XMM0_Qa) && (in_XMM0_Qa < DAT_11a02e50)) {
      lVar18 = (longlong)(thunk_FUN_1148af70(), 0);
      *param_4 = (longlong)(lVar18);
      *(undefined1*)(param_4 + 5) = (undefined1)(1);
    }
    goto LAB_1131fe92;
  }
  if ((double *)(pdVar3, 0) == (double *)(0x0)) {
    return (undefined4)(1);
  }
  if (((uVar2 & 0x202) == 0x202) && (*(char *)((int)pdVar3 + 10) == '\x01')) {
    pcVar6 = (char *)(*(char **)(pdVar3 + 2), 0);
  }
  else {
    if ((uVar2 & 1) != 0) {
      return (undefined4)(1);
    }
    pcVar6 = (char *)((char *)FUN_1139f3d0(pdVar3,1), 0);
  }
  if ((char *)(pcVar6) == (char *)(0x0)) {
    return (undefined4)(1);
  }
  cVar1 = (char)(*pcVar6);
  pcVar11 = (char *)(pcVar6 + 1);
  if (cVar1 != '-') {
    pcVar11 = (char *)(pcVar6);
  }
  iVar7 = (int)(FUN_1131ced0(pcVar11,"40f-21a-21d",&local_14,&local_c,&local_10), 0);
  if (iVar7 == 3) {
    for (pbVar13 = (byte *)((byte *)(pcVar11 + 10));
        (((&DAT_119fb400)[*pbVar13] & 1) != 0 || (*pbVar13 == (byte)((0x54)))); pbVar13 = pbVar13 + 1) {
    }
    iVar7 = (int)(FUN_113285b0(pbVar13,param_4), 0);
    if (iVar7 != 0) {
      if (*pbVar13 != (byte)((0))) goto LAB_1131fec6;
      *(undefined1*)((int)param_4 + 0x2b) = (undefined1)(0);
    }
    *(undefined1*)(param_4 + 5) = (undefined1)(0);
    *(undefined1*)((int)param_4 + 0x2a) = (undefined1)(1);
    if (cVar1 == '-') {
      local_14 = (uint)(-local_14);
    }
    *(uint*)(param_4 + 1) = (uint)(local_14);
    *(uint*)((int)param_4 + 0xc) = (uint)(local_c);
    *(uint*)(param_4 + 2) = (uint)(local_10);
    if (*(char *)((int)param_4 + 0x2c) != '\0') {
      if ((local_14 + 0x1269 < 0x3979) && (*(char *)((int)param_4 + 0x29) == '\0')) {
        lVar18 = (longlong)(thunk_FUN_1148af70(), 0);
        local_c = (uint)((uint)((ulonglong)lVar18 >> 0x20));
        *param_4 = (longlong)(lVar18);
        *(undefined1*)(param_4 + 5) = (undefined1)(1);
        if (*(char *)((int)param_4 + 0x2b) != '\0') {
          uVar8 = (uint)(((int)param_4[3] + (*(int *)((int)param_4 + 0x14) * 0x10 - *(int *)((int)param_4 + 0x14)) * 4) *
                  60000);
          uVar9 = (uint)(*(int *)((int)param_4 + 0x1c) * 60000);
          uVar14 = (uint)(uVar8 + *(int *)((int)param_4 + 0x1c) * -60000);
          uVar19 = (undefined8)(thunk_FUN_1148af70(), 0);
          uVar15 = (uint)(uVar14 - (uint)uVar19);
          *(undefined2*)((int)param_4 + 0x2a) = (undefined2)(0);
          *(undefined1*)((int)param_4 + 0x2c) = (undefined1)(0);
          *(uint*)param_4 = (uint)((longlong *)(uVar15 + (uint)lVar18));
          *(uint*)((int)param_4 + 4) = (uint)(((((((int)uVar8 >> 0x1f) - ((int)uVar9 >> 0x1f)) - (uint)(uVar8 < uVar9)) -
                (int)((ulonglong)uVar19 >> 0x20)) - (uint)(uVar14 < (uint)uVar19)) + local_c + (uint)((uint)(uVar15) + (uint)((uint)lVar18) < (uint)(uVar15)));
        }
      }
      else {
        memset(param_4,0,0x30);
        *(undefined1*)((int)param_4 + 0x2e) = (undefined1)(1);
      }
    }
  }
  else {
LAB_1131fec6:
    iVar7 = (int)(FUN_113285b0(pcVar6,param_4), 0);
    if (iVar7 != 0) {
      iVar7 = (int)(FUN_1136cfd0(pcVar6,&DAT_118e8d3c), 0);
      if ((iVar7 == 0) && (iVar7 = (int)(FUN_11359a00(param_1), 0), iVar7 != 0)) {
        iVar7 = (int)(FUN_113350e0(param_1,param_4), 0);
        if (iVar7 != 0) {
          return (undefined4)(1);
        }
      }
      else {
        pcVar11 = (char *)(pcVar6);
        do {
          cVar1 = (char)(*pcVar11);
          pcVar11 = (char *)(pcVar11 + 1);
        } while (cVar1 != '\0');
        iVar7 = (int)(FUN_11337cc0(pcVar6,&local_8,(int)pcVar11 - (int)(pcVar6 + 1) & 0x3fffffff,1), 0);
        if (iVar7 < 1) {
          return (undefined4)(1);
        }
        bVar4 = (bool)(DAT_11880f98 <= local_8);
        *(undefined1*)((int)param_4 + 0x29) = (undefined1)(1);
        param_4[4] = (longlong)((longlong)local_8);
        if ((bVar4) && (local_8 < DAT_11a02e50)) {
          lVar18 = (longlong)(thunk_FUN_1148af70(), 0);
          *param_4 = (longlong)(lVar18);
          *(undefined1*)(param_4 + 5) = (undefined1)(1);
        }
      }
    }
  }
LAB_1131fe92:
  iVar7 = (int)(1);
  if (1 < param_2) {
    do {
      piVar12 = (int *)((int *)param_3[iVar7]);
      if ((int *)(piVar12) == (int *)(0x0)) {
        iVar16 = (int)(0);
      }
      else if (((*(ushort *)(piVar12 + 2) & 0x202) == 0x202) &&
              (*(char *)((int)piVar12 + 10) == '\x01')) {
        iVar16 = (int)(piVar12[4]);
      }
      else if ((*(ushort *)(piVar12 + 2) & 1) == 0) {
        iVar16 = (int)(FUN_1139f3d0(piVar12,1), 0);
        piVar12 = (int *)((int *)param_3[iVar7]);
      }
      else {
        iVar16 = (int)(0);
      }
      uVar2 = (ushort)(*(ushort *)(piVar12 + 2));
      if (((uVar2 & 2) == 0) || (*(char *)((int)piVar12 + 10) != '\x01')) {
        if ((uVar2 & 0x10) == 0) {
          if ((uVar2 & 1) == 0) {
            iVar10 = (int)(FUN_1139ecf0(piVar12,1), 0);
          }
          else {
            iVar10 = (int)(0);
          }
        }
        else {
          iVar10 = (int)(piVar12[3]);
          if ((uVar2 & 0x4000) != 0) {
            iVar10 = (int)(*piVar12 + iVar10);
          }
        }
      }
      else {
        iVar10 = (int)(piVar12[3]);
      }
      if (iVar16 == 0) {
        return (undefined4)(1);
      }
      iVar16 = (int)(FUN_113287e0(param_1,iVar16,iVar10,param_4), 0);
      if (iVar16 != 0) {
        return (undefined4)(1);
      }
      iVar7 = (int)(iVar7 + 1);
    } while (iVar7 < param_2);
  }
  if ((char)param_4[5] == '\0') {
    if (((*(char *)((int)param_4 + 0x2a) == '\0') ||
        ((-0x126a < (int)param_4[1] && ((int)param_4[1] < 10000)))) &&
       (*(char *)((int)param_4 + 0x29) == '\0')) {
      lVar18 = (longlong)(thunk_FUN_1148af70(), 0);
      *param_4 = (longlong)(lVar18);
      *(undefined1*)(param_4 + 5) = (undefined1)(1);
      if (*(char *)((int)param_4 + 0x2b) != '\0') {
        uVar8 = (uint)(((int)param_4[3] + (*(int *)((int)param_4 + 0x14) * 0x10 - *(int *)((int)param_4 + 0x14)) * 4) * 60000);
        uVar19 = (undefined8)(thunk_FUN_1148af70(), 0);
        lVar18 = (longlong)(lVar18 + ((unsigned long long)((((int)uVar8 >> 0x1f) - (int)((ulonglong)uVar19 >> 0x20)) -
                                   (uint)(uVar8 < (uint)uVar19)) << 32 | (unsigned long long)(uVar8 - (uint)uVar19)));
        *param_4 = (longlong)(lVar18);
        if (*(char *)((int)param_4 + 0x2c) != '\0') {
          uVar8 = (uint)(*(int *)((int)param_4 + 0x1c) * 60000);
          *(undefined2*)((int)param_4 + 0x2a) = (undefined2)(0);
          *(undefined1*)((int)param_4 + 0x2c) = (undefined1)(0);
          *(uint*)param_4 = (uint)((longlong *)((uint)lVar18 + *(int *)((int)param_4 + 0x1c) * -60000));
          *(uint*)((int)param_4 + 4) = (uint)(((int)((ulonglong)lVar18 >> 0x20) - ((int)uVar8 >> 0x1f)) -
               (uint)((uint)lVar18 < uVar8));
        }
      }
    }
    else {
      memset(param_4,0,0x30);
      *(undefined1*)((int)param_4 + 0x2e) = (undefined1)(1);
    }
  }
  if (((*(char *)((int)param_4 + 0x2e) == '\0') && (*(uint *)((int)param_4 + 4) < 0x1a641)) &&
     ((*(int *)(uintptr_t)((int)param_4 + 4) < 0x1a640 || ((uintptr_t)(*(undefined **)param_4)< (uintptr_t)(&UNK_1072fe00))))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11321070; body size 605 bytes.
#line 1 "ENTRY_11321070"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_11321070(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  errno_t eVar6;
  int iVar7;
  undefined8 uVar8;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  double local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2a;
  tm local_28;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_90);
  local_28.tm_sec = (int)(0);
  local_28.tm_min = (int)(0);
  local_28.tm_hour = (int)(0);
  local_28.tm_mday = (int)(0);
  local_28.tm_mon = (int)(0);
  local_28.tm_year = (int)(0);
  local_28.tm_wday = (int)(0);
  local_28.tm_yday = (int)(0);
  local_88 = (undefined4)(*param_1);
  uStack_84 = (undefined4)(param_1[1]);
  iStack_80 = (int)(param_1[2]);
  uStack_7c = (undefined4)(param_1[3]);
  local_28.tm_isdst = (int)(0);
  local_78 = (undefined4)(param_1[4]);
  uStack_74 = (undefined4)(param_1[5]);
  uStack_70 = (undefined4)(param_1[6]);
  uStack_6c = (undefined4)(param_1[7]);
  local_68 = (double)(*(double *)(param_1 + 8));
  uStack_60 = (uint)(param_1[10]);
  uStack_5c = (undefined4)(param_1[0xb]);
  FUN_1130eea0(&local_88);
  FUN_1130e9d0(&local_88);
  if (iStack_80 - 0x7b3U < 0x43) {
    local_68 = (double)((double)(int)(local_68 + DAT_118a1c40));
  }
  else {
    iStack_80 = (int)(DAT_11a02f80);
    uStack_7c = (undefined4)(_UNK_11a02f84);
    local_78 = (undefined4)(_UNK_11a02f88);
    uStack_74 = (undefined4)(_UNK_11a02f8c);
    uStack_70 = (undefined4)(0);
    local_68 = (double)(0.0);
  }
  uStack_6c = (undefined4)(0);
  uStack_60 = (uint)(uStack_60 & 0xffffff00);
  FUN_1130eab0(&local_88);
  uVar8 = (undefined8)(__alldiv(local_88,uStack_84,1000,0), 0);
  local_90 = (int)((uint)uVar8 + 0xe75c96c0);
  local_8c = (int)(((int)((ulonglong)uVar8 >> 0x20) + -0x31) - (uint)((uint)uVar8 < 0x18a36940));
  if ((DAT_12121f78 == 0) && (eVar6 = (errno_t)(_localtime64_s(&local_28,(__time64_t *)&local_90), 0), eVar6 == 0) ) {
    local_50 = (int)(local_28.tm_year + 0x76c);
    local_4c = (int)(local_28.tm_mon + 1);
    local_30 = (undefined4)(0x1010000);
    local_48 = (int)(local_28.tm_mday);
    local_38 = (double)((double)local_28.tm_sec);
    local_44 = (int)(local_28.tm_hour);
    local_40 = (int)(local_28.tm_min);
    local_2c = (undefined1)(0);
    local_2a = (undefined1)(0);
    FUN_1130eab0((uint)&local_58);
    *param_3 = (undefined4)(0);
    thunk_FUN_1148ac28();
    return;
  }
  param_2[5] = (int)(1);
  iVar1 = (int)(*param_2);
  iVar7 = (int)(*(int *)(iVar1 + 0x20));
  if ((iVar7 == 0) || (0x15 < *(int *)(iVar7 + 0x6c))) {
    if (*(int *)(iVar1 + 0x18) < 0x20) {
      iVar7 = (int)(FUN_1137ead0(iVar1,0x20,0), 0);
      if (iVar7 != 0) goto LAB_113212ac;
    }
    else {
      *(ushort*)(iVar1 + 8) = (ushort)(*(ushort *)(iVar1 + 8) & 0x2d);
      *(undefined4*)(iVar1 + 0x10) = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    }
    uVar5 = (undefined4)(*(uint *)((char * *)((uint)&s_local_time_unavailable_119fe60c) + 12));
    uVar4 = (undefined4)(*(uint *)((char * *)((uint)&s_local_time_unavailable_119fe60c) + 8));
    uVar3 = (undefined4)(*(uint *)((char * *)((uint)&s_local_time_unavailable_119fe60c) + 4));
    pcVar2 = (char *)(*(char **)(iVar1 + 0x10), 0);
    *(undefined4*)pcVar2 = (undefined4)((char *)(*(uint *)((char * *)((uint)&s_local_time_unavailable_119fe60c) + 0)), 0);
    *(undefined4*)(pcVar2 + 4) = (undefined4)(uVar3);
    *(undefined4*)(pcVar2 + 8) = (undefined4)(uVar4);
    *(undefined4*)(pcVar2 + 0xc) = (undefined4)(uVar5);
    *(undefined4*)(pcVar2 + 0x10) = (undefined4)(*(uint *)((char * *)((uint)&s_local_time_unavailable_119fe60c) + 16), 0);
    *(undefined2*)(pcVar2 + 0x14) = (undefined2)(*(uint *)((char * *)((uint)&s_local_time_unavailable_119fe60c) + 20), 0);
    pcVar2[0x16] = (char)(s_local_time_unavailable_119fe60c[0x16]);
    *(undefined4*)(iVar1 + 0xc) = (undefined4)(0x16);
    *(undefined2*)(iVar1 + 8) = (undefined2)(0x202);
    *(undefined1*)(iVar1 + 10) = (undefined1)(1);
  }
  else {
    iVar1 = (int)(*(int *)(iVar7 + 0xec));
    if (iVar1 != 0) {
      *(int*)(iVar1 + 0x24) = (int)(*(int *)(iVar1 + 0x24) + 1);
      *(undefined4*)(iVar1 + 0xc) = (undefined4)(0x12);
    }
  }
LAB_113212ac:
  *param_3 = (undefined4)(1);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1132bb30; body size 320 bytes.
#line 1 "ENTRY_1132bb30"

int FUN_1132bb30(undefined4 *param_1,int param_2,char *param_3,code *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  int iVar4;
  undefined4 *local_1c;
  code *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  short local_8;
  code *local_4;
  
  iVar4 = (int)(0);
  if (((((char *)(param_3) != (char *)(0x0)) && ((*(uint *)(param_2 + 4) & 0x2000) == 0)) &&
      (*(int *)(param_2 + 0x44) == 0)) && (*(int *)(param_2 + 0x3c) == 0)) {
    cVar1 = (char)(*param_3);
    while (cVar1 == ',') {
      iVar2 = (int)(FUN_1132bb30(param_1,param_2,*(undefined4 *)(param_3 + 0x10),param_4,param_5), 0);
      param_3 = (char *)(*(char **)(param_3 + 0xc), 0);
      iVar4 = (int)(iVar4 + iVar2);
      cVar1 = (char)(*param_3);
    }
    if (param_5 == 0) {
      if ((param_3[4] & 1U) == 0) goto LAB_1132bbb7;
    }
    else {
      if ((param_3[4] & 1U) == 0) {
        return (int)(0);
      }
      if ((uintptr_t)(int)*(int *)(uintptr_t)(param_3 + 0x20) != (short)((param_4))) {
        return (int)(0);
      }
    }
    if ((uintptr_t)(int)*(int *)(uintptr_t)(param_3 + 0x20) == (short)((param_4))) {
LAB_1132bbb7:
      local_18 = (code *)(FUN_11317030);
      local_8 = (short)(3);
      local_4 = (code *)(param_4);
      local_14 = (code *)((code *)&LAB_1136b280);
      FUN_113a82c0(&local_1c,param_3);
      if (local_8 != 0) {
        iVar4 = (int)(iVar4 + 1);
        do {
          uVar3 = (undefined4)(FUN_11316310(*param_1,param_3,0,0), 0);
          FUN_1139db10(uVar3,0xffffffff);
          local_1c = (undefined4 *)(param_1);
          local_18 = (code *)(param_4);
          local_14 = (code *)(param_4);
          local_10 = (undefined4)(0);
          local_c = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
          uVar3 = (undefined4)(FUN_1139c7e0(&local_1c,extraout_EDX), 0);
          if ((*(byte *)(param_2 + 4) & 8) == 0) {
            uVar3 = (undefined4)(FUN_113466d0(param_1,*(undefined4 *)(param_2 + 0x24),uVar3), 0);
            *(undefined4*)(param_2 + 0x24) = (undefined4)(uVar3);
          }
          else {
            uVar3 = (undefined4)(FUN_113466d0(param_1,*(undefined4 *)(param_2 + 0x2c),uVar3), 0);
            *(undefined4*)(param_2 + 0x2c) = (undefined4)(uVar3);
          }
          param_2 = (int)(*(int *)(param_2 + 0x34));
        } while (param_2 != 0);
      }
      return (int)(iVar4);
    }
  }
  return (int)(0);
}


// Reference entry 1135ee40; body size 14247 bytes.
#line 1 "ENTRY_1135ee40"

/* WARNING: Removing unreachable block_1135ee40 (ram,0x11361ff3) */

void FUN_1135ee40(int *param_1,undefined4 param_2,byte *param_3,undefined4 param_4,int param_5)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 *puVar4;
  bool bVar5;
  int *piVar6;
  char cVar7;
  undefined1 uVar8;
  short sVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int *piVar14;
  char *pcVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  int *piVar20;
  byte *pbVar21;
  short *psVar22;
  char *pcVar23;
  byte bVar24;
  uint uVar25;
  int iVar26;
  byte *pbVar27;
  uint uVar28;
  int *piVar29;
  uint *puVar30;
  undefined **ppuVar31;
  undefined4 uVar32;
  byte *pbVar33;
  bool bVar34;
  undefined8 uVar35;
  longlong lVar36;
  undefined4 uVar37;
  int *local_a0;
  int *local_9c;
  byte *local_98;
  byte *local_94;
  byte *pbStack_90;
  byte *local_8c;
  byte *local_88;
  byte *pbStack_84;
  byte *local_80;
  char *local_7c;
  uint local_78;
  int *piStack_74;
  byte *pbStack_70;
  char cStack_69;
  char *pcStack_68;
  byte *pbStack_64;
  int *local_60;
  char *pcStack_5c;
  uint uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined *puStack_40;
  int local_3c;
  byte *local_38;
  byte *local_34;
  undefined4 local_30;
  byte abStack_2c [40];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_a0);
  local_a0[0] = (int)((int *)*param_1);
  piVar10 = (int *)((int *)param_1[2]);
  local_9c = (int *)(param_1);
  local_94 = (byte *)(param_3);
  if ((int *)(piVar10) == (int *)(0x0)) {
    if ((param_1[0x1b] == 0) && ((*(byte *)((uint)&local_a0 + 0x13) & 8) == 0)) {
      *(undefined1*)((int)param_1 + 0x17) = (undefined1)(1);
    }
    local_60 = (int *)(piVar10);
    piVar10 = (int *)((int *)FUN_11372dd0(param_1), 0);
    local_60 = (int *)(piVar10);
    if ((int *)(piVar10) == (int *)(0x0)) goto LAB_113625ce;
  }
  piVar10[0x26] = (int)(piVar10[0x26] | 0x40);
  local_9c[0xb] = (int)(2);
  local_60 = (int *)(piVar10);
  local_88 = (byte *)((byte *)FUN_1136e3b0(local_9c,param_2,param_3,&local_98), 0);
  if ((int)local_88 < 0) goto LAB_113625ce;
  local_7c = (char *)((char *)((int)local_88 * 0x10));
  puVar30 = (uint *)((uint *)(local_7c + local_a0[4]));
  if ((((byte *)(local_88) == (byte *)(0x1)) && (iVar11 = (int)(FUN_1135a0c0(local_9c), 0), iVar11 != 0)) ||
     (local_80 = (byte *)((byte *)FUN_11359810((uint)&local_a0,local_98), 0),(byte *)( local_80) == (byte *)(0x0))) goto LAB_113625ce;
  if (param_5 == 0) {
    local_8c = (byte *)((byte *)FUN_11359810((uint)&local_a0,param_4), 0);
  }
  else {
    local_8c = (byte *)((byte *)FUN_11358b70(), 0);
  }
  pbVar13 = (byte *)(local_80);
  if (*(int *)(param_3 + 4) == 0) {
    local_78 = (uint)(0);
  }
  else {
    local_78 = (uint)(*puVar30);
  }
  iVar11 = (int)(FUN_113386c0(local_9c,0x13,local_80,local_8c,local_78), 0);
  if (iVar11 != 0) goto LAB_113625a9;
  local_38 = (byte *)(pbVar13);
  iVar26 = (int)(1);
  local_34 = (byte *)(local_8c);
  local_30 = (undefined4)(0);
  local_a0[0x66] = (int)(uintptr_t)((int *)(0));
  local_3c = (int)(iVar11);
  if (local_a0[3] != 0) {
    (*(code *)(uint)(DAT_12121ed0))(local_a0[3]);
  }
  if (local_78 == 0) {
    iVar11 = (int)(0);
LAB_1135efea:
    iVar11 = (int)(*(int *)(local_a0[4] + 4 + iVar11 * 0x10));
    if (iVar11 != 0) {
      iVar11 = (int)(**(int **)(**(int **)(iVar11 + 4) + 0x3c), 0);
      if (iVar11 == 0) {
        iVar26 = (int)(0xc);
      }
      else {
        iVar26 = (int)((**(code **)(iVar11 + 0x28))(), 0);
      }
    }
  }
  else {
    iVar11 = (int)(FUN_1134c5b0((uint)&local_a0,local_78), 0);
    if (-1 < iVar11) goto LAB_1135efea;
  }
  if (local_a0[3] != 0) {
    (*(code *)(uint)(DAT_12121ed8))(local_a0[3]);
  }
  if (iVar26 == 0) {
    FUN_11380ad0(piVar10,1);
    FUN_11380a70(piVar10,0,0,local_3c,0xffffffff);
    if (local_3c != 0) {
      FUN_113722f0(piVar10,0x73,0,1,0,local_3c,0);
      iVar11 = (int)(piVar10[0x1b]);
      if ((int)((iVar11)) < piVar10[0x1c]) {
        piVar10[0x1b] = (int)(iVar11 + 1);
        iVar26 = (int)(piVar10[0x1a]);
        *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(0x50);
        *(undefined4*)(iVar26 + 4 + iVar11 * 0x14) = (undefined4)(1);
        *(undefined4*)(iVar26 + 8 + iVar11 * 0x14) = (undefined4)(1);
        *(undefined4*)(iVar26 + 0xc + iVar11 * 0x14) = (undefined4)(0);
        *(undefined4*)(iVar26 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
      }
      else {
        FUN_1131dfc0(piVar10,0x50,1,1,0);
      }
      iVar11 = (int)(local_3c);
      if (local_3c != 0) {
        if (DAT_12121e80 != 0) {
          if (DAT_122f6d88 != 0) {
            (*(code *)(uint)(DAT_12121ed0))(DAT_122f6d88);
          }
          iVar26 = (int)((*(code *)(uint)(DAT_12121eac))(iVar11), 0);
          DAT_122f6d28 = (int)(DAT_122f6d28 - iVar26);
          DAT_122f6d4c = (int)(DAT_122f6d4c + -1);
          (*(code *)(uint)(DAT_12121ea4))(iVar11);
          iVar11 = (int)(DAT_122f6d88);
          goto LAB_11361ce2;
        }
        (*(code *)(uint)(DAT_12121ea4))(local_3c);
      }
    }
    goto LAB_113625a9;
  }
  if (iVar26 != 0xc) {
    if ((local_3c != 0) && (FUN_11345ed0(), iVar11 = (int)(local_3c), local_3c != 0)) {
      if (DAT_12121e80 == 0) {
        (*(code *)(uint)(DAT_12121ea4))(local_3c);
      }
      else {
        if (DAT_122f6d88 != 0) {
          (*(code *)(uint)(DAT_12121ed0))(DAT_122f6d88);
        }
        iVar12 = (int)((*(code *)(uint)(DAT_12121eac))(iVar11), 0);
        DAT_122f6d28 = (int)(DAT_122f6d28 - iVar12);
        DAT_122f6d4c = (int)(DAT_122f6d4c + -1);
        (*(code *)(uint)(DAT_12121ea4))(iVar11);
        if (DAT_122f6d88 != 0) {
          (*(code *)(uint)(DAT_12121ed8))(DAT_122f6d88);
          local_9c[9] = (int)(local_9c[9] + 1);
          local_9c[3] = (int)(iVar26);
          goto LAB_113625a9;
        }
      }
    }
    local_9c[9] = (int)(local_9c[9] + 1);
    local_9c[3] = (int)(iVar26);
    goto LAB_113625a9;
  }
  pbVar13 = (byte *)((byte *)FUN_1132b210(local_80), 0);
  pbStack_70 = (byte *)(pbVar13);
  if (((byte *)(pbVar13) == (byte *)(0x0)) ||
     (((pbVar13[5] & 1) != 0 && (iVar11 = (int)(FUN_11363d60(local_9c), 0), iVar11 != 0)))) goto LAB_113625a9;
  if (((pbVar13[5] & 2) == 0) && (((pbVar13[5] & 4) == 0 || ((byte *)(local_8c) == (byte *)(0x0))))) {
    FUN_11335340(piVar10,pbVar13);
  }
  uVar19 = (uint)(local_78);
  pbVar33 = (byte *)(local_88);
  piVar20 = (int *)(local_9c);
  piVar14 = (int *)((uint)&local_a0);
  switch(pbVar13[4]) {
  case 0:
    uVar32 = (undefined4)(*(undefined4 *)(pbVar13 + 8));
    piVar10[0x27] = (int)(piVar10[0x27] | 1 << ((uint)local_88 & 0x1f));
    if (((byte *)(local_8c) == (byte *)(0x0)) || ((pbVar13[5] & 8) != 0)) {
      iVar11 = (int)(FUN_113724a0(piVar10,3,&DAT_119f7e04,0), 0);
      *(byte**)(iVar11 + 4) = (byte *)(pbVar33);
      *(byte**)(iVar11 + 0x18) = (byte *)(pbVar33);
      *(undefined4*)(iVar11 + 0x20) = (undefined4)(uVar32);
      goto LAB_11361acc;
    }
    iVar11 = (int)(FUN_113724a0(piVar10,2,&DAT_119f7dfc,0), 0);
    local_98 = (byte *)((byte *)0x0);
    *(byte**)(iVar11 + 4) = (byte *)(pbVar33);
    *(byte**)(iVar11 + 0x18) = (byte *)(pbVar33);
    *(undefined4*)(iVar11 + 0x1c) = (undefined4)(uVar32);
    FUN_11353050(local_8c,&local_98);
    *(byte**)(iVar11 + 0x20) = (byte *)(local_98);
    FUN_113433c0((uint)&local_a0,local_80);
    goto LAB_113625c1;
  case 1:
    uVar19 = (uint)(puVar30[1]);
    if ((byte *)(local_8c) == (byte *)(0x0)) {
      iVar11 = (int)(FUN_1133b7c0(uVar19), 0);
      FUN_11332320(piVar10,iVar11,iVar11 >> 0x1f);
      FUN_113433c0((uint)&local_a0,local_80);
      goto LAB_113625ce;
    }
    iVar11 = (int)(FUN_1136cfd0(local_8c,&DAT_1186d560), 0);
    pbVar13 = (byte *)(local_8c);
    if (iVar11 == 0) {
      uVar28 = (uint)(0);
    }
    else {
      iVar11 = (int)(FUN_1136cfd0(local_8c,&DAT_11a01588), 0);
      if (iVar11 == 0) {
        uVar28 = (uint)(1);
      }
      else {
        iVar11 = (int)(FUN_1136cfd0(pbVar13,"incremental"), 0);
        if (iVar11 == 0) {
          uVar28 = (uint)(2);
        }
        else {
          pbStack_90 = (byte *)((byte *)0x0);
          FUN_11353050(pbVar13,&pbStack_90);
          pbVar13 = (byte *)((byte *)0x0);
          if ((byte *)(pbStack_90) < (byte *)0x3) {
            pbVar13 = (byte *)(pbStack_90);
          }
          uVar28 = (uint)((uint)pbVar13 & 0xff);
        }
      }
    }
    *(char*)((uint)&local_a0 + 0x15) = (char)((char)uVar28);
    iVar11 = (int)(FUN_1133d9b0(uVar19,uVar28), 0);
    if ((iVar11 == 0) && ((uVar28 == 1 || (uVar28 == 2)))) {
      iVar11 = (int)(piVar10[0x1b]);
      iVar26 = (int)(FUN_113724a0(piVar10,5,&DAT_119f7da0,0), 0);
      *(int*)(iVar26 + 0x30) = (int)(iVar11 + 4);
      *(byte**)(iVar26 + 4) = (byte *)(local_88);
      *(byte**)(iVar26 + 0x18) = (byte *)(local_88);
      *(byte**)(iVar26 + 0x54) = (byte *)(local_88);
      *(uint*)(iVar26 + 0x5c) = (uint)(uVar28 - 1);
      piVar10[0x27] = (int)(piVar10[0x27] | 1 << ((uint)local_88 & 0x1f));
    }
    break;
  case 2:
    if ((byte *)(local_8c) == (byte *)(0x0)) {
      FUN_11335340(piVar10,pbVar13);
      piVar20 = (int *)((uint)&local_a0);
      bVar34 = (bool)((*(uint *)(pbVar13 + 8) & local_a0[8]) == 0);
      bVar5 = (bool)((*(uint *)(pbVar13 + 0xc) & local_a0[9]) == 0);
      if (bVar34 && bVar5) {
        uStack_48 = (undefined8)(0);
      }
      uVar32 = (undefined4)(0);
      uVar19 = (uint)((uint)(!bVar34 || !bVar5));
      FUN_11332320();
      FUN_113433c0(piVar20,local_80,piVar10,uVar19,uVar32);
      goto LAB_113625ce;
    }
    uVar19 = (uint)(*(uint *)(pbVar13 + 8));
    uVar28 = (uint)(*(uint *)(pbVar13 + 0xc));
    if (*(char *)((int)(uint)&local_a0 + 0x4f) == '\0') {
      uVar19 = (uint)(uVar19 & 0xffffbfff);
    }
    cVar7 = (char)(FUN_11352e40(local_8c,0), 0);
    if (cVar7 == '\0') {
      local_a0[8] = (int)(uintptr_t)((int *)(~uVar19 & local_a0[8]));
      local_a0[9] = (int)(uintptr_t)((int *)(~uVar28 & local_a0[9]));
      if ((uVar19 == 0x80000) && (uVar28 == 0)) {
        local_a0[0x76] = (int)(uintptr_t)((int *)(0));
        local_a0[0x77] = (int)(uintptr_t)((int *)(0));
      }
    }
    else {
      local_a0[8] = (int)(uintptr_t)((int *)(uVar19 | local_a0[8]));
      local_a0[9] = (int)(uintptr_t)((int *)(uVar28 | local_a0[9]));
    }
    FUN_11372120(piVar10,0x9e);
    FUN_11334f70();
    break;
  default:
    if ((byte *)(local_8c) != (byte *)(0x0)) {
      local_98 = (byte *)((byte *)0x0);
      FUN_11353050(local_8c,&local_98);
      pbVar13 = (byte *)(local_98);
      if ((int)local_98 < 1) {
        thunk_FUN_11390f20();
      }
      else {
        thunk_FUN_11390f20();
        local_a0[0x71] = (int)(uintptr_t)((int *)((int)pbVar13));
        *(undefined1*)((uint)&local_a0 + 0x67) = (undefined1)(1);
      }
    }
    goto LAB_113625a0;
  case 4:
    if ((byte *)(local_8c) == (byte *)(0x0)) {
      iVar11 = (int)(*(int *)(puVar30[3] + 0x50));
      iVar26 = (int)(iVar11 >> 0x1f);
LAB_1135fcbf:
      FUN_11332320();
      FUN_113433c0((uint)&local_a0,local_80,piVar10,iVar11,iVar26);
      goto LAB_113625ce;
    }
    pbStack_90 = (byte *)((byte *)0x0);
    FUN_11353050(local_8c,&pbStack_90);
    *(byte**)(puVar30[3] + 0x50) = (byte *)(pbStack_90);
    iVar11 = (int)(*(int *)(**(int **)(puVar30[1] + 4) + 0xe4), 0);
    iVar26 = (int)(*(int *)(puVar30[3] + 0x50));
    *(int*)(iVar11 + 0x10) = (int)(iVar26);
    if (iVar26 < 0) {
      iVar12 = (int)(*(int *)(iVar11 + 0x1c) + *(int *)(iVar11 + 0x18));
      iVar26 = (int)(__alldiv((longlong)iVar26 * -0x400,iVar12,iVar12 >> 0x1f), 0);
    }
    (*(code *)(uint)(DAT_12121ef8))(*(undefined4 *)(iVar11 + 0x2c),iVar26);
    break;
  case 5:
    if ((byte *)(local_8c) == (byte *)(0x0)) {
      uVar19 = (uint)(0);
      if ((local_a0[8] & 0x20U) != 0) {
        uVar19 = (uint)(FUN_1133db60(puVar30[1],0), 0);
      }
LAB_1135fabf:
      iVar11 = (int)((int)uVar19 >> 0x1f);
      FUN_11332320();
      FUN_113433c0(piVar14,local_80,piVar10,uVar19,iVar11);
      goto LAB_113625ce;
    }
    pbStack_90 = (byte *)((byte *)0x1);
    iVar11 = (int)(FUN_11353050(local_8c,&pbStack_90), 0);
    pbVar13 = (byte *)(pbStack_90);
    if (iVar11 != 0) {
      iVar11 = (int)(*(int *)(**(int **)(puVar30[1] + 4) + 0xe4), 0);
      if ((byte *)(pbStack_90) != (byte *)(0x0)) {
        pbVar33 = (byte *)(pbStack_90);
        if ((int)pbStack_90 < 0) {
          iVar26 = (int)(*(int *)(iVar11 + 0x1c) + *(int *)(iVar11 + 0x18));
          pbVar33 = (byte *)((byte *)__alldiv((longlong)(int)pbStack_90 * -0x400,iVar26,iVar26 >> 0x1f), 0);
        }
        *(byte**)(iVar11 + 0x14) = (byte *)(pbVar33);
      }
    }
    cVar7 = (char)(FUN_11352e40(local_8c,(byte *)(pbVar13) != (byte *)(0x0)), 0);
    if (cVar7 == '\0') {
      uVar19 = (uint)(local_a0[8] & 0xffffffdf);
    }
    else {
      uVar19 = (uint)(local_a0[8] | 0x20);
    }
    local_a0[8] = (int)(uintptr_t)((int *)(uVar19));
    local_a0[9] = (int)(uintptr_t)((int *)(local_a0[9]));
    FUN_11334f70((uint)&local_a0);
    break;
  case 6:
    if ((byte *)(local_8c) != (byte *)(0x0)) {
      uVar8 = (undefined1)(FUN_11352e40(local_8c,0), 0);
      FUN_113644e0((uint)&local_a0,uVar8);
    }
    break;
  case 7:
    iVar11 = (int)(0);
    local_9c[0xb] = (int)(2);
    for (puVar18 = (undefined4 *)((undefined4 *)local_a0[0x62]);(undefined4 *)( puVar18) != (undefined4 *)(0x0);
        puVar18 = (undefined4 *)*puVar18) {
      FUN_1137f730(piVar10,1,&DAT_11a016d0,iVar11,*(undefined4 *)puVar18[2]);
      iVar11 = (int)(iVar11 + 1);
    }
    break;
  case 8:
    uVar19 = (uint)(0);
    local_9c[0xb] = (int)(1);
    while (uVar19 < 0xf) {
      ppuVar31 = (undefined **)(&PTR_s_COMPILER_msvc_1928_119fc028 + uVar19);
      uVar19 = (uint)(uVar19 + 1);
      if ((undefined *)(*ppuVar31) == (undefined *)(0x0)) break;
      FUN_113722f0(piVar10,0x73,0,1,0,*ppuVar31,0);
      iVar11 = (int)(piVar10[0x1b]);
      if ((int)((iVar11)) < piVar10[0x1c]) {
        piVar10[0x1b] = (int)(iVar11 + 1);
        iVar26 = (int)(piVar10[0x1a]);
        *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(0x50);
        *(undefined4*)(iVar26 + 4 + iVar11 * 0x14) = (undefined4)(1);
        *(undefined4*)(iVar26 + 8 + iVar11 * 0x14) = (undefined4)(1);
        *(undefined4*)(iVar26 + 0xc + iVar11 * 0x14) = (undefined4)(0);
        *(undefined4*)(iVar26 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
      }
      else {
        FUN_1131dfc0(piVar10,0x50,1,1,0);
      }
    }
LAB_11361acc:
    piVar10[0x26] = (int)(piVar10[0x26] & 0xffffffbf);
    break;
  case 9:
    if ((byte *)(local_8c) == (byte *)(0x0)) {
      FUN_113323d0(piVar10,DAT_122f6cc4);
      FUN_113433c0((uint)&local_a0,local_80);
      goto LAB_113625ce;
    }
    if ((*local_8c == (byte)((0))) ||
       ((iVar11 = (int)((**(code **)(*local_a0 + 0x20))(*local_a0,local_8c,1,&local_98), 0), iVar11 == 0 &&
        ((byte *)(local_98) != (byte *)(0x0))))) {
      thunk_FUN_113949e0(DAT_122f6cc4);
      if (*local_8c == (byte)((0))) {
        DAT_122f6cc4 = (int)(0);
        break;
      }
      DAT_122f6cc4 = (int)(thunk_FUN_11395b10(&DAT_1188bc94,local_8c), 0);
    }
    else {
      pcVar23 = (char *)("not a writable directory");
LAB_1135fc56:
      FUN_11345ed0(local_9c,pcVar23);
    }
LAB_1135fc5f:
    FUN_113433c0((uint)&local_a0,local_80);
    goto LAB_113625c1;
  case 10:
    iVar11 = (int)(0);
    local_9c[0xb] = (int)(3);
    if ((int *)((0)) < (int *)(local_a0[5])) {
      iVar26 = (int)(0);
      do {
        iVar12 = (int)(*(int *)(piVar14[4] + 4 + iVar26));
        if (iVar12 != 0) {
          iVar12 = (int)(**(int **)(iVar12 + 4), 0);
          if (*(char *)(iVar12 + 0xf) == '\0') {
            puVar16 = (undefined1 *)(*(undefined1 **)(iVar12 + 0xa8), 0);
          }
          else {
            puVar16 = (undefined1 *)(&DAT_119f77dc);
          }
          FUN_1137f730(piVar10,1,&DAT_11a016cc,iVar11,*(undefined4 *)(piVar14[4] + iVar26),puVar16);
        }
        iVar11 = (int)(iVar11 + 1);
        iVar26 = (int)(iVar26 + 0x10);
      } while ((int)((iVar11)) < piVar14[5]);
    }
    break;
  case 0xd:
    iVar11 = (int)(local_9c[0xb]);
    local_88 = (byte *)((byte *)(iVar11 + 1));
    pcStack_68 = (char *)((char *)(iVar11 + 5));
    local_9c[0xb] = (int)(iVar11 + 6);
    pbVar13 = (byte *)(*(byte **)(*(int *)(local_7c + local_a0[4] + 0xc) + 0x10), 0);
    while ((byte *)(pbVar13) != (byte *)(0x0)) {
      if ((byte *)(local_8c) == (byte *)(0x0)) {
        pbVar33 = (byte *)(*(byte **)(pbVar13 + 8), 0);
        pbStack_64 = (byte *)(*(byte **)pbVar13);
      }
      else {
        pbVar33 = (byte *)((byte *)FUN_11358530(local_9c,0,local_8c,local_78), 0);
        pbStack_64 = (byte *)((byte *)0x0);
      }
      pbVar13 = (byte *)(pbStack_64);
      local_94 = (byte *)(pbVar33);
      if (((byte *)(pbVar33) != (byte *)(0x0)) && (*(int *)(pbVar33 + 0x10) != 0)) {
        uVar19 = (uint)(0xfff0bdc0);
        if (*(int *)(pbVar33 + 0x48) != 0) {
          uVar19 = (uint)(0);
          piVar20 = (int *)((int *)(local_a0[4] + 0xc));
          iVar11 = (int)(*piVar20);
          while ((int)(iVar11) != *(int *)(pbVar33 + 0x48)) {
            piVar20 = (int *)(piVar20 + 4);
            uVar19 = (uint)(uVar19 + 1);
            iVar11 = (int)(*piVar20);
          }
        }
        piVar20 = (int *)(local_9c);
        if ((int *)local_9c[0x1b] != (int *)(((0x0)))) {
          piVar20 = (int *)((int *)local_9c[0x1b]);
        }
        if (((piVar20[0x15] & 1 << ((byte)uVar19 & 0x1f)) == 0) &&
           (piVar20[0x15] = piVar20[0x15] | 1 << (uVar19 & 0x1f), uVar19 == 1)) {
          FUN_1135a0c0(piVar20);
        }
        if (local_9c[0xb] < (int)(pcStack_68 + *(short *)(pbVar33 + 0x2a) + 1)) {
          local_9c[0xb] = (int)((int)(pcStack_68 + *(short *)(pbVar33 + 0x2a) + 1));
        }
        FUN_11359d10(local_9c,0,uVar19,pbVar33,0x60);
        FUN_113722f0(piVar10,0x73,0,local_88,0,*(undefined4 *)pbVar33,0);
        iVar26 = (int)(1);
        for (iVar11 = (int)(*(int *)(pbVar33 + 0x10)); iVar11 != 0; iVar11 = *(int *)(iVar11 + 4)) {
          local_98 = (byte *)((byte *)FUN_1134d470(), 0);
          if ((byte *)(local_98) != (byte *)(0x0)) {
            local_7c = (char *)((char *)0x0);
            iVar12 = (int)(FUN_1134f240(local_9c,local_98,iVar11,&local_7c,0), 0);
            if (iVar12 != 0) goto LAB_113625a9;
            if ((char *)(local_7c) == (char *)(0x0)) {
              FUN_11359d10(local_9c,iVar26,uVar19,local_98,0x60);
            }
            else {
              iVar12 = (int)(piVar10[0x1b]);
              uVar32 = (undefined4)(*(undefined4 *)(local_7c + 0x2c));
              if ((int)((iVar12)) < piVar10[0x1c]) {
                piVar10[0x1b] = (int)(iVar12 + 1);
                iVar17 = (int)(piVar10[0x1a]);
                *(undefined4*)(iVar17 + iVar12 * 0x14) = (undefined4)(0x60);
                *(int*)(iVar17 + 4 + iVar12 * 0x14) = (int)(iVar26);
                *(undefined4*)(iVar17 + 8 + iVar12 * 0x14) = (undefined4)(uVar32);
                *(uint*)(iVar17 + 0xc + iVar12 * 0x14) = (uint)(uVar19);
                *(undefined4*)(iVar17 + 0x10 + iVar12 * 0x14) = (undefined4)(0);
                piVar10 = (int *)(local_60);
              }
              else {
                FUN_1131dfc0(piVar10,0x60,iVar26,uVar32,uVar19);
              }
              pbStack_90 = (byte *)((byte *)local_9c[2]);
              piVar20 = (int *)((int *)FUN_11357a40(local_9c,local_7c), 0);
              if ((int *)(piVar20) != (int *)(0x0)) {
                if (*(char *)(*(int *)pbStack_90 + 0x51) == '\0') {
                  iVar12 = (int)(*(int *)(pbStack_90 + 0x6c));
                  iVar17 = (int)(*(int *)(pbStack_90 + 0x68));
                  *(undefined1*)(iVar17 + -0x13 + iVar12 * 0x14) = (undefined1)(0xf7);
                  *(int**)(iVar17 + -4 + iVar12 * 0x14) = (int *)(piVar20);
                }
                else if ((*(int *)(*(int *)pbStack_90 + 0x1e0) == 0) &&
                        (*piVar20 = *piVar20 + -1, *piVar20 == (int)((0)))) {
                  FUN_113433c0(piVar20[3],piVar20);
                }
              }
            }
          }
          iVar26 = (int)(iVar26 + 1);
        }
        if (local_9c[10] < iVar26) {
          local_9c[10] = (int)(iVar26);
        }
        uStack_58 = (uint)(piVar10[0x1b]);
        if ((int)(int)((uStack_58)) < piVar10[0x1c]) {
          piVar10[0x1b] = (int)(uStack_58 + 1);
          iVar11 = (int)(piVar10[0x1a]);
          *(undefined4*)(iVar11 + uStack_58 * 0x14) = (undefined4)(0x25);
          *(undefined4*)(iVar11 + 4 + uStack_58 * 0x14) = (undefined4)(0);
          *(undefined4*)(iVar11 + 8 + uStack_58 * 0x14) = (undefined4)(0);
          *(undefined4*)(iVar11 + 0xc + uStack_58 * 0x14) = (undefined4)(0);
          *(undefined4*)(iVar11 + 0x10 + uStack_58 * 0x14) = (undefined4)(0);
        }
        else {
          uStack_58 = (uint)(FUN_1131dfc0(piVar10,0x25,0,0,0), 0);
        }
        piStack_74 = (int *)((int *)0x1);
        pbVar13 = (byte *)(*(byte **)(local_94 + 0x10), 0);
        uVar19 = (uint)(uStack_58);
        while (pbStack_70 = (byte *)(pbVar13), uStack_58 = (uint)(uVar19),(byte *)( pbVar13) != (byte *)(0x0)) {
          local_98 = (byte *)((byte *)FUN_1134d470(), 0);
          local_7c = (char *)((char *)0x0);
          pbStack_90 = (byte *)((byte *)0x0);
          if ((byte *)(local_98) != (byte *)(0x0)) {
            FUN_1134f240(local_9c,local_98,pbVar13,&local_7c,&pbStack_90);
          }
          pbVar13 = (byte *)(pbStack_90);
          iVar26 = (int)(0);
          local_9c[0xe] = (int)(local_9c[0xe] + -1);
          pbStack_84 = (byte *)((byte *)local_9c[0xe]);
          iVar11 = (int)(*(int *)(pbStack_70 + 0x14));
          if (0 < iVar11) {
            pbStack_90 = (byte *)(pbStack_70 + 0x24);
            pcVar23 = (char *)(pcStack_68);
            do {
              pcVar23 = (char *)(pcVar23 + 1);
              pbVar33 = (byte *)(pbVar13 + iVar26 * 4);
              if ((byte *)(pbVar13) == (byte *)(0x0)) {
                pbVar33 = (byte *)(pbStack_90);
              }
              FUN_11347490(piVar10,local_94,0,*(undefined4 *)pbVar33,pcVar23);
              iVar11 = (int)(piVar10[0x1b]);
              if ((int)((iVar11)) < piVar10[0x1c]) {
                piVar10[0x1b] = (int)(iVar11 + 1);
                iVar12 = (int)(piVar10[0x1a]);
                *(undefined4*)(iVar12 + iVar11 * 0x14) = (undefined4)(0x32);
                *(char**)(iVar12 + 4 + iVar11 * 0x14) = (char *)(pcVar23);
                *(byte**)(iVar12 + 8 + iVar11 * 0x14) = (byte *)(pbStack_84);
                *(undefined4*)(iVar12 + 0xc + iVar11 * 0x14) = (undefined4)(0);
                *(undefined4*)(iVar12 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
              }
              else {
                FUN_1131dfc0(piVar10,0x32,pcVar23,pbStack_84,0);
              }
              iVar26 = (int)(iVar26 + 1);
              pbStack_90 = (byte *)(pbStack_90 + 8);
              iVar11 = (int)(*(int *)(pbStack_70 + 0x14));
            } while (iVar26 < iVar11);
          }
          pbVar33 = (byte *)(pbStack_84);
          if ((char *)(local_7c) == (char *)(0x0)) {
            pbVar21 = (byte *)(pbStack_70);
            if ((byte *)(local_98) != (byte *)(0x0)) {
              iVar11 = (int)(piVar10[0x1b]);
              if ((int)((iVar11)) < piVar10[0x1c]) {
                piVar10[0x1b] = (int)(iVar11 + 1);
                iVar26 = (int)(piVar10[0x1a]);
                *(int*)(iVar26 + 8 + iVar11 * 0x14) = (int)(iVar11 + 2);
                *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(0x1f);
                *(int**)(iVar26 + 4 + iVar11 * 0x14) = (int *)(piStack_74);
                *(char**)(iVar26 + 0xc + iVar11 * 0x14) = (char *)(pcStack_68 + 1);
                *(undefined4*)(iVar26 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
              }
              else {
                FUN_1131dfc0(piVar10,0x1f,piStack_74,iVar11 + 2,pcStack_68 + 1);
              }
              FUN_1137d7b0(piVar10,pbVar33);
              pbVar21 = (byte *)(pbStack_70);
            }
          }
          else {
            uVar32 = (undefined4)(FUN_11354aa0(), 0);
            pbVar21 = (byte *)(pbStack_70);
            FUN_113722f0(piVar10,0x5b,pcStack_68 + 1,*(undefined4 *)(pbStack_70 + 0x14),pcStack_68, uVar32,iVar11);
            FUN_113723f0(piVar10,0x1e,piStack_74,pbVar33,pcStack_68,0);
          }
          iVar11 = (int)(piVar10[0x1b]);
          if ((local_94[0x24] & 0x80) == 0) {
            if ((int)((iVar11)) < piVar10[0x1c]) {
              piVar10[0x1b] = (int)(iVar11 + 1);
              iVar26 = (int)(piVar10[0x1a]);
              *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(0x7f);
LAB_113609c1:
              *(undefined4*)(iVar26 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
              *(undefined4*)(iVar26 + 0xc + iVar11 * 0x14) = (undefined4)(0);
              *(byte**)(iVar26 + 8 + iVar11 * 0x14) = (byte *)(local_88 + 1);
              *(undefined4*)(iVar26 + 4 + iVar11 * 0x14) = (undefined4)(0);
              pbVar21 = (byte *)(pbStack_70);
            }
            else {
              FUN_1131dfc0(piVar10,0x7f,0,local_88 + 1,0);
            }
          }
          else {
            if ((int)((iVar11)) < piVar10[0x1c]) {
              piVar10[0x1b] = (int)(iVar11 + 1);
              iVar26 = (int)(piVar10[0x1a]);
              *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(0x48);
              goto LAB_113609c1;
            }
            FUN_1131dfc0(piVar10,0x48,0,local_88 + 1,0);
          }
          FUN_1137f730(piVar10,local_88 + 2,&DAT_11a016e0,*(undefined4 *)(pbVar21 + 8), (int)piStack_74 + -1);
          iVar11 = (int)(piVar10[0x1b]);
          if ((int)((iVar11)) < piVar10[0x1c]) {
            piVar10[0x1b] = (int)(iVar11 + 1);
            iVar26 = (int)(piVar10[0x1a]);
            *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(0x50);
            *(byte**)(iVar26 + 4 + iVar11 * 0x14) = (byte *)(local_88);
            *(undefined4*)(iVar26 + 8 + iVar11 * 0x14) = (undefined4)(4);
            *(undefined4*)(iVar26 + 0xc + iVar11 * 0x14) = (undefined4)(0);
            *(undefined4*)(iVar26 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
          }
          else {
            FUN_1131dfc0(piVar10,0x50,local_88,4,0);
          }
          iVar11 = (int)(piVar10[3]);
          if (*(int *)(iVar11 + 0x3c) + *(int *)(iVar11 + 0x38) < 0) {
            FUN_1132f720();
          }
          else {
            *(int *)(*(int *)(iVar11 + 0x40) + ~(uint)pbVar33 * 4) = piVar10[0x1b];
          }
          if ((byte *)(pbVar13) != (byte *)(0x0)) {
            if (local_a0[0x78] == 0) {
              if ((byte *)(pbVar13) < (byte *)local_a0[0x51]) {
                if ((byte *)(pbVar13) < (byte *)local_a0[0x4f]) {
                  if ((byte *)(pbVar13) < (byte *)local_a0[0x50]) goto LAB_11360ad4;
                  *(int*)pbVar13 = (int)((byte *)(local_a0[0x4c]));
                  local_a0[0x4c] = (int)(uintptr_t)((int *)((int)pbVar13));
                }
                else {
                  *(int*)pbVar13 = (int)((byte *)(local_a0[0x4e]));
                  local_a0[0x4e] = (int)(uintptr_t)((int *)((int)pbVar13));
                }
              }
              else {
LAB_11360ad4:
                if (DAT_12121e80 == 0) {
                  (*(code *)(uint)(DAT_12121ea4))(pbVar13);
                }
                else {
                  if (DAT_122f6d88 != 0) {
                    (*(code *)(uint)(DAT_12121ed0))(DAT_122f6d88);
                  }
                  iVar11 = (int)((*(code *)(uint)(DAT_12121eac))(pbVar13), 0);
                  DAT_122f6d28 = (int)(DAT_122f6d28 - iVar11);
                  DAT_122f6d4c = (int)(DAT_122f6d4c + -1);
                  (*(code *)(uint)(DAT_12121ea4))(pbVar13);
                  if (DAT_122f6d88 != 0) {
                    (*(code *)(uint)(DAT_12121ed8))(DAT_122f6d88);
                  }
                }
              }
            }
            else {
              FUN_11322960((uint)&local_a0,pbVar13);
            }
          }
          piStack_74 = (int *)((int *)((int)piStack_74 + 1));
          uVar19 = (uint)(uStack_58);
          pbVar13 = (byte *)(*(byte **)(pbVar21 + 4), 0);
        }
        iVar11 = (int)(piVar10[0x1b]);
        if ((int)((iVar11)) < piVar10[0x1c]) {
          piVar10[0x1b] = (int)(iVar11 + 1);
          iVar26 = (int)(piVar10[0x1a]);
          *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(5);
          *(undefined4*)(iVar26 + 4 + iVar11 * 0x14) = (undefined4)(0);
          *(uint*)(iVar26 + 8 + iVar11 * 0x14) = (uint)(uVar19 + 1);
          *(undefined4*)(iVar26 + 0xc + iVar11 * 0x14) = (undefined4)(0);
          *(undefined4*)(iVar26 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
        }
        else {
          FUN_1131dfc0(piVar10,5,0,uVar19 + 1,0);
        }
        if (*(char *)(*piVar10 + 0x51) == '\0') {
          uVar28 = (uint)(piVar10[0x1b] - 1);
          if (-1 < (int)uVar19) {
            uVar28 = (uint)(uVar19);
          }
          puVar16 = (undefined1 *)((undefined1 *)(piVar10[0x1a] + uVar28 * 0x14));
        }
        else {
          puVar16 = (undefined1 *)(&DAT_122f7054);
        }
        *(int*)(puVar16 + 8) = (int)(piVar10[0x1b]);
        pbVar13 = (byte *)(pbStack_64);
      }
    }
    break;
  case 0xe:
    if ((((byte *)(local_8c) != (byte *)(0x0)) && (local_98 = (byte *)((byte *)FUN_1134d470(), 0),(byte *)( local_98) != (byte *)(0x0))) && (iVar11 = (int)(*(int *)(local_98 + 0x10)), iVar11 != 0)) {
      iVar26 = (int)(-1000000);
      if (*(int *)(local_98 + 0x48) != 0) {
        iVar26 = (int)(0);
        piVar20 = (int *)((int *)(local_a0[4] + 0xc));
        iVar12 = (int)(*piVar20);
        while ((int)(iVar12) != *(int *)(local_98 + 0x48)) {
          piVar20 = (int *)(piVar20 + 4);
          iVar26 = (int)(iVar26 + 1);
          iVar12 = (int)(*piVar20);
        }
      }
      pbVar13 = (byte *)((byte *)0x0);
      local_94 = (byte *)((byte *)0x0);
      local_9c[0xb] = (int)(8);
      FUN_1133f8f0(local_9c,iVar26);
      do {
        iVar26 = (int)(0);
        if (0 < *(int *)(iVar11 + 0x14)) {
          piVar20 = (int *)((int *)(iVar11 + 0x24));
          do {
            switch(*(undefined1 *)(iVar11 + 0x19)) {
            case 7:
              pcVar23 = (char *)("RESTRICT");
              break;
            case 8:
              pcVar23 = (char *)("SET NULL");
              break;
            case 9:
              pcVar23 = (char *)("SET DEFAULT");
              break;
            case 10:
              pcVar23 = (char *)("CASCADE");
              break;
            default:
              pcVar23 = (char *)("NO ACTION");
            }
            switch(*(undefined1 *)(iVar11 + 0x1a)) {
            case 7:
              pcVar15 = (char *)("RESTRICT");
              break;
            case 8:
              pcVar15 = (char *)("SET NULL");
              break;
            case 9:
              pcVar15 = (char *)("SET DEFAULT");
              break;
            case 10:
              pcVar15 = (char *)("CASCADE");
              break;
            default:
              pcVar15 = (char *)("NO ACTION");
            }
            FUN_1137f730(piVar10,1,"iissssss",local_94,iVar26,*(undefined4 *)(iVar11 + 8), *(undefined4 *)(*(int *)(local_98 + 4) + *piVar20 * 0x14),piVar20[1], pcVar15,pcVar23,&DAT_1195f830);
            iVar26 = (int)(iVar26 + 1);
            piVar20 = (int *)(piVar20 + 2);
            pbVar13 = (byte *)(local_94);
          } while ((int)(iVar26) < *(int *)(iVar11 + 0x14));
        }
        iVar11 = (int)(*(int *)(iVar11 + 4));
        pbVar13 = (byte *)(pbVar13 + 1);
        local_94 = (byte *)(pbVar13);
      } while (iVar11 != 0);
    }
    break;
  case 0xf:
    piVar20 = (int *)(&DAT_122f6cc8);
    uVar19 = (uint)((uint)local_a0[6] >> 5 & 1);
    local_9c[0xb] = (int)(6);
    do {
      for (iVar11 = (int)(*piVar20); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x24)) {
        FUN_1132b150(piVar10,iVar11,1,uVar19);
      }
      piVar20 = (int *)(piVar20 + 1);
    } while ((int)piVar20 < 0x122f6d24);
    for (puVar18 = (undefined4 *)((undefined4 *)local_a0[0x5e]);(undefined4 *)( puVar18) != (undefined4 *)(0x0);
        puVar18 = (undefined4 *)*puVar18) {
      FUN_1132b150(piVar10,puVar18[2],0,uVar19);
    }
    break;
  case 0x10:
    if (((((byte *)(local_8c) != (byte *)(0x0)) && (iVar11 = (int)(FUN_113439b0(local_8c,&uStack_48), 0), iVar11 == 0)) &&
        ((lVar36 = (longlong)(thunk_FUN_11395140(0xffffffff,0xffffffff), 0), -1 < uStack_48 &&
         ((0xffffffff < uStack_48 || ((uint)uStack_48 != 0)))))) &&
       ((lVar36 == 0 || (uStack_48 < lVar36)))) {
      thunk_FUN_11395140(uStack_48);
    }
    uVar35 = (undefined8)(thunk_FUN_11395140(0xffffffff,0xffffffff), 0);
    FUN_11332320(piVar10,uVar35);
    break;
  case 0x11:
    if ((((byte *)(local_8c) == (byte *)(0x0)) || (iVar11 = (int)(FUN_11353050(local_8c,&local_98), 0), iVar11 == 0)) ||
       (pbVar13 = (byte *)(local_98), (int)local_98 < 1)) {
      pbVar13 = (byte *)((byte *)0x7fffffff);
    }
    pbVar33 = (byte *)(local_88);
    uVar32 = (undefined4)(0);
    pbVar21 = (byte *)(local_88);
    piVar20 = (int *)(local_9c);
    FUN_113396f0();
    FUN_11372200(piVar10,0x45,pbVar13,1,piVar20,uVar32,pbVar21);
    uVar32 = (undefined4)(FUN_11372190(piVar10,0x3c,pbVar33), 0);
    FUN_11372190(piVar10,0x50,1);
    FUN_11372200(piVar10,0x52,1,0xffffffff);
    FUN_11372200(piVar10,0x30,1,uVar32);
    FUN_1137dfd0(piVar10,uVar32);
    break;
  case 0x12:
    if (((byte *)(local_8c) != (byte *)(0x0)) &&
       ((iVar11 = (int)(FUN_1134d3a0(), 0), piVar20 = (int *)(local_9c), iVar11 != 0 ||
        (((iVar11 = (int)(FUN_11358530(local_9c,2,local_8c,uVar19), 0), iVar11 != 0 &&
          ((*(byte *)(iVar11 + 0x24) & 0x80) != 0)) && (iVar11 = (int)(FUN_11363c30(iVar11), 0), iVar11 != 0)) )))) {
      iVar26 = (int)(-1000000);
      if (*(int *)(iVar11 + 0x18) != 0) {
        iVar26 = (int)(0);
        piVar14 = (int *)((int *)(local_a0[4] + 0xc));
        iVar12 = (int)(*piVar14);
        while ((int)(iVar12) != *(int *)(iVar11 + 0x18)) {
          piVar14 = (int *)(piVar14 + 4);
          iVar26 = (int)(iVar26 + 1);
          iVar12 = (int)(*piVar14);
        }
      }
      if (*(int *)(pbVar13 + 8) == 0 && *(int *)(pbVar13 + 0xc) == 0) {
        uVar3 = (ushort)(*(ushort *)(iVar11 + 0x32));
        iVar12 = (int)(3);
      }
      else {
        uVar3 = (ushort)(*(ushort *)(iVar11 + 0x34));
        iVar12 = (int)(6);
      }
      local_94 = (byte *)((byte *)(uint)uVar3);
      piVar20[0xb] = (int)(iVar12);
      local_98 = (byte *)(*(byte **)(iVar11 + 0xc), 0);
      FUN_1133f8f0(piVar20,iVar26);
      uVar19 = (uint)(0);
      bVar34 = (bool)((short)local_94 != 0);
      if (bVar34) {
        do {
          sVar9 = (short)(*(short *)(*(int *)(iVar11 + 4) + uVar19 * 2));
          if (sVar9 < 0) {
            uVar32 = (undefined4)(0);
          }
          else {
            uVar32 = (undefined4)(*(undefined4 *)(*(int *)(local_98 + 4) + sVar9 * 0x14));
          }
          FUN_1137f730(piVar10,1,&DAT_11a016b4,uVar19,(int)sVar9,uVar32);
          if (*(int *)(pbVar13 + 8) != 0 || *(int *)(pbVar13 + 0xc) != 0) {
            FUN_1137f730(piVar10,4,&DAT_11a016bc,*(undefined1 *)(*(int *)(iVar11 + 0x1c) + uVar19), *(undefined4 *)(*(int *)(iVar11 + 0x20) + uVar19 * 4),(ushort)( uVar19) < *(ushort *)(iVar11 + 0x32));
          }
          iVar26 = (int)(piVar10[0x1b]);
          iVar12 = (int)(local_9c[0xb]);
          if ((int)((iVar26)) < piVar10[0x1c]) {
            piVar10[0x1b] = (int)(iVar26 + 1);
            iVar17 = (int)(piVar10[0x1a]);
            *(undefined4*)(iVar17 + iVar26 * 0x14) = (undefined4)(0x50);
            *(undefined4*)(iVar17 + 4 + iVar26 * 0x14) = (undefined4)(1);
            *(int*)(iVar17 + 8 + iVar26 * 0x14) = (int)(iVar12);
            *(undefined4*)(iVar17 + 0xc + iVar26 * 0x14) = (undefined4)(0);
            *(undefined4*)(iVar17 + 0x10 + iVar26 * 0x14) = (undefined4)(0);
            pbVar13 = (byte *)(pbStack_70);
          }
          else {
            FUN_1131dfc0(piVar10,0x50,1,iVar12,0);
          }
          uVar19 = (uint)(uVar19 + 1);
        } while ((int)uVar19 < (int)((uint)local_94 & 0xffff));
      }
    }
    break;
  case 0x13:
    if (((byte *)(local_8c) != (byte *)(0x0)) && (iVar11 = (int)(FUN_1134d470(), 0), iVar11 != 0)) {
      iVar26 = (int)(-1000000);
      if (*(int *)(iVar11 + 0x48) != 0) {
        iVar26 = (int)(0);
        piVar20 = (int *)((int *)(local_a0[4] + 0xc));
        iVar12 = (int)(*piVar20);
        while ((int)(iVar12) != *(int *)(iVar11 + 0x48)) {
          piVar20 = (int *)(piVar20 + 4);
          iVar26 = (int)(iVar26 + 1);
          iVar12 = (int)(*piVar20);
        }
      }
      local_9c[0xb] = (int)(5);
      FUN_1133f8f0(local_9c,iVar26);
      puVar18 = (undefined4 *)(*(undefined4 **)(iVar11 + 8), 0);
      iVar11 = (int)(0);
      if ((undefined4 *)(puVar18) != (undefined4 *)(0x0)) {
        uStack_48 = (undefined8)(0x119c0d641194c4bc);
        puStack_40 = (undefined *)(&DAT_119fd0ec);
        do {
          FUN_1137f730(piVar10,1,"isisi",iVar11,*puVar18,*(char *)((int)puVar18 + 0x36) != '\0', *(undefined4 *)((int)&uStack_48 + (puVar18[0xe] & 3) * 4),puVar18[9] != 0);
          puVar18 = (undefined4 *)((undefined4 *)puVar18[5]);
          iVar11 = (int)(iVar11 + 1);
        } while ((undefined4 *)(puVar18) != (undefined4 *)(0x0));
      }
    }
    break;
  case 0x14:
    iVar11 = (int)(*(int *)param_3);
    bVar24 = (byte)(*local_80);
    local_98 = (byte *)((byte *)0x64);
    pbStack_64 = (byte *)((byte *)0x64);
    local_9c[0xb] = (int)(6);
    cStack_69 = (char)((&DAT_119fb300)[bVar24]);
    pbVar13 = (byte *)(local_88);
    if (iVar11 == 0) {
      pbVar13 = (byte *)((byte *)0xffffffff);
    }
    local_88 = (byte *)(pbVar13);
    if (((byte *)(local_8c) != (byte *)(0x0)) &&
       (FUN_11353050(local_8c,&pbStack_64), local_98 = (byte *)(pbStack_64), (int)pbStack_64 < 1)) {
      local_98 = (byte *)((byte *)0x64);
    }
    pbVar33 = (byte *)(local_98);
    FUN_11372200(piVar10,0x45,local_98 + -1,1);
    local_94 = (byte *)((byte *)0x0);
    piVar14 = (int *)((uint)&local_a0);
    if ((int *)((0)) < (int *)(local_a0[5])) {
      do {
        if (((int)pbVar13 < 0) || ((byte *)((local_94)) == (byte *)(pbVar13))) {
          if ((int *)piVar20[0x1b] != (int *)(((0x0)))) {
            piVar20 = (int *)((int *)piVar20[0x1b]);
          }
          if (((piVar20[0x15] & 1 << ((byte)local_94 & 0x1f)) == 0) &&
             (piVar20[0x15] = piVar20[0x15] | 1 << ((uint)local_94 & 0x1f),(byte *)( local_94) == (byte *)(0x1)) ) {
            FUN_1135a0c0(piVar20);
          }
          pcStack_5c = (char *)((char *)((int)local_94 * 0x10));
          pbStack_64 = (byte *)(*(byte **)(pcStack_5c + local_a0[4] + 0xc), 0);
          puVar18 = (undefined4 *)(*(undefined4 **)(pbStack_64 + 0x10), 0);
          iVar11 = (int)(0);
          while (iVar26 = (int)(iVar11),(undefined4 *)( puVar18) != (undefined4 *)(0x0)) {
            iVar11 = (int)(0);
            for (iVar12 = (int)(*(int *)(puVar18[2] + 8)); iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x14)) {
              iVar11 = (int)(iVar11 + 1);
            }
            puVar18 = (undefined4 *)((undefined4 *)*puVar18);
            if (iVar11 <= iVar26) {
              iVar11 = (int)(iVar26);
            }
          }
          piVar20 = (int *)((int *)FUN_113434e0(), 0);
          piVar29 = (int *)(local_9c);
          pbVar33 = (byte *)(local_98);
          if ((int *)(piVar20) == (int *)(0x0)) break;
          iVar11 = (int)(0);
          for (puVar18 = (undefined4 *)(*(undefined4 **)(pbStack_64 + 0x10), 0);(undefined4 *)( puVar18) != (undefined4 *)(0x0);
              puVar18 = (undefined4 *)*puVar18) {
            iVar12 = (int)(puVar18[2]);
            if ((*(byte *)(iVar12 + 0x24) & 0x80) == 0) {
              iVar11 = (int)(iVar11 + 1);
              piVar20[iVar11] = (int)(*(int *)(iVar12 + 0x1c));
            }
            for (iVar12 = (int)(*(int *)(iVar12 + 8)); iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x14)) {
              iVar11 = (int)(iVar11 + 1);
              piVar20[iVar11] = (int)(*(int *)(iVar12 + 0x2c));
            }
          }
          *piVar20 = (int)(iVar11);
          iVar12 = (int)(local_9c[0xb]);
          if (local_9c[0xb] <= iVar26 + 8) {
            iVar12 = (int)(iVar26 + 8);
          }
          *(undefined1*)((int)local_9c + 0x13) = (undefined1)(0);
          local_9c[0xb] = (int)(iVar12);
          local_9c[7] = (int)(0);
          FUN_113722f0(piVar10,0x92,2,iVar11,1,piVar20,0xfffffff1);
          iVar11 = (int)(piVar10[0x1b]);
          if (0 < iVar11) {
            *(ushort*)(piVar10[0x1a] + -0x12 + iVar11 * 0x14) = (ushort)((ushort)local_94 & 0xff);
            iVar11 = (int)(piVar10[0x1b]);
          }
          if ((int)((iVar11)) < piVar10[0x1c]) {
            piVar10[0x1b] = (int)(iVar11 + 1);
            iVar26 = (int)(piVar10[0x1a]);
            *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(0x32);
            *(undefined4*)(iVar26 + 4 + iVar11 * 0x14) = (undefined4)(2);
            *(undefined4*)(iVar26 + 8 + iVar11 * 0x14) = (undefined4)(0);
            *(undefined4*)(iVar26 + 0xc + iVar11 * 0x14) = (undefined4)(0);
            *(undefined4*)(iVar26 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
          }
          else {
            iVar11 = (int)(FUN_1131dfc0(piVar10,0x32,2,0,0), 0);
          }
          uVar32 = (undefined4)(FUN_11358b70((uint)&local_a0,"*** in database %s ***\n", *(undefined4 *)(pcStack_5c + local_a0[4]),0xfffffff9), 0);
          FUN_113722f0(piVar10,0x73,0,3,0,uVar32);
          iVar26 = (int)(piVar10[0x1b]);
          if ((int)((iVar26)) < piVar10[0x1c]) {
            piVar10[0x1b] = (int)(iVar26 + 1);
            iVar12 = (int)(piVar10[0x1a]);
            *(undefined4*)(iVar12 + iVar26 * 0x14) = (undefined4)(0x6e);
            *(undefined4*)(iVar12 + 4 + iVar26 * 0x14) = (undefined4)(2);
            *(undefined4*)(iVar12 + 8 + iVar26 * 0x14) = (undefined4)(3);
            *(undefined4*)(iVar12 + 0xc + iVar26 * 0x14) = (undefined4)(3);
            *(undefined4*)(iVar12 + 0x10 + iVar26 * 0x14) = (undefined4)(0);
          }
          else {
            FUN_1131dfc0(piVar10,0x6e,2,3,3);
          }
          FUN_1131f4c0(piVar10);
          if (*(char *)(*piVar10 + 0x51) == '\0') {
            iVar26 = (int)(piVar10[0x1b] + -1);
            if (-1 < iVar11) {
              iVar26 = (int)(iVar11);
            }
            puVar16 = (undefined1 *)((undefined1 *)(piVar10[0x1a] + iVar26 * 0x14));
          }
          else {
            puVar16 = (undefined1 *)(&DAT_122f7054);
          }
          *(int*)(puVar16 + 8) = (int)(piVar10[0x1b]);
          piVar14 = (int *)((uint)&local_a0);
          piVar20 = (int *)(piVar29);
          pbVar13 = (byte *)(local_88);
          for (pcStack_5c = (char *)(*(char **)(pbStack_64 + 0x10), 0); local_a0[0] = (int)(piVar14), local_88 = (byte *)(pbVar13),(char *)( pcStack_5c) != (char *)(0x0); pcStack_5c = *(char **)pcStack_5c) {
            piVar20 = (int *)(*(int **)((int)pcStack_5c + 8), 0);
            pbStack_64 = (byte *)((byte *)0x0);
            pcStack_68 = (char *)((char *)0xffffffff);
            piStack_74 = (int *)(piVar20);
            if ((int *)((0)) < (int *)(piVar20[7])) {
              if ((*(byte *)(piVar20 + 9) & 0x80) == 0) {
                pbStack_70 = (byte *)((byte *)0x0);
              }
              else {
                pbStack_70 = (byte *)((byte *)piVar20[2]);
                while (((byte *)(pbStack_70) != (byte *)(0x0) &&
                       (((byte)*(undefined4 *)(pbStack_70 + 0x38) & 3) != 2))) {
                  pbStack_70 = (byte *)(*(byte **)(pbStack_70 + 0x14), 0);
                }
              }
              FUN_11359e30(piVar29,piVar20,0x60,0,1,0,&local_7c,&uStack_58);
              iVar11 = (int)(piVar10[0x1b]);
              if ((int)((iVar11)) < piVar10[0x1c]) {
                piVar10[0x1b] = (int)(iVar11 + 1);
                iVar26 = (int)(piVar10[0x1a]);
                *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(0x45);
                *(undefined4*)(iVar26 + 4 + iVar11 * 0x14) = (undefined4)(0);
                *(undefined4*)(iVar26 + 8 + iVar11 * 0x14) = (undefined4)(7);
                *(undefined4*)(iVar26 + 0xc + iVar11 * 0x14) = (undefined4)(0);
                *(undefined4*)(iVar26 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
              }
              else {
                FUN_1131dfc0(piVar10,0x45,0,7,0);
              }
              iVar11 = (int)(piVar20[2]);
              if (iVar11 != 0) {
                iVar26 = (int)(8);
                do {
                  iVar12 = (int)(piVar10[0x1b]);
                  if ((int)((iVar12)) < piVar10[0x1c]) {
                    piVar10[0x1b] = (int)(iVar12 + 1);
                    iVar17 = (int)(piVar10[0x1a]);
                    *(undefined4*)(iVar17 + iVar12 * 0x14) = (undefined4)(0x45);
                    *(undefined4*)(iVar17 + 4 + iVar12 * 0x14) = (undefined4)(0);
                    *(int*)(iVar17 + 8 + iVar12 * 0x14) = (int)(iVar26);
                    *(undefined4*)(iVar17 + 0xc + iVar12 * 0x14) = (undefined4)(0);
                    *(undefined4*)(iVar17 + 0x10 + iVar12 * 0x14) = (undefined4)(0);
                  }
                  else {
                    FUN_1131dfc0(piVar10,0x45,0,iVar26,0);
                  }
                  iVar11 = (int)(*(int *)(iVar11 + 0x14));
                  iVar26 = (int)(iVar26 + 1);
                  piVar20 = (int *)(piStack_74);
                } while (iVar11 != 0);
              }
              pcVar23 = (char *)(local_7c);
              iVar11 = (int)(piVar10[0x1b]);
              if ((int)((iVar11)) < piVar10[0x1c]) {
                piVar10[0x1b] = (int)(iVar11 + 1);
                iVar26 = (int)(piVar10[0x1a]);
                *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(0x25);
                *(char**)(iVar26 + 4 + iVar11 * 0x14) = (char *)(local_7c);
                *(undefined4*)(iVar26 + 8 + iVar11 * 0x14) = (undefined4)(0);
                *(undefined4*)(iVar26 + 0xc + iVar11 * 0x14) = (undefined4)(0);
                *(undefined4*)(iVar26 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
              }
              else {
                FUN_1131dfc0(piVar10,0x25,local_7c,0,0);
              }
              pbStack_90 = (byte *)((byte *)piVar10[0x1b]);
              if ((int)(int)((pbStack_90)) < piVar10[0x1c]) {
                piVar10[0x1b] = (int)((int)(pbStack_90 + 1));
                iVar11 = (int)(piVar10[0x1a]);
                *(undefined4*)(iVar11 + (int)pbStack_90 * 0x14) = (undefined4)(0x52);
                *(undefined4*)(iVar11 + 4 + (int)pbStack_90 * 0x14) = (undefined4)(7);
                *(undefined4*)(iVar11 + 8 + (int)pbStack_90 * 0x14) = (undefined4)(1);
                *(undefined4*)(iVar11 + 0xc + (int)pbStack_90 * 0x14) = (undefined4)(0);
                *(undefined4*)(iVar11 + 0x10 + (int)pbStack_90 * 0x14) = (undefined4)(0);
              }
              else {
                pbStack_90 = (byte *)((byte *)FUN_1131dfc0(piVar10,0x52,7,1,0), 0);
              }
              if (cStack_69 != 'q') {
                iVar11 = (int)(piVar10[0x1b]);
                iVar26 = (int)((short)piVar20[0xb] + -1);
                if ((int)((iVar11)) < piVar10[0x1c]) {
                  piVar10[0x1b] = (int)(iVar11 + 1);
                  iVar12 = (int)(piVar10[0x1a]);
                  *(undefined4*)(iVar12 + iVar11 * 0x14) = (undefined4)(0x59);
                  *(char**)(iVar12 + 4 + iVar11 * 0x14) = (char *)(pcVar23);
                  *(int*)(iVar12 + 8 + iVar11 * 0x14) = (int)(iVar26);
                  *(undefined4*)(iVar12 + 0xc + iVar11 * 0x14) = (undefined4)(3);
                  *(undefined4*)(iVar12 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
                  piVar29 = (int *)(local_9c);
                }
                else {
                  FUN_1131dfc0(piVar10,0x59,pcVar23,iVar26,3);
                }
                if ((int *)((0)) < (int *)(piVar10[0x1b])) {
                  *(undefined2*)(piVar10[0x1a] + -0x12 + piVar10[0x1b] * 0x14) = (undefined2)(0x80);
                }
              }
              iVar11 = (int)(0);
              if (0 < *(short *)((int)piVar20 + 0x2a)) {
                iVar26 = (int)(0);
                do {
                  if ((iVar11 != (short)piVar20[10]) &&
                     (*(char *)(piVar20[1] + 0xc + iVar26) != '\0')) {
                    FUN_11347490(piVar10,piVar20,local_7c,iVar11,3);
                    iVar12 = (int)(piVar10[0x1b]);
                    if (*(char *)(*piVar10 + 0x51) == '\0') {
                      pcVar23 = (char *)((char *)(piVar10[0x1a] + -0x14 + iVar12 * 0x14));
                    }
                    else {
                      pcVar23 = (char *)(&DAT_122f7054);
                    }
                    if ((*pcVar23 == (char)(('Y'))) && (0 < iVar12)) {
                      *(undefined2*)(piVar10[0x1a] + -0x12 + iVar12 * 0x14) = (undefined2)(0x80);
                      iVar12 = (int)(piVar10[0x1b]);
                    }
                    if ((int)((iVar12)) < piVar10[0x1c]) {
                      piVar10[0x1b] = (int)(iVar12 + 1);
                      iVar17 = (int)(piVar10[0x1a]);
                      *(undefined4*)(iVar17 + iVar12 * 0x14) = (undefined4)(0x33);
                      *(undefined4*)(iVar17 + 4 + iVar12 * 0x14) = (undefined4)(3);
                      *(undefined4*)(iVar17 + 8 + iVar12 * 0x14) = (undefined4)(0);
                      *(undefined4*)(iVar17 + 0xc + iVar12 * 0x14) = (undefined4)(0);
                      *(undefined4*)(iVar17 + 0x10 + iVar12 * 0x14) = (undefined4)(0);
                    }
                    else {
                      iVar12 = (int)(FUN_1131dfc0(piVar10,0x33,3,0,0), 0);
                    }
                    uVar32 = (undefined4)(FUN_11358b70((uint)&local_a0,"NULL value in %s.%s",*piStack_74, *(undefined4 *)(piStack_74[1] + iVar26)), 0);
                    FUN_113722f0(piVar10,0x73,0,3,0,uVar32,0xfffffff9);
                    FUN_1131f4c0(piVar10);
                    if (*(char *)(*piVar10 + 0x51) == '\0') {
                      iVar17 = (int)(piVar10[0x1b] + -1);
                      if (-1 < iVar12) {
                        iVar17 = (int)(iVar12);
                      }
                      puVar16 = (undefined1 *)((undefined1 *)(piVar10[0x1a] + iVar17 * 0x14));
                    }
                    else {
                      puVar16 = (undefined1 *)(&DAT_122f7054);
                    }
                    *(int*)(puVar16 + 8) = (int)(piVar10[0x1b]);
                    piVar20 = (int *)(piStack_74);
                  }
                  iVar11 = (int)(iVar11 + 1);
                  iVar26 = (int)(iVar26 + 0x14);
                  piVar29 = (int *)(local_9c);
                } while ((short)(iVar11) < *(short *)((int)piVar20 + 0x2a));
              }
              piVar14 = (int *)((uint)&local_a0);
              if ((piVar20[6] != 0) && ((local_a0[8] & 0x200U) == 0)) {
                pbStack_84 = (byte *)((byte *)FUN_1134bbf0(), 0);
                piVar6 = (int *)(local_9c);
                if (*(char *)((int)piVar14 + 0x51) == '\0') {
                  uVar19 = (uint)(piVar29[0xe] - 1);
                  local_78 = (uint)(piVar29[0xe] - 2);
                  local_9c[0xd] = (int)((int)(local_7c + 1));
                  local_9c[0xe] = (int)(local_78);
                  iVar11 = (int)(*(int *)pbStack_84 + -1);
                  if (0 < iVar11) {
                    pbVar13 = (byte *)(pbStack_84 + (iVar11 * 5 + 1) * 4);
                    do {
                      FUN_1134a920(piVar6,*(undefined4 *)pbVar13,uVar19,0);
                      iVar11 = (int)(iVar11 + -1);
                      pbVar13 = (byte *)(pbVar13 + -0x14);
                      piVar10 = (int *)(local_60);
                    } while (0 < iVar11);
                  }
                  uVar28 = (uint)(local_78);
                  FUN_1134ae80(local_9c,*(undefined4 *)(pbStack_84 + 4),local_78,0x10);
                  iVar11 = (int)(piVar10[3]);
                  if (*(int *)(iVar11 + 0x3c) + *(int *)(iVar11 + 0x38) < 0) {
                    FUN_1132f720();
                  }
                  else {
                    *(int *)(*(int *)(iVar11 + 0x40) + ~uVar19 * 4) = piVar10[0x1b];
                  }
                  piVar20 = (int *)(piStack_74);
                  local_9c[0xd] = (int)(0);
                  iVar11 = (int)(*piStack_74);
                  pcVar23 = (char *)("CHECK constraint failed in %s");
                  piVar14 = (int *)((uint)&local_a0);
                  uVar32 = (undefined4)(FUN_11358b70(), 0);
                  FUN_113722f0(piVar10,0x73,0,3,0,uVar32,0xfffffff9,piVar14,pcVar23,iVar11);
                  FUN_1131f4c0(piVar10);
                  iVar11 = (int)(piVar10[3]);
                  if (*(int *)(iVar11 + 0x3c) + *(int *)(iVar11 + 0x38) < 0) {
                    FUN_1132f720();
                    piVar14 = (int *)((uint)&local_a0);
                  }
                  else {
                    *(int *)(*(int *)(iVar11 + 0x40) + ~uVar28 * 4) = piVar10[0x1b];
                    piVar14 = (int *)((uint)&local_a0);
                  }
                }
                if ((byte *)(pbStack_84) != (byte *)(0x0)) {
                  FUN_11316ce0(piVar14,pbStack_84);
                }
              }
              if ((cStack_69 != 'q') &&
                 (pbVar13 = (byte *)((byte *)piVar20[2]), pbStack_84 = (byte *)(pbVar13),(byte *)( pbVar13) != (byte *)(0x0))) {
                iStack_54 = (int)(8 - uStack_58);
                piVar20 = (int *)(local_9c);
                pbVar33 = (byte *)(pbStack_70);
                uVar19 = (uint)(uStack_58);
                do {
                  piVar20[0xe] = (int)(piVar20[0xe] + -1);
                  iVar11 = (int)(piVar20[0xe]);
                  if ((byte *)((pbVar33)) != (byte *)(pbVar13)) {
                    pbStack_84 = (byte *)(pbVar13);
                    local_78 = (uint)(uVar19);
                    pcStack_68 = (char *)((char *)FUN_11352480(piVar20,pbVar13,local_7c,0,0,&uStack_48, pbStack_64,pcStack_68), 0);
                    iVar26 = (int)(piVar10[0x1b]);
                    pbStack_64 = (byte *)(pbVar13);
                    if ((int)((iVar26)) < piVar10[0x1c]) {
                      piVar10[0x1b] = (int)(iVar26 + 1);
                      iVar12 = (int)(piVar10[0x1a]);
                      *(undefined4*)(iVar12 + iVar26 * 0x14) = (undefined4)(0x52);
                      *(uint*)(iVar12 + 4 + iVar26 * 0x14) = (uint)(iStack_54 + uVar19);
                      *(undefined4*)(iVar12 + 8 + iVar26 * 0x14) = (undefined4)(1);
                      *(undefined4*)(iVar12 + 0xc + iVar26 * 0x14) = (undefined4)(0);
                      *(undefined4*)(iVar12 + 0x10 + iVar26 * 0x14) = (undefined4)(0);
                      uVar19 = (uint)(local_78);
                    }
                    else {
                      FUN_1131dfc0(piVar10,0x52,iStack_54 + uVar19,1,0);
                    }
                    iVar11 = (int)(FUN_113723f0(piVar10,0x1e,uVar19,iVar11,pcStack_68, *(undefined2 *)(pbVar13 + 0x34)), 0);
                    FUN_113722f0(piVar10,0x73,0,3,0,&DAT_11a0173c,0);
                    iVar26 = (int)(piVar10[0x1b]);
                    if ((int)((iVar26)) < piVar10[0x1c]) {
                      piVar10[0x1b] = (int)(iVar26 + 1);
                      iVar12 = (int)(piVar10[0x1a]);
                      *(undefined4*)(iVar12 + iVar26 * 0x14) = (undefined4)(0x6e);
                      *(undefined4*)(iVar12 + 4 + iVar26 * 0x14) = (undefined4)(7);
                      *(undefined4*)(iVar12 + 8 + iVar26 * 0x14) = (undefined4)(3);
                      *(undefined4*)(iVar12 + 0xc + iVar26 * 0x14) = (undefined4)(3);
                      *(undefined4*)(iVar12 + 0x10 + iVar26 * 0x14) = (undefined4)(0);
                    }
                    else {
                      FUN_1131dfc0(piVar10,0x6e,7,3,3);
                    }
                    FUN_113722f0(piVar10,0x73,0,4,0," missing from index ",0);
                    iVar26 = (int)(piVar10[0x1b]);
                    if ((int)((iVar26)) < piVar10[0x1c]) {
                      piVar10[0x1b] = (int)(iVar26 + 1);
                      iVar12 = (int)(piVar10[0x1a]);
                      *(undefined4*)(iVar12 + iVar26 * 0x14) = (undefined4)(0x6e);
                      *(undefined4*)(iVar12 + 4 + iVar26 * 0x14) = (undefined4)(4);
                      *(undefined4*)(iVar12 + 8 + iVar26 * 0x14) = (undefined4)(3);
                      *(undefined4*)(iVar12 + 0xc + iVar26 * 0x14) = (undefined4)(3);
                      *(undefined4*)(iVar12 + 0x10 + iVar26 * 0x14) = (undefined4)(0);
                    }
                    else {
                      FUN_1131dfc0(piVar10,0x6e,4,3,3);
                    }
                    uStack_50 = (undefined4)(FUN_113722f0(piVar10,0x73,0,4,0,*(undefined4 *)pbVar13,0), 0);
                    iVar26 = (int)(piVar10[0x1b]);
                    if ((int)((iVar26)) < piVar10[0x1c]) {
                      piVar10[0x1b] = (int)(iVar26 + 1);
                      iVar12 = (int)(piVar10[0x1a]);
                      *(undefined4*)(iVar12 + iVar26 * 0x14) = (undefined4)(0x6e);
                      *(undefined4*)(iVar12 + 4 + iVar26 * 0x14) = (undefined4)(4);
                      *(undefined4*)(iVar12 + 8 + iVar26 * 0x14) = (undefined4)(3);
                      *(undefined4*)(iVar12 + 0xc + iVar26 * 0x14) = (undefined4)(3);
                      *(undefined4*)(iVar12 + 0x10 + iVar26 * 0x14) = (undefined4)(0);
                    }
                    else {
                      FUN_1131dfc0(piVar10,0x6e,4,3,3);
                    }
                    iStack_4c = (int)(FUN_1131f4c0(piVar10), 0);
                    if (iVar11 < 0) {
                      iVar11 = (int)(piVar10[0x1b] + -1);
                    }
                    if (*(char *)(*piVar10 + 0x51) == '\0') {
                      puVar16 = (undefined1 *)((undefined1 *)(piVar10[0x1a] + iVar11 * 0x14));
                    }
                    else {
                      puVar16 = (undefined1 *)(&DAT_122f7054);
                    }
                    *(int*)(puVar16 + 8) = (int)(piVar10[0x1b]);
                    if (pbVar13[0x36] != 0) {
                      iVar11 = (int)(0);
                      local_9c[0xe] = (int)(local_9c[0xe] + -1);
                      uVar19 = (uint)(local_9c[0xe]);
                      pcVar23 = (char *)(pcStack_68);
                      if (*(short *)(pbStack_84 + 0x32) != 0) {
                        do {
                          iVar26 = (int)((int)*(short *)(*(int *)(pbStack_84 + 4) + iVar11 * 2));
                          if ((iVar26 < 0) ||
                             (*(char *)(piStack_74[1] + 0xc + iVar26 * 0x14) == '\0')) {
                            iVar26 = (int)(piVar10[0x1b]);
                            if ((int)((iVar26)) < piVar10[0x1c]) {
                              piVar10[0x1b] = (int)(iVar26 + 1);
                              iVar12 = (int)(piVar10[0x1a]);
                              *(undefined4*)(iVar12 + iVar26 * 0x14) = (undefined4)(0x32);
                              *(char**)(iVar12 + 4 + iVar26 * 0x14) = (char *)(pcVar23);
                              *(uint*)(iVar12 + 8 + iVar26 * 0x14) = (uint)(uVar19);
                              *(undefined4*)(iVar12 + 0xc + iVar26 * 0x14) = (undefined4)(0);
                              *(undefined4*)(iVar12 + 0x10 + iVar26 * 0x14) = (undefined4)(0);
                            }
                            else {
                              FUN_1131dfc0(piVar10,0x32,pcVar23,uVar19,0);
                            }
                          }
                          iVar11 = (int)(iVar11 + 1);
                          pcVar23 = (char *)(pcVar23 + 1);
                        } while (iVar11 < (int)(uint)*(ushort *)(pbStack_84 + 0x32));
                      }
                      iVar11 = (int)(piVar10[0x1b]);
                      if ((int)((iVar11)) < piVar10[0x1c]) {
                        piVar10[0x1b] = (int)(iVar11 + 1);
                        iVar26 = (int)(piVar10[0x1a]);
                        *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(5);
                        *(uint*)(iVar26 + 4 + iVar11 * 0x14) = (uint)(local_78);
                        *(undefined4*)(iVar26 + 8 + iVar11 * 0x14) = (undefined4)(0);
                        *(undefined4*)(iVar26 + 0xc + iVar11 * 0x14) = (undefined4)(0);
                        *(undefined4*)(iVar26 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
                      }
                      else {
                        iVar11 = (int)(FUN_1131dfc0(piVar10,5,local_78,0,0), 0);
                      }
                      FUN_1137d7b0(piVar10,uVar19);
                      pbVar13 = (byte *)(pbStack_84);
                      if (*(char *)(*piVar10 + 0x51) == '\0') {
                        iVar26 = (int)(piVar10[0x1b] + -1);
                        if (-1 < iVar11) {
                          iVar26 = (int)(iVar11);
                        }
                        puVar16 = (undefined1 *)((undefined1 *)(piVar10[0x1a] + iVar26 * 0x14));
                      }
                      else {
                        puVar16 = (undefined1 *)(&DAT_122f7054);
                      }
                      *(int*)(puVar16 + 8) = (int)(piVar10[0x1b]);
                      FUN_113723f0(piVar10,0x27,local_78,uVar19,pcStack_68, *(undefined2 *)(pbStack_84 + 0x32));
                      FUN_113722f0(piVar10,0x73,0,3,0,"non-unique entry in index ",0);
                      FUN_1137d7b0(piVar10,uStack_50);
                      iVar11 = (int)(piVar10[3]);
                      if (*(int *)(iVar11 + 0x3c) + *(int *)(iVar11 + 0x38) < 0) {
                        FUN_1132f720();
                        uVar19 = (uint)(local_78);
                      }
                      else {
                        *(int *)(*(int *)(iVar11 + 0x40) + ~uVar19 * 4) = piVar10[0x1b];
                        uVar19 = (uint)(local_78);
                      }
                    }
                    iVar11 = (int)(iStack_4c);
                    if (iStack_4c < 0) {
                      iVar11 = (int)(piVar10[0x1b] + -1);
                    }
                    if (*(char *)(*piVar10 + 0x51) == '\0') {
                      puVar16 = (undefined1 *)((undefined1 *)(piVar10[0x1a] + iVar11 * 0x14));
                    }
                    else {
                      puVar16 = (undefined1 *)(&DAT_122f7054);
                    }
                    *(int*)(puVar16 + 8) = (int)(piVar10[0x1b]);
                    piVar20 = (int *)(local_9c);
                    pbVar33 = (byte *)(pbStack_70);
                    if ((uint)uStack_48 != 0) {
                      iVar11 = (int)(*(int *)(local_9c[2] + 0xc));
                      if (*(int *)(iVar11 + 0x3c) + *(int *)(iVar11 + 0x38) < 0) {
                        FUN_1132f720();
                        piVar20 = (int *)(local_9c);
                        pbVar33 = (byte *)(pbStack_70);
                      }
                      else {
                        *(undefined4 *)(*(int *)(iVar11 + 0x40) + ~(uint)uStack_48 * 4) = *(undefined4 *)(local_9c[2] + 0x6c);
                      }
                    }
                  }
                  pbVar13 = (byte *)(*(byte **)(pbVar13 + 0x14), 0);
                  uVar19 = (uint)(uVar19 + 1);
                  pbStack_84 = (byte *)(pbVar13);
                  local_78 = (uint)(uVar19);
                } while ((byte *)(pbVar13) != (byte *)(0x0));
              }
              cVar7 = (char)(cStack_69);
              pbVar13 = (byte *)(pbStack_90);
              iVar11 = (int)(piVar10[0x1b]);
              if ((int)((iVar11)) < piVar10[0x1c]) {
                piVar10[0x1b] = (int)(iVar11 + 1);
                iVar26 = (int)(piVar10[0x1a]);
                *(undefined4*)(iVar26 + iVar11 * 0x14) = (undefined4)(5);
                *(char**)(iVar26 + 4 + iVar11 * 0x14) = (char *)(local_7c);
                *(byte**)(iVar26 + 8 + iVar11 * 0x14) = (byte *)(pbStack_90);
                *(undefined4*)(iVar26 + 0xc + iVar11 * 0x14) = (undefined4)(0);
                *(undefined4*)(iVar26 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
              }
              else {
                FUN_1131dfc0(piVar10,5,local_7c,pbStack_90,0);
              }
              if (*(char *)(*piVar10 + 0x51) == '\0') {
                pbVar33 = (byte *)((byte *)piVar10[0x1b]);
                if (-1 < (int)(pbVar13 + -1)) {
                  pbVar33 = (byte *)(pbVar13);
                }
                puVar18 = (undefined4 *)((undefined4 *)(piVar10[0x1a] + (int)pbVar33 * 0x14 + -0xc));
              }
              else {
                puVar18 = (undefined4 *)(&DAT_122f705c);
              }
              *puVar18 = (undefined4)((byte *)piVar10[0x1b]);
              piVar29 = (int *)(local_9c);
              if (cVar7 != 'q') {
                FUN_113722f0(piVar10,0x73,0,2,0,"wrong # of entries in index ",0);
                pbVar13 = (byte *)((byte *)piStack_74[2]);
                piVar29 = (int *)(local_9c);
                if ((byte *)(pbVar13) != (byte *)(0x0)) {
                  iVar11 = (int)(8);
                  pbVar33 = (byte *)(pbStack_70);
                  do {
                    if ((byte *)((pbVar33)) != (byte *)(pbVar13)) {
                      iVar26 = (int)(piVar10[0x1b]);
                      iVar12 = (int)((uStack_58 - 8) + iVar11);
                      if ((int)((iVar26)) < piVar10[0x1c]) {
                        piVar10[0x1b] = (int)(iVar26 + 1);
                        iVar17 = (int)(piVar10[0x1a]);
                        *(undefined4*)(iVar17 + iVar26 * 0x14) = (undefined4)(0x5c);
                        *(int*)(iVar17 + 4 + iVar26 * 0x14) = (int)(iVar12);
                        *(undefined4*)(iVar17 + 8 + iVar26 * 0x14) = (undefined4)(3);
                        *(undefined4*)(iVar17 + 0xc + iVar26 * 0x14) = (undefined4)(0);
                        *(undefined4*)(iVar17 + 0x10 + iVar26 * 0x14) = (undefined4)(0);
                      }
                      else {
                        FUN_1131dfc0(piVar10,0x5c,iVar12,3,0);
                      }
                      iVar26 = (int)(piVar10[0x1b]);
                      if ((int)((iVar26)) < piVar10[0x1c]) {
                        piVar10[0x1b] = (int)(iVar26 + 1);
                        iVar12 = (int)(piVar10[0x1a]);
                        *(undefined4*)(iVar12 + iVar26 * 0x14) = (undefined4)(0x35);
                        *(int*)(iVar12 + 4 + iVar26 * 0x14) = (int)(iVar11);
                        *(undefined4*)(iVar12 + 8 + iVar26 * 0x14) = (undefined4)(0);
                        *(undefined4*)(iVar12 + 0xc + iVar26 * 0x14) = (undefined4)(3);
                        *(undefined4*)(iVar12 + 0x10 + iVar26 * 0x14) = (undefined4)(0);
                      }
                      else {
                        iVar26 = (int)(FUN_1131dfc0(piVar10,0x35,iVar11,0,3), 0);
                      }
                      if ((int *)((0)) < (int *)(piVar10[0x1b])) {
                        *(undefined2*)(piVar10[0x1a] + -0x12 + piVar10[0x1b] * 0x14) = (undefined2)(0x90);
                      }
                      FUN_113722f0(piVar10,0x73,0,4,0,*(undefined4 *)pbVar13,0);
                      iVar12 = (int)(piVar10[0x1b]);
                      if ((int)((iVar12)) < piVar10[0x1c]) {
                        piVar10[0x1b] = (int)(iVar12 + 1);
                        iVar17 = (int)(piVar10[0x1a]);
                        *(undefined4*)(iVar17 + iVar12 * 0x14) = (undefined4)(0x6e);
                        *(undefined4*)(iVar17 + 4 + iVar12 * 0x14) = (undefined4)(4);
                        *(undefined4*)(iVar17 + 8 + iVar12 * 0x14) = (undefined4)(2);
                        *(undefined4*)(iVar17 + 0xc + iVar12 * 0x14) = (undefined4)(3);
                        *(undefined4*)(iVar17 + 0x10 + iVar12 * 0x14) = (undefined4)(0);
                      }
                      else {
                        FUN_1131dfc0(piVar10,0x6e,4,2,3);
                      }
                      FUN_1131f4c0(piVar10);
                      if (iVar26 < 0) {
                        iVar26 = (int)(piVar10[0x1b] + -1);
                      }
                      if (*(char *)(*piVar10 + 0x51) == '\0') {
                        puVar16 = (undefined1 *)((undefined1 *)(piVar10[0x1a] + iVar26 * 0x14));
                      }
                      else {
                        puVar16 = (undefined1 *)(&DAT_122f7054);
                      }
                      *(int*)(puVar16 + 8) = (int)(piVar10[0x1b]);
                      pbVar33 = (byte *)(pbStack_70);
                    }
                    pbVar13 = (byte *)(*(byte **)(pbVar13 + 0x14), 0);
                    iVar11 = (int)(iVar11 + 1);
                    piVar29 = (int *)(local_9c);
                  } while ((byte *)(pbVar13) != (byte *)(0x0));
                }
              }
            }
            piVar14 = (int *)((uint)&local_a0);
            piVar20 = (int *)(local_9c);
            pbVar13 = (byte *)(local_88);
          }
          pcStack_5c = (char *)((char *)0x0);
        }
        local_94 = (byte *)(local_94 + 1);
        pbVar33 = (byte *)(local_98);
      } while ((int)(int)((local_94)) < piVar14[5]);
    }
    iVar11 = (int)(FUN_113724a0(piVar10,7,&DAT_119f7de0,0), 0);
    if (iVar11 != 0) {
      *(undefined1*)(iVar11 + 0x29) = (undefined1)(0xff);
      *(undefined1**)(iVar11 + 0x38) = (undefined1 *)(&DAT_1189f4a8);
      *(int*)(iVar11 + 8) = (int)(1 - (int)pbVar33);
      *(undefined1*)(iVar11 + 0x65) = (undefined1)(0xff);
      *(char**)(iVar11 + 0x74) = (char *)("database disk image is malformed");
    }
    puVar16 = (undefined1 *)(&DAT_122f7054);
    if (*(char *)(*piVar10 + 0x51) == '\0') {
      puVar16 = (undefined1 *)((undefined1 *)piVar10[0x1a]);
    }
    *(int*)(puVar16 + 0xc) = (int)(piVar10[0x1b] + -2);
    break;
  case 0x15:
    if ((byte *)(local_8c) != (byte *)(0x0)) {
      pbVar13 = (byte *)(local_8c);
      do {
        bVar24 = (byte)(*pbVar13);
        pbVar13 = (byte *)(pbVar13 + 1);
      } while (bVar24 != 0);
      local_98 = (byte *)((byte *)((int)pbVar13 - (int)(local_8c + 1) & 0x3fffffff));
      iVar11 = (int)(0);
      do {
        if ((iVar11 == 6) || (pbVar13 = (byte *)((&PTR_s_delete_119f7d80)[iVar11]),(byte *)( pbVar13) == (byte *)(0x0))) break;
        pbVar33 = (byte *)(local_98);
        pbVar21 = (byte *)((byte *)0x0);
        pbVar27 = (byte *)(local_8c);
        if ((byte *)(local_98) != (byte *)(0x0)) {
          do {
            pbVar33 = (byte *)(pbVar33 + -1);
            if ((*pbVar27 == (byte)((0))) || ((&DAT_119fb300)[*pbVar27] != (&DAT_119fb300)[*pbVar13])) goto LAB_1135f512;
            pbVar27 = (byte *)(pbVar27 + 1);
            pbVar13 = (byte *)(pbVar13 + 1);
            pbVar21 = (byte *)(pbVar33);
          } while (0 < (int)pbVar33);
        }
        pbVar33 = (byte *)(pbVar21 + -1);
LAB_1135f512:
        if (((int)pbVar33 < 0) || ((&DAT_119fb300)[*pbVar27] == (&DAT_119fb300)[*pbVar13])) {
          if (iVar11 != 2) {
            if (iVar11 == -1) goto LAB_1135f54e;
            goto LAB_1135f574;
          }
          if ((local_a0[8] & 0x10000000U) == 0) goto LAB_1135f574;
          break;
        }
        iVar11 = (int)(iVar11 + 1);
      } while( true );
    }
    iVar11 = (int)(-1);
LAB_1135f54e:
    if (*(int *)(local_94 + 4) == 0) {
      local_94[4] = (byte)(1);
      local_94[5] = (byte)(0);
      local_94[6] = (byte)(0);
      local_94[7] = (byte)(0);
      local_88 = (byte *)((byte *)0x0);
    }
LAB_1135f574:
    pbVar13 = (byte *)((byte *)(local_a0[5] + -1));
    if (-1 < (int)pbVar13) {
      iVar26 = (int)((int)pbVar13 * 0x10);
      do {
        if ((*(int *)(local_a0[4] + 4 + iVar26) != 0) &&
           (((byte *)(pbVar13) == (byte *)(local_88) || (*(int *)(local_94 + 4) == 0)))) {
          iVar12 = (int)(piVar10[0x1b]);
          piVar10[0x27] = (int)(piVar10[0x27] | 1 << ((uint)pbVar13 & 0x1f));
          if ((int)((iVar12)) < piVar10[0x1c]) {
            piVar10[0x1b] = (int)(iVar12 + 1);
            iVar17 = (int)(piVar10[0x1a]);
            *(undefined4*)(iVar17 + iVar12 * 0x14) = (undefined4)(7);
            *(byte**)(iVar17 + 4 + iVar12 * 0x14) = (byte *)(pbVar13);
            *(undefined4*)(iVar17 + 8 + iVar12 * 0x14) = (undefined4)(1);
            *(int*)(iVar17 + 0xc + iVar12 * 0x14) = (int)(iVar11);
            *(undefined4*)(iVar17 + 0x10 + iVar12 * 0x14) = (undefined4)(0);
          }
          else {
            FUN_1131dfc0(piVar10,7,pbVar13,1,iVar11);
          }
        }
        iVar26 = (int)(iVar26 + -0x10);
        pbVar13 = (byte *)(pbVar13 + -1);
      } while (-1 < (int)pbVar13);
    }
    FUN_11372200(piVar10,0x50,1,1);
    break;
  case 0x16:
    uStack_48 = (undefined8)(-2);
    iVar11 = (int)(**(int **)(puVar30[1] + 4), 0);
    if ((byte *)(local_8c) != (byte *)(0x0)) {
      FUN_113439b0(local_8c,&uStack_48);
      iVar26 = (int)((uint)uStack_48);
      uVar19 = (uint)(*(uint *)((char *)&uStack_48 + 4));
      if ((0x7fffffff < *(uint *)((char *)&uStack_48 + 4)) && (((int)*(uint *)((char *)&uStack_48 + 4) < -1 || ((uint)uStack_48 != -1))) ) {
        iVar26 = (int)(-1);
        uVar19 = (uint)(0xffffffff);
      }
      iVar12 = (int)(*(int *)(iVar11 + 0xe8));
      *(int*)(iVar11 + 0xa0) = (int)(iVar26);
      *(uint*)(iVar11 + 0xa4) = (uint)(uVar19);
      if (iVar12 != 0) {
        *(int*)(iVar12 + 0x10) = (int)(iVar26);
        *(uint*)(iVar12 + 0x14) = (uint)(uVar19);
      }
    }
    goto LAB_113625a0;
  case 0x18:
    if ((byte *)(local_8c) == (byte *)(0x0)) {
LAB_1135f40f:
      iVar11 = (int)(-1);
    }
    else {
      iVar11 = (int)(FUN_1136cfd0(local_8c,"exclusive"), 0);
      if (iVar11 == 0) {
        iVar11 = (int)(1);
      }
      else {
        iVar11 = (int)(FUN_1136cfd0(local_8c,"normal"), 0);
        if (iVar11 != 0) goto LAB_1135f40f;
        iVar11 = (int)(0);
      }
    }
    if (*(int *)(param_3 + 4) == 0) {
      if (iVar11 != -1) {
        iVar26 = (int)(2);
        if ((int *)((2)) < (int *)(local_a0[5])) {
          iVar12 = (int)(0x20);
          do {
            iVar17 = (int)(**(int **)(*(int *)(local_a0[4] + 4 + iVar12) + 4), 0);
            if (((-1 < iVar11) && (*(char *)(iVar17 + 0xc) == '\0')) &&
               ((*(int *)(iVar17 + 0xe8) == 0 ||
                (*(char *)(*(int *)(iVar17 + 0xe8) + 0x2b) != '\x02')))) {
              *(char*)(iVar17 + 4) = (char)((char)iVar11);
            }
            iVar26 = (int)(iVar26 + 1);
            iVar12 = (int)(iVar12 + 0x10);
            piVar10 = (int *)(local_60);
          } while ((int)((iVar26)) < local_a0[5]);
        }
        *(char*)((int)(uint)&local_a0 + 0x53) = (char)((char)iVar11);
        goto LAB_1135f47d;
      }
      uVar19 = (uint)((uint)*(byte *)((int)(uint)&local_a0 + 0x53));
    }
    else {
LAB_1135f47d:
      uVar19 = (uint)(FUN_1135b7f0(**(undefined4 **)(puVar30[1] + 4),iVar11), 0);
    }
    pcVar23 = (char *)("normal");
    if (uVar19 == 1) {
      pcVar23 = (char *)("exclusive");
    }
    FUN_113323d0(piVar10,pcVar23);
    break;
  case 0x19:
    FUN_1133f8f0(local_9c,local_88);
    piVar20[0xb] = (int)(piVar20[0xb] + 1);
    iVar11 = (int)(piVar20[0xb]);
    if ((&DAT_119fb300)[*local_80] == 'p') {
      FUN_11372200(piVar10,0xa8,pbVar33,iVar11);
      FUN_11372200(piVar10,0x50,iVar11,1);
    }
    else {
      pbStack_90 = (byte *)((byte *)0x0);
      pbVar13 = (byte *)((byte *)0x0);
      if (((byte *)(local_8c) != (byte *)(0x0)) &&
         (FUN_11353050(local_8c,&pbStack_90), pbVar13 = (byte *)(pbStack_90), (int)pbStack_90 < 0)) {
        if ((byte *)(pbStack_90) == (byte *)(0x80000000)) {
          pbVar13 = (byte *)((byte *)0x7fffffff);
        }
        else {
          pbVar13 = (byte *)((byte *)-(int)pbStack_90);
        }
      }
      FUN_11372280(piVar10,0xa9,pbVar33,iVar11,pbVar13);
      FUN_11372200(piVar10,0x50,iVar11,1);
    }
    break;
  case 0x1a:
    if ((byte *)(local_8c) != (byte *)(0x0)) {
      FUN_113439b0(local_8c,&uStack_48);
      piVar10 = (int *)((uint)&local_a0);
      iVar11 = (int)((uint)uStack_48);
      iVar26 = (int)(*(uint *)((char *)&uStack_48 + 4));
      if (((int)*(uint *)((char *)&uStack_48 + 4) < 1) && (uStack_48 < 0)) {
        uStack_48 = (undefined8)(((unsigned long long)(DAT_12121f2c) << 32 | (unsigned long long)(DAT_12121f28)));
        iVar11 = (int)(DAT_12121f28);
        iVar26 = (int)(DAT_12121f2c);
      }
      if (*(int *)(param_3 + 4) == 0) {
        local_a0[0xc] = (int)(uintptr_t)((int *)(iVar11));
        local_a0[0xd] = (int)(uintptr_t)((int *)(iVar26));
      }
      pbVar13 = (byte *)((byte *)(local_a0[5] + -1));
      if (-1 < (int)pbVar13) {
        iVar12 = (int)((int)pbVar13 * 0x10);
        do {
          iVar17 = (int)(*(int *)(iVar12 + 4 + piVar10[4]));
          if ((iVar17 != 0) && (((byte *)(pbVar13) == (byte *)(local_88) || (*(int *)(param_3 + 4) == 0)))) {
            iVar17 = (int)(**(int **)(iVar17 + 4), 0);
            *(int*)(iVar17 + 0x80) = (int)(iVar11);
            *(int*)(iVar17 + 0x84) = (int)(iVar26);
            FUN_113251c0(iVar17);
            iVar11 = (int)((uint)uStack_48);
            iVar26 = (int)(*(uint *)((char *)&uStack_48 + 4));
          }
          iVar12 = (int)(iVar12 + -0x10);
          pbVar13 = (byte *)(pbVar13 + -1);
        } while (-1 < (int)pbVar13);
      }
    }
    iVar11 = (int)(1);
    uStack_48 = (undefined8)(-1);
    if (local_a0[3] != 0) {
      (*(code *)(uint)(DAT_12121ed0))(local_a0[3]);
    }
    if (local_78 == 0) {
      iVar26 = (int)(0);
LAB_1135fa3f:
      iVar26 = (int)(*(int *)(local_a0[4] + 4 + iVar26 * 0x10));
      if (iVar26 != 0) {
        iVar11 = (int)(**(int **)(**(int **)(iVar26 + 4) + 0x3c), 0);
        if (iVar11 == 0) {
          iVar11 = (int)(0xc);
        }
        else {
          iVar11 = (int)((**(code **)(iVar11 + 0x28))(), 0);
        }
      }
    }
    else {
      iVar26 = (int)(FUN_1134c5b0((uint)&local_a0,local_78), 0);
      if (-1 < iVar26) goto LAB_1135fa3f;
    }
    if (local_a0[3] != 0) {
      (*(code *)(uint)(DAT_12121ed8))(local_a0[3]);
    }
    if (iVar11 == 0) goto LAB_113625a0;
    if (iVar11 != 0xc) {
      local_9c[9] = (int)(local_9c[9] + 1);
      local_9c[3] = (int)(iVar11);
    }
    break;
  case 0x1b:
    local_9c[0xb] = (int)(1);
    for (puVar18 = (undefined4 *)((undefined4 *)local_a0[0x57]);(undefined4 *)( puVar18) != (undefined4 *)(0x0);
        puVar18 = (undefined4 *)*puVar18) {
      FUN_1137f730(piVar10,1,&DAT_119190cc,*(undefined4 *)(puVar18[2] + 4));
    }
    break;
  case 0x1c:
    if ((byte *)(local_8c) == (byte *)(0x0)) {
      pbStack_90 = (byte *)((byte *)0xfffe);
    }
    else {
      local_98 = (byte *)((byte *)0x0);
      FUN_11353050(local_8c,&local_98);
      pbStack_90 = (byte *)(local_98);
      if (((uint)local_98 & 2) == 0) break;
    }
    pbVar13 = (byte *)((byte *)local_9c[10]);
    local_9c[10] = (int)((int)(pbVar13 + 1));
    local_94 = (byte *)(pbVar13);
    if (local_78 == 0) {
      pbStack_84 = (byte *)((byte *)(local_a0[5] + -1));
      if ((int)local_88 <= (int)pbStack_84) goto LAB_11361d64;
    }
    else {
      pbStack_84 = (byte *)(local_88);
LAB_11361d64:
      bVar24 = (byte)((byte)local_88 & 0x1f);
      local_98 = (byte *)((byte *)(1 << bVar24 | 1U >> 0x20 - bVar24));
      pbVar33 = (byte *)(pbStack_84);
      piVar20 = (int *)(local_9c);
      do {
        if ((byte *)(local_88) != (byte *)(0x1)) {
          if ((int *)piVar20[0x1b] != (int *)(((0x0)))) {
            piVar20 = (int *)((int *)piVar20[0x1b]);
          }
          if (((uint)local_98 & piVar20[0x15]) == 0) {
            piVar20[0x15] = (int)(piVar20[0x15] | 1 << ((uint)local_88 & 0x1f));
          }
          piVar20 = (int *)(local_9c);
          pbVar33 = (byte *)(pbStack_84);
          for (puVar18 = (undefined4 *)(*(undefined4 **)(*(int *)(local_7c + local_a0[4] + 0xc) + 0x10), 0);
              local_9c = (int *)((int *)(piVar20)), pbStack_84 = (byte *)(pbVar33),(undefined4 *)( puVar18) != (undefined4 *)(0x0);
              puVar18 = (undefined4 *)*puVar18) {
            puVar4 = (undefined4 *)((undefined4 *)puVar18[2]);
            if ((puVar4[9] & 0x100) != 0) {
              sVar9 = (short)(*(short *)((int)puVar4 + 0x2e) + 0x2e);
              for (iVar11 = (int)(puVar4[2]); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x14)) {
                if ((*(byte *)(iVar11 + 0x38) & 0x80) == 0) goto LAB_11361e61;
              }
              if (sVar9 != 0) {
                FUN_11359d10(piVar20,pbVar13,local_88,puVar4,0x60);
                iVar11 = (int)(piVar10[0x1b]);
                iVar26 = (int)(((uint)pbStack_90 & 1) + 2 + iVar11);
                if ((int)((iVar11)) < piVar10[0x1c]) {
                  piVar10[0x1b] = (int)(iVar11 + 1);
                  iVar12 = (int)(piVar10[0x1a]);
                  *(byte**)(iVar12 + 4 + iVar11 * 0x14) = (byte *)(local_94);
                  *(undefined4*)(iVar12 + iVar11 * 0x14) = (undefined4)(0x22);
                  *(int*)(iVar12 + 8 + iVar11 * 0x14) = (int)(iVar26);
                  *(int*)(iVar12 + 0xc + iVar11 * 0x14) = (int)((int)sVar9);
                  *(undefined4*)(iVar12 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
                  piVar10 = (int *)(local_60);
                }
                else {
                  FUN_1131dfc0(piVar10,0x22,local_94,iVar26,(int)sVar9);
                }
              }
LAB_11361e61:
              uVar32 = (undefined4)(FUN_11358b70((uint)&local_a0,"ANALYZE \"%w\".\"%w\"", *(undefined4 *)(local_7c + local_a0[4]),*puVar4), 0);
              if (((uint)pbStack_90 & 1) == 0) {
                FUN_113722f0(piVar10,0x8c,0,0,0,uVar32,0xfffffff9);
                pbVar13 = (byte *)(local_94);
              }
              else {
                if (*(char *)((int)local_9c + 0x13) == '\0') {
                  local_9c[0xb] = (int)(local_9c[0xb] + 1);
                  iVar11 = (int)(local_9c[0xb]);
                }
                else {
                  bVar24 = (byte)(*(char *)((int)local_9c + 0x13) - 1);
                  *(byte*)((int)local_9c + 0x13) = (byte)(bVar24);
                  iVar11 = (int)(local_9c[bVar24 + 0x23]);
                }
                FUN_113722f0(piVar10,0x73,0,iVar11,0,uVar32,0xfffffff9);
                iVar26 = (int)(piVar10[0x1b]);
                if ((int)((iVar26)) < piVar10[0x1c]) {
                  piVar10[0x1b] = (int)(iVar26 + 1);
                  iVar12 = (int)(piVar10[0x1a]);
                  *(undefined4*)(iVar12 + iVar26 * 0x14) = (undefined4)(0x50);
                  *(int*)(iVar12 + 4 + iVar26 * 0x14) = (int)(iVar11);
                  *(undefined4*)(iVar12 + 8 + iVar26 * 0x14) = (undefined4)(1);
                  *(undefined4*)(iVar12 + 0xc + iVar26 * 0x14) = (undefined4)(0);
                  *(undefined4*)(iVar12 + 0x10 + iVar26 * 0x14) = (undefined4)(0);
                  pbVar13 = (byte *)(local_94);
                }
                else {
                  FUN_1131dfc0(piVar10,0x50,iVar11,1,0);
                  pbVar13 = (byte *)(local_94);
                }
              }
            }
            piVar20 = (int *)(local_9c);
            pbVar33 = (byte *)(pbStack_84);
          }
        }
        local_88 = (byte *)(local_88 + 1);
        local_98 = (byte *)((byte *)((int)local_98 << 1 | (uint)((int)local_98 < 0)));
        local_7c = (char *)(local_7c + 0x10);
      } while ((int)local_88 <= (int)pbVar33);
    }
    FUN_11372120(piVar10,0x9e);
    break;
  case 0x1d:
    uVar19 = (uint)(puVar30[1]);
    if ((byte *)(local_8c) == (byte *)(0x0)) {
      if (uVar19 == 0) {
        iVar11 = (int)(0);
        iVar26 = (int)(0);
      }
      else {
        iVar11 = (int)(*(int *)(*(int *)(uVar19 + 4) + 0x24));
        iVar26 = (int)(iVar11 >> 0x1f);
      }
      goto LAB_1135fcbf;
    }
    pbStack_90 = (byte *)((byte *)0x0);
    FUN_11353050(local_8c,&pbStack_90);
    local_a0[0x17] = (int)(uintptr_t)((int *)((int)pbStack_90));
    iVar11 = (int)(FUN_1133daa0(uVar19,pbStack_90,0xffffffff,0), 0);
    if (iVar11 == 7) {
      FUN_11359c50((uint)&local_a0);
    }
    break;
  case 0x1e:
    ppuVar31 = (undefined **)(&PTR_s_activate_extensions_119f78c8);
    do {
      FUN_1137f730(piVar10,1,&DAT_119190cc,*ppuVar31);
      ppuVar31 = (undefined **)(ppuVar31 + 4);
    } while ((int)ppuVar31 < 0x119f7d28);
    break;
  case 0x1f:
    local_98 = (byte *)((byte *)puVar30[1]);
    uVar19 = (uint)(0xffffffff);
    if ((byte *)(local_8c) != (byte *)(0x0)) {
      iVar11 = (int)(FUN_1136cfd0(local_8c,&DAT_11a01638), 0);
      if (iVar11 == 0) {
        uVar19 = (uint)(2);
      }
      else {
        uVar19 = (uint)(FUN_11352e40(local_8c,0), 0);
        uVar19 = (uint)(uVar19 & 0xff);
      }
    }
    if (((*(int *)(param_3 + 4) == 0) && (-1 < (int)uVar19)) && (iVar11 = (int)(0),(int *)( (int *)(0)) < (int *)(local_a0[5]))) {
      iVar26 = (int)(0);
      do {
        iVar12 = (int)(*(int *)(local_a0[4] + 4 + iVar26));
        if (iVar12 != 0) {
          puVar1 = (ushort *)((ushort *)(*(int *)(iVar12 + 4) + 0x18));
          *puVar1 = (ushort)(*puVar1 & 0xfff3);
          puVar1 = (ushort *)((ushort *)(*(int *)(iVar12 + 4) + 0x18));
          *puVar1 = (ushort)(*puVar1 | (short)uVar19 * 4);
        }
        iVar11 = (int)(iVar11 + 1);
        iVar26 = (int)(iVar26 + 0x10);
        piVar10 = (int *)(local_60);
      } while ((int)((iVar11)) < local_a0[5]);
    }
    iVar11 = (int)(FUN_1133d960(local_98,uVar19), 0);
    FUN_11332320(piVar10,iVar11,iVar11 >> 0x1f);
    break;
  case 0x20:
    if (local_a0[3] != 0) {
      (*(code *)(uint)(DAT_12121ed0))(local_a0[3]);
    }
    iVar11 = (int)(0);
    if ((int *)((0)) < (int *)(local_a0[5])) {
      iVar26 = (int)(0);
      do {
        iVar12 = (int)(*(int *)(iVar26 + 4 + local_a0[4]));
        if (iVar12 != 0) {
          (*(code *)(uint)(DAT_12121f14))(*(undefined4 *)(*(int *)(**(int **)(iVar12 + 4) + 0xe4) + 0x2c));
        }
        iVar11 = (int)(iVar11 + 1);
        iVar26 = (int)(iVar26 + 0x10);
      } while ((int)((iVar11)) < local_a0[5]);
    }
    iVar11 = (int)(local_a0[3]);
LAB_11361ce2:
    if (iVar11 != 0) {
      (*(code *)(uint)(DAT_12121ed8))(iVar11);
    }
    break;
  case 0x21:
    if (((byte *)(local_8c) != (byte *)(0x0)) && (iVar11 = (int)(FUN_113439b0(local_8c,&uStack_48), 0), iVar11 == 0)) {
      thunk_FUN_113973c0((uint)uStack_48,*(uint *)((char *)&uStack_48 + 4));
    }
    uVar35 = (undefined8)(thunk_FUN_113973c0(0xffffffff,0xffffffff), 0);
    FUN_11332320(piVar10,uVar35);
    break;
  case 0x22:
    if ((byte *)(local_8c) == (byte *)(0x0)) {
      iVar11 = (int)((byte)puVar30[2] - 1);
      iVar26 = (int)(-(uint)((byte)puVar30[2] == 0));
      goto LAB_1135fcbf;
    }
    if (*(char *)((int)(uint)&local_a0 + 0x4f) == '\0') {
      pcVar23 = (char *)("Safety level may not be changed inside a transaction");
      goto LAB_1135fc56;
    }
    if ((byte *)(local_88) != (byte *)(0x1)) {
      uVar37 = (undefined4)(1);
      uVar32 = (undefined4)(0);
      pbVar13 = (byte *)(local_8c);
      cVar7 = (char)(FUN_1131dd60(), 0);
      bVar24 = (byte)(cVar7 + 1U & 7);
      *(undefined1*)((int)puVar30 + 9) = (undefined1)(1);
      if (bVar24 == 0) {
        bVar24 = (byte)(1);
      }
      *(byte*)(puVar30 + 2) = (byte)(bVar24);
      FUN_11334f70((uint)&local_a0,pbVar13,uVar32,uVar37);
    }
    break;
  case 0x23:
    if (((byte *)(local_8c) != (byte *)(0x0)) &&
       (pbVar33 = (byte *)((byte *)FUN_11358530(local_9c,2,local_8c,local_78), 0), pbStack_64 = (byte *)(pbVar33),(byte *)( pbVar33) != (byte *)(0x0))) {
      if (*(int *)(pbVar33 + 0x48) != 0) {
        piVar14 = (int *)((int *)(local_a0[4] + 0xc));
        iVar11 = (int)(*piVar14);
        while ((int)(iVar11) != *(int *)(pbVar33 + 0x48)) {
          piVar14 = (int *)(piVar14 + 4);
          iVar11 = (int)(*piVar14);
        }
      }
      local_94 = (byte *)((byte *)0x0);
      uVar35 = (undefined8)(FUN_11363c30(pbVar33), 0);
      uVar32 = (undefined4)((undefined4)((ulonglong)uVar35 >> 0x20));
      pbStack_90 = (byte *)((byte *)uVar35);
      piVar20[0xb] = (int)(7);
      piVar14 = (int *)(piVar20);
      FUN_1133f8f0();
      FUN_11381c90(piVar20,pbVar33,piVar14,uVar32);
      pbVar21 = (byte *)((byte *)(uint)*(ushort *)(pbVar33 + 0x2a));
      piStack_74 = (int *)(*(int **)(pbVar33 + 4), 0);
      iVar11 = (int)(0);
      if (0 < (short)*(ushort *)(pbVar33 + 0x2a)) {
        do {
          uVar3 = (ushort)(*(ushort *)(piStack_74 + 4));
          pcStack_5c = (char *)((char *)(uint)uVar3);
          uVar19 = (uint)(0);
          if ((uVar3 & 0x62) == 0) {
LAB_1135fed1:
            if ((uVar3 & 1) == 0) {
              iVar26 = (int)(0);
            }
            else {
              iVar26 = (int)(1);
              if (((byte *)(pbStack_90) != (byte *)(0x0)) &&
                 (local_98 = (byte *)((byte *)(int)(short)pbVar21), 0 < (int)local_98)) {
                psVar22 = (short *)(*(short **)(pbStack_90 + 4), 0);
                do {
                  pbVar13 = (byte *)(pbStack_70);
                  if (*psVar22 == (short)((iVar11))) break;
                  iVar26 = (int)(iVar26 + 1);
                  psVar22 = (short *)(psVar22 + 1);
                } while (iVar26 <= (int)local_98);
              }
            }
            if ((piStack_74[1] == 0) || (1 < uVar19)) {
              pbStack_84 = (byte *)((byte *)0x0);
            }
            else {
              pbStack_84 = (byte *)(*(byte **)(piStack_74[1] + 8), 0);
            }
            local_7c = (char *)("issisii");
            if (*(int *)(pbVar13 + 8) == 0 && *(int *)(pbVar13 + 0xc) == 0) {
              local_7c = (char *)("issisi");
            }
            pcStack_5c = (char *)((char *)*piStack_74);
            if ((uVar3 & 4) == 0) {
              pcStack_68 = (char *)("");
            }
            else {
              local_98 = (byte *)((byte *)(pcStack_5c + 1));
              pcVar23 = (char *)(pcStack_5c);
              do {
                cVar7 = (char)(*pcVar23);
                pcVar23 = (char *)(pcVar23 + 1);
              } while (cVar7 != '\0');
              pcStack_68 = (char *)(pcStack_5c + (int)(pcVar23 + (1 - (int)local_98)));
            }
            FUN_1137f730(piVar10,1,local_7c,iVar11 - (int)local_94,*piStack_74,pcStack_68, (char)piStack_74[3] != '\0',pbStack_84,iVar26,uVar19);
            pbVar21 = (byte *)((byte *)(uint)*(ushort *)(pbStack_64 + 0x2a));
          }
          else {
            if (*(int *)(pbVar13 + 8) != 0 || *(int *)(pbVar13 + 0xc) != 0) {
              if ((uVar3 & 0x20) == 0) {
                uVar19 = (uint)(((byte)uVar3 & 0x40 | 0x20) >> 5);
              }
              else {
                uVar19 = (uint)(2);
              }
              goto LAB_1135fed1;
            }
            local_94 = (byte *)(local_94 + 1);
          }
          iVar11 = (int)(iVar11 + 1);
          piStack_74 = (int *)(piStack_74 + 5);
          pbStack_84 = (byte *)(pbVar21);
        } while (iVar11 < (short)pbVar21);
      }
    }
    break;
  case 0x24:
    if ((byte *)(local_8c) == (byte *)(0x0)) {
      uVar19 = (uint)((uint)*(byte *)((uint)&local_a0 + 0x14));
      goto LAB_1135fabf;
    }
    if ((byte)(*local_8c - 0x30) < 3) {
      uVar19 = (uint)((int)(char)*local_8c - 0x30);
    }
    else {
      iVar11 = (int)(FUN_1136cfd0(local_8c,&DAT_119fd164), 0);
      if (iVar11 == 0) {
        uVar19 = (uint)(1);
      }
      else {
        iVar11 = (int)(FUN_1136cfd0(local_8c,"memory"), 0);
        uVar19 = (uint)((-(uint)(iVar11 != 0) & 0xfffffffe) + 2);
      }
    }
    iVar11 = (int)(*local_9c);
    if ((*(byte *)(iVar11 + 0x50) != (byte)(uVar19)) && (iVar26 = (int)(FUN_1131f6b0(local_9c), 0), iVar26 == 0)) {
      *(char*)(iVar11 + 0x50) = (char)((char)uVar19);
    }
    break;
  case 0x25:
    if ((byte *)(local_8c) == (byte *)(0x0)) {
      FUN_113323d0(piVar10,DAT_122f6cc0);
      FUN_113433c0((uint)&local_a0,local_80);
      goto LAB_113625ce;
    }
    if ((*local_8c == (byte)((0))) ||
       ((iVar11 = (int)((**(code **)(*local_a0 + 0x20))(*local_a0,local_8c,1,&local_98), 0), iVar11 == 0 &&
        ((byte *)(local_98) != (byte *)(0x0))))) {
      if (*(byte *)((uint)&local_a0 + 0x14) < 2) {
        FUN_1131f6b0(local_9c);
      }
      thunk_FUN_113949e0(DAT_122f6cc0);
      if (*local_8c != (byte)((0))) {
        DAT_122f6cc0 = (int)(thunk_FUN_11395b10(&DAT_1188bc94,local_8c), 0);
        goto LAB_1135fc5f;
      }
      DAT_122f6cc0 = (int)(0);
      break;
    }
    FUN_11345ed0(local_9c,"not a writable directory");
    FUN_113433c0(piVar14,local_80);
    goto LAB_113625c1;
  case 0x26:
    if ((((byte *)(local_8c) != (byte *)(0x0)) && (iVar11 = (int)(FUN_113439b0(local_8c,&uStack_48), 0), iVar11 == 0)) &&
       (-1 < uStack_48)) {
      uVar19 = (uint)((uint)uStack_48 & 0x7fffffff);
      if (8 < uVar19) {
        uVar19 = (uint)(8);
      }
      local_a0[0x26] = (int)(uintptr_t)((int *)(uVar19));
    }
    goto LAB_113625a0;
  case 0x27:
    if ((byte *)(local_8c) != (byte *)(0x0)) {
      local_98 = (byte *)((byte *)0x0);
      FUN_11353050(local_8c,&local_98);
      pbVar13 = (byte *)(local_98);
      piVar10 = (int *)((uint)&local_a0);
      iVar11 = (int)(local_a0[3]);
      if ((int)local_98 < 1) {
        if (iVar11 != 0) {
          (*(code *)(uint)(DAT_12121ed0))(iVar11);
          iVar11 = (int)(piVar10[3]);
        }
        piVar10[0x3c] = (int)(0);
        piVar10[0x3d] = (int)(0);
      }
      else {
        if (iVar11 != 0) {
          (*(code *)(uint)(DAT_12121ed0))(iVar11);
          iVar11 = (int)(piVar10[3]);
        }
        piVar10[0x3c] = (int)((int)LAB_11384160);
        piVar10[0x3d] = (int)((int)pbVar13);
      }
      if (iVar11 != 0) {
        (*(code *)(uint)(DAT_12121ed8))(iVar11);
      }
    }
LAB_113625a0:
    FUN_11332320();
    break;
  case 0x28:
    pbVar13 = (byte *)(&DAT_0000000a);
    if (*(int *)param_3 != 0) {
      pbVar13 = (byte *)(local_88);
    }
    uVar32 = (undefined4)(0);
    if ((byte *)(local_8c) != (byte *)(0x0)) {
      iVar11 = (int)(FUN_1136cfd0(local_8c,&DAT_11a01588), 0);
      if (iVar11 == 0) {
        uVar32 = (undefined4)(1);
      }
      else {
        iVar11 = (int)(FUN_1136cfd0(local_8c,"restart"), 0);
        if (iVar11 == 0) {
          uVar32 = (undefined4)(2);
        }
        else {
          iVar11 = (int)(FUN_1136cfd0(local_8c,"truncate"), 0);
          if (iVar11 == 0) {
            uVar32 = (undefined4)(3);
          }
        }
      }
    }
    local_9c[0xb] = (int)(3);
    FUN_11372280(piVar10,6,pbVar13,uVar32,1);
    FUN_11372200(piVar10,0x50,1,3);
    break;
  case 0x29:
    if ((byte *)(local_8c) != (byte *)(0x0)) {
      pbVar33 = (byte *)(&DAT_11a017c8);
      iVar11 = (int)(4);
      pbVar13 = (byte *)(local_8c);
      do {
        iVar26 = (int)(iVar11);
        iVar11 = (int)(iVar26 + -1);
        if ((*pbVar13 == (byte)((0))) || ((&DAT_119fb300)[*pbVar13] != (&DAT_119fb300)[*pbVar33])) goto LAB_11362502;
        pbVar13 = (byte *)(pbVar13 + 1);
        pbVar33 = (byte *)(pbVar33 + 1);
      } while (0 < iVar11);
      iVar11 = (int)(iVar26 + -2);
LAB_11362502:
      if ((iVar11 < 0) || ((&DAT_119fb300)[*pbVar13] == (&DAT_119fb300)[*pbVar33])) {
LAB_11362522:
        FUN_113433c0((uint)&local_a0,local_80);
        goto LAB_113625c1;
      }
    }
    break;
  case 0x2a:
    if ((byte *)(local_8c) != (byte *)(0x0)) {
      uVar19 = (uint)(*(uint *)(pbVar13 + 8));
      iVar11 = (int)(*(int *)(pbVar13 + 0xc));
      pbStack_90 = (byte *)(local_8c);
      uStack_48 = (undefined8)(((unsigned long long)(iVar11) << 32 | (unsigned long long)((uint)uStack_48)));
      if (((uVar19 == 2) && (iVar11 == 0)) || ((uVar19 == 3 && (iVar11 == 0)))) {
        uVar28 = (uint)(0);
        bVar24 = (byte)(0);
        do {
          bVar2 = (byte)(local_8c[uVar28]);
          if (((&DAT_119fb400)[bVar2] & 8) == 0) break;
          uVar25 = (uint)(((uint)(bVar24 << 4) << 8 | (uint)(bVar2 + ((char)bVar2 >> 6 & 1U) * -7)) & 0xffffff0f);
          bVar24 = (byte)((char)uVar25 + (char)(uVar25 >> 8));
          if ((uVar28 & 1) != 0) {
            abStack_2c[uVar28 >> 1] = (byte)(bVar24);
          }
          uVar28 = (uint)(uVar28 + 1);
        } while (uVar28 < 0x50);
        pbStack_90 = (byte *)((uint)&abStack_2c);
        uVar28 = (uint)((int)uVar28 / 2);
        piVar10 = (int *)(local_60);
      }
      else if ((iVar11 == 0) && (uVar19 < 4)) {
        pbVar13 = (byte *)(local_8c);
        do {
          bVar24 = (byte)(*pbVar13);
          pbVar13 = (byte *)(pbVar13 + 1);
        } while (bVar24 != 0);
        uVar28 = (uint)((int)pbVar13 - (int)(local_8c + 1) & 0x3fffffff);
      }
      else {
        uVar28 = (uint)(0xffffffff);
      }
      if ((uVar19 & 1) == 0) {
        if ((uVar28 == 0) || (local_78 != 0)) break;
        iVar11 = (int)(thunk_FUN_1133fce0((uint)&local_a0,0,pbStack_90,uVar28), 0);
      }
      else {
        local_98 = (byte *)((byte *)local_a0[4]);
        pcVar23 = (char *)((char *)**(undefined4 **)(*(int *)(local_98 + 4) + 4), 0);
        piVar20 = (int *)(*(int **)(pcVar23 + 0xdc), 0);
        piStack_74 = (int *)(piVar20);
        pcStack_68 = (char *)(pcVar23);
        if ((local_78 != 0) || ((uVar28 != 0 && (uVar28 != 0x10)))) {
LAB_11362191:
          FUN_113433c0((uint)&local_a0,local_80);
          goto LAB_113625c1;
        }
        if ((int *)(piVar20) == (int *)(0x0)) {
          if (uVar28 == 0) goto LAB_11362191;
          piVar20 = (int *)((int *)FUN_113430d0(), 0);
          piStack_74 = (int *)(piVar20);
          if ((int *)(piVar20) == (int *)(0x0)) goto LAB_11362522;
          if (local_a0[3] != 0) {
            (*(code *)(uint)(DAT_12121ed0))(local_a0[3]);
          }
          iVar11 = (int)(FUN_11343050(pbStack_90,uVar28), 0);
          piVar20[1] = (int)(iVar11);
          if ((iVar11 == 0) ||
             (iVar11 = (int)(FUN_11370f70(piVar20,*(undefined4 *)(pcVar23 + 0x98)), 0), iVar11 != 0)) goto LAB_11362310;
          FUN_1135c910(pcVar23,LAB_100755e0,LAB_10073b5f,FUN_1133fdf0);
        }
        else {
          if (local_a0[3] != 0) {
            (*(code *)(uint)(DAT_12121ed0))(local_a0[3]);
          }
          iVar11 = (int)(piVar20[1]);
          if (iVar11 != 0) {
            if ((int)(iVar11) != *piVar20) {
              FUN_1134f7f0(iVar11);
            }
            piVar20[1] = (int)(0);
          }
          if (uVar28 == 0x10) {
            iVar11 = (int)(FUN_11343050(pbStack_90,0x10), 0);
            piVar20[1] = (int)(iVar11);
            if (iVar11 == 0) {
LAB_11362310:
              FUN_1133fdf0(piVar20);
              if (local_a0[3] != 0) {
                (*(code *)(uint)(DAT_12121ed8))(local_a0[3]);
                FUN_113433c0();
                goto LAB_113625c1;
              }
              break;
            }
          }
        }
        iVar11 = (int)(FUN_1133a2b0(), 0);
        pcVar23 = (char *)(pcStack_68);
        if (iVar11 == 0) {
          pbVar33 = (byte *)(*(byte **)(pcStack_68 + 0x18), 0);
          pbVar21 = (byte *)((byte *)(DAT_12121fa0 / *(int *)(pcStack_68 + 0x98) + 1));
          pbVar13 = (byte *)((byte *)0x1);
          pbStack_90 = (byte *)(pbVar21);
          pbStack_84 = (byte *)(pbVar33);
          if ((byte *)(pbVar33) != (byte *)(0x0)) {
            do {
              piVar10 = (int *)(local_60);
              if (iVar11 != 0) break;
              if (((byte *)(pbVar13) != (byte *)(pbVar21)) &&
                 (iVar11 = (int)((**(code **)(pcVar23 + 0xcc))(pcVar23,pbVar13,&local_94,0), 0), pbVar21 = (byte *)(pbStack_90), pbVar33 = (byte *)(pbStack_84), iVar11 == 0)) {
                iVar26 = (int)(*(int *)(local_94 + 0x14));
                if (((local_94[0x1c] & 4) == 0) ||
                   (*(uint *)((iVar26 + 0x18)) < *(uint *)((local_94 + 0x18)))) {
                  iVar11 = (int)(*(int *)(iVar26 + 0x28));
                  if (iVar11 == 0) {
                    if (*(uint *)((iVar26 + 0x98)) < *(uint *)((iVar26 + 0x94))) {
                      iVar11 = (int)(FUN_11326440(), 0);
                    }
                    else {
                      iVar11 = (int)(FUN_11327f70(local_94), 0);
                    }
                  }
                }
                else if (*(int *)(iVar26 + 0x60) == 0) {
                  iVar11 = (int)(0);
                }
                else {
                  iVar11 = (int)(FUN_1139c620(local_94), 0);
                }
                pbVar21 = (byte *)(pbStack_90);
                pbVar33 = (byte *)(pbStack_84);
                if ((byte *)(local_94) != (byte *)(0x0)) {
                  FUN_1135d530(local_94);
                  pbVar21 = (byte *)(pbStack_90);
                  pbVar33 = (byte *)(pbStack_84);
                }
              }
              pbVar13 = (byte *)(pbVar13 + 1);
              piVar10 = (int *)(local_60);
            } while ((byte *)(pbVar13) <= (byte *)(pbVar33));
          }
        }
        if (iVar11 == 0) {
          iVar11 = (int)(FUN_1133ab00(*(undefined4 *)(local_98 + 4)), 0);
          piVar20 = (int *)(piStack_74);
          if (*piStack_74 != (int)((0))) {
            FUN_1134f7f0(*piStack_74);
          }
          iVar26 = (int)(piVar20[1]);
          *piVar20 = (int)(iVar26);
        }
        else {
          FUN_1133d680();
          piVar20 = (int *)(piStack_74);
          local_94 = (byte *)((byte *)piStack_74[1]);
          if ((byte *)(local_94) != (byte *)(0x0)) {
            thunk_FUN_113d3650(local_94);
            thunk_FUN_113cfb70();
            if (DAT_12121e80 == 0) {
              (*(code *)(uint)(DAT_12121ea4))(local_94);
            }
            else {
              if (DAT_122f6d88 != 0) {
                (*(code *)(uint)(DAT_12121ed0))(DAT_122f6d88);
              }
              iVar26 = (int)((*(code *)(uint)(DAT_12121eac))(local_94), 0);
              DAT_122f6d28 = (int)(DAT_122f6d28 - iVar26);
              DAT_122f6d4c = (int)(DAT_122f6d4c + -1);
              (*(code *)(uint)(DAT_12121ea4))(local_94);
              if (DAT_122f6d88 != 0) {
                (*(code *)(uint)(DAT_12121ed8))(DAT_122f6d88);
              }
            }
          }
          iVar26 = (int)(*piVar20);
          piVar20[1] = (int)(iVar26);
        }
        if (iVar26 == 0) {
          FUN_1135c910(pcStack_68,0,0,0,0);
        }
        if (local_a0[3] != 0) {
          (*(code *)(uint)(DAT_12121ed8))(local_a0[3]);
        }
      }
      if ((iVar11 == 0) && (uVar28 != 0)) {
        FUN_11380ad0(piVar10,1);
        FUN_11380a70(piVar10,0,0,&DAT_1189f4a8,0);
        FUN_113323d0(piVar10,&DAT_1189f4a8);
      }
    }
  }
LAB_113625a9:
  FUN_113433c0((uint)&local_a0,local_80);
  if ((byte *)(local_8c) != (byte *)(0x0)) {
LAB_113625c1:
    FUN_113433c0((uint)&local_a0,local_8c);
  }
LAB_113625ce:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113a4210; body size 629 bytes.
#line 1 "ENTRY_113a4210"

int FUN_113a4210(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *_Dst;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  code *pcVar11;
  int iVar12;
  
  iVar5 = (int)((int)param_1);
  piVar1 = (int *)((int *)((int)param_1 + 0x48));
  iVar7 = (int)((int)param_1 + 0x40);
  param_1 = (int *)((int *)0x0);
  iVar12 = (int)(*(int *)(*piVar1 + 0x18));
  if (*(char *)(iVar5 + 0x3c) == '\x01') {
    pcVar11 = (code *)(FUN_113a3170);
  }
  else {
    pcVar11 = (code *)((code *)&LAB_113a3110);
    if (*(char *)(iVar5 + 0x3c) == '\x02') {
      pcVar11 = (code *)(FUN_113a3340);
    }
  }
  iVar9 = (int)(0);
  if (*(char *)(iVar5 + 0x3b) != '\0') {
    puVar10 = (undefined4 *)((undefined4 *)(iVar5 + 0x60));
    do {
      *puVar10 = (undefined4)(pcVar11);
      puVar10 = (undefined4 *)(puVar10 + 0x12);
      iVar9 = (int)(iVar9 + 1);
    } while (iVar9 < (int)(uint)*(byte *)(iVar5 + 0x3b));
  }
  iVar9 = (int)(FUN_113a3d80(iVar5,&param_1), 0);
  piVar1 = (int *)(param_1);
  if (iVar9 != 0) goto LAB_113a43d7;
  if (*(char *)(iVar5 + 0x39) == '\0') {
    iVar7 = (int)(FUN_113a1470(iVar7,param_1,0), 0);
    *(int**)(iVar5 + 0x14) = (int *)(piVar1);
    return (int)(iVar7);
  }
  piVar1 = (int *)((int *)(iVar5 + (uint)*(byte *)(iVar5 + 0x3b) * 0x48));
  if (piVar1[1] == 0) {
    iVar7 = (int)(FUN_113725e0(*(undefined4 *)(*piVar1 + 0x1c)), 0);
    piVar1[1] = (int)(iVar7);
    if (iVar7 != 0) {
      *(undefined2*)(iVar7 + 8) = (undefined2)(*(undefined2 *)(*(int *)(*piVar1 + 0x1c) + 6));
      *(undefined1*)(piVar1[1] + 0xb) = (undefined1)(0);
      goto LAB_113a42c4;
    }
  }
  else {
LAB_113a42c4:
    if (iVar12 == 0) {
      _Dst = (void *)((void *)FUN_11358b90(0x38,0), 0);
    }
    else {
      _Dst = (void *)((void *)FUN_113434e0(iVar12), 0);
    }
    if ((void *)(_Dst) != (void *)(0x0)) {
      memset(_Dst,0,0x38);
      piVar6 = (int *)(param_1);
      *(void**)(iVar5 + 0x10) = (void *)(_Dst);
      iVar7 = (int)(FUN_113a0c50(piVar1 + -2,param_1,(int *)((int)_Dst + 0x30)), 0);
      if (iVar7 == 0) {
        piVar1 = (int *)(*(int **)((int)_Dst + 0x30), 0);
        iVar7 = (int)(*piVar1);
        piVar1[6] = (int)(1);
        uVar4 = (uint)(piVar1[4]);
        puVar2 = (uint *)((uint *)(iVar7 + 0x40));
        uVar3 = (uint)(*puVar2);
        *puVar2 = (uint)(*puVar2 - uVar4);
        piVar1 = (int *)((int *)(iVar7 + 0x44));
        *piVar1 = (int)((*piVar1 - ((int)uVar4 >> 0x1f)) - (uint)(uVar3 < uVar4));
        iVar7 = (int)(0);
        if (*(int *)(uintptr_t)(iVar5 + 0x3b) != 1 && -1 < (uintptr_t)(*(int *)(uintptr_t)(iVar5 + 0x3b) - 1)) {
          iVar12 = (int)(0);
          do {
            piVar1 = (int *)(*(int **)(iVar12 + 0x30 + piVar6[3]), 0);
            if ((int *)(piVar1) != (int *)(0x0)) {
              iVar9 = (int)(*piVar1);
              piVar1[6] = (int)(1);
              uVar4 = (uint)(piVar1[4]);
              puVar2 = (uint *)((uint *)(iVar9 + 0x40));
              uVar3 = (uint)(*puVar2);
              *puVar2 = (uint)(*puVar2 - uVar4);
              piVar1 = (int *)((int *)(iVar9 + 0x44));
              *piVar1 = (int)((*piVar1 - ((int)uVar4 >> 0x1f)) - (uint)(uVar3 < uVar4));
            }
            iVar7 = (int)(iVar7 + 1);
            iVar12 = (int)(iVar12 + 0x38);
          } while (iVar7 < (int)(*(byte *)(iVar5 + 0x3b) - 1));
        }
        iVar9 = (int)(0);
        iVar12 = (int)(0);
        do {
          if ((int)(uint)*(byte *)(iVar5 + 0x3b) <= (byte)(iVar9)) {
            iVar7 = (int)(FUN_113a1ee0(_Dst,2), 0);
            return (int)(iVar7);
          }
          iVar7 = (int)(0);
          iVar8 = (int)(piVar6[3] + iVar12);
          puVar10 = (undefined4 *)(*(undefined4 **)(iVar8 + 0x30), 0);
          if ((undefined4 *)(puVar10) != (undefined4 *)(0x0)) {
            if (puVar10[6] == 0) {
              iVar7 = (int)(FUN_113a1ee0(iVar8,1), 0);
            }
            else {
              iVar7 = (int)(FUN_113a34c0(*puVar10,FUN_113a1d40,iVar8), 0);
            }
          }
          iVar9 = (int)(iVar9 + 1);
          iVar12 = (int)(iVar12 + 0x38);
        } while (iVar7 == 0);
      }
      return (int)(iVar7);
    }
    *(undefined4*)(iVar5 + 0x10) = (undefined4)(0);
  }
  iVar9 = (int)(7);
LAB_113a43d7:
  piVar1 = (int *)(param_1);
  if ((int *)(param_1) != (int *)(0x0)) {
    iVar7 = (int)(0);
    if ((int)(0) < *param_1) {
      iVar12 = (int)(0);
      do {
        FUN_113a1d70(piVar1[3] + iVar12);
        iVar7 = (int)(iVar7 + 1);
        iVar12 = (int)(iVar12 + 0x38);
      } while ((int)(iVar7) < *piVar1);
    }
    if (DAT_12121e80 == 0) {
      (*(code *)(uint)(DAT_12121ea4))(piVar1);
    }
    else {
      if (DAT_122f6d88 != 0) {
        (*(code *)(uint)(DAT_12121ed0))(DAT_122f6d88);
      }
      iVar7 = (int)((*(code *)(uint)(DAT_12121eac))(piVar1), 0);
      DAT_122f6d28 = (int)(DAT_122f6d28 - iVar7);
      DAT_122f6d4c = (int)(DAT_122f6d4c + -1);
      (*(code *)(uint)(DAT_12121ea4))(piVar1);
      if (DAT_122f6d88 != 0) {
        (*(code *)(uint)(DAT_12121ed8))(DAT_122f6d88);
        return (int)(iVar9);
      }
    }
  }
  return (int)(iVar9);
}


// Reference entry 113aae40; body size 934 bytes.
#line 1 "ENTRY_113aae40"

int FUN_113aae40(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int local_50;
  int local_4c;
  undefined4 local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined8 local_20;
  int local_18;
  int local_14;
  int *local_10;
  uint *local_c;
  uint local_8;
  undefined4 *local_4;
  
  puVar9[0] = (uint)((uint *)param_1[3]);
  local_14 = (int)(param_1[1]);
  puVar1 = (undefined4 *)(*(undefined4 **)*param_1);
  local_c = (uint *)((uint)&puVar9);
  local_4 = (undefined4 *)(puVar1);
  piVar2 = (int *)((int *)FUN_113036d0(puVar1,local_14,param_4,param_5, ((undefined4 *)*param_1)[1] + (uint)(byte)puVar9[4] * 0x48 + 8, param_1[2],&local_48), 0);
  if ((int *)(piVar2) == (int *)(0x0)) {
    return (int)(7);
  }
  puVar9[9] = (uint)(uintptr_t)((uint *)(0x400));
  *(undefined2*)((int)(uint)&puVar9 + 0x12) = (undefined2)(0);
  *(undefined2*)((uint)&puVar9 + 10) = (undefined2)(0);
  *(undefined1*)((uint)&puVar9 + 7) = (undefined1)(0);
  local_18 = (int)(*piVar2);
  local_10 = (int *)(piVar2);
  iVar3 = (int)(FUN_113ac480(*puVar1,(uint)&puVar9,local_18), 0);
  if (iVar3 != 0) {
    FUN_113433c0(*puVar1,piVar2);
    return (int)(7);
  }
  local_50 = (int)(FUN_113ab2d0(param_1,param_2,param_3,0xffffffff,0xffffffff,0,piVar2,local_48,&local_4c), 0);
  if (local_50 == 0) {
    local_3c = (uint)(~param_3);
    local_44 = (uint)(~param_2);
    local_2c = (uint)(local_3c & puVar9[1]);
    local_8 = (uint)(local_44 & *puVar9);
    if ((local_8 != 0 || local_2c != 0) || (local_4c != 0)) {
      uVar6 = (uint)(0);
      local_40 = (int)(0);
      local_38 = (undefined8)(0);
      local_20 = (undefined8)(0);
      if (local_4c == 0) {
        local_24 = (uint)(0);
        local_28 = (uint)(0);
      }
      else {
        local_50 = (int)(FUN_113ab2d0(param_1,param_2,param_3,0xffffffff,0xffffffff,1,piVar2,local_48, &local_4c), 0);
        local_28 = (uint)(local_44 & *puVar9);
        local_24 = (uint)(local_3c & puVar9[1]);
        if (local_28 == 0 && local_24 == 0) {
          local_40 = (int)(1);
        }
        uVar6 = (uint)((uint)(local_28 == 0 && local_24 == 0));
        if (local_50 != 0) goto LAB_113ab167;
      }
      local_30 = (uint)(*(uint *)((char *)&local_38 + 4));
      local_20 = (undefined8)(((unsigned long long)(*(uint *)((char *)&local_20 + 4)) << 32 | (unsigned long long)(uVar6)));
      do {
        uVar7 = (uint)(0xffffffff);
        uVar8 = (uint)(0xffffffff);
        if (0 < local_18) {
          piVar2 = (int *)((int *)(piVar2[1] + 8));
          iVar3 = (int)(local_18);
          do {
            uVar5 = (uint)(local_44 & *(uint *)(*(int *)(local_14 + 0x14) + 0x20 + *piVar2 * 0x30));
            uVar6 = (uint)(*(uint *)(*(int *)(local_14 + 0x14) + 0x24 + *piVar2 * 0x30) & local_3c);
            if ((local_30 <= uVar6) &&
               ((((local_30 < uVar6 || ((uint)local_38 < uVar5)) && (uVar6 <= uVar8)) &&
                ((uVar6 < uVar8 || (uVar5 < uVar7)))))) {
              uVar7 = (uint)(uVar5);
              uVar8 = (uint)(uVar6);
            }
            piVar2 = (int *)(piVar2 + 3);
            iVar3 = (int)(iVar3 + -1);
          } while (iVar3 != 0);
          piVar2 = (int *)(local_10);
          uVar6 = (uint)((uint)local_20);
          puVar9[0] = (uint)(local_c);
        }
        local_38 = (undefined8)(((unsigned long long)(*(uint *)((char *)&local_38 + 4)) << 32 | (unsigned long long)(uVar7)));
        local_30 = (uint)(uVar8);
        if ((uVar7 & uVar8) == 0xffffffff) {
          if (local_50 != 0) break;
          if (local_40 == 0) {
            local_50 = (int)(FUN_113ab2d0(param_1,param_2,param_3,param_2,param_3,0,piVar2,local_48, &local_4c), 0);
            if (local_4c == 0) {
              uVar6 = (uint)(1);
            }
            if (local_50 != 0) break;
          }
          if (uVar6 == 0) {
            local_50 = (int)(FUN_113ab2d0(param_1,param_2,param_3,param_2,param_3,1,piVar2,local_48, &local_4c), 0);
          }
          break;
        }
        if ((((uVar7 != local_8) || (uVar8 != local_2c)) &&
            ((uVar7 != local_28 || (uVar8 != local_24)))) &&
           ((local_50 = (int)(FUN_113ab2d0(param_1,param_2,param_3,uVar7 | param_2,uVar8 | param_3,0, piVar2,local_48,&local_4c), 0), *puVar9 == (uint)((param_2)) &&
            (puVar9[1] == param_3)))) {
          local_40 = (int)(1);
          if (local_4c == 0) {
            uVar6 = (uint)(1);
          }
          local_20 = (undefined8)(((unsigned long long)(*(uint *)((char *)&local_20 + 4)) << 32 | (unsigned long long)(uVar6)));
        }
      } while (local_50 == 0);
    }
  }
LAB_113ab167:
  if ((piVar2[7] != 0) && (iVar3 = (int)(piVar2[6]), iVar3 != 0)) {
    if (DAT_12121e80 == 0) {
      (*(code *)(uint)(DAT_12121ea4))(iVar3);
    }
    else {
      if (DAT_122f6d88 != 0) {
        (*(code *)(uint)(DAT_12121ed0))(DAT_122f6d88);
      }
      iVar4 = (int)((*(code *)(uint)(DAT_12121eac))(iVar3), 0);
      DAT_122f6d28 = (int)(DAT_122f6d28 - iVar4);
      DAT_122f6d4c = (int)(DAT_122f6d4c + -1);
      (*(code *)(uint)(DAT_12121ea4))(iVar3);
      if (DAT_122f6d88 != 0) {
        (*(code *)(uint)(DAT_12121ed8))(DAT_122f6d88);
      }
    }
  }
  FUN_113433c0(*local_4,piVar2);
  return (int)(local_50);
}


// Reference entry 113b3430; body size 1665 bytes.
#line 1 "ENTRY_113b3430"

void FUN_113b3430(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 local_18;
  uint local_14;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(param_1[2]);
  if (*(int *)(iVar1 + 0x58) == 0) {
    iVar6 = (int)(*param_1);
    iVar15 = (int)(iVar1);
    do {
      iVar13 = (int)(*(int *)(iVar15 + 0x2c));
      pcVar3 = (char *)(*(char **)(iVar13 + 0x20), 0);
      if ((pcVar3 == "nth_value") || (pcVar3 == "first_value")) {
        local_18 = (undefined4)(*(undefined4 *)(iVar15 + 0x3c));
        *(int*)(iVar6 + 0x38) = (int)(*(int *)(iVar6 + 0x38) + -1);
        local_14 = (uint)(*(uint *)(iVar6 + 0x38));
        if (*(char *)(iVar6 + 0x13) == '\0') {
          *(int*)(iVar6 + 0x2c) = (int)(*(int *)(iVar6 + 0x2c) + 1);
          iVar14 = (int)(*(int *)(iVar6 + 0x2c));
        }
        else {
          bVar8 = (byte)(*(char *)(iVar6 + 0x13) - 1);
          *(byte*)(iVar6 + 0x13) = (byte)(bVar8);
          iVar14 = (int)(*(int *)(iVar6 + 0x8c + (uint)bVar8 * 4));
        }
        iVar11 = (int)(*(int *)(iVar2 + 0x6c));
        uVar4 = (undefined4)(*(undefined4 *)(iVar15 + 0x38));
        if ((int)(iVar11) < *(int *)(iVar2 + 0x70)) {
          *(int*)(iVar2 + 0x6c) = (int)(iVar11 + 1);
          iVar10 = (int)(*(int *)(iVar2 + 0x68));
          *(undefined4*)(iVar10 + iVar11 * 0x14) = (undefined4)(0x48);
          *(undefined4*)(iVar10 + 4 + iVar11 * 0x14) = (undefined4)(0);
          *(undefined4*)(iVar10 + 8 + iVar11 * 0x14) = (undefined4)(uVar4);
          *(undefined4*)(iVar10 + 0xc + iVar11 * 0x14) = (undefined4)(0);
          *(undefined4*)(iVar10 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
        }
        else {
          FUN_1131dfc0(iVar2,0x48,0,uVar4,0);
        }
        iVar11 = (int)(*(int *)(iVar2 + 0x6c));
        if (*(char **)(iVar13 + 0x20) == "nth_value") {
          iVar13 = (int)(*(int *)(iVar15 + 0x50) + 1);
          uVar4 = (undefined4)(*(undefined4 *)(iVar1 + 0x30));
          if ((int)(iVar11) < *(int *)(iVar2 + 0x70)) {
            *(int*)(iVar2 + 0x6c) = (int)(iVar11 + 1);
            iVar10 = (int)(*(int *)(iVar2 + 0x68));
            *(undefined4*)(iVar10 + 4 + iVar11 * 0x14) = (undefined4)(uVar4);
            *(undefined4*)(iVar10 + iVar11 * 0x14) = (undefined4)(0x59);
            *(int*)(iVar10 + 8 + iVar11 * 0x14) = (int)(iVar13);
            *(int*)(iVar10 + 0xc + iVar11 * 0x14) = (int)(iVar14);
            *(undefined4*)(iVar10 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
            FUN_113b17e0(iVar6,iVar14,2);
          }
          else {
            FUN_1131dfc0(iVar2,0x59,uVar4,iVar13,iVar14);
            FUN_113b17e0(iVar6,iVar14,2);
          }
        }
        else if ((int)(iVar11) < *(int *)(iVar2 + 0x70)) {
          *(int*)(iVar2 + 0x6c) = (int)(iVar11 + 1);
          iVar13 = (int)(*(int *)(iVar2 + 0x68));
          *(undefined4*)(iVar13 + iVar11 * 0x14) = (undefined4)(0x45);
          *(undefined4*)(iVar13 + 4 + iVar11 * 0x14) = (undefined4)(1);
          *(int*)(iVar13 + 8 + iVar11 * 0x14) = (int)(iVar14);
          *(undefined4*)(iVar13 + 0xc + iVar11 * 0x14) = (undefined4)(0);
          *(undefined4*)(iVar13 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
        }
        else {
          FUN_1131dfc0(iVar2,0x45,1,iVar14,0);
        }
        iVar13 = (int)(*(int *)(iVar2 + 0x6c));
        uVar4 = (undefined4)(*(undefined4 *)(iVar15 + 0x40));
        if ((int)(iVar13) < *(int *)(iVar2 + 0x70)) {
          *(int*)(iVar2 + 0x6c) = (int)(iVar13 + 1);
          iVar11 = (int)(*(int *)(iVar2 + 0x68));
          *(undefined4*)(iVar11 + iVar13 * 0x14) = (undefined4)(0x69);
          *(int*)(iVar11 + 4 + iVar13 * 0x14) = (int)(iVar14);
          *(undefined4*)(iVar11 + 8 + iVar13 * 0x14) = (undefined4)(uVar4);
          *(int*)(iVar11 + 0xc + iVar13 * 0x14) = (int)(iVar14);
          *(undefined4*)(iVar11 + 0x10 + iVar13 * 0x14) = (undefined4)(0);
        }
        else {
          FUN_1131dfc0(iVar2,0x69,iVar14,uVar4,iVar14);
        }
        iVar13 = (int)(*(int *)(iVar2 + 0x6c));
        iVar11 = (int)(*(int *)(iVar15 + 0x40) + 1);
        if ((int)(iVar13) < *(int *)(iVar2 + 0x70)) {
          *(int*)(iVar2 + 0x6c) = (int)(iVar13 + 1);
          iVar10 = (int)(*(int *)(iVar2 + 0x68));
          *(int*)(iVar10 + 4 + iVar13 * 0x14) = (int)(iVar11);
          *(undefined4*)(iVar10 + iVar13 * 0x14) = (undefined4)(0x36);
          *(uint*)(iVar10 + 8 + iVar13 * 0x14) = (uint)(local_14);
          *(int*)(iVar10 + 0xc + iVar13 * 0x14) = (int)(iVar14);
          *(undefined4*)(iVar10 + 0x10 + iVar13 * 0x14) = (undefined4)(0);
        }
        else {
          FUN_1131dfc0(iVar2,0x36,iVar11,local_14,iVar14);
        }
        iVar13 = (int)(*(int *)(iVar2 + 0x6c));
        if ((int)(iVar13) < *(int *)(iVar2 + 0x70)) {
          *(int*)(iVar2 + 0x6c) = (int)(iVar13 + 1);
          iVar11 = (int)(*(int *)(iVar2 + 0x68));
          *(undefined4*)(iVar11 + 4 + iVar13 * 0x14) = (undefined4)(local_18);
          *(undefined4*)(iVar11 + 8 + iVar13 * 0x14) = (undefined4)(0);
LAB_113b377b:
          *(undefined4*)(iVar11 + iVar13 * 0x14) = (undefined4)(0x1f);
          *(int*)(iVar11 + 0xc + iVar13 * 0x14) = (int)(iVar14);
          *(undefined4*)(iVar11 + 0x10 + iVar13 * 0x14) = (undefined4)(0);
        }
        else {
          FUN_1131dfc0(iVar2,0x1f,local_18,0,iVar14);
        }
LAB_113b378e:
        iVar13 = (int)(*(int *)(iVar2 + 0x6c));
        uVar4 = (undefined4)(*(undefined4 *)(iVar15 + 0x50));
        uVar5 = (undefined4)(*(undefined4 *)(iVar15 + 0x38));
        if ((int)(iVar13) < *(int *)(iVar2 + 0x70)) {
          *(int*)(iVar2 + 0x6c) = (int)(iVar13 + 1);
          iVar11 = (int)(*(int *)(iVar2 + 0x68));
          *(undefined4*)(iVar11 + iVar13 * 0x14) = (undefined4)(0x59);
          *(undefined4*)(iVar11 + 4 + iVar13 * 0x14) = (undefined4)(local_18);
          *(undefined4*)(iVar11 + 8 + iVar13 * 0x14) = (undefined4)(uVar4);
          *(undefined4*)(iVar11 + 0xc + iVar13 * 0x14) = (undefined4)(uVar5);
          *(undefined4*)(iVar11 + 0x10 + iVar13 * 0x14) = (undefined4)(0);
        }
        else {
          FUN_1131dfc0(iVar2,0x59,local_18,uVar4,uVar5);
        }
        iVar13 = (int)(*(int *)(iVar2 + 0xc));
        if (*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x38) < 0) {
          FUN_1132f720(iVar13,iVar2,~local_14);
        }
        else {
          *(undefined4 *)(*(int *)(iVar13 + 0x40) + ~local_14 * 4) = *(undefined4 *)(iVar2 + 0x6c);
        }
        if ((iVar14 != 0) && (*(byte *)(iVar6 + 0x13) < 8)) {
          *(int*)(iVar6 + 0x8c + (uint)*(byte *)(iVar6 + 0x13) * 4) = (int)(iVar14);
          *(char*)(iVar6 + 0x13) = (char)(*(char *)(iVar6 + 0x13) + '\x01');
        }
      }
      else if ((pcVar3 == "lead") || (pcVar3 == "lag")) {
        iVar11 = (int)(**(int **)(*(int *)(iVar15 + 0x48) + 0x14), 0);
        local_18 = (undefined4)(*(undefined4 *)(iVar15 + 0x3c));
        *(int*)(iVar6 + 0x38) = (int)(*(int *)(iVar6 + 0x38) + -1);
        local_14 = (uint)(*(uint *)(iVar6 + 0x38));
        if (*(char *)(iVar6 + 0x13) == '\0') {
          *(int*)(iVar6 + 0x2c) = (int)(*(int *)(iVar6 + 0x2c) + 1);
          iVar14 = (int)(*(int *)(iVar6 + 0x2c));
        }
        else {
          bVar8 = (byte)(*(char *)(iVar6 + 0x13) - 1);
          *(byte*)(iVar6 + 0x13) = (byte)(bVar8);
          iVar14 = (int)(*(int *)(iVar6 + 0x8c + (uint)bVar8 * 4));
        }
        uVar4 = (undefined4)(*(undefined4 *)(iVar1 + 0x30));
        uVar5 = (undefined4)(*(undefined4 *)(iVar15 + 0x38));
        if (iVar11 < 3) {
          iVar10 = (int)(*(int *)(iVar2 + 0x6c));
          if ((int)(iVar10) < *(int *)(iVar2 + 0x70)) {
            *(int*)(iVar2 + 0x6c) = (int)(iVar10 + 1);
            iVar9 = (int)(*(int *)(iVar2 + 0x68));
            *(undefined4*)(iVar9 + iVar10 * 0x14) = (undefined4)(0x48);
            *(undefined4*)(iVar9 + 4 + iVar10 * 0x14) = (undefined4)(0);
            *(undefined4*)(iVar9 + 8 + iVar10 * 0x14) = (undefined4)(uVar5);
            *(undefined4*)(iVar9 + 0xc + iVar10 * 0x14) = (undefined4)(0);
LAB_113b3580:
            *(undefined4*)(iVar9 + 0x10 + iVar10 * 0x14) = (undefined4)(0);
          }
          else {
            FUN_1131dfc0(iVar2,0x48,0,uVar5,0);
          }
        }
        else {
          iVar10 = (int)(*(int *)(iVar2 + 0x6c));
          iVar12 = (int)(*(int *)(iVar15 + 0x50) + 2);
          if ((int)(iVar10) < *(int *)(iVar2 + 0x70)) {
            *(int*)(iVar2 + 0x6c) = (int)(iVar10 + 1);
            iVar9 = (int)(*(int *)(iVar2 + 0x68));
            *(undefined4*)(iVar9 + 4 + iVar10 * 0x14) = (undefined4)(uVar4);
            *(int*)(iVar9 + 8 + iVar10 * 0x14) = (int)(iVar12);
            *(undefined4*)(iVar9 + iVar10 * 0x14) = (undefined4)(0x59);
            *(undefined4*)(iVar9 + 0xc + iVar10 * 0x14) = (undefined4)(uVar5);
            goto LAB_113b3580;
          }
          FUN_1131dfc0(iVar2,0x59,uVar4,iVar12,uVar5);
        }
        iVar10 = (int)(*(int *)(iVar2 + 0x6c));
        if ((int)(iVar10) < *(int *)(iVar2 + 0x70)) {
          *(int*)(iVar2 + 0x6c) = (int)(iVar10 + 1);
          iVar12 = (int)(*(int *)(iVar2 + 0x68));
          *(undefined4*)(iVar12 + iVar10 * 0x14) = (undefined4)(0x7f);
          *(undefined4*)(iVar12 + 4 + iVar10 * 0x14) = (undefined4)(uVar4);
          *(int*)(iVar12 + 8 + iVar10 * 0x14) = (int)(iVar14);
          *(undefined4*)(iVar12 + 0xc + iVar10 * 0x14) = (undefined4)(0);
          *(undefined4*)(iVar12 + 0x10 + iVar10 * 0x14) = (undefined4)(0);
        }
        else {
          FUN_1131dfc0(iVar2,0x7f,uVar4,iVar14,0);
        }
        if (iVar11 < 2) {
          iVar11 = (int)(*(int *)(iVar2 + 0x6c));
          iVar13 = (int)((uint)((uintptr_t)(*(int *)(uintptr_t)(iVar13 + 0x20))== (uintptr_t)((undefined **)&DAT_119f7f08)) * 2 + -1, 0);
          if ((int)(iVar11) < *(int *)(iVar2 + 0x70)) {
            *(int*)(iVar2 + 0x6c) = (int)(iVar11 + 1);
            iVar10 = (int)(*(int *)(iVar2 + 0x68));
            *(undefined4*)(iVar10 + iVar11 * 0x14) = (undefined4)(0x52);
            *(int*)(iVar10 + 4 + iVar11 * 0x14) = (int)(iVar14);
            *(int*)(iVar10 + 8 + iVar11 * 0x14) = (int)(iVar13);
            *(undefined4*)(iVar10 + 0xc + iVar11 * 0x14) = (undefined4)(0);
            *(undefined4*)(iVar10 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
          }
          else {
            FUN_1131dfc0(iVar2,0x52,iVar14,iVar13,0);
          }
        }
        else {
          cVar7 = (char)(((uintptr_t)(*(int *)(uintptr_t)(iVar13 + 0x20))!= (uintptr_t)((undefined **)&DAT_119f7f08)) + 'i', 0);
          if (*(char *)(iVar6 + 0x13) == '\0') {
            *(int*)(iVar6 + 0x2c) = (int)(*(int *)(iVar6 + 0x2c) + 1);
            iVar13 = (int)(*(int *)(iVar6 + 0x2c));
          }
          else {
            bVar8 = (byte)(*(char *)(iVar6 + 0x13) - 1);
            *(byte*)(iVar6 + 0x13) = (byte)(bVar8);
            iVar13 = (int)(*(int *)(iVar6 + 0x8c + (uint)bVar8 * 4));
          }
          iVar11 = (int)(*(int *)(iVar2 + 0x6c));
          iVar10 = (int)(*(int *)(iVar15 + 0x50) + 1);
          if ((int)(iVar11) < *(int *)(iVar2 + 0x70)) {
            *(int*)(iVar2 + 0x6c) = (int)(iVar11 + 1);
            iVar12 = (int)(*(int *)(iVar2 + 0x68));
            *(undefined4*)(iVar12 + 4 + iVar11 * 0x14) = (undefined4)(uVar4);
            *(int*)(iVar12 + 8 + iVar11 * 0x14) = (int)(iVar10);
            *(undefined4*)(iVar12 + iVar11 * 0x14) = (undefined4)(0x59);
            *(int*)(iVar12 + 0xc + iVar11 * 0x14) = (int)(iVar13);
            *(undefined4*)(iVar12 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
          }
          else {
            FUN_1131dfc0(iVar2,0x59,uVar4,iVar10,iVar13);
          }
          iVar11 = (int)(*(int *)(iVar2 + 0x6c));
          if ((int)(iVar11) < *(int *)(iVar2 + 0x70)) {
            *(int*)(iVar2 + 0x6c) = (int)(iVar11 + 1);
            iVar10 = (int)(*(int *)(iVar2 + 0x68));
            *(char*)(iVar10 + iVar11 * 0x14) = (char)(cVar7);
            *(undefined2*)(iVar10 + 2 + iVar11 * 0x14) = (undefined2)(0);
            *(int*)(iVar10 + 4 + iVar11 * 0x14) = (int)(iVar13);
            *(int*)(iVar10 + 8 + iVar11 * 0x14) = (int)(iVar14);
            *(int*)(iVar10 + 0xc + iVar11 * 0x14) = (int)(iVar14);
            *(undefined4*)(iVar10 + 0x10 + iVar11 * 0x14) = (undefined4)(0);
            *(undefined1*)(iVar10 + 1 + iVar11 * 0x14) = (undefined1)(0);
          }
          else {
            FUN_1131dfc0(iVar2,cVar7,iVar13,iVar14,iVar14);
          }
          if ((iVar13 != 0) && (*(byte *)(iVar6 + 0x13) < 8)) {
            *(int*)(iVar6 + 0x8c + (uint)*(byte *)(iVar6 + 0x13) * 4) = (int)(iVar13);
            *(char*)(iVar6 + 0x13) = (char)(*(char *)(iVar6 + 0x13) + '\x01');
          }
        }
        iVar13 = (int)(*(int *)(iVar2 + 0x6c));
        if ((int)(iVar13) < *(int *)(iVar2 + 0x70)) {
          *(int*)(iVar2 + 0x6c) = (int)(iVar13 + 1);
          iVar11 = (int)(*(int *)(iVar2 + 0x68));
          *(undefined4*)(iVar11 + 4 + iVar13 * 0x14) = (undefined4)(local_18);
          *(uint*)(iVar11 + 8 + iVar13 * 0x14) = (uint)(local_14);
          goto LAB_113b377b;
        }
        FUN_1131dfc0(iVar2,0x1f,local_18,local_14,iVar14);
        goto LAB_113b378e;
      }
      iVar15 = (int)(*(int *)(iVar15 + 0x24));
    } while (iVar15 != 0);
  }
  else {
    FUN_113b2640(param_1);
  }
  iVar1 = (int)(*(int *)(iVar2 + 0x6c));
  iVar6 = (int)(param_1[3]);
  iVar15 = (int)(param_1[4]);
  if ((int)(iVar1) < *(int *)(iVar2 + 0x70)) {
    *(int*)(iVar2 + 0x6c) = (int)(iVar1 + 1);
    iVar2 = (int)(*(int *)(iVar2 + 0x68));
    *(int*)(iVar2 + 4 + iVar1 * 0x14) = (int)(iVar15);
    *(undefined4*)(iVar2 + iVar1 * 0x14) = (undefined4)(0xc);
    *(int*)(iVar2 + 8 + iVar1 * 0x14) = (int)(iVar6);
    *(undefined4*)(iVar2 + 0xc + iVar1 * 0x14) = (undefined4)(0);
    *(undefined4*)(iVar2 + 0x10 + iVar1 * 0x14) = (undefined4)(0);
    return;
  }
  FUN_1131dfc0(iVar2,0xc,iVar15,iVar6,0);
  return;
}


// Reference entry 113c0ca0; body size 568 bytes.
#line 1 "ENTRY_113c0ca0"

void FUN_113c0ca0(int param_1,char *param_2,uint param_3,byte *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  byte *pbVar10;
  uint local_44;
  uint local_40;
  uint local_3c;
  byte local_38 [52];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_44);
  memset((char *)&local_38,0,0x34);
  pbVar10 = (byte *)((uint)&local_38);
  if (param_1 == 2) {
    pbVar10 = (byte *)(param_4);
  }
  if ((param_1 < 3) && (*param_2 != (char)(('\0')))) {
    cVar5 = (char)(thunk_FUN_113c1650(param_2,&local_40,&local_44), 0);
    if ((cVar5 != '\0') && (local_40 == param_3)) {
      local_40 = (uint)(local_44 & 0xffff);
      local_3c = (uint)((uint)*(byte *)(*(int *)(param_2 + 0xc) + 3));
      if ((local_3c + 0xd <= local_40) && (local_3c + 1 < 0x22)) {
        *pbVar10 = (byte)(*(byte *)(*(int *)(param_2 + 0xc) + 3));
        memcpy(pbVar10 + 1,(char *)(*(int *)(param_2 + 0xc) + 4),local_3c);
        pbVar10[*pbVar10 + 1] = (byte)(0);
        iVar1 = (int)(*(int *)(param_2 + 0xc));
        uVar9 = (uint)((uint)*pbVar10);
        *(undefined4*)(pbVar10 + 0x22) = (undefined4)(*(undefined4 *)(iVar1 + 4 + uVar9));
        *(undefined2*)(pbVar10 + 0x26) = (undefined2)(*(undefined2 *)(iVar1 + 8 + uVar9));
        pbVar10[0x28] = (byte)(*(byte *)(uVar9 + 10 + *(int *)(param_2 + 0xc)));
        local_40 = (uint)(uVar9 + 0xc);
        pbVar10[0x29] = (byte)(*(byte *)(uVar9 + 0xb + *(int *)(param_2 + 0xc)));
        uVar7 = (undefined4)(Ordinal_14(*(undefined4 *)(local_40 + *(int *)(param_2 + 0xc))), 0);
        *(undefined4*)(pbVar10 + 0x2c) = (undefined4)(uVar7);
        if ((local_44 & 0xffff) < local_3c + 0xf) {
          uVar6 = (undefined2)(0);
        }
        else {
          uVar6 = (undefined2)(Ordinal_15(*(undefined2 *)(*(int *)(param_2 + 0xc) + 4 + local_40)), 0);
        }
        *(undefined2*)(pbVar10 + 0x30) = (undefined2)(uVar6);
        if (param_1 == 1) {
          *param_4 = (byte)(*pbVar10);
          uVar7 = (undefined4)(*(undefined4 *)(pbVar10 + 5));
          uVar3 = (undefined4)(*(undefined4 *)(pbVar10 + 9));
          uVar4 = (undefined4)(*(undefined4 *)(pbVar10 + 0xd));
          *(undefined4*)(param_4 + 1) = (undefined4)(*(undefined4 *)(pbVar10 + 1));
          *(undefined4*)(param_4 + 5) = (undefined4)(uVar7);
          *(undefined4*)(param_4 + 9) = (undefined4)(uVar3);
          *(undefined4*)(param_4 + 0xd) = (undefined4)(uVar4);
          uVar7 = (undefined4)(*(undefined4 *)(pbVar10 + 0x15));
          uVar3 = (undefined4)(*(undefined4 *)(pbVar10 + 0x19));
          uVar4 = (undefined4)(*(undefined4 *)(pbVar10 + 0x1d));
          *(undefined4*)(param_4 + 0x11) = (undefined4)(*(undefined4 *)(pbVar10 + 0x11));
          *(undefined4*)(param_4 + 0x15) = (undefined4)(uVar7);
          *(undefined4*)(param_4 + 0x19) = (undefined4)(uVar3);
          *(undefined4*)(param_4 + 0x1d) = (undefined4)(uVar4);
          param_4[0x21] = (byte)(pbVar10[0x21]);
          *(undefined4*)(param_4 + 0x22) = (undefined4)(*(undefined4 *)(pbVar10 + 0x22));
          *(undefined2*)(param_4 + 0x26) = (undefined2)(*(undefined2 *)(pbVar10 + 0x26));
          param_4[0x28] = (byte)(pbVar10[0x28]);
          param_4[0x29] = (byte)(pbVar10[0x29]);
          *(undefined4*)(param_4 + 0x2c) = (undefined4)(*(undefined4 *)(pbVar10 + 0x2c));
        }
        if (*param_2 == (char)(('\0'))) goto LAB_113c0ec3;
        if (2 < *(uint *)(param_2 + 0x10)) {
          local_44 = (uint)(Ordinal_15(*(undefined2 *)(*(int *)(param_2 + 0xc) + 1)), 0);
          local_44 = (uint)(local_44 & 0xffff);
          if (((int)(local_44) <= *(int *)(param_2 + 0x10) - 3U) && (*param_2 != (char)(('\0')))) {
            if ((**(byte **)(param_2 + 0xc) < 0x28) &&
               (piVar2 = (int *)(*(int **)(param_2 + 0x14), 0),(int *)( piVar2) != (int *)(0x0))) {
              uVar9 = (uint)(0);
              piVar8 = (int *)(piVar2);
              if (*(uint *)(param_2 + 0x18) != 0) {
                do {
                  if ((uintptr_t)(*(int *)(uintptr_t)(*piVar8))== (uintptr_t)((uint *)**(int **)(uintptr_t)(param_2 + 0xc))) {
                    if ((((uint *)*piVar8)[1] != 2) && (piVar2[uVar9 * 7 + 1] != 0)) goto LAB_113c0ec0;
                    piVar2[uVar9 * 7 + 1] = (int)(piVar2[uVar9 * 7 + 1] + 1);
                    break;
                  }
                  uVar9 = (uint)(uVar9 + 1);
                  piVar8 = (int *)(piVar8 + 7);
                } while ((uint)(uVar9) < *(uint *)(param_2 + 0x18));
              }
            }
            *(uint*)(param_2 + 0xc) = (uint)(*(int *)(param_2 + 0xc) + local_44 + 3);
            *(uint*)(param_2 + 0x10) = (uint)(*(int *)(param_2 + 0x10) + (-3 - local_44));
            thunk_FUN_1148ac28();
            return;
          }
        }
      }
    }
LAB_113c0ec0:
    *param_2 = (char)('\0');
  }
LAB_113c0ec3:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d0870; body size 325 bytes.
#line 1 "ENTRY_113d0870"

void FUN_113d0870(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  int local_44 [14];
  word *local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&local_44);
  local_44[0] = (int)(-0x31320a0);
  local_44[1] = (int)(0x3615bb0b);
  local_44[2] = (int)(0xc32d3254);
  local_44[3] = (int)(0xd56bc53f);
  local_44[4] = (int)(0x7d617ad5);
  local_44[5] = (int)(0xe647432a);
  local_44[6] = (int)(0x16b05a78);
  local_44[7] = (int)(0x626d9bc0);
  local_44[8] = (int)(0x52d0c0ba);
  local_44[9] = (int)(0xf87bfa3c);
  local_44[10] = (int)(0xa5f1dd2b);
  local_44[0xb] = (int)(0xe640eccb);
  local_44[0xc] = (int)(0xe43f300c);
  local_44[0xd] = (int)(0x5c59d2d8);
  local_c = (word *)(&WORD_12411e10);
  local_8 = (undefined4)(0x53519b26);
  if (param_2 == 0x424) {
    thunk_FUN_113d15c0(1,param_1,0x424,(uint)&local_44 + 8);
    piVar1 = (int *)((uint)&local_44 + 8);
    piVar2 = (int *)((uint)&local_44);
    uVar3 = (uint)(0x1c);
    while (*piVar1 == (int)(*(piVar2))) {
      piVar1 = (int *)(piVar1 + 1);
      piVar2 = (int *)(piVar2 + 1);
      bVar4 = (bool)(uVar3 < 4);
      uVar3 = (uint)(uVar3 - 4);
      if (bVar4) {
        thunk_FUN_1148ac28();
        return;
      }
    }
  }
  else if (param_2 == 0x34a) {
    thunk_FUN_113d15c0(1,param_1,0x34a,(uint)&local_44);
    piVar1 = (int *)((uint)&local_44);
    piVar2 = (int *)((uint)&local_44 + 8);
    uVar3 = (uint)(0x1c);
    while (*piVar1 == (int)(*(piVar2))) {
      piVar1 = (int *)(piVar1 + 1);
      piVar2 = (int *)(piVar2 + 1);
      bVar4 = (bool)(uVar3 < 4);
      uVar3 = (uint)(uVar3 - 4);
      if (bVar4) {
        thunk_FUN_1148ac28();
        return;
      }
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d0e60; body size 745 bytes.
#line 1 "ENTRY_113d0e60"

void FUN_113d0e60(undefined4 param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint *param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int *piVar6;
  void *pvVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  bool bVar11;
  undefined1 auStack_d0 [3];
  undefined1 local_cd;
  uint *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  char *local_b4;
  uint local_b0;
  undefined4 local_ac;
  char *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  char *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  char *local_90;
  undefined4 local_8c;
  int local_88 [14];
  word *local_50;
  undefined4 local_4c;
  byte local_48 [36];
  int local_24 [8];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_d0);
  local_c4 = (undefined4)(param_5);
  local_c8 = (undefined4)(param_4);
  pvVar7 = (void *)((void *)0x0);
  local_c0 = (undefined4)(param_6);
  local_bc = (undefined4)(param_7);
  local_cc = (uint *)(param_8);
  local_cd = (undefined1)(1);
  *param_8 = (uint)(0);
  if (param_3 != '\0') {
    local_88[0] = (int)(-0x31320a0);
    local_88[1] = (int)(0x3615bb0b);
    local_88[2] = (int)(0xc32d3254);
    local_88[3] = (int)(0xd56bc53f);
    local_88[4] = (int)(0x7d617ad5);
    local_88[5] = (int)(0xe647432a);
    local_88[6] = (int)(0x16b05a78);
    local_88[7] = (int)(0x626d9bc0);
    local_88[8] = (int)(0x52d0c0ba);
    local_88[9] = (int)(0xf87bfa3c);
    local_88[10] = (int)(0xa5f1dd2b);
    local_88[0xb] = (int)(0xe640eccb);
    local_88[0xc] = (int)(0xe43f300c);
    local_88[0xd] = (int)(0x5c59d2d8);
    local_50 = (word *)(&WORD_12411e10);
    local_4c = (undefined4)(0x53519b26);
    if (param_2 == 0x424) {
      thunk_FUN_113d15c0(1,param_1,0x424,(uint)&local_24);
      piVar5 = (int *)((uint)&local_24);
      piVar6 = (int *)((uint)&local_88);
      uVar8 = (uint)(0x1c);
      do {
        if (*piVar5 != (int)(*(piVar6))) goto LAB_113d0fec;
        piVar5 = (int *)(piVar5 + 1);
        piVar6 = (int *)(piVar6 + 1);
        bVar11 = (bool)(3 < uVar8);
        uVar8 = (uint)(uVar8 - 4);
      } while (bVar11);
      goto LAB_113d1123;
    }
    if (param_2 == 0x34a) {
      thunk_FUN_113d15c0(1,param_1,0x34a,(uint)&local_48);
      pbVar9 = (byte *)((uint)&local_48);
      piVar6 = (int *)((uint)&local_88 + 8);
      uVar8 = (uint)(0x1c);
      do {
        if (*(int *)(int)(pbVar9) != (int)(*piVar6)) goto LAB_113d0fec;
        pbVar9 = (byte *)(pbVar9 + 4);
        piVar6 = (int *)(piVar6 + 1);
        bVar11 = (bool)(3 < uVar8);
        uVar8 = (uint)(uVar8 - 4);
      } while (bVar11);
      goto LAB_113d1123;
    }
  }
LAB_113d0fec:
  puVar10 = (uint *)(local_cc);
  local_b8 = (undefined4)(local_c8);
  local_ac = (undefined4)(local_c4);
  local_a0 = (undefined4)(local_c0);
  local_b4 = (char *)("urn:sonos:device");
  local_b0 = (uint)(2);
  local_a8 = (char *)("urn:sonos:udn");
  local_a4 = (undefined4)(4);
  local_9c = (char *)("urn:sonos:hhid");
  local_98 = (undefined4)(8);
  local_94 = (undefined4)(local_bc);
  local_90 = (char *)("urn:sonos:user");
  local_8c = (undefined4)(0x10);
  pvVar7 = (void *)(malloc(0x1a0), 0);
  if ((void *)(pvVar7) != (void *)(0x0)) {
    *(undefined4*)((int)pvVar7 + 0x198) = (undefined4)(1);
    *(undefined4*)((int)pvVar7 + 0x19c) = (undefined4)(0);
    thunk_FUN_11401f20(pvVar7);
    iVar2 = (int)(thunk_FUN_11401ff0(pvVar7,param_1,param_2), 0);
    if ((iVar2 == 0) && (*(int *)((int)pvVar7 + 0x194) == 0)) {
      puVar10 = (uint *)(&local_b0);
      iVar2 = (int)(4);
      do {
        pbVar9 = (byte *)((byte *)puVar10[-2]);
        if (((byte *)(pbVar9) != (byte *)(0x0)) && (*pbVar9 != (byte)((0)))) {
          iVar3 = (int)(thunk_FUN_113d03e0(pvVar7,(uint)&local_48,0x21,puVar10[-1]), 0);
          if (iVar3 == 0) {
            pbVar4 = (byte *)((uint)&local_48);
            do {
              bVar1 = (byte)(*pbVar4);
              bVar11 = (bool)((byte)(bVar1) < *pbVar9);
              if ((byte)(bVar1) != *pbVar9) {
LAB_113d10f0:
                uVar8 = (uint)(-(uint)bVar11 | 1);
                goto LAB_113d10f5;
              }
              if (bVar1 == 0) break;
              bVar1 = (byte)(pbVar4[1]);
              bVar11 = (bool)((byte)((bVar1)) < pbVar9[1]);
              if ((byte)((bVar1)) != pbVar9[1]) goto LAB_113d10f0;
              pbVar4 = (byte *)(pbVar4 + 2);
              pbVar9 = (byte *)(pbVar9 + 2);
            } while (bVar1 != 0);
            uVar8 = (uint)(0);
LAB_113d10f5:
            if (uVar8 == 0) goto LAB_113d1106;
          }
          local_cd = (undefined1)(0);
          *local_cc = (uint)(*local_cc | *puVar10);
        }
LAB_113d1106:
        puVar10 = (uint *)(puVar10 + 3);
        iVar2 = (int)(iVar2 + -1);
      } while (iVar2 != 0);
      goto LAB_113d1123;
    }
  }
  thunk_FUN_113cfe50(pvVar7);
  *puVar10 = (uint)(*puVar10 | 1);
  local_cd = (undefined1)(0);
  pvVar7 = (void *)((void *)0x0);
LAB_113d1123:
  thunk_FUN_113cfe50(pvVar7);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d2860; body size 609 bytes.
#line 1 "ENTRY_113d2860"

int __thiscall Recovered_Bulk::m_FUN_113d2860(undefined4 *param_2,undefined4 param_3,uint param_4,int param_5,
            int *param_6)
{
  uint param_1 = (uint )this;
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_4;
  
  piVar4 = (int *)(param_6);
  uVar9 = (uint)(param_4);
  puVar2 = (undefined4 *)(param_2);
  if ((*(byte *)(param_2 + 0x25) & 1) == 0) {
    iVar8 = (int)(1);
    local_4 = (uint)(param_1);
  }
  else {
    local_4 = (uint)(param_2[0x22]);
    iVar8 = (int)(thunk_FUN_113d3600(*param_2), 0);
    bVar1 = (byte)(*(byte *)(puVar2 + 0x25));
    if ((bVar1 & 1) == 0) {
      param_2 = (undefined4 *)((undefined4 *)0x0);
      iVar8 = (int)(1);
    }
    else {
      if ((bVar1 & 4) == 0) {
        if ((bVar1 & 2) == 0) {
          uVar5 = (uint)(uVar9);
          if (local_4 - puVar2[0x2a] < uVar9) {
            uVar5 = (uint)(local_4 - puVar2[0x2a]);
          }
          uVar9 = (uint)(uVar9 - uVar5);
        }
        if (iVar8 != 0) {
          uVar5 = (uint)(uVar9);
          if ((uint)(iVar8 - puVar2[0x2f]) < uVar9) {
            uVar5 = (uint)(iVar8 - puVar2[0x2f]);
          }
          uVar9 = (uint)(uVar9 - uVar5);
        }
      }
      if ((bVar1 & 2) == 0) {
        iVar8 = (int)(thunk_FUN_113d3c80(*puVar2,bVar1 & 4,uVar9,&param_2,0), 0);
      }
      else {
        iVar8 = (int)(thunk_FUN_113d3bb0(puVar2 + 1,uVar9,&param_2), 0);
      }
      iVar3 = (int)(param_5);
      if (iVar8 == 0) {
        bVar1 = (byte)(*(byte *)(puVar2 + 0x25));
        if ((bVar1 & 6) == 4) {
          if ((undefined4 *)~(uintptr_t)((undefined4 *)((local_4))) < (undefined4 *)(param_2)) {
            param_2 = (undefined4 *)((undefined4 *)0x0);
            iVar8 = (int)(3);
            goto LAB_113d2967;
          }
          param_2 = (undefined4 *)((undefined4 *)((int)param_2 + local_4));
        }
        puVar6 = (undefined4 *)((undefined4 *)*piVar4);
        if ((undefined4 *)((param_2)) <= (undefined4 *)(puVar6)) {
          if ((bVar1 & 4) == 0) {
            iVar8 = (int)(FUN_113d2b80(puVar2,param_3,param_4,param_5,piVar4), 0);
            return (int)(iVar8);
          }
          iVar7 = (int)(0);
          if ((bVar1 & 2) == 0) {
            iVar8 = (int)(thunk_FUN_113d2fb0(param_5,puVar2[0x22]), 0);
            if (iVar8 == 0) {
              iVar8 = (int)(7);
            }
            else {
              iVar8 = (int)(thunk_FUN_113d39f0(puVar2 + 1,*puVar2,puVar2 + 0x19,puVar2[0x21],iVar3, puVar2[0x22],puVar2[0x23],puVar2[0x24],1,0), 0);
              if (iVar8 == 0) {
                *(byte*)(puVar2 + 0x25) = (byte)(*(byte *)(puVar2 + 0x25) | 2);
                iVar7 = (int)(puVar2[0x22]);
                puVar6 = (undefined4 *)((undefined4 *)*piVar4);
                goto LAB_113d2a23;
              }
            }
          }
          else {
LAB_113d2a23:
            local_4 = (uint)((int)puVar6 - iVar7);
            iVar8 = (int)(thunk_FUN_113d3e30(puVar2 + 1,param_3,param_4,param_5 + iVar7,&local_4), 0);
            if (iVar8 == 0) {
              *piVar4 = (int)(local_4 + iVar7);
              return (int)(0);
            }
          }
          *piVar4 = (int)(0);
          if ((*(byte *)(puVar2 + 0x25) & 1) == 0) {
            return (int)(iVar8);
          }
          thunk_FUN_113cfb70(puVar2 + 0x19,0x20);
          if ((*(byte *)(puVar2 + 0x25) & 2) != 0) {
            thunk_FUN_113d3650(puVar2 + 1);
          }
          goto LAB_113d2a7f;
        }
        iVar8 = (int)(6);
      }
      else {
        param_2 = (undefined4 *)((undefined4 *)0x0);
      }
    }
  }
LAB_113d2967:
  *piVar4 = (int)(0);
  if ((*(byte *)(puVar2 + 0x25) & 1) == 0) {
    return (int)(iVar8);
  }
  thunk_FUN_113cfb70(puVar2 + 0x19,0x20);
  if ((*(byte *)(puVar2 + 0x25) & 2) != 0) {
    thunk_FUN_113d3650(puVar2 + 1);
    *(undefined1*)(puVar2 + 0x25) = (undefined1)(0);
    return (int)(iVar8);
  }
LAB_113d2a7f:
  *(undefined1*)(puVar2 + 0x25) = (undefined1)(0);
  return (int)(iVar8);
}


// Reference entry 1141d1c0; body size 486 bytes.
#line 1 "ENTRY_1141d1c0"

void FUN_1141d1c0(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_5c;
  undefined1 local_58 [12];
  uint local_4c;
  undefined1 local_48 [4];
  uint local_44 [17];
  
  local_44[0x10] = (uint)(DAT_12126b84 ^ (uint)&local_5c);
  local_48[0] = (undefined1)(*(undefined1(*)[4])&param_3);
  thunk_FUN_1140d5f0((uint)&local_58);
  iVar5 = (int)(thunk_FUN_1140d570(param_5), 0);
  if (iVar5 == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1140d5f0((uint)&local_58);
  iVar6 = (int)(thunk_FUN_1140d620((uint)&local_58,iVar5,0), 0);
  if (iVar6 == 0) {
    local_4c = (uint)(thunk_FUN_1140ce80(iVar5), 0);
    local_4c = (uint)(local_4c & 0xff);
    memset((char *)&local_44,0,0x40);
    local_5c = (undefined4)(0);
    for (; param_2 != 0; param_2 = param_2 - uVar8) {
      uVar8 = (uint)(param_2);
      if (local_4c <= param_2) {
        uVar8 = (uint)(local_4c);
      }
      iVar5 = (int)(thunk_FUN_1140d850((uint)&local_58), 0);
      if ((((iVar5 != 0) || (iVar5 = (int)(FUN_1005ef7a((uint)&local_58,(uint)&local_48,param_4), 0), iVar5 != 0)) ||
          (iVar5 = (int)(FUN_1005ef7a((uint)&local_58,&local_5c,4), 0), iVar5 != 0)) ||
         (iVar5 = (int)(thunk_FUN_1140ccc0((uint)&local_58,(uint)&local_44), 0), iVar5 != 0)) break;
      uVar7 = (uint)(0);
      if (uVar8 != 0) {
        if ((0x3f < uVar8) &&
           (((uint *)(((int)(uint)&local_44 + (uVar8 - 1))) < (uint *)(param_1) ||
            ((uint *)(((int)param_1 + (uVar8 - 1))) < (uint *)((uint)&local_44))))) {
          do {
            uVar2 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 4));
            uVar3 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 8));
            uVar4 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0xc));
            *param_1 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7) ^ *param_1);
            param_1[1] = (uint)(uVar2 ^ param_1[1]);
            param_1[2] = (uint)(uVar3 ^ param_1[2]);
            param_1[3] = (uint)(uVar4 ^ param_1[3]);
            uVar2 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0x14));
            uVar3 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0x18));
            uVar4 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0x1c));
            param_1[4] = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0x10) ^ param_1[4]);
            param_1[5] = (uint)(uVar2 ^ param_1[5]);
            param_1[6] = (uint)(uVar3 ^ param_1[6]);
            param_1[7] = (uint)(uVar4 ^ param_1[7]);
            uVar2 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0x24));
            uVar3 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0x28));
            uVar4 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0x2c));
            param_1[8] = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0x20) ^ param_1[8]);
            param_1[9] = (uint)(uVar2 ^ param_1[9]);
            param_1[10] = (uint)(uVar3 ^ param_1[10]);
            param_1[0xb] = (uint)(uVar4 ^ param_1[0xb]);
            iVar5 = (int)(uVar7 + 0x30);
            uVar2 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0x34));
            uVar3 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0x38));
            uVar4 = (uint)(*(uint *)((int)(uint)&local_44 + uVar7 + 0x3c));
            uVar7 = (uint)(uVar7 + 0x40);
            param_1[0xc] = (uint)(*(uint *)((int)(uint)&local_44 + iVar5) ^ param_1[0xc]);
            param_1[0xd] = (uint)(uVar2 ^ param_1[0xd]);
            param_1[0xe] = (uint)(uVar3 ^ param_1[0xe]);
            param_1[0xf] = (uint)(uVar4 ^ param_1[0xf]);
            param_1 = (uint *)(param_1 + 0x10);
          } while (uVar7 < (uVar8 & 0xffffffc0));
          if (uVar8 <= uVar7) goto LAB_1141d36c;
        }
        do {
          pbVar1 = (byte *)((byte *)((int)(uint)&local_44 + uVar7));
          uVar7 = (uint)(uVar7 + 1);
          *(byte*)param_1 = (byte)((uint *)((byte)*param_1 ^ *pbVar1));
          param_1 = (uint *)((uint *)((int)param_1 + 1));
        } while (uVar7 < uVar8);
      }
LAB_1141d36c:
      local_5c = (undefined4)(((uint)(*(uint *)((char *)&local_5c + 3) + '\x01') << 24 | (uint)((undefined3)local_5c)));
    }
  }
  thunk_FUN_11423ed0((uint)&local_44,0x40);
  thunk_FUN_1140cd70((uint)&local_58);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11423ea0; body size 29 bytes.
#line 1 "ENTRY_11423ea0"

tm * FUN_11423ea0(__time64_t *param_1,tm *param_2)

{
  errno_t eVar1;
  tm *ptVar2;
  
  eVar1 = (errno_t)(_gmtime64_s(param_2,param_1), 0);
  ptVar2 = (tm *)((tm *)0x0);
  if (eVar1 == 0) {
    ptVar2 = (tm *)(param_2);
  }
  return (tm *)(ptVar2);
}


// Reference entry 11439e39; body size 313 bytes.
#line 1 "ENTRY_11439e39"

int FUN_11439e39(void)

{ int stack0x00000008; int stack0x00000010;
 try {
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  uint uVar14;
  byte bStack0000001c;
  undefined3 uStack0000001d;
  undefined4 in_stack_00000020;
  void *in_stack_00000024;
  uint in_stack_00000028;
  byte in_stack_0000002c;
  undefined1 *in_stack_00000030;
  
  uVar4 = (undefined4)(in_stack_00000020);
  iVar8 = (int)(thunk_FUN_114156d0(in_stack_00000020,0), 0);
  puVar6 = (undefined1 *)(in_stack_00000030);
  *in_stack_00000030 = (undefined1)(iVar8 == 0);
  iVar8 = (int)(thunk_FUN_11413d00(&stack0x00000008,uVar4), 0);
  if (((iVar8 == 0) && (iVar8 = (int)(thunk_FUN_11417bb0(&stack0x00000010), 0), iVar8 == 0)) &&
     (iVar8 = (int)(thunk_FUN_11417320(&stack0x00000008,&stack0x00000010,*puVar6), 0), uVar5 = (uint)(in_stack_00000028), pvVar13 = (void *)(in_stack_00000024), iVar8 == 0)) {
    memset(in_stack_00000024,0,in_stack_00000028 + 1);
    if (uVar5 != 0) {
      uVar9 = (uint)((uint)in_stack_0000002c);
      uVar11 = (uint)(0);
      _bStack0000001c = uVar9;
      do {
        uVar12 = (uint)(0);
        uVar14 = (uint)(uVar11);
        if (uVar9 != 0) {
          do {
            cVar7 = (char)(thunk_FUN_114156d0(&stack0x00000008,uVar14), 0);
            bVar10 = (byte)((byte)uVar12);
            uVar12 = (uint)(uVar12 + 1);
            *(byte*)((int)in_stack_00000024 + uVar11) = (byte)(*(byte *)((int)in_stack_00000024 + uVar11) | cVar7 << (bVar10 & 0x1f));
            uVar9 = (uint)(_bStack0000001c);
            uVar14 = (uint)(uVar14 + uVar5);
          } while (uVar12 < _bStack0000001c);
        }
        uVar11 = (uint)(uVar11 + 1);
        pvVar13 = (void *)(in_stack_00000024);
      } while (uVar11 < uVar5);
    }
    bVar10 = (byte)(0);
    uVar11 = (uint)(1);
    _bStack0000001c = _bStack0000001c & 0xffffff00;
    if (uVar5 != 0) {
      do {
        bVar2 = (byte)(*(byte *)(uVar11 + (int)pvVar13));
        bVar10 = (byte)(bVar2 ^ bVar10);
        cVar7 = (char)('\x01' - (bVar10 & 1));
        bVar3 = (byte)(*(char *)((uVar11 - 1) + (int)pvVar13) * cVar7);
        pbVar1 = (byte *)((byte *)((uVar11 - 1) + (int)pvVar13));
        *pbVar1 = (byte)(*pbVar1 | cVar7 * -0x80);
        *(byte*)(uVar11 + (int)pvVar13) = (byte)(bVar3 ^ bVar10);
        bVar10 = (byte)(bVar3 & bVar10 | bVar2 & bStack0000001c);
        uVar11 = (uint)(uVar11 + 1);
        _bStack0000001c = ((uint)(uStack0000001d) << 8 | (uint)(bVar10));
      } while (uVar11 <= uVar5);
    }
  }
  thunk_FUN_11414d70(&stack0x00000010);
  thunk_FUN_11414d70(&stack0x00000008);
  return (int)(iVar8);

 } catch (...) { }
}


// Reference entry 1146c1b0; body size 103 bytes.
#line 1 "ENTRY_1146c1b0"

void FUN_1146c1b0(undefined4 param_1,int param_2)

{
  uint uVar1;
  char local_dc [4];
  char acStack_d8 [4];
  char acStack_d4 [4];
  char acStack_d0 [4];
  char local_cc [8];
  char acStack_c4 [196];
  
  uVar1 = (uint)(0);
  local_dc[0] = (char)(*(char(*)[4])&*(uint *)((char * *)((uint)&s_fixed_point_overflow_in_11c05f38) + 0));
  acStack_d8[0] = (char)(*(char(*)[4])&*(uint *)((char * *)((uint)&s_fixed_point_overflow_in_11c05f38) + 4));
  acStack_d4[0] = (char)(*(char(*)[4])&*(uint *)((char * *)((uint)&s_fixed_point_overflow_in_11c05f38) + 8));
  acStack_d0[0] = (char)(*(char(*)[4])&*(uint *)((char * *)((uint)&s_fixed_point_overflow_in_11c05f38) + 12));
  local_cc[0] = (char)(*(char(*)[8])&*(uint *)((char * *)((uint)&s_fixed_point_overflow_in_11c05f38) + 16));
  if (param_2 != 0) {
    do {
      if (*(char *)(param_2 + uVar1) == '\0') break;
      acStack_c4[uVar1] = (char)(*(char *)(param_2 + uVar1));
      uVar1 = (uint)(uVar1 + 1);
    } while (uVar1 < 0xc3);
  }
  if (uVar1 + 0x18 < 0xdc) {
    acStack_c4[uVar1] = (char)('\0');
                    
    thunk_FUN_1146c180(param_1,(uint)&local_dc);
  }
                    
  thunk_FUN_1148bc65();
}


// Reference entry 114894f0; body size 656 bytes.
#line 1 "ENTRY_114894f0"

void FUN_114894f0(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  undefined2 uVar5;
  byte *pbVar7;
  uint local_38;
  byte *local_34;
  uint local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  uint local_14 [4];
  uint local_4;
  uint uVar6;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_38);
  local_34 = (byte *)(param_2);
  bVar4 = (byte)(*(byte *)(param_1 + 2));
  pbVar3 = (byte *)(local_2c);
  if (bVar4 != 3) {
    bVar1 = (byte)(*(byte *)((int)param_1 + 9));
    uVar6 = (uint)((uint)bVar1);
    if ((bVar4 & 2) == 0) {
      local_38 = (uint)(1);
      local_14[0] = (uint)((uint)param_3[3]);
      local_2c = (byte *)((byte *)(uVar6 - local_14[0]));
      local_24 = (byte *)(local_2c);
    }
    else {
      local_38 = (uint)(3);
      local_14[0] = (uint)((uint)*param_3);
      local_2c = (byte *)((byte *)(uVar6 - local_14[0]));
      local_24 = (byte *)(local_2c);
      local_14[1] = (uint)((uint)param_3[1]);
      local_20 = (int)(uVar6 - param_3[1]);
      local_14[2] = (uint)((uint)param_3[2]);
      local_1c = (int)(uVar6 - param_3[2]);
    }
    if ((bVar4 & 4) != 0) {
      bVar4 = (byte)(param_3[4]);
      (&local_24)[local_38] = (byte *)(uintptr_t)((int)((byte *)(uVar6 - bVar4)));
      local_14[local_38] = (uint)((uint)bVar4);
      local_38 = (uint)(local_38 + 1);
    }
    local_30 = (uint)(local_14[0]);
    pbVar3 = (byte *)(local_2c);
    local_24 = (byte *)(local_2c);
    if (bVar1 < 8) {
      local_28 = (byte *)((byte *)param_1[1]);
      if ((param_3[3] == 1) && (bVar1 == 2)) {
        local_38 = (uint)(0x55);
      }
      else if ((bVar1 != 4) || (local_38 = (uint)(0x11), param_3[3] != 3)) {
        local_38 = (uint)(0xff);
      }
      if ((byte *)(local_28) != (byte *)(0x0)) {
        do {
          uVar6 = (uint)(0);
          bVar4 = (byte)(0);
          for (pbVar3 = (byte *)(local_2c); (int)-local_14[0] < (int)pbVar3; pbVar3 = pbVar3 + -local_14[0]) {
            if ((int)pbVar3 < 1) {
              uVar2 = (uint)(*param_2 >> (-(byte)pbVar3 & 0x1f) & local_38);
            }
            else {
              uVar2 = (uint)((uint)*param_2 << ((byte)pbVar3 & 0x1f));
            }
            uVar6 = (uint)(uVar6 | uVar2);
            bVar4 = (byte)((byte)uVar6);
          }
          *param_2 = (byte)(bVar4);
          param_2 = (byte *)(param_2 + 1);
          local_28 = (byte *)(local_28 + -1);
        } while ((byte *)(local_28) != (byte *)(0x0));
        local_34 = (byte *)(param_2);
        thunk_FUN_1148ac28();
        return;
      }
    }
    else {
      local_28 = (byte *)((byte *)(*param_1 * local_38));
      local_34 = (byte *)((byte *)0x0);
      if (bVar1 == 8) {
        if ((byte *)(local_28) != (byte *)(0x0)) {
          do {
            uVar6 = (uint)(0);
            bVar4 = (byte)(0);
            local_30 = (uint)(local_14[(uint)local_34 % local_38]);
            for (pbVar3 = (byte *)((&local_24)[(uint)local_34 % local_38]); (int)-local_30 < (int)pbVar3;
                pbVar3 = pbVar3 + -local_30) {
              if ((int)pbVar3 < 1) {
                uVar2 = (uint)((uint)(*param_2 >> (-(byte)pbVar3 & 0x1f)));
              }
              else {
                uVar2 = (uint)((uint)*param_2 << ((byte)pbVar3 & 0x1f));
              }
              uVar6 = (uint)(uVar6 | uVar2);
              bVar4 = (byte)((byte)uVar6);
            }
            local_34 = (byte *)(local_34 + 1);
            *param_2 = (byte)(bVar4);
            param_2 = (byte *)(param_2 + 1);
          } while ((byte *)(local_34) < (byte *)(local_28));
          thunk_FUN_1148ac28();
          return;
        }
      }
      else if ((byte *)(local_28) != (byte *)(0x0)) {
        do {
          uVar6 = (uint)(0);
          uVar5 = (undefined2)(0);
          pbVar3 = (byte *)(param_2 + 1);
          local_30 = (uint)(local_14[(uint)local_34 % local_38]);
          for (pbVar7 = (byte *)((&local_24)[(uint)local_34 % local_38]); (int)-local_30 < (int)pbVar7;
              pbVar7 = pbVar7 + -local_30) {
            if ((int)pbVar7 < 1) {
              uVar2 = (uint)((uint)(ushort)(((uint)(*param_2) << 8 | (uint)(*pbVar3)) >> (-(byte)pbVar7 & 0x1f)));
            }
            else {
              uVar2 = (uint)((uint)((uint)(*param_2) << 8 | (uint)(*pbVar3)) << ((byte)pbVar7 & 0x1f));
            }
            uVar6 = (uint)(uVar6 | uVar2);
            uVar5 = (undefined2)((undefined2)uVar6);
          }
          *param_2 = (byte)((byte)((ushort)uVar5 >> 8));
          local_34 = (byte *)(local_34 + 1);
          *pbVar3 = (byte)((byte)uVar5);
          param_2 = (byte *)(param_2 + 2);
        } while ((byte *)(local_34) < (byte *)(local_28));
      }
    }
  }
  local_2c = (byte *)(pbVar3);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1148a5d1; body size 50 bytes.
#line 1 "ENTRY_1148a5d1"

/* Library Function - Single Match
    ___scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */undefined4 FUN_1148a5d1(void){
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(___scrt_is_ucrt_dll_in_use(), 0);
  if (iVar2 != 0) {
    while( true ) {
      iVar2 = (int)(0);
      LOCK();
      iVar1 = (int)(*(int *)((int)Self + 4));
      if (DAT_122fabd8 != 0) {
        iVar2 = (int)(DAT_122fabd8);
        iVar1 = (int)(DAT_122fabd8);
      }
      DAT_122fabd8 = (int)(iVar1);
      UNLOCK();
      if (iVar2 == 0) break;
      if (*(int *)((int)Self + 4) == (int)(iVar2)) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


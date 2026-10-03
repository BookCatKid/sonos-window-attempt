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
namespace std { template<class... A> static int _Xbad_function_call(A...) { return 0; } template<class... A> static int _Xlength_error(A...) { return 0; } typedef int _Iterator_base0; }
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> static int int_start(A...) { return 0; } };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> static int int_addref(A...) { return 0; } template<class... A> static int int_allocRep(A...) { return 0; } template<class... A> static int int_release(A...) { return 0; } static int op_ctor(...) { return 0; } static int op_lt(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); }; }
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIAbilityDelegate { char _pad; SCIAbilityDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIAbilityListener { char _pad; SCIAbilityListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIAccountManager { char _pad; SCIAccountManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIAction { char _pad; SCIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionDelegate { char _pad; SCIActionDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionDescriptor { char _pad; SCIActionDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionFilter { char _pad; SCIActionFilter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionFilterer { char _pad; SCIActionFilterer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionNoArgDescriptor { char _pad; SCIActionNoArgDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIAppReporting { char _pad; SCIAppReporting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIAppSessionManager { char _pad; SCIAppSessionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIArray { char _pad; SCIArray(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIDebug { char _pad; SCIDebug(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIElapsedTimeMeasurement { char _pad; SCIElapsedTimeMeasurement(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIEnumerable { char _pad; SCIEnumerable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCILibrary { char _pad; SCILibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCILibraryTests { char _pad; SCILibraryTests(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCINetworkManagement { char _pad; SCINetworkManagement(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIOp { char _pad; SCIOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIOpCB { char _pad; SCIOpCB(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIOpFactory { char _pad; SCIOpFactory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIProperty { char _pad; SCIProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIPropertyBag { char _pad; SCIPropertyBag(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCISecureStore { char _pad; SCISecureStore(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCISettingsMenu { char _pad; SCISettingsMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCISettingsSection { char _pad; SCISettingsSection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIStringArray { char _pad; SCIStringArray(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIVersion { char _pad; SCIVersion(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCVersion { char _pad; SCVersion(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; int * __thiscall m_FUN_101afc10(int *param_2); template<class... A> int m_FUN_101afc10(A...); int * __thiscall m_FUN_101afc70(int *param_2); template<class... A> int m_FUN_101afc70(A...); int * __thiscall m_FUN_101afcd0(int *param_2); template<class... A> int m_FUN_101afcd0(A...); int * __thiscall m_FUN_101afd30(int *param_2); template<class... A> int m_FUN_101afd30(A...); int * __thiscall m_FUN_101afd90(int *param_2); template<class... A> int m_FUN_101afd90(A...); int * __thiscall m_FUN_101afdf0(int *param_2); template<class... A> int m_FUN_101afdf0(A...); int * __thiscall m_FUN_101afe50(int *param_2); template<class... A> int m_FUN_101afe50(A...); int __thiscall m_FUN_101b0000(int param_2); template<class... A> int m_FUN_101b0000(A...); int __thiscall m_FUN_101b1040(int param_2); template<class... A> int m_FUN_101b1040(A...); bool __thiscall m_FUN_101b10a0(int *param_2); template<class... A> int m_FUN_101b10a0(A...); bool __thiscall m_FUN_101b10c0(int *param_2); template<class... A> int m_FUN_101b10c0(A...); int __thiscall m_FUN_101b10f0(int param_2); template<class... A> int m_FUN_101b10f0(A...); uint __thiscall m_FUN_101b1e00(uint param_2); template<class... A> int m_FUN_101b1e00(A...); void __thiscall m_FUN_101b2710(undefined4 *param_2); template<class... A> int m_FUN_101b2710(A...); void __thiscall m_FUN_101b2730(undefined4 *param_2); template<class... A> int m_FUN_101b2730(A...); void __thiscall m_FUN_101b2750(undefined4 *param_2); template<class... A> int m_FUN_101b2750(A...); void __thiscall m_FUN_101b2760(undefined4 *param_2); template<class... A> int m_FUN_101b2760(A...); void __thiscall m_FUN_101b2770(undefined4 *param_2); template<class... A> int m_FUN_101b2770(A...); void __thiscall m_FUN_101b2780(undefined4 *param_2); template<class... A> int m_FUN_101b2780(A...); void __thiscall m_FUN_101b2790(undefined4 *param_2); template<class... A> int m_FUN_101b2790(A...); void __thiscall m_FUN_101b27b0(undefined4 *param_2); template<class... A> int m_FUN_101b27b0(A...); void __thiscall m_FUN_101b27c0(undefined4 *param_2); template<class... A> int m_FUN_101b27c0(A...); uint __thiscall m_FUN_101b2d20(undefined4 param_2); template<class... A> int m_FUN_101b2d20(A...); void __thiscall m_FUN_101b58a0(int param_2); template<class... A> int m_FUN_101b58a0(A...); undefined4 __thiscall m_FUN_101b5e90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101b5e90(A...); void __thiscall m_FUN_101b68c0(undefined4 *param_2); template<class... A> int m_FUN_101b68c0(A...); int __thiscall m_FUN_101b8380(int param_2); template<class... A> int m_FUN_101b8380(A...); undefined4 * __thiscall m_FUN_101b96b0(undefined4 *param_2); template<class... A> int m_FUN_101b96b0(A...); undefined4 * __thiscall m_FUN_101b9a00(undefined4 param_2); template<class... A> int m_FUN_101b9a00(A...); int * __thiscall m_FUN_101ba400(int *param_2); template<class... A> int m_FUN_101ba400(A...); undefined4 * __thiscall m_FUN_101bc4a0(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_101bc4a0(A...); undefined4 * __thiscall m_FUN_101bc4c0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_101bc4c0(A...); undefined4 * __thiscall m_FUN_101bc570(undefined4 *param_2); template<class... A> int m_FUN_101bc570(A...); int * __thiscall m_FUN_101bc590(int *param_2); template<class... A> int m_FUN_101bc590(A...); void __thiscall m_FUN_101bc5c0(SCStr *param_2); template<class... A> int m_FUN_101bc5c0(A...); void __thiscall m_FUN_101bdd80(SCStr *param_2); template<class... A> int m_FUN_101bdd80(A...); undefined4 * __thiscall m_FUN_101bdfc0(undefined4 param_2); template<class... A> int m_FUN_101bdfc0(A...); undefined4 * __thiscall m_FUN_101bdfd0(undefined4 param_2); template<class... A> int m_FUN_101bdfd0(A...); int __thiscall m_FUN_101be1f0(int param_2); template<class... A> int m_FUN_101be1f0(A...); int __thiscall m_FUN_101be200(int param_2); template<class... A> int m_FUN_101be200(A...); void __thiscall m_FUN_101be250(int *param_2,int param_3); template<class... A> int m_FUN_101be250(A...); int * __thiscall m_FUN_101be270(int param_2); template<class... A> int m_FUN_101be270(A...); int * __thiscall m_FUN_101be290(int param_2); template<class... A> int m_FUN_101be290(A...); void __thiscall m_FUN_101be450(undefined4 *param_2); template<class... A> int m_FUN_101be450(A...); void __thiscall m_FUN_101be8a0(undefined4 *param_2); template<class... A> int m_FUN_101be8a0(A...); int * __thiscall m_FUN_101c3690(int *param_2); template<class... A> int m_FUN_101c3690(A...); int * __thiscall m_FUN_101c36a0(undefined4 param_2,int *param_3); template<class... A> int m_FUN_101c36a0(A...); undefined4 * __thiscall m_FUN_101c3720(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_101c3720(A...); undefined4 * __thiscall m_FUN_101c3860(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_101c3860(A...); undefined4 * __thiscall m_FUN_101c3870(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_101c3870(A...); undefined4 * __thiscall m_FUN_101c38c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101c38c0(A...); undefined4 * __thiscall m_FUN_101c38d0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_101c38d0(A...); int * __thiscall m_FUN_101c38e0(undefined4 *param_2); template<class... A> int m_FUN_101c38e0(A...); int * __thiscall m_FUN_101c3a40(int *param_2); template<class... A> int m_FUN_101c3a40(A...); int * __thiscall m_FUN_101c3a60(int *param_2); template<class... A> int m_FUN_101c3a60(A...); undefined4 * __thiscall m_FUN_101c3a80(undefined4 *param_2); template<class... A> int m_FUN_101c3a80(A...); int * __thiscall m_FUN_101c3aa0(int *param_2); template<class... A> int m_FUN_101c3aa0(A...); int * __thiscall m_FUN_101c3ac0(int *param_2); template<class... A> int m_FUN_101c3ac0(A...); int * __thiscall m_FUN_101c3b80(int *param_2); template<class... A> int m_FUN_101c3b80(A...); int * __thiscall m_FUN_101c3ba0(int *param_2); template<class... A> int m_FUN_101c3ba0(A...); int * __thiscall m_FUN_101c3bc0(int *param_2); template<class... A> int m_FUN_101c3bc0(A...); undefined4 * __thiscall m_FUN_101c3d80(undefined4 param_2); template<class... A> int m_FUN_101c3d80(A...); undefined4 * __thiscall m_FUN_101c3d90(undefined4 param_2); template<class... A> int m_FUN_101c3d90(A...); void __thiscall m_FUN_101c4390(undefined4 *param_2); template<class... A> int m_FUN_101c4390(A...); void __thiscall m_FUN_101c43c0(undefined4 *param_2); template<class... A> int m_FUN_101c43c0(A...); void __thiscall m_FUN_101c43e0(undefined4 *param_2); template<class... A> int m_FUN_101c43e0(A...); void __thiscall m_FUN_101c4410(undefined4 *param_2); template<class... A> int m_FUN_101c4410(A...); undefined4 * __thiscall m_FUN_101c5550(undefined4 *param_2); template<class... A> int m_FUN_101c5550(A...); undefined4 * __thiscall m_FUN_101c56a0(undefined4 param_2); template<class... A> int m_FUN_101c56a0(A...); undefined4 * __thiscall m_FUN_101c5790(undefined4 param_2); template<class... A> int m_FUN_101c5790(A...); undefined4 * __thiscall m_FUN_101c57a0(undefined4 param_2); template<class... A> int m_FUN_101c57a0(A...); undefined4 * __thiscall m_FUN_101c57b0(undefined4 param_2); template<class... A> int m_FUN_101c57b0(A...); undefined4 * __thiscall m_FUN_101c57c0(undefined4 param_2); template<class... A> int m_FUN_101c57c0(A...); undefined4 * __thiscall m_FUN_101c5800(undefined4 *param_2); template<class... A> int m_FUN_101c5800(A...); undefined4 * __thiscall m_FUN_101c5810(undefined4 param_2); template<class... A> int m_FUN_101c5810(A...); undefined4 * __thiscall m_FUN_101c5830(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101c5830(A...); undefined4 * __thiscall m_FUN_101c58e0(undefined4 *param_2); template<class... A> int m_FUN_101c58e0(A...); undefined4 * __thiscall m_FUN_101c5dc0(undefined4 param_2,undefined4 param_3,undefined1 param_4); template<class... A> int m_FUN_101c5dc0(A...); undefined4 * __thiscall m_FUN_101c6330(undefined4 param_2); template<class... A> int m_FUN_101c6330(A...); bool __thiscall m_FUN_101c73c0(int *param_2); template<class... A> int m_FUN_101c73c0(A...); bool __thiscall m_FUN_101c73e0(int *param_2); template<class... A> int m_FUN_101c73e0(A...); bool __thiscall m_FUN_101c7400(int *param_2); template<class... A> int m_FUN_101c7400(A...); bool __thiscall m_FUN_101c7420(int *param_2); template<class... A> int m_FUN_101c7420(A...); int __thiscall m_FUN_101c7470(int param_2); template<class... A> int m_FUN_101c7470(A...); uint __thiscall m_FUN_101c8530(uint param_2); template<class... A> int m_FUN_101c8530(A...); int * __thiscall m_FUN_101c8b10(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_101c8b10(A...); void __thiscall m_FUN_101c9020(undefined4 *param_2); template<class... A> int m_FUN_101c9020(A...); void __thiscall m_FUN_101c9040(undefined4 *param_2); template<class... A> int m_FUN_101c9040(A...); void __thiscall m_FUN_101c9050(undefined4 *param_2); template<class... A> int m_FUN_101c9050(A...); void __thiscall m_FUN_101c9060(undefined4 *param_2); template<class... A> int m_FUN_101c9060(A...); uint __thiscall m_FUN_101c9ac0(undefined4 param_2); template<class... A> int m_FUN_101c9ac0(A...); void __thiscall m_FUN_101ca9a0(undefined4 *param_2); template<class... A> int m_FUN_101ca9a0(A...); void __thiscall m_FUN_101ca9b0(undefined4 *param_2); template<class... A> int m_FUN_101ca9b0(A...); undefined4 * __thiscall m_FUN_101cc2f0(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_101cc2f0(A...); undefined4 * __thiscall m_FUN_101cc310(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_101cc310(A...); undefined4 * __thiscall m_FUN_101cc330(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_101cc330(A...); undefined4 * __thiscall m_FUN_101cc360(undefined4 param_2); template<class... A> int m_FUN_101cc360(A...); undefined4 * __thiscall m_FUN_101cc370(undefined4 param_2); template<class... A> int m_FUN_101cc370(A...); undefined4 * __thiscall m_FUN_101cc5f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_101cc5f0(A...); undefined4 * __thiscall m_FUN_101cc610(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101cc610(A...); undefined4 * __thiscall m_FUN_101cc6a0(int *param_2); template<class... A> int m_FUN_101cc6a0(A...); undefined4 * __thiscall m_FUN_101cc840(undefined4 *param_2); template<class... A> int m_FUN_101cc840(A...); int * __thiscall m_FUN_101cc870(int *param_2); template<class... A> int m_FUN_101cc870(A...); int * __thiscall m_FUN_101cc8f0(int *param_2); template<class... A> int m_FUN_101cc8f0(A...); int * __thiscall m_FUN_101cc910(int *param_2); template<class... A> int m_FUN_101cc910(A...); undefined4 * __thiscall m_FUN_101cca50(undefined4 *param_2); template<class... A> int m_FUN_101cca50(A...); int * __thiscall m_FUN_101cca90(int *param_2); template<class... A> int m_FUN_101cca90(A...); int * __thiscall m_FUN_101ccb30(int *param_2); template<class... A> int m_FUN_101ccb30(A...); int * __thiscall m_FUN_101ccbd0(int *param_2); template<class... A> int m_FUN_101ccbd0(A...); int * __thiscall m_FUN_101ccef0(int *param_2); template<class... A> int m_FUN_101ccef0(A...); int * __thiscall m_FUN_101cd090(int *param_2); template<class... A> int m_FUN_101cd090(A...); int * __thiscall m_FUN_101cd250(int *param_2); template<class... A> int m_FUN_101cd250(A...); undefined4 * __thiscall m_FUN_101cd270(undefined4 *param_2); template<class... A> int m_FUN_101cd270(A...); int * __thiscall m_FUN_101cd290(int *param_2); template<class... A> int m_FUN_101cd290(A...); int * __thiscall m_FUN_101cd760(int *param_2); template<class... A> int m_FUN_101cd760(A...); void __thiscall m_FUN_101cdb40(undefined4 *param_2); template<class... A> int m_FUN_101cdb40(A...); void __thiscall m_FUN_101cdcd0(int *param_2,uint *param_3); template<class... A> int m_FUN_101cdcd0(A...); int * __thiscall m_FUN_101cdf30(int *param_2,uint *param_3); template<class... A> int m_FUN_101cdf30(A...); void __thiscall m_FUN_101ce3f0(undefined4 *param_2); template<class... A> int m_FUN_101ce3f0(A...); undefined4 * __thiscall m_FUN_101ce420(uint param_2,undefined4 param_3,undefined1 param_4); template<class... A> int m_FUN_101ce420(A...); void __thiscall m_FUN_101ce590(int *param_2); template<class... A> int m_FUN_101ce590(A...); void __thiscall m_FUN_101ce640(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101ce640(A...); void __thiscall m_FUN_101ce840(undefined4 *param_2); template<class... A> int m_FUN_101ce840(A...); int __thiscall m_FUN_101ce9d0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_101ce9d0(A...); undefined4 * __thiscall m_FUN_101cfc40(undefined4 *param_2); template<class... A> int m_FUN_101cfc40(A...); undefined4 * __thiscall m_FUN_101cfd90(undefined4 *param_2); template<class... A> int m_FUN_101cfd90(A...); undefined4 * __thiscall m_FUN_101cfe00(undefined4 *param_2); template<class... A> int m_FUN_101cfe00(A...); undefined4 * __thiscall m_FUN_101cfed0(undefined4 param_2); template<class... A> int m_FUN_101cfed0(A...); undefined4 * __thiscall m_FUN_101cfef0(undefined4 param_2); template<class... A> int m_FUN_101cfef0(A...); undefined4 * __thiscall m_FUN_101cffb0(undefined4 param_2); template<class... A> int m_FUN_101cffb0(A...); undefined4 * __thiscall m_FUN_101cffc0(undefined4 param_2); template<class... A> int m_FUN_101cffc0(A...); undefined4 * __thiscall m_FUN_101cffd0(undefined4 param_2); template<class... A> int m_FUN_101cffd0(A...); undefined4 * __thiscall m_FUN_101d00a0(undefined4 param_2); template<class... A> int m_FUN_101d00a0(A...); undefined4 * __thiscall m_FUN_101d00b0(undefined4 param_2); template<class... A> int m_FUN_101d00b0(A...); undefined4 * __thiscall m_FUN_101d0140(undefined4 param_2); template<class... A> int m_FUN_101d0140(A...); undefined4 * __thiscall m_FUN_101d0150(undefined4 param_2); template<class... A> int m_FUN_101d0150(A...); undefined4 * __thiscall m_FUN_101d0160(undefined4 param_2); template<class... A> int m_FUN_101d0160(A...); undefined4 * __thiscall m_FUN_101d0550(undefined4 *param_2); template<class... A> int m_FUN_101d0550(A...); undefined4 * __thiscall m_FUN_101d0590(undefined4 *param_2); template<class... A> int m_FUN_101d0590(A...); undefined4 * __thiscall m_FUN_101d05f0(undefined4 *param_2); template<class... A> int m_FUN_101d05f0(A...); undefined4 * __thiscall m_FUN_101d0600(undefined4 param_2); template<class... A> int m_FUN_101d0600(A...); undefined4 * __thiscall m_FUN_101d0630(undefined4 param_2); template<class... A> int m_FUN_101d0630(A...); undefined4 * __thiscall m_FUN_101d0e80(undefined4 param_2); template<class... A> int m_FUN_101d0e80(A...); undefined4 * __thiscall m_FUN_101d0f20(undefined4 param_2,undefined4 param_3,undefined1 param_4); template<class... A> int m_FUN_101d0f20(A...); undefined4 * __thiscall m_FUN_101d1020(undefined4 param_2); template<class... A> int m_FUN_101d1020(A...); undefined4 * __thiscall m_FUN_101d15e0(undefined4 param_2); template<class... A> int m_FUN_101d15e0(A...); undefined4 * __thiscall m_FUN_101d1620(undefined4 param_2,int param_3); template<class... A> int m_FUN_101d1620(A...); undefined4 * __thiscall m_FUN_101d1670(undefined4 param_2); template<class... A> int m_FUN_101d1670(A...); int * __thiscall m_FUN_101d3c20(int *param_2); template<class... A> int m_FUN_101d3c20(A...); int * __thiscall m_FUN_101d3d60(int *param_2); template<class... A> int m_FUN_101d3d60(A...); bool __thiscall m_FUN_101d4190(int *param_2); template<class... A> int m_FUN_101d4190(A...); bool __thiscall m_FUN_101d41b0(int *param_2); template<class... A> int m_FUN_101d41b0(A...); bool __thiscall m_FUN_101d41d0(int *param_2); template<class... A> int m_FUN_101d41d0(A...); bool __thiscall m_FUN_101d41f0(int *param_2); template<class... A> int m_FUN_101d41f0(A...); bool __thiscall m_FUN_101d4210(int *param_2); template<class... A> int m_FUN_101d4210(A...); bool __thiscall m_FUN_101d4230(int *param_2); template<class... A> int m_FUN_101d4230(A...); bool __thiscall m_FUN_101d4250(int *param_2); template<class... A> int m_FUN_101d4250(A...); bool __thiscall m_FUN_101d4270(int *param_2); template<class... A> int m_FUN_101d4270(A...); undefined4 * __thiscall m_FUN_101d48f0(undefined4 *param_2); template<class... A> int m_FUN_101d48f0(A...); void __thiscall m_FUN_101d4ce0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101d4ce0(A...); void __thiscall m_FUN_101d4d30(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101d4d30(A...); undefined4 __thiscall m_FUN_101d4e20(undefined4 param_2); template<class... A> int m_FUN_101d4e20(A...); int __thiscall m_FUN_101d64f0(int param_2,int param_3); template<class... A> int m_FUN_101d64f0(A...); void __thiscall m_FUN_101d7020(int param_2); template<class... A> int m_FUN_101d7020(A...); void __thiscall m_FUN_101d7040(int param_2); template<class... A> int m_FUN_101d7040(A...); void __thiscall m_FUN_101d7060(int param_2); template<class... A> int m_FUN_101d7060(A...); void __thiscall m_FUN_101d7080(int param_2); template<class... A> int m_FUN_101d7080(A...); void __thiscall m_FUN_101d70a0(int *param_2); template<class... A> int m_FUN_101d70a0(A...); void __thiscall m_FUN_101d7170(undefined4 param_2); template<class... A> int m_FUN_101d7170(A...); void __thiscall m_FUN_101d7180(undefined4 param_2); template<class... A> int m_FUN_101d7180(A...); void __thiscall m_FUN_101d7190(undefined4 param_2); template<class... A> int m_FUN_101d7190(A...); void __thiscall m_FUN_101d71a0(undefined4 param_2); template<class... A> int m_FUN_101d71a0(A...); void __thiscall m_FUN_101d71b0(undefined4 param_2); template<class... A> int m_FUN_101d71b0(A...); void __thiscall m_FUN_101d71c0(undefined4 param_2); template<class... A> int m_FUN_101d71c0(A...); void __thiscall m_FUN_101d71d0(undefined4 param_2); template<class... A> int m_FUN_101d71d0(A...); void __thiscall m_FUN_101d71e0(undefined4 param_2); template<class... A> int m_FUN_101d71e0(A...); void __thiscall m_FUN_101d73a0(int *param_2); template<class... A> int m_FUN_101d73a0(A...); void __thiscall m_FUN_101d73e0(int param_2); template<class... A> int m_FUN_101d73e0(A...); void __thiscall m_FUN_101d7410(undefined4 *param_2); template<class... A> int m_FUN_101d7410(A...); void __thiscall m_FUN_101d7420(undefined4 *param_2); template<class... A> int m_FUN_101d7420(A...); void __thiscall m_FUN_101d7430(undefined4 *param_2); template<class... A> int m_FUN_101d7430(A...); void __thiscall m_FUN_101d7440(undefined4 *param_2); template<class... A> int m_FUN_101d7440(A...); void __thiscall m_FUN_101d83b0(undefined4 *param_2); template<class... A> int m_FUN_101d83b0(A...); void __thiscall m_FUN_101d83c0(undefined4 *param_2); template<class... A> int m_FUN_101d83c0(A...); void __thiscall m_FUN_101d8d80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101d8d80(A...); void __thiscall m_FUN_101d8f70(undefined4 *param_2); template<class... A> int m_FUN_101d8f70(A...); void __thiscall m_FUN_101d8f80(undefined4 *param_2); template<class... A> int m_FUN_101d8f80(A...); SCStr * __thiscall m_FUN_101da000(SCStr *param_2); template<class... A> int m_FUN_101da000(A...); void __thiscall m_FUN_101dd500(undefined4 param_2); template<class... A> int m_FUN_101dd500(A...); void __thiscall m_FUN_101dd520(undefined4 param_2); template<class... A> int m_FUN_101dd520(A...); void __thiscall m_FUN_101dfd30(int *param_2); template<class... A> int m_FUN_101dfd30(A...); void __thiscall m_FUN_101dfe30(int *param_2); template<class... A> int m_FUN_101dfe30(A...); undefined4 * __thiscall m_FUN_101dfe50(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_101dfe50(A...); undefined4 * __thiscall m_FUN_101dfe70(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_101dfe70(A...); SCStr * __thiscall m_FUN_101dff60(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_101dff60(A...); undefined4 * __thiscall m_FUN_101dff90(undefined4 param_2); template<class... A> int m_FUN_101dff90(A...); undefined4 * __thiscall m_FUN_101dffa0(undefined4 param_2); template<class... A> int m_FUN_101dffa0(A...); undefined4 * __thiscall m_FUN_101dffb0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_101dffb0(A...); undefined4 * __thiscall m_FUN_101dffd0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101dffd0(A...); SCStr * __thiscall m_FUN_101dffe0(undefined4 *param_2); template<class... A> int m_FUN_101dffe0(A...); int * __thiscall m_FUN_101e0020(int *param_2); template<class... A> int m_FUN_101e0020(A...); int * __thiscall m_FUN_101e02e0(int *param_2); template<class... A> int m_FUN_101e02e0(A...); int * __thiscall m_FUN_101e0300(int *param_2); template<class... A> int m_FUN_101e0300(A...); int * __thiscall m_FUN_101e0320(int *param_2); template<class... A> int m_FUN_101e0320(A...); int * __thiscall m_FUN_101e0340(int *param_2); template<class... A> int m_FUN_101e0340(A...); int * __thiscall m_FUN_101e0360(int *param_2); template<class... A> int m_FUN_101e0360(A...); int * __thiscall m_FUN_101e03e0(int *param_2); template<class... A> int m_FUN_101e03e0(A...); int * __thiscall m_FUN_101e0400(int *param_2); template<class... A> int m_FUN_101e0400(A...); int * __thiscall m_FUN_101e0420(int *param_2); template<class... A> int m_FUN_101e0420(A...); int * __thiscall m_FUN_101e04a0(int *param_2); template<class... A> int m_FUN_101e04a0(A...); undefined4 * __thiscall m_FUN_101e04c0(undefined4 *param_2); template<class... A> int m_FUN_101e04c0(A...); int * __thiscall m_FUN_101e05d0(int *param_2); template<class... A> int m_FUN_101e05d0(A...); int * __thiscall m_FUN_101e0640(int *param_2); template<class... A> int m_FUN_101e0640(A...); int * __thiscall m_FUN_101e0890(int *param_2); template<class... A> int m_FUN_101e0890(A...); int * __thiscall m_FUN_101e0970(int *param_2); template<class... A> int m_FUN_101e0970(A...); undefined4 * __thiscall m_FUN_101e0f40(undefined4 *param_2); template<class... A> int m_FUN_101e0f40(A...); undefined4 * __thiscall m_FUN_101e0fd0(undefined4 *param_2); template<class... A> int m_FUN_101e0fd0(A...); undefined4 * __thiscall m_FUN_101e10c0(undefined4 param_2); template<class... A> int m_FUN_101e10c0(A...); undefined4 * __thiscall m_FUN_101e10e0(undefined4 param_2); template<class... A> int m_FUN_101e10e0(A...); undefined4 * __thiscall m_FUN_101e1170(undefined4 param_2); template<class... A> int m_FUN_101e1170(A...); undefined4 * __thiscall m_FUN_101e1180(undefined4 param_2); template<class... A> int m_FUN_101e1180(A...); undefined4 * __thiscall m_FUN_101e1190(undefined4 *param_2); template<class... A> int m_FUN_101e1190(A...); bool __thiscall m_FUN_101e14f0(int *param_2); template<class... A> int m_FUN_101e14f0(A...); bool __thiscall m_FUN_101e1510(int *param_2); template<class... A> int m_FUN_101e1510(A...); bool __thiscall m_FUN_101e16f0(int *param_2); template<class... A> int m_FUN_101e16f0(A...); undefined4 * __thiscall m_FUN_101e1910(undefined4 *param_2); template<class... A> int m_FUN_101e1910(A...); void __thiscall m_FUN_101e23a0(undefined4 *param_2); template<class... A> int m_FUN_101e23a0(A...); void __thiscall m_FUN_101e23b0(undefined4 *param_2); template<class... A> int m_FUN_101e23b0(A...); void __thiscall m_FUN_101e2d70(undefined4 *param_2); template<class... A> int m_FUN_101e2d70(A...); SCStr * __thiscall m_FUN_101e6df0(SCStr *param_2); template<class... A> int m_FUN_101e6df0(A...); SCStr * __thiscall m_FUN_101e7070(SCStr *param_2); template<class... A> int m_FUN_101e7070(A...); SCStr * __thiscall m_FUN_101e71c0(SCStr *param_2); template<class... A> int m_FUN_101e71c0(A...); undefined4 * __thiscall m_FUN_101e7d70(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_101e7d70(A...); undefined4 * __thiscall m_FUN_101e7da0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_101e7da0(A...); undefined4 * __thiscall m_FUN_101e7dd0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_101e7dd0(A...); undefined4 * __thiscall m_FUN_101e7e20(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_101e7e20(A...); int * __thiscall m_FUN_101e7fb0(int *param_2); template<class... A> int m_FUN_101e7fb0(A...); undefined4 * __thiscall m_FUN_101e8050(undefined4 *param_2); template<class... A> int m_FUN_101e8050(A...); int * __thiscall m_FUN_101e8070(int *param_2); template<class... A> int m_FUN_101e8070(A...); int * __thiscall m_FUN_101e8110(int *param_2); template<class... A> int m_FUN_101e8110(A...); int * __thiscall m_FUN_101e8130(int *param_2); template<class... A> int m_FUN_101e8130(A...); int * __thiscall m_FUN_101e8150(int *param_2); template<class... A> int m_FUN_101e8150(A...); int * __thiscall m_FUN_101e82b0(int *param_2); template<class... A> int m_FUN_101e82b0(A...); int * __thiscall m_FUN_101e8320(int *param_2); template<class... A> int m_FUN_101e8320(A...); void __thiscall m_FUN_101e87b0(undefined4 *param_2); template<class... A> int m_FUN_101e87b0(A...); void __thiscall m_FUN_101e87e0(undefined4 *param_2); template<class... A> int m_FUN_101e87e0(A...); void __thiscall m_FUN_101e8810(undefined4 *param_2); template<class... A> int m_FUN_101e8810(A...); void __thiscall m_FUN_101e8840(undefined4 *param_2); template<class... A> int m_FUN_101e8840(A...); void __thiscall m_FUN_101e8870(undefined4 *param_2); template<class... A> int m_FUN_101e8870(A...); void __thiscall m_FUN_101e88a0(undefined4 *param_2); template<class... A> int m_FUN_101e88a0(A...); void __thiscall m_FUN_101e88d0(undefined4 *param_2); template<class... A> int m_FUN_101e88d0(A...); void __thiscall m_FUN_101e9080(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101e9080(A...); void __thiscall m_FUN_101e90a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101e90a0(A...); undefined4 * __thiscall m_FUN_101e9dd0(undefined4 *param_2); template<class... A> int m_FUN_101e9dd0(A...); undefined4 * __thiscall m_FUN_101e9e60(undefined4 *param_2); template<class... A> int m_FUN_101e9e60(A...); undefined4 * __thiscall m_FUN_101e9f50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101e9f50(A...); undefined4 * __thiscall m_FUN_101e9f70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101e9f70(A...); undefined4 * __thiscall m_FUN_101e9f90(undefined4 param_2); template<class... A> int m_FUN_101e9f90(A...); undefined4 * __thiscall m_FUN_101e9fa0(undefined4 param_2); template<class... A> int m_FUN_101e9fa0(A...); undefined4 * __thiscall m_FUN_101e9fb0(undefined4 param_2); template<class... A> int m_FUN_101e9fb0(A...); undefined4 * __thiscall m_FUN_101e9fc0(undefined4 param_2); template<class... A> int m_FUN_101e9fc0(A...); undefined4 * __thiscall m_FUN_101e9fd0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101e9fd0(A...); undefined4 * __thiscall m_FUN_101ea050(undefined4 *param_2); template<class... A> int m_FUN_101ea050(A...); undefined4 * __thiscall m_FUN_101ea190(undefined4 param_2); template<class... A> int m_FUN_101ea190(A...); undefined4 * __thiscall m_FUN_101ea350(undefined4 param_2,undefined4 param_3,undefined1 param_4); template<class... A> int m_FUN_101ea350(A...); int * __thiscall m_FUN_101eb670(int *param_2); template<class... A> int m_FUN_101eb670(A...); int * __thiscall m_FUN_101eb740(int *param_2); template<class... A> int m_FUN_101eb740(A...); undefined4 * __thiscall m_FUN_101eb810(undefined4 *param_2); template<class... A> int m_FUN_101eb810(A...); bool __thiscall m_FUN_101eb840(int *param_2); template<class... A> int m_FUN_101eb840(A...); bool __thiscall m_FUN_101eb860(int *param_2); template<class... A> int m_FUN_101eb860(A...); bool __thiscall m_FUN_101eb880(int *param_2); template<class... A> int m_FUN_101eb880(A...); bool __thiscall m_FUN_101eb8a0(int *param_2); template<class... A> int m_FUN_101eb8a0(A...); int __thiscall m_FUN_101eb8c0(int param_2); template<class... A> int m_FUN_101eb8c0(A...); int __thiscall m_FUN_101eb8d0(int param_2); template<class... A> int m_FUN_101eb8d0(A...); int __thiscall m_FUN_101eb8e0(int param_2); template<class... A> int m_FUN_101eb8e0(A...); void __thiscall m_FUN_101eba80(int *param_2); template<class... A> int m_FUN_101eba80(A...); void __thiscall m_FUN_101ebab0(int *param_2); template<class... A> int m_FUN_101ebab0(A...); void __thiscall m_FUN_101ebae0(int *param_2); template<class... A> int m_FUN_101ebae0(A...); void __thiscall m_FUN_101ebb00(int *param_2,int param_3); template<class... A> int m_FUN_101ebb00(A...); void __thiscall m_FUN_101ebb20(int *param_2,int param_3); template<class... A> int m_FUN_101ebb20(A...); void __thiscall m_FUN_101ebb40(int *param_2,int param_3); template<class... A> int m_FUN_101ebb40(A...); int * __thiscall m_FUN_101ebb80(int param_2); template<class... A> int m_FUN_101ebb80(A...); int * __thiscall m_FUN_101ebba0(int param_2); template<class... A> int m_FUN_101ebba0(A...); int * __thiscall m_FUN_101ebbc0(int param_2); template<class... A> int m_FUN_101ebbc0(A...); int * __thiscall m_FUN_101ebbe0(int param_2); template<class... A> int m_FUN_101ebbe0(A...); int * __thiscall m_FUN_101ebc00(int param_2); template<class... A> int m_FUN_101ebc00(A...); int * __thiscall m_FUN_101ebc20(int param_2); template<class... A> int m_FUN_101ebc20(A...); void __thiscall m_FUN_101ebfe0(int param_2); template<class... A> int m_FUN_101ebfe0(A...); void __thiscall m_FUN_101ec010(int param_2); template<class... A> int m_FUN_101ec010(A...); uint __thiscall m_FUN_101ec040(uint param_2); template<class... A> int m_FUN_101ec040(A...); uint __thiscall m_FUN_101ec080(uint param_2); template<class... A> int m_FUN_101ec080(A...); void __thiscall m_FUN_101ec1e0(uint param_2); template<class... A> int m_FUN_101ec1e0(A...); void __thiscall m_FUN_101ec460(undefined4 param_2); template<class... A> int m_FUN_101ec460(A...); void __thiscall m_FUN_101ec6e0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101ec6e0(A...); void __thiscall m_FUN_101ec700(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101ec700(A...); void __thiscall m_FUN_101ec740(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101ec740(A...); int __thiscall m_FUN_101ed070(uint param_2); template<class... A> int m_FUN_101ed070(A...); void __thiscall m_FUN_101ed0a0(undefined4 *param_2); template<class... A> int m_FUN_101ed0a0(A...); void __thiscall m_FUN_101ed0b0(undefined4 *param_2); template<class... A> int m_FUN_101ed0b0(A...); void __thiscall m_FUN_101ed0c0(undefined4 *param_2); template<class... A> int m_FUN_101ed0c0(A...); void __thiscall m_FUN_101ee090(undefined4 *param_2); template<class... A> int m_FUN_101ee090(A...); void __thiscall m_FUN_101ee0a0(undefined4 *param_2); template<class... A> int m_FUN_101ee0a0(A...); void __thiscall m_FUN_101ee0b0(undefined4 *param_2); template<class... A> int m_FUN_101ee0b0(A...); SCStr * __thiscall m_FUN_101f1640(SCStr *param_2); template<class... A> int m_FUN_101f1640(A...); int * __thiscall m_FUN_101f3c30(int *param_2); template<class... A> int m_FUN_101f3c30(A...); int * __thiscall m_FUN_101f3c50(int *param_2); template<class... A> int m_FUN_101f3c50(A...); undefined4 * __thiscall m_FUN_101f4510(undefined4 *param_2); template<class... A> int m_FUN_101f4510(A...); undefined4 * __thiscall m_FUN_101f45e0(undefined4 param_2); template<class... A> int m_FUN_101f45e0(A...); undefined4 * __thiscall m_FUN_101f4600(undefined4 param_2); template<class... A> int m_FUN_101f4600(A...); undefined4 * __thiscall m_FUN_101f4620(undefined4 param_2); template<class... A> int m_FUN_101f4620(A...); undefined4 * __thiscall m_FUN_101f4640(undefined4 param_2); template<class... A> int m_FUN_101f4640(A...); undefined4 * __thiscall m_FUN_101f4660(undefined4 param_2); template<class... A> int m_FUN_101f4660(A...); int * __thiscall m_FUN_101f4c10(int *param_2); template<class... A> int m_FUN_101f4c10(A...); bool __thiscall m_FUN_101f4d50(int *param_2); template<class... A> int m_FUN_101f4d50(A...); bool __thiscall m_FUN_101f4d70(int *param_2); template<class... A> int m_FUN_101f4d70(A...); bool __thiscall m_FUN_101f4d90(int *param_2); template<class... A> int m_FUN_101f4d90(A...); bool __thiscall m_FUN_101f4db0(int *param_2); template<class... A> int m_FUN_101f4db0(A...); void __thiscall m_FUN_101f5000(int *param_2); template<class... A> int m_FUN_101f5000(A...); void __thiscall m_FUN_101f5580(undefined4 *param_2); template<class... A> int m_FUN_101f5580(A...); void __thiscall m_FUN_101f5590(undefined4 *param_2); template<class... A> int m_FUN_101f5590(A...); void __thiscall m_FUN_101f6370(undefined4 *param_2); template<class... A> int m_FUN_101f6370(A...); void __thiscall m_FUN_101f6380(undefined4 *param_2); template<class... A> int m_FUN_101f6380(A...); undefined4 * __thiscall m_FUN_101f9890(int *param_2); template<class... A> int m_FUN_101f9890(A...); void __thiscall m_FUN_101f9ba0(int *param_2); template<class... A> int m_FUN_101f9ba0(A...); undefined4 * __thiscall m_FUN_101fa210(undefined4 param_2); template<class... A> int m_FUN_101fa210(A...); void __thiscall m_FUN_101fa8f0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101fa8f0(A...); void __thiscall m_FUN_101fa920(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101fa920(A...); void __thiscall m_FUN_101fafd0(int param_2); template<class... A> int m_FUN_101fafd0(A...); void __thiscall m_FUN_101faff0(int param_2); template<class... A> int m_FUN_101faff0(A...); void __thiscall m_FUN_101fb010(int *param_2); template<class... A> int m_FUN_101fb010(A...); void __thiscall m_FUN_101fb070(undefined4 param_2); template<class... A> int m_FUN_101fb070(A...); void __thiscall m_FUN_101fb080(undefined4 param_2); template<class... A> int m_FUN_101fb080(A...); void __thiscall m_FUN_101fb340(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101fb340(A...); int * __thiscall m_FUN_101fc3c0(undefined4 param_2,int *param_3); template<class... A> int m_FUN_101fc3c0(A...); undefined4 * __thiscall m_FUN_101fc450(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_101fc450(A...); undefined4 * __thiscall m_FUN_101fc570(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_101fc570(A...); int * __thiscall m_FUN_101fc5f0(undefined4 *param_2); template<class... A> int m_FUN_101fc5f0(A...); int * __thiscall m_FUN_101fc640(int *param_2); template<class... A> int m_FUN_101fc640(A...); int * __thiscall m_FUN_101fc700(int *param_2); template<class... A> int m_FUN_101fc700(A...); int * __thiscall m_FUN_101fc8a0(int *param_2); template<class... A> int m_FUN_101fc8a0(A...); int * __thiscall m_FUN_101fc9a0(int *param_2); template<class... A> int m_FUN_101fc9a0(A...); int * __thiscall m_FUN_101fc9c0(int *param_2); template<class... A> int m_FUN_101fc9c0(A...); int * __thiscall m_FUN_101fc9e0(int *param_2); template<class... A> int m_FUN_101fc9e0(A...); int * __thiscall m_FUN_101fccc0(int *param_2); template<class... A> int m_FUN_101fccc0(A...); undefined4 * __thiscall m_FUN_101fd020(undefined4 *param_2); template<class... A> int m_FUN_101fd020(A...); int * __thiscall m_FUN_101fd040(int *param_2); template<class... A> int m_FUN_101fd040(A...); int * __thiscall m_FUN_101fd160(int *param_2); template<class... A> int m_FUN_101fd160(A...); int * __thiscall m_FUN_101fd1e0(int *param_2); template<class... A> int m_FUN_101fd1e0(A...); int * __thiscall m_FUN_101fd2c0(int *param_2); template<class... A> int m_FUN_101fd2c0(A...); int * __thiscall m_FUN_101fd330(int *param_2); template<class... A> int m_FUN_101fd330(A...); int * __thiscall m_FUN_101fd410(int *param_2); template<class... A> int m_FUN_101fd410(A...); int * __thiscall m_FUN_101fd480(int *param_2); template<class... A> int m_FUN_101fd480(A...); int * __thiscall m_FUN_101fd5e0(int *param_2); template<class... A> int m_FUN_101fd5e0(A...); void __thiscall m_FUN_101fdae0(int *param_2); template<class... A> int m_FUN_101fdae0(A...); void __thiscall m_FUN_101fdfb0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_101fdfb0(A...); };

extern int LOCK(...);
extern int UNLOCK(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int __stdio_common_vsscanf(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
extern int thunk_FUN_1012cab0(...);
extern int thunk_FUN_101a3180(...);
extern int thunk_FUN_101ab4a0(...);
extern int thunk_FUN_101ab700(...);
extern int thunk_FUN_101abde0(...);
extern int thunk_FUN_101b9120(...);
extern int thunk_FUN_101bc5e0(...);
extern int thunk_FUN_101bcc60(...);
extern int thunk_FUN_101bd590(...);
extern int thunk_FUN_101bda70(...);
extern int thunk_FUN_101c3fc0(...);
extern int thunk_FUN_101c4810(...);
extern int thunk_FUN_101c5190(...);
extern int thunk_FUN_101c5c00(...);
extern int thunk_FUN_101c6810(...);
extern int thunk_FUN_101cdc00(...);
extern int thunk_FUN_101cdee0(...);
extern int thunk_FUN_101d65f0(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101dc6b0(...);
extern int thunk_FUN_101dd3a0(...);
extern int thunk_FUN_101e8480(...);
extern int thunk_FUN_101e8710(...);
extern int thunk_FUN_101e90e0(...);
extern int thunk_FUN_101e9180(...);
extern int thunk_FUN_101e9610(...);
extern int thunk_FUN_101eb1b0(...);
extern int thunk_FUN_101ec790(...);
extern int thunk_FUN_101ec7a0(...);
extern int thunk_FUN_101ec940(...);
extern int thunk_FUN_101ec9b0(...);
extern int thunk_FUN_101ee360(...);
extern int thunk_FUN_101f2f90(...);
extern int thunk_FUN_101fd7b0(...);
extern int thunk_FUN_101fdfe0(...);
extern int thunk_FUN_10292c70(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6a60(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_11242b10(...);
extern int thunk_FUN_11242d90(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_11d330dc;
extern int DAT_12126b84;
extern int DAT_121a0828;
extern int DAT_121a10c8;
extern int DAT_122f5674;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_SCActionDelegateProxy;
extern int ghidra_vftable_SCActionFilterer;
extern int ghidra_vftable_SCActionNoArgDescriptorImpl;
extern int ghidra_vftable_SCAllActionsFilter;
extern int ghidra_vftable_SCContextMenuActionsFilter;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCEventSource;
extern int ghidra_vftable_SCEventSubscription;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCFetchTokenActionDescriptor;
extern int ghidra_vftable_SCFetchTokenOpActionWrapper;
extern int ghidra_vftable_SCIAccountManager;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIActionDescriptor;
extern int ghidra_vftable_SCIActionFilterer;
extern int ghidra_vftable_SCIActionNoArgDescriptor;
extern int ghidra_vftable_SCIAppReporting;
extern int ghidra_vftable_SCIAppSessionManager;
extern int ghidra_vftable_SCIElapsedTimeMeasurement;
extern int ghidra_vftable_SCIEnumerable;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOp;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIProperty;
extern int ghidra_vftable_SCIPropertyBag;
extern int ghidra_vftable_SCISettingsMenu;
extern int ghidra_vftable_SCISettingsSection;
extern int ghidra_vftable_SCIStringArray;
extern int ghidra_vftable_SCIVersion;
extern int ghidra_vftable_SCNewWizManager_Listener;
extern int ghidra_vftable_SCOpCBProxy;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpRefBase;
extern int ghidra_vftable_SCRemoveMeSettingsMenu;
extern int ghidra_vftable_SCRequireTokenActionDescriptor;
extern int ghidra_vftable_SCSettingsMenu;
extern int ghidra_vftable_SCSettingsMenu_EventSink;
extern int ghidra_vftable_SCStringArray;
extern int ghidra_vftable_SCSystemEventSinkInternal;
extern int ghidra_vftable_SCSystemStatusManagerEventSinkInternal;
extern int ghidra_vftable_SCVersion;
extern int ghidra_vftable_ScopedRWLock;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_Ref_count_obj2;
extern int in_EAX;
extern int uStack_4;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_114fbcc5[];
extern undefined1 LAB_114fe7e0[];
extern int *stack0x00000004;
extern int *stack0xffffffe8;
extern int *stack0xfffffffc;
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101afff0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101afff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b0140(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101b0140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b0150(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101b0150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b0160(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101b0160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b0170(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101b0170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b0180(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101b0180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b10e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101b10e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b1100(undefined4 *param_1);
template<class... A> int FUN_101b1100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b1110(undefined4 *param_1);
template<class... A> int FUN_101b1110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b1120(undefined4 *param_1);
template<class... A> int FUN_101b1120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101b1130(int *param_1);
template<class... A> int FUN_101b1130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b1140(undefined4 *param_1);
template<class... A> int FUN_101b1140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101b1150(int *param_1);
template<class... A> int FUN_101b1150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b1160(undefined4 *param_1);
template<class... A> int FUN_101b1160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b1170(undefined4 *param_1);
template<class... A> int FUN_101b1170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b1180(undefined4 *param_1);
template<class... A> int FUN_101b1180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b1190(undefined4 *param_1);
template<class... A> int FUN_101b1190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b11a0(undefined4 *param_1);
template<class... A> int FUN_101b11a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101b11b0(int *param_1);
template<class... A> int FUN_101b11b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101b11c0(int *param_1);
template<class... A> int FUN_101b11c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101b11d0(int *param_1);
template<class... A> int FUN_101b11d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b11e0(undefined4 *param_1);
template<class... A> int FUN_101b11e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b11f0(undefined4 *param_1);
template<class... A> int FUN_101b11f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_101b1270(int *param_1);
template<class... A> int FUN_101b1270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b1ca0(undefined4 *param_1);
template<class... A> int FUN_101b1ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b1eb0(int param_1);
template<class... A> int FUN_101b1eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101b1ed0(int param_1);
template<class... A> int FUN_101b1ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101b2070(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101b2070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101b2080(undefined4 param_1);
template<class... A> int FUN_101b2080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b22c0(undefined4 param_1);
template<class... A> int FUN_101b22c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b22d0(undefined4 param_1);
template<class... A> int FUN_101b22d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b22e0(undefined4 param_1);
template<class... A> int FUN_101b22e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b22f0(undefined4 param_1);
template<class... A> int FUN_101b22f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b2300(undefined4 param_1);
template<class... A> int FUN_101b2300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b2310(undefined4 param_1);
template<class... A> int FUN_101b2310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b2320(undefined4 param_1);
template<class... A> int FUN_101b2320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b2330(undefined4 param_1);
template<class... A> int FUN_101b2330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101b2340(int param_1);
template<class... A> int FUN_101b2340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b2350(undefined4 param_1);
template<class... A> int FUN_101b2350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101b2360(int param_1);
template<class... A> int FUN_101b2360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b2370(undefined4 param_1);
template<class... A> int FUN_101b2370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b2380(undefined4 param_1);
template<class... A> int FUN_101b2380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b2390(undefined4 param_1);
template<class... A> int FUN_101b2390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b23a0(undefined4 param_1);
template<class... A> int FUN_101b23a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101b2430(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101b2430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101b2440(int param_1);
template<class... A> int FUN_101b2440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101b24f0(void);
template<class... A> int FUN_101b24f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101b2500(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101b2500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101b2510(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101b2510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b2560(int param_1);
template<class... A> int FUN_101b2560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b2570(undefined4 *param_1);
template<class... A> int FUN_101b2570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_101b2680(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101b2680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101b26b0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101b26b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101b26e0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_101b26e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101b27a0(undefined1 *param_1);
template<class... A> int FUN_101b27a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101b28c0(int param_1,int param_2,int param_3);
template<class... A> int FUN_101b28c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101b2af0(uint param_1);
template<class... A> int FUN_101b2af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101b2b60(uint param_1);
template<class... A> int FUN_101b2b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101b2be0(uint param_1);
template<class... A> int FUN_101b2be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b2d40(int param_1);
template<class... A> int FUN_101b2d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101b2e10(int *param_1);
template<class... A> int FUN_101b2e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b2e20(int param_1);
template<class... A> int FUN_101b2e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101b48a0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_101b48a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101b48f0(int param_1,int param_2);
template<class... A> int FUN_101b48f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101b4940(int param_1,int param_2);
template<class... A> int FUN_101b4940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101b4990(int param_1,int param_2);
template<class... A> int FUN_101b4990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b49e0(undefined4 *param_1);
template<class... A> int FUN_101b49e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b4dc0(int param_1);
template<class... A> int FUN_101b4dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b5040(int param_1);
template<class... A> int FUN_101b5040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b52d0(int param_1);
template<class... A> int FUN_101b52d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b5560(undefined4 *param_1);
template<class... A> int FUN_101b5560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b5800(void);
template<class... A> int FUN_101b5800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b5810(void);
template<class... A> int FUN_101b5810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b5820(void);
template<class... A> int FUN_101b5820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b5830(void);
template<class... A> int FUN_101b5830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b5840(void);
template<class... A> int FUN_101b5840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b5850(void);
template<class... A> int FUN_101b5850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b5860(void);
template<class... A> int FUN_101b5860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b5870(void);
template<class... A> int FUN_101b5870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b5880(void);
template<class... A> int FUN_101b5880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b5890(void);
template<class... A> int FUN_101b5890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101b5e80(int *param_1);
template<class... A> int FUN_101b5e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_101b5f30(int param_1);
template<class... A> int FUN_101b5f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101b5f40(void);
template<class... A> int FUN_101b5f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101b5f50(void);
template<class... A> int FUN_101b5f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101b5f60(void);
template<class... A> int FUN_101b5f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101b5f70(void);
template<class... A> int FUN_101b5f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101b5f80(void);
template<class... A> int FUN_101b5f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101b5f90(void);
template<class... A> int FUN_101b5f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b6640(int param_1);
template<class... A> int FUN_101b6640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b6840(undefined4 *param_1);
template<class... A> int FUN_101b6840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b6850(undefined4 *param_1);
template<class... A> int FUN_101b6850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b6860(undefined4 *param_1);
template<class... A> int FUN_101b6860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b6870(undefined4 *param_1);
template<class... A> int FUN_101b6870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b6880(undefined4 *param_1);
template<class... A> int FUN_101b6880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b6890(undefined4 *param_1);
template<class... A> int FUN_101b6890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b68a0(undefined4 *param_1);
template<class... A> int FUN_101b68a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b68b0(undefined4 *param_1);
template<class... A> int FUN_101b68b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b6f00(undefined4 *param_1);
template<class... A> int FUN_101b6f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b6f30(undefined4 *param_1);
template<class... A> int FUN_101b6f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b6f60(undefined4 *param_1);
template<class... A> int FUN_101b6f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b6f90(undefined4 *param_1);
template<class... A> int FUN_101b6f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b6fc0(undefined4 *param_1);
template<class... A> int FUN_101b6fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b6ff0(undefined4 *param_1);
template<class... A> int FUN_101b6ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7020(undefined4 *param_1);
template<class... A> int FUN_101b7020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7050(undefined4 *param_1);
template<class... A> int FUN_101b7050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7080(undefined4 *param_1);
template<class... A> int FUN_101b7080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b70b0(undefined4 *param_1);
template<class... A> int FUN_101b70b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b70e0(undefined4 *param_1);
template<class... A> int FUN_101b70e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7110(undefined4 *param_1);
template<class... A> int FUN_101b7110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7140(undefined4 *param_1);
template<class... A> int FUN_101b7140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7170(undefined4 *param_1);
template<class... A> int FUN_101b7170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b71a0(undefined4 *param_1);
template<class... A> int FUN_101b71a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b71d0(undefined4 *param_1);
template<class... A> int FUN_101b71d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7200(undefined4 *param_1);
template<class... A> int FUN_101b7200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7230(undefined4 *param_1);
template<class... A> int FUN_101b7230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7260(undefined4 *param_1);
template<class... A> int FUN_101b7260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7290(undefined4 *param_1);
template<class... A> int FUN_101b7290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b72c0(undefined4 *param_1);
template<class... A> int FUN_101b72c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b72f0(undefined4 *param_1);
template<class... A> int FUN_101b72f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7320(undefined4 *param_1);
template<class... A> int FUN_101b7320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7350(undefined4 *param_1);
template<class... A> int FUN_101b7350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7380(undefined4 *param_1);
template<class... A> int FUN_101b7380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b73b0(undefined4 *param_1);
template<class... A> int FUN_101b73b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b73e0(undefined4 *param_1);
template<class... A> int FUN_101b73e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7410(undefined4 *param_1);
template<class... A> int FUN_101b7410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7440(undefined4 *param_1);
template<class... A> int FUN_101b7440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7470(undefined4 *param_1);
template<class... A> int FUN_101b7470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b74a0(undefined4 *param_1);
template<class... A> int FUN_101b74a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b74d0(undefined4 *param_1);
template<class... A> int FUN_101b74d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b7500(int *param_1);
template<class... A> int FUN_101b7500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101b7d40(undefined4 param_1);
template<class... A> int FUN_101b7d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101b7f60(int *param_1);
template<class... A> int FUN_101b7f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b7f70(int param_1);
template<class... A> int FUN_101b7f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101b7f80(int *param_1);
template<class... A> int FUN_101b7f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b80a0(void);
template<class... A> int FUN_101b80a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b80b0(undefined4 *param_1);
template<class... A> int FUN_101b80b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b8140(undefined4 *param_1);
template<class... A> int FUN_101b8140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b8200(undefined4 *param_1);
template<class... A> int FUN_101b8200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b8280(undefined4 *param_1);
template<class... A> int FUN_101b8280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b83c0(undefined4 *param_1);
template<class... A> int FUN_101b83c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b83d0(undefined4 *param_1);
template<class... A> int FUN_101b83d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b83e0(undefined4 *param_1);
template<class... A> int FUN_101b83e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b8500(void);
template<class... A> int FUN_101b8500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b8cf0(void);
template<class... A> int FUN_101b8cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b8e50(undefined4 *param_1);
template<class... A> int FUN_101b8e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101b8e60(undefined4 *param_1);
template<class... A> int FUN_101b8e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101b9130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_101b9130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b9370(void);
template<class... A> int FUN_101b9370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101b9380(void);
template<class... A> int FUN_101b9380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b9490(undefined4 *param_1);
template<class... A> int FUN_101b9490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b94c0(undefined4 *param_1);
template<class... A> int FUN_101b94c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b9690(undefined4 *param_1);
template<class... A> int FUN_101b9690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b96e0(undefined4 *param_1);
template<class... A> int FUN_101b96e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b9720(undefined4 *param_1);
template<class... A> int FUN_101b9720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b9750(undefined4 *param_1);
template<class... A> int FUN_101b9750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b9800(undefined4 *param_1);
template<class... A> int FUN_101b9800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b9810(undefined4 *param_1);
template<class... A> int FUN_101b9810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b9870(undefined4 *param_1);
template<class... A> int FUN_101b9870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101b9880(undefined4 *param_1);
template<class... A> int FUN_101b9880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101b9b60(undefined4 *param_1);
template<class... A> int FUN_101b9b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ba0b0(void);
template<class... A> int FUN_101ba0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101ba240(undefined4 *param_1);
template<class... A> int FUN_101ba240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101ba250(undefined4 *param_1);
template<class... A> int FUN_101ba250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101ba2e0(undefined4 *param_1);
template<class... A> int FUN_101ba2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ba5c0(int param_1);
template<class... A> int FUN_101ba5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ba5d0(undefined4 *param_1);
template<class... A> int FUN_101ba5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101ba5e0(int *param_1);
template<class... A> int FUN_101ba5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101ba5f0(int *param_1);
template<class... A> int FUN_101ba5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101ba600(int *param_1);
template<class... A> int FUN_101ba600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101ba610(int *param_1);
template<class... A> int FUN_101ba610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ba620(undefined4 *param_1);
template<class... A> int FUN_101ba620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ba630(int param_1);
template<class... A> int FUN_101ba630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ba640(undefined4 *param_1);
template<class... A> int FUN_101ba640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101ba650(int *param_1);
template<class... A> int FUN_101ba650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_101ba660(undefined4 *param_1);
template<class... A> int FUN_101ba660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ba670(undefined4 *param_1);
template<class... A> int FUN_101ba670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ba680(undefined4 *param_1);
template<class... A> int FUN_101ba680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ba690(undefined4 *param_1);
template<class... A> int FUN_101ba690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ba6a0(undefined4 *param_1);
template<class... A> int FUN_101ba6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ba6b0(undefined4 *param_1);
template<class... A> int FUN_101ba6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ba6c0(undefined4 *param_1);
template<class... A> int FUN_101ba6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101babf0(int param_1);
template<class... A> int FUN_101babf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_101baca0(char *param_1);
template<class... A> int FUN_101baca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101baff0(undefined4 *param_1);
template<class... A> int FUN_101baff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101bb000(undefined4 *param_1);
template<class... A> int FUN_101bb000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_101bb390(int param_1);
template<class... A> int FUN_101bb390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101bb4c0(int param_1);
template<class... A> int FUN_101bb4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_101bb8b0(int param_1);
template<class... A> int FUN_101bb8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101bba60(void);
template<class... A> int FUN_101bba60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101bbad0(void);
template<class... A> int FUN_101bbad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101bbae0(void);
template<class... A> int FUN_101bbae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101bbaf0(int *param_1);
template<class... A> int FUN_101bbaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101bbb00(int *param_1);
template<class... A> int FUN_101bbb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101bbb20(int param_1);
template<class... A> int FUN_101bbb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101bbb30(int param_1);
template<class... A> int FUN_101bbb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101bbc10(int param_1);
template<class... A> int FUN_101bbc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101bbed0(undefined4 *param_1);
template<class... A> int FUN_101bbed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101bbee0(undefined4 *param_1);
template<class... A> int FUN_101bbee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101bc1b0(undefined4 *param_1);
template<class... A> int FUN_101bc1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101bc1e0(undefined4 *param_1);
template<class... A> int FUN_101bc1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101bc210(undefined4 *param_1);
template<class... A> int FUN_101bc210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101bc240(undefined4 *param_1);
template<class... A> int FUN_101bc240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101bc270(undefined4 *param_1);
template<class... A> int FUN_101bc270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101bc2a0(undefined4 *param_1);
template<class... A> int FUN_101bc2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101bc300(int *param_1);
template<class... A> int FUN_101bc300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101bc410(int param_1);
template<class... A> int FUN_101bc410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101bc5b0(void);
template<class... A> int FUN_101bc5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101bc780(undefined4 *param_1);
template<class... A> int FUN_101bc780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101bc790(int param_1,int param_2,int param_3,undefined4 param_4);
template<class... A> int FUN_101bc790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_101bcde0(SCStr *param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_101bcde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101bce30(int param_1);
template<class... A> int FUN_101bce30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101bd580(undefined4 param_1);
template<class... A> int FUN_101bd580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101bd770(SCStr *param_1,int param_2,SCStr *param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_101bd770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101bd880(int param_1);
template<class... A> int FUN_101bd880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101bdc30(undefined4 param_1);
template<class... A> int FUN_101bdc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101bddc0(undefined4 param_1);
template<class... A> int FUN_101bddc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101bddd0(void);
template<class... A> int FUN_101bddd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101bde90(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_101bde90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101bdf70(undefined4 *param_1);
template<class... A> int FUN_101bdf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101bdfe0(undefined4 *param_1);
template<class... A> int FUN_101bdfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101bdff0(undefined4 *param_1);
template<class... A> int FUN_101bdff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101be040(undefined4 *param_1);
template<class... A> int FUN_101be040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101be1a0(undefined4 *param_1);
template<class... A> int FUN_101be1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101be230(undefined4 *param_1);
template<class... A> int FUN_101be230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101be240(undefined4 *param_1);
template<class... A> int FUN_101be240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101be380(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101be380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101be390(undefined4 *param_1);
template<class... A> int FUN_101be390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101be3a0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101be3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101be880(undefined4 *param_1);
template<class... A> int FUN_101be880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101be890(int *param_1);
template<class... A> int FUN_101be890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101bee00(void);
template<class... A> int FUN_101bee00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101bef30(undefined4 *param_1);
template<class... A> int FUN_101bef30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101bf0a0(undefined4 *param_1);
template<class... A> int FUN_101bf0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101bf1a0(int *param_1);
template<class... A> int FUN_101bf1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101bf460(int *param_1);
template<class... A> int FUN_101bf460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101bf470(undefined4 *param_1);
template<class... A> int FUN_101bf470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c33a0(int *param_1);
template<class... A> int FUN_101c33a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c3630(undefined4 *param_1);
template<class... A> int FUN_101c3630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c3640(int param_1);
template<class... A> int FUN_101c3640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101c3650(int param_1);
template<class... A> int FUN_101c3650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c3660(undefined4 *param_1);
template<class... A> int FUN_101c3660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c3700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101c3700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c3800(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_101c3800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c3820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_101c3820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c3840(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101c3840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c3890(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101c3890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c38a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101c38a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c38b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101c38b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c40d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101c40d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c4290(void);
template<class... A> int FUN_101c4290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c42a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101c42a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c42b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101c42b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c42c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101c42c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c42d0(void);
template<class... A> int FUN_101c42d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c42e0(void);
template<class... A> int FUN_101c42e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c4900(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101c4900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101c49e0(uint param_1);
template<class... A> int FUN_101c49e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101c4a00(uint param_1);
template<class... A> int FUN_101c4a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4a20(undefined4 *param_1);
template<class... A> int FUN_101c4a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4a30(undefined4 *param_1);
template<class... A> int FUN_101c4a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_101c4a40(int param_1,uint param_2);
template<class... A> int FUN_101c4a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4a80(undefined4 param_1);
template<class... A> int FUN_101c4a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4d10(undefined4 *param_1);
template<class... A> int FUN_101c4d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4d20(undefined4 param_1);
template<class... A> int FUN_101c4d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4e70(undefined4 param_1);
template<class... A> int FUN_101c4e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4e80(undefined4 param_1);
template<class... A> int FUN_101c4e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4e90(undefined4 param_1);
template<class... A> int FUN_101c4e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4ea0(undefined4 param_1);
template<class... A> int FUN_101c4ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4eb0(undefined4 param_1);
template<class... A> int FUN_101c4eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4ec0(undefined4 param_1);
template<class... A> int FUN_101c4ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c4ed0(undefined4 param_1);
template<class... A> int FUN_101c4ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c4f50(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_101c4f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c4fa0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101c4fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c4fd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101c4fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c5170(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101c5170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c5260(undefined4 param_1);
template<class... A> int FUN_101c5260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c5270(undefined4 param_1);
template<class... A> int FUN_101c5270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c5280(undefined4 param_1);
template<class... A> int FUN_101c5280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c5290(undefined4 param_1);
template<class... A> int FUN_101c5290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c52a0(undefined4 param_1);
template<class... A> int FUN_101c52a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c52b0(undefined4 param_1);
template<class... A> int FUN_101c52b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c52c0(undefined4 param_1);
template<class... A> int FUN_101c52c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c52d0(undefined4 param_1);
template<class... A> int FUN_101c52d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c52e0(undefined4 param_1);
template<class... A> int FUN_101c52e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c52f0(undefined4 param_1);
template<class... A> int FUN_101c52f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c5300(undefined4 param_1);
template<class... A> int FUN_101c5300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c5310(undefined4 param_1);
template<class... A> int FUN_101c5310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c5320(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101c5320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101c5330(void);
template<class... A> int FUN_101c5330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101c5340(void);
template<class... A> int FUN_101c5340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101c5350(void);
template<class... A> int FUN_101c5350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101c5360(void);
template<class... A> int FUN_101c5360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c5370(undefined4 param_1);
template<class... A> int FUN_101c5370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c5380(undefined4 param_1);
template<class... A> int FUN_101c5380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c5390(undefined4 param_1);
template<class... A> int FUN_101c5390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c53a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101c53a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c54a0(undefined4 *param_1);
template<class... A> int FUN_101c54a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c54d0(undefined4 *param_1);
template<class... A> int FUN_101c54d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5500(undefined4 *param_1);
template<class... A> int FUN_101c5500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5530(undefined4 *param_1);
template<class... A> int FUN_101c5530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5580(undefined4 *param_1);
template<class... A> int FUN_101c5580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c55a0(undefined4 *param_1);
template<class... A> int FUN_101c55a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5600(undefined4 *param_1);
template<class... A> int FUN_101c5600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5620(undefined4 *param_1);
template<class... A> int FUN_101c5620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c57d0(undefined4 *param_1);
template<class... A> int FUN_101c57d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c57f0(undefined4 *param_1);
template<class... A> int FUN_101c57f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5850(undefined4 *param_1);
template<class... A> int FUN_101c5850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5870(undefined4 *param_1);
template<class... A> int FUN_101c5870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c5890(undefined4 param_1);
template<class... A> int FUN_101c5890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c58a0(undefined4 param_1);
template<class... A> int FUN_101c58a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c58f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101c58f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c59d0(undefined4 *param_1);
template<class... A> int FUN_101c59d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5ad0(undefined4 *param_1);
template<class... A> int FUN_101c5ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5b00(undefined4 *param_1);
template<class... A> int FUN_101c5b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5be0(undefined4 *param_1);
template<class... A> int FUN_101c5be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5e50(undefined4 *param_1);
template<class... A> int FUN_101c5e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c5e60(undefined4 *param_1);
template<class... A> int FUN_101c5e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c6390(undefined4 *param_1);
template<class... A> int FUN_101c6390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c69d0(void);
template<class... A> int FUN_101c69d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c6ad0(int param_1);
template<class... A> int FUN_101c6ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c6bf0(undefined4 *param_1);
template<class... A> int FUN_101c6bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c6c10(undefined4 *param_1);
template<class... A> int FUN_101c6c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c6f90(undefined4 *param_1);
template<class... A> int FUN_101c6f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c7480(undefined4 *param_1);
template<class... A> int FUN_101c7480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c7490(undefined4 *param_1);
template<class... A> int FUN_101c7490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c74a0(undefined4 *param_1);
template<class... A> int FUN_101c74a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c74b0(undefined4 *param_1);
template<class... A> int FUN_101c74b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101c74c0(int *param_1);
template<class... A> int FUN_101c74c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c74d0(undefined4 *param_1);
template<class... A> int FUN_101c74d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101c74e0(int *param_1);
template<class... A> int FUN_101c74e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c74f0(undefined4 *param_1);
template<class... A> int FUN_101c74f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101c7500(int *param_1);
template<class... A> int FUN_101c7500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101c7510(int *param_1);
template<class... A> int FUN_101c7510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c7520(undefined4 *param_1);
template<class... A> int FUN_101c7520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c7530(undefined4 *param_1);
template<class... A> int FUN_101c7530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c7540(undefined4 *param_1);
template<class... A> int FUN_101c7540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c7550(undefined4 *param_1);
template<class... A> int FUN_101c7550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c7560(undefined4 *param_1);
template<class... A> int FUN_101c7560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101c7570(int *param_1);
template<class... A> int FUN_101c7570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101c7580(int *param_1);
template<class... A> int FUN_101c7580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101c7590(int *param_1);
template<class... A> int FUN_101c7590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101c75a0(int *param_1);
template<class... A> int FUN_101c75a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101c75b0(int *param_1);
template<class... A> int FUN_101c75b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c75c0(undefined4 *param_1);
template<class... A> int FUN_101c75c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101c75d0(undefined4 *param_1);
template<class... A> int FUN_101c75d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_101c75e0(int *param_1);
template<class... A> int FUN_101c75e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c7700(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101c7700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_101c7770(undefined4 *param_1);
template<class... A> int FUN_101c7770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101c8290(byte *param_1,byte *param_2);
template<class... A> int FUN_101c8290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c83d0(undefined4 *param_1);
template<class... A> int FUN_101c83d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c8600(int param_1);
template<class... A> int FUN_101c8600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101c8620(float *param_1);
template<class... A> int FUN_101c8620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_101c8750(uint param_1,int param_2,uint param_3);
template<class... A> int FUN_101c8750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8a30(undefined4 param_1);
template<class... A> int FUN_101c8a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8a40(undefined4 param_1);
template<class... A> int FUN_101c8a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8a50(undefined4 param_1);
template<class... A> int FUN_101c8a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8a60(undefined4 param_1);
template<class... A> int FUN_101c8a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8a70(undefined4 param_1);
template<class... A> int FUN_101c8a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8a80(undefined4 param_1);
template<class... A> int FUN_101c8a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8a90(undefined4 param_1);
template<class... A> int FUN_101c8a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8aa0(undefined4 param_1);
template<class... A> int FUN_101c8aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8ab0(undefined4 param_1);
template<class... A> int FUN_101c8ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8ac0(undefined4 param_1);
template<class... A> int FUN_101c8ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8ad0(undefined4 param_1);
template<class... A> int FUN_101c8ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8ae0(undefined4 param_1);
template<class... A> int FUN_101c8ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8af0(undefined4 param_1);
template<class... A> int FUN_101c8af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8b00(undefined4 param_1);
template<class... A> int FUN_101c8b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101c8b90(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101c8b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8ba0(undefined4 param_1);
template<class... A> int FUN_101c8ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8bb0(undefined4 param_1);
template<class... A> int FUN_101c8bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c8c30(void);
template<class... A> int FUN_101c8c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101c8c40(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101c8c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c8d00(int param_1);
template<class... A> int FUN_101c8d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c8d10(undefined4 *param_1);
template<class... A> int FUN_101c8d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c8d20(undefined4 *param_1);
template<class... A> int FUN_101c8d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101c9070(int param_1,int param_2,int param_3);
template<class... A> int FUN_101c9070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101c9960(uint param_1);
template<class... A> int FUN_101c9960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101c99e0(uint param_1);
template<class... A> int FUN_101c99e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101c9a50(uint param_1);
template<class... A> int FUN_101c9a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101c9ae0(int param_1);
template<class... A> int FUN_101c9ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101c9b20(int *param_1);
template<class... A> int FUN_101c9b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101c9b30(int param_1);
template<class... A> int FUN_101c9b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ca7c0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_101ca7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101ca810(int param_1,int param_2);
template<class... A> int FUN_101ca810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101ca8b0(int param_1,int param_2);
template<class... A> int FUN_101ca8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ca900(undefined4 *param_1);
template<class... A> int FUN_101ca900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ca920(undefined4 *param_1);
template<class... A> int FUN_101ca920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ca940(undefined4 *param_1);
template<class... A> int FUN_101ca940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101cb030(void);
template<class... A> int FUN_101cb030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101cb040(void);
template<class... A> int FUN_101cb040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101cb050(void);
template<class... A> int FUN_101cb050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101cb060(void);
template<class... A> int FUN_101cb060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_101cb070(float *param_1);
template<class... A> int FUN_101cb070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cb080(void);
template<class... A> int FUN_101cb080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cb090(void);
template<class... A> int FUN_101cb090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cb0a0(void);
template<class... A> int FUN_101cb0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cb0b0(void);
template<class... A> int FUN_101cb0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cb0c0(void);
template<class... A> int FUN_101cb0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cb0d0(void);
template<class... A> int FUN_101cb0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cb0e0(undefined4 param_1);
template<class... A> int FUN_101cb0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101cb0f0(undefined4 *param_1);
template<class... A> int FUN_101cb0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101cb100(undefined4 *param_1);
template<class... A> int FUN_101cb100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101cb110(undefined4 *param_1);
template<class... A> int FUN_101cb110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101cb120(undefined4 *param_1);
template<class... A> int FUN_101cb120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101cb130(undefined4 *param_1);
template<class... A> int FUN_101cb130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101cb140(undefined4 *param_1);
template<class... A> int FUN_101cb140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101cb150(undefined4 *param_1);
template<class... A> int FUN_101cb150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101cb590(undefined4 *param_1);
template<class... A> int FUN_101cb590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101cb5c0(undefined4 *param_1);
template<class... A> int FUN_101cb5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101cb5f0(undefined4 *param_1);
template<class... A> int FUN_101cb5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101cb620(undefined4 *param_1);
template<class... A> int FUN_101cb620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101cb650(undefined4 *param_1);
template<class... A> int FUN_101cb650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101cb680(undefined4 *param_1);
template<class... A> int FUN_101cb680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101cb6b0(undefined4 *param_1);
template<class... A> int FUN_101cb6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101cb6e0(undefined4 *param_1);
template<class... A> int FUN_101cb6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101cb710(int *param_1);
template<class... A> int FUN_101cb710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101cb730(int *param_1);
template<class... A> int FUN_101cb730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101cb740(int *param_1);
template<class... A> int FUN_101cb740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cc260(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101cc260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cc280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101cc280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cc2a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101cc2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cc380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_101cc380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cc3a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_101cc3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_101cd840(int param_1);
template<class... A> int FUN_101cd840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101cd850(undefined4 *param_1);
template<class... A> int FUN_101cd850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cd860(void);
template<class... A> int FUN_101cd860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cd870(void);
template<class... A> int FUN_101cd870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cd880(void);
template<class... A> int FUN_101cd880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cd8a0(void);
template<class... A> int FUN_101cd8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cda40(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_101cda40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cdae0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101cdae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cdaf0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101cdaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cdb00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101cdb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cdb10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101cdb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cdb20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101cdb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_101cdb30(undefined4 *param_1);
template<class... A> int FUN_101cdb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cdb70(void *param_1,uint param_2);
template<class... A> int FUN_101cdb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cdbc0(void);
template<class... A> int FUN_101cdbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cdbd0(void);
template<class... A> int FUN_101cdbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cdbe0(void);
template<class... A> int FUN_101cdbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cdbf0(undefined4 *param_1);
template<class... A> int FUN_101cdbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ce050(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101ce050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ce070(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101ce070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ce090(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101ce090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ce1d0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101ce1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101ce1f0(uint param_1);
template<class... A> int FUN_101ce1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101ce210(uint param_1);
template<class... A> int FUN_101ce210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101ce240(uint param_1);
template<class... A> int FUN_101ce240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ce260(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101ce260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce270(undefined4 param_1);
template<class... A> int FUN_101ce270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ce280(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101ce280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce3b0(undefined4 param_1);
template<class... A> int FUN_101ce3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_101ce3c0(int param_1,uint *param_2);
template<class... A> int FUN_101ce3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ce630(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101ce630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_101ce680(int param_1);
template<class... A> int FUN_101ce680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce7f0(undefined4 *param_1);
template<class... A> int FUN_101ce7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce800(undefined4 param_1);
template<class... A> int FUN_101ce800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce810(undefined4 param_1);
template<class... A> int FUN_101ce810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce820(undefined4 param_1);
template<class... A> int FUN_101ce820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce830(undefined4 param_1);
template<class... A> int FUN_101ce830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce890(undefined4 param_1);
template<class... A> int FUN_101ce890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce8a0(undefined4 param_1);
template<class... A> int FUN_101ce8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce8b0(undefined4 param_1);
template<class... A> int FUN_101ce8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce8c0(undefined4 param_1);
template<class... A> int FUN_101ce8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce8d0(undefined4 param_1);
template<class... A> int FUN_101ce8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce8e0(undefined4 param_1);
template<class... A> int FUN_101ce8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce8f0(undefined4 param_1);
template<class... A> int FUN_101ce8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce900(undefined4 param_1);
template<class... A> int FUN_101ce900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce910(undefined4 param_1);
template<class... A> int FUN_101ce910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce920(undefined4 param_1);
template<class... A> int FUN_101ce920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce930(undefined4 param_1);
template<class... A> int FUN_101ce930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce940(undefined4 param_1);
template<class... A> int FUN_101ce940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce950(undefined4 param_1);
template<class... A> int FUN_101ce950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ce960(undefined4 param_1);
template<class... A> int FUN_101ce960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cea80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_101cea80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ceaa0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101ceaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cead0(void);
template<class... A> int FUN_101cead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ceb70(void);
template<class... A> int FUN_101ceb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101cebf0(int *param_1,int *param_2);
template<class... A> int FUN_101cebf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cec60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101cec60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cec80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101cec80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ceca0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101ceca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cecc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101cecc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cece0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101cece0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cee20(undefined4 param_1);
template<class... A> int FUN_101cee20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cee30(undefined4 param_1);
template<class... A> int FUN_101cee30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cee40(undefined4 param_1);
template<class... A> int FUN_101cee40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cee50(undefined4 param_1);
template<class... A> int FUN_101cee50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cee60(undefined4 param_1);
template<class... A> int FUN_101cee60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cee70(undefined4 param_1);
template<class... A> int FUN_101cee70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cee80(undefined4 param_1);
template<class... A> int FUN_101cee80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cee90(undefined4 param_1);
template<class... A> int FUN_101cee90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ceea0(undefined4 param_1);
template<class... A> int FUN_101ceea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ceed0(undefined4 param_1);
template<class... A> int FUN_101ceed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ceee0(undefined4 param_1);
template<class... A> int FUN_101ceee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ceef0(undefined4 param_1);
template<class... A> int FUN_101ceef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cef00(undefined4 param_1);
template<class... A> int FUN_101cef00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cef10(undefined4 param_1);
template<class... A> int FUN_101cef10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cef20(undefined4 param_1);
template<class... A> int FUN_101cef20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cef30(undefined4 param_1);
template<class... A> int FUN_101cef30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cef40(undefined4 param_1);
template<class... A> int FUN_101cef40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cef50(undefined4 param_1);
template<class... A> int FUN_101cef50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cef80(undefined4 param_1);
template<class... A> int FUN_101cef80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cef90(undefined4 param_1);
template<class... A> int FUN_101cef90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cefa0(undefined4 param_1);
template<class... A> int FUN_101cefa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cefb0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101cefb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101cefc0(void);
template<class... A> int FUN_101cefc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101cefd0(void);
template<class... A> int FUN_101cefd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101cefe0(void);
template<class... A> int FUN_101cefe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101ceff0(void);
template<class... A> int FUN_101ceff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101cf000(void);
template<class... A> int FUN_101cf000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101cf010(void);
template<class... A> int FUN_101cf010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cf1a0(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_101cf1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cf290(undefined4 param_1);
template<class... A> int FUN_101cf290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cf2c0(undefined4 param_1);
template<class... A> int FUN_101cf2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cf2d0(undefined4 param_1);
template<class... A> int FUN_101cf2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101cf2e0(undefined4 param_1);
template<class... A> int FUN_101cf2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101cf4a0(undefined1 *param_1,undefined1 *param_2);
template<class... A> int FUN_101cf4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cf7c0(undefined4 *param_1);
template<class... A> int FUN_101cf7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cf7f0(undefined4 *param_1);
template<class... A> int FUN_101cf7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cf820(undefined4 *param_1);
template<class... A> int FUN_101cf820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cf850(undefined4 *param_1);
template<class... A> int FUN_101cf850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cfa80(undefined4 *param_1);
template<class... A> int FUN_101cfa80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cfb20(undefined4 *param_1);
template<class... A> int FUN_101cfb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cfb40(undefined4 *param_1);
template<class... A> int FUN_101cfb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cfb60(undefined4 *param_1);
template<class... A> int FUN_101cfb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cfcb0(undefined4 *param_1);
template<class... A> int FUN_101cfcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cfcd0(undefined4 *param_1);
template<class... A> int FUN_101cfcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cfd70(undefined4 *param_1);
template<class... A> int FUN_101cfd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cfe70(undefined4 *param_1);
template<class... A> int FUN_101cfe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101cff10(undefined4 param_1);
template<class... A> int FUN_101cff10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101cff20(undefined4 param_1);
template<class... A> int FUN_101cff20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101cff30(undefined4 param_1);
template<class... A> int FUN_101cff30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101cff40(int param_1);
template<class... A> int FUN_101cff40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101cff50(int param_1);
template<class... A> int FUN_101cff50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101cff60(int param_1);
template<class... A> int FUN_101cff60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101cff70(int param_1);
template<class... A> int FUN_101cff70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101cff80(int param_1);
template<class... A> int FUN_101cff80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101cff90(int param_1);
template<class... A> int FUN_101cff90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101cffa0(int param_1);
template<class... A> int FUN_101cffa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101cffe0(undefined4 *param_1);
template<class... A> int FUN_101cffe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0000(undefined4 *param_1);
template<class... A> int FUN_101d0000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0170(undefined4 *param_1);
template<class... A> int FUN_101d0170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0190(undefined4 *param_1);
template<class... A> int FUN_101d0190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d01b0(undefined4 param_1);
template<class... A> int FUN_101d01b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d01c0(undefined4 param_1);
template<class... A> int FUN_101d01c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d01d0(undefined4 param_1);
template<class... A> int FUN_101d01d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d01e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d01e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d02f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d02f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d03f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d03f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d04b0(undefined4 *param_1);
template<class... A> int FUN_101d04b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0500(undefined4 *param_1);
template<class... A> int FUN_101d0500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d05d0(undefined4 *param_1);
template<class... A> int FUN_101d05d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0ec0(undefined4 *param_1);
template<class... A> int FUN_101d0ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0ef0(undefined4 *param_1);
template<class... A> int FUN_101d0ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0f70(undefined4 *param_1);
template<class... A> int FUN_101d0f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0f80(undefined4 *param_1);
template<class... A> int FUN_101d0f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0fb0(undefined4 *param_1);
template<class... A> int FUN_101d0fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0fc0(undefined4 *param_1);
template<class... A> int FUN_101d0fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0fd0(undefined4 *param_1);
template<class... A> int FUN_101d0fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0fe0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d0fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d0ff0(undefined4 *param_1);
template<class... A> int FUN_101d0ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d1000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d1000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d1010(undefined4 *param_1);
template<class... A> int FUN_101d1010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d1060(undefined4 *param_1);
template<class... A> int FUN_101d1060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d1690(int param_1);
template<class... A> int FUN_101d1690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d18e0(undefined4 *param_1);
template<class... A> int FUN_101d18e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d1900(undefined4 *param_1);
template<class... A> int FUN_101d1900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d2ac0(int param_1);
template<class... A> int FUN_101d2ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d2b90(undefined4 *param_1);
template<class... A> int FUN_101d2b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d2c20(int param_1);
template<class... A> int FUN_101d2c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d2f20(undefined4 *param_1);
template<class... A> int FUN_101d2f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d33d0(undefined4 *param_1);
template<class... A> int FUN_101d33d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d34c0(undefined4 *param_1);
template<class... A> int FUN_101d34c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d3550(undefined4 *param_1);
template<class... A> int FUN_101d3550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d3560(undefined4 *param_1);
template<class... A> int FUN_101d3560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d3570(undefined4 *param_1);
template<class... A> int FUN_101d3570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d3610(undefined4 *param_1);
template<class... A> int FUN_101d3610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d3990(undefined4 *param_1);
template<class... A> int FUN_101d3990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d3a50(int *param_1);
template<class... A> int FUN_101d3a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101d3b20(void);
template<class... A> int FUN_101d3b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d40b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d40b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d40c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d40c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d43c0(undefined4 *param_1);
template<class... A> int FUN_101d43c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d43d0(undefined4 *param_1);
template<class... A> int FUN_101d43d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d43e0(int *param_1);
template<class... A> int FUN_101d43e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d43f0(int *param_1);
template<class... A> int FUN_101d43f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4400(undefined4 *param_1);
template<class... A> int FUN_101d4400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4410(undefined4 *param_1);
template<class... A> int FUN_101d4410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4420(undefined4 *param_1);
template<class... A> int FUN_101d4420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4430(undefined4 *param_1);
template<class... A> int FUN_101d4430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4440(undefined4 *param_1);
template<class... A> int FUN_101d4440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d4450(int *param_1);
template<class... A> int FUN_101d4450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4460(undefined4 *param_1);
template<class... A> int FUN_101d4460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d4470(int *param_1);
template<class... A> int FUN_101d4470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4480(undefined4 *param_1);
template<class... A> int FUN_101d4480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d4490(int *param_1);
template<class... A> int FUN_101d4490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d44a0(undefined4 *param_1);
template<class... A> int FUN_101d44a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d44b0(int *param_1);
template<class... A> int FUN_101d44b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d44c0(int *param_1);
template<class... A> int FUN_101d44c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d44d0(int *param_1);
template<class... A> int FUN_101d44d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d44e0(undefined4 *param_1);
template<class... A> int FUN_101d44e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d44f0(undefined4 *param_1);
template<class... A> int FUN_101d44f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4500(undefined4 *param_1);
template<class... A> int FUN_101d4500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d4510(int *param_1);
template<class... A> int FUN_101d4510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4520(undefined4 *param_1);
template<class... A> int FUN_101d4520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d4530(int *param_1);
template<class... A> int FUN_101d4530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d4540(int *param_1);
template<class... A> int FUN_101d4540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d4550(int *param_1);
template<class... A> int FUN_101d4550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d4560(int param_1);
template<class... A> int FUN_101d4560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d4570(int param_1);
template<class... A> int FUN_101d4570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d4580(int param_1);
template<class... A> int FUN_101d4580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d4590(int param_1);
template<class... A> int FUN_101d4590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d45a0(int param_1);
template<class... A> int FUN_101d45a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d45b0(int *param_1);
template<class... A> int FUN_101d45b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d45c0(int param_1);
template<class... A> int FUN_101d45c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d45d0(int param_1);
template<class... A> int FUN_101d45d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d45e0(undefined4 *param_1);
template<class... A> int FUN_101d45e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d45f0(undefined4 *param_1);
template<class... A> int FUN_101d45f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4600(undefined4 *param_1);
template<class... A> int FUN_101d4600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4610(undefined4 *param_1);
template<class... A> int FUN_101d4610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4620(undefined4 *param_1);
template<class... A> int FUN_101d4620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4630(undefined4 *param_1);
template<class... A> int FUN_101d4630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4640(undefined4 *param_1);
template<class... A> int FUN_101d4640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4650(undefined4 *param_1);
template<class... A> int FUN_101d4650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4660(undefined4 *param_1);
template<class... A> int FUN_101d4660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4670(undefined4 *param_1);
template<class... A> int FUN_101d4670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4680(undefined4 *param_1);
template<class... A> int FUN_101d4680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4690(undefined4 *param_1);
template<class... A> int FUN_101d4690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d46a0(undefined4 *param_1);
template<class... A> int FUN_101d46a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d46b0(undefined4 *param_1);
template<class... A> int FUN_101d46b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d46c0(undefined4 *param_1);
template<class... A> int FUN_101d46c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d46d0(undefined4 *param_1);
template<class... A> int FUN_101d46d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d46e0(undefined4 *param_1);
template<class... A> int FUN_101d46e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d46f0(undefined4 *param_1);
template<class... A> int FUN_101d46f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4700(undefined4 *param_1);
template<class... A> int FUN_101d4700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d4710(undefined4 *param_1);
template<class... A> int FUN_101d4710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d4720(int *param_1);
template<class... A> int FUN_101d4720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d4730(int *param_1);
template<class... A> int FUN_101d4730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d4740(int *param_1);
template<class... A> int FUN_101d4740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d4750(int *param_1);
template<class... A> int FUN_101d4750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d4760(int *param_1);
template<class... A> int FUN_101d4760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d4770(int *param_1);
template<class... A> int FUN_101d4770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d4780(undefined4 *param_1);
template<class... A> int FUN_101d4780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101d4790(undefined4 *param_1);
template<class... A> int FUN_101d4790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101d4980(void *param_1,void *param_2,size_t param_3,undefined1 param_4);
template<class... A> int FUN_101d4980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d4cc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d4cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d4d10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101d4d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_101d4e00(uint *param_1,uint *param_2);
template<class... A> int FUN_101d4e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d5f80(undefined4 *param_1);
template<class... A> int FUN_101d5f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d5fb0(undefined4 *param_1);
template<class... A> int FUN_101d5fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d5fe0(undefined4 *param_1);
template<class... A> int FUN_101d5fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d6040(int param_1);
template<class... A> int FUN_101d6040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d6140(int param_1);
template<class... A> int FUN_101d6140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d6180(int *param_1);
template<class... A> int FUN_101d6180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d61c0(int param_1);
template<class... A> int FUN_101d61c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d61e0(int *param_1);
template<class... A> int FUN_101d61e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d6480(int param_1);
template<class... A> int FUN_101d6480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d6490(int param_1);
template<class... A> int FUN_101d6490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d64a0(int param_1);
template<class... A> int FUN_101d64a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d64b0(int param_1);
template<class... A> int FUN_101d64b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d64c0(int param_1);
template<class... A> int FUN_101d64c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d64d0(int param_1);
template<class... A> int FUN_101d64d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d64e0(int param_1);
template<class... A> int FUN_101d64e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_101d65b0(undefined4 param_1);
template<class... A> int FUN_101d65b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6990(undefined4 param_1);
template<class... A> int FUN_101d6990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d69a0(undefined4 param_1);
template<class... A> int FUN_101d69a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d69b0(undefined4 param_1);
template<class... A> int FUN_101d69b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d69c0(undefined4 param_1);
template<class... A> int FUN_101d69c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d69d0(undefined4 param_1);
template<class... A> int FUN_101d69d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d69e0(undefined4 param_1);
template<class... A> int FUN_101d69e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d69f0(undefined4 param_1);
template<class... A> int FUN_101d69f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6a00(undefined4 param_1);
template<class... A> int FUN_101d6a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6a10(undefined4 param_1);
template<class... A> int FUN_101d6a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6a20(undefined4 param_1);
template<class... A> int FUN_101d6a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6a30(undefined4 param_1);
template<class... A> int FUN_101d6a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6a40(undefined4 param_1);
template<class... A> int FUN_101d6a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6a50(undefined4 param_1);
template<class... A> int FUN_101d6a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6a60(undefined4 param_1);
template<class... A> int FUN_101d6a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6a70(undefined4 param_1);
template<class... A> int FUN_101d6a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6a80(undefined4 param_1);
template<class... A> int FUN_101d6a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101d6a90(void);
template<class... A> int FUN_101d6a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6aa0(int param_1);
template<class... A> int FUN_101d6aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6ab0(int param_1);
template<class... A> int FUN_101d6ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6ac0(int param_1);
template<class... A> int FUN_101d6ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6ad0(int param_1);
template<class... A> int FUN_101d6ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6ae0(int param_1);
template<class... A> int FUN_101d6ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6af0(int param_1);
template<class... A> int FUN_101d6af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d6b00(int param_1);
template<class... A> int FUN_101d6b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d6b10(int param_1);
template<class... A> int FUN_101d6b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d6b20(int param_1);
template<class... A> int FUN_101d6b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_101d6b30(int param_1);
template<class... A> int FUN_101d6b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d6b70(int param_1);
template<class... A> int FUN_101d6b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d6e10(int param_1);
template<class... A> int FUN_101d6e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d6e20(int param_1);
template<class... A> int FUN_101d6e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d6e30(int param_1);
template<class... A> int FUN_101d6e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d6e40(int param_1);
template<class... A> int FUN_101d6e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d6e50(int param_1);
template<class... A> int FUN_101d6e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d6e60(int param_1);
template<class... A> int FUN_101d6e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d6e70(int param_1);
template<class... A> int FUN_101d6e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101d6ef0(int param_1);
template<class... A> int FUN_101d6ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101d6fd0(void);
template<class... A> int FUN_101d6fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101d6fe0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101d6fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101d6ff0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101d6ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101d7000(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101d7000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d7010(int param_1);
template<class... A> int FUN_101d7010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101d7ea0(uint param_1);
template<class... A> int FUN_101d7ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101d7f10(uint param_1);
template<class... A> int FUN_101d7f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101d7f90(uint param_1);
template<class... A> int FUN_101d7f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d83d0(int *param_1);
template<class... A> int FUN_101d83d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101d84f0(int *param_1);
template<class... A> int FUN_101d84f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101d8b60(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_101d8b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101d8bb0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_101d8bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101d8c00(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_101d8c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101d8c50(int param_1,int param_2);
template<class... A> int FUN_101d8c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101d8ca0(int param_1,int param_2);
template<class... A> int FUN_101d8ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d8cf0(undefined4 *param_1);
template<class... A> int FUN_101d8cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d8d10(undefined4 *param_1);
template<class... A> int FUN_101d8d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d8d20(undefined4 *param_1);
template<class... A> int FUN_101d8d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d8d30(undefined4 *param_1);
template<class... A> int FUN_101d8d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d8d40(undefined4 *param_1);
template<class... A> int FUN_101d8d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d8d50(undefined4 *param_1);
template<class... A> int FUN_101d8d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d8d60(undefined4 *param_1);
template<class... A> int FUN_101d8d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d8d70(undefined4 *param_1);
template<class... A> int FUN_101d8d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101d8f60(int param_1);
template<class... A> int FUN_101d8f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101d9150(undefined4 *param_1);
template<class... A> int FUN_101d9150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101d9160(undefined4 *param_1);
template<class... A> int FUN_101d9160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101da360(int param_1);
template<class... A> int FUN_101da360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101dad10(void *param_1);
template<class... A> int FUN_101dad10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101daff0(void);
template<class... A> int FUN_101daff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101db000(void);
template<class... A> int FUN_101db000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101db010(void);
template<class... A> int FUN_101db010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101db020(void);
template<class... A> int FUN_101db020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101db030(void);
template<class... A> int FUN_101db030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101db040(void);
template<class... A> int FUN_101db040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101dc9e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101dc9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101dcdd0(int *param_1);
template<class... A> int FUN_101dcdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101dcde0(int *param_1);
template<class... A> int FUN_101dcde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101dcdf0(int *param_1);
template<class... A> int FUN_101dcdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101dce00(int *param_1);
template<class... A> int FUN_101dce00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101dce10(int *param_1);
template<class... A> int FUN_101dce10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101dce20(int *param_1);
template<class... A> int FUN_101dce20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101dcf10(int param_1);
template<class... A> int FUN_101dcf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101dcf20(int param_1);
template<class... A> int FUN_101dcf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101dd030(void);
template<class... A> int FUN_101dd030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101dd040(void);
template<class... A> int FUN_101dd040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101dd050(void);
template<class... A> int FUN_101dd050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101dd060(void);
template<class... A> int FUN_101dd060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101dd270(undefined4 param_1);
template<class... A> int FUN_101dd270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd280(undefined4 *param_1);
template<class... A> int FUN_101dd280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd290(undefined4 *param_1);
template<class... A> int FUN_101dd290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd2a0(undefined4 *param_1);
template<class... A> int FUN_101dd2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd2b0(undefined4 *param_1);
template<class... A> int FUN_101dd2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd2c0(undefined4 *param_1);
template<class... A> int FUN_101dd2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd2d0(undefined4 *param_1);
template<class... A> int FUN_101dd2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd2e0(undefined4 *param_1);
template<class... A> int FUN_101dd2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd2f0(undefined4 *param_1);
template<class... A> int FUN_101dd2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd300(undefined4 *param_1);
template<class... A> int FUN_101dd300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd310(undefined4 *param_1);
template<class... A> int FUN_101dd310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd320(undefined4 *param_1);
template<class... A> int FUN_101dd320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd330(undefined4 *param_1);
template<class... A> int FUN_101dd330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd340(undefined4 *param_1);
template<class... A> int FUN_101dd340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd350(undefined4 *param_1);
template<class... A> int FUN_101dd350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd360(undefined4 *param_1);
template<class... A> int FUN_101dd360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd370(undefined4 *param_1);
template<class... A> int FUN_101dd370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd380(undefined4 *param_1);
template<class... A> int FUN_101dd380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101dd390(undefined4 *param_1);
template<class... A> int FUN_101dd390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de100(undefined4 *param_1);
template<class... A> int FUN_101de100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de130(undefined4 *param_1);
template<class... A> int FUN_101de130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de160(undefined4 *param_1);
template<class... A> int FUN_101de160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de190(undefined4 *param_1);
template<class... A> int FUN_101de190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de1c0(undefined4 *param_1);
template<class... A> int FUN_101de1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de1f0(undefined4 *param_1);
template<class... A> int FUN_101de1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de220(undefined4 *param_1);
template<class... A> int FUN_101de220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de250(undefined4 *param_1);
template<class... A> int FUN_101de250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de280(undefined4 *param_1);
template<class... A> int FUN_101de280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de2b0(undefined4 *param_1);
template<class... A> int FUN_101de2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de2e0(undefined4 *param_1);
template<class... A> int FUN_101de2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de310(undefined4 *param_1);
template<class... A> int FUN_101de310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de340(undefined4 *param_1);
template<class... A> int FUN_101de340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de370(undefined4 *param_1);
template<class... A> int FUN_101de370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de3a0(undefined4 *param_1);
template<class... A> int FUN_101de3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de3d0(undefined4 *param_1);
template<class... A> int FUN_101de3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de400(undefined4 *param_1);
template<class... A> int FUN_101de400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de430(undefined4 *param_1);
template<class... A> int FUN_101de430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de460(undefined4 *param_1);
template<class... A> int FUN_101de460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de490(undefined4 *param_1);
template<class... A> int FUN_101de490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de4c0(undefined4 *param_1);
template<class... A> int FUN_101de4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de4f0(undefined4 *param_1);
template<class... A> int FUN_101de4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de520(undefined4 *param_1);
template<class... A> int FUN_101de520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de550(undefined4 *param_1);
template<class... A> int FUN_101de550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de580(int *param_1);
template<class... A> int FUN_101de580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de5a0(int *param_1);
template<class... A> int FUN_101de5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101de5c0(int *param_1);
template<class... A> int FUN_101de5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101df100(int param_1);
template<class... A> int FUN_101df100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e0a50(void);
template<class... A> int FUN_101e0a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e0a60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101e0a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e0c00(undefined4 param_1);
template<class... A> int FUN_101e0c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e0c10(undefined4 param_1);
template<class... A> int FUN_101e0c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e0c20(int param_1,SCStr *param_2);
template<class... A> int FUN_101e0c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e0d90(undefined4 *param_1);
template<class... A> int FUN_101e0d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e0da0(undefined4 param_1);
template<class... A> int FUN_101e0da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e0db0(undefined4 param_1);
template<class... A> int FUN_101e0db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e0e20(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_101e0e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101e0e50(int *param_1,int *param_2);
template<class... A> int FUN_101e0e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e0ec0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101e0ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e0ee0(undefined4 param_1);
template<class... A> int FUN_101e0ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e0ef0(undefined4 param_1);
template<class... A> int FUN_101e0ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e0f00(undefined4 param_1);
template<class... A> int FUN_101e0f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e0f10(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101e0f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101e0f20(void);
template<class... A> int FUN_101e0f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e0f30(undefined4 param_1);
template<class... A> int FUN_101e0f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e0fb0(undefined4 *param_1);
template<class... A> int FUN_101e0fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1710(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101e1710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1830(undefined4 *param_1);
template<class... A> int FUN_101e1830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1840(undefined4 *param_1);
template<class... A> int FUN_101e1840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1850(undefined4 *param_1);
template<class... A> int FUN_101e1850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101e1860(int *param_1);
template<class... A> int FUN_101e1860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1870(undefined4 *param_1);
template<class... A> int FUN_101e1870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1880(undefined4 *param_1);
template<class... A> int FUN_101e1880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1890(undefined4 *param_1);
template<class... A> int FUN_101e1890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101e18a0(int *param_1);
template<class... A> int FUN_101e18a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e18b0(undefined4 *param_1);
template<class... A> int FUN_101e18b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e18c0(undefined4 *param_1);
template<class... A> int FUN_101e18c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101e18d0(int *param_1);
template<class... A> int FUN_101e18d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101e18e0(int *param_1);
template<class... A> int FUN_101e18e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101e18f0(int *param_1);
template<class... A> int FUN_101e18f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101e1900(int *param_1);
template<class... A> int FUN_101e1900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101e19b0(SCStr *param_1,SCStr *param_2);
template<class... A> int FUN_101e19b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101e19f0(int param_1);
template<class... A> int FUN_101e19f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1f70(undefined4 param_1);
template<class... A> int FUN_101e1f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1f80(undefined4 param_1);
template<class... A> int FUN_101e1f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1f90(undefined4 param_1);
template<class... A> int FUN_101e1f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1fa0(undefined4 param_1);
template<class... A> int FUN_101e1fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e1fb0(undefined4 param_1);
template<class... A> int FUN_101e1fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101e22c0(int param_1);
template<class... A> int FUN_101e22c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e2320(int param_1);
template<class... A> int FUN_101e2320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101e23c0(undefined1 *param_1);
template<class... A> int FUN_101e23c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101e2b30(int param_1,int param_2);
template<class... A> int FUN_101e2b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e2c70(undefined4 *param_1);
template<class... A> int FUN_101e2c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e2c80(undefined4 *param_1);
template<class... A> int FUN_101e2c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101e4e00(void);
template<class... A> int FUN_101e4e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e4fb0(void);
template<class... A> int FUN_101e4fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e4fc0(void);
template<class... A> int FUN_101e4fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e4fd0(undefined4 param_1);
template<class... A> int FUN_101e4fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e4fe0(undefined4 *param_1);
template<class... A> int FUN_101e4fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e4ff0(undefined4 *param_1);
template<class... A> int FUN_101e4ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e5000(undefined4 *param_1);
template<class... A> int FUN_101e5000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e5010(undefined4 *param_1);
template<class... A> int FUN_101e5010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e5020(undefined4 *param_1);
template<class... A> int FUN_101e5020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e5030(undefined4 *param_1);
template<class... A> int FUN_101e5030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e5040(undefined4 *param_1);
template<class... A> int FUN_101e5040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e5050(undefined4 *param_1);
template<class... A> int FUN_101e5050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e5060(undefined4 *param_1);
template<class... A> int FUN_101e5060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e5070(undefined4 *param_1);
template<class... A> int FUN_101e5070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e5080(undefined4 *param_1);
template<class... A> int FUN_101e5080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101e5090(int *param_1);
template<class... A> int FUN_101e5090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101e50b0(int *param_1);
template<class... A> int FUN_101e50b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101e6070(int param_1);
template<class... A> int FUN_101e6070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e65f0(undefined4 *param_1);
template<class... A> int FUN_101e65f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e7d30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101e7d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e7d50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101e7d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e7e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_101e7e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e8470(void);
template<class... A> int FUN_101e8470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e8e40(undefined4 *param_1);
template<class... A> int FUN_101e8e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e8e50(undefined4 *param_1);
template<class... A> int FUN_101e8e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e8e60(undefined4 *param_1);
template<class... A> int FUN_101e8e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_101e8e70(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_101e8e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_101e8f70(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_101e8f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_101e8ff0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_101e8ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e9070(void);
template<class... A> int FUN_101e9070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e90c0(undefined4 param_1);
template<class... A> int FUN_101e90c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e90d0(undefined4 param_1);
template<class... A> int FUN_101e90d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9360(undefined4 param_1);
template<class... A> int FUN_101e9360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9370(undefined4 param_1);
template<class... A> int FUN_101e9370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9380(undefined4 param_1);
template<class... A> int FUN_101e9380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9390(undefined4 param_1);
template<class... A> int FUN_101e9390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e93a0(undefined4 param_1);
template<class... A> int FUN_101e93a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e93b0(undefined4 param_1);
template<class... A> int FUN_101e93b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e93c0(int *param_1,int param_2);
template<class... A> int FUN_101e93c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101e93e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101e93e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e9400(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101e9400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e9430(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101e9430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e9460(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101e9460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e9490(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101e9490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e94c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101e94c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101e94f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_101e94f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101e9600(int param_1,int param_2);
template<class... A> int FUN_101e9600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9bf0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101e9bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9c10(undefined4 param_1);
template<class... A> int FUN_101e9c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9c20(undefined4 param_1);
template<class... A> int FUN_101e9c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9c30(undefined4 param_1);
template<class... A> int FUN_101e9c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9c40(undefined4 param_1);
template<class... A> int FUN_101e9c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9c50(undefined4 param_1);
template<class... A> int FUN_101e9c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9c60(undefined4 param_1);
template<class... A> int FUN_101e9c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9c70(undefined4 param_1);
template<class... A> int FUN_101e9c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9c80(undefined4 param_1);
template<class... A> int FUN_101e9c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101e9c90(void);
template<class... A> int FUN_101e9c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101e9ca0(void);
template<class... A> int FUN_101e9ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9cb0(undefined4 param_1);
template<class... A> int FUN_101e9cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9cc0(undefined4 param_1);
template<class... A> int FUN_101e9cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101e9cd0(undefined4 param_1);
template<class... A> int FUN_101e9cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101e9ce0(int param_1,int param_2);
template<class... A> int FUN_101e9ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e9cf0(undefined4 *param_1);
template<class... A> int FUN_101e9cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e9d20(undefined4 *param_1);
template<class... A> int FUN_101e9d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e9d50(undefined4 *param_1);
template<class... A> int FUN_101e9d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e9d70(undefined4 *param_1);
template<class... A> int FUN_101e9d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e9d90(undefined4 *param_1);
template<class... A> int FUN_101e9d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e9db0(undefined4 *param_1);
template<class... A> int FUN_101e9db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e9e40(undefined4 *param_1);
template<class... A> int FUN_101e9e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101e9ff0(undefined4 *param_1);
template<class... A> int FUN_101e9ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ea010(undefined4 *param_1);
template<class... A> int FUN_101ea010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ea030(undefined4 param_1);
template<class... A> int FUN_101ea030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ea040(undefined4 param_1);
template<class... A> int FUN_101ea040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ea150(undefined4 *param_1);
template<class... A> int FUN_101ea150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ea170(undefined4 *param_1);
template<class... A> int FUN_101ea170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ea1d0(undefined4 *param_1);
template<class... A> int FUN_101ea1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ea1e0(undefined4 *param_1);
template<class... A> int FUN_101ea1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ea1f0(undefined4 *param_1);
template<class... A> int FUN_101ea1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101eb230(undefined4 *param_1);
template<class... A> int FUN_101eb230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101eb250(undefined4 *param_1);
template<class... A> int FUN_101eb250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101eb260(undefined4 *param_1);
template<class... A> int FUN_101eb260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101eb290(undefined4 *param_1);
template<class... A> int FUN_101eb290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101eb3d0(undefined4 *param_1);
template<class... A> int FUN_101eb3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eb8f0(undefined4 *param_1);
template<class... A> int FUN_101eb8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101eb900(int *param_1);
template<class... A> int FUN_101eb900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101eb910(int *param_1);
template<class... A> int FUN_101eb910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eb920(undefined4 *param_1);
template<class... A> int FUN_101eb920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eb930(undefined4 *param_1);
template<class... A> int FUN_101eb930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101eb940(int *param_1);
template<class... A> int FUN_101eb940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101eb950(int *param_1);
template<class... A> int FUN_101eb950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eb960(undefined4 *param_1);
template<class... A> int FUN_101eb960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101eb970(int *param_1);
template<class... A> int FUN_101eb970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eb980(undefined4 *param_1);
template<class... A> int FUN_101eb980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101eb990(int *param_1);
template<class... A> int FUN_101eb990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101eb9a0(int *param_1);
template<class... A> int FUN_101eb9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101eb9b0(int *param_1);
template<class... A> int FUN_101eb9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101eb9c0(int *param_1);
template<class... A> int FUN_101eb9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eb9d0(undefined4 *param_1);
template<class... A> int FUN_101eb9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eb9e0(undefined4 *param_1);
template<class... A> int FUN_101eb9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eb9f0(undefined4 *param_1);
template<class... A> int FUN_101eb9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eba00(undefined4 *param_1);
template<class... A> int FUN_101eba00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eba10(undefined4 *param_1);
template<class... A> int FUN_101eba10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eba20(undefined4 *param_1);
template<class... A> int FUN_101eba20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eba30(undefined4 *param_1);
template<class... A> int FUN_101eba30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eba40(undefined4 *param_1);
template<class... A> int FUN_101eba40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eba50(undefined4 *param_1);
template<class... A> int FUN_101eba50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eba60(undefined4 *param_1);
template<class... A> int FUN_101eba60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101eba70(undefined4 *param_1);
template<class... A> int FUN_101eba70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_101ebaa0(int *param_1);
template<class... A> int FUN_101ebaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_101ebad0(int *param_1);
template<class... A> int FUN_101ebad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101ebb60(int param_1);
template<class... A> int FUN_101ebb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101ec2d0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101ec2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101ec2e0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101ec2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101ec2f0(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101ec2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101ec350(int param_1);
template<class... A> int FUN_101ec350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ec360(undefined4 param_1);
template<class... A> int FUN_101ec360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ec370(undefined4 param_1);
template<class... A> int FUN_101ec370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ec380(undefined4 param_1);
template<class... A> int FUN_101ec380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ec390(undefined4 param_1);
template<class... A> int FUN_101ec390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ec3a0(undefined4 param_1);
template<class... A> int FUN_101ec3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ec3b0(undefined4 param_1);
template<class... A> int FUN_101ec3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ec3c0(undefined4 param_1);
template<class... A> int FUN_101ec3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ec3d0(undefined4 param_1);
template<class... A> int FUN_101ec3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ec3e0(int param_1);
template<class... A> int FUN_101ec3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101ec3f0(int param_1);
template<class... A> int FUN_101ec3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101ec400(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101ec400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101ec410(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101ec410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101ec420(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101ec420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101ec430(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101ec430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101ec440(undefined4 *param_1);
template<class... A> int FUN_101ec440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101ec450(undefined4 *param_1);
template<class... A> int FUN_101ec450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101ec760(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101ec760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101ec770(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101ec770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101ed590(int *param_1);
template<class... A> int FUN_101ed590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101ed5a0(int *param_1);
template<class... A> int FUN_101ed5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ede20(undefined4 *param_1);
template<class... A> int FUN_101ede20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ede30(undefined4 *param_1);
template<class... A> int FUN_101ede30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101ee620(int param_1);
template<class... A> int FUN_101ee620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101f1370(int param_1);
template<class... A> int FUN_101f1370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101f1390(int param_1);
template<class... A> int FUN_101f1390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f13b0(void);
template<class... A> int FUN_101f13b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_101f1720(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_101f1720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101f1c40(void);
template<class... A> int FUN_101f1c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101f1c50(void);
template<class... A> int FUN_101f1c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101f1cb0(int param_1);
template<class... A> int FUN_101f1cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101f1d00(int *param_1);
template<class... A> int FUN_101f1d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f1d10(void);
template<class... A> int FUN_101f1d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f1d20(void);
template<class... A> int FUN_101f1d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f1d30(void);
template<class... A> int FUN_101f1d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f1d40(void);
template<class... A> int FUN_101f1d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f2040(undefined4 *param_1);
template<class... A> int FUN_101f2040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f2050(undefined4 *param_1);
template<class... A> int FUN_101f2050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f2060(undefined4 *param_1);
template<class... A> int FUN_101f2060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f2070(undefined4 *param_1);
template<class... A> int FUN_101f2070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f2080(undefined4 *param_1);
template<class... A> int FUN_101f2080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101f2470(undefined4 *param_1);
template<class... A> int FUN_101f2470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101f24a0(undefined4 *param_1);
template<class... A> int FUN_101f24a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101f24d0(undefined4 *param_1);
template<class... A> int FUN_101f24d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101f2500(undefined4 *param_1);
template<class... A> int FUN_101f2500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101f2530(undefined4 *param_1);
template<class... A> int FUN_101f2530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101f2560(undefined4 *param_1);
template<class... A> int FUN_101f2560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101f2930(int param_1);
template<class... A> int FUN_101f2930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f2e90(undefined4 param_1);
template<class... A> int FUN_101f2e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101f3190(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101f3190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101f3480(int *param_1);
template<class... A> int FUN_101f3480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101f3490(int *param_1);
template<class... A> int FUN_101f3490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101f3ab0(int param_1);
template<class... A> int FUN_101f3ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101f4050(void);
template<class... A> int FUN_101f4050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101f4230(undefined4 param_1,int param_2);
template<class... A> int FUN_101f4230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f4310(undefined4 param_1);
template<class... A> int FUN_101f4310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f4320(undefined4 param_1);
template<class... A> int FUN_101f4320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f4330(undefined4 param_1);
template<class... A> int FUN_101f4330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f4340(undefined4 param_1);
template<class... A> int FUN_101f4340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f4460(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101f4460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101f4480(void);
template<class... A> int FUN_101f4480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101f4490(undefined4 *param_1);
template<class... A> int FUN_101f4490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101f44f0(undefined4 *param_1);
template<class... A> int FUN_101f44f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101f4580(undefined4 *param_1);
template<class... A> int FUN_101f4580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101f45f0(undefined4 *param_1);
template<class... A> int FUN_101f45f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101f4610(undefined4 *param_1);
template<class... A> int FUN_101f4610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101f4630(undefined4 *param_1);
template<class... A> int FUN_101f4630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101f4650(undefined4 *param_1);
template<class... A> int FUN_101f4650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101f4670(undefined4 *param_1);
template<class... A> int FUN_101f4670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101f4740(undefined4 *param_1);
template<class... A> int FUN_101f4740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101f4c00(undefined4 *param_1);
template<class... A> int FUN_101f4c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101f4dd0(int *param_1);
template<class... A> int FUN_101f4dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f4de0(undefined4 *param_1);
template<class... A> int FUN_101f4de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101f4df0(int *param_1);
template<class... A> int FUN_101f4df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f4e00(undefined4 *param_1);
template<class... A> int FUN_101f4e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f4e10(undefined4 *param_1);
template<class... A> int FUN_101f4e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f4e20(undefined4 *param_1);
template<class... A> int FUN_101f4e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f4e30(undefined4 *param_1);
template<class... A> int FUN_101f4e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f4e40(undefined4 *param_1);
template<class... A> int FUN_101f4e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101f4e50(int *param_1);
template<class... A> int FUN_101f4e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101f4e60(int *param_1);
template<class... A> int FUN_101f4e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101f4e70(int *param_1);
template<class... A> int FUN_101f4e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f4e80(undefined4 *param_1);
template<class... A> int FUN_101f4e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f4e90(undefined4 *param_1);
template<class... A> int FUN_101f4e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_101f4ff0(int *param_1);
template<class... A> int FUN_101f4ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101f52a0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_101f52a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f5350(undefined4 param_1);
template<class... A> int FUN_101f5350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f5360(undefined4 param_1);
template<class... A> int FUN_101f5360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f5370(undefined4 param_1);
template<class... A> int FUN_101f5370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101f55a0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_101f55a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f6360(int *param_1);
template<class... A> int FUN_101f6360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101f8160(void);
template<class... A> int FUN_101f8160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101f8340(int *param_1);
template<class... A> int FUN_101f8340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101f8350(int *param_1);
template<class... A> int FUN_101f8350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101f8360(int *param_1);
template<class... A> int FUN_101f8360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f8490(undefined4 param_1);
template<class... A> int FUN_101f8490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f84a0(undefined4 *param_1);
template<class... A> int FUN_101f84a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101f84b0(undefined4 *param_1);
template<class... A> int FUN_101f84b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101f85e0(undefined4 *param_1);
template<class... A> int FUN_101f85e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101f8610(int *param_1);
template<class... A> int FUN_101f8610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_101f9a30(int param_1);
template<class... A> int FUN_101f9a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101f9a40(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_101f9a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_101f9c40(int param_1);
template<class... A> int FUN_101f9c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f9c50(undefined4 param_1);
template<class... A> int FUN_101f9c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f9c60(undefined4 param_1);
template<class... A> int FUN_101f9c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f9c70(undefined4 param_1);
template<class... A> int FUN_101f9c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f9c80(undefined4 param_1);
template<class... A> int FUN_101f9c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f9c90(undefined4 param_1);
template<class... A> int FUN_101f9c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101f9ca0(void);
template<class... A> int FUN_101f9ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101f9cb0(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_101f9cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101f9cf0(undefined4 param_1);
template<class... A> int FUN_101f9cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101f9fa0(undefined4 *param_1);
template<class... A> int FUN_101f9fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101fa070(undefined4 param_1);
template<class... A> int FUN_101fa070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101fa080(int param_1);
template<class... A> int FUN_101fa080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101fa090(int param_1);
template<class... A> int FUN_101fa090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fa3d0(undefined4 *param_1);
template<class... A> int FUN_101fa3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101fa730(int param_1);
template<class... A> int FUN_101fa730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101fa7c0(undefined4 *param_1);
template<class... A> int FUN_101fa7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101fa840(undefined4 *param_1);
template<class... A> int FUN_101fa840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101fa870(int *param_1);
template<class... A> int FUN_101fa870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101fa890(undefined4 *param_1);
template<class... A> int FUN_101fa890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101fa8a0(int *param_1);
template<class... A> int FUN_101fa8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101fa8b0(int param_1);
template<class... A> int FUN_101fa8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101fa8c0(int param_1);
template<class... A> int FUN_101fa8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101fa8d0(undefined4 *param_1);
template<class... A> int FUN_101fa8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101fa8e0(undefined4 *param_1);
template<class... A> int FUN_101fa8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101faf50(int param_1);
template<class... A> int FUN_101faf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101faf60(int param_1);
template<class... A> int FUN_101faf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101faf80(int param_1);
template<class... A> int FUN_101faf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101faf90(int param_1);
template<class... A> int FUN_101faf90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101fafa0(int param_1);
template<class... A> int FUN_101fafa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101fafb0(int param_1);
template<class... A> int FUN_101fafb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fb5d0(char param_1);
template<class... A> int FUN_101fb5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fb610(void);
template<class... A> int FUN_101fb610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fb640(void);
template<class... A> int FUN_101fb640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101fb650(int param_1);
template<class... A> int FUN_101fb650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101fb660(int *param_1);
template<class... A> int FUN_101fb660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101fb670(undefined4 *param_1);
template<class... A> int FUN_101fb670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101fb680(undefined4 *param_1);
template<class... A> int FUN_101fb680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101fb830(undefined4 *param_1);
template<class... A> int FUN_101fb830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101fb860(undefined4 *param_1);
template<class... A> int FUN_101fb860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fc410(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101fc410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fc430(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_101fc430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fc470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_101fc470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fc590(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_101fc590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fc5b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_101fc5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fc5d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_101fc5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fd7a0(void);
template<class... A> int FUN_101fd7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fd920(void);
template<class... A> int FUN_101fd920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fd940(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101fd940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fd950(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101fd950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fda10(void);
template<class... A> int FUN_101fda10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fdd00(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101fdd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fddd0(undefined4 *param_1);
template<class... A> int FUN_101fddd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fdde0(undefined4 *param_1);
template<class... A> int FUN_101fdde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fddf0(undefined4 param_1);
template<class... A> int FUN_101fddf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fde00(int param_1);
template<class... A> int FUN_101fde00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fde30(void);
template<class... A> int FUN_101fde30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fde40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101fde40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fdfd0(undefined4 param_1);
template<class... A> int FUN_101fdfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe0a0(undefined4 param_1);
template<class... A> int FUN_101fe0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe0b0(undefined4 param_1);
template<class... A> int FUN_101fe0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe0c0(undefined4 param_1);
template<class... A> int FUN_101fe0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe0d0(undefined4 param_1);
template<class... A> int FUN_101fe0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe0e0(undefined4 param_1);
template<class... A> int FUN_101fe0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe0f0(undefined4 param_1);
template<class... A> int FUN_101fe0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe100(undefined4 param_1);
template<class... A> int FUN_101fe100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101fe170(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101fe170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101fe1b0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101fe1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101fe1f0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101fe1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101fe230(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101fe230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101fe270(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101fe270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101fe2b0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_101fe2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fe2f0(int *param_1,int param_2);
template<class... A> int FUN_101fe2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101fe310(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_101fe310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fe330(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_101fe330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fe370(undefined4 param_1,int *param_2,int *param_3);
template<class... A> int FUN_101fe370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101fe4e0(int param_1,int param_2);
template<class... A> int FUN_101fe4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe4f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101fe4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe510(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101fe510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe530(undefined4 param_1);
template<class... A> int FUN_101fe530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe540(undefined4 param_1);
template<class... A> int FUN_101fe540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe550(undefined4 param_1);
template<class... A> int FUN_101fe550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe560(undefined4 param_1);
template<class... A> int FUN_101fe560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe570(undefined4 param_1);
template<class... A> int FUN_101fe570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe580(undefined4 param_1);
template<class... A> int FUN_101fe580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe590(undefined4 param_1);
template<class... A> int FUN_101fe590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe5a0(undefined4 param_1);
template<class... A> int FUN_101fe5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe5b0(undefined4 param_1);
template<class... A> int FUN_101fe5b0(A...);
// Reference entry 101afc10; body size 65 bytes.
#line 1 "ENTRY_101afc10"

int * __thiscall Recovered_Bulk::m_FUN_101afc10(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101afc70; body size 65 bytes.
#line 1 "ENTRY_101afc70"

int * __thiscall Recovered_Bulk::m_FUN_101afc70(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101afcd0; body size 65 bytes.
#line 1 "ENTRY_101afcd0"

int * __thiscall Recovered_Bulk::m_FUN_101afcd0(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101afd30; body size 65 bytes.
#line 1 "ENTRY_101afd30"

int * __thiscall Recovered_Bulk::m_FUN_101afd30(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101afd90; body size 65 bytes.
#line 1 "ENTRY_101afd90"

int * __thiscall Recovered_Bulk::m_FUN_101afd90(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101afdf0; body size 65 bytes.
#line 1 "ENTRY_101afdf0"

int * __thiscall Recovered_Bulk::m_FUN_101afdf0(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101afe50; body size 65 bytes.
#line 1 "ENTRY_101afe50"

int * __thiscall Recovered_Bulk::m_FUN_101afe50(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101afff0; body size 5 bytes.
#line 1 "ENTRY_101afff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101afff0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b0000; body size 70 bytes.
#line 1 "ENTRY_101b0000"

int __thiscall Recovered_Bulk::m_FUN_101b0000(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(param_2 + 4));
  if ((int)(iVar2) != *(int *)(param_1 + 4)) {
    piVar1 = (int *)(*(int **)(param_1 + 8), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 4) = (undefined4)(0);
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*(int *)(param_2 + 4));
    }
    *(int*)(param_1 + 4) = (int)(iVar2);
    piVar1 = (int *)(*(int **)(param_2 + 8), 0);
    *(int**)(param_1 + 8) = (int *)(piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int)(param_1);
}


// Reference entry 101b0140; body size 5 bytes.
#line 1 "ENTRY_101b0140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b0140(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b0150; body size 5 bytes.
#line 1 "ENTRY_101b0150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b0150(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b0160; body size 5 bytes.
#line 1 "ENTRY_101b0160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b0160(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b0170; body size 5 bytes.
#line 1 "ENTRY_101b0170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b0170(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b0180; body size 5 bytes.
#line 1 "ENTRY_101b0180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b0180(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b1040; body size 70 bytes.
#line 1 "ENTRY_101b1040"

int __thiscall Recovered_Bulk::m_FUN_101b1040(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(param_2 + 4));
  if ((int)(iVar2) != *(int *)(param_1 + 4)) {
    piVar1 = (int *)(*(int **)(param_1 + 8), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 4) = (undefined4)(0);
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*(int *)(param_2 + 4));
    }
    *(int*)(param_1 + 4) = (int)(iVar2);
    piVar1 = (int *)(*(int **)(param_2 + 8), 0);
    *(int**)(param_1 + 8) = (int *)(piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int)(param_1);
}


// Reference entry 101b10a0; body size 14 bytes.
#line 1 "ENTRY_101b10a0"

bool __thiscall Recovered_Bulk::m_FUN_101b10a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101b10c0; body size 14 bytes.
#line 1 "ENTRY_101b10c0"

bool __thiscall Recovered_Bulk::m_FUN_101b10c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101b10e0; body size 12 bytes.
#line 1 "ENTRY_101b10e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b10e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 101b10f0; body size 12 bytes.
#line 1 "ENTRY_101b10f0"

int __thiscall Recovered_Bulk::m_FUN_101b10f0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 101b1100; body size 3 bytes.
#line 1 "ENTRY_101b1100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b1100(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b1110; body size 3 bytes.
#line 1 "ENTRY_101b1110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b1110(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b1120; body size 3 bytes.
#line 1 "ENTRY_101b1120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b1120(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b1130; body size 7 bytes.
#line 1 "ENTRY_101b1130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101b1130(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101b1140; body size 3 bytes.
#line 1 "ENTRY_101b1140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b1140(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b1150; body size 7 bytes.
#line 1 "ENTRY_101b1150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101b1150(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101b1160; body size 3 bytes.
#line 1 "ENTRY_101b1160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b1160(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b1170; body size 3 bytes.
#line 1 "ENTRY_101b1170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b1170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b1180; body size 3 bytes.
#line 1 "ENTRY_101b1180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b1180(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b1190; body size 3 bytes.
#line 1 "ENTRY_101b1190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b1190(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b11a0; body size 3 bytes.
#line 1 "ENTRY_101b11a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b11a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b11b0; body size 6 bytes.
#line 1 "ENTRY_101b11b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101b11b0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 101b11c0; body size 6 bytes.
#line 1 "ENTRY_101b11c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101b11c0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 101b11d0; body size 6 bytes.
#line 1 "ENTRY_101b11d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101b11d0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 101b11e0; body size 9 bytes.
#line 1 "ENTRY_101b11e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b11e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 101b11f0; body size 9 bytes.
#line 1 "ENTRY_101b11f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b11f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 101b1270; body size 10 bytes.
#line 1 "ENTRY_101b1270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_101b1270(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 101b1ca0; body size 22 bytes.
#line 1 "ENTRY_101b1ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b1ca0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 101b1e00; body size 49 bytes.
#line 1 "ENTRY_101b1e00"

uint __thiscall Recovered_Bulk::m_FUN_101b1e00(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 101b1eb0; body size 20 bytes.
#line 1 "ENTRY_101b1eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b1eb0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 101b1ed0; body size 67 bytes.
#line 1 "ENTRY_101b1ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101b1ed0(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(uint)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) +
                 (double)(uint)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 101b2070; body size 3 bytes.
#line 1 "ENTRY_101b2070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101b2070(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 101b2080; body size 5 bytes.
#line 1 "ENTRY_101b2080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101b2080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b22c0; body size 3 bytes.
#line 1 "ENTRY_101b22c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b22c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b22d0; body size 3 bytes.
#line 1 "ENTRY_101b22d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b22d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b22e0; body size 3 bytes.
#line 1 "ENTRY_101b22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b22e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b22f0; body size 3 bytes.
#line 1 "ENTRY_101b22f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b22f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b2300; body size 3 bytes.
#line 1 "ENTRY_101b2300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b2300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b2310; body size 3 bytes.
#line 1 "ENTRY_101b2310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b2310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b2320; body size 3 bytes.
#line 1 "ENTRY_101b2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b2320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b2330; body size 3 bytes.
#line 1 "ENTRY_101b2330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b2330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b2340; body size 4 bytes.
#line 1 "ENTRY_101b2340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101b2340(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 101b2350; body size 3 bytes.
#line 1 "ENTRY_101b2350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b2350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b2360; body size 4 bytes.
#line 1 "ENTRY_101b2360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101b2360(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 101b2370; body size 3 bytes.
#line 1 "ENTRY_101b2370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b2370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b2380; body size 3 bytes.
#line 1 "ENTRY_101b2380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b2380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b2390; body size 3 bytes.
#line 1 "ENTRY_101b2390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b2390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b23a0; body size 3 bytes.
#line 1 "ENTRY_101b23a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b23a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b2430; body size 13 bytes.
#line 1 "ENTRY_101b2430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101b2430(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101b2440; body size 4 bytes.
#line 1 "ENTRY_101b2440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101b2440(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 101b24f0; body size 3 bytes.
#line 1 "ENTRY_101b24f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101b24f0(void)

{
  return;
}


// Reference entry 101b2500; body size 3 bytes.
#line 1 "ENTRY_101b2500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101b2500(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 101b2510; body size 3 bytes.
#line 1 "ENTRY_101b2510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101b2510(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 101b2560; body size 11 bytes.
#line 1 "ENTRY_101b2560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b2560(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101b2570; body size 6 bytes.
#line 1 "ENTRY_101b2570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b2570(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 101b2680; body size 38 bytes.
#line 1 "ENTRY_101b2680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_101b2680(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 101b26b0; body size 27 bytes.
#line 1 "ENTRY_101b26b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101b26b0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 101b26e0; body size 27 bytes.
#line 1 "ENTRY_101b26e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101b26e0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 101b2710; body size 14 bytes.
#line 1 "ENTRY_101b2710"

void __thiscall Recovered_Bulk::m_FUN_101b2710(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 101b2730; body size 14 bytes.
#line 1 "ENTRY_101b2730"

void __thiscall Recovered_Bulk::m_FUN_101b2730(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 101b2750; body size 13 bytes.
#line 1 "ENTRY_101b2750"

void __thiscall Recovered_Bulk::m_FUN_101b2750(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 101b2760; body size 13 bytes.
#line 1 "ENTRY_101b2760"

void __thiscall Recovered_Bulk::m_FUN_101b2760(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 101b2770; body size 13 bytes.
#line 1 "ENTRY_101b2770"

void __thiscall Recovered_Bulk::m_FUN_101b2770(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 101b2780; body size 12 bytes.
#line 1 "ENTRY_101b2780"

void __thiscall Recovered_Bulk::m_FUN_101b2780(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 101b2790; body size 12 bytes.
#line 1 "ENTRY_101b2790"

void __thiscall Recovered_Bulk::m_FUN_101b2790(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 101b27a0; body size 10 bytes.
#line 1 "ENTRY_101b27a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101b27a0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 101b27b0; body size 11 bytes.
#line 1 "ENTRY_101b27b0"

void __thiscall Recovered_Bulk::m_FUN_101b27b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101b27c0; body size 11 bytes.
#line 1 "ENTRY_101b27c0"

void __thiscall Recovered_Bulk::m_FUN_101b27c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101b28c0; body size 43 bytes.
#line 1 "ENTRY_101b28c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101b28c0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)(*(int **)(param_2 + 4), 0);
  *piVar1 = (int)(param_3);
  piVar2 = (int *)(*(int **)(param_3 + 4), 0);
  *piVar2 = (int)(param_1);
  piVar3 = (int *)(*(int **)(param_1 + 4), 0);
  *piVar3 = (int)(param_2);
  *(int**)(param_1 + 4) = (int *)(piVar2);
  *(int**)(param_3 + 4) = (int *)(piVar1);
  *(int**)(param_2 + 4) = (int *)(piVar3);
  return;
}


// Reference entry 101b2af0; body size 87 bytes.
#line 1 "ENTRY_101b2af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101b2af0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
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


// Reference entry 101b2b60; body size 90 bytes.
#line 1 "ENTRY_101b2b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101b2b60(uint param_1)

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


// Reference entry 101b2be0; body size 87 bytes.
#line 1 "ENTRY_101b2be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101b2be0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
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


// Reference entry 101b2d20; body size 19 bytes.
#line 1 "ENTRY_101b2d20"

uint __thiscall Recovered_Bulk::m_FUN_101b2d20(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_101a3180(param_2), 0);
  return (uint)(uVar1 & *(uint *)(param_1 + 0x20));
}


// Reference entry 101b2d40; body size 4 bytes.
#line 1 "ENTRY_101b2d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b2d40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 101b2e10; body size 9 bytes.
#line 1 "ENTRY_101b2e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101b2e10(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 101b2e20; body size 68 bytes.
#line 1 "ENTRY_101b2e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b2e20(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_101ab700(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_101abde0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 101b48a0; body size 57 bytes.
#line 1 "ENTRY_101b48a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101b48a0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 101b48f0; body size 61 bytes.
#line 1 "ENTRY_101b48f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101b48f0(int param_1,int param_2)

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


// Reference entry 101b4940; body size 60 bytes.
#line 1 "ENTRY_101b4940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101b4940(int param_1,int param_2)

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


// Reference entry 101b4990; body size 61 bytes.
#line 1 "ENTRY_101b4990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101b4990(int param_1,int param_2)

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


// Reference entry 101b49e0; body size 9 bytes.
#line 1 "ENTRY_101b49e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b49e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101b4dc0; body size 4 bytes.
#line 1 "ENTRY_101b4dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b4dc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 101b5040; body size 15 bytes.
#line 1 "ENTRY_101b5040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b5040(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x70) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x70) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 101b52d0; body size 4 bytes.
#line 1 "ENTRY_101b52d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b52d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 101b5560; body size 3 bytes.
#line 1 "ENTRY_101b5560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b5560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b5800; body size 6 bytes.
#line 1 "ENTRY_101b5800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b5800(void)

{
  return (char *)("SCIAbilityDelegate");
}


// Reference entry 101b5810; body size 6 bytes.
#line 1 "ENTRY_101b5810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b5810(void)

{
  return (char *)("SCIAbilityListener");
}


// Reference entry 101b5820; body size 6 bytes.
#line 1 "ENTRY_101b5820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b5820(void)

{
  return (char *)("SCIActionDelegate");
}


// Reference entry 101b5830; body size 6 bytes.
#line 1 "ENTRY_101b5830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b5830(void)

{
  return (char *)("SCIDebug");
}


// Reference entry 101b5840; body size 6 bytes.
#line 1 "ENTRY_101b5840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b5840(void)

{
  return (char *)("SCIEnumerable");
}


// Reference entry 101b5850; body size 6 bytes.
#line 1 "ENTRY_101b5850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b5850(void)

{
  return (char *)("SCIEventSink");
}


// Reference entry 101b5860; body size 6 bytes.
#line 1 "ENTRY_101b5860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b5860(void)

{
  return (char *)("SCILibrary");
}


// Reference entry 101b5870; body size 6 bytes.
#line 1 "ENTRY_101b5870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b5870(void)

{
  return (char *)("SCILibraryTests");
}


// Reference entry 101b5880; body size 6 bytes.
#line 1 "ENTRY_101b5880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b5880(void)

{
  return (char *)("SCINetworkManagement");
}


// Reference entry 101b5890; body size 6 bytes.
#line 1 "ENTRY_101b5890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b5890(void)

{
  return (char *)("SCIOpFactory");
}


// Reference entry 101b58a0; body size 77 bytes.
#line 1 "ENTRY_101b58a0"

void __thiscall Recovered_Bulk::m_FUN_101b58a0(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  *(undefined1*)(param_2 + 100 + param_1) = (undefined1)(0);
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) == (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    *puVar1 = (undefined4)(4);
    puVar1[1] = (undefined4)(10);
    puVar1[2] = (undefined4)(param_2);
  }
  thunk_FUN_1106b190(-(uint)(param_1 != 0) & param_1 + 0xcU,puVar1,0);
  return;
}


// Reference entry 101b5e80; body size 7 bytes.
#line 1 "ENTRY_101b5e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101b5e80(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 101b5e90; body size 36 bytes.
#line 1 "ENTRY_101b5e90"

undefined4 __thiscall Recovered_Bulk::m_FUN_101b5e90(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (*(int **)(param_1 + 0x70) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x1c))(param_2,param_3), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b5f30; body size 4 bytes.
#line 1 "ENTRY_101b5f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_101b5f30(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 101b5f40; body size 6 bytes.
#line 1 "ENTRY_101b5f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101b5f40(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101b5f50; body size 6 bytes.
#line 1 "ENTRY_101b5f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101b5f50(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 101b5f60; body size 6 bytes.
#line 1 "ENTRY_101b5f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101b5f60(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101b5f70; body size 6 bytes.
#line 1 "ENTRY_101b5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101b5f70(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101b5f80; body size 6 bytes.
#line 1 "ENTRY_101b5f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101b5f80(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 101b5f90; body size 6 bytes.
#line 1 "ENTRY_101b5f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101b5f90(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101b6640; body size 5 bytes.
#line 1 "ENTRY_101b6640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b6640(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  return;
}


// Reference entry 101b6840; body size 3 bytes.
#line 1 "ENTRY_101b6840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b6840(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b6850; body size 3 bytes.
#line 1 "ENTRY_101b6850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b6850(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b6860; body size 3 bytes.
#line 1 "ENTRY_101b6860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b6860(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b6870; body size 3 bytes.
#line 1 "ENTRY_101b6870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b6870(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b6880; body size 3 bytes.
#line 1 "ENTRY_101b6880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b6880(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b6890; body size 3 bytes.
#line 1 "ENTRY_101b6890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b6890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b68a0; body size 3 bytes.
#line 1 "ENTRY_101b68a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b68a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b68b0; body size 3 bytes.
#line 1 "ENTRY_101b68b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b68b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b68c0; body size 36 bytes.
#line 1 "ENTRY_101b68c0"

void __thiscall Recovered_Bulk::m_FUN_101b68c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_101ab4a0(puVar1,param_2);
  return;
}


// Reference entry 101b6f00; body size 28 bytes.
#line 1 "ENTRY_101b6f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b6f00(undefined4 *param_1)

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


// Reference entry 101b6f30; body size 28 bytes.
#line 1 "ENTRY_101b6f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b6f30(undefined4 *param_1)

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


// Reference entry 101b6f60; body size 28 bytes.
#line 1 "ENTRY_101b6f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b6f60(undefined4 *param_1)

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


// Reference entry 101b6f90; body size 28 bytes.
#line 1 "ENTRY_101b6f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b6f90(undefined4 *param_1)

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


// Reference entry 101b6fc0; body size 28 bytes.
#line 1 "ENTRY_101b6fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b6fc0(undefined4 *param_1)

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


// Reference entry 101b6ff0; body size 28 bytes.
#line 1 "ENTRY_101b6ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b6ff0(undefined4 *param_1)

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


// Reference entry 101b7020; body size 28 bytes.
#line 1 "ENTRY_101b7020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7020(undefined4 *param_1)

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


// Reference entry 101b7050; body size 28 bytes.
#line 1 "ENTRY_101b7050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7050(undefined4 *param_1)

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


// Reference entry 101b7080; body size 28 bytes.
#line 1 "ENTRY_101b7080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7080(undefined4 *param_1)

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


// Reference entry 101b70b0; body size 28 bytes.
#line 1 "ENTRY_101b70b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b70b0(undefined4 *param_1)

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


// Reference entry 101b70e0; body size 28 bytes.
#line 1 "ENTRY_101b70e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b70e0(undefined4 *param_1)

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


// Reference entry 101b7110; body size 28 bytes.
#line 1 "ENTRY_101b7110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7110(undefined4 *param_1)

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


// Reference entry 101b7140; body size 28 bytes.
#line 1 "ENTRY_101b7140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7140(undefined4 *param_1)

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


// Reference entry 101b7170; body size 28 bytes.
#line 1 "ENTRY_101b7170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7170(undefined4 *param_1)

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


// Reference entry 101b71a0; body size 28 bytes.
#line 1 "ENTRY_101b71a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b71a0(undefined4 *param_1)

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


// Reference entry 101b71d0; body size 28 bytes.
#line 1 "ENTRY_101b71d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b71d0(undefined4 *param_1)

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


// Reference entry 101b7200; body size 28 bytes.
#line 1 "ENTRY_101b7200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7200(undefined4 *param_1)

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


// Reference entry 101b7230; body size 28 bytes.
#line 1 "ENTRY_101b7230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7230(undefined4 *param_1)

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


// Reference entry 101b7260; body size 28 bytes.
#line 1 "ENTRY_101b7260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7260(undefined4 *param_1)

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


// Reference entry 101b7290; body size 28 bytes.
#line 1 "ENTRY_101b7290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7290(undefined4 *param_1)

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


// Reference entry 101b72c0; body size 28 bytes.
#line 1 "ENTRY_101b72c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b72c0(undefined4 *param_1)

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


// Reference entry 101b72f0; body size 28 bytes.
#line 1 "ENTRY_101b72f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b72f0(undefined4 *param_1)

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


// Reference entry 101b7320; body size 28 bytes.
#line 1 "ENTRY_101b7320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7320(undefined4 *param_1)

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


// Reference entry 101b7350; body size 28 bytes.
#line 1 "ENTRY_101b7350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7350(undefined4 *param_1)

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


// Reference entry 101b7380; body size 28 bytes.
#line 1 "ENTRY_101b7380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7380(undefined4 *param_1)

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


// Reference entry 101b73b0; body size 28 bytes.
#line 1 "ENTRY_101b73b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b73b0(undefined4 *param_1)

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


// Reference entry 101b73e0; body size 28 bytes.
#line 1 "ENTRY_101b73e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b73e0(undefined4 *param_1)

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


// Reference entry 101b7410; body size 28 bytes.
#line 1 "ENTRY_101b7410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7410(undefined4 *param_1)

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


// Reference entry 101b7440; body size 28 bytes.
#line 1 "ENTRY_101b7440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7440(undefined4 *param_1)

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


// Reference entry 101b7470; body size 28 bytes.
#line 1 "ENTRY_101b7470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7470(undefined4 *param_1)

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


// Reference entry 101b74a0; body size 28 bytes.
#line 1 "ENTRY_101b74a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b74a0(undefined4 *param_1)

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


// Reference entry 101b74d0; body size 28 bytes.
#line 1 "ENTRY_101b74d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b74d0(undefined4 *param_1)

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


// Reference entry 101b7500; body size 20 bytes.
#line 1 "ENTRY_101b7500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b7500(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 101b7d40; body size 5 bytes.
#line 1 "ENTRY_101b7d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101b7d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101b7f60; body size 9 bytes.
#line 1 "ENTRY_101b7f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101b7f60(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 101b7f70; body size 4 bytes.
#line 1 "ENTRY_101b7f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b7f70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 101b7f80; body size 9 bytes.
#line 1 "ENTRY_101b7f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101b7f80(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 101b80a0; body size 6 bytes.
#line 1 "ENTRY_101b80a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b80a0(void)

{
  return (char *)("SCIVersion");
}


// Reference entry 101b80b0; body size 27 bytes.
#line 1 "ENTRY_101b80b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b80b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101b8140; body size 9 bytes.
#line 1 "ENTRY_101b8140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b8140(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIVersion);
  return (undefined4 *)(param_1);
}


// Reference entry 101b8200; body size 71 bytes.
#line 1 "ENTRY_101b8200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b8200(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVersion);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined2*)(param_1 + 5) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0x16) = (undefined1)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101b8280; body size 7 bytes.
#line 1 "ENTRY_101b8280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b8280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101b8380; body size 48 bytes.
#line 1 "ENTRY_101b8380"

int __thiscall Recovered_Bulk::m_FUN_101b8380(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  *(undefined4*)(param_1 + 0x10) = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  *(undefined1*)(param_1 + 0x14) = (undefined1)(*(undefined1 *)(param_2 + 0x14));
  *(undefined1*)(param_1 + 0x15) = (undefined1)(*(undefined1 *)(param_2 + 0x15));
  *(undefined1*)(param_1 + 0x16) = (undefined1)(*(undefined1 *)(param_2 + 0x16));
  return (int)(param_1);
}


// Reference entry 101b83c0; body size 3 bytes.
#line 1 "ENTRY_101b83c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b83c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b83d0; body size 3 bytes.
#line 1 "ENTRY_101b83d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b83d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b83e0; body size 3 bytes.
#line 1 "ENTRY_101b83e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b83e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b8500; body size 6 bytes.
#line 1 "ENTRY_101b8500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b8500(void)

{
  return (char *)("SCVersion");
}


// Reference entry 101b8cf0; body size 6 bytes.
#line 1 "ENTRY_101b8cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b8cf0(void)

{
  return (char *)("SCIVersion");
}


// Reference entry 101b8e50; body size 3 bytes.
#line 1 "ENTRY_101b8e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b8e50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b8e60; body size 3 bytes.
#line 1 "ENTRY_101b8e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101b8e60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101b9130; body size 38 bytes.
#line 1 "ENTRY_101b9130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101b9130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101b9120(param_1,0xffffffff,param_2,param_3,param_4), 0);
  __stdio_common_vsscanf(*puVar1,puVar1[1]);
  return;
}


// Reference entry 101b9370; body size 6 bytes.
#line 1 "ENTRY_101b9370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b9370(void)

{
  return (char *)("SCIElapsedTimeMeasurement");
}


// Reference entry 101b9380; body size 6 bytes.
#line 1 "ENTRY_101b9380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101b9380(void)

{
  return (char *)("SCIOp");
}


// Reference entry 101b9490; body size 27 bytes.
#line 1 "ENTRY_101b9490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b9490(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101b94c0; body size 27 bytes.
#line 1 "ENTRY_101b94c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b94c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101b9690; body size 16 bytes.
#line 1 "ENTRY_101b9690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b9690(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101b96b0; body size 32 bytes.
#line 1 "ENTRY_101b96b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b96b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b96e0; body size 16 bytes.
#line 1 "ENTRY_101b96e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b96e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101b9720; body size 30 bytes.
#line 1 "ENTRY_101b9720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b9720(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101b9750; body size 24 bytes.
#line 1 "ENTRY_101b9750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b9750(undefined4 *param_1)

{
  thunk_FUN_11240650();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  return (undefined4 *)(param_1);
}


// Reference entry 101b9800; body size 9 bytes.
#line 1 "ENTRY_101b9800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b9800(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101b9810; body size 69 bytes.
#line 1 "ENTRY_101b9810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b9810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8*)(param_1 + 2) = (undefined8)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101b9870; body size 9 bytes.
#line 1 "ENTRY_101b9870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b9870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIElapsedTimeMeasurement);
  return (undefined4 *)(param_1);
}


// Reference entry 101b9880; body size 9 bytes.
#line 1 "ENTRY_101b9880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101b9880(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOp);
  return (undefined4 *)(param_1);
}


// Reference entry 101b9a00; body size 42 bytes.
#line 1 "ENTRY_101b9a00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101b9a00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 101b9b60; body size 19 bytes.
#line 1 "ENTRY_101b9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101b9b60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ba0b0; body size 3 bytes.
#line 1 "ENTRY_101ba0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ba0b0(void)

{
  return;
}


// Reference entry 101ba240; body size 7 bytes.
#line 1 "ENTRY_101ba240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101ba240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ba250; body size 7 bytes.
#line 1 "ENTRY_101ba250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101ba250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ba2e0; body size 19 bytes.
#line 1 "ENTRY_101ba2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101ba2e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ba400; body size 65 bytes.
#line 1 "ENTRY_101ba400"

int * __thiscall Recovered_Bulk::m_FUN_101ba400(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101ba5c0; body size 4 bytes.
#line 1 "ENTRY_101ba5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ba5c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 101ba5d0; body size 3 bytes.
#line 1 "ENTRY_101ba5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ba5d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101ba5e0; body size 7 bytes.
#line 1 "ENTRY_101ba5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101ba5e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101ba5f0; body size 7 bytes.
#line 1 "ENTRY_101ba5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101ba5f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101ba600; body size 7 bytes.
#line 1 "ENTRY_101ba600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101ba600(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101ba610; body size 7 bytes.
#line 1 "ENTRY_101ba610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101ba610(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101ba620; body size 3 bytes.
#line 1 "ENTRY_101ba620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ba620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101ba630; body size 4 bytes.
#line 1 "ENTRY_101ba630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ba630(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 101ba640; body size 3 bytes.
#line 1 "ENTRY_101ba640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ba640(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101ba650; body size 7 bytes.
#line 1 "ENTRY_101ba650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101ba650(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101ba660; body size 13 bytes.
#line 1 "ENTRY_101ba660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_101ba660(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)((undefined1 *)*param_1);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 101ba670; body size 3 bytes.
#line 1 "ENTRY_101ba670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ba670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101ba680; body size 3 bytes.
#line 1 "ENTRY_101ba680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ba680(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101ba690; body size 3 bytes.
#line 1 "ENTRY_101ba690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ba690(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101ba6a0; body size 3 bytes.
#line 1 "ENTRY_101ba6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ba6a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101ba6b0; body size 3 bytes.
#line 1 "ENTRY_101ba6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ba6b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101ba6c0; body size 3 bytes.
#line 1 "ENTRY_101ba6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ba6c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101babf0; body size 13 bytes.
#line 1 "ENTRY_101babf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101babf0(int param_1)

{
  thunk_FUN_1123fce0(param_1 + 4);
  return;
}


// Reference entry 101baca0; body size 101 bytes.
#line 1 "ENTRY_101baca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_101baca0(char *param_1)

{
  undefined4 *_Dst;
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  
  pcVar3 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  _Size = (size_t)((int)pcVar3 - (int)(param_1 + 1));
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11), 0);
  *puVar2 = (undefined4)(1);
  _Dst = (undefined4 *)(puVar2 + 4);
  puVar2[3] = (undefined4)(_Size);
  puVar2[2] = (undefined4)(0);
  puVar2[1] = (undefined4)(0);
  if ((char *)(param_1) != (char *)(0x0)) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1*)((int)_Dst + _Size) = (undefined1)(0);
    return (undefined4 *)(_Dst);
  }
  *(undefined1*)_Dst = (undefined1)((undefined4 *)(0));
  *(undefined1*)((int)_Dst + _Size) = (undefined1)(0);
  return (undefined4 *)(_Dst);
}


// Reference entry 101baff0; body size 9 bytes.
#line 1 "ENTRY_101baff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101baff0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101bb000; body size 9 bytes.
#line 1 "ENTRY_101bb000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101bb000(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101bb390; body size 14 bytes.
#line 1 "ENTRY_101bb390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_101bb390(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 101bb4c0; body size 7 bytes.
#line 1 "ENTRY_101bb4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101bb4c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc0));
}


// Reference entry 101bb8b0; body size 5 bytes.
#line 1 "ENTRY_101bb8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_101bb8b0(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x72));
}


// Reference entry 101bba60; body size 6 bytes.
#line 1 "ENTRY_101bba60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101bba60(void)

{
  return (undefined4)(DAT_121a10c8);
}


// Reference entry 101bbad0; body size 6 bytes.
#line 1 "ENTRY_101bbad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101bbad0(void)

{
  return (char *)("SCIElapsedTimeMeasurement");
}


// Reference entry 101bbae0; body size 6 bytes.
#line 1 "ENTRY_101bbae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101bbae0(void)

{
  return (char *)("SCIOp");
}


// Reference entry 101bbaf0; body size 7 bytes.
#line 1 "ENTRY_101bbaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101bbaf0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101bbb00; body size 7 bytes.
#line 1 "ENTRY_101bbb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101bbb00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101bbb20; body size 8 bytes.
#line 1 "ENTRY_101bbb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101bbb20(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 101bbb30; body size 8 bytes.
#line 1 "ENTRY_101bbb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101bbb30(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) != 0);
}


// Reference entry 101bbc10; body size 8 bytes.
#line 1 "ENTRY_101bbc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101bbc10(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return;
}


// Reference entry 101bbed0; body size 3 bytes.
#line 1 "ENTRY_101bbed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101bbed0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101bbee0; body size 3 bytes.
#line 1 "ENTRY_101bbee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101bbee0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101bc1b0; body size 28 bytes.
#line 1 "ENTRY_101bc1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101bc1b0(undefined4 *param_1)

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


// Reference entry 101bc1e0; body size 28 bytes.
#line 1 "ENTRY_101bc1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101bc1e0(undefined4 *param_1)

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


// Reference entry 101bc210; body size 28 bytes.
#line 1 "ENTRY_101bc210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101bc210(undefined4 *param_1)

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


// Reference entry 101bc240; body size 28 bytes.
#line 1 "ENTRY_101bc240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101bc240(undefined4 *param_1)

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


// Reference entry 101bc270; body size 28 bytes.
#line 1 "ENTRY_101bc270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101bc270(undefined4 *param_1)

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


// Reference entry 101bc2a0; body size 28 bytes.
#line 1 "ENTRY_101bc2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101bc2a0(undefined4 *param_1)

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


// Reference entry 101bc300; body size 33 bytes.
#line 1 "ENTRY_101bc300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101bc300(int *param_1)

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
  return;
}


// Reference entry 101bc410; body size 7 bytes.
#line 1 "ENTRY_101bc410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101bc410(int param_1)

{
  return (int)(param_1 + 0x489);
}


// Reference entry 101bc4a0; body size 22 bytes.
#line 1 "ENTRY_101bc4a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101bc4a0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101bc4c0; body size 27 bytes.
#line 1 "ENTRY_101bc4c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101bc4c0(undefined4 param_2,SCStr *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->op_ctor(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101bc570; body size 25 bytes.
#line 1 "ENTRY_101bc570"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101bc570(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101bc590; body size 26 bytes.
#line 1 "ENTRY_101bc590"

int * __thiscall Recovered_Bulk::m_FUN_101bc590(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101bc5b0; body size 3 bytes.
#line 1 "ENTRY_101bc5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101bc5b0(void)

{
  return;
}


// Reference entry 101bc5c0; body size 23 bytes.
#line 1 "ENTRY_101bc5c0"

void __thiscall Recovered_Bulk::m_FUN_101bc5c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(*(SCStr **)(param_1 + 4)))->op_ctor(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 101bc780; body size 7 bytes.
#line 1 "ENTRY_101bc780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101bc780(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101bc790; body size 154 bytes.
#line 1 "ENTRY_101bc790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101bc790(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 2);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 4 + param_1);
    thunk_FUN_101bcc60(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    thunk_FUN_101bcc60(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -4);
    thunk_FUN_101bcc60(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    thunk_FUN_101bcc60(iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_101bcc60(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 101bcde0; body size 64 bytes.
#line 1 "ENTRY_101bcde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_101bcde0(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  if ((SCStr *)(param_1) == (SCStr *)(param_2)) {
    return (SCStr *)(param_3);
  }
  do {
    if ((SCStr *)(param_1) != (SCStr *)(param_3)) {
      ((SCStr *)(param_3))->int_release();
      *(undefined4*)param_3 = (undefined4)((SCStr *)(*(undefined4 *)param_1));
      ((SCStr *)(param_3))->int_addref();
    }
    param_1 = (SCStr *)(param_1 + 4);
    param_3 = (SCStr *)(param_3 + 4);
  } while ((SCStr *)(param_1) != (SCStr *)(param_2));
  return (SCStr *)(param_3);
}


// Reference entry 101bce30; body size 8 bytes.
#line 1 "ENTRY_101bce30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101bce30(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 101bd580; body size 5 bytes.
#line 1 "ENTRY_101bd580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101bd580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101bd770; body size 64 bytes.
#line 1 "ENTRY_101bd770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101bd770(SCStr *param_1,int param_2,SCStr *param_3,undefined4 param_4,undefined4 param_5)

{
  if ((SCStr *)(param_1) != (SCStr *)(param_3)) {
    ((SCStr *)(param_3))->int_release();
    *(undefined4*)param_3 = (undefined4)((SCStr *)(*(undefined4 *)param_1));
    ((SCStr *)(param_3))->int_addref();
  }
  thunk_FUN_101bd590(param_1,0,param_2 - (int)param_1 >> 2,param_4,param_5);
  return;
}


// Reference entry 101bd880; body size 8 bytes.
#line 1 "ENTRY_101bd880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101bd880(int param_1)

{
  return (int)(param_1 + -4);
}


// Reference entry 101bdc30; body size 5 bytes.
#line 1 "ENTRY_101bdc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101bdc30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101bdd80; body size 40 bytes.
#line 1 "ENTRY_101bdd80"

void __thiscall Recovered_Bulk::m_FUN_101bdd80(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4), 0);
  if ((SCStr *)(this_) != *(SCStr **)(param_1 + 8)) {
    ((SCStr *)(this_))->op_ctor(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_101bc5e0(this_,param_2);
  return;
}


// Reference entry 101bddc0; body size 5 bytes.
#line 1 "ENTRY_101bddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101bddc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101bddd0; body size 6 bytes.
#line 1 "ENTRY_101bddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101bddd0(void)

{
  return (char *)("SCIStringArray");
}


// Reference entry 101bde90; body size 31 bytes.
#line 1 "ENTRY_101bde90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101bde90(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_101bda70(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return;
}


// Reference entry 101bdf70; body size 27 bytes.
#line 1 "ENTRY_101bdf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101bdf70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101bdfc0; body size 11 bytes.
#line 1 "ENTRY_101bdfc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101bdfc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101bdfd0; body size 11 bytes.
#line 1 "ENTRY_101bdfd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101bdfd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101bdfe0; body size 9 bytes.
#line 1 "ENTRY_101bdfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101bdfe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStringArray);
  return (undefined4 *)(param_1);
}


// Reference entry 101bdff0; body size 54 bytes.
#line 1 "ENTRY_101bdff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101bdff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringArray);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101be040; body size 19 bytes.
#line 1 "ENTRY_101be040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101be040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101be1a0; body size 7 bytes.
#line 1 "ENTRY_101be1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101be1a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101be1f0; body size 12 bytes.
#line 1 "ENTRY_101be1f0"

int __thiscall Recovered_Bulk::m_FUN_101be1f0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 101be200; body size 12 bytes.
#line 1 "ENTRY_101be200"

int __thiscall Recovered_Bulk::m_FUN_101be200(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 101be230; body size 3 bytes.
#line 1 "ENTRY_101be230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101be230(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101be240; body size 3 bytes.
#line 1 "ENTRY_101be240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101be240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101be250; body size 18 bytes.
#line 1 "ENTRY_101be250"

void __thiscall Recovered_Bulk::m_FUN_101be250(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 4);
  return;
}


// Reference entry 101be270; body size 14 bytes.
#line 1 "ENTRY_101be270"

int * __thiscall Recovered_Bulk::m_FUN_101be270(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (int *)(param_1);
}


// Reference entry 101be290; body size 14 bytes.
#line 1 "ENTRY_101be290"

int * __thiscall Recovered_Bulk::m_FUN_101be290(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (int *)(param_1);
}


// Reference entry 101be380; body size 13 bytes.
#line 1 "ENTRY_101be380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101be380(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101be390; body size 3 bytes.
#line 1 "ENTRY_101be390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101be390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101be3a0; body size 3 bytes.
#line 1 "ENTRY_101be3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101be3a0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 101be450; body size 11 bytes.
#line 1 "ENTRY_101be450"

void __thiscall Recovered_Bulk::m_FUN_101be450(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101be880; body size 9 bytes.
#line 1 "ENTRY_101be880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101be880(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101be890; body size 9 bytes.
#line 1 "ENTRY_101be890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101be890(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 101be8a0; body size 12 bytes.
#line 1 "ENTRY_101be8a0"

void __thiscall Recovered_Bulk::m_FUN_101be8a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101bee00; body size 6 bytes.
#line 1 "ENTRY_101bee00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101bee00(void)

{
  return (char *)("SCIStringArray");
}


// Reference entry 101bef30; body size 3 bytes.
#line 1 "ENTRY_101bef30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101bef30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101bf0a0; body size 28 bytes.
#line 1 "ENTRY_101bf0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101bf0a0(undefined4 *param_1)

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


// Reference entry 101bf1a0; body size 9 bytes.
#line 1 "ENTRY_101bf1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101bf1a0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 101bf460; body size 7 bytes.
#line 1 "ENTRY_101bf460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101bf460(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101bf470; body size 3 bytes.
#line 1 "ENTRY_101bf470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101bf470(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c33a0; body size 5 bytes.
#line 1 "ENTRY_101c33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c33a0(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 0x58))();
  return;
}


// Reference entry 101c3630; body size 9 bytes.
#line 1 "ENTRY_101c3630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c3630(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101c3640; body size 11 bytes.
#line 1 "ENTRY_101c3640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c3640(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 200) + 100))();
  return;
}


// Reference entry 101c3650; body size 4 bytes.
#line 1 "ENTRY_101c3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101c3650(int param_1)

{
  return (int)(param_1 + 0x18);
}


// Reference entry 101c3660; body size 28 bytes.
#line 1 "ENTRY_101c3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c3660(undefined4 *param_1)

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


// Reference entry 101c3690; body size 8 bytes.
#line 1 "ENTRY_101c3690"

int * __thiscall Recovered_Bulk::m_FUN_101c3690(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x28));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 101c36a0; body size 68 bytes.
#line 1 "ENTRY_101c36a0"

int * __thiscall Recovered_Bulk::m_FUN_101c36a0(undefined4 param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  param_1[3] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101c3700; body size 25 bytes.
#line 1 "ENTRY_101c3700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c3700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c3720; body size 22 bytes.
#line 1 "ENTRY_101c3720"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c3720(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101c3800; body size 18 bytes.
#line 1 "ENTRY_101c3800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c3800(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c3820; body size 25 bytes.
#line 1 "ENTRY_101c3820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c3820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c3840; body size 25 bytes.
#line 1 "ENTRY_101c3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c3840(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c3860; body size 13 bytes.
#line 1 "ENTRY_101c3860"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c3860(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101c3870; body size 22 bytes.
#line 1 "ENTRY_101c3870"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c3870(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101c3890; body size 5 bytes.
#line 1 "ENTRY_101c3890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c3890(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c38a0; body size 5 bytes.
#line 1 "ENTRY_101c38a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c38a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c38b0; body size 5 bytes.
#line 1 "ENTRY_101c38b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c38b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c38c0; body size 11 bytes.
#line 1 "ENTRY_101c38c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c38c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101c38d0; body size 13 bytes.
#line 1 "ENTRY_101c38d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c38d0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 101c38e0; body size 70 bytes.
#line 1 "ENTRY_101c38e0"

int * __thiscall Recovered_Bulk::m_FUN_101c38e0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  param_1[3] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101c3a40; body size 26 bytes.
#line 1 "ENTRY_101c3a40"

int * __thiscall Recovered_Bulk::m_FUN_101c3a40(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101c3a60; body size 26 bytes.
#line 1 "ENTRY_101c3a60"

int * __thiscall Recovered_Bulk::m_FUN_101c3a60(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101c3a80; body size 25 bytes.
#line 1 "ENTRY_101c3a80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c3a80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101c3aa0; body size 26 bytes.
#line 1 "ENTRY_101c3aa0"

int * __thiscall Recovered_Bulk::m_FUN_101c3aa0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101c3ac0; body size 43 bytes.
#line 1 "ENTRY_101c3ac0"

int * __thiscall Recovered_Bulk::m_FUN_101c3ac0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101c3b80; body size 26 bytes.
#line 1 "ENTRY_101c3b80"

int * __thiscall Recovered_Bulk::m_FUN_101c3b80(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101c3ba0; body size 26 bytes.
#line 1 "ENTRY_101c3ba0"

int * __thiscall Recovered_Bulk::m_FUN_101c3ba0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101c3bc0; body size 91 bytes.
#line 1 "ENTRY_101c3bc0"

int * __thiscall Recovered_Bulk::m_FUN_101c3bc0(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101c3d80; body size 11 bytes.
#line 1 "ENTRY_101c3d80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c3d80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101c3d90; body size 11 bytes.
#line 1 "ENTRY_101c3d90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c3d90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101c40d0; body size 83 bytes.
#line 1 "ENTRY_101c40d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c40d0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = (byte *)(&DAT_1186d2ee);
  if ((byte *)*param_2 != (byte *)((0x0))) {
    pbVar3 = (byte *)((byte *)*param_2);
  }
  pbVar2 = (byte *)(&DAT_1186d2ee);
  if ((byte *)*param_1 != (byte *)((0x0))) {
    pbVar2 = (byte *)((byte *)*param_1);
  }
  while( true ) {
    bVar1 = (byte)(*pbVar2);
    bVar4 = (bool)((byte)(bVar1) < *pbVar3);
    if ((byte)(bVar1) != *pbVar3) break;
    if (bVar1 == 0) {
      return (undefined4)(0);
    }
    bVar1 = (byte)(pbVar2[1]);
    bVar4 = (bool)((byte)((bVar1)) < pbVar3[1]);
    if ((byte)((bVar1)) != pbVar3[1]) break;
    pbVar2 = (byte *)(pbVar2 + 2);
    pbVar3 = (byte *)(pbVar3 + 2);
    if (bVar1 == 0) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(((uint)((int3)(-(uint)bVar4 >> 8)) << 8 | (uint)((-(uint)bVar4 | 1) != 0)));
}


// Reference entry 101c4290; body size 3 bytes.
#line 1 "ENTRY_101c4290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c4290(void)

{
  return;
}


// Reference entry 101c42a0; body size 13 bytes.
#line 1 "ENTRY_101c42a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c42a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101c42b0; body size 13 bytes.
#line 1 "ENTRY_101c42b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c42b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101c42c0; body size 13 bytes.
#line 1 "ENTRY_101c42c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c42c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101c42d0; body size 3 bytes.
#line 1 "ENTRY_101c42d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c42d0(void)

{
  return;
}


// Reference entry 101c42e0; body size 3 bytes.
#line 1 "ENTRY_101c42e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c42e0(void)

{
  return;
}


// Reference entry 101c4390; body size 39 bytes.
#line 1 "ENTRY_101c4390"

void __thiscall Recovered_Bulk::m_FUN_101c4390(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 101c43c0; body size 18 bytes.
#line 1 "ENTRY_101c43c0"

void __thiscall Recovered_Bulk::m_FUN_101c43c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 101c43e0; body size 39 bytes.
#line 1 "ENTRY_101c43e0"

void __thiscall Recovered_Bulk::m_FUN_101c43e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 101c4410; body size 39 bytes.
#line 1 "ENTRY_101c4410"

void __thiscall Recovered_Bulk::m_FUN_101c4410(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 101c4900; body size 15 bytes.
#line 1 "ENTRY_101c4900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c4900(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 101c49e0; body size 19 bytes.
#line 1 "ENTRY_101c49e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101c49e0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x20000000) {
    return (int)(param_1 << 3);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException((uint)&auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 101c4a00; body size 22 bytes.
#line 1 "ENTRY_101c4a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101c4a00(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0xaaaaaab) {
    return (int)(param_1 * 0x18);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException((uint)&auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 101c4a20; body size 7 bytes.
#line 1 "ENTRY_101c4a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4a20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c4a30; body size 7 bytes.
#line 1 "ENTRY_101c4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4a30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c4a40; body size 43 bytes.
#line 1 "ENTRY_101c4a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_101c4a40(int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(0);
  uVar3 = (uint)(0x811c9dc5);
  if (param_2 != 0) {
    do {
      pbVar1 = (byte *)((byte *)(uVar2 + param_1));
      uVar2 = (uint)(uVar2 + 1);
      uVar3 = (uint)((*pbVar1 ^ uVar3) * 0x1000193);
    } while (uVar2 < param_2);
  }
  return (uint)(uVar3);
}


// Reference entry 101c4a80; body size 5 bytes.
#line 1 "ENTRY_101c4a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c4d10; body size 7 bytes.
#line 1 "ENTRY_101c4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4d10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c4d20; body size 5 bytes.
#line 1 "ENTRY_101c4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c4e70; body size 5 bytes.
#line 1 "ENTRY_101c4e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c4e80; body size 5 bytes.
#line 1 "ENTRY_101c4e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c4e90; body size 5 bytes.
#line 1 "ENTRY_101c4e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c4ea0; body size 5 bytes.
#line 1 "ENTRY_101c4ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c4eb0; body size 5 bytes.
#line 1 "ENTRY_101c4eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c4ec0; body size 5 bytes.
#line 1 "ENTRY_101c4ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c4ed0; body size 5 bytes.
#line 1 "ENTRY_101c4ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c4ed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c4f50; body size 62 bytes.
#line 1 "ENTRY_101c4f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c4f50(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_4);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_2[1] = (int)(0);
  param_2[2] = (int)(0);
  param_2[3] = (int)(0);
  return;
}


// Reference entry 101c4fa0; body size 28 bytes.
#line 1 "ENTRY_101c4fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c4fa0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101c4fd0; body size 28 bytes.
#line 1 "ENTRY_101c4fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c4fd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101c5170; body size 15 bytes.
#line 1 "ENTRY_101c5170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c5170(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101c5260; body size 5 bytes.
#line 1 "ENTRY_101c5260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c5260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c5270; body size 5 bytes.
#line 1 "ENTRY_101c5270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c5270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c5280; body size 5 bytes.
#line 1 "ENTRY_101c5280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c5280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c5290; body size 5 bytes.
#line 1 "ENTRY_101c5290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c5290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c52a0; body size 5 bytes.
#line 1 "ENTRY_101c52a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c52a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c52b0; body size 5 bytes.
#line 1 "ENTRY_101c52b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c52b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c52c0; body size 5 bytes.
#line 1 "ENTRY_101c52c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c52c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c52d0; body size 5 bytes.
#line 1 "ENTRY_101c52d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c52d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c52e0; body size 5 bytes.
#line 1 "ENTRY_101c52e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c52e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c52f0; body size 5 bytes.
#line 1 "ENTRY_101c52f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c52f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c5300; body size 5 bytes.
#line 1 "ENTRY_101c5300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c5300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c5310; body size 5 bytes.
#line 1 "ENTRY_101c5310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c5310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c5320; body size 11 bytes.
#line 1 "ENTRY_101c5320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c5320(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101c5330; body size 6 bytes.
#line 1 "ENTRY_101c5330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101c5330(void)

{
  return (char *)("SCIAction");
}


// Reference entry 101c5340; body size 6 bytes.
#line 1 "ENTRY_101c5340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101c5340(void)

{
  return (char *)("SCIActionDescriptor");
}


// Reference entry 101c5350; body size 6 bytes.
#line 1 "ENTRY_101c5350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101c5350(void)

{
  return (char *)("SCIActionFilter");
}


// Reference entry 101c5360; body size 6 bytes.
#line 1 "ENTRY_101c5360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101c5360(void)

{
  return (char *)("SCIActionFilterer");
}


// Reference entry 101c5370; body size 5 bytes.
#line 1 "ENTRY_101c5370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c5370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c5380; body size 5 bytes.
#line 1 "ENTRY_101c5380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c5380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c5390; body size 5 bytes.
#line 1 "ENTRY_101c5390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c5390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c53a0; body size 30 bytes.
#line 1 "ENTRY_101c53a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c53a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 101c54a0; body size 27 bytes.
#line 1 "ENTRY_101c54a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c54a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101c54d0; body size 27 bytes.
#line 1 "ENTRY_101c54d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c54d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5500; body size 27 bytes.
#line 1 "ENTRY_101c5500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5530; body size 16 bytes.
#line 1 "ENTRY_101c5530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5530(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5550; body size 32 bytes.
#line 1 "ENTRY_101c5550"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c5550(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c5580; body size 16 bytes.
#line 1 "ENTRY_101c5580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5580(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c55a0; body size 16 bytes.
#line 1 "ENTRY_101c55a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c55a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5600; body size 16 bytes.
#line 1 "ENTRY_101c5600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5620; body size 16 bytes.
#line 1 "ENTRY_101c5620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5620(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c56a0; body size 18 bytes.
#line 1 "ENTRY_101c56a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c56a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5790; body size 11 bytes.
#line 1 "ENTRY_101c5790"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c5790(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101c57a0; body size 11 bytes.
#line 1 "ENTRY_101c57a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c57a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101c57b0; body size 11 bytes.
#line 1 "ENTRY_101c57b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c57b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101c57c0; body size 11 bytes.
#line 1 "ENTRY_101c57c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c57c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101c57d0; body size 16 bytes.
#line 1 "ENTRY_101c57d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c57d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c57f0; body size 9 bytes.
#line 1 "ENTRY_101c57f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c57f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5800; body size 13 bytes.
#line 1 "ENTRY_101c5800"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c5800(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5810; body size 14 bytes.
#line 1 "ENTRY_101c5810"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c5810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5830; body size 21 bytes.
#line 1 "ENTRY_101c5830"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c5830(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5850; body size 23 bytes.
#line 1 "ENTRY_101c5850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5850(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5870; body size 23 bytes.
#line 1 "ENTRY_101c5870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5870(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5890; body size 3 bytes.
#line 1 "ENTRY_101c5890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c5890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c58a0; body size 3 bytes.
#line 1 "ENTRY_101c58a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c58a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c58e0; body size 13 bytes.
#line 1 "ENTRY_101c58e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c58e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101c58f0; body size 5 bytes.
#line 1 "ENTRY_101c58f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c58f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c59d0; body size 23 bytes.
#line 1 "ENTRY_101c59d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c59d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5ad0; body size 33 bytes.
#line 1 "ENTRY_101c5ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCActionFilterer);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5b00; body size 33 bytes.
#line 1 "ENTRY_101c5b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5b00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAllActionsFilter);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5be0; body size 24 bytes.
#line 1 "ENTRY_101c5be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5be0(undefined4 *param_1)

{
  thunk_FUN_101c5c00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContextMenuActionsFilter);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5dc0; body size 112 bytes.
#line 1 "ENTRY_101c5dc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c5dc0(undefined4 param_2,undefined4 param_3,undefined1 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFetchTokenOpActionWrapper);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCFetchTokenOpActionWrapper);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(param_2);
  param_1[10] = (undefined4)(param_3);
  *(undefined1*)(param_1 + 0xb) = (undefined1)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5e50; body size 9 bytes.
#line 1 "ENTRY_101c5e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5e50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionFilterer);
  return (undefined4 *)(param_1);
}


// Reference entry 101c5e60; body size 28 bytes.
#line 1 "ENTRY_101c5e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c5e60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101c6330; body size 11 bytes.
#line 1 "ENTRY_101c6330"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101c6330(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101c6390; body size 19 bytes.
#line 1 "ENTRY_101c6390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c6390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101c69d0; body size 3 bytes.
#line 1 "ENTRY_101c69d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c69d0(void)

{
  return;
}


// Reference entry 101c6ad0; body size 5 bytes.
#line 1 "ENTRY_101c6ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c6ad0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  uVar3 = (uint)(*(int *)(param_1 + 0x10) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  puVar4 = (undefined4 *)((undefined4 *)(param_1 + 4));
  thunk_FUN_101c4810(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x18);
  return;
}


// Reference entry 101c6bf0; body size 19 bytes.
#line 1 "ENTRY_101c6bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c6bf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101c6c10; body size 19 bytes.
#line 1 "ENTRY_101c6c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c6c10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101c6f90; body size 7 bytes.
#line 1 "ENTRY_101c6f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c6f90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101c73c0; body size 14 bytes.
#line 1 "ENTRY_101c73c0"

bool __thiscall Recovered_Bulk::m_FUN_101c73c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101c73e0; body size 14 bytes.
#line 1 "ENTRY_101c73e0"

bool __thiscall Recovered_Bulk::m_FUN_101c73e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101c7400; body size 14 bytes.
#line 1 "ENTRY_101c7400"

bool __thiscall Recovered_Bulk::m_FUN_101c7400(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101c7420; body size 14 bytes.
#line 1 "ENTRY_101c7420"

bool __thiscall Recovered_Bulk::m_FUN_101c7420(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101c7470; body size 12 bytes.
#line 1 "ENTRY_101c7470"

int __thiscall Recovered_Bulk::m_FUN_101c7470(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 101c7480; body size 3 bytes.
#line 1 "ENTRY_101c7480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c7480(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c7490; body size 3 bytes.
#line 1 "ENTRY_101c7490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c7490(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c74a0; body size 3 bytes.
#line 1 "ENTRY_101c74a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c74a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c74b0; body size 3 bytes.
#line 1 "ENTRY_101c74b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c74b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c74c0; body size 7 bytes.
#line 1 "ENTRY_101c74c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101c74c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101c74d0; body size 3 bytes.
#line 1 "ENTRY_101c74d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c74d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c74e0; body size 7 bytes.
#line 1 "ENTRY_101c74e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101c74e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101c74f0; body size 3 bytes.
#line 1 "ENTRY_101c74f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c74f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c7500; body size 7 bytes.
#line 1 "ENTRY_101c7500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101c7500(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101c7510; body size 7 bytes.
#line 1 "ENTRY_101c7510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101c7510(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101c7520; body size 3 bytes.
#line 1 "ENTRY_101c7520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c7520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c7530; body size 3 bytes.
#line 1 "ENTRY_101c7530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c7530(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c7540; body size 3 bytes.
#line 1 "ENTRY_101c7540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c7540(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c7550; body size 3 bytes.
#line 1 "ENTRY_101c7550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c7550(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c7560; body size 3 bytes.
#line 1 "ENTRY_101c7560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c7560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101c7570; body size 6 bytes.
#line 1 "ENTRY_101c7570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101c7570(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 101c7580; body size 6 bytes.
#line 1 "ENTRY_101c7580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101c7580(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 101c7590; body size 6 bytes.
#line 1 "ENTRY_101c7590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101c7590(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 101c75a0; body size 6 bytes.
#line 1 "ENTRY_101c75a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101c75a0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 101c75b0; body size 6 bytes.
#line 1 "ENTRY_101c75b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101c75b0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 101c75c0; body size 9 bytes.
#line 1 "ENTRY_101c75c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c75c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 101c75d0; body size 9 bytes.
#line 1 "ENTRY_101c75d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101c75d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 101c75e0; body size 10 bytes.
#line 1 "ENTRY_101c75e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_101c75e0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 101c7700; body size 83 bytes.
#line 1 "ENTRY_101c7700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c7700(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = (byte *)(&DAT_1186d2ee);
  if ((byte *)*param_2 != (byte *)((0x0))) {
    pbVar3 = (byte *)((byte *)*param_2);
  }
  pbVar2 = (byte *)(&DAT_1186d2ee);
  if ((byte *)*param_1 != (byte *)((0x0))) {
    pbVar2 = (byte *)((byte *)*param_1);
  }
  while( true ) {
    bVar1 = (byte)(*pbVar2);
    bVar4 = (bool)((byte)(bVar1) < *pbVar3);
    if ((byte)(bVar1) != *pbVar3) break;
    if (bVar1 == 0) {
      return (undefined4)(1);
    }
    bVar1 = (byte)(pbVar2[1]);
    bVar4 = (bool)((byte)((bVar1)) < pbVar3[1]);
    if ((byte)((bVar1)) != pbVar3[1]) break;
    pbVar2 = (byte *)(pbVar2 + 2);
    pbVar3 = (byte *)(pbVar3 + 2);
    if (bVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(((uint)((int3)(-(uint)bVar4 >> 8)) << 8 | (uint)((-(uint)bVar4 | 1) == 0)));
}


// Reference entry 101c7770; body size 56 bytes.
#line 1 "ENTRY_101c7770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_101c7770(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar4 = (undefined4 *)((undefined4 *)*param_1);
  }
  uVar2 = (uint)(0);
  uVar3 = (uint)(0x811c9dc5);
  if (param_1[4] != 0) {
    do {
      pbVar1 = (byte *)((byte *)(uVar2 + (int)puVar4));
      uVar2 = (uint)(uVar2 + 1);
      uVar3 = (uint)((*pbVar1 ^ uVar3) * 0x1000193);
    } while (uVar2 < (uint)param_1[4]);
  }
  return (uint)(uVar3);
}


// Reference entry 101c8290; body size 55 bytes.
#line 1 "ENTRY_101c8290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101c8290(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  
  while( true ) {
    bVar1 = (byte)(*param_1);
    bVar2 = (bool)((byte)(bVar1) < *param_2);
    if ((byte)(bVar1) != *param_2) break;
    if (bVar1 == 0) {
      return (undefined4)(1);
    }
    bVar1 = (byte)(param_1[1]);
    bVar2 = (bool)((byte)((bVar1)) < param_2[1]);
    if ((byte)((bVar1)) != param_2[1]) break;
    param_1 = (byte *)(param_1 + 2);
    param_2 = (byte *)(param_2 + 2);
    if (bVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(((uint)((int3)(-(uint)bVar2 >> 8)) << 8 | (uint)((-(uint)bVar2 | 1) == 0)));
}


// Reference entry 101c83d0; body size 22 bytes.
#line 1 "ENTRY_101c83d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c83d0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 101c8530; body size 49 bytes.
#line 1 "ENTRY_101c8530"

uint __thiscall Recovered_Bulk::m_FUN_101c8530(uint param_2)
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


// Reference entry 101c8600; body size 20 bytes.
#line 1 "ENTRY_101c8600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c8600(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 101c8620; body size 66 bytes.
#line 1 "ENTRY_101c8620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101c8620(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 101c8750; body size 48 bytes.
#line 1 "ENTRY_101c8750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_101c8750(uint param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = (uint)(0);
  if (param_3 == 0) {
    return (uint)(param_1);
  }
  do {
    pbVar1 = (byte *)((byte *)(uVar2 + param_2));
    uVar2 = (uint)(uVar2 + 1);
    param_1 = (uint)((*pbVar1 ^ param_1) * 0x1000193);
  } while (uVar2 < param_3);
  return (uint)(param_1);
}


// Reference entry 101c8a30; body size 3 bytes.
#line 1 "ENTRY_101c8a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8a40; body size 3 bytes.
#line 1 "ENTRY_101c8a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8a50; body size 3 bytes.
#line 1 "ENTRY_101c8a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8a60; body size 3 bytes.
#line 1 "ENTRY_101c8a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8a70; body size 3 bytes.
#line 1 "ENTRY_101c8a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8a80; body size 3 bytes.
#line 1 "ENTRY_101c8a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8a90; body size 3 bytes.
#line 1 "ENTRY_101c8a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8aa0; body size 3 bytes.
#line 1 "ENTRY_101c8aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8ab0; body size 3 bytes.
#line 1 "ENTRY_101c8ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8ac0; body size 3 bytes.
#line 1 "ENTRY_101c8ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8ac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8ad0; body size 3 bytes.
#line 1 "ENTRY_101c8ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8ae0; body size 3 bytes.
#line 1 "ENTRY_101c8ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8af0; body size 3 bytes.
#line 1 "ENTRY_101c8af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8b00; body size 3 bytes.
#line 1 "ENTRY_101c8b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8b10; body size 92 bytes.
#line 1 "ENTRY_101c8b10"

int * __thiscall Recovered_Bulk::m_FUN_101c8b10(uint param_2,int param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_3 + 4), 0);
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + 1);
  *param_4 = (int)(param_3);
  param_4[1] = (int)((int)puVar2);
  *puVar2 = (undefined4)(param_4);
  *(int**)(param_3 + 4) = (int *)(param_4);
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_2) * 8));
  if ((int)(*piVar1) == *(int *)(param_1 + 4)) {
    *piVar1 = (int)((int)param_4);
    piVar1[1] = (int)((int)param_4);
    return (int *)(param_4);
  }
  if (*piVar1 == (int)((param_3))) {
    *piVar1 = (int)((int)param_4);
    return (int *)(param_4);
  }
  if ((undefined4 *)piVar1[1] == (undefined4 *)((puVar2))) {
    piVar1[1] = (int)((int)param_4);
  }
  return (int *)(param_4);
}


// Reference entry 101c8b90; body size 13 bytes.
#line 1 "ENTRY_101c8b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101c8b90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101c8ba0; body size 3 bytes.
#line 1 "ENTRY_101c8ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8bb0; body size 3 bytes.
#line 1 "ENTRY_101c8bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101c8c30; body size 3 bytes.
#line 1 "ENTRY_101c8c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c8c30(void)

{
  return;
}


// Reference entry 101c8c40; body size 3 bytes.
#line 1 "ENTRY_101c8c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101c8c40(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 101c8d00; body size 11 bytes.
#line 1 "ENTRY_101c8d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c8d00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101c8d10; body size 6 bytes.
#line 1 "ENTRY_101c8d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c8d10(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 101c8d20; body size 6 bytes.
#line 1 "ENTRY_101c8d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c8d20(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 101c9020; body size 14 bytes.
#line 1 "ENTRY_101c9020"

void __thiscall Recovered_Bulk::m_FUN_101c9020(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 101c9040; body size 13 bytes.
#line 1 "ENTRY_101c9040"

void __thiscall Recovered_Bulk::m_FUN_101c9040(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 101c9050; body size 12 bytes.
#line 1 "ENTRY_101c9050"

void __thiscall Recovered_Bulk::m_FUN_101c9050(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101c9060; body size 11 bytes.
#line 1 "ENTRY_101c9060"

void __thiscall Recovered_Bulk::m_FUN_101c9060(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101c9070; body size 43 bytes.
#line 1 "ENTRY_101c9070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101c9070(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)(*(int **)(param_2 + 4), 0);
  *piVar1 = (int)(param_3);
  piVar2 = (int *)(*(int **)(param_3 + 4), 0);
  *piVar2 = (int)(param_1);
  piVar3 = (int *)(*(int **)(param_1 + 4), 0);
  *piVar3 = (int)(param_2);
  *(int**)(param_1 + 4) = (int *)(piVar2);
  *(int**)(param_3 + 4) = (int *)(piVar1);
  *(int**)(param_2 + 4) = (int *)(piVar3);
  return;
}


// Reference entry 101c9960; body size 90 bytes.
#line 1 "ENTRY_101c9960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101c9960(uint param_1)

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


// Reference entry 101c99e0; body size 87 bytes.
#line 1 "ENTRY_101c99e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101c99e0(uint param_1)

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


// Reference entry 101c9a50; body size 87 bytes.
#line 1 "ENTRY_101c9a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101c9a50(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
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


// Reference entry 101c9ac0; body size 19 bytes.
#line 1 "ENTRY_101c9ac0"

uint __thiscall Recovered_Bulk::m_FUN_101c9ac0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_101c3fc0(param_2), 0);
  return (uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 101c9ae0; body size 4 bytes.
#line 1 "ENTRY_101c9ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101c9ae0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 101c9b20; body size 9 bytes.
#line 1 "ENTRY_101c9b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101c9b20(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 101c9b30; body size 68 bytes.
#line 1 "ENTRY_101c9b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101c9b30(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_101c4810(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_101c5190(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 101ca7c0; body size 57 bytes.
#line 1 "ENTRY_101ca7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ca7c0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 101ca810; body size 60 bytes.
#line 1 "ENTRY_101ca810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101ca810(int param_1,int param_2)

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


// Reference entry 101ca8b0; body size 61 bytes.
#line 1 "ENTRY_101ca8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101ca8b0(int param_1,int param_2)

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


// Reference entry 101ca900; body size 16 bytes.
#line 1 "ENTRY_101ca900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ca900(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101ca920; body size 16 bytes.
#line 1 "ENTRY_101ca920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ca920(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101ca940; body size 9 bytes.
#line 1 "ENTRY_101ca940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ca940(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101ca9a0; body size 12 bytes.
#line 1 "ENTRY_101ca9a0"

void __thiscall Recovered_Bulk::m_FUN_101ca9a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101ca9b0; body size 11 bytes.
#line 1 "ENTRY_101ca9b0"

void __thiscall Recovered_Bulk::m_FUN_101ca9b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101cb030; body size 6 bytes.
#line 1 "ENTRY_101cb030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101cb030(void)

{
  return (char *)("SCIAction");
}


// Reference entry 101cb040; body size 6 bytes.
#line 1 "ENTRY_101cb040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101cb040(void)

{
  return (char *)("SCIActionDescriptor");
}


// Reference entry 101cb050; body size 6 bytes.
#line 1 "ENTRY_101cb050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101cb050(void)

{
  return (char *)("SCIActionFilter");
}


// Reference entry 101cb060; body size 6 bytes.
#line 1 "ENTRY_101cb060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101cb060(void)

{
  return (char *)("SCIActionFilterer");
}


// Reference entry 101cb070; body size 3 bytes.
#line 1 "ENTRY_101cb070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_101cb070(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 101cb080; body size 6 bytes.
#line 1 "ENTRY_101cb080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cb080(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 101cb090; body size 6 bytes.
#line 1 "ENTRY_101cb090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cb090(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 101cb0a0; body size 6 bytes.
#line 1 "ENTRY_101cb0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cb0a0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101cb0b0; body size 6 bytes.
#line 1 "ENTRY_101cb0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cb0b0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 101cb0c0; body size 6 bytes.
#line 1 "ENTRY_101cb0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cb0c0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 101cb0d0; body size 6 bytes.
#line 1 "ENTRY_101cb0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cb0d0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 101cb0e0; body size 5 bytes.
#line 1 "ENTRY_101cb0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cb0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cb0f0; body size 3 bytes.
#line 1 "ENTRY_101cb0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101cb0f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101cb100; body size 3 bytes.
#line 1 "ENTRY_101cb100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101cb100(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101cb110; body size 3 bytes.
#line 1 "ENTRY_101cb110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101cb110(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101cb120; body size 3 bytes.
#line 1 "ENTRY_101cb120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101cb120(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101cb130; body size 3 bytes.
#line 1 "ENTRY_101cb130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101cb130(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101cb140; body size 3 bytes.
#line 1 "ENTRY_101cb140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101cb140(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101cb150; body size 3 bytes.
#line 1 "ENTRY_101cb150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101cb150(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101cb590; body size 28 bytes.
#line 1 "ENTRY_101cb590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101cb590(undefined4 *param_1)

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


// Reference entry 101cb5c0; body size 28 bytes.
#line 1 "ENTRY_101cb5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101cb5c0(undefined4 *param_1)

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


// Reference entry 101cb5f0; body size 28 bytes.
#line 1 "ENTRY_101cb5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101cb5f0(undefined4 *param_1)

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


// Reference entry 101cb620; body size 28 bytes.
#line 1 "ENTRY_101cb620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101cb620(undefined4 *param_1)

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


// Reference entry 101cb650; body size 28 bytes.
#line 1 "ENTRY_101cb650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101cb650(undefined4 *param_1)

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


// Reference entry 101cb680; body size 28 bytes.
#line 1 "ENTRY_101cb680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101cb680(undefined4 *param_1)

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


// Reference entry 101cb6b0; body size 28 bytes.
#line 1 "ENTRY_101cb6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101cb6b0(undefined4 *param_1)

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


// Reference entry 101cb6e0; body size 28 bytes.
#line 1 "ENTRY_101cb6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101cb6e0(undefined4 *param_1)

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


// Reference entry 101cb710; body size 20 bytes.
#line 1 "ENTRY_101cb710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101cb710(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 101cb730; body size 9 bytes.
#line 1 "ENTRY_101cb730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101cb730(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 101cb740; body size 9 bytes.
#line 1 "ENTRY_101cb740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101cb740(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 101cc260; body size 18 bytes.
#line 1 "ENTRY_101cc260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cc260(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc280; body size 18 bytes.
#line 1 "ENTRY_101cc280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cc280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc2a0; body size 18 bytes.
#line 1 "ENTRY_101cc2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cc2a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc2f0; body size 22 bytes.
#line 1 "ENTRY_101cc2f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cc2f0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc310; body size 22 bytes.
#line 1 "ENTRY_101cc310"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cc310(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc330; body size 27 bytes.
#line 1 "ENTRY_101cc330"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cc330(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  thunk_FUN_103d6a60(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc360; body size 11 bytes.
#line 1 "ENTRY_101cc360"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cc360(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc370; body size 11 bytes.
#line 1 "ENTRY_101cc370"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cc370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc380; body size 18 bytes.
#line 1 "ENTRY_101cc380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cc380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc3a0; body size 18 bytes.
#line 1 "ENTRY_101cc3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cc3a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc5f0; body size 22 bytes.
#line 1 "ENTRY_101cc5f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cc5f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc610; body size 11 bytes.
#line 1 "ENTRY_101cc610"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cc610(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc6a0; body size 106 bytes.
#line 1 "ENTRY_101cc6a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cc6a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1 + 2), 0);
      param_1[0xb] = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return (undefined4 *)(param_1);
      }
    }
    else {
      param_1[0xb] = (undefined4)(piVar1);
      param_2[9] = (int)(0);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cc840; body size 29 bytes.
#line 1 "ENTRY_101cc840"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cc840(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  thunk_FUN_103d6a60(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cc870; body size 91 bytes.
#line 1 "ENTRY_101cc870"

int * __thiscall Recovered_Bulk::m_FUN_101cc870(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101cc8f0; body size 26 bytes.
#line 1 "ENTRY_101cc8f0"

int * __thiscall Recovered_Bulk::m_FUN_101cc8f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101cc910; body size 43 bytes.
#line 1 "ENTRY_101cc910"

int * __thiscall Recovered_Bulk::m_FUN_101cc910(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101cca50; body size 42 bytes.
#line 1 "ENTRY_101cca50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cca50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if (param_2[1] != 0) {
    *param_1 = (undefined4)(*param_2);
    iVar2 = (int)(param_2[1]);
    param_1[1] = (undefined4)(iVar2);
    LOCK();
    piVar1 = (int *)((int *)(iVar2 + 8));
    *piVar1 = (int)(*piVar1 + 1);
    UNLOCK();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cca90; body size 26 bytes.
#line 1 "ENTRY_101cca90"

int * __thiscall Recovered_Bulk::m_FUN_101cca90(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101ccb30; body size 26 bytes.
#line 1 "ENTRY_101ccb30"

int * __thiscall Recovered_Bulk::m_FUN_101ccb30(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101ccbd0; body size 26 bytes.
#line 1 "ENTRY_101ccbd0"

int * __thiscall Recovered_Bulk::m_FUN_101ccbd0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101ccef0; body size 26 bytes.
#line 1 "ENTRY_101ccef0"

int * __thiscall Recovered_Bulk::m_FUN_101ccef0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101cd090; body size 43 bytes.
#line 1 "ENTRY_101cd090"

int * __thiscall Recovered_Bulk::m_FUN_101cd090(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101cd250; body size 26 bytes.
#line 1 "ENTRY_101cd250"

int * __thiscall Recovered_Bulk::m_FUN_101cd250(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101cd270; body size 25 bytes.
#line 1 "ENTRY_101cd270"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cd270(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101cd290; body size 26 bytes.
#line 1 "ENTRY_101cd290"

int * __thiscall Recovered_Bulk::m_FUN_101cd290(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101cd760; body size 83 bytes.
#line 1 "ENTRY_101cd760"

int * __thiscall Recovered_Bulk::m_FUN_101cd760(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)((int *)*param_1)) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
      param_1[1] = (int)((int)piVar1);
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 101cd840; body size 12 bytes.
#line 1 "ENTRY_101cd840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_101cd840(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 101cd850; body size 3 bytes.
#line 1 "ENTRY_101cd850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101cd850(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101cd860; body size 3 bytes.
#line 1 "ENTRY_101cd860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cd860(void)

{
  return;
}


// Reference entry 101cd870; body size 3 bytes.
#line 1 "ENTRY_101cd870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cd870(void)

{
  return;
}


// Reference entry 101cd880; body size 25 bytes.
#line 1 "ENTRY_101cd880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cd880(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 101cd8a0; body size 25 bytes.
#line 1 "ENTRY_101cd8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cd8a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 101cda40; body size 40 bytes.
#line 1 "ENTRY_101cda40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cda40(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 101cdae0; body size 13 bytes.
#line 1 "ENTRY_101cdae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cdae0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101cdaf0; body size 13 bytes.
#line 1 "ENTRY_101cdaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cdaf0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101cdb00; body size 13 bytes.
#line 1 "ENTRY_101cdb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cdb00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101cdb10; body size 13 bytes.
#line 1 "ENTRY_101cdb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cdb10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101cdb20; body size 13 bytes.
#line 1 "ENTRY_101cdb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cdb20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101cdb30; body size 9 bytes.
#line 1 "ENTRY_101cdb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_101cdb30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSource);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *(undefined1*)(param_1 + 6) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cdb40; body size 28 bytes.
#line 1 "ENTRY_101cdb40"

void __thiscall Recovered_Bulk::m_FUN_101cdb40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)((int *)(param_2[1] + 4));
    *piVar1 = (int)(*piVar1 + 1);
    UNLOCK();
  }
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  return;
}


// Reference entry 101cdb70; body size 55 bytes.
#line 1 "ENTRY_101cdb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cdb70(void *param_1,uint param_2)

{
  uint uVar1;
  
  if ((0xfff < param_2) &&
     (uVar1 = (uint)((int)param_1 + (-4 - (int)*(void **)((int)param_1 + -4)), 0),
     param_1 = (char *)(*(void **)((int)param_1 + -4), 0), 0x1f < uVar1)) {
                    
                    
                    
    _invalid_parameter_noinfo_noreturn();
    return;
  }
  free(param_1);
  return;
}


// Reference entry 101cdbc0; body size 3 bytes.
#line 1 "ENTRY_101cdbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cdbc0(void)

{
  return;
}


// Reference entry 101cdbd0; body size 3 bytes.
#line 1 "ENTRY_101cdbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cdbd0(void)

{
  return;
}


// Reference entry 101cdbe0; body size 3 bytes.
#line 1 "ENTRY_101cdbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cdbe0(void)

{
  return;
}


// Reference entry 101cdbf0; body size 11 bytes.
#line 1 "ENTRY_101cdbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cdbf0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}


// Reference entry 101cdcd0; body size 118 bytes.
#line 1 "ENTRY_101cdcd0"

void __thiscall Recovered_Bulk::m_FUN_101cdcd0(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)((undefined4 *)*param_1);
  puVar1 = (undefined4 *)((undefined4 *)puVar4[1]);
  puVar5 = (undefined4 *)(puVar4);
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar1);
    do {
      if ((uint)puVar2[4] < *param_3) {
        puVar3 = (undefined4 *)((undefined4 *)puVar2[2]);
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_3 < (uint)puVar2[4])) {
          puVar4 = (undefined4 *)(puVar2);
        }
        puVar3 = (undefined4 *)((undefined4 *)*puVar2);
        puVar5 = (undefined4 *)(puVar2);
      }
      puVar2 = (undefined4 *)(puVar3);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    puVar1 = (undefined4 *)((undefined4 *)*puVar4);
  }
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    do {
      if (*param_3 < (uint)puVar1[4]) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar1);
        puVar4 = (undefined4 *)(puVar1);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar1[2]);
      }
      puVar1 = (undefined4 *)(puVar2);
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  *param_2 = (int)((int)puVar5);
  param_2[1] = (int)((int)puVar4);
  return;
}


// Reference entry 101cdf30; body size 73 bytes.
#line 1 "ENTRY_101cdf30"

int * __thiscall Recovered_Bulk::m_FUN_101cdf30(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*param_1);
  puVar4 = (undefined4 *)(*(undefined4 **)(iVar1 + 4), 0);
  *param_2 = (int)((int)puVar4);
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar1);
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = (uint)(*param_3);
    do {
      *param_2 = (int)((int)puVar4);
      uVar3 = (uint)(puVar4[4]);
      if (uVar2 <= uVar3) {
        param_2[2] = (int)((int)puVar4);
        puVar4 = (undefined4 *)((undefined4 *)*puVar4);
      }
      else {
        puVar4 = (undefined4 *)((undefined4 *)puVar4[2]);
      }
      param_2[1] = (int)((uint)(uVar2 <= uVar3));
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 101ce050; body size 15 bytes.
#line 1 "ENTRY_101ce050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ce050(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 101ce070; body size 15 bytes.
#line 1 "ENTRY_101ce070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ce070(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 101ce090; body size 15 bytes.
#line 1 "ENTRY_101ce090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ce090(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 101ce1d0; body size 15 bytes.
#line 1 "ENTRY_101ce1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ce1d0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 101ce1f0; body size 19 bytes.
#line 1 "ENTRY_101ce1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101ce1f0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x10000000) {
    return (int)(param_1 << 4);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException((uint)&auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 101ce210; body size 29 bytes.
#line 1 "ENTRY_101ce210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101ce210(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x924924a) {
    return (int)(param_1 * 0x1c);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException((uint)&auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 101ce240; body size 22 bytes.
#line 1 "ENTRY_101ce240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101ce240(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x5555556) {
    return (int)(param_1 * 0x30);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException((uint)&auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 101ce260; body size 13 bytes.
#line 1 "ENTRY_101ce260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ce260(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101ce270; body size 5 bytes.
#line 1 "ENTRY_101ce270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce280; body size 13 bytes.
#line 1 "ENTRY_101ce280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ce280(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101ce3b0; body size 5 bytes.
#line 1 "ENTRY_101ce3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce3b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce3c0; body size 31 bytes.
#line 1 "ENTRY_101ce3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_101ce3c0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX))
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101ce3f0; body size 30 bytes.
#line 1 "ENTRY_101ce3f0"

void __thiscall Recovered_Bulk::m_FUN_101ce3f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 101ce420; body size 234 bytes.
#line 1 "ENTRY_101ce420"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ce420(uint param_2,undefined4 param_3,undefined1 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  size_t _Size;
  uint uVar1;
  void *_Src;
  uint uVar2;
  void *_Dst;
  uint uVar3;
  void *pvVar4;
  
  _Size = (size_t)(param_1[4]);
  if (0x7fffffff - _Size < param_2) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar1 = (uint)(param_1[5]);
  uVar3 = (uint)(param_2 + _Size | 0xf);
  if (uVar3 < 0x80000000) {
    if (0x7fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x7fffffff);
    }
    else {
      uVar2 = (uint)(uVar1 + (uVar1 >> 1));
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
  }
  else {
    uVar3 = (uint)(0x7fffffff);
  }
  _Dst = (char *)((char *)thunk_FUN_1012cab0(uVar3 + 1), 0);
  param_1[4] = (undefined4)(param_2 + _Size);
  param_1[5] = (undefined4)(uVar3);
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1*)(_Size + (int)_Dst) = (undefined1)(param_4);
    *(undefined1*)(_Size + 1 + (int)_Dst) = (undefined1)(0);
    *param_1 = (undefined4)(_Dst);
    return (undefined4 *)(param_1);
  }
  _Src = (void *)((void *)*param_1);
  memcpy(_Dst,_Src,_Size);
  uVar3 = (uint)(uVar1 + 1);
  *(undefined1*)(_Size + (int)_Dst) = (undefined1)(param_4);
  *(undefined1*)(_Size + 1 + (int)_Dst) = (undefined1)(0);
  pvVar4 = (void *)(_Src);
  if (0xfff < uVar3) {
    pvVar4 = (char *)(*(void **)((int)_Src + -4), 0);
    uVar3 = (uint)(uVar1 + 0x24);
    if (0x1f < (uint)((int)_Src + (-4 - (int)pvVar4))) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(pvVar4,uVar3);
  *param_1 = (undefined4)(_Dst);
  return (undefined4 *)(param_1);
}


// Reference entry 101ce590; body size 122 bytes.
#line 1 "ENTRY_101ce590"

void __thiscall Recovered_Bulk::m_FUN_101ce590(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_2[9] != 0) {
    puVar2 = (undefined4 *)(operator_new(0x30), 0);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
    puVar2[0xb] = (undefined4)(0);
    piVar1 = (int *)((int *)param_2[9]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      if ((int *)(piVar1) == (int *)(param_2)) {
        uVar3 = (undefined4)((**(code **)(*piVar1 + 4))(puVar2 + 2), 0);
        puVar2[0xb] = (undefined4)(uVar3);
        piVar1 = (int *)((int *)param_2[9]);
        if ((int *)(piVar1) != (int *)(0x0)) {
          (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
          param_2[9] = (int)(0);
          *(undefined4**)(param_1 + 0x24) = (undefined4 *)(puVar2);
          return;
        }
      }
      else {
        puVar2[0xb] = (undefined4)(piVar1);
        param_2[9] = (int)(0);
      }
    }
    *(undefined4**)(param_1 + 0x24) = (undefined4 *)(puVar2);
  }
  return;
}


// Reference entry 101ce630; body size 13 bytes.
#line 1 "ENTRY_101ce630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ce630(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101ce640; body size 16 bytes.
#line 1 "ENTRY_101ce640"

void __thiscall Recovered_Bulk::m_FUN_101ce640(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return;
}


// Reference entry 101ce680; body size 12 bytes.
#line 1 "ENTRY_101ce680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_101ce680(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 101ce7f0; body size 7 bytes.
#line 1 "ENTRY_101ce7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce7f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101ce800; body size 5 bytes.
#line 1 "ENTRY_101ce800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce810; body size 5 bytes.
#line 1 "ENTRY_101ce810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce820; body size 5 bytes.
#line 1 "ENTRY_101ce820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce830; body size 5 bytes.
#line 1 "ENTRY_101ce830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce840; body size 27 bytes.
#line 1 "ENTRY_101ce840"

void __thiscall Recovered_Bulk::m_FUN_101ce840(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  
  if (param_2[1] != 0) {
    *param_1 = (undefined4)(*param_2);
    iVar2 = (int)(param_2[1]);
    param_1[1] = (undefined4)(iVar2);
    LOCK();
    piVar1 = (int *)((int *)(iVar2 + 8));
    *piVar1 = (int)(*piVar1 + 1);
    UNLOCK();
  }
  return;
}


// Reference entry 101ce890; body size 5 bytes.
#line 1 "ENTRY_101ce890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce8a0; body size 5 bytes.
#line 1 "ENTRY_101ce8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce8a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce8b0; body size 5 bytes.
#line 1 "ENTRY_101ce8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce8b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce8c0; body size 5 bytes.
#line 1 "ENTRY_101ce8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce8c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce8d0; body size 5 bytes.
#line 1 "ENTRY_101ce8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce8d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce8e0; body size 5 bytes.
#line 1 "ENTRY_101ce8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce8f0; body size 5 bytes.
#line 1 "ENTRY_101ce8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce8f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce900; body size 5 bytes.
#line 1 "ENTRY_101ce900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce910; body size 5 bytes.
#line 1 "ENTRY_101ce910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce920; body size 5 bytes.
#line 1 "ENTRY_101ce920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce930; body size 5 bytes.
#line 1 "ENTRY_101ce930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce940; body size 5 bytes.
#line 1 "ENTRY_101ce940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce950; body size 5 bytes.
#line 1 "ENTRY_101ce950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce960; body size 5 bytes.
#line 1 "ENTRY_101ce960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ce960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ce9d0; body size 130 bytes.
#line 1 "ENTRY_101ce9d0"

int __thiscall Recovered_Bulk::m_FUN_101ce9d0(int *param_2,undefined4 param_3)
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
  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)(((0x0)))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 101cea80; body size 25 bytes.
#line 1 "ENTRY_101cea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cea80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  thunk_FUN_103d6a60(0);
  return;
}


// Reference entry 101ceaa0; body size 28 bytes.
#line 1 "ENTRY_101ceaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ceaa0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101cead0; body size 3 bytes.
#line 1 "ENTRY_101cead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cead0(void)

{
  return;
}


// Reference entry 101ceb70; body size 3 bytes.
#line 1 "ENTRY_101ceb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ceb70(void)

{
  return;
}


// Reference entry 101cebf0; body size 86 bytes.
#line 1 "ENTRY_101cebf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101cebf0(int *param_1,int *param_2)

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


// Reference entry 101cec60; body size 15 bytes.
#line 1 "ENTRY_101cec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cec60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101cec80; body size 15 bytes.
#line 1 "ENTRY_101cec80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cec80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101ceca0; body size 15 bytes.
#line 1 "ENTRY_101ceca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ceca0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101cecc0; body size 15 bytes.
#line 1 "ENTRY_101cecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cecc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101cece0; body size 15 bytes.
#line 1 "ENTRY_101cece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cece0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101cee20; body size 5 bytes.
#line 1 "ENTRY_101cee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cee20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cee30; body size 5 bytes.
#line 1 "ENTRY_101cee30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cee30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cee40; body size 5 bytes.
#line 1 "ENTRY_101cee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cee40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cee50; body size 5 bytes.
#line 1 "ENTRY_101cee50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cee50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cee60; body size 5 bytes.
#line 1 "ENTRY_101cee60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cee60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cee70; body size 5 bytes.
#line 1 "ENTRY_101cee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cee70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cee80; body size 5 bytes.
#line 1 "ENTRY_101cee80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cee80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cee90; body size 5 bytes.
#line 1 "ENTRY_101cee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cee90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ceea0; body size 5 bytes.
#line 1 "ENTRY_101ceea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ceea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ceed0; body size 5 bytes.
#line 1 "ENTRY_101ceed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ceed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ceee0; body size 5 bytes.
#line 1 "ENTRY_101ceee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ceee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ceef0; body size 5 bytes.
#line 1 "ENTRY_101ceef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ceef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cef00; body size 5 bytes.
#line 1 "ENTRY_101cef00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cef00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cef10; body size 5 bytes.
#line 1 "ENTRY_101cef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cef10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cef20; body size 5 bytes.
#line 1 "ENTRY_101cef20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cef20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cef30; body size 5 bytes.
#line 1 "ENTRY_101cef30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cef30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cef40; body size 5 bytes.
#line 1 "ENTRY_101cef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cef40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cef50; body size 5 bytes.
#line 1 "ENTRY_101cef50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cef50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cef80; body size 5 bytes.
#line 1 "ENTRY_101cef80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cef80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cef90; body size 5 bytes.
#line 1 "ENTRY_101cef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cef90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cefa0; body size 5 bytes.
#line 1 "ENTRY_101cefa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cefa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cefb0; body size 11 bytes.
#line 1 "ENTRY_101cefb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cefb0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101cefc0; body size 6 bytes.
#line 1 "ENTRY_101cefc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101cefc0(void)

{
  return (char *)("SCIAccountManager");
}


// Reference entry 101cefd0; body size 6 bytes.
#line 1 "ENTRY_101cefd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101cefd0(void)

{
  return (char *)("SCIActionNoArgDescriptor");
}


// Reference entry 101cefe0; body size 6 bytes.
#line 1 "ENTRY_101cefe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101cefe0(void)

{
  return (char *)("SCIOpCB");
}


// Reference entry 101ceff0; body size 6 bytes.
#line 1 "ENTRY_101ceff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101ceff0(void)

{
  return (char *)("SCIProperty");
}


// Reference entry 101cf000; body size 6 bytes.
#line 1 "ENTRY_101cf000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101cf000(void)

{
  return (char *)("SCIPropertyBag");
}


// Reference entry 101cf010; body size 6 bytes.
#line 1 "ENTRY_101cf010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101cf010(void)

{
  return (char *)("SCISecureStore");
}


// Reference entry 101cf1a0; body size 40 bytes.
#line 1 "ENTRY_101cf1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cf1a0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 101cf290; body size 5 bytes.
#line 1 "ENTRY_101cf290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cf290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cf2c0; body size 5 bytes.
#line 1 "ENTRY_101cf2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cf2c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cf2d0; body size 5 bytes.
#line 1 "ENTRY_101cf2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cf2d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cf2e0; body size 5 bytes.
#line 1 "ENTRY_101cf2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101cf2e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cf4a0; body size 19 bytes.
#line 1 "ENTRY_101cf4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101cf4a0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(*param_1);
  *param_1 = (undefined1)(*param_2);
  *param_2 = (undefined1)(uVar1);
  return;
}


// Reference entry 101cf7c0; body size 27 bytes.
#line 1 "ENTRY_101cf7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cf7c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101cf7f0; body size 27 bytes.
#line 1 "ENTRY_101cf7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cf7f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101cf820; body size 27 bytes.
#line 1 "ENTRY_101cf820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cf820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101cf850; body size 27 bytes.
#line 1 "ENTRY_101cf850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cf850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfa80; body size 70 bytes.
#line 1 "ENTRY_101cfa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cfa80(undefined4 *param_1)

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


// Reference entry 101cfb20; body size 16 bytes.
#line 1 "ENTRY_101cfb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cfb20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfb40; body size 16 bytes.
#line 1 "ENTRY_101cfb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cfb40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfb60; body size 16 bytes.
#line 1 "ENTRY_101cfb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cfb60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfc40; body size 32 bytes.
#line 1 "ENTRY_101cfc40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfc40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfcb0; body size 16 bytes.
#line 1 "ENTRY_101cfcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cfcb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfcd0; body size 16 bytes.
#line 1 "ENTRY_101cfcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cfcd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfd70; body size 16 bytes.
#line 1 "ENTRY_101cfd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cfd70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfd90; body size 32 bytes.
#line 1 "ENTRY_101cfd90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfd90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfe00; body size 32 bytes.
#line 1 "ENTRY_101cfe00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfe00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfe70; body size 16 bytes.
#line 1 "ENTRY_101cfe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cfe70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfed0; body size 18 bytes.
#line 1 "ENTRY_101cfed0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfef0; body size 18 bytes.
#line 1 "ENTRY_101cfef0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cfef0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cff10; body size 3 bytes.
#line 1 "ENTRY_101cff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101cff10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cff20; body size 3 bytes.
#line 1 "ENTRY_101cff20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101cff20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cff30; body size 3 bytes.
#line 1 "ENTRY_101cff30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101cff30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101cff40; body size 10 bytes.
#line 1 "ENTRY_101cff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101cff40(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101cff50; body size 10 bytes.
#line 1 "ENTRY_101cff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101cff50(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101cff60; body size 10 bytes.
#line 1 "ENTRY_101cff60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101cff60(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101cff70; body size 10 bytes.
#line 1 "ENTRY_101cff70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101cff70(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101cff80; body size 10 bytes.
#line 1 "ENTRY_101cff80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101cff80(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101cff90; body size 10 bytes.
#line 1 "ENTRY_101cff90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101cff90(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101cffa0; body size 10 bytes.
#line 1 "ENTRY_101cffa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101cffa0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101cffb0; body size 11 bytes.
#line 1 "ENTRY_101cffb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cffb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101cffc0; body size 11 bytes.
#line 1 "ENTRY_101cffc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cffc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101cffd0; body size 11 bytes.
#line 1 "ENTRY_101cffd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101cffd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101cffe0; body size 16 bytes.
#line 1 "ENTRY_101cffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101cffe0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0000; body size 16 bytes.
#line 1 "ENTRY_101d0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101d00a0; body size 11 bytes.
#line 1 "ENTRY_101d00a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d00a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101d00b0; body size 11 bytes.
#line 1 "ENTRY_101d00b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d00b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0140; body size 11 bytes.
#line 1 "ENTRY_101d0140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d0140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0150; body size 11 bytes.
#line 1 "ENTRY_101d0150"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d0150(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0160; body size 11 bytes.
#line 1 "ENTRY_101d0160"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d0160(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0170; body size 16 bytes.
#line 1 "ENTRY_101d0170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0170(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0190; body size 16 bytes.
#line 1 "ENTRY_101d0190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0190(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101d01b0; body size 3 bytes.
#line 1 "ENTRY_101d01b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d01b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d01c0; body size 3 bytes.
#line 1 "ENTRY_101d01c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d01c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d01d0; body size 3 bytes.
#line 1 "ENTRY_101d01d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d01d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d01e0; body size 12 bytes.
#line 1 "ENTRY_101d01e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d01e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101d02f0; body size 12 bytes.
#line 1 "ENTRY_101d02f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d02f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101d03f0; body size 12 bytes.
#line 1 "ENTRY_101d03f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d03f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101d04b0; body size 52 bytes.
#line 1 "ENTRY_101d04b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d04b0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0500; body size 52 bytes.
#line 1 "ENTRY_101d0500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0500(undefined4 *param_1)

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


// Reference entry 101d0550; body size 45 bytes.
#line 1 "ENTRY_101d0550"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d0550(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0590; body size 43 bytes.
#line 1 "ENTRY_101d0590"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d0590(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)((int *)(param_2[1] + 4));
    *piVar1 = (int)(*piVar1 + 1);
    UNLOCK();
  }
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  return (undefined4 *)(param_1);
}


// Reference entry 101d05d0; body size 16 bytes.
#line 1 "ENTRY_101d05d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d05d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101d05f0; body size 13 bytes.
#line 1 "ENTRY_101d05f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d05f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0600; body size 31 bytes.
#line 1 "ENTRY_101d0600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d0600(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined1 uVar1;
  
  *param_1 = (undefined4)(param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  uVar1 = (undefined1)(thunk_FUN_112a7f50(param_2), 0);
  *(undefined1*)(param_1 + 1) = (undefined1)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0630; body size 42 bytes.
#line 1 "ENTRY_101d0630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d0630(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0e80; body size 42 bytes.
#line 1 "ENTRY_101d0e80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d0e80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCActionDelegateProxy);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0ec0; body size 33 bytes.
#line 1 "ENTRY_101d0ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCActionNoArgDescriptorImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0ef0; body size 33 bytes.
#line 1 "ENTRY_101d0ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscription);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0f20; body size 63 bytes.
#line 1 "ENTRY_101d0f20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d0f20(undefined4 param_2,undefined4 param_3,undefined1 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(param_3);
  *(undefined1*)(param_1 + 4) = (undefined1)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFetchTokenActionDescriptor);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0f70; body size 9 bytes.
#line 1 "ENTRY_101d0f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0f70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAccountManager);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0f80; body size 28 bytes.
#line 1 "ENTRY_101d0f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0f80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0fb0; body size 9 bytes.
#line 1 "ENTRY_101d0fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0fc0; body size 9 bytes.
#line 1 "ENTRY_101d0fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionNoArgDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0fd0; body size 9 bytes.
#line 1 "ENTRY_101d0fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIEnumerable);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0fe0; body size 11 bytes.
#line 1 "ENTRY_101d0fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0fe0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0ff0; body size 9 bytes.
#line 1 "ENTRY_101d0ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d0ff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 101d1000; body size 11 bytes.
#line 1 "ENTRY_101d1000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d1000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIPropertyBag);
  return (undefined4 *)(param_1);
}


// Reference entry 101d1010; body size 9 bytes.
#line 1 "ENTRY_101d1010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d1010(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIPropertyBag);
  return (undefined4 *)(param_1);
}


// Reference entry 101d1020; body size 42 bytes.
#line 1 "ENTRY_101d1020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d1020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpCBProxy);
  return (undefined4 *)(param_1);
}


// Reference entry 101d1060; body size 28 bytes.
#line 1 "ENTRY_101d1060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d1060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRefBase);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101d15e0; body size 42 bytes.
#line 1 "ENTRY_101d15e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d15e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemStatusManagerEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 101d1620; body size 53 bytes.
#line 1 "ENTRY_101d1620"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d1620(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_ScopedRWLock);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  *(undefined1*)(param_1 + 3) = (undefined1)(1);
  if (param_3 == 0) {
    thunk_FUN_11242b10();
    return (undefined4 *)(param_1);
  }
  thunk_FUN_11242d90();
  return (undefined4 *)(param_1);
}


// Reference entry 101d1670; body size 23 bytes.
#line 1 "ENTRY_101d1670"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d1670(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(param_1 + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101d1690; body size 17 bytes.
#line 1 "ENTRY_101d1690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d1690(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(1);
  *(undefined4*)(param_1 + 8) = (undefined4)(1);
  return (int)(param_1);
}


// Reference entry 101d18e0; body size 19 bytes.
#line 1 "ENTRY_101d18e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d18e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d1900; body size 19 bytes.
#line 1 "ENTRY_101d1900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d1900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d2ac0; body size 34 bytes.
#line 1 "ENTRY_101d2ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d2ac0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 101d2b90; body size 7 bytes.
#line 1 "ENTRY_101d2b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d2b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count_obj2);
  return;
}


// Reference entry 101d2c20; body size 19 bytes.
#line 1 "ENTRY_101d2c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d2c20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 101d2f20; body size 19 bytes.
#line 1 "ENTRY_101d2f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d2f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d33d0; body size 19 bytes.
#line 1 "ENTRY_101d33d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d33d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d34c0; body size 7 bytes.
#line 1 "ENTRY_101d34c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d34c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d3550; body size 7 bytes.
#line 1 "ENTRY_101d3550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d3550(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d3560; body size 7 bytes.
#line 1 "ENTRY_101d3560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d3560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d3570; body size 7 bytes.
#line 1 "ENTRY_101d3570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d3570(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d3610; body size 19 bytes.
#line 1 "ENTRY_101d3610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d3610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d3990; body size 19 bytes.
#line 1 "ENTRY_101d3990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d3990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d3a50; body size 18 bytes.
#line 1 "ENTRY_101d3a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d3a50(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 101d3b20; body size 3 bytes.
#line 1 "ENTRY_101d3b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101d3b20(void)

{
  return;
}


// Reference entry 101d3c20; body size 65 bytes.
#line 1 "ENTRY_101d3c20"

int * __thiscall Recovered_Bulk::m_FUN_101d3c20(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101d3d60; body size 65 bytes.
#line 1 "ENTRY_101d3d60"

int * __thiscall Recovered_Bulk::m_FUN_101d3d60(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101d40b0; body size 5 bytes.
#line 1 "ENTRY_101d40b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d40b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d40c0; body size 5 bytes.
#line 1 "ENTRY_101d40c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d40c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d4190; body size 14 bytes.
#line 1 "ENTRY_101d4190"

bool __thiscall Recovered_Bulk::m_FUN_101d4190(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101d41b0; body size 14 bytes.
#line 1 "ENTRY_101d41b0"

bool __thiscall Recovered_Bulk::m_FUN_101d41b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101d41d0; body size 14 bytes.
#line 1 "ENTRY_101d41d0"

bool __thiscall Recovered_Bulk::m_FUN_101d41d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101d41f0; body size 14 bytes.
#line 1 "ENTRY_101d41f0"

bool __thiscall Recovered_Bulk::m_FUN_101d41f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101d4210; body size 14 bytes.
#line 1 "ENTRY_101d4210"

bool __thiscall Recovered_Bulk::m_FUN_101d4210(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101d4230; body size 14 bytes.
#line 1 "ENTRY_101d4230"

bool __thiscall Recovered_Bulk::m_FUN_101d4230(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101d4250; body size 14 bytes.
#line 1 "ENTRY_101d4250"

bool __thiscall Recovered_Bulk::m_FUN_101d4250(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101d4270; body size 14 bytes.
#line 1 "ENTRY_101d4270"

bool __thiscall Recovered_Bulk::m_FUN_101d4270(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101d43c0; body size 3 bytes.
#line 1 "ENTRY_101d43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d43c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d43d0; body size 3 bytes.
#line 1 "ENTRY_101d43d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d43d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d43e0; body size 7 bytes.
#line 1 "ENTRY_101d43e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d43e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d43f0; body size 7 bytes.
#line 1 "ENTRY_101d43f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d43f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d4400; body size 3 bytes.
#line 1 "ENTRY_101d4400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4400(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4410; body size 3 bytes.
#line 1 "ENTRY_101d4410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4420; body size 3 bytes.
#line 1 "ENTRY_101d4420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4420(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4430; body size 3 bytes.
#line 1 "ENTRY_101d4430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4440; body size 3 bytes.
#line 1 "ENTRY_101d4440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4450; body size 7 bytes.
#line 1 "ENTRY_101d4450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d4450(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d4460; body size 3 bytes.
#line 1 "ENTRY_101d4460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4460(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4470; body size 7 bytes.
#line 1 "ENTRY_101d4470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d4470(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d4480; body size 3 bytes.
#line 1 "ENTRY_101d4480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4480(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4490; body size 7 bytes.
#line 1 "ENTRY_101d4490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d4490(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d44a0; body size 3 bytes.
#line 1 "ENTRY_101d44a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d44a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d44b0; body size 7 bytes.
#line 1 "ENTRY_101d44b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d44b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d44c0; body size 7 bytes.
#line 1 "ENTRY_101d44c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d44c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d44d0; body size 7 bytes.
#line 1 "ENTRY_101d44d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d44d0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d44e0; body size 3 bytes.
#line 1 "ENTRY_101d44e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d44e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d44f0; body size 3 bytes.
#line 1 "ENTRY_101d44f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d44f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4500; body size 3 bytes.
#line 1 "ENTRY_101d4500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4510; body size 7 bytes.
#line 1 "ENTRY_101d4510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d4510(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d4520; body size 3 bytes.
#line 1 "ENTRY_101d4520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4530; body size 7 bytes.
#line 1 "ENTRY_101d4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d4530(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d4540; body size 7 bytes.
#line 1 "ENTRY_101d4540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d4540(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d4550; body size 7 bytes.
#line 1 "ENTRY_101d4550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d4550(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d4560; body size 8 bytes.
#line 1 "ENTRY_101d4560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d4560(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 101d4570; body size 8 bytes.
#line 1 "ENTRY_101d4570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d4570(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 101d4580; body size 8 bytes.
#line 1 "ENTRY_101d4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d4580(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 101d4590; body size 8 bytes.
#line 1 "ENTRY_101d4590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d4590(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 101d45a0; body size 8 bytes.
#line 1 "ENTRY_101d45a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d45a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 101d45b0; body size 7 bytes.
#line 1 "ENTRY_101d45b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d45b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101d45c0; body size 4 bytes.
#line 1 "ENTRY_101d45c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d45c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 101d45d0; body size 4 bytes.
#line 1 "ENTRY_101d45d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d45d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 101d45e0; body size 3 bytes.
#line 1 "ENTRY_101d45e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d45e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d45f0; body size 3 bytes.
#line 1 "ENTRY_101d45f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d45f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4600; body size 3 bytes.
#line 1 "ENTRY_101d4600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4600(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4610; body size 3 bytes.
#line 1 "ENTRY_101d4610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4610(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4620; body size 3 bytes.
#line 1 "ENTRY_101d4620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4630; body size 3 bytes.
#line 1 "ENTRY_101d4630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4630(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4640; body size 3 bytes.
#line 1 "ENTRY_101d4640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4640(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4650; body size 3 bytes.
#line 1 "ENTRY_101d4650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4650(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4660; body size 3 bytes.
#line 1 "ENTRY_101d4660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4660(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4670; body size 3 bytes.
#line 1 "ENTRY_101d4670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4680; body size 3 bytes.
#line 1 "ENTRY_101d4680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4680(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4690; body size 3 bytes.
#line 1 "ENTRY_101d4690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4690(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d46a0; body size 3 bytes.
#line 1 "ENTRY_101d46a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d46a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d46b0; body size 3 bytes.
#line 1 "ENTRY_101d46b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d46b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d46c0; body size 3 bytes.
#line 1 "ENTRY_101d46c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d46c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d46d0; body size 3 bytes.
#line 1 "ENTRY_101d46d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d46d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d46e0; body size 3 bytes.
#line 1 "ENTRY_101d46e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d46e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d46f0; body size 3 bytes.
#line 1 "ENTRY_101d46f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d46f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4700; body size 3 bytes.
#line 1 "ENTRY_101d4700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4700(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4710; body size 3 bytes.
#line 1 "ENTRY_101d4710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d4710(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101d4720; body size 6 bytes.
#line 1 "ENTRY_101d4720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d4720(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 101d4730; body size 6 bytes.
#line 1 "ENTRY_101d4730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d4730(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 101d4740; body size 6 bytes.
#line 1 "ENTRY_101d4740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d4740(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 101d4750; body size 6 bytes.
#line 1 "ENTRY_101d4750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d4750(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 101d4760; body size 6 bytes.
#line 1 "ENTRY_101d4760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d4760(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 101d4770; body size 6 bytes.
#line 1 "ENTRY_101d4770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d4770(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 101d4780; body size 9 bytes.
#line 1 "ENTRY_101d4780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d4780(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 101d4790; body size 9 bytes.
#line 1 "ENTRY_101d4790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101d4790(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 101d48f0; body size 20 bytes.
#line 1 "ENTRY_101d48f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101d48f0(undefined4 *param_2)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 101d4980; body size 41 bytes.
#line 1 "ENTRY_101d4980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101d4980(void *param_1,void *param_2,size_t param_3,undefined1 param_4)

{
  memcpy(param_1,param_2,param_3);
  *(undefined1*)((int)param_1 + param_3) = (undefined1)(param_4);
  *(undefined1*)((int)param_1 + param_3 + 1) = (undefined1)(0);
  return;
}


// Reference entry 101d4cc0; body size 25 bytes.
#line 1 "ENTRY_101d4cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d4cc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 101d4ce0; body size 29 bytes.
#line 1 "ENTRY_101d4ce0"

void __thiscall Recovered_Bulk::m_FUN_101d4ce0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 101d4d10; body size 25 bytes.
#line 1 "ENTRY_101d4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d4d10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 101d4d30; body size 29 bytes.
#line 1 "ENTRY_101d4d30"

void __thiscall Recovered_Bulk::m_FUN_101d4d30(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 101d4e00; body size 18 bytes.
#line 1 "ENTRY_101d4e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_101d4e00(uint *param_1,uint *param_2)

{
  return (bool)(*param_1 < (uint)(*(param_2)));
}


// Reference entry 101d4e20; body size 18 bytes.
#line 1 "ENTRY_101d4e20"

undefined4 __thiscall Recovered_Bulk::m_FUN_101d4e20(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101dd3a0(param_2);
  return (undefined4)(param_1);
}


// Reference entry 101d5f80; body size 31 bytes.
#line 1 "ENTRY_101d5f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d5f80(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 101d5fb0; body size 31 bytes.
#line 1 "ENTRY_101d5fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d5fb0(undefined4 *param_1)

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


// Reference entry 101d5fe0; body size 22 bytes.
#line 1 "ENTRY_101d5fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d5fe0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 101d6040; body size 14 bytes.
#line 1 "ENTRY_101d6040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d6040(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x5555555) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 101d6140; body size 47 bytes.
#line 1 "ENTRY_101d6140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d6140(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(*(int **)(param_1 + 4), 0);
  if ((int *)(piVar2) != (int *)(0x0)) {
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


// Reference entry 101d6180; body size 40 bytes.
#line 1 "ENTRY_101d6180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d6180(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar3 = (int)(*piVar1);
  iVar2 = (int)(*piVar1);
  *piVar1 = (int)(iVar3 + -1);
  UNLOCK();
  if (iVar3 + -1 == 0) {
    iVar2 = (int)((**(code **)*param_1)(), 0);
    LOCK();
    piVar1 = (int *)(param_1 + 2);
    iVar3 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar3 == 1) {
                    
                    
      iVar3 = (int)((**(code **)(*param_1 + 4))(), 0);
      return (int)(iVar3);
    }
  }
  return (int)(iVar2);
}


// Reference entry 101d61c0; body size 23 bytes.
#line 1 "ENTRY_101d61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d61c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
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


// Reference entry 101d61e0; body size 16 bytes.
#line 1 "ENTRY_101d61e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d61e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 2);
  iVar3 = (int)(*piVar1);
  iVar2 = (int)(*piVar1);
  *piVar1 = (int)(iVar3 + -1);
  UNLOCK();
  if (iVar3 + -1 == 0) {
                    
                    
    iVar3 = (int)((**(code **)(*param_1 + 4))(), 0);
    return (int)(iVar3);
  }
  return (int)(iVar2);
}


// Reference entry 101d6480; body size 8 bytes.
#line 1 "ENTRY_101d6480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d6480(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 101d6490; body size 8 bytes.
#line 1 "ENTRY_101d6490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d6490(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 101d64a0; body size 8 bytes.
#line 1 "ENTRY_101d64a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d64a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 101d64b0; body size 8 bytes.
#line 1 "ENTRY_101d64b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d64b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 101d64c0; body size 8 bytes.
#line 1 "ENTRY_101d64c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d64c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 101d64d0; body size 8 bytes.
#line 1 "ENTRY_101d64d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d64d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 101d64e0; body size 8 bytes.
#line 1 "ENTRY_101d64e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d64e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 101d64f0; body size 142 bytes.
#line 1 "ENTRY_101d64f0"

int __thiscall Recovered_Bulk::m_FUN_101d64f0(int param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar2 = (int *)((int *)*param_1);
  if (((int)(param_2) == *piVar2) && (*(char *)(param_3 + 0xd) != '\0')) {
    cVar1 = (char)(*(char *)(piVar2[1] + 0xd));
    piVar4 = (int *)((int *)piVar2[1]);
    while (cVar1 == '\0') {
      thunk_FUN_101cdee0(param_1,piVar4[2]);
      piVar3 = (int *)((int *)*piVar4);
      thunk_FUN_1148a50e(piVar4,0x30);
      piVar4 = (int *)(piVar3);
      cVar1 = (char)(*(char *)((int)piVar3 + 0xd));
    }
    piVar2[1] = (int)((int)piVar2);
    *piVar2 = (int)((int)piVar2);
    piVar2[2] = (int)((int)piVar2);
    param_1[1] = (undefined4)(0);
    return (int)(param_3);
  }
  if (param_2 != param_3) {
    do {
      iVar5 = (int)(param_2);
      ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                    *)&param_2))->op_inc();
      uVar6 = (undefined4)(thunk_FUN_101d65f0(iVar5), 0);
      thunk_FUN_1148a50e(uVar6,0x30);
    } while (param_2 != param_3);
  }
  return (int)(param_3);
}


// Reference entry 101d65b0; body size 51 bytes.
#line 1 "ENTRY_101d65b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_101d65b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_1);
  ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                *)&uStack_4))->op_inc();
  uVar1 = (undefined4)(thunk_FUN_101d65f0(param_1), 0);
  thunk_FUN_1148a50e(uVar1,0x30);
  return (undefined4)(uStack_4);
}


// Reference entry 101d6990; body size 3 bytes.
#line 1 "ENTRY_101d6990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d69a0; body size 3 bytes.
#line 1 "ENTRY_101d69a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d69a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d69b0; body size 3 bytes.
#line 1 "ENTRY_101d69b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d69b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d69c0; body size 3 bytes.
#line 1 "ENTRY_101d69c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d69c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d69d0; body size 3 bytes.
#line 1 "ENTRY_101d69d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d69d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d69e0; body size 3 bytes.
#line 1 "ENTRY_101d69e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d69e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d69f0; body size 3 bytes.
#line 1 "ENTRY_101d69f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d69f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d6a00; body size 3 bytes.
#line 1 "ENTRY_101d6a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d6a10; body size 3 bytes.
#line 1 "ENTRY_101d6a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d6a20; body size 3 bytes.
#line 1 "ENTRY_101d6a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d6a30; body size 3 bytes.
#line 1 "ENTRY_101d6a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d6a40; body size 3 bytes.
#line 1 "ENTRY_101d6a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d6a50; body size 3 bytes.
#line 1 "ENTRY_101d6a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d6a60; body size 3 bytes.
#line 1 "ENTRY_101d6a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d6a70; body size 3 bytes.
#line 1 "ENTRY_101d6a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d6a80; body size 3 bytes.
#line 1 "ENTRY_101d6a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101d6a90; body size 3 bytes.
#line 1 "ENTRY_101d6a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101d6a90(void)

{
  return (undefined4)(0);
}


// Reference entry 101d6aa0; body size 4 bytes.
#line 1 "ENTRY_101d6aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6aa0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 101d6ab0; body size 4 bytes.
#line 1 "ENTRY_101d6ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6ab0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 101d6ac0; body size 4 bytes.
#line 1 "ENTRY_101d6ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6ac0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 101d6ad0; body size 4 bytes.
#line 1 "ENTRY_101d6ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6ad0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 101d6ae0; body size 4 bytes.
#line 1 "ENTRY_101d6ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6ae0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 101d6af0; body size 4 bytes.
#line 1 "ENTRY_101d6af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6af0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 101d6b00; body size 4 bytes.
#line 1 "ENTRY_101d6b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d6b00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 101d6b10; body size 12 bytes.
#line 1 "ENTRY_101d6b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d6b10(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    LOCK();
    piVar1 = (int *)((int *)(*(int *)(param_1 + 4) + 4));
    *piVar1 = (int)(*piVar1 + 1);
    UNLOCK();
  }
  return;
}


// Reference entry 101d6b20; body size 5 bytes.
#line 1 "ENTRY_101d6b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d6b20(int param_1)

{
  LOCK();
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 1);
  UNLOCK();
  return;
}


// Reference entry 101d6b30; body size 43 bytes.
#line 1 "ENTRY_101d6b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_101d6b30(int param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  while( true ) {
    if (iVar1 == 0) {
      return (uint)(in_EAX & 0xffffff00);
    }
    LOCK();
    iVar2 = (int)(*(int *)(param_1 + 4));
    if (iVar1 == iVar2) {
      *(int*)(param_1 + 4) = (int)(iVar1 + 1);
      iVar2 = (int)(iVar1);
    }
    UNLOCK();
    if (iVar2 == iVar1) break;
    in_EAX = (uint)(0);
    iVar1 = (int)(iVar2);
  }
  return (uint)(((uint)((int3)((uint)iVar2 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 101d6b70; body size 5 bytes.
#line 1 "ENTRY_101d6b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d6b70(int param_1)

{
  LOCK();
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + 1);
  UNLOCK();
  return;
}


// Reference entry 101d6e10; body size 7 bytes.
#line 1 "ENTRY_101d6e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d6e10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 101d6e20; body size 7 bytes.
#line 1 "ENTRY_101d6e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d6e20(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 101d6e30; body size 7 bytes.
#line 1 "ENTRY_101d6e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d6e30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 101d6e40; body size 7 bytes.
#line 1 "ENTRY_101d6e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d6e40(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 101d6e50; body size 7 bytes.
#line 1 "ENTRY_101d6e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d6e50(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 101d6e60; body size 7 bytes.
#line 1 "ENTRY_101d6e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d6e60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 101d6e70; body size 7 bytes.
#line 1 "ENTRY_101d6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d6e70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 101d6ef0; body size 30 bytes.
#line 1 "ENTRY_101d6ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101d6ef0(int param_1)

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


// Reference entry 101d6fd0; body size 3 bytes.
#line 1 "ENTRY_101d6fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101d6fd0(void)

{
  return;
}


// Reference entry 101d6fe0; body size 3 bytes.
#line 1 "ENTRY_101d6fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101d6fe0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 101d6ff0; body size 3 bytes.
#line 1 "ENTRY_101d6ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101d6ff0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 101d7000; body size 3 bytes.
#line 1 "ENTRY_101d7000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101d7000(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 101d7010; body size 11 bytes.
#line 1 "ENTRY_101d7010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d7010(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101d7020; body size 26 bytes.
#line 1 "ENTRY_101d7020"

void __thiscall Recovered_Bulk::m_FUN_101d7020(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 101d7040; body size 26 bytes.
#line 1 "ENTRY_101d7040"

void __thiscall Recovered_Bulk::m_FUN_101d7040(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 101d7060; body size 26 bytes.
#line 1 "ENTRY_101d7060"

void __thiscall Recovered_Bulk::m_FUN_101d7060(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 101d7080; body size 26 bytes.
#line 1 "ENTRY_101d7080"

void __thiscall Recovered_Bulk::m_FUN_101d7080(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 101d70a0; body size 76 bytes.
#line 1 "ENTRY_101d70a0"

void __thiscall Recovered_Bulk::m_FUN_101d70a0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1), 0);
      *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return;
      }
    }
    else {
      *(int**)(param_1 + 0x24) = (int *)(piVar1);
      param_2[9] = (int)(0);
    }
  }
  return;
}


// Reference entry 101d7170; body size 9 bytes.
#line 1 "ENTRY_101d7170"

void __thiscall Recovered_Bulk::m_FUN_101d7170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101d7180; body size 10 bytes.
#line 1 "ENTRY_101d7180"

void __thiscall Recovered_Bulk::m_FUN_101d7180(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 101d7190; body size 10 bytes.
#line 1 "ENTRY_101d7190"

void __thiscall Recovered_Bulk::m_FUN_101d7190(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 101d71a0; body size 10 bytes.
#line 1 "ENTRY_101d71a0"

void __thiscall Recovered_Bulk::m_FUN_101d71a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 101d71b0; body size 10 bytes.
#line 1 "ENTRY_101d71b0"

void __thiscall Recovered_Bulk::m_FUN_101d71b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 101d71c0; body size 10 bytes.
#line 1 "ENTRY_101d71c0"

void __thiscall Recovered_Bulk::m_FUN_101d71c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 101d71d0; body size 10 bytes.
#line 1 "ENTRY_101d71d0"

void __thiscall Recovered_Bulk::m_FUN_101d71d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 101d71e0; body size 10 bytes.
#line 1 "ENTRY_101d71e0"

void __thiscall Recovered_Bulk::m_FUN_101d71e0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 101d73a0; body size 42 bytes.
#line 1 "ENTRY_101d73a0"

void __thiscall Recovered_Bulk::m_FUN_101d73a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_2[1]);
  *piVar2 = (int)(iVar1);
  *(int**)(iVar1 + 4) = (int *)(piVar2);
  *(int**)param_1[2] = (int *)((int)(param_2));
  param_1[2] = (int)((int)param_2);
  return;
}


// Reference entry 101d73e0; body size 38 bytes.
#line 1 "ENTRY_101d73e0"

void __thiscall Recovered_Bulk::m_FUN_101d73e0(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_2 + 4), 0);
  **(int**)(param_1 + 4) = (int)(param_2);
  *(undefined4**)(*(int *)(param_1 + 4) + 4) = (undefined4 *)(puVar1);
  uVar2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 4) = (undefined4)(uVar2);
  *puVar1 = (undefined4)(uVar2);
  return;
}


// Reference entry 101d7410; body size 13 bytes.
#line 1 "ENTRY_101d7410"

void __thiscall Recovered_Bulk::m_FUN_101d7410(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 101d7420; body size 13 bytes.
#line 1 "ENTRY_101d7420"

void __thiscall Recovered_Bulk::m_FUN_101d7420(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 101d7430; body size 11 bytes.
#line 1 "ENTRY_101d7430"

void __thiscall Recovered_Bulk::m_FUN_101d7430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101d7440; body size 11 bytes.
#line 1 "ENTRY_101d7440"

void __thiscall Recovered_Bulk::m_FUN_101d7440(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101d7ea0; body size 87 bytes.
#line 1 "ENTRY_101d7ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101d7ea0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x10000000) {
    param_1 = (uint)(param_1 * 0x10);
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


// Reference entry 101d7f10; body size 97 bytes.
#line 1 "ENTRY_101d7f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101d7f10(uint param_1)

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


// Reference entry 101d7f90; body size 90 bytes.
#line 1 "ENTRY_101d7f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101d7f90(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5555556) {
    param_1 = (uint)(param_1 * 0x30);
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


// Reference entry 101d83b0; body size 13 bytes.
#line 1 "ENTRY_101d83b0"

void __thiscall Recovered_Bulk::m_FUN_101d83b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 101d83c0; body size 13 bytes.
#line 1 "ENTRY_101d83c0"

void __thiscall Recovered_Bulk::m_FUN_101d83c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 101d83d0; body size 5 bytes.
#line 1 "ENTRY_101d83d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d83d0(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 4))();
  return;
}


// Reference entry 101d84f0; body size 5 bytes.
#line 1 "ENTRY_101d84f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101d84f0(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 4))();
  return;
}


// Reference entry 101d8b60; body size 54 bytes.
#line 1 "ENTRY_101d8b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101d8b60(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x10);
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


// Reference entry 101d8bb0; body size 63 bytes.
#line 1 "ENTRY_101d8bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101d8bb0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 101d8c00; body size 57 bytes.
#line 1 "ENTRY_101d8c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101d8c00(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x30);
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


// Reference entry 101d8c50; body size 57 bytes.
#line 1 "ENTRY_101d8c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101d8c50(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x10);
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


// Reference entry 101d8ca0; body size 60 bytes.
#line 1 "ENTRY_101d8ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101d8ca0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x30);
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


// Reference entry 101d8cf0; body size 16 bytes.
#line 1 "ENTRY_101d8cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d8cf0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101d8d10; body size 9 bytes.
#line 1 "ENTRY_101d8d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d8d10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101d8d20; body size 9 bytes.
#line 1 "ENTRY_101d8d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d8d20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101d8d30; body size 9 bytes.
#line 1 "ENTRY_101d8d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d8d30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101d8d40; body size 9 bytes.
#line 1 "ENTRY_101d8d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d8d40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101d8d50; body size 9 bytes.
#line 1 "ENTRY_101d8d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d8d50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101d8d60; body size 9 bytes.
#line 1 "ENTRY_101d8d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d8d60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101d8d70; body size 9 bytes.
#line 1 "ENTRY_101d8d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d8d70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101d8d80; body size 32 bytes.
#line 1 "ENTRY_101d8d80"

void __thiscall Recovered_Bulk::m_FUN_101d8d80(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 101d8f60; body size 8 bytes.
#line 1 "ENTRY_101d8f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101d8f60(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 101d8f70; body size 11 bytes.
#line 1 "ENTRY_101d8f70"

void __thiscall Recovered_Bulk::m_FUN_101d8f70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101d8f80; body size 11 bytes.
#line 1 "ENTRY_101d8f80"

void __thiscall Recovered_Bulk::m_FUN_101d8f80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101d9150; body size 8 bytes.
#line 1 "ENTRY_101d9150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101d9150(undefined4 *param_1)

{
  return (int)(*(int *)*param_1 + 8);
}


// Reference entry 101d9160; body size 3 bytes.
#line 1 "ENTRY_101d9160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101d9160(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101da000; body size 20 bytes.
#line 1 "ENTRY_101da000"

SCStr * __thiscall Recovered_Bulk::m_FUN_101da000(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x28));
  return (SCStr *)(param_2);
}


// Reference entry 101da360; body size 4 bytes.
#line 1 "ENTRY_101da360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101da360(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 101dad10; body size 42 bytes.
#line 1 "ENTRY_101dad10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101dad10(void *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piStack_30;
  int *piStack_20;
  int *piStack_1c;
  void *pvStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  
  puStack_c = (undefined1 *)((undefined1 *)0x0);
  piStack_1c = (int *)((int *)0x101dad24);
  pvStack_14 = (void *)(param_1);
  pvStack_10 = (void *)(param_1);
  ((SCStr *)((SCStr *)&pvStack_14))->int_allocRep("SCIAccountManager:onCurrentAccountChanged");
  thunk_FUN_103d65f0();

  piVar4 = (int *)((int *)thunk_FUN_10292c70(&piStack_20,DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);
  piVar1 = (int *)((int *)*piVar4);
  *piVar4 = (int)(0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    piStack_30 = (int *)((int *)0x0);
  }
  else {
    piStack_30 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(), 0);
  }
  if ((int *)(piStack_20) != (int *)(0x0)) {
    (**(code **)(*piStack_20 + 8))();
  }
  piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0x1c))(&piStack_1c,*(undefined4 *)((int)param_1 + 0x17c)), 0);
  iVar2 = (int)(*piVar4);
  if ((int *)(piStack_1c) != (int *)(0x0)) {
    (**(code **)(*piStack_1c + 8))();
  }
  cVar3 = (char)(thunk_FUN_101dc6b0(), 0);
  if (cVar3 == '\0') {
    if (iVar2 != 0) {
      (**(code **)(*piVar1 + 0x3c))(*(undefined4 *)((int)param_1 + 0x17c),0,1);
      *(undefined4*)((int)param_1 + 0x17c) = (undefined4)(0);
    }
  }
  else if (iVar2 == 0) {
    piVar4 = (int *)(operator_new(0x18), 0);
    piStack_1c = (int *)(piVar4);
    if ((int *)(piVar4) == (int *)(0x0)) {
      piVar4 = (int *)((int *)0x0);
      piVar5 = (int *)((int *)0x0);
    }
    else {
      *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar4[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar4 = (int)((int)(uint)&ghidra_vftable_SCFetchTokenActionDescriptor);
      piVar4[2] = (int)(0);
      piVar4[3] = (int)(0);
      *(undefined1*)(piVar4 + 4) = (undefined1)(0);
      piVar4[5] = (int)(0);
      piVar5 = (int *)((int *)0x0);
      if ((int *)(piVar4) != (int *)(0x0)) {
        if (*(code **)(*piVar4 + 0xc) == (code *)((thunk_FUN_101da390))) {
          (**(code **)(*piVar4 + 4))();
          piVar5 = (int *)(piVar4);
        }
        else {
          piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(), 0);
          (**(code **)(*piVar5 + 4))();
        }
      }
    }
    ((SCStr *)((SCStr *)&piStack_1c))->int_allocRep("");
    ((SCStr *)((SCStr *)&stack0xffffffe8))->int_allocRep("");
    pcVar6 = (char *)((char *)thunk_FUN_1109aba0(0x2fa,&DAT_11882ff0), 0);
    ((SCStr *)((SCStr *)&pvStack_14))->int_allocRep(pcVar6);
    uVar7 = (undefined4)((**(code **)(*piVar1 + 0x38))
                      (&pvStack_14,2,piVar4,1,0,&stack0xffffffe8,&DAT_121a0828,0,1,0,0,0,&piStack_1c
                      ), 0);
    *(undefined4*)((int)param_1 + 0x17c) = (undefined4)(uVar7);
    ((SCStr *)((SCStr *)&pvStack_14))->int_release();
    pvStack_14 = (void *)((void *)0x0);
    ((SCStr *)((SCStr *)&stack0xffffffe8))->int_release();
    ((SCStr *)((SCStr *)&piStack_1c))->int_release();
    if ((int *)(piVar5) != (int *)(0x0)) {
      (**(code **)(*piVar5 + 8))();
    }
  }
  if ((int *)(piStack_30) != (int *)(0x0)) {
    (**(code **)(*piStack_30 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 101daff0; body size 6 bytes.
#line 1 "ENTRY_101daff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101daff0(void)

{
  return (char *)("SCIAccountManager");
}


// Reference entry 101db000; body size 6 bytes.
#line 1 "ENTRY_101db000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101db000(void)

{
  return (char *)("SCIActionNoArgDescriptor");
}


// Reference entry 101db010; body size 6 bytes.
#line 1 "ENTRY_101db010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101db010(void)

{
  return (char *)("SCIOpCB");
}


// Reference entry 101db020; body size 6 bytes.
#line 1 "ENTRY_101db020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101db020(void)

{
  return (char *)("SCIProperty");
}


// Reference entry 101db030; body size 6 bytes.
#line 1 "ENTRY_101db030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101db030(void)

{
  return (char *)("SCIPropertyBag");
}


// Reference entry 101db040; body size 6 bytes.
#line 1 "ENTRY_101db040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101db040(void)

{
  return (char *)("SCISecureStore");
}


// Reference entry 101dc9e0; body size 35 bytes.
#line 1 "ENTRY_101dc9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101dc9e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 4) + 0x14))();
    return;
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return;
}


// Reference entry 101dcdd0; body size 7 bytes.
#line 1 "ENTRY_101dcdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101dcdd0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101dcde0; body size 7 bytes.
#line 1 "ENTRY_101dcde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101dcde0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101dcdf0; body size 7 bytes.
#line 1 "ENTRY_101dcdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101dcdf0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101dce00; body size 7 bytes.
#line 1 "ENTRY_101dce00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101dce00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101dce10; body size 7 bytes.
#line 1 "ENTRY_101dce10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101dce10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101dce20; body size 7 bytes.
#line 1 "ENTRY_101dce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101dce20(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101dcf10; body size 8 bytes.
#line 1 "ENTRY_101dcf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101dcf10(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) != 0);
}


// Reference entry 101dcf20; body size 18 bytes.
#line 1 "ENTRY_101dcf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101dcf20(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x7c), 0);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 101dd030; body size 6 bytes.
#line 1 "ENTRY_101dd030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101dd030(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 101dd040; body size 6 bytes.
#line 1 "ENTRY_101dd040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101dd040(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 101dd050; body size 6 bytes.
#line 1 "ENTRY_101dd050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101dd050(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 101dd060; body size 6 bytes.
#line 1 "ENTRY_101dd060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101dd060(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 101dd270; body size 5 bytes.
#line 1 "ENTRY_101dd270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101dd270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101dd280; body size 3 bytes.
#line 1 "ENTRY_101dd280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd280(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd290; body size 3 bytes.
#line 1 "ENTRY_101dd290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd290(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd2a0; body size 3 bytes.
#line 1 "ENTRY_101dd2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd2a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd2b0; body size 3 bytes.
#line 1 "ENTRY_101dd2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd2b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd2c0; body size 3 bytes.
#line 1 "ENTRY_101dd2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd2c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd2d0; body size 3 bytes.
#line 1 "ENTRY_101dd2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd2d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd2e0; body size 3 bytes.
#line 1 "ENTRY_101dd2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd2e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd2f0; body size 3 bytes.
#line 1 "ENTRY_101dd2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd2f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd300; body size 3 bytes.
#line 1 "ENTRY_101dd300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd300(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd310; body size 3 bytes.
#line 1 "ENTRY_101dd310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd320; body size 3 bytes.
#line 1 "ENTRY_101dd320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd320(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd330; body size 3 bytes.
#line 1 "ENTRY_101dd330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd330(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd340; body size 3 bytes.
#line 1 "ENTRY_101dd340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd350; body size 3 bytes.
#line 1 "ENTRY_101dd350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd350(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd360; body size 3 bytes.
#line 1 "ENTRY_101dd360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd360(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd370; body size 3 bytes.
#line 1 "ENTRY_101dd370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd370(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd380; body size 3 bytes.
#line 1 "ENTRY_101dd380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd390; body size 3 bytes.
#line 1 "ENTRY_101dd390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101dd390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101dd500; body size 14 bytes.
#line 1 "ENTRY_101dd500"

void __thiscall Recovered_Bulk::m_FUN_101dd500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_101cdc00(*param_1,param_2);
  return;
}


// Reference entry 101dd520; body size 16 bytes.
#line 1 "ENTRY_101dd520"

void __thiscall Recovered_Bulk::m_FUN_101dd520(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_101cdc00(*(undefined4 *)*param_1,param_2);
  return;
}


// Reference entry 101de100; body size 28 bytes.
#line 1 "ENTRY_101de100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de100(undefined4 *param_1)

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


// Reference entry 101de130; body size 28 bytes.
#line 1 "ENTRY_101de130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de130(undefined4 *param_1)

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


// Reference entry 101de160; body size 28 bytes.
#line 1 "ENTRY_101de160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de160(undefined4 *param_1)

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


// Reference entry 101de190; body size 28 bytes.
#line 1 "ENTRY_101de190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de190(undefined4 *param_1)

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


// Reference entry 101de1c0; body size 28 bytes.
#line 1 "ENTRY_101de1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de1c0(undefined4 *param_1)

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


// Reference entry 101de1f0; body size 28 bytes.
#line 1 "ENTRY_101de1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de1f0(undefined4 *param_1)

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


// Reference entry 101de220; body size 28 bytes.
#line 1 "ENTRY_101de220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de220(undefined4 *param_1)

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


// Reference entry 101de250; body size 28 bytes.
#line 1 "ENTRY_101de250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de250(undefined4 *param_1)

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


// Reference entry 101de280; body size 28 bytes.
#line 1 "ENTRY_101de280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de280(undefined4 *param_1)

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


// Reference entry 101de2b0; body size 28 bytes.
#line 1 "ENTRY_101de2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de2b0(undefined4 *param_1)

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


// Reference entry 101de2e0; body size 28 bytes.
#line 1 "ENTRY_101de2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de2e0(undefined4 *param_1)

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


// Reference entry 101de310; body size 28 bytes.
#line 1 "ENTRY_101de310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de310(undefined4 *param_1)

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


// Reference entry 101de340; body size 28 bytes.
#line 1 "ENTRY_101de340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de340(undefined4 *param_1)

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


// Reference entry 101de370; body size 28 bytes.
#line 1 "ENTRY_101de370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de370(undefined4 *param_1)

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


// Reference entry 101de3a0; body size 28 bytes.
#line 1 "ENTRY_101de3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de3a0(undefined4 *param_1)

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


// Reference entry 101de3d0; body size 28 bytes.
#line 1 "ENTRY_101de3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de3d0(undefined4 *param_1)

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


// Reference entry 101de400; body size 28 bytes.
#line 1 "ENTRY_101de400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de400(undefined4 *param_1)

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


// Reference entry 101de430; body size 28 bytes.
#line 1 "ENTRY_101de430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de430(undefined4 *param_1)

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


// Reference entry 101de460; body size 28 bytes.
#line 1 "ENTRY_101de460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de460(undefined4 *param_1)

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


// Reference entry 101de490; body size 28 bytes.
#line 1 "ENTRY_101de490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de490(undefined4 *param_1)

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


// Reference entry 101de4c0; body size 28 bytes.
#line 1 "ENTRY_101de4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de4c0(undefined4 *param_1)

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


// Reference entry 101de4f0; body size 28 bytes.
#line 1 "ENTRY_101de4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de4f0(undefined4 *param_1)

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


// Reference entry 101de520; body size 28 bytes.
#line 1 "ENTRY_101de520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de520(undefined4 *param_1)

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


// Reference entry 101de550; body size 28 bytes.
#line 1 "ENTRY_101de550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de550(undefined4 *param_1)

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


// Reference entry 101de580; body size 20 bytes.
#line 1 "ENTRY_101de580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de580(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 101de5a0; body size 20 bytes.
#line 1 "ENTRY_101de5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de5a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 101de5c0; body size 20 bytes.
#line 1 "ENTRY_101de5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101de5c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 101df100; body size 15 bytes.
#line 1 "ENTRY_101df100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101df100(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 0x20))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 101dfd30; body size 21 bytes.
#line 1 "ENTRY_101dfd30"

void __thiscall Recovered_Bulk::m_FUN_101dfd30(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x4c))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101dfe30; body size 21 bytes.
#line 1 "ENTRY_101dfe30"

void __thiscall Recovered_Bulk::m_FUN_101dfe30(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x50))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101dfe50; body size 22 bytes.
#line 1 "ENTRY_101dfe50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101dfe50(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101dfe70; body size 22 bytes.
#line 1 "ENTRY_101dfe70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101dfe70(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101dff60; body size 38 bytes.
#line 1 "ENTRY_101dff60"

SCStr * __thiscall Recovered_Bulk::m_FUN_101dff60(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 101dff90; body size 11 bytes.
#line 1 "ENTRY_101dff90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101dff90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101dffa0; body size 11 bytes.
#line 1 "ENTRY_101dffa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101dffa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101dffb0; body size 22 bytes.
#line 1 "ENTRY_101dffb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101dffb0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101dffd0; body size 11 bytes.
#line 1 "ENTRY_101dffd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101dffd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101dffe0; body size 40 bytes.
#line 1 "ENTRY_101dffe0"

SCStr * __thiscall Recovered_Bulk::m_FUN_101dffe0(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 101e0020; body size 26 bytes.
#line 1 "ENTRY_101e0020"

int * __thiscall Recovered_Bulk::m_FUN_101e0020(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e02e0; body size 26 bytes.
#line 1 "ENTRY_101e02e0"

int * __thiscall Recovered_Bulk::m_FUN_101e02e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e0300; body size 26 bytes.
#line 1 "ENTRY_101e0300"

int * __thiscall Recovered_Bulk::m_FUN_101e0300(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e0320; body size 26 bytes.
#line 1 "ENTRY_101e0320"

int * __thiscall Recovered_Bulk::m_FUN_101e0320(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e0340; body size 26 bytes.
#line 1 "ENTRY_101e0340"

int * __thiscall Recovered_Bulk::m_FUN_101e0340(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e0360; body size 91 bytes.
#line 1 "ENTRY_101e0360"

int * __thiscall Recovered_Bulk::m_FUN_101e0360(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101e03e0; body size 26 bytes.
#line 1 "ENTRY_101e03e0"

int * __thiscall Recovered_Bulk::m_FUN_101e03e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e0400; body size 26 bytes.
#line 1 "ENTRY_101e0400"

int * __thiscall Recovered_Bulk::m_FUN_101e0400(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e0420; body size 91 bytes.
#line 1 "ENTRY_101e0420"

int * __thiscall Recovered_Bulk::m_FUN_101e0420(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101e04a0; body size 26 bytes.
#line 1 "ENTRY_101e04a0"

int * __thiscall Recovered_Bulk::m_FUN_101e04a0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e04c0; body size 25 bytes.
#line 1 "ENTRY_101e04c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e04c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101e05d0; body size 83 bytes.
#line 1 "ENTRY_101e05d0"

int * __thiscall Recovered_Bulk::m_FUN_101e05d0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)((int *)*param_1)) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
      param_1[1] = (int)((int)piVar1);
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 101e0640; body size 78 bytes.
#line 1 "ENTRY_101e0640"

int * __thiscall Recovered_Bulk::m_FUN_101e0640(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101e0890; body size 83 bytes.
#line 1 "ENTRY_101e0890"

int * __thiscall Recovered_Bulk::m_FUN_101e0890(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)((int *)*param_1)) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
      param_1[1] = (int)((int)piVar1);
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 101e0970; body size 83 bytes.
#line 1 "ENTRY_101e0970"

int * __thiscall Recovered_Bulk::m_FUN_101e0970(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)((int *)*param_1)) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
      param_1[1] = (int)((int)piVar1);
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 101e0a50; body size 3 bytes.
#line 1 "ENTRY_101e0a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e0a50(void)

{
  return;
}


// Reference entry 101e0a60; body size 13 bytes.
#line 1 "ENTRY_101e0a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e0a60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101e0c00; body size 5 bytes.
#line 1 "ENTRY_101e0c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e0c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e0c10; body size 5 bytes.
#line 1 "ENTRY_101e0c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e0c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e0c20; body size 37 bytes.
#line 1 "ENTRY_101e0c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e0c20(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101e0d90; body size 7 bytes.
#line 1 "ENTRY_101e0d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e0d90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e0da0; body size 5 bytes.
#line 1 "ENTRY_101e0da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e0da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e0db0; body size 5 bytes.
#line 1 "ENTRY_101e0db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e0db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e0e20; body size 34 bytes.
#line 1 "ENTRY_101e0e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e0e20(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 101e0e50; body size 86 bytes.
#line 1 "ENTRY_101e0e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101e0e50(int *param_1,int *param_2)

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


// Reference entry 101e0ec0; body size 15 bytes.
#line 1 "ENTRY_101e0ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e0ec0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101e0ee0; body size 5 bytes.
#line 1 "ENTRY_101e0ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e0ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e0ef0; body size 5 bytes.
#line 1 "ENTRY_101e0ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e0ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e0f00; body size 5 bytes.
#line 1 "ENTRY_101e0f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e0f00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e0f10; body size 11 bytes.
#line 1 "ENTRY_101e0f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e0f10(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101e0f20; body size 6 bytes.
#line 1 "ENTRY_101e0f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101e0f20(void)

{
  return (char *)("SCIArray");
}


// Reference entry 101e0f30; body size 5 bytes.
#line 1 "ENTRY_101e0f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e0f30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e0f40; body size 32 bytes.
#line 1 "ENTRY_101e0f40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e0f40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e0fb0; body size 16 bytes.
#line 1 "ENTRY_101e0fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e0fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101e0fd0; body size 32 bytes.
#line 1 "ENTRY_101e0fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e0fd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e10c0; body size 18 bytes.
#line 1 "ENTRY_101e10c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e10c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101e10e0; body size 11 bytes.
#line 1 "ENTRY_101e10e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e10e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101e1170; body size 11 bytes.
#line 1 "ENTRY_101e1170"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e1170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101e1180; body size 11 bytes.
#line 1 "ENTRY_101e1180"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e1180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101e1190; body size 13 bytes.
#line 1 "ENTRY_101e1190"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e1190(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101e14f0; body size 14 bytes.
#line 1 "ENTRY_101e14f0"

bool __thiscall Recovered_Bulk::m_FUN_101e14f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101e1510; body size 14 bytes.
#line 1 "ENTRY_101e1510"

bool __thiscall Recovered_Bulk::m_FUN_101e1510(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101e16f0; body size 14 bytes.
#line 1 "ENTRY_101e16f0"

bool __thiscall Recovered_Bulk::m_FUN_101e16f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101e1710; body size 12 bytes.
#line 1 "ENTRY_101e1710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1710(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 101e1830; body size 3 bytes.
#line 1 "ENTRY_101e1830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1830(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e1840; body size 3 bytes.
#line 1 "ENTRY_101e1840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1840(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e1850; body size 3 bytes.
#line 1 "ENTRY_101e1850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1850(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e1860; body size 7 bytes.
#line 1 "ENTRY_101e1860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101e1860(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101e1870; body size 3 bytes.
#line 1 "ENTRY_101e1870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1870(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e1880; body size 3 bytes.
#line 1 "ENTRY_101e1880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1880(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e1890; body size 3 bytes.
#line 1 "ENTRY_101e1890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e18a0; body size 7 bytes.
#line 1 "ENTRY_101e18a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101e18a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101e18b0; body size 3 bytes.
#line 1 "ENTRY_101e18b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e18b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e18c0; body size 3 bytes.
#line 1 "ENTRY_101e18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e18c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e18d0; body size 6 bytes.
#line 1 "ENTRY_101e18d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101e18d0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 101e18e0; body size 6 bytes.
#line 1 "ENTRY_101e18e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101e18e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 101e18f0; body size 6 bytes.
#line 1 "ENTRY_101e18f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101e18f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 101e1900; body size 6 bytes.
#line 1 "ENTRY_101e1900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101e1900(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 101e1910; body size 20 bytes.
#line 1 "ENTRY_101e1910"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e1910(undefined4 *param_2)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 101e19b0; body size 16 bytes.
#line 1 "ENTRY_101e19b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101e19b0(SCStr *param_1,SCStr *param_2)

{
  ((SCStr *)(param_1))->op_lt(param_2);
  return;
}


// Reference entry 101e19f0; body size 14 bytes.
#line 1 "ENTRY_101e19f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101e19f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 101e1f70; body size 3 bytes.
#line 1 "ENTRY_101e1f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1f70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e1f80; body size 3 bytes.
#line 1 "ENTRY_101e1f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e1f90; body size 3 bytes.
#line 1 "ENTRY_101e1f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e1fa0; body size 3 bytes.
#line 1 "ENTRY_101e1fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e1fb0; body size 3 bytes.
#line 1 "ENTRY_101e1fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e1fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e22c0; body size 30 bytes.
#line 1 "ENTRY_101e22c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101e22c0(int param_1)

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


// Reference entry 101e2320; body size 11 bytes.
#line 1 "ENTRY_101e2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e2320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101e23a0; body size 13 bytes.
#line 1 "ENTRY_101e23a0"

void __thiscall Recovered_Bulk::m_FUN_101e23a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 101e23b0; body size 13 bytes.
#line 1 "ENTRY_101e23b0"

void __thiscall Recovered_Bulk::m_FUN_101e23b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 101e23c0; body size 10 bytes.
#line 1 "ENTRY_101e23c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101e23c0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 101e2b30; body size 66 bytes.
#line 1 "ENTRY_101e2b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101e2b30(int param_1,int param_2)

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


// Reference entry 101e2c70; body size 9 bytes.
#line 1 "ENTRY_101e2c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e2c70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101e2c80; body size 9 bytes.
#line 1 "ENTRY_101e2c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e2c80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101e2d70; body size 11 bytes.
#line 1 "ENTRY_101e2d70"

void __thiscall Recovered_Bulk::m_FUN_101e2d70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101e4e00; body size 6 bytes.
#line 1 "ENTRY_101e4e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101e4e00(void)

{
  return (char *)("SCIArray");
}


// Reference entry 101e4fb0; body size 6 bytes.
#line 1 "ENTRY_101e4fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e4fb0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 101e4fc0; body size 6 bytes.
#line 1 "ENTRY_101e4fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e4fc0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 101e4fd0; body size 5 bytes.
#line 1 "ENTRY_101e4fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e4fd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e4fe0; body size 3 bytes.
#line 1 "ENTRY_101e4fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e4fe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e4ff0; body size 3 bytes.
#line 1 "ENTRY_101e4ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e4ff0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e5000; body size 3 bytes.
#line 1 "ENTRY_101e5000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e5000(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e5010; body size 3 bytes.
#line 1 "ENTRY_101e5010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e5010(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e5020; body size 3 bytes.
#line 1 "ENTRY_101e5020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e5020(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e5030; body size 3 bytes.
#line 1 "ENTRY_101e5030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e5030(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e5040; body size 3 bytes.
#line 1 "ENTRY_101e5040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e5040(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e5050; body size 3 bytes.
#line 1 "ENTRY_101e5050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e5050(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e5060; body size 3 bytes.
#line 1 "ENTRY_101e5060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e5060(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e5070; body size 3 bytes.
#line 1 "ENTRY_101e5070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e5070(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e5080; body size 3 bytes.
#line 1 "ENTRY_101e5080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e5080(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e5090; body size 20 bytes.
#line 1 "ENTRY_101e5090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101e5090(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 101e50b0; body size 20 bytes.
#line 1 "ENTRY_101e50b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101e50b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 101e6070; body size 4 bytes.
#line 1 "ENTRY_101e6070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101e6070(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 101e65f0; body size 16 bytes.
#line 1 "ENTRY_101e65f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e65f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101e6df0; body size 20 bytes.
#line 1 "ENTRY_101e6df0"

SCStr * __thiscall Recovered_Bulk::m_FUN_101e6df0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 101e7070; body size 20 bytes.
#line 1 "ENTRY_101e7070"

SCStr * __thiscall Recovered_Bulk::m_FUN_101e7070(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 101e71c0; body size 20 bytes.
#line 1 "ENTRY_101e71c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_101e71c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 101e7d30; body size 25 bytes.
#line 1 "ENTRY_101e7d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e7d30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101e7d50; body size 25 bytes.
#line 1 "ENTRY_101e7d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e7d50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101e7d70; body size 39 bytes.
#line 1 "ENTRY_101e7d70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e7d70(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_1[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e7da0; body size 39 bytes.
#line 1 "ENTRY_101e7da0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e7da0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_1[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e7dd0; body size 39 bytes.
#line 1 "ENTRY_101e7dd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e7dd0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_1[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e7e00; body size 25 bytes.
#line 1 "ENTRY_101e7e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e7e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101e7e20; body size 33 bytes.
#line 1 "ENTRY_101e7e20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e7e20(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 101e7fb0; body size 26 bytes.
#line 1 "ENTRY_101e7fb0"

int * __thiscall Recovered_Bulk::m_FUN_101e7fb0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e8050; body size 25 bytes.
#line 1 "ENTRY_101e8050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e8050(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101e8070; body size 26 bytes.
#line 1 "ENTRY_101e8070"

int * __thiscall Recovered_Bulk::m_FUN_101e8070(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e8110; body size 26 bytes.
#line 1 "ENTRY_101e8110"

int * __thiscall Recovered_Bulk::m_FUN_101e8110(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e8130; body size 26 bytes.
#line 1 "ENTRY_101e8130"

int * __thiscall Recovered_Bulk::m_FUN_101e8130(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101e8150; body size 78 bytes.
#line 1 "ENTRY_101e8150"

int * __thiscall Recovered_Bulk::m_FUN_101e8150(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101e82b0; body size 78 bytes.
#line 1 "ENTRY_101e82b0"

int * __thiscall Recovered_Bulk::m_FUN_101e82b0(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101e8320; body size 83 bytes.
#line 1 "ENTRY_101e8320"

int * __thiscall Recovered_Bulk::m_FUN_101e8320(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)((int *)*param_1)) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
      param_1[1] = (int)((int)piVar1);
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 101e8470; body size 3 bytes.
#line 1 "ENTRY_101e8470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e8470(void)

{
  return;
}


// Reference entry 101e87b0; body size 39 bytes.
#line 1 "ENTRY_101e87b0"

void __thiscall Recovered_Bulk::m_FUN_101e87b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 101e87e0; body size 39 bytes.
#line 1 "ENTRY_101e87e0"

void __thiscall Recovered_Bulk::m_FUN_101e87e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 101e8810; body size 39 bytes.
#line 1 "ENTRY_101e8810"

void __thiscall Recovered_Bulk::m_FUN_101e8810(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 101e8840; body size 39 bytes.
#line 1 "ENTRY_101e8840"

void __thiscall Recovered_Bulk::m_FUN_101e8840(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 101e8870; body size 39 bytes.
#line 1 "ENTRY_101e8870"

void __thiscall Recovered_Bulk::m_FUN_101e8870(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 101e88a0; body size 39 bytes.
#line 1 "ENTRY_101e88a0"

void __thiscall Recovered_Bulk::m_FUN_101e88a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 101e88d0; body size 39 bytes.
#line 1 "ENTRY_101e88d0"

void __thiscall Recovered_Bulk::m_FUN_101e88d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 101e8e40; body size 7 bytes.
#line 1 "ENTRY_101e8e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e8e40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e8e50; body size 7 bytes.
#line 1 "ENTRY_101e8e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e8e50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e8e60; body size 7 bytes.
#line 1 "ENTRY_101e8e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e8e60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101e8e70; body size 93 bytes.
#line 1 "ENTRY_101e8e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_101e8e70(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int *)((param_2)) == (int *)(param_1)) {
    return (int *)(param_3);
  }
  do {
    iVar2 = (int)(param_2[-2]);
    piVar4 = (int *)(param_2 + -2);
    piVar3 = (int *)(param_3 + -2);
    if ((int)(iVar2) != *piVar3) {
      piVar1 = (int *)((int *)param_3[-1]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        *piVar3 = (int)(0);
        param_3[-1] = (int)(0);
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*piVar4);
      }
      *piVar3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[-1]);
      param_3[-1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_3 = (int *)(piVar3);
    param_2 = (int *)(piVar4);
  } while ((int *)(piVar4) != (int *)(param_1));
  return (int *)(piVar3);
}


// Reference entry 101e8f70; body size 92 bytes.
#line 1 "ENTRY_101e8f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_101e8f70(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((int *)(param_1) == (int *)(param_2)) {
    return (int *)(param_3);
  }
  do {
    iVar2 = (int)(*param_1);
    if ((int)(iVar2) != *param_3) {
      piVar1 = (int *)((int *)param_3[1]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        *param_3 = (int)(0);
        param_3[1] = (int)(0);
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*param_1);
      }
      *param_3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_1[1]);
      param_3[1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);
  } while ((int *)(param_1) != (int *)(param_2));
  return (int *)(param_3);
}


// Reference entry 101e8ff0; body size 92 bytes.
#line 1 "ENTRY_101e8ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_101e8ff0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((int *)(param_1) == (int *)(param_2)) {
    return (int *)(param_3);
  }
  do {
    iVar2 = (int)(*param_1);
    if ((int)(iVar2) != *param_3) {
      piVar1 = (int *)((int *)param_3[1]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        *param_3 = (int)(0);
        param_3[1] = (int)(0);
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*param_1);
      }
      *param_3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_1[1]);
      param_3[1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);
  } while ((int *)(param_1) != (int *)(param_2));
  return (int *)(param_3);
}


// Reference entry 101e9070; body size 3 bytes.
#line 1 "ENTRY_101e9070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e9070(void)

{
  return;
}


// Reference entry 101e9080; body size 24 bytes.
#line 1 "ENTRY_101e9080"

void __thiscall Recovered_Bulk::m_FUN_101e9080(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101e90e0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 101e90a0; body size 24 bytes.
#line 1 "ENTRY_101e90a0"

void __thiscall Recovered_Bulk::m_FUN_101e90a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101e9180(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 101e90c0; body size 5 bytes.
#line 1 "ENTRY_101e90c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e90c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e90d0; body size 5 bytes.
#line 1 "ENTRY_101e90d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e90d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9360; body size 5 bytes.
#line 1 "ENTRY_101e9360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9370; body size 5 bytes.
#line 1 "ENTRY_101e9370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9380; body size 5 bytes.
#line 1 "ENTRY_101e9380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9390; body size 5 bytes.
#line 1 "ENTRY_101e9390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e93a0; body size 5 bytes.
#line 1 "ENTRY_101e93a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e93a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e93b0; body size 5 bytes.
#line 1 "ENTRY_101e93b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e93b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e93c0; body size 18 bytes.
#line 1 "ENTRY_101e93c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e93c0(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 8);
  return;
}


// Reference entry 101e93e0; body size 20 bytes.
#line 1 "ENTRY_101e93e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101e93e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_101e8480(param_1,param_2,param_2);
  return;
}


// Reference entry 101e9400; body size 28 bytes.
#line 1 "ENTRY_101e9400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e9400(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101e9430; body size 28 bytes.
#line 1 "ENTRY_101e9430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e9430(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101e9460; body size 28 bytes.
#line 1 "ENTRY_101e9460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e9460(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101e9490; body size 28 bytes.
#line 1 "ENTRY_101e9490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e9490(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101e94c0; body size 28 bytes.
#line 1 "ENTRY_101e94c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e94c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101e94f0; body size 28 bytes.
#line 1 "ENTRY_101e94f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101e94f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101e9600; body size 12 bytes.
#line 1 "ENTRY_101e9600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101e9600(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 101e9bf0; body size 15 bytes.
#line 1 "ENTRY_101e9bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9bf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101e9c10; body size 5 bytes.
#line 1 "ENTRY_101e9c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9c20; body size 5 bytes.
#line 1 "ENTRY_101e9c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9c30; body size 5 bytes.
#line 1 "ENTRY_101e9c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9c40; body size 5 bytes.
#line 1 "ENTRY_101e9c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9c50; body size 5 bytes.
#line 1 "ENTRY_101e9c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9c60; body size 5 bytes.
#line 1 "ENTRY_101e9c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9c70; body size 5 bytes.
#line 1 "ENTRY_101e9c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9c80; body size 5 bytes.
#line 1 "ENTRY_101e9c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9c90; body size 6 bytes.
#line 1 "ENTRY_101e9c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101e9c90(void)

{
  return (char *)("SCISettingsMenu");
}


// Reference entry 101e9ca0; body size 6 bytes.
#line 1 "ENTRY_101e9ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101e9ca0(void)

{
  return (char *)("SCISettingsSection");
}


// Reference entry 101e9cb0; body size 5 bytes.
#line 1 "ENTRY_101e9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9cc0; body size 5 bytes.
#line 1 "ENTRY_101e9cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9cd0; body size 5 bytes.
#line 1 "ENTRY_101e9cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101e9cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101e9ce0; body size 12 bytes.
#line 1 "ENTRY_101e9ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101e9ce0(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 8);
}


// Reference entry 101e9cf0; body size 27 bytes.
#line 1 "ENTRY_101e9cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e9cf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9d20; body size 27 bytes.
#line 1 "ENTRY_101e9d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e9d20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9d50; body size 16 bytes.
#line 1 "ENTRY_101e9d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e9d50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9d70; body size 16 bytes.
#line 1 "ENTRY_101e9d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e9d70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9d90; body size 16 bytes.
#line 1 "ENTRY_101e9d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e9d90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9db0; body size 16 bytes.
#line 1 "ENTRY_101e9db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e9db0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9dd0; body size 32 bytes.
#line 1 "ENTRY_101e9dd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9dd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e9e40; body size 16 bytes.
#line 1 "ENTRY_101e9e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e9e40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9e60; body size 32 bytes.
#line 1 "ENTRY_101e9e60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9e60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e9f50; body size 21 bytes.
#line 1 "ENTRY_101e9f50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9f50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9f70; body size 21 bytes.
#line 1 "ENTRY_101e9f70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9f70(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9f90; body size 11 bytes.
#line 1 "ENTRY_101e9f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9f90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9fa0; body size 11 bytes.
#line 1 "ENTRY_101e9fa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9fa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9fb0; body size 11 bytes.
#line 1 "ENTRY_101e9fb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9fb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9fc0; body size 11 bytes.
#line 1 "ENTRY_101e9fc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9fc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9fd0; body size 25 bytes.
#line 1 "ENTRY_101e9fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101e9fd0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 101e9ff0; body size 23 bytes.
#line 1 "ENTRY_101e9ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101e9ff0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101ea010; body size 23 bytes.
#line 1 "ENTRY_101ea010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ea010(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101ea030; body size 3 bytes.
#line 1 "ENTRY_101ea030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ea030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ea040; body size 3 bytes.
#line 1 "ENTRY_101ea040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ea040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ea050; body size 49 bytes.
#line 1 "ENTRY_101ea050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ea050(undefined4 *param_2)
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


// Reference entry 101ea150; body size 23 bytes.
#line 1 "ENTRY_101ea150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ea150(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101ea170; body size 23 bytes.
#line 1 "ENTRY_101ea170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ea170(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101ea190; body size 42 bytes.
#line 1 "ENTRY_101ea190"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ea190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 101ea1d0; body size 9 bytes.
#line 1 "ENTRY_101ea1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ea1d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizManager_Listener);
  return (undefined4 *)(param_1);
}


// Reference entry 101ea1e0; body size 9 bytes.
#line 1 "ENTRY_101ea1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ea1e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISettingsMenu);
  return (undefined4 *)(param_1);
}


// Reference entry 101ea1f0; body size 9 bytes.
#line 1 "ENTRY_101ea1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ea1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISettingsSection);
  return (undefined4 *)(param_1);
}


// Reference entry 101ea350; body size 56 bytes.
#line 1 "ENTRY_101ea350"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101ea350(undefined4 param_2,undefined4 param_3,undefined1 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(param_3);
  *(undefined1*)(param_1 + 4) = (undefined1)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRequireTokenActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 101eb230; body size 19 bytes.
#line 1 "ENTRY_101eb230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101eb230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101eb250; body size 7 bytes.
#line 1 "ENTRY_101eb250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101eb250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101eb260; body size 7 bytes.
#line 1 "ENTRY_101eb260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101eb260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101eb290; body size 19 bytes.
#line 1 "ENTRY_101eb290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101eb290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101eb3d0; body size 25 bytes.
#line 1 "ENTRY_101eb3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101eb3d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  piVar1 = (int *)((int *)param_1[0x20]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x1f] = (undefined4)(0);
    param_1[0x20] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_release();
  param_1[0x1c] = (undefined4)(0);
  thunk_FUN_10120220();
  piVar1 = (int *)((int *)param_1[0x12]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x11] = (undefined4)(0);
    param_1[0x12] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101eb1b0();
  thunk_FUN_101eb1b0();
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101eb670; body size 65 bytes.
#line 1 "ENTRY_101eb670"

int * __thiscall Recovered_Bulk::m_FUN_101eb670(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101eb740; body size 65 bytes.
#line 1 "ENTRY_101eb740"

int * __thiscall Recovered_Bulk::m_FUN_101eb740(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101eb810; body size 31 bytes.
#line 1 "ENTRY_101eb810"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101eb810(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_101e8480(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101eb840; body size 14 bytes.
#line 1 "ENTRY_101eb840"

bool __thiscall Recovered_Bulk::m_FUN_101eb840(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101eb860; body size 14 bytes.
#line 1 "ENTRY_101eb860"

bool __thiscall Recovered_Bulk::m_FUN_101eb860(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101eb880; body size 14 bytes.
#line 1 "ENTRY_101eb880"

bool __thiscall Recovered_Bulk::m_FUN_101eb880(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101eb8a0; body size 14 bytes.
#line 1 "ENTRY_101eb8a0"

bool __thiscall Recovered_Bulk::m_FUN_101eb8a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101eb8c0; body size 12 bytes.
#line 1 "ENTRY_101eb8c0"

int __thiscall Recovered_Bulk::m_FUN_101eb8c0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 101eb8d0; body size 12 bytes.
#line 1 "ENTRY_101eb8d0"

int __thiscall Recovered_Bulk::m_FUN_101eb8d0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 101eb8e0; body size 12 bytes.
#line 1 "ENTRY_101eb8e0"

int __thiscall Recovered_Bulk::m_FUN_101eb8e0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 101eb8f0; body size 3 bytes.
#line 1 "ENTRY_101eb8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eb8f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eb900; body size 7 bytes.
#line 1 "ENTRY_101eb900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101eb900(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101eb910; body size 7 bytes.
#line 1 "ENTRY_101eb910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101eb910(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101eb920; body size 3 bytes.
#line 1 "ENTRY_101eb920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eb920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eb930; body size 3 bytes.
#line 1 "ENTRY_101eb930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eb930(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eb940; body size 7 bytes.
#line 1 "ENTRY_101eb940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101eb940(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101eb950; body size 7 bytes.
#line 1 "ENTRY_101eb950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101eb950(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101eb960; body size 3 bytes.
#line 1 "ENTRY_101eb960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eb960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eb970; body size 7 bytes.
#line 1 "ENTRY_101eb970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101eb970(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101eb980; body size 3 bytes.
#line 1 "ENTRY_101eb980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eb980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eb990; body size 7 bytes.
#line 1 "ENTRY_101eb990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101eb990(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101eb9a0; body size 7 bytes.
#line 1 "ENTRY_101eb9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101eb9a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101eb9b0; body size 7 bytes.
#line 1 "ENTRY_101eb9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101eb9b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101eb9c0; body size 7 bytes.
#line 1 "ENTRY_101eb9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101eb9c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101eb9d0; body size 3 bytes.
#line 1 "ENTRY_101eb9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eb9d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eb9e0; body size 3 bytes.
#line 1 "ENTRY_101eb9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eb9e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eb9f0; body size 3 bytes.
#line 1 "ENTRY_101eb9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eb9f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eba00; body size 3 bytes.
#line 1 "ENTRY_101eba00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eba00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eba10; body size 3 bytes.
#line 1 "ENTRY_101eba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eba10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eba20; body size 3 bytes.
#line 1 "ENTRY_101eba20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eba20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eba30; body size 3 bytes.
#line 1 "ENTRY_101eba30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eba30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eba40; body size 3 bytes.
#line 1 "ENTRY_101eba40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eba40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eba50; body size 3 bytes.
#line 1 "ENTRY_101eba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eba50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eba60; body size 3 bytes.
#line 1 "ENTRY_101eba60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eba60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eba70; body size 3 bytes.
#line 1 "ENTRY_101eba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101eba70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101eba80; body size 16 bytes.
#line 1 "ENTRY_101eba80"

void __thiscall Recovered_Bulk::m_FUN_101eba80(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 101ebaa0; body size 6 bytes.
#line 1 "ENTRY_101ebaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_101ebaa0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 101ebab0; body size 16 bytes.
#line 1 "ENTRY_101ebab0"

void __thiscall Recovered_Bulk::m_FUN_101ebab0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 101ebad0; body size 6 bytes.
#line 1 "ENTRY_101ebad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_101ebad0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 101ebae0; body size 16 bytes.
#line 1 "ENTRY_101ebae0"

void __thiscall Recovered_Bulk::m_FUN_101ebae0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 101ebb00; body size 20 bytes.
#line 1 "ENTRY_101ebb00"

void __thiscall Recovered_Bulk::m_FUN_101ebb00(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * -8);
  return;
}


// Reference entry 101ebb20; body size 18 bytes.
#line 1 "ENTRY_101ebb20"

void __thiscall Recovered_Bulk::m_FUN_101ebb20(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 101ebb40; body size 18 bytes.
#line 1 "ENTRY_101ebb40"

void __thiscall Recovered_Bulk::m_FUN_101ebb40(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 101ebb60; body size 16 bytes.
#line 1 "ENTRY_101ebb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101ebb60(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x24) + 8))();
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 101ebb80; body size 14 bytes.
#line 1 "ENTRY_101ebb80"

int * __thiscall Recovered_Bulk::m_FUN_101ebb80(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 101ebba0; body size 14 bytes.
#line 1 "ENTRY_101ebba0"

int * __thiscall Recovered_Bulk::m_FUN_101ebba0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 101ebbc0; body size 14 bytes.
#line 1 "ENTRY_101ebbc0"

int * __thiscall Recovered_Bulk::m_FUN_101ebbc0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 101ebbe0; body size 14 bytes.
#line 1 "ENTRY_101ebbe0"

int * __thiscall Recovered_Bulk::m_FUN_101ebbe0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 101ebc00; body size 16 bytes.
#line 1 "ENTRY_101ebc00"

int * __thiscall Recovered_Bulk::m_FUN_101ebc00(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * -8);
  return (int *)(param_1);
}


// Reference entry 101ebc20; body size 16 bytes.
#line 1 "ENTRY_101ebc20"

int * __thiscall Recovered_Bulk::m_FUN_101ebc20(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * -8);
  return (int *)(param_1);
}


// Reference entry 101ebfe0; body size 30 bytes.
#line 1 "ENTRY_101ebfe0"

void __thiscall Recovered_Bulk::m_FUN_101ebfe0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_101ec940(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 101ec010; body size 30 bytes.
#line 1 "ENTRY_101ec010"

void __thiscall Recovered_Bulk::m_FUN_101ec010(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_101ec9b0(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 101ec040; body size 49 bytes.
#line 1 "ENTRY_101ec040"

uint __thiscall Recovered_Bulk::m_FUN_101ec040(uint param_2)
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


// Reference entry 101ec080; body size 49 bytes.
#line 1 "ENTRY_101ec080"

uint __thiscall Recovered_Bulk::m_FUN_101ec080(uint param_2)
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


// Reference entry 101ec1e0; body size 182 bytes.
#line 1 "ENTRY_101ec1e0"

void __thiscall Recovered_Bulk::m_FUN_101ec1e0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_101ec790();
  }
  iVar2 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar2 >> 3);
  if (0x1fffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = (uint)(0x1fffffff);
  }
  else {
    uVar3 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar3 < param_2) {
      uVar3 = (uint)(param_2);
    }
  }
  if (iVar2 != 0) {
    thunk_FUN_101e8710(iVar2,param_1[1],param_1);
    iVar2 = (int)(*param_1);
    uVar4 = (uint)(param_1[2] - iVar2 & 0xfffffff8);
    iVar1 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar1 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar2 - iVar1) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar1,uVar4);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  iVar2 = (int)(thunk_FUN_101ec9b0(uVar3), 0);
  *param_1 = (int)(iVar2);
  param_1[1] = (int)(iVar2);
  param_1[2] = (int)(iVar2 + uVar3 * 8);
  return;
}


// Reference entry 101ec2d0; body size 3 bytes.
#line 1 "ENTRY_101ec2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101ec2d0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 101ec2e0; body size 3 bytes.
#line 1 "ENTRY_101ec2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101ec2e0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 101ec2f0; body size 21 bytes.
#line 1 "ENTRY_101ec2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101ec2f0(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_101e8480(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 101ec350; body size 8 bytes.
#line 1 "ENTRY_101ec350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101ec350(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 101ec360; body size 3 bytes.
#line 1 "ENTRY_101ec360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ec360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ec370; body size 3 bytes.
#line 1 "ENTRY_101ec370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ec370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ec380; body size 3 bytes.
#line 1 "ENTRY_101ec380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ec380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ec390; body size 3 bytes.
#line 1 "ENTRY_101ec390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ec390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ec3a0; body size 3 bytes.
#line 1 "ENTRY_101ec3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ec3a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ec3b0; body size 3 bytes.
#line 1 "ENTRY_101ec3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ec3b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ec3c0; body size 3 bytes.
#line 1 "ENTRY_101ec3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ec3c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ec3d0; body size 3 bytes.
#line 1 "ENTRY_101ec3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ec3d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ec3e0; body size 4 bytes.
#line 1 "ENTRY_101ec3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ec3e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 101ec3f0; body size 7 bytes.
#line 1 "ENTRY_101ec3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101ec3f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 101ec400; body size 13 bytes.
#line 1 "ENTRY_101ec400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101ec400(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101ec410; body size 13 bytes.
#line 1 "ENTRY_101ec410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101ec410(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101ec420; body size 3 bytes.
#line 1 "ENTRY_101ec420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101ec420(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 101ec430; body size 3 bytes.
#line 1 "ENTRY_101ec430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101ec430(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 101ec440; body size 6 bytes.
#line 1 "ENTRY_101ec440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101ec440(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 101ec450; body size 6 bytes.
#line 1 "ENTRY_101ec450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101ec450(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 101ec460; body size 10 bytes.
#line 1 "ENTRY_101ec460"

void __thiscall Recovered_Bulk::m_FUN_101ec460(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 101ec6e0; body size 24 bytes.
#line 1 "ENTRY_101ec6e0"

void __thiscall Recovered_Bulk::m_FUN_101ec6e0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101e90e0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 101ec700; body size 24 bytes.
#line 1 "ENTRY_101ec700"

void __thiscall Recovered_Bulk::m_FUN_101ec700(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101e9180(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 101ec740; body size 24 bytes.
#line 1 "ENTRY_101ec740"

void __thiscall Recovered_Bulk::m_FUN_101ec740(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101e9180(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 101ec760; body size 3 bytes.
#line 1 "ENTRY_101ec760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101ec760(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 101ec770; body size 3 bytes.
#line 1 "ENTRY_101ec770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101ec770(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 101ed070; body size 29 bytes.
#line 1 "ENTRY_101ed070"

int __thiscall Recovered_Bulk::m_FUN_101ed070(uint param_2)
{
  int *param_1 = (int *)this;
  if (param_2 < (uint)(param_1[1] - *param_1 >> 3)) {
    return (int)(*param_1 + param_2 * 8);
  }
                    
  thunk_FUN_101ec7a0();
}


// Reference entry 101ed0a0; body size 11 bytes.
#line 1 "ENTRY_101ed0a0"

void __thiscall Recovered_Bulk::m_FUN_101ed0a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101ed0b0; body size 11 bytes.
#line 1 "ENTRY_101ed0b0"

void __thiscall Recovered_Bulk::m_FUN_101ed0b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101ed0c0; body size 11 bytes.
#line 1 "ENTRY_101ed0c0"

void __thiscall Recovered_Bulk::m_FUN_101ed0c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101ed590; body size 9 bytes.
#line 1 "ENTRY_101ed590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101ed590(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 101ed5a0; body size 9 bytes.
#line 1 "ENTRY_101ed5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101ed5a0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 101ede20; body size 9 bytes.
#line 1 "ENTRY_101ede20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ede20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101ede30; body size 9 bytes.
#line 1 "ENTRY_101ede30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ede30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 101ee090; body size 12 bytes.
#line 1 "ENTRY_101ee090"

void __thiscall Recovered_Bulk::m_FUN_101ee090(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101ee0a0; body size 12 bytes.
#line 1 "ENTRY_101ee0a0"

void __thiscall Recovered_Bulk::m_FUN_101ee0a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101ee0b0; body size 12 bytes.
#line 1 "ENTRY_101ee0b0"

void __thiscall Recovered_Bulk::m_FUN_101ee0b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101ee620; body size 4 bytes.
#line 1 "ENTRY_101ee620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101ee620(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 101f1370; body size 23 bytes.
#line 1 "ENTRY_101f1370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101f1370(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0x38);
  if (*(int *)(param_1 + 0x84) < 1) {
    iVar1 = (int)(0x2c);
  }
  return (int)(iVar1 + param_1);
}


// Reference entry 101f1390; body size 23 bytes.
#line 1 "ENTRY_101f1390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101f1390(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0x38);
  if (*(int *)(param_1 + 0x84) < 1) {
    iVar1 = (int)(0x2c);
  }
  return (int)(iVar1 + param_1);
}


// Reference entry 101f13b0; body size 6 bytes.
#line 1 "ENTRY_101f13b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f13b0(void)

{
  return (undefined4)(DAT_122f5674);
}


// Reference entry 101f1640; body size 20 bytes.
#line 1 "ENTRY_101f1640"

SCStr * __thiscall Recovered_Bulk::m_FUN_101f1640(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x20));
  return (SCStr *)(param_2);
}


// Reference entry 101f1720; body size 24 bytes.
#line 1 "ENTRY_101f1720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_101f1720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_101e9610(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 101f1c40; body size 6 bytes.
#line 1 "ENTRY_101f1c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101f1c40(void)

{
  return (char *)("SCISettingsMenu");
}


// Reference entry 101f1c50; body size 6 bytes.
#line 1 "ENTRY_101f1c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101f1c50(void)

{
  return (char *)("SCISettingsSection");
}


// Reference entry 101f1cb0; body size 8 bytes.
#line 1 "ENTRY_101f1cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101f1cb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) == 0);
}


// Reference entry 101f1d00; body size 7 bytes.
#line 1 "ENTRY_101f1d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101f1d00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101f1d10; body size 6 bytes.
#line 1 "ENTRY_101f1d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f1d10(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 101f1d20; body size 6 bytes.
#line 1 "ENTRY_101f1d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f1d20(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 101f1d30; body size 6 bytes.
#line 1 "ENTRY_101f1d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f1d30(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 101f1d40; body size 6 bytes.
#line 1 "ENTRY_101f1d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f1d40(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 101f2040; body size 3 bytes.
#line 1 "ENTRY_101f2040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f2040(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f2050; body size 3 bytes.
#line 1 "ENTRY_101f2050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f2050(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f2060; body size 3 bytes.
#line 1 "ENTRY_101f2060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f2060(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f2070; body size 3 bytes.
#line 1 "ENTRY_101f2070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f2070(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f2080; body size 3 bytes.
#line 1 "ENTRY_101f2080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f2080(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f2470; body size 28 bytes.
#line 1 "ENTRY_101f2470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101f2470(undefined4 *param_1)

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


// Reference entry 101f24a0; body size 28 bytes.
#line 1 "ENTRY_101f24a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101f24a0(undefined4 *param_1)

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


// Reference entry 101f24d0; body size 28 bytes.
#line 1 "ENTRY_101f24d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101f24d0(undefined4 *param_1)

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


// Reference entry 101f2500; body size 28 bytes.
#line 1 "ENTRY_101f2500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101f2500(undefined4 *param_1)

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


// Reference entry 101f2530; body size 28 bytes.
#line 1 "ENTRY_101f2530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101f2530(undefined4 *param_1)

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


// Reference entry 101f2560; body size 28 bytes.
#line 1 "ENTRY_101f2560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101f2560(undefined4 *param_1)

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


// Reference entry 101f2930; body size 25 bytes.
#line 1 "ENTRY_101f2930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101f2930(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x38));
  thunk_FUN_101e8710(*puVar1,*(undefined4 *)(param_1 + 0x3c),puVar1);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(*puVar1);
  return;
}


// Reference entry 101f2e90; body size 5 bytes.
#line 1 "ENTRY_101f2e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f2e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f3190; body size 33 bytes.
#line 1 "ENTRY_101f3190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101f3190(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_101ee360(param_1), 0);
  if (iVar1 != -1) {
    thunk_FUN_101f2f90(iVar1,param_2);
  }
  return;
}


// Reference entry 101f3480; body size 9 bytes.
#line 1 "ENTRY_101f3480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101f3480(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 101f3490; body size 9 bytes.
#line 1 "ENTRY_101f3490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101f3490(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 101f3ab0; body size 47 bytes.
#line 1 "ENTRY_101f3ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101f3ab0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_1 + 0x89) != '\0') {
    uStack_c = (undefined4)(0);
    *(undefined1*)(param_1 + 0x89) = (undefined1)(0);
    iStack_14 = (int)(param_1);
    iStack_10 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCISettingsMenu:onValidChanged");
    thunk_FUN_103d65f0();
  }
  return;
}


// Reference entry 101f3c30; body size 26 bytes.
#line 1 "ENTRY_101f3c30"

int * __thiscall Recovered_Bulk::m_FUN_101f3c30(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101f3c50; body size 91 bytes.
#line 1 "ENTRY_101f3c50"

int * __thiscall Recovered_Bulk::m_FUN_101f3c50(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101f4050; body size 3 bytes.
#line 1 "ENTRY_101f4050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101f4050(void)

{
  return;
}


// Reference entry 101f4230; body size 40 bytes.
#line 1 "ENTRY_101f4230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101f4230(undefined4 param_1,int param_2)

{
  if (0x1f < (param_2 - (int)*(void **)(param_2 + -4)) - 4U) {
                    
                    
                    
    _invalid_parameter_noinfo_noreturn();
    return;
  }
  free(*(void **)(param_2 + -4));
  return;
}


// Reference entry 101f4310; body size 5 bytes.
#line 1 "ENTRY_101f4310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f4310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f4320; body size 5 bytes.
#line 1 "ENTRY_101f4320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f4320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f4330; body size 5 bytes.
#line 1 "ENTRY_101f4330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f4330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f4340; body size 5 bytes.
#line 1 "ENTRY_101f4340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f4340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f4460; body size 15 bytes.
#line 1 "ENTRY_101f4460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f4460(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101f4480; body size 6 bytes.
#line 1 "ENTRY_101f4480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101f4480(void)

{
  return (char *)("SCIAppReporting");
}


// Reference entry 101f4490; body size 27 bytes.
#line 1 "ENTRY_101f4490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101f4490(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101f44f0; body size 16 bytes.
#line 1 "ENTRY_101f44f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101f44f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101f4510; body size 32 bytes.
#line 1 "ENTRY_101f4510"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f4510(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101f4580; body size 16 bytes.
#line 1 "ENTRY_101f4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101f4580(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101f45e0; body size 11 bytes.
#line 1 "ENTRY_101f45e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f45e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101f45f0; body size 9 bytes.
#line 1 "ENTRY_101f45f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101f45f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101f4600; body size 11 bytes.
#line 1 "ENTRY_101f4600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f4600(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101f4610; body size 9 bytes.
#line 1 "ENTRY_101f4610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101f4610(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101f4620; body size 11 bytes.
#line 1 "ENTRY_101f4620"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f4620(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101f4630; body size 9 bytes.
#line 1 "ENTRY_101f4630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101f4630(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101f4640; body size 11 bytes.
#line 1 "ENTRY_101f4640"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f4640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101f4650; body size 9 bytes.
#line 1 "ENTRY_101f4650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101f4650(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101f4660; body size 11 bytes.
#line 1 "ENTRY_101f4660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f4660(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101f4670; body size 9 bytes.
#line 1 "ENTRY_101f4670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101f4670(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101f4740; body size 9 bytes.
#line 1 "ENTRY_101f4740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101f4740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAppReporting);
  return (undefined4 *)(param_1);
}


// Reference entry 101f4c00; body size 7 bytes.
#line 1 "ENTRY_101f4c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101f4c00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101f4c10; body size 65 bytes.
#line 1 "ENTRY_101f4c10"

int * __thiscall Recovered_Bulk::m_FUN_101f4c10(int *param_2)
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
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 101f4d50; body size 14 bytes.
#line 1 "ENTRY_101f4d50"

bool __thiscall Recovered_Bulk::m_FUN_101f4d50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101f4d70; body size 14 bytes.
#line 1 "ENTRY_101f4d70"

bool __thiscall Recovered_Bulk::m_FUN_101f4d70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 101f4d90; body size 14 bytes.
#line 1 "ENTRY_101f4d90"

bool __thiscall Recovered_Bulk::m_FUN_101f4d90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101f4db0; body size 14 bytes.
#line 1 "ENTRY_101f4db0"

bool __thiscall Recovered_Bulk::m_FUN_101f4db0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 101f4dd0; body size 7 bytes.
#line 1 "ENTRY_101f4dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101f4dd0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101f4de0; body size 3 bytes.
#line 1 "ENTRY_101f4de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f4de0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f4df0; body size 7 bytes.
#line 1 "ENTRY_101f4df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101f4df0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101f4e00; body size 3 bytes.
#line 1 "ENTRY_101f4e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f4e00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f4e10; body size 3 bytes.
#line 1 "ENTRY_101f4e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f4e10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f4e20; body size 3 bytes.
#line 1 "ENTRY_101f4e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f4e20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f4e30; body size 3 bytes.
#line 1 "ENTRY_101f4e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f4e30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f4e40; body size 3 bytes.
#line 1 "ENTRY_101f4e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f4e40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f4e50; body size 6 bytes.
#line 1 "ENTRY_101f4e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101f4e50(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 101f4e60; body size 6 bytes.
#line 1 "ENTRY_101f4e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101f4e60(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 101f4e70; body size 6 bytes.
#line 1 "ENTRY_101f4e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101f4e70(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 101f4e80; body size 3 bytes.
#line 1 "ENTRY_101f4e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f4e80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f4e90; body size 3 bytes.
#line 1 "ENTRY_101f4e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f4e90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f4ff0; body size 6 bytes.
#line 1 "ENTRY_101f4ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_101f4ff0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 101f5000; body size 16 bytes.
#line 1 "ENTRY_101f5000"

void __thiscall Recovered_Bulk::m_FUN_101f5000(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 101f52a0; body size 3 bytes.
#line 1 "ENTRY_101f52a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101f52a0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 101f5350; body size 3 bytes.
#line 1 "ENTRY_101f5350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f5350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f5360; body size 3 bytes.
#line 1 "ENTRY_101f5360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f5360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f5370; body size 3 bytes.
#line 1 "ENTRY_101f5370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f5370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f5580; body size 13 bytes.
#line 1 "ENTRY_101f5580"

void __thiscall Recovered_Bulk::m_FUN_101f5580(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 101f5590; body size 11 bytes.
#line 1 "ENTRY_101f5590"

void __thiscall Recovered_Bulk::m_FUN_101f5590(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101f55a0; body size 55 bytes.
#line 1 "ENTRY_101f55a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101f55a0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x102c);
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


// Reference entry 101f6360; body size 9 bytes.
#line 1 "ENTRY_101f6360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f6360(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 101f6370; body size 11 bytes.
#line 1 "ENTRY_101f6370"

void __thiscall Recovered_Bulk::m_FUN_101f6370(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101f6380; body size 12 bytes.
#line 1 "ENTRY_101f6380"

void __thiscall Recovered_Bulk::m_FUN_101f6380(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101f8160; body size 6 bytes.
#line 1 "ENTRY_101f8160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101f8160(void)

{
  return (char *)("SCIAppReporting");
}


// Reference entry 101f8340; body size 7 bytes.
#line 1 "ENTRY_101f8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101f8340(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101f8350; body size 7 bytes.
#line 1 "ENTRY_101f8350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101f8350(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101f8360; body size 7 bytes.
#line 1 "ENTRY_101f8360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101f8360(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101f8490; body size 5 bytes.
#line 1 "ENTRY_101f8490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f8490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f84a0; body size 3 bytes.
#line 1 "ENTRY_101f84a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f84a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f84b0; body size 3 bytes.
#line 1 "ENTRY_101f84b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101f84b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101f85e0; body size 28 bytes.
#line 1 "ENTRY_101f85e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101f85e0(undefined4 *param_1)

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


// Reference entry 101f8610; body size 20 bytes.
#line 1 "ENTRY_101f8610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101f8610(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 101f9890; body size 106 bytes.
#line 1 "ENTRY_101f9890"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101f9890(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1 + 2), 0);
      param_1[0xb] = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return (undefined4 *)(param_1);
      }
    }
    else {
      param_1[0xb] = (undefined4)(piVar1);
      param_2[9] = (int)(0);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101f9a30; body size 12 bytes.
#line 1 "ENTRY_101f9a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_101f9a30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 101f9a40; body size 40 bytes.
#line 1 "ENTRY_101f9a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101f9a40(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 101f9ba0; body size 122 bytes.
#line 1 "ENTRY_101f9ba0"

void __thiscall Recovered_Bulk::m_FUN_101f9ba0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_2[9] != 0) {
    puVar2 = (undefined4 *)(operator_new(0x30), 0);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
    puVar2[0xb] = (undefined4)(0);
    piVar1 = (int *)((int *)param_2[9]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      if ((int *)(piVar1) == (int *)(param_2)) {
        uVar3 = (undefined4)((**(code **)(*piVar1 + 4))(puVar2 + 2), 0);
        puVar2[0xb] = (undefined4)(uVar3);
        piVar1 = (int *)((int *)param_2[9]);
        if ((int *)(piVar1) != (int *)(0x0)) {
          (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
          param_2[9] = (int)(0);
          *(undefined4**)(param_1 + 0x24) = (undefined4 *)(puVar2);
          return;
        }
      }
      else {
        puVar2[0xb] = (undefined4)(piVar1);
        param_2[9] = (int)(0);
      }
    }
    *(undefined4**)(param_1 + 0x24) = (undefined4 *)(puVar2);
  }
  return;
}


// Reference entry 101f9c40; body size 12 bytes.
#line 1 "ENTRY_101f9c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_101f9c40(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 101f9c50; body size 5 bytes.
#line 1 "ENTRY_101f9c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f9c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f9c60; body size 5 bytes.
#line 1 "ENTRY_101f9c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f9c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f9c70; body size 5 bytes.
#line 1 "ENTRY_101f9c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f9c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f9c80; body size 5 bytes.
#line 1 "ENTRY_101f9c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f9c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f9c90; body size 5 bytes.
#line 1 "ENTRY_101f9c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f9c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f9ca0; body size 6 bytes.
#line 1 "ENTRY_101f9ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101f9ca0(void)

{
  return (char *)("SCIAppSessionManager");
}


// Reference entry 101f9cb0; body size 40 bytes.
#line 1 "ENTRY_101f9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101f9cb0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 101f9cf0; body size 5 bytes.
#line 1 "ENTRY_101f9cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101f9cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101f9fa0; body size 27 bytes.
#line 1 "ENTRY_101f9fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101f9fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101fa070; body size 3 bytes.
#line 1 "ENTRY_101fa070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101fa070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fa080; body size 10 bytes.
#line 1 "ENTRY_101fa080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101fa080(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101fa090; body size 10 bytes.
#line 1 "ENTRY_101fa090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101fa090(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 101fa210; body size 42 bytes.
#line 1 "ENTRY_101fa210"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fa210(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 101fa3d0; body size 9 bytes.
#line 1 "ENTRY_101fa3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fa3d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAppSessionManager);
  return (undefined4 *)(param_1);
}


// Reference entry 101fa730; body size 34 bytes.
#line 1 "ENTRY_101fa730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101fa730(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 101fa7c0; body size 19 bytes.
#line 1 "ENTRY_101fa7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101fa7c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101fa840; body size 7 bytes.
#line 1 "ENTRY_101fa840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101fa840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101fa870; body size 18 bytes.
#line 1 "ENTRY_101fa870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101fa870(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 101fa890; body size 3 bytes.
#line 1 "ENTRY_101fa890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101fa890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101fa8a0; body size 7 bytes.
#line 1 "ENTRY_101fa8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101fa8a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101fa8b0; body size 8 bytes.
#line 1 "ENTRY_101fa8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101fa8b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 101fa8c0; body size 8 bytes.
#line 1 "ENTRY_101fa8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101fa8c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 101fa8d0; body size 3 bytes.
#line 1 "ENTRY_101fa8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101fa8d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101fa8e0; body size 3 bytes.
#line 1 "ENTRY_101fa8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101fa8e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101fa8f0; body size 29 bytes.
#line 1 "ENTRY_101fa8f0"

void __thiscall Recovered_Bulk::m_FUN_101fa8f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 101fa920; body size 29 bytes.
#line 1 "ENTRY_101fa920"

void __thiscall Recovered_Bulk::m_FUN_101fa920(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 101faf50; body size 8 bytes.
#line 1 "ENTRY_101faf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101faf50(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 101faf60; body size 8 bytes.
#line 1 "ENTRY_101faf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101faf60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 101faf80; body size 4 bytes.
#line 1 "ENTRY_101faf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101faf80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 101faf90; body size 4 bytes.
#line 1 "ENTRY_101faf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101faf90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 101fafa0; body size 7 bytes.
#line 1 "ENTRY_101fafa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101fafa0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 101fafb0; body size 7 bytes.
#line 1 "ENTRY_101fafb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101fafb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 101fafd0; body size 26 bytes.
#line 1 "ENTRY_101fafd0"

void __thiscall Recovered_Bulk::m_FUN_101fafd0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 101faff0; body size 26 bytes.
#line 1 "ENTRY_101faff0"

void __thiscall Recovered_Bulk::m_FUN_101faff0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 101fb010; body size 76 bytes.
#line 1 "ENTRY_101fb010"

void __thiscall Recovered_Bulk::m_FUN_101fb010(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1), 0);
      *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return;
      }
    }
    else {
      *(int**)(param_1 + 0x24) = (int *)(piVar1);
      param_2[9] = (int)(0);
    }
  }
  return;
}


// Reference entry 101fb070; body size 10 bytes.
#line 1 "ENTRY_101fb070"

void __thiscall Recovered_Bulk::m_FUN_101fb070(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 101fb080; body size 10 bytes.
#line 1 "ENTRY_101fb080"

void __thiscall Recovered_Bulk::m_FUN_101fb080(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 101fb340; body size 32 bytes.
#line 1 "ENTRY_101fb340"

void __thiscall Recovered_Bulk::m_FUN_101fb340(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 101fb5d0; body size 47 bytes.
#line 1 "ENTRY_101fb5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fb5d0(char param_1)

{
  SCStr aSStack_10 [8];
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  ((SCStr *)((uint)&aSStack_10))->int_allocRep("SCIAppSessionManager:onAppStateChanged");
  if (param_1 != '\0') {
    thunk_FUN_103d63d0();
    return;
  }
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 101fb610; body size 31 bytes.
#line 1 "ENTRY_101fb610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fb610(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)((uint)&aSStack_14))->int_allocRep("SCIAppSessionManager:onTabChanged");
  thunk_FUN_103d63d0();
  return;
}


// Reference entry 101fb640; body size 6 bytes.
#line 1 "ENTRY_101fb640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fb640(void)

{
  return (char *)("SCIAppSessionManager");
}


// Reference entry 101fb650; body size 4 bytes.
#line 1 "ENTRY_101fb650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101fb650(int param_1)

{
  *(int*)(param_1 + 0x10) = (int)(*(int *)(param_1 + 0x10) + 1);
  return;
}


// Reference entry 101fb660; body size 7 bytes.
#line 1 "ENTRY_101fb660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101fb660(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 101fb670; body size 3 bytes.
#line 1 "ENTRY_101fb670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101fb670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101fb680; body size 3 bytes.
#line 1 "ENTRY_101fb680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101fb680(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101fb830; body size 28 bytes.
#line 1 "ENTRY_101fb830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101fb830(undefined4 *param_1)

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


// Reference entry 101fb860; body size 28 bytes.
#line 1 "ENTRY_101fb860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101fb860(undefined4 *param_1)

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


// Reference entry 101fc3c0; body size 54 bytes.
#line 1 "ENTRY_101fc3c0"

int * __thiscall Recovered_Bulk::m_FUN_101fc3c0(undefined4 param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101fc410; body size 18 bytes.
#line 1 "ENTRY_101fc410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fc410(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fc430; body size 25 bytes.
#line 1 "ENTRY_101fc430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fc430(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fc450; body size 22 bytes.
#line 1 "ENTRY_101fc450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fc450(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101fc470; body size 18 bytes.
#line 1 "ENTRY_101fc470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fc470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fc570; body size 22 bytes.
#line 1 "ENTRY_101fc570"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fc570(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101fc590; body size 18 bytes.
#line 1 "ENTRY_101fc590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fc590(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fc5b0; body size 18 bytes.
#line 1 "ENTRY_101fc5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fc5b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fc5d0; body size 25 bytes.
#line 1 "ENTRY_101fc5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fc5d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fc5f0; body size 56 bytes.
#line 1 "ENTRY_101fc5f0"

int * __thiscall Recovered_Bulk::m_FUN_101fc5f0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101fc640; body size 43 bytes.
#line 1 "ENTRY_101fc640"

int * __thiscall Recovered_Bulk::m_FUN_101fc640(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101fc700; body size 26 bytes.
#line 1 "ENTRY_101fc700"

int * __thiscall Recovered_Bulk::m_FUN_101fc700(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101fc8a0; body size 91 bytes.
#line 1 "ENTRY_101fc8a0"

int * __thiscall Recovered_Bulk::m_FUN_101fc8a0(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101fc9a0; body size 26 bytes.
#line 1 "ENTRY_101fc9a0"

int * __thiscall Recovered_Bulk::m_FUN_101fc9a0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101fc9c0; body size 26 bytes.
#line 1 "ENTRY_101fc9c0"

int * __thiscall Recovered_Bulk::m_FUN_101fc9c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101fc9e0; body size 26 bytes.
#line 1 "ENTRY_101fc9e0"

int * __thiscall Recovered_Bulk::m_FUN_101fc9e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101fccc0; body size 91 bytes.
#line 1 "ENTRY_101fccc0"

int * __thiscall Recovered_Bulk::m_FUN_101fccc0(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101fd020; body size 25 bytes.
#line 1 "ENTRY_101fd020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_101fd020(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101fd040; body size 26 bytes.
#line 1 "ENTRY_101fd040"

int * __thiscall Recovered_Bulk::m_FUN_101fd040(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 101fd160; body size 91 bytes.
#line 1 "ENTRY_101fd160"

int * __thiscall Recovered_Bulk::m_FUN_101fd160(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101fd1e0; body size 78 bytes.
#line 1 "ENTRY_101fd1e0"

int * __thiscall Recovered_Bulk::m_FUN_101fd1e0(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101fd2c0; body size 78 bytes.
#line 1 "ENTRY_101fd2c0"

int * __thiscall Recovered_Bulk::m_FUN_101fd2c0(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101fd330; body size 78 bytes.
#line 1 "ENTRY_101fd330"

int * __thiscall Recovered_Bulk::m_FUN_101fd330(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101fd410; body size 78 bytes.
#line 1 "ENTRY_101fd410"

int * __thiscall Recovered_Bulk::m_FUN_101fd410(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101fd480; body size 78 bytes.
#line 1 "ENTRY_101fd480"

int * __thiscall Recovered_Bulk::m_FUN_101fd480(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101fd5e0; body size 78 bytes.
#line 1 "ENTRY_101fd5e0"

int * __thiscall Recovered_Bulk::m_FUN_101fd5e0(int *param_2)
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
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 101fd7a0; body size 3 bytes.
#line 1 "ENTRY_101fd7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fd7a0(void)

{
  return;
}


// Reference entry 101fd920; body size 25 bytes.
#line 1 "ENTRY_101fd920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fd920(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 101fd940; body size 13 bytes.
#line 1 "ENTRY_101fd940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fd940(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101fd950; body size 13 bytes.
#line 1 "ENTRY_101fd950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fd950(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101fda10; body size 3 bytes.
#line 1 "ENTRY_101fda10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fda10(void)

{
  return;
}


// Reference entry 101fdae0; body size 46 bytes.
#line 1 "ENTRY_101fdae0"

void __thiscall Recovered_Bulk::m_FUN_101fdae0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  **(int**)(param_1 + 4) = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 101fdd00; body size 15 bytes.
#line 1 "ENTRY_101fdd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fdd00(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 101fddd0; body size 7 bytes.
#line 1 "ENTRY_101fddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fddd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101fdde0; body size 7 bytes.
#line 1 "ENTRY_101fdde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fdde0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 101fddf0; body size 5 bytes.
#line 1 "ENTRY_101fddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fddf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fde00; body size 37 bytes.
#line 1 "ENTRY_101fde00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fde00(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_111a0940(param_1 + 0x10), 0);
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101fde30; body size 3 bytes.
#line 1 "ENTRY_101fde30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fde30(void)

{
  return;
}


// Reference entry 101fde40; body size 19 bytes.
#line 1 "ENTRY_101fde40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fde40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 101fdfb0; body size 24 bytes.
#line 1 "ENTRY_101fdfb0"

void __thiscall Recovered_Bulk::m_FUN_101fdfb0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101fdfe0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 101fdfd0; body size 5 bytes.
#line 1 "ENTRY_101fdfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fdfd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe0a0; body size 5 bytes.
#line 1 "ENTRY_101fe0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe0a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe0b0; body size 5 bytes.
#line 1 "ENTRY_101fe0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe0b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe0c0; body size 5 bytes.
#line 1 "ENTRY_101fe0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe0c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe0d0; body size 5 bytes.
#line 1 "ENTRY_101fe0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe0e0; body size 5 bytes.
#line 1 "ENTRY_101fe0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe0f0; body size 5 bytes.
#line 1 "ENTRY_101fe0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe100; body size 5 bytes.
#line 1 "ENTRY_101fe100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe170; body size 40 bytes.
#line 1 "ENTRY_101fe170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101fe170(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 101fe1b0; body size 40 bytes.
#line 1 "ENTRY_101fe1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101fe1b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 101fe1f0; body size 40 bytes.
#line 1 "ENTRY_101fe1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101fe1f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 101fe230; body size 40 bytes.
#line 1 "ENTRY_101fe230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101fe230(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 101fe270; body size 40 bytes.
#line 1 "ENTRY_101fe270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101fe270(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 101fe2b0; body size 40 bytes.
#line 1 "ENTRY_101fe2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101fe2b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 101fe2f0; body size 18 bytes.
#line 1 "ENTRY_101fe2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fe2f0(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 4);
  return;
}


// Reference entry 101fe310; body size 20 bytes.
#line 1 "ENTRY_101fe310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101fe310(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_101fd7b0(param_1,param_2,param_2);
  return;
}


// Reference entry 101fe330; body size 48 bytes.
#line 1 "ENTRY_101fe330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fe330(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_4);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_2[1] = (int)(0);
  return;
}


// Reference entry 101fe370; body size 35 bytes.
#line 1 "ENTRY_101fe370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fe370(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 101fe4e0; body size 12 bytes.
#line 1 "ENTRY_101fe4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101fe4e0(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 2);
}


// Reference entry 101fe4f0; body size 15 bytes.
#line 1 "ENTRY_101fe4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe4f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101fe510; body size 15 bytes.
#line 1 "ENTRY_101fe510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe510(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 101fe530; body size 5 bytes.
#line 1 "ENTRY_101fe530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe540; body size 5 bytes.
#line 1 "ENTRY_101fe540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe550; body size 5 bytes.
#line 1 "ENTRY_101fe550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe560; body size 5 bytes.
#line 1 "ENTRY_101fe560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe570; body size 5 bytes.
#line 1 "ENTRY_101fe570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe580; body size 5 bytes.
#line 1 "ENTRY_101fe580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe590; body size 5 bytes.
#line 1 "ENTRY_101fe590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe5a0; body size 5 bytes.
#line 1 "ENTRY_101fe5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe5a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe5b0; body size 5 bytes.
#line 1 "ENTRY_101fe5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe5b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


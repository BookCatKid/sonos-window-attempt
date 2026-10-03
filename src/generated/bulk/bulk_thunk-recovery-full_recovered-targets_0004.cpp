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
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> static int int_allocRep(A...) { return 0; } static int op_ctor(...) { return 0; } static int op_lt(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); }; }
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Kicking { char _pad; Kicking(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCCountryList { char _pad; SCCountryList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionSelectableDescriptor { char _pad; SCIActionSelectableDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIAudioInputResource { char _pad; SCIAudioInputResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIBrowseListPresentationMap { char _pad; SCIBrowseListPresentationMap(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIBrowseManager { char _pad; SCIBrowseManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCICachedHousehold { char _pad; SCICachedHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCICertificateChain { char _pad; SCICertificateChain(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCICompositeSearchable { char _pad; SCICompositeSearchable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCICountry { char _pad; SCICountry(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIDirectControlAppManager { char _pad; SCIDirectControlAppManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIDirectControlApplication { char _pad; SCIDirectControlApplication(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIEventSource { char _pad; SCIEventSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCISearchParameters { char _pad; SCISearchParameters(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCISearchQuery { char _pad; SCISearchQuery(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCISearchable { char _pad; SCISearchable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCISearchableCategory { char _pad; SCISearchableCategory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCISecurityContext { char _pad; SCISecurityContext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIServiceAccount { char _pad; SCIServiceAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIServiceAccountFilter { char _pad; SCIServiceAccountFilter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIServiceAccountManager { char _pad; SCIServiceAccountManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIServiceAppInteropResponseDelegate { char _pad; SCIServiceAppInteropResponseDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIServiceDescriptor { char _pad; SCIServiceDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIServiceDescriptorFilter { char _pad; SCIServiceDescriptorFilter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIServiceDescriptorManager { char _pad; SCIServiceDescriptorManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCISetting { char _pad; SCISetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIStringTemplate { char _pad; SCIStringTemplate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIUrlSessionProvider { char _pad; SCIUrlSessionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIWebsocketDelegate { char _pad; SCIWebsocketDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCIWizardComponentBuilder { char _pad; SCIWizardComponentBuilder(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SCReportManager { char _pad; SCReportManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; void __thiscall m_FUN_102ac4c0(int param_2); template<class... A> int m_FUN_102ac4c0(A...); void __thiscall m_FUN_102ac4f0(int param_2); template<class... A> int m_FUN_102ac4f0(A...); uint __thiscall m_FUN_102ac520(uint param_2); template<class... A> int m_FUN_102ac520(A...); uint __thiscall m_FUN_102ac570(uint param_2); template<class... A> int m_FUN_102ac570(A...); uint __thiscall m_FUN_102ac5b0(uint param_2); template<class... A> int m_FUN_102ac5b0(A...); void __thiscall m_FUN_102ac820(uint param_2); template<class... A> int m_FUN_102ac820(A...); void __thiscall m_FUN_102ad1f0(int param_2); template<class... A> int m_FUN_102ad1f0(A...); void __thiscall m_FUN_102ad260(int param_2); template<class... A> int m_FUN_102ad260(A...); void __thiscall m_FUN_102ad390(int *param_2); template<class... A> int m_FUN_102ad390(A...); void __thiscall m_FUN_102ad400(int *param_2); template<class... A> int m_FUN_102ad400(A...); void __thiscall m_FUN_102ad470(undefined4 *param_2); template<class... A> int m_FUN_102ad470(A...); void __thiscall m_FUN_102ad4a0(undefined4 *param_2); template<class... A> int m_FUN_102ad4a0(A...); void __thiscall m_FUN_102adb40(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_102adb40(A...); void __thiscall m_FUN_102adc90(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_102adc90(A...); undefined4 __thiscall m_FUN_102adce0(undefined4 param_2); template<class... A> int m_FUN_102adce0(A...); void __thiscall m_FUN_102ae2e0(undefined4 *param_2); template<class... A> int m_FUN_102ae2e0(A...); void __thiscall m_FUN_102ae330(undefined4 *param_2); template<class... A> int m_FUN_102ae330(A...); void __thiscall m_FUN_102ae340(undefined4 *param_2); template<class... A> int m_FUN_102ae340(A...); void __thiscall m_FUN_102aec30(undefined4 *param_2); template<class... A> int m_FUN_102aec30(A...); void __thiscall m_FUN_102aec40(undefined4 *param_2); template<class... A> int m_FUN_102aec40(A...); void __thiscall m_FUN_102aec50(undefined4 *param_2); template<class... A> int m_FUN_102aec50(A...); void __thiscall m_FUN_102aec60(undefined4 *param_2); template<class... A> int m_FUN_102aec60(A...); undefined4 __thiscall m_FUN_102b8290(uint param_2); template<class... A> int m_FUN_102b8290(A...); void __thiscall m_FUN_102b8880(undefined4 param_2); template<class... A> int m_FUN_102b8880(A...); undefined4 * __thiscall m_FUN_102bc220(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102bc220(A...); undefined4 * __thiscall m_FUN_102bc260(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102bc260(A...); undefined4 * __thiscall m_FUN_102bc2a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102bc2a0(A...); void __thiscall m_FUN_102bc6a0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_102bc6a0(A...); undefined4 * __thiscall m_FUN_102bd180(undefined4 param_2); template<class... A> int m_FUN_102bd180(A...); undefined4 * __thiscall m_FUN_102bd1e0(undefined4 param_2); template<class... A> int m_FUN_102bd1e0(A...); undefined4 * __thiscall m_FUN_102bd200(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_102bd200(A...); undefined4 * __thiscall m_FUN_102bd2c0(undefined4 param_2); template<class... A> int m_FUN_102bd2c0(A...); undefined4 * __thiscall m_FUN_102bd300(undefined4 param_2); template<class... A> int m_FUN_102bd300(A...); undefined4 * __thiscall m_FUN_102bd320(undefined4 param_2); template<class... A> int m_FUN_102bd320(A...); bool __thiscall m_FUN_102bdc30(int *param_2); template<class... A> int m_FUN_102bdc30(A...); bool __thiscall m_FUN_102bdc50(int *param_2); template<class... A> int m_FUN_102bdc50(A...); bool __thiscall m_FUN_102bdc70(int *param_2); template<class... A> int m_FUN_102bdc70(A...); bool __thiscall m_FUN_102bdc90(int *param_2); template<class... A> int m_FUN_102bdc90(A...); void __thiscall m_FUN_102bddd0(int *param_2); template<class... A> int m_FUN_102bddd0(A...); void __thiscall m_FUN_102bea30(undefined4 *param_2); template<class... A> int m_FUN_102bea30(A...); void __thiscall m_FUN_102bea40(undefined4 *param_2); template<class... A> int m_FUN_102bea40(A...); void __thiscall m_FUN_102bead0(undefined4 *param_2); template<class... A> int m_FUN_102bead0(A...); void __thiscall m_FUN_102bf070(undefined4 *param_2); template<class... A> int m_FUN_102bf070(A...); void __thiscall m_FUN_102bf080(undefined4 *param_2); template<class... A> int m_FUN_102bf080(A...); int * __thiscall m_FUN_102c0240(int *param_2); template<class... A> int m_FUN_102c0240(A...); int * __thiscall m_FUN_102c0ce0(int *param_2); template<class... A> int m_FUN_102c0ce0(A...); int * __thiscall m_FUN_102c0d00(int *param_2); template<class... A> int m_FUN_102c0d00(A...); int * __thiscall m_FUN_102c0d80(int *param_2); template<class... A> int m_FUN_102c0d80(A...); void __thiscall m_FUN_102c1bc0(int param_2); template<class... A> int m_FUN_102c1bc0(A...); int * __thiscall m_FUN_102c2ac0(int *param_2); template<class... A> int m_FUN_102c2ac0(A...); undefined4 * __thiscall m_FUN_102c2d00(undefined4 *param_2); template<class... A> int m_FUN_102c2d00(A...); int * __thiscall m_FUN_102c2e80(int *param_2); template<class... A> int m_FUN_102c2e80(A...); int * __thiscall m_FUN_102c2f20(int *param_2); template<class... A> int m_FUN_102c2f20(A...); int * __thiscall m_FUN_102c2fa0(int *param_2); template<class... A> int m_FUN_102c2fa0(A...); int * __thiscall m_FUN_102c34c0(int *param_2); template<class... A> int m_FUN_102c34c0(A...); int __thiscall m_FUN_102c36e0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_102c36e0(A...); int __thiscall m_FUN_102c3790(int *param_2,undefined4 param_3); template<class... A> int m_FUN_102c3790(A...); undefined4 * __thiscall m_FUN_102c3c90(undefined4 param_2); template<class... A> int m_FUN_102c3c90(A...); undefined4 * __thiscall m_FUN_102c3ed0(undefined4 param_2); template<class... A> int m_FUN_102c3ed0(A...); undefined4 * __thiscall m_FUN_102c4410(undefined4 param_2); template<class... A> int m_FUN_102c4410(A...); undefined4 * __thiscall m_FUN_102c4420(undefined4 param_2); template<class... A> int m_FUN_102c4420(A...); void __thiscall m_FUN_102c5cd0(int param_2); template<class... A> int m_FUN_102c5cd0(A...); void __thiscall m_FUN_102c5cf0(int param_2); template<class... A> int m_FUN_102c5cf0(A...); void __thiscall m_FUN_102c5d10(undefined4 param_2); template<class... A> int m_FUN_102c5d10(A...); void __thiscall m_FUN_102c5d20(undefined4 param_2); template<class... A> int m_FUN_102c5d20(A...); void __thiscall m_FUN_102ca700(undefined4 param_2); template<class... A> int m_FUN_102ca700(A...); undefined4 * __thiscall m_FUN_102ca870(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_102ca870(A...); undefined4 * __thiscall m_FUN_102ca8e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102ca8e0(A...); undefined4 * __thiscall m_FUN_102ca9e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102ca9e0(A...); undefined4 * __thiscall m_FUN_102caa00(undefined4 *param_2); template<class... A> int m_FUN_102caa00(A...); int * __thiscall m_FUN_102cac10(int *param_2); template<class... A> int m_FUN_102cac10(A...); undefined4 * __thiscall m_FUN_102cac90(undefined4 *param_2); template<class... A> int m_FUN_102cac90(A...); int * __thiscall m_FUN_102cacb0(int *param_2); template<class... A> int m_FUN_102cacb0(A...); int * __thiscall m_FUN_102cacd0(int *param_2); template<class... A> int m_FUN_102cacd0(A...); int * __thiscall m_FUN_102cad50(int *param_2); template<class... A> int m_FUN_102cad50(A...); int * __thiscall m_FUN_102cad70(int *param_2); template<class... A> int m_FUN_102cad70(A...); int * __thiscall m_FUN_102cae80(int *param_2); template<class... A> int m_FUN_102cae80(A...); void __thiscall m_FUN_102cb150(undefined4 *param_2); template<class... A> int m_FUN_102cb150(A...); undefined4 * __thiscall m_FUN_102cbf70(undefined4 *param_2); template<class... A> int m_FUN_102cbf70(A...); undefined4 * __thiscall m_FUN_102cc000(undefined4 param_2); template<class... A> int m_FUN_102cc000(A...); undefined4 * __thiscall m_FUN_102cc040(undefined4 param_2); template<class... A> int m_FUN_102cc040(A...); undefined4 * __thiscall m_FUN_102cc0c0(undefined4 param_2); template<class... A> int m_FUN_102cc0c0(A...); undefined4 * __thiscall m_FUN_102cc0e0(undefined4 param_2); template<class... A> int m_FUN_102cc0e0(A...); undefined4 * __thiscall m_FUN_102cc170(undefined4 param_2); template<class... A> int m_FUN_102cc170(A...); undefined4 * __thiscall m_FUN_102cc1b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_102cc1b0(A...); undefined4 * __thiscall m_FUN_102cc1d0(undefined4 param_2); template<class... A> int m_FUN_102cc1d0(A...); undefined4 * __thiscall m_FUN_102cc1e0(undefined4 param_2); template<class... A> int m_FUN_102cc1e0(A...); undefined4 * __thiscall m_FUN_102cc3e0(undefined4 param_2); template<class... A> int m_FUN_102cc3e0(A...); int * __thiscall m_FUN_102cd240(int *param_2); template<class... A> int m_FUN_102cd240(A...); bool __thiscall m_FUN_102cd370(int *param_2); template<class... A> int m_FUN_102cd370(A...); bool __thiscall m_FUN_102cd390(int *param_2); template<class... A> int m_FUN_102cd390(A...); bool __thiscall m_FUN_102cd3b0(int *param_2); template<class... A> int m_FUN_102cd3b0(A...); bool __thiscall m_FUN_102cd3d0(int *param_2); template<class... A> int m_FUN_102cd3d0(A...); int __thiscall m_FUN_102cd4e0(int param_2); template<class... A> int m_FUN_102cd4e0(A...); uint __thiscall m_FUN_102cdba0(uint param_2); template<class... A> int m_FUN_102cdba0(A...); void __thiscall m_FUN_102ce070(int param_2); template<class... A> int m_FUN_102ce070(A...); void __thiscall m_FUN_102ce140(int param_2); template<class... A> int m_FUN_102ce140(A...); void __thiscall m_FUN_102ce160(int param_2); template<class... A> int m_FUN_102ce160(A...); void __thiscall m_FUN_102ce180(int *param_2); template<class... A> int m_FUN_102ce180(A...); void __thiscall m_FUN_102ce1f0(undefined4 param_2); template<class... A> int m_FUN_102ce1f0(A...); void __thiscall m_FUN_102ce200(undefined4 param_2); template<class... A> int m_FUN_102ce200(A...); void __thiscall m_FUN_102cf2f0(undefined4 *param_2); template<class... A> int m_FUN_102cf2f0(A...); void __thiscall m_FUN_102cf300(undefined4 *param_2); template<class... A> int m_FUN_102cf300(A...); void __thiscall m_FUN_102cf5e0(undefined4 *param_2); template<class... A> int m_FUN_102cf5e0(A...); void __thiscall m_FUN_102cf5f0(undefined4 *param_2); template<class... A> int m_FUN_102cf5f0(A...); int * __thiscall m_FUN_102d1e40(undefined4 param_2,int *param_3); template<class... A> int m_FUN_102d1e40(A...); undefined4 * __thiscall m_FUN_102d1e90(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102d1e90(A...); undefined4 * __thiscall m_FUN_102d1ff0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102d1ff0(A...); int * __thiscall m_FUN_102d2070(undefined4 *param_2); template<class... A> int m_FUN_102d2070(A...); undefined4 * __thiscall m_FUN_102d2140(undefined4 *param_2); template<class... A> int m_FUN_102d2140(A...); int * __thiscall m_FUN_102d2160(int *param_2); template<class... A> int m_FUN_102d2160(A...); int * __thiscall m_FUN_102d2180(int *param_2); template<class... A> int m_FUN_102d2180(A...); int * __thiscall m_FUN_102d21f0(int *param_2); template<class... A> int m_FUN_102d21f0(A...); int * __thiscall m_FUN_102d2260(int *param_2); template<class... A> int m_FUN_102d2260(A...); int * __thiscall m_FUN_102d22d0(int *param_2); template<class... A> int m_FUN_102d22d0(A...); void __thiscall m_FUN_102d2460(undefined4 *param_2); template<class... A> int m_FUN_102d2460(A...); undefined4 * __thiscall m_FUN_102d2fd0(undefined4 *param_2); template<class... A> int m_FUN_102d2fd0(A...); undefined4 * __thiscall m_FUN_102d3040(undefined4 param_2); template<class... A> int m_FUN_102d3040(A...); undefined4 * __thiscall m_FUN_102d3150(undefined4 param_2); template<class... A> int m_FUN_102d3150(A...); undefined4 * __thiscall m_FUN_102d3160(undefined4 param_2); template<class... A> int m_FUN_102d3160(A...); undefined4 * __thiscall m_FUN_102d3170(undefined4 param_2); template<class... A> int m_FUN_102d3170(A...); undefined4 * __thiscall m_FUN_102d3180(undefined4 param_2); template<class... A> int m_FUN_102d3180(A...); undefined4 * __thiscall m_FUN_102d31b0(undefined4 *param_2); template<class... A> int m_FUN_102d31b0(A...); undefined4 * __thiscall m_FUN_102d31c0(undefined4 param_2); template<class... A> int m_FUN_102d31c0(A...); undefined4 * __thiscall m_FUN_102d3390(undefined4 param_2); template<class... A> int m_FUN_102d3390(A...); undefined4 * __thiscall m_FUN_102d3890(undefined4 param_2); template<class... A> int m_FUN_102d3890(A...); int * __thiscall m_FUN_102d40d0(int *param_2); template<class... A> int m_FUN_102d40d0(A...); bool __thiscall m_FUN_102d41a0(int *param_2); template<class... A> int m_FUN_102d41a0(A...); bool __thiscall m_FUN_102d41c0(int *param_2); template<class... A> int m_FUN_102d41c0(A...); bool __thiscall m_FUN_102d41e0(int *param_2); template<class... A> int m_FUN_102d41e0(A...); bool __thiscall m_FUN_102d4200(int *param_2); template<class... A> int m_FUN_102d4200(A...); void __thiscall m_FUN_102d4430(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_102d4430(A...); int * __thiscall m_FUN_102d4d80(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_102d4d80(A...); void __thiscall m_FUN_102d4fa0(int param_2); template<class... A> int m_FUN_102d4fa0(A...); void __thiscall m_FUN_102d4fc0(undefined4 param_2); template<class... A> int m_FUN_102d4fc0(A...); void __thiscall m_FUN_102d50e0(undefined4 *param_2); template<class... A> int m_FUN_102d50e0(A...); void __thiscall m_FUN_102d5100(undefined4 *param_2); template<class... A> int m_FUN_102d5100(A...); void __thiscall m_FUN_102d5110(undefined4 *param_2); template<class... A> int m_FUN_102d5110(A...); void __thiscall m_FUN_102d5120(undefined4 *param_2); template<class... A> int m_FUN_102d5120(A...); void __thiscall m_FUN_102d53b0(undefined4 *param_2); template<class... A> int m_FUN_102d53b0(A...); void __thiscall m_FUN_102d53d0(undefined4 *param_2); template<class... A> int m_FUN_102d53d0(A...); uint __thiscall m_FUN_102d53e0(undefined4 *param_2); template<class... A> int m_FUN_102d53e0(A...); void __thiscall m_FUN_102d5610(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_102d5610(A...); void __thiscall m_FUN_102d5670(undefined4 *param_2); template<class... A> int m_FUN_102d5670(A...); void __thiscall m_FUN_102d5680(undefined4 *param_2); template<class... A> int m_FUN_102d5680(A...); undefined4 * __thiscall m_FUN_102d8980(undefined4 *param_2); template<class... A> int m_FUN_102d8980(A...); int * __thiscall m_FUN_102d89a0(int *param_2); template<class... A> int m_FUN_102d89a0(A...); void __thiscall m_FUN_102d89d0(void *param_2,int param_3); template<class... A> int m_FUN_102d89d0(A...); void __thiscall m_FUN_102d8b10(undefined4 *param_2); template<class... A> int m_FUN_102d8b10(A...); void __thiscall m_FUN_102d8d70(void *param_2,int param_3); template<class... A> int m_FUN_102d8d70(A...); void __thiscall m_FUN_102d8e90(undefined4 *param_2); template<class... A> int m_FUN_102d8e90(A...); undefined4 * __thiscall m_FUN_102d8fd0(undefined4 *param_2); template<class... A> int m_FUN_102d8fd0(A...); int * __thiscall m_FUN_102d9c30(int *param_2); template<class... A> int m_FUN_102d9c30(A...); int __thiscall m_FUN_102d9ea0(int param_2); template<class... A> int m_FUN_102d9ea0(A...); int __thiscall m_FUN_102d9eb0(int param_2); template<class... A> int m_FUN_102d9eb0(A...); void __thiscall m_FUN_102da640(int param_2); template<class... A> int m_FUN_102da640(A...); uint __thiscall m_FUN_102da670(uint param_2); template<class... A> int m_FUN_102da670(A...); void __thiscall m_FUN_102da720(uint param_2); template<class... A> int m_FUN_102da720(A...); void __thiscall m_FUN_102da7f0(undefined4 *param_2); template<class... A> int m_FUN_102da7f0(A...); void __thiscall m_FUN_102db850(undefined4 *param_2); template<class... A> int m_FUN_102db850(A...); int * __thiscall m_FUN_102dc0e0(int *param_2); template<class... A> int m_FUN_102dc0e0(A...); undefined4 * __thiscall m_FUN_102dc100(undefined4 *param_2); template<class... A> int m_FUN_102dc100(A...); int * __thiscall m_FUN_102dc260(int *param_2); template<class... A> int m_FUN_102dc260(A...); void __thiscall m_FUN_102dc4d0(undefined4 *param_2); template<class... A> int m_FUN_102dc4d0(A...); void __thiscall m_FUN_102dc500(undefined4 *param_2); template<class... A> int m_FUN_102dc500(A...); undefined4 * __thiscall m_FUN_102dc680(undefined4 param_2); template<class... A> int m_FUN_102dc680(A...); undefined4 * __thiscall m_FUN_102dc6c0(undefined4 param_2); template<class... A> int m_FUN_102dc6c0(A...); undefined4 * __thiscall m_FUN_102dc7e0(undefined4 *param_2); template<class... A> int m_FUN_102dc7e0(A...); undefined4 * __thiscall m_FUN_102dc820(undefined4 *param_2); template<class... A> int m_FUN_102dc820(A...); undefined4 * __thiscall m_FUN_102dd150(undefined4 *param_2); template<class... A> int m_FUN_102dd150(A...); void __thiscall m_FUN_102dd6a0(undefined4 *param_2); template<class... A> int m_FUN_102dd6a0(A...); void __thiscall m_FUN_102dd6e0(int param_2); template<class... A> int m_FUN_102dd6e0(A...); void __thiscall m_FUN_102dd700(int param_2); template<class... A> int m_FUN_102dd700(A...); uint __thiscall m_FUN_102dd720(uint param_2); template<class... A> int m_FUN_102dd720(A...); void __thiscall m_FUN_102ded30(int param_2); template<class... A> int m_FUN_102ded30(A...); void __thiscall m_FUN_102ded50(int param_2); template<class... A> int m_FUN_102ded50(A...); undefined4 __thiscall m_FUN_102ded70(int param_2); template<class... A> int m_FUN_102ded70(A...); void __thiscall m_FUN_102df190(undefined4 param_2); template<class... A> int m_FUN_102df190(A...); void __thiscall m_FUN_102df4a0(undefined4 *param_2); template<class... A> int m_FUN_102df4a0(A...); undefined4 * __thiscall m_FUN_102df550(undefined4 *param_2); template<class... A> int m_FUN_102df550(A...); SCStr * __thiscall m_FUN_102e4fd0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_102e4fd0(A...); undefined4 * __thiscall m_FUN_102e5040(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102e5040(A...); undefined4 * __thiscall m_FUN_102e5060(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_102e5060(A...); undefined4 * __thiscall m_FUN_102e5080(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102e5080(A...); SCStr * __thiscall m_FUN_102e53c0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_102e53c0(A...); SCStr * __thiscall m_FUN_102e53f0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_102e53f0(A...); undefined1 * __thiscall m_FUN_102e5420(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_102e5420(A...); undefined4 * __thiscall m_FUN_102e5440(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102e5440(A...); undefined4 * __thiscall m_FUN_102e5460(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102e5460(A...); undefined1 * __thiscall m_FUN_102e54b0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_102e54b0(A...); SCStr * __thiscall m_FUN_102e54d0(undefined4 *param_2); template<class... A> int m_FUN_102e54d0(A...); SCStr * __thiscall m_FUN_102e5500(undefined4 *param_2); template<class... A> int m_FUN_102e5500(A...); SCStr * __thiscall m_FUN_102e5540(undefined4 *param_2); template<class... A> int m_FUN_102e5540(A...); int * __thiscall m_FUN_102e5570(int *param_2); template<class... A> int m_FUN_102e5570(A...); int * __thiscall m_FUN_102e5590(int *param_2); template<class... A> int m_FUN_102e5590(A...); int * __thiscall m_FUN_102e55b0(int *param_2); template<class... A> int m_FUN_102e55b0(A...); int * __thiscall m_FUN_102e5630(int *param_2); template<class... A> int m_FUN_102e5630(A...); int * __thiscall m_FUN_102e56b0(int *param_2); template<class... A> int m_FUN_102e56b0(A...); int * __thiscall m_FUN_102e5730(int *param_2); template<class... A> int m_FUN_102e5730(A...); undefined4 * __thiscall m_FUN_102e5750(undefined4 *param_2); template<class... A> int m_FUN_102e5750(A...); int * __thiscall m_FUN_102e5770(int *param_2); template<class... A> int m_FUN_102e5770(A...); int * __thiscall m_FUN_102e5790(int *param_2); template<class... A> int m_FUN_102e5790(A...); int * __thiscall m_FUN_102e57b0(int *param_2); template<class... A> int m_FUN_102e57b0(A...); undefined4 * __thiscall m_FUN_102e57d0(undefined4 *param_2); template<class... A> int m_FUN_102e57d0(A...); int * __thiscall m_FUN_102e57f0(int *param_2); template<class... A> int m_FUN_102e57f0(A...); int * __thiscall m_FUN_102e5810(int *param_2); template<class... A> int m_FUN_102e5810(A...); int * __thiscall m_FUN_102e5830(int *param_2); template<class... A> int m_FUN_102e5830(A...); int * __thiscall m_FUN_102e5850(int *param_2); template<class... A> int m_FUN_102e5850(A...); int * __thiscall m_FUN_102e5870(int *param_2); template<class... A> int m_FUN_102e5870(A...); int * __thiscall m_FUN_102e5890(int *param_2); template<class... A> int m_FUN_102e5890(A...); int * __thiscall m_FUN_102e58b0(int *param_2); template<class... A> int m_FUN_102e58b0(A...); int * __thiscall m_FUN_102e58d0(int *param_2); template<class... A> int m_FUN_102e58d0(A...); int * __thiscall m_FUN_102e5d30(int *param_2); template<class... A> int m_FUN_102e5d30(A...); int * __thiscall m_FUN_102e5d50(int *param_2); template<class... A> int m_FUN_102e5d50(A...); int * __thiscall m_FUN_102e5d70(int *param_2); template<class... A> int m_FUN_102e5d70(A...); int * __thiscall m_FUN_102e5e10(int *param_2); template<class... A> int m_FUN_102e5e10(A...); int * __thiscall m_FUN_102e5f10(int *param_2); template<class... A> int m_FUN_102e5f10(A...); int * __thiscall m_FUN_102e5f30(int *param_2); template<class... A> int m_FUN_102e5f30(A...); int * __thiscall m_FUN_102e5f50(int *param_2); template<class... A> int m_FUN_102e5f50(A...); undefined4 * __thiscall m_FUN_102e5f70(undefined4 *param_2); template<class... A> int m_FUN_102e5f70(A...); int * __thiscall m_FUN_102e5f90(int *param_2); template<class... A> int m_FUN_102e5f90(A...); int * __thiscall m_FUN_102e5fb0(int *param_2); template<class... A> int m_FUN_102e5fb0(A...); undefined4 * __thiscall m_FUN_102e5fd0(undefined4 *param_2); template<class... A> int m_FUN_102e5fd0(A...); int * __thiscall m_FUN_102e5ff0(int *param_2); template<class... A> int m_FUN_102e5ff0(A...); int * __thiscall m_FUN_102e6080(int *param_2); template<class... A> int m_FUN_102e6080(A...); int * __thiscall m_FUN_102e60f0(int *param_2); template<class... A> int m_FUN_102e60f0(A...); int * __thiscall m_FUN_102e6690(int *param_2); template<class... A> int m_FUN_102e6690(A...); int * __thiscall m_FUN_102e6770(int *param_2); template<class... A> int m_FUN_102e6770(A...); int * __thiscall m_FUN_102e67e0(int *param_2); template<class... A> int m_FUN_102e67e0(A...); int * __thiscall m_FUN_102e6850(int *param_2); template<class... A> int m_FUN_102e6850(A...); int * __thiscall m_FUN_102e68c0(int *param_2); template<class... A> int m_FUN_102e68c0(A...); void __thiscall m_FUN_102e6a60(undefined4 *param_2); template<class... A> int m_FUN_102e6a60(A...); undefined4 * __thiscall m_FUN_102ea4b0(undefined4 param_2); template<class... A> int m_FUN_102ea4b0(A...); undefined4 * __thiscall m_FUN_102ea730(undefined4 param_2); template<class... A> int m_FUN_102ea730(A...); undefined4 * __thiscall m_FUN_102ea740(undefined4 param_2); template<class... A> int m_FUN_102ea740(A...); undefined4 * __thiscall m_FUN_102ea7f0(undefined4 param_2); template<class... A> int m_FUN_102ea7f0(A...); undefined4 * __thiscall m_FUN_102ea800(undefined4 param_2); template<class... A> int m_FUN_102ea800(A...); undefined4 * __thiscall m_FUN_102ea890(undefined4 param_2); template<class... A> int m_FUN_102ea890(A...); undefined8 * __thiscall m_FUN_102ea900(undefined8 *param_2); template<class... A> int m_FUN_102ea900(A...); undefined4 * __thiscall m_FUN_102ea920(undefined4 *param_2); template<class... A> int m_FUN_102ea920(A...); undefined4 * __thiscall m_FUN_102ea930(undefined4 param_2); template<class... A> int m_FUN_102ea930(A...); undefined4 * __thiscall m_FUN_102ea950(undefined4 param_2); template<class... A> int m_FUN_102ea950(A...); undefined4 * __thiscall m_FUN_102ea960(undefined4 param_2); template<class... A> int m_FUN_102ea960(A...); undefined4 * __thiscall m_FUN_102ead30(undefined4 param_2); template<class... A> int m_FUN_102ead30(A...); undefined4 * __thiscall m_FUN_102eb120(undefined4 param_2); template<class... A> int m_FUN_102eb120(A...); bool __thiscall m_FUN_102ede90(int *param_2); template<class... A> int m_FUN_102ede90(A...); bool __thiscall m_FUN_102edeb0(int *param_2); template<class... A> int m_FUN_102edeb0(A...); bool __thiscall m_FUN_102eded0(int *param_2); template<class... A> int m_FUN_102eded0(A...); void __thiscall m_FUN_102ee5e0(int *param_2,int param_3); template<class... A> int m_FUN_102ee5e0(A...); int * __thiscall m_FUN_102ee600(int param_2); template<class... A> int m_FUN_102ee600(A...); int * __thiscall m_FUN_102ee620(int param_2); template<class... A> int m_FUN_102ee620(A...); void __thiscall m_FUN_102eff40(uint param_2,undefined4 param_3); template<class... A> int m_FUN_102eff40(A...); void __thiscall m_FUN_102f0440(int param_2); template<class... A> int m_FUN_102f0440(A...); void __thiscall m_FUN_102f0500(int *param_2); template<class... A> int m_FUN_102f0500(A...); void __thiscall m_FUN_102f0570(undefined4 param_2); template<class... A> int m_FUN_102f0570(A...); void __thiscall m_FUN_102f0750(undefined4 *param_2); template<class... A> int m_FUN_102f0750(A...); void __thiscall m_FUN_102f0de0(undefined4 *param_2); template<class... A> int m_FUN_102f0de0(A...); void __thiscall m_FUN_102f4740(undefined4 *param_2); template<class... A> int m_FUN_102f4740(A...); void __thiscall m_FUN_102f4750(undefined4 *param_2); template<class... A> int m_FUN_102f4750(A...); void __thiscall m_FUN_102f4760(undefined4 *param_2); template<class... A> int m_FUN_102f4760(A...); void __thiscall m_FUN_102f4770(undefined4 *param_2); template<class... A> int m_FUN_102f4770(A...); void __thiscall m_FUN_10300610(undefined1 param_2); template<class... A> int m_FUN_10300610(A...); void __thiscall m_FUN_10300670(undefined1 param_2); template<class... A> int m_FUN_10300670(A...); void __thiscall m_FUN_10300880(undefined1 param_2); template<class... A> int m_FUN_10300880(A...); void __thiscall m_FUN_103008b0(undefined4 param_2); template<class... A> int m_FUN_103008b0(A...); void __thiscall m_FUN_10301160(undefined4 param_2); template<class... A> int m_FUN_10301160(A...); void __thiscall m_FUN_10301d00(undefined4 param_2,int param_3); template<class... A> int m_FUN_10301d00(A...); void __thiscall m_FUN_10301da0(int *param_2); template<class... A> int m_FUN_10301da0(A...); void __thiscall m_FUN_10301ec0(int *param_2); template<class... A> int m_FUN_10301ec0(A...); SCStr * __thiscall m_FUN_10302940(SCStr *param_2,int param_3); template<class... A> int m_FUN_10302940(A...); SCStr * __thiscall m_FUN_10302a30(SCStr *param_2,int param_3); template<class... A> int m_FUN_10302a30(A...); undefined4 * __thiscall m_FUN_10303050(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10303050(A...); undefined4 * __thiscall m_FUN_10303070(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10303070(A...); SCStr * __thiscall m_FUN_103031d0(SCStr *param_2,int param_3); template<class... A> int m_FUN_103031d0(A...); undefined4 * __thiscall m_FUN_10303390(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10303390(A...); undefined4 * __thiscall m_FUN_103033b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103033b0(A...); undefined4 * __thiscall m_FUN_10303450(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10303450(A...); void __thiscall m_FUN_10303910(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10303910(A...); void __thiscall m_FUN_10303eb0(undefined4 *param_2); template<class... A> int m_FUN_10303eb0(A...); void __thiscall m_FUN_103049e0(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_103049e0(A...); undefined4 * __thiscall m_FUN_10304e10(undefined4 param_2); template<class... A> int m_FUN_10304e10(A...); undefined4 * __thiscall m_FUN_10304e30(undefined4 param_2); template<class... A> int m_FUN_10304e30(A...); undefined4 * __thiscall m_FUN_10304f50(undefined4 param_2); template<class... A> int m_FUN_10304f50(A...); undefined4 * __thiscall m_FUN_10304f60(undefined4 param_2); template<class... A> int m_FUN_10304f60(A...); undefined4 * __thiscall m_FUN_10304ff0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10304ff0(A...); undefined4 * __thiscall m_FUN_103050f0(undefined4 param_2); template<class... A> int m_FUN_103050f0(A...); undefined8 * __thiscall m_FUN_10305120(undefined8 *param_2); template<class... A> int m_FUN_10305120(A...); undefined4 * __thiscall m_FUN_10305140(undefined4 param_2); template<class... A> int m_FUN_10305140(A...); SCStr * __thiscall m_FUN_10305370(SCStr *param_2); template<class... A> int m_FUN_10305370(A...); undefined4 * __thiscall m_FUN_103054e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); template<class... A> int m_FUN_103054e0(A...); undefined4 * __thiscall m_FUN_10305530(int param_2); template<class... A> int m_FUN_10305530(A...); undefined4 * __thiscall m_FUN_10305580(int param_2); template<class... A> int m_FUN_10305580(A...); undefined4 * __thiscall m_FUN_103055f0(int param_2); template<class... A> int m_FUN_103055f0(A...); undefined4 * __thiscall m_FUN_10305ea0(undefined4 param_2); template<class... A> int m_FUN_10305ea0(A...); bool __thiscall m_FUN_10306810(int *param_2); template<class... A> int m_FUN_10306810(A...); bool __thiscall m_FUN_10306830(int *param_2); template<class... A> int m_FUN_10306830(A...); undefined4 __thiscall m_FUN_10307290(undefined4 param_2); template<class... A> int m_FUN_10307290(A...); int * __thiscall m_FUN_10307920(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10307920(A...); void __thiscall m_FUN_10307f10(undefined4 param_2); template<class... A> int m_FUN_10307f10(A...); void __thiscall m_FUN_10307ff0(undefined4 *param_2); template<class... A> int m_FUN_10307ff0(A...); void __thiscall m_FUN_10308010(undefined4 *param_2); template<class... A> int m_FUN_10308010(A...); void __thiscall m_FUN_10308020(undefined4 *param_2); template<class... A> int m_FUN_10308020(A...); void __thiscall m_FUN_10308030(undefined4 *param_2); template<class... A> int m_FUN_10308030(A...); void __thiscall m_FUN_10308080(undefined4 *param_2); template<class... A> int m_FUN_10308080(A...); uint __thiscall m_FUN_10308b50(undefined4 param_2); template<class... A> int m_FUN_10308b50(A...); void __thiscall m_FUN_1030c1f0(int param_2,int param_3); template<class... A> int m_FUN_1030c1f0(A...); undefined4 * __thiscall m_FUN_1030c920(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1030c920(A...); undefined4 * __thiscall m_FUN_1030cb30(undefined4 param_2); template<class... A> int m_FUN_1030cb30(A...); undefined4 * __thiscall m_FUN_1030cb40(undefined4 param_2); template<class... A> int m_FUN_1030cb40(A...); undefined4 * __thiscall m_FUN_1030ce80(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_1030ce80(A...); undefined4 * __thiscall m_FUN_1030ce90(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_1030ce90(A...); undefined4 * __thiscall m_FUN_1030cea0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_1030cea0(A...); undefined4 * __thiscall m_FUN_1030ceb0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1030ceb0(A...); undefined4 * __thiscall m_FUN_1030cf30(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1030cf30(A...); undefined4 * __thiscall m_FUN_1030cf40(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_1030cf40(A...); undefined4 * __thiscall m_FUN_1030cf50(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_1030cf50(A...); undefined4 * __thiscall m_FUN_1030cf60(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_1030cf60(A...); undefined4 * __thiscall m_FUN_1030cf70(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1030cf70(A...); undefined4 * __thiscall m_FUN_1030cf90(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1030cf90(A...); };

extern int FUN_102d3c00(...);
extern int LOCK(...);
extern int UNLOCK(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int func_0x1000ffdd(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int swi(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a3180(...);
extern int thunk_FUN_101c82e0(...);
extern int thunk_FUN_101f4270(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10280c00(...);
extern int thunk_FUN_102a2ce0(...);
extern int thunk_FUN_102a30a0(...);
extern int thunk_FUN_102a3140(...);
extern int thunk_FUN_102a3580(...);
extern int thunk_FUN_102a3810(...);
extern int thunk_FUN_102a5240(...);
extern int thunk_FUN_102a71f0(...);
extern int thunk_FUN_102adcd0(...);
extern int thunk_FUN_102ae180(...);
extern int thunk_FUN_102ae270(...);
extern int thunk_FUN_102bc730(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_102d3c00(...);
extern int thunk_FUN_102d3db0(...);
extern int thunk_FUN_102d8b30(...);
extern int thunk_FUN_102daa60(...);
extern int thunk_FUN_102daa80(...);
extern int thunk_FUN_102e7730(...);
extern int thunk_FUN_102e8580(...);
extern int thunk_FUN_102e8bc0(...);
extern int thunk_FUN_102ec3d0(...);
extern int thunk_FUN_102ec600(...);
extern int thunk_FUN_103039a0(...);
extern int thunk_FUN_10304120(...);
extern int thunk_FUN_10304a70(...);
extern int thunk_FUN_10305f70(...);
extern int thunk_FUN_103072d0(...);
extern int thunk_FUN_10309870(...);
extern int thunk_FUN_1030b1f0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109f750(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0210(...);
extern int thunk_FUN_110f6450(...);
extern int thunk_FUN_1111d190(...);
extern int thunk_FUN_11135bc0(...);
extern int thunk_FUN_111c05a0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11241080(...);
extern int thunk_FUN_11241ca0(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_11254de0(...);
extern int thunk_FUN_11273fb0(...);
extern int thunk_FUN_11278b20(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112aa310(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11d330dc;
extern int DAT_12126b84;
extern int DAT_121a0e70;
extern int DAT_121a12cc;
extern int DAT_122e8a18;
extern int DAT_122e8a34;
extern int DAT_122f5650;
extern int g_lSCObjCount;
extern int ghidra_vftable_AnacapaLauncherCB;
extern int ghidra_vftable_ApplicationControllerAIOHelper;
extern int ghidra_vftable_RAsyncIOListener;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RHttpBaseNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPostNoRedirectAIOOp;
extern int ghidra_vftable_RKVReport;
extern int ghidra_vftable_RKVReportData;
extern int ghidra_vftable_RKeyValueBase;
extern int ghidra_vftable_RListener;
extern int ghidra_vftable_RNetstartListener;
extern int ghidra_vftable_RReportUploaderClient;
extern int ghidra_vftable_SCBrowseManager;
extern int ghidra_vftable_SCCompoundActionImpl;
extern int ghidra_vftable_SCDisplaySubmitDiagnosticsMessageAction;
extern int ghidra_vftable_SCDisplaySubmitDiagnosticsMessageDescriptor;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCIActionDelegate;
extern int ghidra_vftable_SCIActionSelectableDescriptor;
extern int ghidra_vftable_SCIBrowseListPresentationMap;
extern int ghidra_vftable_SCIBrowseManager;
extern int ghidra_vftable_SCICertificateChain;
extern int ghidra_vftable_SCICountry;
extern int ghidra_vftable_SCIDebug;
extern int ghidra_vftable_SCIDirectControlAppManager;
extern int ghidra_vftable_SCIEventSource;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCISearchParameters;
extern int ghidra_vftable_SCISearchQuery;
extern int ghidra_vftable_SCIServiceAccountFilter;
extern int ghidra_vftable_SCIServiceAccountManager;
extern int ghidra_vftable_SCIServiceAppInteropResponseDelegate;
extern int ghidra_vftable_SCIServiceDescriptorFilter;
extern int ghidra_vftable_SCIServiceDescriptorManager;
extern int ghidra_vftable_SCISetting;
extern int ghidra_vftable_SCIStringTemplate;
extern int ghidra_vftable_SCISystem;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCIWizardComponentBuilder;
extern int ghidra_vftable_SCLibOptionsSettingsFileCB;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCReportUploaderAIOClient;
extern int ghidra_vftable_SCServiceAccountFilter;
extern int ghidra_vftable_SCServiceDescriptorFilter;
extern int ghidra_vftable_SCStringTemplateNode;
extern int ghidra_vftable_SCWrapperHelper;
extern int ghidra_vftable_SCWrapperObj;
extern int ghidra_vftable_SwfWrappedHelper;
extern int ghidra_vftable_sonos_SettingsFileCB;
extern int in_EAX;
extern int uStack_4;
extern int uStack_8;
extern undefined1 LAB_1001a01e[];
extern undefined1 LAB_102bea78[];
extern undefined1 LAB_102f0004[];
extern undefined1 LAB_102f002b[];
extern undefined1 LAB_115276c0[];
extern undefined1 LAB_117a83c4[];
extern int *stack0xfffffffc;
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ab250(int *param_1);
template<class... A> int FUN_102ab250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab260(undefined4 *param_1);
template<class... A> int FUN_102ab260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab270(undefined4 *param_1);
template<class... A> int FUN_102ab270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ab280(int *param_1);
template<class... A> int FUN_102ab280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab290(undefined4 *param_1);
template<class... A> int FUN_102ab290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ab2a0(int *param_1);
template<class... A> int FUN_102ab2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab2b0(undefined4 *param_1);
template<class... A> int FUN_102ab2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab2c0(undefined4 *param_1);
template<class... A> int FUN_102ab2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab2d0(undefined4 *param_1);
template<class... A> int FUN_102ab2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ab2e0(int *param_1);
template<class... A> int FUN_102ab2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ab2f0(int *param_1);
template<class... A> int FUN_102ab2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ab300(int *param_1);
template<class... A> int FUN_102ab300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab310(undefined4 *param_1);
template<class... A> int FUN_102ab310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab320(undefined4 *param_1);
template<class... A> int FUN_102ab320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab330(undefined4 *param_1);
template<class... A> int FUN_102ab330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab340(undefined4 *param_1);
template<class... A> int FUN_102ab340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab350(undefined4 *param_1);
template<class... A> int FUN_102ab350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab360(undefined4 *param_1);
template<class... A> int FUN_102ab360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab370(undefined4 *param_1);
template<class... A> int FUN_102ab370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab380(undefined4 *param_1);
template<class... A> int FUN_102ab380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab390(undefined4 *param_1);
template<class... A> int FUN_102ab390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab3a0(undefined4 *param_1);
template<class... A> int FUN_102ab3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab3b0(undefined4 *param_1);
template<class... A> int FUN_102ab3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab3c0(undefined4 *param_1);
template<class... A> int FUN_102ab3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102ab3d0(int *param_1);
template<class... A> int FUN_102ab3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102ab3e0(int *param_1);
template<class... A> int FUN_102ab3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102ab3f0(int *param_1);
template<class... A> int FUN_102ab3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab400(undefined4 *param_1);
template<class... A> int FUN_102ab400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab410(undefined4 *param_1);
template<class... A> int FUN_102ab410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab420(undefined4 *param_1);
template<class... A> int FUN_102ab420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab430(undefined4 *param_1);
template<class... A> int FUN_102ab430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_102ab590(int *param_1);
template<class... A> int FUN_102ab590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_102ab5a0(int *param_1);
template<class... A> int FUN_102ab5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_102ab5b0(int *param_1);
template<class... A> int FUN_102ab5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_102ab5c0(int *param_1);
template<class... A> int FUN_102ab5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_102ab710(uint *param_1,uint *param_2);
template<class... A> int FUN_102ab710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_102ac3b0(int param_1);
template<class... A> int FUN_102ac3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac3c0(undefined4 *param_1);
template<class... A> int FUN_102ac3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac3f0(undefined4 *param_1);
template<class... A> int FUN_102ac3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac420(undefined4 *param_1);
template<class... A> int FUN_102ac420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac450(undefined4 *param_1);
template<class... A> int FUN_102ac450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac7c0(int param_1);
template<class... A> int FUN_102ac7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac7e0(int param_1);
template<class... A> int FUN_102ac7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac800(int param_1);
template<class... A> int FUN_102ac800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ac910(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102ac910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ac920(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102ac920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ac930(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102ac930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102aca90(undefined4 param_1);
template<class... A> int FUN_102aca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acaa0(undefined4 param_1);
template<class... A> int FUN_102acaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acab0(undefined4 param_1);
template<class... A> int FUN_102acab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acac0(undefined4 param_1);
template<class... A> int FUN_102acac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acad0(undefined4 param_1);
template<class... A> int FUN_102acad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acae0(undefined4 param_1);
template<class... A> int FUN_102acae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acaf0(undefined4 param_1);
template<class... A> int FUN_102acaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acb00(undefined4 param_1);
template<class... A> int FUN_102acb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acb10(undefined4 param_1);
template<class... A> int FUN_102acb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acb20(undefined4 param_1);
template<class... A> int FUN_102acb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acb30(undefined4 param_1);
template<class... A> int FUN_102acb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acb40(undefined4 param_1);
template<class... A> int FUN_102acb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acb50(undefined4 param_1);
template<class... A> int FUN_102acb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acb60(undefined4 param_1);
template<class... A> int FUN_102acb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acb70(undefined4 param_1);
template<class... A> int FUN_102acb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acb80(undefined4 param_1);
template<class... A> int FUN_102acb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acb90(undefined4 param_1);
template<class... A> int FUN_102acb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acba0(undefined4 param_1);
template<class... A> int FUN_102acba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acbb0(undefined4 param_1);
template<class... A> int FUN_102acbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acbc0(undefined4 param_1);
template<class... A> int FUN_102acbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acbd0(undefined4 param_1);
template<class... A> int FUN_102acbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acbe0(undefined4 param_1);
template<class... A> int FUN_102acbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acbf0(undefined4 param_1);
template<class... A> int FUN_102acbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acc00(undefined4 param_1);
template<class... A> int FUN_102acc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acc10(undefined4 param_1);
template<class... A> int FUN_102acc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acc20(undefined4 param_1);
template<class... A> int FUN_102acc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acc30(undefined4 param_1);
template<class... A> int FUN_102acc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acc40(undefined4 param_1);
template<class... A> int FUN_102acc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acc50(undefined4 param_1);
template<class... A> int FUN_102acc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acc70(undefined4 param_1);
template<class... A> int FUN_102acc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acc80(undefined4 param_1);
template<class... A> int FUN_102acc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acc90(undefined4 param_1);
template<class... A> int FUN_102acc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102acca0(undefined4 param_1);
template<class... A> int FUN_102acca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102accb0(undefined4 param_1);
template<class... A> int FUN_102accb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102accc0(undefined4 param_1);
template<class... A> int FUN_102accc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_102ad2d0(int *param_1);
template<class... A> int FUN_102ad2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ad300(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102ad300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ad310(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102ad310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ad320(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102ad320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ad330(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102ad330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ad340(int param_1);
template<class... A> int FUN_102ad340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ad350(int param_1);
template<class... A> int FUN_102ad350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ad360(undefined4 *param_1);
template<class... A> int FUN_102ad360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ad370(undefined4 *param_1);
template<class... A> int FUN_102ad370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ad380(undefined4 *param_1);
template<class... A> int FUN_102ad380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102add70(undefined4 *param_1);
template<class... A> int FUN_102add70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102ae090(uint param_1);
template<class... A> int FUN_102ae090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102ae110(uint param_1);
template<class... A> int FUN_102ae110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102ae350(int *param_1);
template<class... A> int FUN_102ae350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102ae370(int *param_1);
template<class... A> int FUN_102ae370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102ae380(int *param_1);
template<class... A> int FUN_102ae380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ae390(int param_1);
template<class... A> int FUN_102ae390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ae820(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_102ae820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ae870(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_102ae870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ae8c0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_102ae8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ae910(int param_1,int param_2);
template<class... A> int FUN_102ae910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ae960(int param_1,int param_2);
template<class... A> int FUN_102ae960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102aeaf0(undefined4 *param_1);
template<class... A> int FUN_102aeaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102aeb10(undefined4 *param_1);
template<class... A> int FUN_102aeb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102aeb30(undefined4 *param_1);
template<class... A> int FUN_102aeb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102aee80(int param_1);
template<class... A> int FUN_102aee80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102b11e0(int param_1);
template<class... A> int FUN_102b11e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102b53c0(void);
template<class... A> int FUN_102b53c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102b53d0(void);
template<class... A> int FUN_102b53d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102b53e0(void);
template<class... A> int FUN_102b53e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102b53f0(void);
template<class... A> int FUN_102b53f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102b5f70(int param_1);
template<class... A> int FUN_102b5f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102b80d0(int *param_1);
template<class... A> int FUN_102b80d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_102b80e0(int param_1);
template<class... A> int FUN_102b80e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102b8250(int *param_1);
template<class... A> int FUN_102b8250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102b8260(int *param_1);
template<class... A> int FUN_102b8260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102b8270(int *param_1);
template<class... A> int FUN_102b8270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102b8280(int *param_1);
template<class... A> int FUN_102b8280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b82d0(uint param_1,uint param_2);
template<class... A> int FUN_102b82d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8310(int param_1);
template<class... A> int FUN_102b8310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b8350(uint param_1);
template<class... A> int FUN_102b8350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_102b8360(undefined4 param_1);
template<class... A> int FUN_102b8360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_102b8370(undefined4 param_1);
template<class... A> int FUN_102b8370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b83c0(void);
template<class... A> int FUN_102b83c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b83d0(void);
template<class... A> int FUN_102b83d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b83e0(void);
template<class... A> int FUN_102b83e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b83f0(void);
template<class... A> int FUN_102b83f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b8400(void);
template<class... A> int FUN_102b8400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b8410(void);
template<class... A> int FUN_102b8410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b8420(void);
template<class... A> int FUN_102b8420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b8430(void);
template<class... A> int FUN_102b8430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b8440(void);
template<class... A> int FUN_102b8440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b8450(void);
template<class... A> int FUN_102b8450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b8460(void);
template<class... A> int FUN_102b8460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b87d0(undefined4 param_1);
template<class... A> int FUN_102b87d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b87e0(undefined4 *param_1);
template<class... A> int FUN_102b87e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b87f0(undefined4 *param_1);
template<class... A> int FUN_102b87f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8800(undefined4 *param_1);
template<class... A> int FUN_102b8800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8810(undefined4 *param_1);
template<class... A> int FUN_102b8810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8820(undefined4 *param_1);
template<class... A> int FUN_102b8820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8830(undefined4 *param_1);
template<class... A> int FUN_102b8830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8840(undefined4 *param_1);
template<class... A> int FUN_102b8840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8850(undefined4 *param_1);
template<class... A> int FUN_102b8850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8860(undefined4 *param_1);
template<class... A> int FUN_102b8860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8870(undefined4 *param_1);
template<class... A> int FUN_102b8870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8d30(int param_1);
template<class... A> int FUN_102b8d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b8f20(undefined4 *param_1);
template<class... A> int FUN_102b8f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b8f50(undefined4 *param_1);
template<class... A> int FUN_102b8f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b8f80(undefined4 *param_1);
template<class... A> int FUN_102b8f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b8fb0(undefined4 *param_1);
template<class... A> int FUN_102b8fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b8fe0(undefined4 *param_1);
template<class... A> int FUN_102b8fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b9010(undefined4 *param_1);
template<class... A> int FUN_102b9010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b9040(undefined4 *param_1);
template<class... A> int FUN_102b9040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b9070(undefined4 *param_1);
template<class... A> int FUN_102b9070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b90a0(undefined4 *param_1);
template<class... A> int FUN_102b90a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b90d0(undefined4 *param_1);
template<class... A> int FUN_102b90d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b9100(undefined4 *param_1);
template<class... A> int FUN_102b9100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b9130(undefined4 *param_1);
template<class... A> int FUN_102b9130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b9160(int *param_1);
template<class... A> int FUN_102b9160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102b9180(int *param_1);
template<class... A> int FUN_102b9180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bac10(undefined4 param_1);
template<class... A> int FUN_102bac10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bac20(undefined4 param_1);
template<class... A> int FUN_102bac20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102bba80(int *param_1);
template<class... A> int FUN_102bba80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102bbaa0(int *param_1);
template<class... A> int FUN_102bbaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102bbac0(int *param_1);
template<class... A> int FUN_102bbac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bc200(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102bc200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bc240(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_102bc240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bc280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_102bc280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bc2c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102bc2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bc520(void);
template<class... A> int FUN_102bc520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bc680(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102bc680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bc690(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102bc690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bc900(void);
template<class... A> int FUN_102bc900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bcd30(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102bcd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bcdd0(int param_1,undefined4 *param_2);
template<class... A> int FUN_102bcdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bcee0(undefined4 param_1);
template<class... A> int FUN_102bcee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bcef0(undefined4 param_1);
template<class... A> int FUN_102bcef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bcf00(undefined4 param_1);
template<class... A> int FUN_102bcf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bcf10(undefined4 param_1);
template<class... A> int FUN_102bcf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bcf20(undefined4 param_1);
template<class... A> int FUN_102bcf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bcf30(undefined4 param_1);
template<class... A> int FUN_102bcf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bcf40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_102bcf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bcf60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102bcf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bd020(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102bd020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bd040(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102bd040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bd060(undefined4 param_1);
template<class... A> int FUN_102bd060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bd070(undefined4 param_1);
template<class... A> int FUN_102bd070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bd080(undefined4 param_1);
template<class... A> int FUN_102bd080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bd090(undefined4 param_1);
template<class... A> int FUN_102bd090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bd0a0(undefined4 param_1);
template<class... A> int FUN_102bd0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bd0b0(undefined4 param_1);
template<class... A> int FUN_102bd0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bd0c0(undefined4 param_1);
template<class... A> int FUN_102bd0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bd0d0(undefined4 param_1);
template<class... A> int FUN_102bd0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bd0e0(undefined4 param_1);
template<class... A> int FUN_102bd0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102bd0f0(void);
template<class... A> int FUN_102bd0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd130(undefined4 *param_1);
template<class... A> int FUN_102bd130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd1f0(undefined4 *param_1);
template<class... A> int FUN_102bd1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd2d0(undefined4 *param_1);
template<class... A> int FUN_102bd2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd2e0(undefined4 *param_1);
template<class... A> int FUN_102bd2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd310(undefined4 *param_1);
template<class... A> int FUN_102bd310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd330(undefined4 *param_1);
template<class... A> int FUN_102bd330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102bd340(undefined4 param_1);
template<class... A> int FUN_102bd340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd470(undefined4 *param_1);
template<class... A> int FUN_102bd470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd4c0(undefined4 *param_1);
template<class... A> int FUN_102bd4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102bdaf0(undefined4 *param_1);
template<class... A> int FUN_102bdaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102bdcb0(int *param_1);
template<class... A> int FUN_102bdcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102bdcc0(undefined4 *param_1);
template<class... A> int FUN_102bdcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102bdcd0(undefined4 *param_1);
template<class... A> int FUN_102bdcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_102bddc0(int *param_1);
template<class... A> int FUN_102bddc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_102bddf0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102bddf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102be070(undefined4 *param_1);
template<class... A> int FUN_102be070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102be0c0(int param_1);
template<class... A> int FUN_102be0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102be0e0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102be0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102be0f0(undefined4 param_1);
template<class... A> int FUN_102be0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102be100(undefined4 param_1);
template<class... A> int FUN_102be100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102be110(undefined4 param_1);
template<class... A> int FUN_102be110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102be120(undefined4 param_1);
template<class... A> int FUN_102be120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102be130(undefined4 param_1);
template<class... A> int FUN_102be130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102be140(undefined4 param_1);
template<class... A> int FUN_102be140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102be160(undefined4 param_1);
template<class... A> int FUN_102be160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102be170(undefined4 param_1);
template<class... A> int FUN_102be170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102be410(undefined4 param_1);
template<class... A> int FUN_102be410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102be490(int param_1);
template<class... A> int FUN_102be490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102be4f0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102be4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102be500(int param_1);
template<class... A> int FUN_102be500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102be510(int param_1);
template<class... A> int FUN_102be510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102be9b0(uint param_1);
template<class... A> int FUN_102be9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_102bea50(byte *param_1,byte *param_2,uint param_3);
template<class... A> int FUN_102bea50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102befd0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_102befd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102bf020(int param_1,int param_2);
template<class... A> int FUN_102bf020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102bffe0(void);
template<class... A> int FUN_102bffe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_102bfff0(undefined4 param_1);
template<class... A> int FUN_102bfff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102c0000(void);
template<class... A> int FUN_102c0000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102c0010(void);
template<class... A> int FUN_102c0010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102c0140(undefined4 param_1);
template<class... A> int FUN_102c0140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c0150(undefined4 *param_1);
template<class... A> int FUN_102c0150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c0160(int param_1);
template<class... A> int FUN_102c0160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c0230(int param_1);
template<class... A> int FUN_102c0230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c0260(void);
template<class... A> int FUN_102c0260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c0270(undefined4 *param_1);
template<class... A> int FUN_102c0270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c02a0(undefined4 *param_1);
template<class... A> int FUN_102c02a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c02e0(undefined4 *param_1);
template<class... A> int FUN_102c02e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c0330(undefined4 *param_1);
template<class... A> int FUN_102c0330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c03c0(undefined4 *param_1);
template<class... A> int FUN_102c03c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c04d0(undefined4 *param_1);
template<class... A> int FUN_102c04d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c0990(void);
template<class... A> int FUN_102c0990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102c09b0(int *param_1);
template<class... A> int FUN_102c09b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c09d0(undefined4 *param_1);
template<class... A> int FUN_102c09d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c0b00(undefined4 *param_1);
template<class... A> int FUN_102c0b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c11c0(void);
template<class... A> int FUN_102c11c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c11d0(void);
template<class... A> int FUN_102c11d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c1230(undefined4 *param_1);
template<class... A> int FUN_102c1230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c1260(undefined4 *param_1);
template<class... A> int FUN_102c1260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c12d0(undefined4 param_1);
template<class... A> int FUN_102c12d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102c12e0(int param_1);
template<class... A> int FUN_102c12e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c14e0(undefined4 *param_1);
template<class... A> int FUN_102c14e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c17e0(undefined4 *param_1);
template<class... A> int FUN_102c17e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c18b0(undefined4 *param_1);
template<class... A> int FUN_102c18b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c18c0(undefined4 *param_1);
template<class... A> int FUN_102c18c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c2080(void);
template<class... A> int FUN_102c2080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c2090(void);
template<class... A> int FUN_102c2090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c2120(undefined4 *param_1);
template<class... A> int FUN_102c2120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c2130(undefined4 *param_1);
template<class... A> int FUN_102c2130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c2380(undefined4 *param_1);
template<class... A> int FUN_102c2380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c23b0(int *param_1);
template<class... A> int FUN_102c23b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102c3840(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_102c3840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102c3880(undefined4 param_1);
template<class... A> int FUN_102c3880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102c3890(undefined4 param_1);
template<class... A> int FUN_102c3890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c38a0(void);
template<class... A> int FUN_102c38a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c38b0(void);
template<class... A> int FUN_102c38b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c38c0(void);
template<class... A> int FUN_102c38c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c38d0(void);
template<class... A> int FUN_102c38d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c38e0(void);
template<class... A> int FUN_102c38e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c38f0(undefined4 *param_1);
template<class... A> int FUN_102c38f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3920(undefined4 *param_1);
template<class... A> int FUN_102c3920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3950(undefined4 *param_1);
template<class... A> int FUN_102c3950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3980(undefined4 *param_1);
template<class... A> int FUN_102c3980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c39b0(undefined4 *param_1);
template<class... A> int FUN_102c39b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3a10(undefined4 *param_1);
template<class... A> int FUN_102c3a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3a70(undefined4 *param_1);
template<class... A> int FUN_102c3a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3b10(undefined4 *param_1);
template<class... A> int FUN_102c3b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3bf0(undefined4 *param_1);
template<class... A> int FUN_102c3bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3ca0(undefined4 *param_1);
template<class... A> int FUN_102c3ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102c3cd0(int param_1);
template<class... A> int FUN_102c3cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102c3ce0(int param_1);
template<class... A> int FUN_102c3ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102c3cf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102c3cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102c3d80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102c3d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3e10(undefined4 *param_1);
template<class... A> int FUN_102c3e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3e20(undefined4 *param_1);
template<class... A> int FUN_102c3e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3eb0(undefined4 *param_1);
template<class... A> int FUN_102c3eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3ec0(undefined4 *param_1);
template<class... A> int FUN_102c3ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c4440(undefined4 *param_1);
template<class... A> int FUN_102c4440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c4d50(undefined4 *param_1);
template<class... A> int FUN_102c4d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c4d60(undefined4 *param_1);
template<class... A> int FUN_102c4d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c4da0(undefined4 *param_1);
template<class... A> int FUN_102c4da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c4db0(undefined4 *param_1);
template<class... A> int FUN_102c4db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c4dc0(undefined4 *param_1);
template<class... A> int FUN_102c4dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102c51f0(void);
template<class... A> int FUN_102c51f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102c5200(undefined4 *param_1);
template<class... A> int FUN_102c5200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5350(undefined4 *param_1);
template<class... A> int FUN_102c5350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102c5360(int *param_1);
template<class... A> int FUN_102c5360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5370(undefined4 *param_1);
template<class... A> int FUN_102c5370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5380(undefined4 *param_1);
template<class... A> int FUN_102c5380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5390(undefined4 *param_1);
template<class... A> int FUN_102c5390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c53a0(undefined4 *param_1);
template<class... A> int FUN_102c53a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102c53b0(int *param_1);
template<class... A> int FUN_102c53b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102c53c0(int *param_1);
template<class... A> int FUN_102c53c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102c53d0(int param_1);
template<class... A> int FUN_102c53d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102c53e0(int param_1);
template<class... A> int FUN_102c53e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c53f0(int param_1);
template<class... A> int FUN_102c53f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5400(int param_1);
template<class... A> int FUN_102c5400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5410(undefined4 *param_1);
template<class... A> int FUN_102c5410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5420(undefined4 *param_1);
template<class... A> int FUN_102c5420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5430(undefined4 *param_1);
template<class... A> int FUN_102c5430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5440(undefined4 *param_1);
template<class... A> int FUN_102c5440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5450(undefined4 *param_1);
template<class... A> int FUN_102c5450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5460(undefined4 *param_1);
template<class... A> int FUN_102c5460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5470(undefined4 *param_1);
template<class... A> int FUN_102c5470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102c5c70(int param_1);
template<class... A> int FUN_102c5c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102c5c80(int param_1);
template<class... A> int FUN_102c5c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5c90(int param_1);
template<class... A> int FUN_102c5c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c5ca0(int param_1);
template<class... A> int FUN_102c5ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102c5cb0(int param_1);
template<class... A> int FUN_102c5cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102c5cc0(int param_1);
template<class... A> int FUN_102c5cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c6d70(undefined4 *param_1);
template<class... A> int FUN_102c6d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c6d90(undefined4 *param_1);
template<class... A> int FUN_102c6d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c6db0(undefined4 *param_1);
template<class... A> int FUN_102c6db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c6dc0(undefined4 *param_1);
template<class... A> int FUN_102c6dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c6dd0(undefined4 *param_1);
template<class... A> int FUN_102c6dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_102c6ed0(int param_1);
template<class... A> int FUN_102c6ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_102c6f00(int param_1);
template<class... A> int FUN_102c6f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c7c20(int param_1);
template<class... A> int FUN_102c7c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c7c30(int param_1);
template<class... A> int FUN_102c7c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c7cf0(undefined4 *param_1);
template<class... A> int FUN_102c7cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c7d00(undefined4 *param_1);
template<class... A> int FUN_102c7d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c8080(int param_1);
template<class... A> int FUN_102c8080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c8090(int param_1);
template<class... A> int FUN_102c8090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c89d0(void);
template<class... A> int FUN_102c89d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c89e0(void);
template<class... A> int FUN_102c89e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c89f0(void);
template<class... A> int FUN_102c89f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c8a00(void);
template<class... A> int FUN_102c8a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102c8a10(void);
template<class... A> int FUN_102c8a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102c8b80(int *param_1);
template<class... A> int FUN_102c8b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c9910(undefined4 *param_1);
template<class... A> int FUN_102c9910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c9920(undefined4 *param_1);
template<class... A> int FUN_102c9920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c9930(undefined4 *param_1);
template<class... A> int FUN_102c9930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102c9940(undefined4 *param_1);
template<class... A> int FUN_102c9940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ca070(undefined4 *param_1);
template<class... A> int FUN_102ca070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ca0a0(undefined4 *param_1);
template<class... A> int FUN_102ca0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ca0d0(undefined4 *param_1);
template<class... A> int FUN_102ca0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ca100(undefined4 *param_1);
template<class... A> int FUN_102ca100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ca130(undefined4 *param_1);
template<class... A> int FUN_102ca130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ca160(undefined4 *param_1);
template<class... A> int FUN_102ca160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ca190(undefined4 *param_1);
template<class... A> int FUN_102ca190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ca1c0(undefined4 *param_1);
template<class... A> int FUN_102ca1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ca1f0(int *param_1);
template<class... A> int FUN_102ca1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ca210(int *param_1);
template<class... A> int FUN_102ca210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ca8a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102ca8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ca8c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102ca8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ca900(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_102ca900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cb040(void);
template<class... A> int FUN_102cb040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cb060(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102cb060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cb070(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102cb070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cb080(void);
template<class... A> int FUN_102cb080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102cb130(int param_1);
template<class... A> int FUN_102cb130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cb320(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102cb320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cb3c0(undefined4 *param_1);
template<class... A> int FUN_102cb3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cb3d0(undefined4 param_1);
template<class... A> int FUN_102cb3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_102cb3e0(int param_1,uint *param_2);
template<class... A> int FUN_102cb3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cb850(undefined4 param_1);
template<class... A> int FUN_102cb850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cb900(undefined4 *param_1,int param_2);
template<class... A> int FUN_102cb900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cb930(undefined4 param_1);
template<class... A> int FUN_102cb930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cb940(undefined4 param_1);
template<class... A> int FUN_102cb940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cb950(undefined4 param_1);
template<class... A> int FUN_102cb950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cb960(undefined4 param_1);
template<class... A> int FUN_102cb960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cb970(undefined4 param_1);
template<class... A> int FUN_102cb970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cb980(undefined4 param_1);
template<class... A> int FUN_102cb980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cbaf0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_102cbaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cbb20(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_102cbb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cbb40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102cbb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cbc50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102cbc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cbc70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102cbc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cbc90(undefined4 param_1);
template<class... A> int FUN_102cbc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cbca0(undefined4 param_1);
template<class... A> int FUN_102cbca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cbcb0(undefined4 param_1);
template<class... A> int FUN_102cbcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cbcc0(undefined4 param_1);
template<class... A> int FUN_102cbcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cbcd0(undefined4 param_1);
template<class... A> int FUN_102cbcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102cbce0(undefined4 param_1);
template<class... A> int FUN_102cbce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102cbcf0(void);
template<class... A> int FUN_102cbcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102cbd00(void);
template<class... A> int FUN_102cbd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102cbd10(void);
template<class... A> int FUN_102cbd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbd90(undefined4 *param_1);
template<class... A> int FUN_102cbd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbdc0(undefined4 *param_1);
template<class... A> int FUN_102cbdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbdf0(undefined4 *param_1);
template<class... A> int FUN_102cbdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbe50(undefined4 *param_1);
template<class... A> int FUN_102cbe50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbf30(undefined4 *param_1);
template<class... A> int FUN_102cbf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbf50(undefined4 *param_1);
template<class... A> int FUN_102cbf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbfa0(undefined4 *param_1);
template<class... A> int FUN_102cbfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102cc060(int param_1);
template<class... A> int FUN_102cc060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102cc070(int param_1);
template<class... A> int FUN_102cc070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cc0d0(undefined4 *param_1);
template<class... A> int FUN_102cc0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cc180(undefined4 *param_1);
template<class... A> int FUN_102cc180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cc190(undefined4 *param_1);
template<class... A> int FUN_102cc190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cc1f0(undefined4 *param_1);
template<class... A> int FUN_102cc1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cc210(undefined4 param_1);
template<class... A> int FUN_102cc210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cc220(undefined4 param_1);
template<class... A> int FUN_102cc220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102cc230(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102cc230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102cc2c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102cc2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cc350(undefined4 *param_1);
template<class... A> int FUN_102cc350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cc3a0(undefined4 *param_1);
template<class... A> int FUN_102cc3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cc3c0(undefined4 *param_1);
template<class... A> int FUN_102cc3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cc3d0(undefined4 *param_1);
template<class... A> int FUN_102cc3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102cc830(undefined4 *param_1);
template<class... A> int FUN_102cc830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102cc850(undefined4 *param_1);
template<class... A> int FUN_102cc850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ccd70(int param_1);
template<class... A> int FUN_102ccd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ccf30(undefined4 *param_1);
template<class... A> int FUN_102ccf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ccf40(undefined4 *param_1);
template<class... A> int FUN_102ccf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ccf50(undefined4 *param_1);
template<class... A> int FUN_102ccf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102cd4f0(int *param_1);
template<class... A> int FUN_102cd4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cd500(undefined4 *param_1);
template<class... A> int FUN_102cd500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cd510(undefined4 *param_1);
template<class... A> int FUN_102cd510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cd520(undefined4 *param_1);
template<class... A> int FUN_102cd520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102cd530(int param_1);
template<class... A> int FUN_102cd530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102cd540(int param_1);
template<class... A> int FUN_102cd540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cd550(int param_1);
template<class... A> int FUN_102cd550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cd560(undefined4 *param_1);
template<class... A> int FUN_102cd560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102cd570(int *param_1);
template<class... A> int FUN_102cd570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102cd580(int *param_1);
template<class... A> int FUN_102cd580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102cd590(int *param_1);
template<class... A> int FUN_102cd590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cd5a0(undefined4 *param_1);
template<class... A> int FUN_102cd5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cd5b0(undefined4 *param_1);
template<class... A> int FUN_102cd5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_102cd6a0(int *param_1);
template<class... A> int FUN_102cd6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_102cd6b0(int *param_1);
template<class... A> int FUN_102cd6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102cdb50(undefined4 *param_1);
template<class... A> int FUN_102cdb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102cdc70(int param_1);
template<class... A> int FUN_102cdc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102cdc90(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102cdc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102cdcc0(int param_1);
template<class... A> int FUN_102cdcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102cdcd0(int param_1);
template<class... A> int FUN_102cdcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdce0(undefined4 param_1);
template<class... A> int FUN_102cdce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdcf0(undefined4 param_1);
template<class... A> int FUN_102cdcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdd00(undefined4 param_1);
template<class... A> int FUN_102cdd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdd10(undefined4 param_1);
template<class... A> int FUN_102cdd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdd20(undefined4 param_1);
template<class... A> int FUN_102cdd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdd30(undefined4 param_1);
template<class... A> int FUN_102cdd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdd40(undefined4 param_1);
template<class... A> int FUN_102cdd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdd50(undefined4 param_1);
template<class... A> int FUN_102cdd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdd60(undefined4 param_1);
template<class... A> int FUN_102cdd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdd80(undefined4 param_1);
template<class... A> int FUN_102cdd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdd90(undefined4 param_1);
template<class... A> int FUN_102cdd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cdda0(int param_1);
template<class... A> int FUN_102cdda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cddb0(int param_1);
template<class... A> int FUN_102cddb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ce050(int param_1);
template<class... A> int FUN_102ce050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ce060(int param_1);
template<class... A> int FUN_102ce060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ce110(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102ce110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ce120(int param_1);
template<class... A> int FUN_102ce120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ce130(undefined4 *param_1);
template<class... A> int FUN_102ce130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102cf1b0(uint param_1);
template<class... A> int FUN_102cf1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102cf230(uint param_1);
template<class... A> int FUN_102cf230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102cf360(int *param_1);
template<class... A> int FUN_102cf360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cf3e0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_102cf3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102cf430(int param_1,int param_2);
template<class... A> int FUN_102cf430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cf4e0(undefined4 *param_1);
template<class... A> int FUN_102cf4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cf500(undefined4 *param_1);
template<class... A> int FUN_102cf500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cf7f0(int param_1);
template<class... A> int FUN_102cf7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cf800(int param_1);
template<class... A> int FUN_102cf800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cfa80(int param_1);
template<class... A> int FUN_102cfa80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102cfa90(int param_1);
template<class... A> int FUN_102cfa90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102d0bc0(void);
template<class... A> int FUN_102d0bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102d0bd0(void);
template<class... A> int FUN_102d0bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102d0be0(void);
template<class... A> int FUN_102d0be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d0bf0(int *param_1);
template<class... A> int FUN_102d0bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d0c00(int *param_1);
template<class... A> int FUN_102d0c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d0c10(int *param_1);
template<class... A> int FUN_102d0c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d1150(void);
template<class... A> int FUN_102d1150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d1160(void);
template<class... A> int FUN_102d1160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d1170(void);
template<class... A> int FUN_102d1170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d1180(void);
template<class... A> int FUN_102d1180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d1800(undefined4 *param_1);
template<class... A> int FUN_102d1800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d1810(undefined4 *param_1);
template<class... A> int FUN_102d1810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d1820(undefined4 *param_1);
template<class... A> int FUN_102d1820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d1b90(undefined4 *param_1);
template<class... A> int FUN_102d1b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d1bc0(undefined4 *param_1);
template<class... A> int FUN_102d1bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d1bf0(undefined4 *param_1);
template<class... A> int FUN_102d1bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102d1e10(int *param_1);
template<class... A> int FUN_102d1e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d1f90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102d1f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d1fb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102d1fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d1fd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102d1fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d2010(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102d2010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d2020(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102d2020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_102d2340(int param_1);
template<class... A> int FUN_102d2340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2350(void);
template<class... A> int FUN_102d2350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2410(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102d2410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2420(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102d2420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2430(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102d2430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2440(void);
template<class... A> int FUN_102d2440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2450(void);
template<class... A> int FUN_102d2450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2550(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_102d2550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2590(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102d2590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d25b0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102d25b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d25d0(undefined4 *param_1);
template<class... A> int FUN_102d25d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d25e0(undefined4 param_1);
template<class... A> int FUN_102d25e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d28b0(undefined4 param_1);
template<class... A> int FUN_102d28b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d28c0(undefined4 param_1);
template<class... A> int FUN_102d28c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d28e0(undefined4 param_1);
template<class... A> int FUN_102d28e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d28f0(undefined4 param_1);
template<class... A> int FUN_102d28f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d2900(undefined4 param_1);
template<class... A> int FUN_102d2900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d2910(undefined4 param_1);
template<class... A> int FUN_102d2910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2920(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_102d2920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2970(undefined4 param_1,int *param_2);
template<class... A> int FUN_102d2970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d2980(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102d2980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d2a20(undefined4 param_1);
template<class... A> int FUN_102d2a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d2a30(undefined4 param_1);
template<class... A> int FUN_102d2a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d2a50(undefined4 param_1);
template<class... A> int FUN_102d2a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d2a60(undefined4 param_1);
template<class... A> int FUN_102d2a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d2a70(undefined4 param_1);
template<class... A> int FUN_102d2a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d2a80(undefined4 param_1);
template<class... A> int FUN_102d2a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102d2aa0(void);
template<class... A> int FUN_102d2aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102d2b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d2f20(undefined4 *param_1);
template<class... A> int FUN_102d2f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d2f90(undefined4 *param_1);
template<class... A> int FUN_102d2f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d2fb0(undefined4 *param_1);
template<class... A> int FUN_102d2fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d3000(undefined4 *param_1);
template<class... A> int FUN_102d3000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d3020(undefined4 *param_1);
template<class... A> int FUN_102d3020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d3060(undefined4 param_1);
template<class... A> int FUN_102d3060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102d3070(int param_1);
template<class... A> int FUN_102d3070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d3190(undefined4 *param_1);
template<class... A> int FUN_102d3190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d31e0(undefined4 *param_1);
template<class... A> int FUN_102d31e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d3200(undefined4 param_1);
template<class... A> int FUN_102d3200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d33d0(undefined4 *param_1);
template<class... A> int FUN_102d33d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d38a0(void);
template<class... A> int FUN_102d38a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d3d10(void);
template<class... A> int FUN_102d3d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d3e80(void);
template<class... A> int FUN_102d3e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d3e90(undefined4 *param_1);
template<class... A> int FUN_102d3e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d3eb0(undefined4 *param_1);
template<class... A> int FUN_102d3eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4250(undefined4 *param_1);
template<class... A> int FUN_102d4250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d4260(int *param_1);
template<class... A> int FUN_102d4260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d4270(int *param_1);
template<class... A> int FUN_102d4270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4280(undefined4 *param_1);
template<class... A> int FUN_102d4280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d4290(int *param_1);
template<class... A> int FUN_102d4290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d42a0(int *param_1);
template<class... A> int FUN_102d42a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d42b0(int param_1);
template<class... A> int FUN_102d42b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d42c0(undefined4 *param_1);
template<class... A> int FUN_102d42c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d42d0(undefined4 *param_1);
template<class... A> int FUN_102d42d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102d42e0(int *param_1);
template<class... A> int FUN_102d42e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102d42f0(int *param_1);
template<class... A> int FUN_102d42f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102d4300(int *param_1);
template<class... A> int FUN_102d4300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102d4310(int *param_1);
template<class... A> int FUN_102d4310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102d4320(int *param_1);
template<class... A> int FUN_102d4320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d4330(undefined4 *param_1);
template<class... A> int FUN_102d4330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d4340(undefined4 *param_1);
template<class... A> int FUN_102d4340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d4350(undefined4 *param_1);
template<class... A> int FUN_102d4350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d4360(undefined4 *param_1);
template<class... A> int FUN_102d4360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_102d4370(int *param_1);
template<class... A> int FUN_102d4370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d46c0(undefined4 *param_1);
template<class... A> int FUN_102d46c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d4820(int param_1);
template<class... A> int FUN_102d4820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d4840(float *param_1);
template<class... A> int FUN_102d4840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d4a30(int param_1);
template<class... A> int FUN_102d4a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4d10(undefined4 param_1);
template<class... A> int FUN_102d4d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4d20(undefined4 param_1);
template<class... A> int FUN_102d4d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4d30(undefined4 param_1);
template<class... A> int FUN_102d4d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4d40(undefined4 param_1);
template<class... A> int FUN_102d4d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4d50(undefined4 param_1);
template<class... A> int FUN_102d4d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4d60(undefined4 param_1);
template<class... A> int FUN_102d4d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4d70(int param_1);
template<class... A> int FUN_102d4d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d4e00(int param_1);
template<class... A> int FUN_102d4e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4e10(undefined4 param_1);
template<class... A> int FUN_102d4e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4e20(undefined4 param_1);
template<class... A> int FUN_102d4e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d4ec0(void);
template<class... A> int FUN_102d4ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d4f80(int param_1);
template<class... A> int FUN_102d4f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d4f90(undefined4 *param_1);
template<class... A> int FUN_102d4f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d5130(int param_1,int param_2,int param_3);
template<class... A> int FUN_102d5130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d52c0(uint param_1);
template<class... A> int FUN_102d52c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d5340(uint param_1);
template<class... A> int FUN_102d5340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d5410(int param_1);
template<class... A> int FUN_102d5410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d5510(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_102d5510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102d5560(int param_1,int param_2);
template<class... A> int FUN_102d5560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102d55b0(int param_1,int param_2);
template<class... A> int FUN_102d55b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d5600(undefined4 *param_1);
template<class... A> int FUN_102d5600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102d6560(void);
template<class... A> int FUN_102d6560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d65a0(int *param_1);
template<class... A> int FUN_102d65a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_102d65d0(float *param_1);
template<class... A> int FUN_102d65d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d65e0(void);
template<class... A> int FUN_102d65e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d65f0(void);
template<class... A> int FUN_102d65f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d6600(void);
template<class... A> int FUN_102d6600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d6610(void);
template<class... A> int FUN_102d6610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d7200(undefined4 param_1);
template<class... A> int FUN_102d7200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d7210(undefined4 *param_1);
template<class... A> int FUN_102d7210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d7220(undefined4 *param_1);
template<class... A> int FUN_102d7220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d7330(int param_1);
template<class... A> int FUN_102d7330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d76a0(undefined4 *param_1);
template<class... A> int FUN_102d76a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d76d0(undefined4 *param_1);
template<class... A> int FUN_102d76d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d7700(undefined4 *param_1);
template<class... A> int FUN_102d7700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102d85c0(int *param_1);
template<class... A> int FUN_102d85c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d8940(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102d8940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d8960(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102d8960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d89c0(void);
template<class... A> int FUN_102d89c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102d8ad0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_102d8ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d8b00(void);
template<class... A> int FUN_102d8b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d8c80(undefined4 *param_1);
template<class... A> int FUN_102d8c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d8c90(undefined4 *param_1);
template<class... A> int FUN_102d8c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d8ca0(void);
template<class... A> int FUN_102d8ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d8cb0(undefined4 param_1);
template<class... A> int FUN_102d8cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_102d8cc0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_102d8cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d8cf0(undefined4 param_1);
template<class... A> int FUN_102d8cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d8d00(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_102d8d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d8d30(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_102d8d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d8d60(undefined4 param_1);
template<class... A> int FUN_102d8d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d8e70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102d8e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102d8e80(int param_1,int param_2);
template<class... A> int FUN_102d8e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d8ec0(undefined4 param_1);
template<class... A> int FUN_102d8ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102d8ed0(undefined4 param_1);
template<class... A> int FUN_102d8ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102d8ee0(void);
template<class... A> int FUN_102d8ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d8fa0(undefined4 *param_1);
template<class... A> int FUN_102d8fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d8fc0(undefined4 param_1);
template<class... A> int FUN_102d8fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d9050(undefined4 *param_1);
template<class... A> int FUN_102d9050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d9070(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102d9070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d9080(undefined4 *param_1);
template<class... A> int FUN_102d9080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d9330(undefined4 *param_1);
template<class... A> int FUN_102d9330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d9680(undefined4 *param_1);
template<class... A> int FUN_102d9680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d9700(undefined4 *param_1);
template<class... A> int FUN_102d9700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d9d50(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102d9d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d9ec0(undefined4 *param_1);
template<class... A> int FUN_102d9ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102d9ed0(undefined4 *param_1);
template<class... A> int FUN_102d9ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102da900(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102da900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102da910(undefined4 param_1);
template<class... A> int FUN_102da910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102da920(undefined4 param_1);
template<class... A> int FUN_102da920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102da930(undefined4 param_1);
template<class... A> int FUN_102da930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102da940(undefined4 param_1);
template<class... A> int FUN_102da940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102da950(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102da950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_102da9d0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_102da9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102daa00(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102daa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102daa30(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_102daa30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102dac60(int *param_1);
template<class... A> int FUN_102dac60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dac70(undefined4 *param_1);
template<class... A> int FUN_102dac70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102dae70(int param_1,int param_2);
template<class... A> int FUN_102dae70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102daec0(undefined4 *param_1);
template<class... A> int FUN_102daec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102db600(void);
template<class... A> int FUN_102db600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102db820(void);
template<class... A> int FUN_102db820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102db830(void);
template<class... A> int FUN_102db830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102db840(undefined4 *param_1);
template<class... A> int FUN_102db840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102db9a0(undefined4 *param_1);
template<class... A> int FUN_102db9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102dbfe0(undefined4 param_1);
template<class... A> int FUN_102dbfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102dbff0(int *param_1);
template<class... A> int FUN_102dbff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102dc4a0(undefined4 *param_1);
template<class... A> int FUN_102dc4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102dc5c0(void);
template<class... A> int FUN_102dc5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102dc5f0(undefined4 param_1);
template<class... A> int FUN_102dc5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102dc610(undefined4 param_1);
template<class... A> int FUN_102dc610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102dc620(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102dc620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102dc650(undefined4 *param_1);
template<class... A> int FUN_102dc650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102dc700(undefined4 *param_1);
template<class... A> int FUN_102dc700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102dc7c0(undefined4 *param_1);
template<class... A> int FUN_102dc7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102dc860(undefined4 *param_1);
template<class... A> int FUN_102dc860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102dc880(undefined4 *param_1);
template<class... A> int FUN_102dc880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102dc890(undefined4 *param_1);
template<class... A> int FUN_102dc890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102dc8a0(undefined4 *param_1);
template<class... A> int FUN_102dc8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102dc8b0(undefined4 *param_1);
template<class... A> int FUN_102dc8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dcb90(undefined4 *param_1);
template<class... A> int FUN_102dcb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dcbb0(undefined4 *param_1);
template<class... A> int FUN_102dcbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dcf10(undefined4 *param_1);
template<class... A> int FUN_102dcf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dcf30(undefined4 *param_1);
template<class... A> int FUN_102dcf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102dd1c0(undefined4 *param_1);
template<class... A> int FUN_102dd1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102dd1d0(undefined4 *param_1);
template<class... A> int FUN_102dd1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102dd1e0(int *param_1);
template<class... A> int FUN_102dd1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102dd1f0(int *param_1);
template<class... A> int FUN_102dd1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102dd200(undefined4 *param_1);
template<class... A> int FUN_102dd200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102dd210(undefined4 *param_1);
template<class... A> int FUN_102dd210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dd5e0(int param_1);
template<class... A> int FUN_102dd5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dd670(int param_1);
template<class... A> int FUN_102dd670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102dda40(undefined4 *param_1);
template<class... A> int FUN_102dda40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102dda50(undefined4 *param_1);
template<class... A> int FUN_102dda50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102dddc0(undefined4 *param_1);
template<class... A> int FUN_102dddc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102de420(int param_1);
template<class... A> int FUN_102de420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102de530(void);
template<class... A> int FUN_102de530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102de5f0(int param_1);
template<class... A> int FUN_102de5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102de600(void);
template<class... A> int FUN_102de600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102de610(int param_1);
template<class... A> int FUN_102de610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102de630(int *param_1);
template<class... A> int FUN_102de630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102de7a0(undefined4 *param_1);
template<class... A> int FUN_102de7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102de7b0(undefined4 *param_1);
template<class... A> int FUN_102de7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dec00(undefined4 *param_1);
template<class... A> int FUN_102dec00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dec30(undefined4 *param_1);
template<class... A> int FUN_102dec30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dec60(undefined4 *param_1);
template<class... A> int FUN_102dec60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dec90(int *param_1);
template<class... A> int FUN_102dec90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102df510(void);
template<class... A> int FUN_102df510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102df520(undefined4 *param_1);
template<class... A> int FUN_102df520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102df5c0(undefined4 *param_1);
template<class... A> int FUN_102df5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102df770(undefined4 *param_1);
template<class... A> int FUN_102df770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102e4cb0(void);
template<class... A> int FUN_102e4cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102e4cc0(int *param_1);
template<class... A> int FUN_102e4cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e4e80(int *param_1,undefined4 param_2,float param_3,int param_4);
template<class... A> int FUN_102e4e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e5000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102e5000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e5020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102e5020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e50a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_102e50a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e50c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_102e50c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e5320(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102e5320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e5340(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102e5340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e5360(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102e5360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e5380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102e5380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e53a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102e53a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102e5480(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102e5480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102e5490(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102e5490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102e54a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102e54a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6930(void);
template<class... A> int FUN_102e6930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6940(void);
template<class... A> int FUN_102e6940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6950(void);
template<class... A> int FUN_102e6950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6960(void);
template<class... A> int FUN_102e6960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6980(void);
template<class... A> int FUN_102e6980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e69a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102e69a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e69b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102e69b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e69c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102e69c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e69d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102e69d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e69e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102e69e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102e69f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_102e69f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6a20(void);
template<class... A> int FUN_102e6a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6a30(void);
template<class... A> int FUN_102e6a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6a40(void);
template<class... A> int FUN_102e6a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6a50(void);
template<class... A> int FUN_102e6a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6e70(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102e6e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6e90(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102e6e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6eb0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102e6eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e70b0(undefined4 *param_1);
template<class... A> int FUN_102e70b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e70c0(undefined4 *param_1);
template<class... A> int FUN_102e70c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e70d0(undefined4 *param_1);
template<class... A> int FUN_102e70d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e70e0(undefined4 *param_1);
template<class... A> int FUN_102e70e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e70f0(int param_1,int param_2,int param_3,undefined4 param_4);
template<class... A> int FUN_102e70f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102e71b0(int *param_1,int *param_2);
template<class... A> int FUN_102e71b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e74b0(undefined4 param_1);
template<class... A> int FUN_102e74b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e74c0(int param_1,SCStr *param_2);
template<class... A> int FUN_102e74c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102e7940(int param_1);
template<class... A> int FUN_102e7940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e8570(undefined4 param_1);
template<class... A> int FUN_102e8570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e8740(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_102e8740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102e88d0(int param_1);
template<class... A> int FUN_102e88d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e8a50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102e8a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9210(undefined4 param_1);
template<class... A> int FUN_102e9210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9220(undefined4 param_1);
template<class... A> int FUN_102e9220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9230(undefined4 param_1);
template<class... A> int FUN_102e9230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9240(undefined4 param_1);
template<class... A> int FUN_102e9240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9250(undefined4 param_1);
template<class... A> int FUN_102e9250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9260(undefined4 param_1);
template<class... A> int FUN_102e9260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9270(undefined4 param_1);
template<class... A> int FUN_102e9270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9280(undefined4 param_1);
template<class... A> int FUN_102e9280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9290(undefined4 param_1);
template<class... A> int FUN_102e9290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e92a0(undefined4 param_1);
template<class... A> int FUN_102e92a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e92b0(undefined4 param_1);
template<class... A> int FUN_102e92b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e92c0(undefined4 param_1);
template<class... A> int FUN_102e92c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e92d0(undefined4 param_1);
template<class... A> int FUN_102e92d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e92e0(undefined4 param_1);
template<class... A> int FUN_102e92e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e92f0(undefined4 param_1);
template<class... A> int FUN_102e92f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9300(undefined4 param_1);
template<class... A> int FUN_102e9300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102e93d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_102e93d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102e9410(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_102e9410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e9450(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_102e9450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e9480(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_102e9480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e94b0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_102e94b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102e94e0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_102e94e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e96c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102e96c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e96e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102e96e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9700(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102e9700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e97f0(undefined4 param_1);
template<class... A> int FUN_102e97f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9800(undefined4 param_1);
template<class... A> int FUN_102e9800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9810(undefined4 param_1);
template<class... A> int FUN_102e9810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9820(undefined4 param_1);
template<class... A> int FUN_102e9820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9830(undefined4 param_1);
template<class... A> int FUN_102e9830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9840(undefined4 param_1);
template<class... A> int FUN_102e9840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9850(undefined4 param_1);
template<class... A> int FUN_102e9850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9860(undefined4 param_1);
template<class... A> int FUN_102e9860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9870(undefined4 param_1);
template<class... A> int FUN_102e9870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e9880(void);
template<class... A> int FUN_102e9880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102e9890(void);
template<class... A> int FUN_102e9890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102e98a0(void);
template<class... A> int FUN_102e98a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102e98b0(void);
template<class... A> int FUN_102e98b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102e98c0(void);
template<class... A> int FUN_102e98c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102e98d0(void);
template<class... A> int FUN_102e98d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102e98e0(void);
template<class... A> int FUN_102e98e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102e98f0(void);
template<class... A> int FUN_102e98f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e9a10(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_102e9a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e9b50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102e9b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9df0(undefined4 *param_1);
template<class... A> int FUN_102e9df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9e20(undefined4 *param_1);
template<class... A> int FUN_102e9e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9e50(undefined4 *param_1);
template<class... A> int FUN_102e9e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9e80(undefined4 *param_1);
template<class... A> int FUN_102e9e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9eb0(undefined4 *param_1);
template<class... A> int FUN_102e9eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9f50(undefined4 *param_1);
template<class... A> int FUN_102e9f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9fb0(undefined4 *param_1);
template<class... A> int FUN_102e9fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea010(undefined4 *param_1);
template<class... A> int FUN_102ea010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea030(undefined4 *param_1);
template<class... A> int FUN_102ea030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea050(undefined4 *param_1);
template<class... A> int FUN_102ea050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea070(undefined4 *param_1);
template<class... A> int FUN_102ea070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea090(undefined4 *param_1);
template<class... A> int FUN_102ea090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea0b0(undefined4 *param_1);
template<class... A> int FUN_102ea0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea0d0(undefined4 *param_1);
template<class... A> int FUN_102ea0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea0f0(undefined4 *param_1);
template<class... A> int FUN_102ea0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea110(undefined4 *param_1);
template<class... A> int FUN_102ea110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea170(undefined4 *param_1);
template<class... A> int FUN_102ea170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea1d0(undefined4 *param_1);
template<class... A> int FUN_102ea1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea1f0(undefined4 *param_1);
template<class... A> int FUN_102ea1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea210(undefined4 *param_1);
template<class... A> int FUN_102ea210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea270(undefined4 *param_1);
template<class... A> int FUN_102ea270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea290(undefined4 *param_1);
template<class... A> int FUN_102ea290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea2b0(undefined4 *param_1);
template<class... A> int FUN_102ea2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea310(undefined4 *param_1);
template<class... A> int FUN_102ea310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea330(undefined4 *param_1);
template<class... A> int FUN_102ea330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea390(undefined4 *param_1);
template<class... A> int FUN_102ea390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea3b0(undefined4 *param_1);
template<class... A> int FUN_102ea3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea3d0(undefined4 *param_1);
template<class... A> int FUN_102ea3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea3f0(undefined4 *param_1);
template<class... A> int FUN_102ea3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea410(undefined4 *param_1);
template<class... A> int FUN_102ea410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102ea4d0(int param_1);
template<class... A> int FUN_102ea4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea750(undefined4 *param_1);
template<class... A> int FUN_102ea750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea8a0(undefined4 *param_1);
template<class... A> int FUN_102ea8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea8c0(undefined4 *param_1);
template<class... A> int FUN_102ea8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_102ea8e0(undefined1 *param_1);
template<class... A> int FUN_102ea8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ea970(undefined4 *param_1);
template<class... A> int FUN_102ea970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ea990(undefined4 param_1);
template<class... A> int FUN_102ea990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ea9a0(undefined4 param_1);
template<class... A> int FUN_102ea9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ea9b0(undefined4 param_1);
template<class... A> int FUN_102ea9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ea9c0(undefined4 param_1);
template<class... A> int FUN_102ea9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102ea9d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_102ea9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eaa10(undefined4 *param_1);
template<class... A> int FUN_102eaa10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eaa60(undefined4 *param_1);
template<class... A> int FUN_102eaa60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ead20(undefined4 *param_1);
template<class... A> int FUN_102ead20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ead60(undefined4 *param_1);
template<class... A> int FUN_102ead60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ead90(undefined4 *param_1);
template<class... A> int FUN_102ead90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eb040(undefined4 *param_1);
template<class... A> int FUN_102eb040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eb0a0(undefined4 *param_1);
template<class... A> int FUN_102eb0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eb0d0(undefined4 *param_1);
template<class... A> int FUN_102eb0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eb0e0(undefined4 *param_1);
template<class... A> int FUN_102eb0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eb0f0(undefined4 *param_1);
template<class... A> int FUN_102eb0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eb100(undefined4 *param_1);
template<class... A> int FUN_102eb100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eb110(undefined4 *param_1);
template<class... A> int FUN_102eb110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eba90(undefined4 *param_1);
template<class... A> int FUN_102eba90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ebaa0(int param_1);
template<class... A> int FUN_102ebaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ebad0(undefined4 *param_1);
template<class... A> int FUN_102ebad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ec5c0(void);
template<class... A> int FUN_102ec5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ec920(int param_1);
template<class... A> int FUN_102ec920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ec9a0(undefined4 *param_1);
template<class... A> int FUN_102ec9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ecc60(undefined4 *param_1);
template<class... A> int FUN_102ecc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ecc80(undefined4 *param_1);
template<class... A> int FUN_102ecc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ecc90(undefined4 *param_1);
template<class... A> int FUN_102ecc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ecca0(undefined4 *param_1);
template<class... A> int FUN_102ecca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102eccb0(undefined4 *param_1);
template<class... A> int FUN_102eccb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102eccc0(undefined4 *param_1);
template<class... A> int FUN_102eccc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ed700(void);
template<class... A> int FUN_102ed700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee2a0(int *param_1);
template<class... A> int FUN_102ee2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee2b0(undefined4 *param_1);
template<class... A> int FUN_102ee2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee2c0(int *param_1);
template<class... A> int FUN_102ee2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee2d0(undefined4 *param_1);
template<class... A> int FUN_102ee2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee2e0(undefined4 *param_1);
template<class... A> int FUN_102ee2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee2f0(undefined4 *param_1);
template<class... A> int FUN_102ee2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee300(int *param_1);
template<class... A> int FUN_102ee300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee310(undefined4 *param_1);
template<class... A> int FUN_102ee310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee320(undefined4 *param_1);
template<class... A> int FUN_102ee320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee330(int *param_1);
template<class... A> int FUN_102ee330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee340(undefined4 *param_1);
template<class... A> int FUN_102ee340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee350(int *param_1);
template<class... A> int FUN_102ee350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee360(undefined4 *param_1);
template<class... A> int FUN_102ee360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee370(int *param_1);
template<class... A> int FUN_102ee370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee380(undefined4 *param_1);
template<class... A> int FUN_102ee380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee390(undefined4 *param_1);
template<class... A> int FUN_102ee390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee3a0(undefined4 *param_1);
template<class... A> int FUN_102ee3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee3b0(undefined4 *param_1);
template<class... A> int FUN_102ee3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee3c0(int *param_1);
template<class... A> int FUN_102ee3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee3d0(undefined4 *param_1);
template<class... A> int FUN_102ee3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee3e0(undefined4 *param_1);
template<class... A> int FUN_102ee3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee3f0(undefined4 *param_1);
template<class... A> int FUN_102ee3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee400(int *param_1);
template<class... A> int FUN_102ee400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee410(undefined4 *param_1);
template<class... A> int FUN_102ee410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee420(int *param_1);
template<class... A> int FUN_102ee420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee430(undefined4 *param_1);
template<class... A> int FUN_102ee430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee440(undefined4 *param_1);
template<class... A> int FUN_102ee440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee450(undefined4 *param_1);
template<class... A> int FUN_102ee450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee460(undefined4 *param_1);
template<class... A> int FUN_102ee460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee470(int *param_1);
template<class... A> int FUN_102ee470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee480(undefined4 *param_1);
template<class... A> int FUN_102ee480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee490(undefined4 *param_1);
template<class... A> int FUN_102ee490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee4a0(undefined4 *param_1);
template<class... A> int FUN_102ee4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee4b0(int *param_1);
template<class... A> int FUN_102ee4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ee4c0(int *param_1);
template<class... A> int FUN_102ee4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee4d0(undefined4 *param_1);
template<class... A> int FUN_102ee4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee4e0(undefined4 *param_1);
template<class... A> int FUN_102ee4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee4f0(undefined4 *param_1);
template<class... A> int FUN_102ee4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee500(undefined4 *param_1);
template<class... A> int FUN_102ee500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee510(undefined4 *param_1);
template<class... A> int FUN_102ee510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee520(undefined4 *param_1);
template<class... A> int FUN_102ee520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee530(undefined4 *param_1);
template<class... A> int FUN_102ee530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee540(undefined4 *param_1);
template<class... A> int FUN_102ee540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee550(undefined4 *param_1);
template<class... A> int FUN_102ee550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee560(undefined4 *param_1);
template<class... A> int FUN_102ee560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee570(undefined4 *param_1);
template<class... A> int FUN_102ee570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee580(undefined4 *param_1);
template<class... A> int FUN_102ee580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee590(undefined4 *param_1);
template<class... A> int FUN_102ee590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ee5a0(undefined4 *param_1);
template<class... A> int FUN_102ee5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102ee5b0(int *param_1);
template<class... A> int FUN_102ee5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102ee5c0(int *param_1);
template<class... A> int FUN_102ee5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102ee5d0(int *param_1);
template<class... A> int FUN_102ee5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102efea0(undefined4 *param_1);
template<class... A> int FUN_102efea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102efed0(undefined4 *param_1);
template<class... A> int FUN_102efed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102eff00(undefined4 *param_1);
template<class... A> int FUN_102eff00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102f0070(int param_1);
template<class... A> int FUN_102f0070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102f0090(int param_1);
template<class... A> int FUN_102f0090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f00a0(undefined4 param_1);
template<class... A> int FUN_102f00a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f00b0(undefined4 param_1);
template<class... A> int FUN_102f00b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f00c0(undefined4 param_1);
template<class... A> int FUN_102f00c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f00d0(undefined4 param_1);
template<class... A> int FUN_102f00d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f00e0(undefined4 param_1);
template<class... A> int FUN_102f00e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f00f0(undefined4 param_1);
template<class... A> int FUN_102f00f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102f0100(int param_1);
template<class... A> int FUN_102f0100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f0110(undefined4 param_1);
template<class... A> int FUN_102f0110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f0120(undefined4 param_1);
template<class... A> int FUN_102f0120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f0130(undefined4 param_1);
template<class... A> int FUN_102f0130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f0140(undefined4 param_1);
template<class... A> int FUN_102f0140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f0150(undefined4 param_1);
template<class... A> int FUN_102f0150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f0160(undefined4 param_1);
template<class... A> int FUN_102f0160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f0170(undefined4 param_1);
template<class... A> int FUN_102f0170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f0180(undefined4 param_1);
template<class... A> int FUN_102f0180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f0190(int param_1);
template<class... A> int FUN_102f0190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102f0430(int param_1);
template<class... A> int FUN_102f0430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102f04b0(int param_1);
template<class... A> int FUN_102f04b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f04c0(undefined4 param_1);
template<class... A> int FUN_102f04c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102f04d0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102f04d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f04e0(int param_1);
template<class... A> int FUN_102f04e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102f04f0(undefined4 *param_1);
template<class... A> int FUN_102f04f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f0760(undefined4 *param_1);
template<class... A> int FUN_102f0760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102f0770(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_102f0770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f0780(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_102f0780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0bd0(uint param_1);
template<class... A> int FUN_102f0bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0c50(uint param_1);
template<class... A> int FUN_102f0c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0cd0(uint param_1);
template<class... A> int FUN_102f0cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0d50(uint param_1);
template<class... A> int FUN_102f0d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102f0fe0(int param_1);
template<class... A> int FUN_102f0fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102f11c0(undefined4 param_1);
template<class... A> int FUN_102f11c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f1220(void);
template<class... A> int FUN_102f1220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f4320(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_102f4320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f4370(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_102f4370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f43c0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_102f43c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102f4410(int param_1,int param_2);
template<class... A> int FUN_102f4410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102f4460(int param_1,int param_2);
template<class... A> int FUN_102f4460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f44b0(undefined4 *param_1);
template<class... A> int FUN_102f44b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f44d0(undefined4 *param_1);
template<class... A> int FUN_102f44d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f44f0(undefined4 *param_1);
template<class... A> int FUN_102f44f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f4500(undefined4 *param_1);
template<class... A> int FUN_102f4500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f4510(undefined4 *param_1);
template<class... A> int FUN_102f4510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f4520(undefined4 *param_1);
template<class... A> int FUN_102f4520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f4530(undefined4 *param_1);
template<class... A> int FUN_102f4530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f4540(undefined4 *param_1);
template<class... A> int FUN_102f4540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f4550(undefined4 *param_1);
template<class... A> int FUN_102f4550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f4560(undefined4 *param_1);
template<class... A> int FUN_102f4560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f51b0(int param_1);
template<class... A> int FUN_102f51b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f55e0(int param_1);
template<class... A> int FUN_102f55e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102f57f0(int param_1);
template<class... A> int FUN_102f57f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102f73d0(undefined4 param_1);
template<class... A> int FUN_102f73d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_102f7870(int param_1);
template<class... A> int FUN_102f7870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_102f78f0(int param_1);
template<class... A> int FUN_102f78f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102f9300(void);
template<class... A> int FUN_102f9300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_102f9b60(undefined2 *param_1);
template<class... A> int FUN_102f9b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102fc8d0(undefined4 param_1);
template<class... A> int FUN_102fc8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102fc8f0(void);
template<class... A> int FUN_102fc8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102fc900(void);
template<class... A> int FUN_102fc900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102fc910(void);
template<class... A> int FUN_102fc910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102fc920(void);
template<class... A> int FUN_102fc920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102fc930(void);
template<class... A> int FUN_102fc930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102fc940(void);
template<class... A> int FUN_102fc940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102fc950(void);
template<class... A> int FUN_102fc950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_102fdfb0(int param_1);
template<class... A> int FUN_102fdfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_102fdfc0(int param_1);
template<class... A> int FUN_102fdfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102fdff0(int *param_1);
template<class... A> int FUN_102fdff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102fe000(int *param_1);
template<class... A> int FUN_102fe000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102fe010(int *param_1);
template<class... A> int FUN_102fe010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102fe020(int *param_1);
template<class... A> int FUN_102fe020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102fe030(int *param_1);
template<class... A> int FUN_102fe030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102fe040(int *param_1);
template<class... A> int FUN_102fe040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102fe050(int *param_1);
template<class... A> int FUN_102fe050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102fe060(int *param_1);
template<class... A> int FUN_102fe060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_102fe0d0(int param_1);
template<class... A> int FUN_102fe0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102fe190(void);
template<class... A> int FUN_102fe190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102fe1a0(void);
template<class... A> int FUN_102fe1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_102fe1b0(int param_1);
template<class... A> int FUN_102fe1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_102fe1c0(int param_1);
template<class... A> int FUN_102fe1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_102fe1d0(uint *param_1);
template<class... A> int FUN_102fe1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102fe430(undefined4 param_1);
template<class... A> int FUN_102fe430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe470(undefined4 *param_1);
template<class... A> int FUN_102fe470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe480(undefined4 *param_1);
template<class... A> int FUN_102fe480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe490(undefined4 *param_1);
template<class... A> int FUN_102fe490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe4a0(undefined4 *param_1);
template<class... A> int FUN_102fe4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe4b0(undefined4 *param_1);
template<class... A> int FUN_102fe4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe4c0(undefined4 *param_1);
template<class... A> int FUN_102fe4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe4d0(undefined4 *param_1);
template<class... A> int FUN_102fe4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe4e0(undefined4 *param_1);
template<class... A> int FUN_102fe4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe4f0(undefined4 *param_1);
template<class... A> int FUN_102fe4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe500(undefined4 *param_1);
template<class... A> int FUN_102fe500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe510(undefined4 *param_1);
template<class... A> int FUN_102fe510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe520(undefined4 *param_1);
template<class... A> int FUN_102fe520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe530(undefined4 *param_1);
template<class... A> int FUN_102fe530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe540(undefined4 *param_1);
template<class... A> int FUN_102fe540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe550(undefined4 *param_1);
template<class... A> int FUN_102fe550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe560(undefined4 *param_1);
template<class... A> int FUN_102fe560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe570(undefined4 *param_1);
template<class... A> int FUN_102fe570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe580(undefined4 *param_1);
template<class... A> int FUN_102fe580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe590(undefined4 *param_1);
template<class... A> int FUN_102fe590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe5a0(undefined4 *param_1);
template<class... A> int FUN_102fe5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe5b0(undefined4 *param_1);
template<class... A> int FUN_102fe5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe5c0(undefined4 *param_1);
template<class... A> int FUN_102fe5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe5d0(undefined4 *param_1);
template<class... A> int FUN_102fe5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe5e0(undefined4 *param_1);
template<class... A> int FUN_102fe5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102fe5f0(undefined4 *param_1);
template<class... A> int FUN_102fe5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102feb50(undefined4 *param_1);
template<class... A> int FUN_102feb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102feb80(undefined4 *param_1);
template<class... A> int FUN_102feb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102febb0(undefined4 *param_1);
template<class... A> int FUN_102febb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102febe0(undefined4 *param_1);
template<class... A> int FUN_102febe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102fec10(undefined4 *param_1);
template<class... A> int FUN_102fec10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102fec40(undefined4 *param_1);
template<class... A> int FUN_102fec40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102fec70(undefined4 *param_1);
template<class... A> int FUN_102fec70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102feca0(int *param_1);
template<class... A> int FUN_102feca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102fecc0(int *param_1);
template<class... A> int FUN_102fecc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102fece0(int *param_1);
template<class... A> int FUN_102fece0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102fed00(int *param_1);
template<class... A> int FUN_102fed00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10301140(undefined4 param_1);
template<class... A> int FUN_10301140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10301440(void);
template<class... A> int FUN_10301440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10301cf0(int *param_1);
template<class... A> int FUN_10301cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10301d30(int param_1);
template<class... A> int FUN_10301d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10302480(void);
template<class... A> int FUN_10302480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10302490(undefined4 *param_1);
template<class... A> int FUN_10302490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103024c0(undefined4 *param_1);
template<class... A> int FUN_103024c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10302620(undefined4 *param_1);
template<class... A> int FUN_10302620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103027a0(undefined4 *param_1);
template<class... A> int FUN_103027a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103028e0(void);
template<class... A> int FUN_103028e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10302900(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10302900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10302ef0(void);
template<class... A> int FUN_10302ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10302f00(int param_1);
template<class... A> int FUN_10302f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10303030(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10303030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10303090(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10303090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10303170(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10303170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10303190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10303190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103031b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103031b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103033d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_103033d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103033f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103033f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10303400(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10303400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10303470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10303470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103035c0(void);
template<class... A> int FUN_103035c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103035d0(void);
template<class... A> int FUN_103035d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103038c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103038c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103038d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103038d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103038e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103038e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103038f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103038f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10303900(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10303900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10303c80(void);
template<class... A> int FUN_10303c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10303c90(void);
template<class... A> int FUN_10303c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103041f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_103041f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103042b0(uint param_1);
template<class... A> int FUN_103042b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103042d0(undefined4 *param_1);
template<class... A> int FUN_103042d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103042e0(undefined4 param_1);
template<class... A> int FUN_103042e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103042f0(undefined4 param_1);
template<class... A> int FUN_103042f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304300(int param_1,SCStr *param_2);
template<class... A> int FUN_10304300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103045b0(undefined4 param_1);
template<class... A> int FUN_103045b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103045c0(undefined4 param_1);
template<class... A> int FUN_103045c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103045d0(undefined4 param_1);
template<class... A> int FUN_103045d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103045f0(undefined4 param_1);
template<class... A> int FUN_103045f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304600(undefined4 param_1);
template<class... A> int FUN_10304600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304610(undefined4 param_1);
template<class... A> int FUN_10304610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304620(undefined4 param_1);
template<class... A> int FUN_10304620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10304630(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10304630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10304660(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10304660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103046e0(undefined4 param_1,SCStr *param_2,SCStr *param_3,int param_4);
template<class... A> int FUN_103046e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304a30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10304a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304a50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10304a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304af0(undefined4 param_1);
template<class... A> int FUN_10304af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304b00(undefined4 param_1);
template<class... A> int FUN_10304b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304b10(undefined4 param_1);
template<class... A> int FUN_10304b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304b20(undefined4 param_1);
template<class... A> int FUN_10304b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304b30(undefined4 param_1);
template<class... A> int FUN_10304b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304b40(undefined4 param_1);
template<class... A> int FUN_10304b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304b50(undefined4 param_1);
template<class... A> int FUN_10304b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304b70(undefined4 param_1);
template<class... A> int FUN_10304b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304b80(undefined4 param_1);
template<class... A> int FUN_10304b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304b90(undefined4 param_1);
template<class... A> int FUN_10304b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304ba0(undefined4 param_1);
template<class... A> int FUN_10304ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304bb0(undefined4 param_1);
template<class... A> int FUN_10304bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304bc0(undefined4 param_1);
template<class... A> int FUN_10304bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304be0(undefined4 param_1);
template<class... A> int FUN_10304be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304bf0(undefined4 param_1);
template<class... A> int FUN_10304bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10304c80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10304c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10304cc0(undefined4 *param_1);
template<class... A> int FUN_10304cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10304cf0(undefined4 *param_1);
template<class... A> int FUN_10304cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10304e50(undefined4 param_1);
template<class... A> int FUN_10304e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10304e60(int param_1);
template<class... A> int FUN_10304e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10304f70(undefined4 *param_1);
template<class... A> int FUN_10304f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10305100(undefined4 *param_1);
template<class... A> int FUN_10305100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10305160(undefined4 *param_1);
template<class... A> int FUN_10305160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10305180(undefined4 param_1);
template<class... A> int FUN_10305180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10305190(undefined4 param_1);
template<class... A> int FUN_10305190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __fastcall FUN_10305310(uint *param_1);
template<class... A> int FUN_10305310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10305620(undefined4 *param_1);
template<class... A> int FUN_10305620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10305b60(undefined4 *param_1);
template<class... A> int FUN_10305b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10305ed0(int param_1);
template<class... A> int FUN_10305ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10306250(void);
template<class... A> int FUN_10306250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103062b0(int param_1);
template<class... A> int FUN_103062b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103062c0(undefined4 *param_1);
template<class... A> int FUN_103062c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103062e0(undefined4 *param_1);
template<class... A> int FUN_103062e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103062f0(undefined4 *param_1);
template<class... A> int FUN_103062f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10306880(int *param_1);
template<class... A> int FUN_10306880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10306890(int *param_1);
template<class... A> int FUN_10306890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103068a0(int *param_1);
template<class... A> int FUN_103068a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103068b0(undefined4 *param_1);
template<class... A> int FUN_103068b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103068c0(undefined4 *param_1);
template<class... A> int FUN_103068c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103068d0(int *param_1);
template<class... A> int FUN_103068d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10306950(SCStr *param_1,SCStr *param_2);
template<class... A> int FUN_10306950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10306e90(uint *param_1);
template<class... A> int FUN_10306e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10306ee0(undefined4 *param_1);
template<class... A> int FUN_10306ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10307080(int param_1);
template<class... A> int FUN_10307080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103070a0(int param_1);
template<class... A> int FUN_103070a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103070c0(int param_1);
template<class... A> int FUN_103070c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10307280(int param_1);
template<class... A> int FUN_10307280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10307860(undefined4 param_1);
template<class... A> int FUN_10307860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10307870(undefined4 param_1);
template<class... A> int FUN_10307870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10307880(undefined4 param_1);
template<class... A> int FUN_10307880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10307890(undefined4 param_1);
template<class... A> int FUN_10307890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103078a0(undefined4 param_1);
template<class... A> int FUN_103078a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103078b0(undefined4 param_1);
template<class... A> int FUN_103078b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103078c0(undefined4 param_1);
template<class... A> int FUN_103078c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103078d0(undefined4 param_1);
template<class... A> int FUN_103078d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103078e0(undefined4 param_1);
template<class... A> int FUN_103078e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103078f0(undefined4 param_1);
template<class... A> int FUN_103078f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10307900(undefined4 param_1);
template<class... A> int FUN_10307900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10307910(int param_1);
template<class... A> int FUN_10307910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10307c30(int param_1);
template<class... A> int FUN_10307c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10307ce0(int param_1);
template<class... A> int FUN_10307ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10307cf0(int param_1);
template<class... A> int FUN_10307cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10307d90(void);
template<class... A> int FUN_10307d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10307da0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10307da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10307e60(int param_1);
template<class... A> int FUN_10307e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10307e70(int param_1);
template<class... A> int FUN_10307e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10307e80(int param_1);
template<class... A> int FUN_10307e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10307e90(undefined4 *param_1);
template<class... A> int FUN_10307e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10308040(int param_1,int param_2,int param_3);
template<class... A> int FUN_10308040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103089f0(uint param_1);
template<class... A> int FUN_103089f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10308a60(uint param_1);
template<class... A> int FUN_10308a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10308ae0(uint param_1);
template<class... A> int FUN_10308ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10308b70(int param_1);
template<class... A> int FUN_10308b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10308d00(int param_1);
template<class... A> int FUN_10308d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10309100(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10309100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10309150(int param_1,int param_2);
template<class... A> int FUN_10309150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103091a0(int param_1,int param_2);
template<class... A> int FUN_103091a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103091f0(int param_1,int param_2);
template<class... A> int FUN_103091f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10309790(int *param_1);
template<class... A> int FUN_10309790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10309800(undefined4 param_1);
template<class... A> int FUN_10309800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10309810(int param_1);
template<class... A> int FUN_10309810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_103099b0(int param_1);
template<class... A> int FUN_103099b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103099c0(void);
template<class... A> int FUN_103099c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103099d0(void);
template<class... A> int FUN_103099d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103099e0(void);
template<class... A> int FUN_103099e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103099f0(void);
template<class... A> int FUN_103099f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10309a00(void);
template<class... A> int FUN_10309a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10309a10(void);
template<class... A> int FUN_10309a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030b2c0(undefined4 param_1);
template<class... A> int FUN_1030b2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1030b2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1030b2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1030b310(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1030b310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1030b7c0(int *param_1);
template<class... A> int FUN_1030b7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030bb00(void);
template<class... A> int FUN_1030bb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030cd60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1030cd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030cd80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1030cd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030cda0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1030cda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030cdc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1030cdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030cde0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1030cde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030ce00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1030ce00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030ce20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1030ce20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030ce40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1030ce40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030ce60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1030ce60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1030ced0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1030ced0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1030cee0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1030cee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1030cef0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1030cef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1030cf00(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1030cf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1030cf10(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1030cf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1030cf20(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1030cf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_1030d120(byte *param_1);
template<class... A> int FUN_1030d120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_1030d170(int *param_1,int *param_2);
template<class... A> int FUN_1030d170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_1030d190(byte *param_1);
template<class... A> int FUN_1030d190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_1030d1e0(int *param_1,int *param_2);
template<class... A> int FUN_1030d1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_1030d200(byte *param_1);
template<class... A> int FUN_1030d200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_1030d250(int *param_1,int *param_2);
template<class... A> int FUN_1030d250(A...);
// Reference entry 102ab250; body size 7 bytes.
#line 1 "ENTRY_102ab250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ab250(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ab260; body size 3 bytes.
#line 1 "ENTRY_102ab260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab260(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab270; body size 3 bytes.
#line 1 "ENTRY_102ab270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab270(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab280; body size 7 bytes.
#line 1 "ENTRY_102ab280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ab280(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ab290; body size 3 bytes.
#line 1 "ENTRY_102ab290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab290(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab2a0; body size 7 bytes.
#line 1 "ENTRY_102ab2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ab2a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ab2b0; body size 3 bytes.
#line 1 "ENTRY_102ab2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab2b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab2c0; body size 3 bytes.
#line 1 "ENTRY_102ab2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab2c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab2d0; body size 3 bytes.
#line 1 "ENTRY_102ab2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab2d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab2e0; body size 7 bytes.
#line 1 "ENTRY_102ab2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ab2e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ab2f0; body size 7 bytes.
#line 1 "ENTRY_102ab2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ab2f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ab300; body size 7 bytes.
#line 1 "ENTRY_102ab300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ab300(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ab310; body size 3 bytes.
#line 1 "ENTRY_102ab310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab320; body size 3 bytes.
#line 1 "ENTRY_102ab320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab320(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab330; body size 3 bytes.
#line 1 "ENTRY_102ab330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab330(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab340; body size 3 bytes.
#line 1 "ENTRY_102ab340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab350; body size 3 bytes.
#line 1 "ENTRY_102ab350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab350(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab360; body size 3 bytes.
#line 1 "ENTRY_102ab360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab360(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab370; body size 3 bytes.
#line 1 "ENTRY_102ab370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab370(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab380; body size 3 bytes.
#line 1 "ENTRY_102ab380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab390; body size 3 bytes.
#line 1 "ENTRY_102ab390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab3a0; body size 3 bytes.
#line 1 "ENTRY_102ab3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab3a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab3b0; body size 3 bytes.
#line 1 "ENTRY_102ab3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab3b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab3c0; body size 3 bytes.
#line 1 "ENTRY_102ab3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab3c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab3d0; body size 6 bytes.
#line 1 "ENTRY_102ab3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102ab3d0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 102ab3e0; body size 6 bytes.
#line 1 "ENTRY_102ab3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102ab3e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 102ab3f0; body size 6 bytes.
#line 1 "ENTRY_102ab3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102ab3f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 102ab400; body size 3 bytes.
#line 1 "ENTRY_102ab400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab400(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab410; body size 3 bytes.
#line 1 "ENTRY_102ab410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab420; body size 3 bytes.
#line 1 "ENTRY_102ab420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab420(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab430; body size 3 bytes.
#line 1 "ENTRY_102ab430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab590; body size 6 bytes.
#line 1 "ENTRY_102ab590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_102ab590(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 102ab5a0; body size 6 bytes.
#line 1 "ENTRY_102ab5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_102ab5a0(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 102ab5b0; body size 6 bytes.
#line 1 "ENTRY_102ab5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_102ab5b0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 102ab5c0; body size 6 bytes.
#line 1 "ENTRY_102ab5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_102ab5c0(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 102ab710; body size 18 bytes.
#line 1 "ENTRY_102ab710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_102ab710(uint *param_1,uint *param_2)

{
  return (bool)(*param_1 < (uint)(*(param_2)));
}


// Reference entry 102ac3b0; body size 7 bytes.
#line 1 "ENTRY_102ac3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_102ac3b0(int param_1)

{
  return (uint)(*(uint *)(param_1 + 4) >> 8);
}


// Reference entry 102ac3c0; body size 31 bytes.
#line 1 "ENTRY_102ac3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac3c0(undefined4 *param_1)

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


// Reference entry 102ac3f0; body size 31 bytes.
#line 1 "ENTRY_102ac3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac3f0(undefined4 *param_1)

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


// Reference entry 102ac420; body size 31 bytes.
#line 1 "ENTRY_102ac420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac420(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 102ac450; body size 31 bytes.
#line 1 "ENTRY_102ac450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac450(undefined4 *param_1)

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


// Reference entry 102ac4c0; body size 33 bytes.
#line 1 "ENTRY_102ac4c0"

void __thiscall Recovered_Bulk::m_FUN_102ac4c0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_102ae180(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 0xc);
  return;
}


// Reference entry 102ac4f0; body size 30 bytes.
#line 1 "ENTRY_102ac4f0"

void __thiscall Recovered_Bulk::m_FUN_102ac4f0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_102ae270(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 102ac520; body size 62 bytes.
#line 1 "ENTRY_102ac520"

uint __thiscall Recovered_Bulk::m_FUN_102ac520(uint param_2)
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


// Reference entry 102ac570; body size 49 bytes.
#line 1 "ENTRY_102ac570"

uint __thiscall Recovered_Bulk::m_FUN_102ac570(uint param_2)
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


// Reference entry 102ac5b0; body size 49 bytes.
#line 1 "ENTRY_102ac5b0"

uint __thiscall Recovered_Bulk::m_FUN_102ac5b0(uint param_2)
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


// Reference entry 102ac7c0; body size 14 bytes.
#line 1 "ENTRY_102ac7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac7c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102ac7e0; body size 14 bytes.
#line 1 "ENTRY_102ac7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac7e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102ac800; body size 14 bytes.
#line 1 "ENTRY_102ac800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac800(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x7ffffff) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102ac820; body size 182 bytes.
#line 1 "ENTRY_102ac820"

void __thiscall Recovered_Bulk::m_FUN_102ac820(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_102adcd0();
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
    thunk_FUN_102a3140(iVar2,param_1[1],param_1);
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
  iVar2 = (int)(thunk_FUN_102ae270(uVar3), 0);
  *param_1 = (int)(iVar2);
  param_1[1] = (int)(iVar2);
  param_1[2] = (int)(iVar2 + uVar3 * 8);
  return;
}


// Reference entry 102ac910; body size 3 bytes.
#line 1 "ENTRY_102ac910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ac910(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 102ac920; body size 3 bytes.
#line 1 "ENTRY_102ac920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ac920(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 102ac930; body size 21 bytes.
#line 1 "ENTRY_102ac930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ac930(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_102a2ce0(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 102aca90; body size 3 bytes.
#line 1 "ENTRY_102aca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102aca90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acaa0; body size 3 bytes.
#line 1 "ENTRY_102acaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acaa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acab0; body size 3 bytes.
#line 1 "ENTRY_102acab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acac0; body size 3 bytes.
#line 1 "ENTRY_102acac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acad0; body size 3 bytes.
#line 1 "ENTRY_102acad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acae0; body size 3 bytes.
#line 1 "ENTRY_102acae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acaf0; body size 3 bytes.
#line 1 "ENTRY_102acaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acaf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acb00; body size 3 bytes.
#line 1 "ENTRY_102acb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acb00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acb10; body size 3 bytes.
#line 1 "ENTRY_102acb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acb10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acb20; body size 3 bytes.
#line 1 "ENTRY_102acb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acb20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acb30; body size 3 bytes.
#line 1 "ENTRY_102acb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acb30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acb40; body size 3 bytes.
#line 1 "ENTRY_102acb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acb40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acb50; body size 3 bytes.
#line 1 "ENTRY_102acb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acb50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acb60; body size 3 bytes.
#line 1 "ENTRY_102acb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acb60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acb70; body size 3 bytes.
#line 1 "ENTRY_102acb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acb70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acb80; body size 3 bytes.
#line 1 "ENTRY_102acb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acb80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acb90; body size 3 bytes.
#line 1 "ENTRY_102acb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acb90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acba0; body size 3 bytes.
#line 1 "ENTRY_102acba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acbb0; body size 3 bytes.
#line 1 "ENTRY_102acbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acbb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acbc0; body size 3 bytes.
#line 1 "ENTRY_102acbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acbc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acbd0; body size 3 bytes.
#line 1 "ENTRY_102acbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acbd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acbe0; body size 3 bytes.
#line 1 "ENTRY_102acbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acbe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acbf0; body size 3 bytes.
#line 1 "ENTRY_102acbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acbf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acc00; body size 3 bytes.
#line 1 "ENTRY_102acc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acc00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acc10; body size 3 bytes.
#line 1 "ENTRY_102acc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acc10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acc20; body size 3 bytes.
#line 1 "ENTRY_102acc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acc20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acc30; body size 3 bytes.
#line 1 "ENTRY_102acc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acc30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acc40; body size 3 bytes.
#line 1 "ENTRY_102acc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acc40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acc50; body size 3 bytes.
#line 1 "ENTRY_102acc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acc50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acc70; body size 3 bytes.
#line 1 "ENTRY_102acc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acc70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acc80; body size 3 bytes.
#line 1 "ENTRY_102acc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acc80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acc90; body size 3 bytes.
#line 1 "ENTRY_102acc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acc90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102acca0; body size 3 bytes.
#line 1 "ENTRY_102acca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102acca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102accb0; body size 3 bytes.
#line 1 "ENTRY_102accb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102accb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102accc0; body size 3 bytes.
#line 1 "ENTRY_102accc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102accc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102ad1f0; body size 79 bytes.
#line 1 "ENTRY_102ad1f0"

void __thiscall Recovered_Bulk::m_FUN_102ad1f0(int param_2)
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


// Reference entry 102ad260; body size 79 bytes.
#line 1 "ENTRY_102ad260"

void __thiscall Recovered_Bulk::m_FUN_102ad260(int param_2)
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


// Reference entry 102ad2d0; body size 31 bytes.
#line 1 "ENTRY_102ad2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_102ad2d0(int *param_1)

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


// Reference entry 102ad300; body size 3 bytes.
#line 1 "ENTRY_102ad300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ad300(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 102ad310; body size 3 bytes.
#line 1 "ENTRY_102ad310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ad310(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 102ad320; body size 3 bytes.
#line 1 "ENTRY_102ad320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ad320(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 102ad330; body size 3 bytes.
#line 1 "ENTRY_102ad330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ad330(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 102ad340; body size 11 bytes.
#line 1 "ENTRY_102ad340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ad340(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102ad350; body size 11 bytes.
#line 1 "ENTRY_102ad350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ad350(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102ad360; body size 6 bytes.
#line 1 "ENTRY_102ad360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ad360(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 102ad370; body size 6 bytes.
#line 1 "ENTRY_102ad370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ad370(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 102ad380; body size 6 bytes.
#line 1 "ENTRY_102ad380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ad380(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 102ad390; body size 83 bytes.
#line 1 "ENTRY_102ad390"

void __thiscall Recovered_Bulk::m_FUN_102ad390(int *param_2)
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


// Reference entry 102ad400; body size 83 bytes.
#line 1 "ENTRY_102ad400"

void __thiscall Recovered_Bulk::m_FUN_102ad400(int *param_2)
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


// Reference entry 102ad470; body size 33 bytes.
#line 1 "ENTRY_102ad470"

void __thiscall Recovered_Bulk::m_FUN_102ad470(undefined4 *param_2)
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


// Reference entry 102ad4a0; body size 33 bytes.
#line 1 "ENTRY_102ad4a0"

void __thiscall Recovered_Bulk::m_FUN_102ad4a0(undefined4 *param_2)
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


// Reference entry 102adb40; body size 24 bytes.
#line 1 "ENTRY_102adb40"

void __thiscall Recovered_Bulk::m_FUN_102adb40(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_102a5240(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 102adc90; body size 24 bytes.
#line 1 "ENTRY_102adc90"

void __thiscall Recovered_Bulk::m_FUN_102adc90(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_102a5240(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 102adce0; body size 23 bytes.
#line 1 "ENTRY_102adce0"

undefined4 __thiscall Recovered_Bulk::m_FUN_102adce0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11254de0(param_1 + 0x420);
  return (undefined4)(param_2);
}


// Reference entry 102add70; body size 41 bytes.
#line 1 "ENTRY_102add70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102add70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,0xffffffff);
  return;
}


// Reference entry 102ae090; body size 90 bytes.
#line 1 "ENTRY_102ae090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102ae090(uint param_1)

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


// Reference entry 102ae110; body size 87 bytes.
#line 1 "ENTRY_102ae110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102ae110(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x8000000) {
    param_1 = (uint)(param_1 * 0x20);
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


// Reference entry 102ae2e0; body size 59 bytes.
#line 1 "ENTRY_102ae2e0"

void __thiscall Recovered_Bulk::m_FUN_102ae2e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 8);
    return;
  }
  thunk_FUN_102a3810(puVar1,param_2);
  return;
}


// Reference entry 102ae330; body size 13 bytes.
#line 1 "ENTRY_102ae330"

void __thiscall Recovered_Bulk::m_FUN_102ae330(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 102ae340; body size 11 bytes.
#line 1 "ENTRY_102ae340"

void __thiscall Recovered_Bulk::m_FUN_102ae340(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102ae350; body size 22 bytes.
#line 1 "ENTRY_102ae350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102ae350(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0xc);
}


// Reference entry 102ae370; body size 9 bytes.
#line 1 "ENTRY_102ae370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102ae370(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 102ae380; body size 9 bytes.
#line 1 "ENTRY_102ae380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102ae380(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 102ae390; body size 25 bytes.
#line 1 "ENTRY_102ae390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ae390(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_102a30a0(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 102ae820; body size 57 bytes.
#line 1 "ENTRY_102ae820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102ae820(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102ae870; body size 54 bytes.
#line 1 "ENTRY_102ae870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102ae870(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102ae8c0; body size 57 bytes.
#line 1 "ENTRY_102ae8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102ae8c0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102ae910; body size 60 bytes.
#line 1 "ENTRY_102ae910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ae910(int param_1,int param_2)

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


// Reference entry 102ae960; body size 57 bytes.
#line 1 "ENTRY_102ae960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ae960(int param_1,int param_2)

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


// Reference entry 102aeaf0; body size 16 bytes.
#line 1 "ENTRY_102aeaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102aeaf0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102aeb10; body size 16 bytes.
#line 1 "ENTRY_102aeb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102aeb10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102aeb30; body size 9 bytes.
#line 1 "ENTRY_102aeb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102aeb30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102aec30; body size 11 bytes.
#line 1 "ENTRY_102aec30"

void __thiscall Recovered_Bulk::m_FUN_102aec30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102aec40; body size 11 bytes.
#line 1 "ENTRY_102aec40"

void __thiscall Recovered_Bulk::m_FUN_102aec40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102aec50; body size 11 bytes.
#line 1 "ENTRY_102aec50"

void __thiscall Recovered_Bulk::m_FUN_102aec50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102aec60; body size 12 bytes.
#line 1 "ENTRY_102aec60"

void __thiscall Recovered_Bulk::m_FUN_102aec60(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102aee80; body size 4 bytes.
#line 1 "ENTRY_102aee80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102aee80(int param_1)

{
  return (int)(param_1 + 9);
}


// Reference entry 102b11e0; body size 4 bytes.
#line 1 "ENTRY_102b11e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102b11e0(int param_1)

{
  return (int)(param_1 + 0x18);
}


// Reference entry 102b53c0; body size 6 bytes.
#line 1 "ENTRY_102b53c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102b53c0(void)

{
  return (char *)("SCICompositeSearchable");
}


// Reference entry 102b53d0; body size 6 bytes.
#line 1 "ENTRY_102b53d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102b53d0(void)

{
  return (char *)("SCIDirectControlApplication");
}


// Reference entry 102b53e0; body size 6 bytes.
#line 1 "ENTRY_102b53e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102b53e0(void)

{
  return (char *)("SCISearchable");
}


// Reference entry 102b53f0; body size 6 bytes.
#line 1 "ENTRY_102b53f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102b53f0(void)

{
  return (char *)("SCISearchableCategory");
}


// Reference entry 102b5f70; body size 8 bytes.
#line 1 "ENTRY_102b5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102b5f70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x74) != 0);
}


// Reference entry 102b80d0; body size 7 bytes.
#line 1 "ENTRY_102b80d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102b80d0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 102b80e0; body size 9 bytes.
#line 1 "ENTRY_102b80e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_102b80e0(int param_1)

{
  return (byte)(*(byte *)(param_1 + 500) & 1);
}


// Reference entry 102b8250; body size 7 bytes.
#line 1 "ENTRY_102b8250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102b8250(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102b8260; body size 7 bytes.
#line 1 "ENTRY_102b8260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102b8260(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102b8270; body size 7 bytes.
#line 1 "ENTRY_102b8270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102b8270(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102b8280; body size 7 bytes.
#line 1 "ENTRY_102b8280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102b8280(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102b8290; body size 49 bytes.
#line 1 "ENTRY_102b8290"

undefined4 __thiscall Recovered_Bulk::m_FUN_102b8290(uint param_2)
{
  int param_1 = (int )this;
  if (((((*(uint *)(param_1 + 4) & 0x7f) + 1 ^ (param_2 & 0x7f) + 1) & 0xfffffffe) == 0) &&
     (((*(uint *)(param_1 + 4) ^ param_2) & 0xffffff00) == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 102b82d0; body size 46 bytes.
#line 1 "ENTRY_102b82d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b82d0(uint param_1,uint param_2)

{
  if (((((param_1 & 0x7f) + 1 ^ (param_2 & 0x7f) + 1) & 0xfffffffe) == 0) &&
     (((param_1 ^ param_2) & 0xffffff00) == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 102b8310; body size 11 bytes.
#line 1 "ENTRY_102b8310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b8310(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 4) & 0xffffff81);
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)((char)uVar1 == -0x80)));
}


// Reference entry 102b8350; body size 12 bytes.
#line 1 "ENTRY_102b8350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b8350(uint param_1)

{
  return (undefined4)(((uint)((int3)((param_1 & 0xffffff81) >> 8)) << 8 | (uint)((char)(param_1 & 0xffffff81) == -0x80)));
}


// Reference entry 102b8360; body size 7 bytes.
#line 1 "ENTRY_102b8360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_102b8360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102b8370; body size 7 bytes.
#line 1 "ENTRY_102b8370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_102b8370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102b83c0; body size 6 bytes.
#line 1 "ENTRY_102b83c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b83c0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 102b83d0; body size 6 bytes.
#line 1 "ENTRY_102b83d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b83d0(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 102b83e0; body size 6 bytes.
#line 1 "ENTRY_102b83e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b83e0(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 102b83f0; body size 6 bytes.
#line 1 "ENTRY_102b83f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b83f0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 102b8400; body size 6 bytes.
#line 1 "ENTRY_102b8400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b8400(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 102b8410; body size 6 bytes.
#line 1 "ENTRY_102b8410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b8410(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 102b8420; body size 6 bytes.
#line 1 "ENTRY_102b8420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b8420(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 102b8430; body size 6 bytes.
#line 1 "ENTRY_102b8430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b8430(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 102b8440; body size 6 bytes.
#line 1 "ENTRY_102b8440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b8440(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 102b8450; body size 6 bytes.
#line 1 "ENTRY_102b8450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b8450(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 102b8460; body size 6 bytes.
#line 1 "ENTRY_102b8460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b8460(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 102b87d0; body size 5 bytes.
#line 1 "ENTRY_102b87d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b87d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102b87e0; body size 3 bytes.
#line 1 "ENTRY_102b87e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b87e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102b87f0; body size 3 bytes.
#line 1 "ENTRY_102b87f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b87f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102b8800; body size 3 bytes.
#line 1 "ENTRY_102b8800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b8800(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102b8810; body size 3 bytes.
#line 1 "ENTRY_102b8810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b8810(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102b8820; body size 3 bytes.
#line 1 "ENTRY_102b8820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b8820(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102b8830; body size 3 bytes.
#line 1 "ENTRY_102b8830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b8830(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102b8840; body size 3 bytes.
#line 1 "ENTRY_102b8840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b8840(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102b8850; body size 3 bytes.
#line 1 "ENTRY_102b8850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b8850(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102b8860; body size 3 bytes.
#line 1 "ENTRY_102b8860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b8860(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102b8870; body size 3 bytes.
#line 1 "ENTRY_102b8870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b8870(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102b8880; body size 40 bytes.
#line 1 "ENTRY_102b8880"

void __thiscall Recovered_Bulk::m_FUN_102b8880(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_102a71f0(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);
    return;
  }
  thunk_FUN_102a3580(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 102b8d30; body size 7 bytes.
#line 1 "ENTRY_102b8d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b8d30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 300));
}


// Reference entry 102b8f20; body size 28 bytes.
#line 1 "ENTRY_102b8f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b8f20(undefined4 *param_1)

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


// Reference entry 102b8f50; body size 28 bytes.
#line 1 "ENTRY_102b8f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b8f50(undefined4 *param_1)

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


// Reference entry 102b8f80; body size 28 bytes.
#line 1 "ENTRY_102b8f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b8f80(undefined4 *param_1)

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


// Reference entry 102b8fb0; body size 28 bytes.
#line 1 "ENTRY_102b8fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b8fb0(undefined4 *param_1)

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


// Reference entry 102b8fe0; body size 28 bytes.
#line 1 "ENTRY_102b8fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b8fe0(undefined4 *param_1)

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


// Reference entry 102b9010; body size 28 bytes.
#line 1 "ENTRY_102b9010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b9010(undefined4 *param_1)

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


// Reference entry 102b9040; body size 28 bytes.
#line 1 "ENTRY_102b9040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b9040(undefined4 *param_1)

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


// Reference entry 102b9070; body size 28 bytes.
#line 1 "ENTRY_102b9070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b9070(undefined4 *param_1)

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


// Reference entry 102b90a0; body size 28 bytes.
#line 1 "ENTRY_102b90a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b90a0(undefined4 *param_1)

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


// Reference entry 102b90d0; body size 28 bytes.
#line 1 "ENTRY_102b90d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b90d0(undefined4 *param_1)

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


// Reference entry 102b9100; body size 28 bytes.
#line 1 "ENTRY_102b9100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b9100(undefined4 *param_1)

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


// Reference entry 102b9130; body size 28 bytes.
#line 1 "ENTRY_102b9130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b9130(undefined4 *param_1)

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


// Reference entry 102b9160; body size 20 bytes.
#line 1 "ENTRY_102b9160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b9160(int *param_1)

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


// Reference entry 102b9180; body size 20 bytes.
#line 1 "ENTRY_102b9180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102b9180(int *param_1)

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


// Reference entry 102bac10; body size 5 bytes.
#line 1 "ENTRY_102bac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bac10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bac20; body size 5 bytes.
#line 1 "ENTRY_102bac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bac20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bba80; body size 22 bytes.
#line 1 "ENTRY_102bba80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102bba80(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0xc);
}


// Reference entry 102bbaa0; body size 23 bytes.
#line 1 "ENTRY_102bbaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102bbaa0(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x14);
}


// Reference entry 102bbac0; body size 9 bytes.
#line 1 "ENTRY_102bbac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102bbac0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 102bc200; body size 18 bytes.
#line 1 "ENTRY_102bc200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bc200(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102bc220; body size 22 bytes.
#line 1 "ENTRY_102bc220"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102bc220(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102bc240; body size 18 bytes.
#line 1 "ENTRY_102bc240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bc240(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102bc260; body size 22 bytes.
#line 1 "ENTRY_102bc260"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102bc260(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102bc280; body size 18 bytes.
#line 1 "ENTRY_102bc280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bc280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102bc2a0; body size 22 bytes.
#line 1 "ENTRY_102bc2a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102bc2a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102bc2c0; body size 18 bytes.
#line 1 "ENTRY_102bc2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bc2c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102bc520; body size 25 bytes.
#line 1 "ENTRY_102bc520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102bc520(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102bc680; body size 13 bytes.
#line 1 "ENTRY_102bc680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102bc680(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102bc690; body size 13 bytes.
#line 1 "ENTRY_102bc690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102bc690(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102bc6a0; body size 113 bytes.
#line 1 "ENTRY_102bc6a0"

void __thiscall Recovered_Bulk::m_FUN_102bc6a0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_102bc730(*(undefined4 *)(*param_2 + 4),*param_1,param_3), 0);
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


// Reference entry 102bc900; body size 3 bytes.
#line 1 "ENTRY_102bc900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102bc900(void)

{
  return;
}


// Reference entry 102bcd30; body size 15 bytes.
#line 1 "ENTRY_102bcd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102bcd30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x28);
  return;
}


// Reference entry 102bcdd0; body size 68 bytes.
#line 1 "ENTRY_102bcdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bcdd0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar1 = (int)(param_1 + 0x10);
    if (0xf < *(uint *)(param_1 + 0x24)) {
      iVar1 = (int)(*(int *)(param_1 + 0x10));
    }
    puVar2 = (undefined4 *)(param_2);
    if (0xf < (uint)param_2[5]) {
      puVar2 = (undefined4 *)((undefined4 *)*param_2);
    }
    iVar1 = (int)(thunk_FUN_102bce30(puVar2,param_2[4],iVar1,*(undefined4 *)(param_1 + 0x20)), 0);
    if (-1 < iVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 102bcee0; body size 5 bytes.
#line 1 "ENTRY_102bcee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bcee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bcef0; body size 5 bytes.
#line 1 "ENTRY_102bcef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bcef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bcf00; body size 5 bytes.
#line 1 "ENTRY_102bcf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bcf00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bcf10; body size 5 bytes.
#line 1 "ENTRY_102bcf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bcf10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bcf20; body size 5 bytes.
#line 1 "ENTRY_102bcf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bcf20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bcf30; body size 5 bytes.
#line 1 "ENTRY_102bcf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bcf30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bcf40; body size 14 bytes.
#line 1 "ENTRY_102bcf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102bcf40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10118c40(param_3);
  return;
}


// Reference entry 102bcf60; body size 56 bytes.
#line 1 "ENTRY_102bcf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102bcf60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0);
  uVar1 = (undefined4)(param_3[1]);
  uVar2 = (undefined4)(param_3[2]);
  uVar3 = (undefined4)(param_3[3]);
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(uVar1);
  param_2[2] = (undefined4)(uVar2);
  param_2[3] = (undefined4)(uVar3);
  *(undefined8*)(param_2 + 4) = (undefined8)(*(undefined8 *)(param_3 + 4));
  param_3[4] = (undefined4)(0);
  param_3[5] = (undefined4)(0xf);
  *(undefined1*)param_3 = (undefined1)((undefined4 *)(0));
  return;
}


// Reference entry 102bd020; body size 15 bytes.
#line 1 "ENTRY_102bd020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bd020(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102bd040; body size 15 bytes.
#line 1 "ENTRY_102bd040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bd040(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102bd060; body size 5 bytes.
#line 1 "ENTRY_102bd060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bd060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bd070; body size 5 bytes.
#line 1 "ENTRY_102bd070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bd070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bd080; body size 5 bytes.
#line 1 "ENTRY_102bd080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bd080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bd090; body size 5 bytes.
#line 1 "ENTRY_102bd090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bd090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bd0a0; body size 5 bytes.
#line 1 "ENTRY_102bd0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bd0a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bd0b0; body size 5 bytes.
#line 1 "ENTRY_102bd0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bd0b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bd0c0; body size 5 bytes.
#line 1 "ENTRY_102bd0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bd0c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bd0d0; body size 5 bytes.
#line 1 "ENTRY_102bd0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bd0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bd0e0; body size 5 bytes.
#line 1 "ENTRY_102bd0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bd0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bd0f0; body size 6 bytes.
#line 1 "ENTRY_102bd0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102bd0f0(void)

{
  return (char *)("SCISearchParameters");
}


// Reference entry 102bd130; body size 27 bytes.
#line 1 "ENTRY_102bd130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bd130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd180; body size 18 bytes.
#line 1 "ENTRY_102bd180"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102bd180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd1e0; body size 11 bytes.
#line 1 "ENTRY_102bd1e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102bd1e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd1f0; body size 9 bytes.
#line 1 "ENTRY_102bd1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bd1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd200; body size 51 bytes.
#line 1 "ENTRY_102bd200"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102bd200(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 102bd2c0; body size 11 bytes.
#line 1 "ENTRY_102bd2c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102bd2c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd2d0; body size 9 bytes.
#line 1 "ENTRY_102bd2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bd2d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd2e0; body size 16 bytes.
#line 1 "ENTRY_102bd2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bd2e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd300; body size 11 bytes.
#line 1 "ENTRY_102bd300"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102bd300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd310; body size 9 bytes.
#line 1 "ENTRY_102bd310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bd310(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd320; body size 11 bytes.
#line 1 "ENTRY_102bd320"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102bd320(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd330; body size 9 bytes.
#line 1 "ENTRY_102bd330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bd330(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd340; body size 3 bytes.
#line 1 "ENTRY_102bd340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102bd340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102bd470; body size 52 bytes.
#line 1 "ENTRY_102bd470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bd470(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd4c0; body size 9 bytes.
#line 1 "ENTRY_102bd4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bd4c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchParameters);
  return (undefined4 *)(param_1);
}


// Reference entry 102bdaf0; body size 7 bytes.
#line 1 "ENTRY_102bdaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102bdaf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102bdc30; body size 14 bytes.
#line 1 "ENTRY_102bdc30"

bool __thiscall Recovered_Bulk::m_FUN_102bdc30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102bdc50; body size 14 bytes.
#line 1 "ENTRY_102bdc50"

bool __thiscall Recovered_Bulk::m_FUN_102bdc50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102bdc70; body size 14 bytes.
#line 1 "ENTRY_102bdc70"

bool __thiscall Recovered_Bulk::m_FUN_102bdc70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102bdc90; body size 14 bytes.
#line 1 "ENTRY_102bdc90"

bool __thiscall Recovered_Bulk::m_FUN_102bdc90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102bdcb0; body size 6 bytes.
#line 1 "ENTRY_102bdcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102bdcb0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 102bdcc0; body size 3 bytes.
#line 1 "ENTRY_102bdcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102bdcc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102bdcd0; body size 3 bytes.
#line 1 "ENTRY_102bdcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102bdcd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102bddc0; body size 6 bytes.
#line 1 "ENTRY_102bddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_102bddc0(int *param_1)

{
  *param_1 = (int)(*param_1 + 0xc);
  return (int *)(param_1);
}


// Reference entry 102bddd0; body size 16 bytes.
#line 1 "ENTRY_102bddd0"

void __thiscall Recovered_Bulk::m_FUN_102bddd0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 0xc);
  return;
}


// Reference entry 102bddf0; body size 52 bytes.
#line 1 "ENTRY_102bddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_102bddf0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_2);
  }
  puVar3 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar3 = (undefined4 *)((undefined4 *)*param_1);
  }
  uVar1 = (uint)(thunk_FUN_102bce30(puVar3,param_1[4],puVar2,param_2[4]), 0);
  return (uint)(uVar1 >> 0x1f);
}


// Reference entry 102be070; body size 31 bytes.
#line 1 "ENTRY_102be070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102be070(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 102be0c0; body size 14 bytes.
#line 1 "ENTRY_102be0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102be0c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x6666666) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102be0e0; body size 3 bytes.
#line 1 "ENTRY_102be0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102be0e0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 102be0f0; body size 5 bytes.
#line 1 "ENTRY_102be0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102be0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102be100; body size 3 bytes.
#line 1 "ENTRY_102be100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102be100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102be110; body size 3 bytes.
#line 1 "ENTRY_102be110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102be110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102be120; body size 3 bytes.
#line 1 "ENTRY_102be120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102be120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102be130; body size 3 bytes.
#line 1 "ENTRY_102be130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102be130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102be140; body size 3 bytes.
#line 1 "ENTRY_102be140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102be140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102be160; body size 3 bytes.
#line 1 "ENTRY_102be160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102be160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102be170; body size 3 bytes.
#line 1 "ENTRY_102be170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102be170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102be410; body size 5 bytes.
#line 1 "ENTRY_102be410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102be410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102be490; body size 30 bytes.
#line 1 "ENTRY_102be490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102be490(int param_1)

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


// Reference entry 102be4f0; body size 3 bytes.
#line 1 "ENTRY_102be4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102be4f0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 102be500; body size 11 bytes.
#line 1 "ENTRY_102be500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102be500(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102be510; body size 8 bytes.
#line 1 "ENTRY_102be510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102be510(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 102be9b0; body size 90 bytes.
#line 1 "ENTRY_102be9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102be9b0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x6666667) {
    param_1 = (uint)(param_1 * 0x28);
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


// Reference entry 102bea30; body size 13 bytes.
#line 1 "ENTRY_102bea30"

void __thiscall Recovered_Bulk::m_FUN_102bea30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 102bea40; body size 11 bytes.
#line 1 "ENTRY_102bea40"

void __thiscall Recovered_Bulk::m_FUN_102bea40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102bea50; body size 96 bytes.
#line 1 "ENTRY_102bea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_102bea50(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  while (uVar1 = (uint)(param_3 - 4), 3 < param_3) {
    if (*(int *)(param_1) != *(int *)(param_2)) goto LAB_102bea78;
    param_1 = (byte *)(param_1 + 4);
    param_2 = (byte *)(param_2 + 4);
    param_3 = (uint)(uVar1);
  }
  if (uVar1 != 0xfffffffc) {
LAB_102bea78:
    bVar2 = (bool)(*param_1 < (byte)(*(param_2)));
    if ((*param_1 != (byte)(*(param_2))) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar2 = (bool)(param_1[1] < param_2[1]), param_1[1] != param_2[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar2 = (bool)(param_1[2] < param_2[2]), param_1[2] != param_2[2] ||
           ((uVar1 != 0xffffffff && (bVar2 = (bool)(param_1[3] < param_2[3]), param_1[3] != param_2[3]))))))
         )))))) {
      return (uint)(-(uint)bVar2 | 1);
    }
  }
  return (uint)(0);
}


// Reference entry 102bead0; body size 45 bytes.
#line 1 "ENTRY_102bead0"

void __thiscall Recovered_Bulk::m_FUN_102bead0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)((undefined4 *)*param_2);
  }
  puVar2 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
  }
  thunk_FUN_102bce30(puVar2,param_1[4],puVar1,param_2[4]);
  return;
}


// Reference entry 102befd0; body size 57 bytes.
#line 1 "ENTRY_102befd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102befd0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102bf020; body size 60 bytes.
#line 1 "ENTRY_102bf020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102bf020(int param_1,int param_2)

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


// Reference entry 102bf070; body size 11 bytes.
#line 1 "ENTRY_102bf070"

void __thiscall Recovered_Bulk::m_FUN_102bf070(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102bf080; body size 12 bytes.
#line 1 "ENTRY_102bf080"

void __thiscall Recovered_Bulk::m_FUN_102bf080(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102bffe0; body size 6 bytes.
#line 1 "ENTRY_102bffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102bffe0(void)

{
  return (char *)("SCISearchParameters");
}


// Reference entry 102bfff0; body size 7 bytes.
#line 1 "ENTRY_102bfff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_102bfff0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102c0000; body size 6 bytes.
#line 1 "ENTRY_102c0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102c0000(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 102c0010; body size 6 bytes.
#line 1 "ENTRY_102c0010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102c0010(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 102c0140; body size 5 bytes.
#line 1 "ENTRY_102c0140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102c0140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102c0150; body size 3 bytes.
#line 1 "ENTRY_102c0150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c0150(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c0160; body size 7 bytes.
#line 1 "ENTRY_102c0160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c0160(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x420));
}


// Reference entry 102c0230; body size 4 bytes.
#line 1 "ENTRY_102c0230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c0230(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102c0240; body size 26 bytes.
#line 1 "ENTRY_102c0240"

int * __thiscall Recovered_Bulk::m_FUN_102c0240(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102c0260; body size 6 bytes.
#line 1 "ENTRY_102c0260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c0260(void)

{
  return (char *)("SCISearchQuery");
}


// Reference entry 102c0270; body size 27 bytes.
#line 1 "ENTRY_102c0270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c0270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c02a0; body size 16 bytes.
#line 1 "ENTRY_102c02a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c02a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102c02e0; body size 9 bytes.
#line 1 "ENTRY_102c02e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c02e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchQuery);
  return (undefined4 *)(param_1);
}


// Reference entry 102c0330; body size 19 bytes.
#line 1 "ENTRY_102c0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c0330(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102c03c0; body size 7 bytes.
#line 1 "ENTRY_102c03c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c03c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102c04d0; body size 3 bytes.
#line 1 "ENTRY_102c04d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c04d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c0990; body size 6 bytes.
#line 1 "ENTRY_102c0990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c0990(void)

{
  return (char *)("SCISearchQuery");
}


// Reference entry 102c09b0; body size 7 bytes.
#line 1 "ENTRY_102c09b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102c09b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102c09d0; body size 3 bytes.
#line 1 "ENTRY_102c09d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c09d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c0b00; body size 28 bytes.
#line 1 "ENTRY_102c0b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c0b00(undefined4 *param_1)

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


// Reference entry 102c0ce0; body size 26 bytes.
#line 1 "ENTRY_102c0ce0"

int * __thiscall Recovered_Bulk::m_FUN_102c0ce0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102c0d00; body size 91 bytes.
#line 1 "ENTRY_102c0d00"

int * __thiscall Recovered_Bulk::m_FUN_102c0d00(int *param_2)
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


// Reference entry 102c0d80; body size 26 bytes.
#line 1 "ENTRY_102c0d80"

int * __thiscall Recovered_Bulk::m_FUN_102c0d80(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102c11c0; body size 6 bytes.
#line 1 "ENTRY_102c11c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c11c0(void)

{
  return (char *)("SCICertificateChain");
}


// Reference entry 102c11d0; body size 6 bytes.
#line 1 "ENTRY_102c11d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c11d0(void)

{
  return (char *)("SCISecurityContext");
}


// Reference entry 102c1230; body size 27 bytes.
#line 1 "ENTRY_102c1230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c1230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c1260; body size 27 bytes.
#line 1 "ENTRY_102c1260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c1260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c12d0; body size 3 bytes.
#line 1 "ENTRY_102c12d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c12d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102c12e0; body size 10 bytes.
#line 1 "ENTRY_102c12e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102c12e0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102c14e0; body size 9 bytes.
#line 1 "ENTRY_102c14e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c14e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCICertificateChain);
  return (undefined4 *)(param_1);
}


// Reference entry 102c17e0; body size 7 bytes.
#line 1 "ENTRY_102c17e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c17e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102c18b0; body size 3 bytes.
#line 1 "ENTRY_102c18b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c18b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c18c0; body size 3 bytes.
#line 1 "ENTRY_102c18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c18c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c1bc0; body size 26 bytes.
#line 1 "ENTRY_102c1bc0"

void __thiscall Recovered_Bulk::m_FUN_102c1bc0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102c2080; body size 6 bytes.
#line 1 "ENTRY_102c2080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c2080(void)

{
  return (char *)("SCICertificateChain");
}


// Reference entry 102c2090; body size 6 bytes.
#line 1 "ENTRY_102c2090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c2090(void)

{
  return (char *)("SCISecurityContext");
}


// Reference entry 102c2120; body size 3 bytes.
#line 1 "ENTRY_102c2120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c2120(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c2130; body size 3 bytes.
#line 1 "ENTRY_102c2130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c2130(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c2380; body size 28 bytes.
#line 1 "ENTRY_102c2380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c2380(undefined4 *param_1)

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


// Reference entry 102c23b0; body size 20 bytes.
#line 1 "ENTRY_102c23b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c23b0(int *param_1)

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


// Reference entry 102c2ac0; body size 26 bytes.
#line 1 "ENTRY_102c2ac0"

int * __thiscall Recovered_Bulk::m_FUN_102c2ac0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102c2d00; body size 25 bytes.
#line 1 "ENTRY_102c2d00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102c2d00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c2e80; body size 26 bytes.
#line 1 "ENTRY_102c2e80"

int * __thiscall Recovered_Bulk::m_FUN_102c2e80(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102c2f20; body size 91 bytes.
#line 1 "ENTRY_102c2f20"

int * __thiscall Recovered_Bulk::m_FUN_102c2f20(int *param_2)
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


// Reference entry 102c2fa0; body size 26 bytes.
#line 1 "ENTRY_102c2fa0"

int * __thiscall Recovered_Bulk::m_FUN_102c2fa0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102c34c0; body size 78 bytes.
#line 1 "ENTRY_102c34c0"

int * __thiscall Recovered_Bulk::m_FUN_102c34c0(int *param_2)
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


// Reference entry 102c36e0; body size 130 bytes.
#line 1 "ENTRY_102c36e0"

int __thiscall Recovered_Bulk::m_FUN_102c36e0(int *param_2,undefined4 param_3)
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


// Reference entry 102c3790; body size 130 bytes.
#line 1 "ENTRY_102c3790"

int __thiscall Recovered_Bulk::m_FUN_102c3790(int *param_2,undefined4 param_3)
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


// Reference entry 102c3840; body size 40 bytes.
#line 1 "ENTRY_102c3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102c3840(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 102c3880; body size 5 bytes.
#line 1 "ENTRY_102c3880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102c3880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102c3890; body size 5 bytes.
#line 1 "ENTRY_102c3890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102c3890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102c38a0; body size 6 bytes.
#line 1 "ENTRY_102c38a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c38a0(void)

{
  return (char *)("SCIActionSelectableDescriptor");
}


// Reference entry 102c38b0; body size 6 bytes.
#line 1 "ENTRY_102c38b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c38b0(void)

{
  return (char *)("SCIEventSource");
}


// Reference entry 102c38c0; body size 6 bytes.
#line 1 "ENTRY_102c38c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c38c0(void)

{
  return (char *)("SCIServiceAccount");
}


// Reference entry 102c38d0; body size 6 bytes.
#line 1 "ENTRY_102c38d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c38d0(void)

{
  return (char *)("SCIServiceAccountFilter");
}


// Reference entry 102c38e0; body size 6 bytes.
#line 1 "ENTRY_102c38e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c38e0(void)

{
  return (char *)("SCIServiceAccountManager");
}


// Reference entry 102c38f0; body size 27 bytes.
#line 1 "ENTRY_102c38f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c38f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3920; body size 27 bytes.
#line 1 "ENTRY_102c3920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3950; body size 27 bytes.
#line 1 "ENTRY_102c3950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3980; body size 27 bytes.
#line 1 "ENTRY_102c3980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c39b0; body size 70 bytes.
#line 1 "ENTRY_102c39b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c39b0(undefined4 *param_1)

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


// Reference entry 102c3a10; body size 70 bytes.
#line 1 "ENTRY_102c3a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3a10(undefined4 *param_1)

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


// Reference entry 102c3a70; body size 16 bytes.
#line 1 "ENTRY_102c3a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3a70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3b10; body size 16 bytes.
#line 1 "ENTRY_102c3b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3b10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3bf0; body size 16 bytes.
#line 1 "ENTRY_102c3bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3bf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3c90; body size 11 bytes.
#line 1 "ENTRY_102c3c90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102c3c90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3ca0; body size 28 bytes.
#line 1 "ENTRY_102c3ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3ca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperHelper);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3cd0; body size 10 bytes.
#line 1 "ENTRY_102c3cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102c3cd0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102c3ce0; body size 10 bytes.
#line 1 "ENTRY_102c3ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102c3ce0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102c3cf0; body size 12 bytes.
#line 1 "ENTRY_102c3cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102c3cf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102c3d80; body size 12 bytes.
#line 1 "ENTRY_102c3d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102c3d80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102c3e10; body size 9 bytes.
#line 1 "ENTRY_102c3e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3e10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionSelectableDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3e20; body size 9 bytes.
#line 1 "ENTRY_102c3e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIEventSource);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3eb0; body size 9 bytes.
#line 1 "ENTRY_102c3eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceAccountFilter);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3ec0; body size 9 bytes.
#line 1 "ENTRY_102c3ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceAccountManager);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3ed0; body size 42 bytes.
#line 1 "ENTRY_102c3ed0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102c3ed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceAccountFilter);
  return (undefined4 *)(param_1);
}


// Reference entry 102c4410; body size 11 bytes.
#line 1 "ENTRY_102c4410"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102c4410(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102c4420; body size 18 bytes.
#line 1 "ENTRY_102c4420"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102c4420(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102c4440; body size 9 bytes.
#line 1 "ENTRY_102c4440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c4440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);
  return (undefined4 *)(param_1);
}


// Reference entry 102c4d50; body size 7 bytes.
#line 1 "ENTRY_102c4d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c4d50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102c4d60; body size 7 bytes.
#line 1 "ENTRY_102c4d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c4d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102c4da0; body size 7 bytes.
#line 1 "ENTRY_102c4da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c4da0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102c4db0; body size 7 bytes.
#line 1 "ENTRY_102c4db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c4db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102c4dc0; body size 19 bytes.
#line 1 "ENTRY_102c4dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c4dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102c51f0; body size 3 bytes.
#line 1 "ENTRY_102c51f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102c51f0(void)

{
  return;
}


// Reference entry 102c5200; body size 7 bytes.
#line 1 "ENTRY_102c5200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102c5200(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);
  return;
}


// Reference entry 102c5350; body size 3 bytes.
#line 1 "ENTRY_102c5350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5350(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c5360; body size 7 bytes.
#line 1 "ENTRY_102c5360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102c5360(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102c5370; body size 3 bytes.
#line 1 "ENTRY_102c5370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5370(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c5380; body size 3 bytes.
#line 1 "ENTRY_102c5380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c5390; body size 3 bytes.
#line 1 "ENTRY_102c5390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c53a0; body size 3 bytes.
#line 1 "ENTRY_102c53a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c53a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c53b0; body size 7 bytes.
#line 1 "ENTRY_102c53b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102c53b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102c53c0; body size 7 bytes.
#line 1 "ENTRY_102c53c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102c53c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102c53d0; body size 8 bytes.
#line 1 "ENTRY_102c53d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102c53d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 102c53e0; body size 8 bytes.
#line 1 "ENTRY_102c53e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102c53e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 102c53f0; body size 4 bytes.
#line 1 "ENTRY_102c53f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c53f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102c5400; body size 4 bytes.
#line 1 "ENTRY_102c5400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5400(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102c5410; body size 3 bytes.
#line 1 "ENTRY_102c5410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c5420; body size 3 bytes.
#line 1 "ENTRY_102c5420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5420(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c5430; body size 3 bytes.
#line 1 "ENTRY_102c5430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c5440; body size 3 bytes.
#line 1 "ENTRY_102c5440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c5450; body size 3 bytes.
#line 1 "ENTRY_102c5450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5450(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c5460; body size 3 bytes.
#line 1 "ENTRY_102c5460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5460(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c5470; body size 3 bytes.
#line 1 "ENTRY_102c5470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5470(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c5c70; body size 8 bytes.
#line 1 "ENTRY_102c5c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102c5c70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102c5c80; body size 8 bytes.
#line 1 "ENTRY_102c5c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102c5c80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102c5c90; body size 4 bytes.
#line 1 "ENTRY_102c5c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5c90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 102c5ca0; body size 4 bytes.
#line 1 "ENTRY_102c5ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c5ca0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 102c5cb0; body size 7 bytes.
#line 1 "ENTRY_102c5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102c5cb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 102c5cc0; body size 7 bytes.
#line 1 "ENTRY_102c5cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102c5cc0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 102c5cd0; body size 26 bytes.
#line 1 "ENTRY_102c5cd0"

void __thiscall Recovered_Bulk::m_FUN_102c5cd0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102c5cf0; body size 26 bytes.
#line 1 "ENTRY_102c5cf0"

void __thiscall Recovered_Bulk::m_FUN_102c5cf0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102c5d10; body size 10 bytes.
#line 1 "ENTRY_102c5d10"

void __thiscall Recovered_Bulk::m_FUN_102c5d10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 102c5d20; body size 10 bytes.
#line 1 "ENTRY_102c5d20"

void __thiscall Recovered_Bulk::m_FUN_102c5d20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 102c6d70; body size 16 bytes.
#line 1 "ENTRY_102c6d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c6d70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102c6d90; body size 16 bytes.
#line 1 "ENTRY_102c6d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c6d90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102c6db0; body size 9 bytes.
#line 1 "ENTRY_102c6db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c6db0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102c6dc0; body size 9 bytes.
#line 1 "ENTRY_102c6dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c6dc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102c6dd0; body size 9 bytes.
#line 1 "ENTRY_102c6dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c6dd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102c6ed0; body size 31 bytes.
#line 1 "ENTRY_102c6ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_102c6ed0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (int)(8);
  if (*(char *)(param_1 + 0x14b) != '\0') {
    iVar1 = (int)(0x14b);
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)((param_1 + iVar1)) != (undefined1 *)(0x0)) {
    puVar2 = (undefined1 *)((undefined1 *)(param_1 + iVar1));
  }
  return (undefined1 *)(puVar2);
}


// Reference entry 102c6f00; body size 31 bytes.
#line 1 "ENTRY_102c6f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_102c6f00(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (int)(0x428);
  if (*(char *)(param_1 + 0x56b) != '\0') {
    iVar1 = (int)(0x56b);
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)((param_1 + iVar1)) != (undefined1 *)(0x0)) {
    puVar2 = (undefined1 *)((undefined1 *)(param_1 + iVar1));
  }
  return (undefined1 *)(puVar2);
}


// Reference entry 102c7c20; body size 4 bytes.
#line 1 "ENTRY_102c7c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c7c20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102c7c30; body size 4 bytes.
#line 1 "ENTRY_102c7c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c7c30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x28));
}


// Reference entry 102c7cf0; body size 3 bytes.
#line 1 "ENTRY_102c7cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c7cf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c7d00; body size 3 bytes.
#line 1 "ENTRY_102c7d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c7d00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c8080; body size 4 bytes.
#line 1 "ENTRY_102c8080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c8080(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102c8090; body size 4 bytes.
#line 1 "ENTRY_102c8090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c8090(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102c89d0; body size 6 bytes.
#line 1 "ENTRY_102c89d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c89d0(void)

{
  return (char *)("SCIActionSelectableDescriptor");
}


// Reference entry 102c89e0; body size 6 bytes.
#line 1 "ENTRY_102c89e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c89e0(void)

{
  return (char *)("SCIEventSource");
}


// Reference entry 102c89f0; body size 6 bytes.
#line 1 "ENTRY_102c89f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c89f0(void)

{
  return (char *)("SCIServiceAccount");
}


// Reference entry 102c8a00; body size 6 bytes.
#line 1 "ENTRY_102c8a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c8a00(void)

{
  return (char *)("SCIServiceAccountFilter");
}


// Reference entry 102c8a10; body size 6 bytes.
#line 1 "ENTRY_102c8a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102c8a10(void)

{
  return (char *)("SCIServiceAccountManager");
}


// Reference entry 102c8b80; body size 7 bytes.
#line 1 "ENTRY_102c8b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102c8b80(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102c9910; body size 3 bytes.
#line 1 "ENTRY_102c9910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c9910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c9920; body size 3 bytes.
#line 1 "ENTRY_102c9920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c9920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c9930; body size 3 bytes.
#line 1 "ENTRY_102c9930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c9930(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102c9940; body size 3 bytes.
#line 1 "ENTRY_102c9940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102c9940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ca070; body size 28 bytes.
#line 1 "ENTRY_102ca070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ca070(undefined4 *param_1)

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


// Reference entry 102ca0a0; body size 28 bytes.
#line 1 "ENTRY_102ca0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ca0a0(undefined4 *param_1)

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


// Reference entry 102ca0d0; body size 28 bytes.
#line 1 "ENTRY_102ca0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ca0d0(undefined4 *param_1)

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


// Reference entry 102ca100; body size 28 bytes.
#line 1 "ENTRY_102ca100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ca100(undefined4 *param_1)

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


// Reference entry 102ca130; body size 28 bytes.
#line 1 "ENTRY_102ca130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ca130(undefined4 *param_1)

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


// Reference entry 102ca160; body size 28 bytes.
#line 1 "ENTRY_102ca160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ca160(undefined4 *param_1)

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


// Reference entry 102ca190; body size 28 bytes.
#line 1 "ENTRY_102ca190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ca190(undefined4 *param_1)

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


// Reference entry 102ca1c0; body size 28 bytes.
#line 1 "ENTRY_102ca1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ca1c0(undefined4 *param_1)

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


// Reference entry 102ca1f0; body size 20 bytes.
#line 1 "ENTRY_102ca1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ca1f0(int *param_1)

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


// Reference entry 102ca210; body size 20 bytes.
#line 1 "ENTRY_102ca210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ca210(int *param_1)

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


// Reference entry 102ca700; body size 10 bytes.
#line 1 "ENTRY_102ca700"

void __thiscall Recovered_Bulk::m_FUN_102ca700(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 102ca870; body size 32 bytes.
#line 1 "ENTRY_102ca870"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ca870(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ca8a0; body size 18 bytes.
#line 1 "ENTRY_102ca8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ca8a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ca8c0; body size 25 bytes.
#line 1 "ENTRY_102ca8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ca8c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ca8e0; body size 22 bytes.
#line 1 "ENTRY_102ca8e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ca8e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102ca900; body size 18 bytes.
#line 1 "ENTRY_102ca900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ca900(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ca9e0; body size 22 bytes.
#line 1 "ENTRY_102ca9e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ca9e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102caa00; body size 34 bytes.
#line 1 "ENTRY_102caa00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102caa00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102cac10; body size 91 bytes.
#line 1 "ENTRY_102cac10"

int * __thiscall Recovered_Bulk::m_FUN_102cac10(int *param_2)
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


// Reference entry 102cac90; body size 25 bytes.
#line 1 "ENTRY_102cac90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102cac90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102cacb0; body size 26 bytes.
#line 1 "ENTRY_102cacb0"

int * __thiscall Recovered_Bulk::m_FUN_102cacb0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102cacd0; body size 91 bytes.
#line 1 "ENTRY_102cacd0"

int * __thiscall Recovered_Bulk::m_FUN_102cacd0(int *param_2)
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


// Reference entry 102cad50; body size 26 bytes.
#line 1 "ENTRY_102cad50"

int * __thiscall Recovered_Bulk::m_FUN_102cad50(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102cad70; body size 26 bytes.
#line 1 "ENTRY_102cad70"

int * __thiscall Recovered_Bulk::m_FUN_102cad70(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102cae80; body size 78 bytes.
#line 1 "ENTRY_102cae80"

int * __thiscall Recovered_Bulk::m_FUN_102cae80(int *param_2)
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


// Reference entry 102cb040; body size 25 bytes.
#line 1 "ENTRY_102cb040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cb040(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102cb060; body size 13 bytes.
#line 1 "ENTRY_102cb060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cb060(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102cb070; body size 13 bytes.
#line 1 "ENTRY_102cb070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cb070(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102cb080; body size 3 bytes.
#line 1 "ENTRY_102cb080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cb080(void)

{
  return;
}


// Reference entry 102cb130; body size 21 bytes.
#line 1 "ENTRY_102cb130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102cb130(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(0);
  puVar1[1] = (undefined4)(0);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 102cb150; body size 39 bytes.
#line 1 "ENTRY_102cb150"

void __thiscall Recovered_Bulk::m_FUN_102cb150(undefined4 *param_2)
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


// Reference entry 102cb320; body size 15 bytes.
#line 1 "ENTRY_102cb320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cb320(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 102cb3c0; body size 7 bytes.
#line 1 "ENTRY_102cb3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cb3c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102cb3d0; body size 5 bytes.
#line 1 "ENTRY_102cb3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cb3d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cb3e0; body size 31 bytes.
#line 1 "ENTRY_102cb3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_102cb3e0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX))
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 102cb850; body size 5 bytes.
#line 1 "ENTRY_102cb850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cb850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cb900; body size 38 bytes.
#line 1 "ENTRY_102cb900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cb900(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1 = (undefined4 *)(param_1 + 2);
  }
  return;
}


// Reference entry 102cb930; body size 5 bytes.
#line 1 "ENTRY_102cb930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cb930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cb940; body size 5 bytes.
#line 1 "ENTRY_102cb940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cb940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cb950; body size 5 bytes.
#line 1 "ENTRY_102cb950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cb950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cb960; body size 5 bytes.
#line 1 "ENTRY_102cb960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cb960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cb970; body size 5 bytes.
#line 1 "ENTRY_102cb970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cb970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cb980; body size 5 bytes.
#line 1 "ENTRY_102cb980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cb980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cbaf0; body size 29 bytes.
#line 1 "ENTRY_102cbaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cbaf0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 102cbb20; body size 18 bytes.
#line 1 "ENTRY_102cbb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cbb20(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 102cbb40; body size 28 bytes.
#line 1 "ENTRY_102cbb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cbb40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102cbc50; body size 15 bytes.
#line 1 "ENTRY_102cbc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cbc50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102cbc70; body size 15 bytes.
#line 1 "ENTRY_102cbc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cbc70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102cbc90; body size 5 bytes.
#line 1 "ENTRY_102cbc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cbc90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cbca0; body size 5 bytes.
#line 1 "ENTRY_102cbca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cbca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cbcb0; body size 5 bytes.
#line 1 "ENTRY_102cbcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cbcb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cbcc0; body size 5 bytes.
#line 1 "ENTRY_102cbcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cbcc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cbcd0; body size 5 bytes.
#line 1 "ENTRY_102cbcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cbcd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cbce0; body size 5 bytes.
#line 1 "ENTRY_102cbce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102cbce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cbcf0; body size 6 bytes.
#line 1 "ENTRY_102cbcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102cbcf0(void)

{
  return (char *)("SCIServiceDescriptor");
}


// Reference entry 102cbd00; body size 6 bytes.
#line 1 "ENTRY_102cbd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102cbd00(void)

{
  return (char *)("SCIServiceDescriptorFilter");
}


// Reference entry 102cbd10; body size 6 bytes.
#line 1 "ENTRY_102cbd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102cbd10(void)

{
  return (char *)("SCIServiceDescriptorManager");
}


// Reference entry 102cbd90; body size 27 bytes.
#line 1 "ENTRY_102cbd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cbd90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102cbdc0; body size 27 bytes.
#line 1 "ENTRY_102cbdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cbdc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102cbdf0; body size 70 bytes.
#line 1 "ENTRY_102cbdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cbdf0(undefined4 *param_1)

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


// Reference entry 102cbe50; body size 70 bytes.
#line 1 "ENTRY_102cbe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cbe50(undefined4 *param_1)

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


// Reference entry 102cbf30; body size 16 bytes.
#line 1 "ENTRY_102cbf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cbf30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102cbf50; body size 16 bytes.
#line 1 "ENTRY_102cbf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cbf50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102cbf70; body size 32 bytes.
#line 1 "ENTRY_102cbf70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102cbf70(undefined4 *param_2)
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


// Reference entry 102cbfa0; body size 16 bytes.
#line 1 "ENTRY_102cbfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cbfa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc000; body size 42 bytes.
#line 1 "ENTRY_102cc000"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102cc000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperObj);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc040; body size 18 bytes.
#line 1 "ENTRY_102cc040"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102cc040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc060; body size 10 bytes.
#line 1 "ENTRY_102cc060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102cc060(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102cc070; body size 10 bytes.
#line 1 "ENTRY_102cc070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102cc070(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102cc0c0; body size 11 bytes.
#line 1 "ENTRY_102cc0c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102cc0c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc0d0; body size 9 bytes.
#line 1 "ENTRY_102cc0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cc0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc0e0; body size 11 bytes.
#line 1 "ENTRY_102cc0e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102cc0e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc170; body size 11 bytes.
#line 1 "ENTRY_102cc170"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102cc170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc180; body size 9 bytes.
#line 1 "ENTRY_102cc180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cc180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc190; body size 16 bytes.
#line 1 "ENTRY_102cc190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cc190(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc1b0; body size 21 bytes.
#line 1 "ENTRY_102cc1b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102cc1b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc1d0; body size 11 bytes.
#line 1 "ENTRY_102cc1d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102cc1d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc1e0; body size 11 bytes.
#line 1 "ENTRY_102cc1e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102cc1e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc1f0; body size 23 bytes.
#line 1 "ENTRY_102cc1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cc1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc210; body size 3 bytes.
#line 1 "ENTRY_102cc210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cc210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cc220; body size 3 bytes.
#line 1 "ENTRY_102cc220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cc220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cc230; body size 12 bytes.
#line 1 "ENTRY_102cc230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102cc230(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102cc2c0; body size 12 bytes.
#line 1 "ENTRY_102cc2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102cc2c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102cc350; body size 52 bytes.
#line 1 "ENTRY_102cc350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cc350(undefined4 *param_1)

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


// Reference entry 102cc3a0; body size 23 bytes.
#line 1 "ENTRY_102cc3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cc3a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc3c0; body size 9 bytes.
#line 1 "ENTRY_102cc3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cc3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceDescriptorFilter);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc3d0; body size 9 bytes.
#line 1 "ENTRY_102cc3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cc3d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceDescriptorManager);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc3e0; body size 42 bytes.
#line 1 "ENTRY_102cc3e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102cc3e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptorFilter);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc830; body size 19 bytes.
#line 1 "ENTRY_102cc830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102cc830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102cc850; body size 19 bytes.
#line 1 "ENTRY_102cc850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102cc850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102ccd70; body size 19 bytes.
#line 1 "ENTRY_102ccd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ccd70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 102ccf30; body size 7 bytes.
#line 1 "ENTRY_102ccf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ccf30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102ccf40; body size 7 bytes.
#line 1 "ENTRY_102ccf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ccf40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102ccf50; body size 19 bytes.
#line 1 "ENTRY_102ccf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ccf50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102cd240; body size 65 bytes.
#line 1 "ENTRY_102cd240"

int * __thiscall Recovered_Bulk::m_FUN_102cd240(int *param_2)
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


// Reference entry 102cd370; body size 14 bytes.
#line 1 "ENTRY_102cd370"

bool __thiscall Recovered_Bulk::m_FUN_102cd370(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102cd390; body size 14 bytes.
#line 1 "ENTRY_102cd390"

bool __thiscall Recovered_Bulk::m_FUN_102cd390(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102cd3b0; body size 14 bytes.
#line 1 "ENTRY_102cd3b0"

bool __thiscall Recovered_Bulk::m_FUN_102cd3b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102cd3d0; body size 14 bytes.
#line 1 "ENTRY_102cd3d0"

bool __thiscall Recovered_Bulk::m_FUN_102cd3d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102cd4e0; body size 12 bytes.
#line 1 "ENTRY_102cd4e0"

int __thiscall Recovered_Bulk::m_FUN_102cd4e0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 102cd4f0; body size 7 bytes.
#line 1 "ENTRY_102cd4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102cd4f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102cd500; body size 3 bytes.
#line 1 "ENTRY_102cd500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cd500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102cd510; body size 3 bytes.
#line 1 "ENTRY_102cd510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cd510(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102cd520; body size 3 bytes.
#line 1 "ENTRY_102cd520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cd520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102cd530; body size 8 bytes.
#line 1 "ENTRY_102cd530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102cd530(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 102cd540; body size 8 bytes.
#line 1 "ENTRY_102cd540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102cd540(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 102cd550; body size 4 bytes.
#line 1 "ENTRY_102cd550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cd550(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102cd560; body size 3 bytes.
#line 1 "ENTRY_102cd560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cd560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102cd570; body size 6 bytes.
#line 1 "ENTRY_102cd570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102cd570(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 102cd580; body size 6 bytes.
#line 1 "ENTRY_102cd580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102cd580(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 102cd590; body size 6 bytes.
#line 1 "ENTRY_102cd590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102cd590(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 102cd5a0; body size 3 bytes.
#line 1 "ENTRY_102cd5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cd5a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102cd5b0; body size 3 bytes.
#line 1 "ENTRY_102cd5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cd5b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102cd6a0; body size 6 bytes.
#line 1 "ENTRY_102cd6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_102cd6a0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 102cd6b0; body size 6 bytes.
#line 1 "ENTRY_102cd6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_102cd6b0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 102cdb50; body size 31 bytes.
#line 1 "ENTRY_102cdb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102cdb50(undefined4 *param_1)

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


// Reference entry 102cdba0; body size 49 bytes.
#line 1 "ENTRY_102cdba0"

uint __thiscall Recovered_Bulk::m_FUN_102cdba0(uint param_2)
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


// Reference entry 102cdc70; body size 14 bytes.
#line 1 "ENTRY_102cdc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102cdc70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102cdc90; body size 3 bytes.
#line 1 "ENTRY_102cdc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102cdc90(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 102cdcc0; body size 8 bytes.
#line 1 "ENTRY_102cdcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102cdcc0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102cdcd0; body size 8 bytes.
#line 1 "ENTRY_102cdcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102cdcd0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102cdce0; body size 3 bytes.
#line 1 "ENTRY_102cdce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cdcf0; body size 3 bytes.
#line 1 "ENTRY_102cdcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdcf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cdd00; body size 3 bytes.
#line 1 "ENTRY_102cdd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdd00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cdd10; body size 3 bytes.
#line 1 "ENTRY_102cdd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdd10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cdd20; body size 3 bytes.
#line 1 "ENTRY_102cdd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdd20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cdd30; body size 3 bytes.
#line 1 "ENTRY_102cdd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdd30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cdd40; body size 3 bytes.
#line 1 "ENTRY_102cdd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdd40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cdd50; body size 3 bytes.
#line 1 "ENTRY_102cdd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdd50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cdd60; body size 3 bytes.
#line 1 "ENTRY_102cdd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdd60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cdd80; body size 3 bytes.
#line 1 "ENTRY_102cdd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdd80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cdd90; body size 3 bytes.
#line 1 "ENTRY_102cdd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdd90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102cdda0; body size 4 bytes.
#line 1 "ENTRY_102cdda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cdda0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 102cddb0; body size 4 bytes.
#line 1 "ENTRY_102cddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cddb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 102ce050; body size 7 bytes.
#line 1 "ENTRY_102ce050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ce050(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 102ce060; body size 7 bytes.
#line 1 "ENTRY_102ce060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ce060(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 102ce070; body size 79 bytes.
#line 1 "ENTRY_102ce070"

void __thiscall Recovered_Bulk::m_FUN_102ce070(int param_2)
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


// Reference entry 102ce110; body size 3 bytes.
#line 1 "ENTRY_102ce110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ce110(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 102ce120; body size 11 bytes.
#line 1 "ENTRY_102ce120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ce120(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102ce130; body size 6 bytes.
#line 1 "ENTRY_102ce130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ce130(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 102ce140; body size 26 bytes.
#line 1 "ENTRY_102ce140"

void __thiscall Recovered_Bulk::m_FUN_102ce140(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102ce160; body size 26 bytes.
#line 1 "ENTRY_102ce160"

void __thiscall Recovered_Bulk::m_FUN_102ce160(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102ce180; body size 83 bytes.
#line 1 "ENTRY_102ce180"

void __thiscall Recovered_Bulk::m_FUN_102ce180(int *param_2)
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


// Reference entry 102ce1f0; body size 10 bytes.
#line 1 "ENTRY_102ce1f0"

void __thiscall Recovered_Bulk::m_FUN_102ce1f0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 102ce200; body size 10 bytes.
#line 1 "ENTRY_102ce200"

void __thiscall Recovered_Bulk::m_FUN_102ce200(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 102cf1b0; body size 97 bytes.
#line 1 "ENTRY_102cf1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102cf1b0(uint param_1)

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


// Reference entry 102cf230; body size 87 bytes.
#line 1 "ENTRY_102cf230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102cf230(uint param_1)

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


// Reference entry 102cf2f0; body size 13 bytes.
#line 1 "ENTRY_102cf2f0"

void __thiscall Recovered_Bulk::m_FUN_102cf2f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 102cf300; body size 11 bytes.
#line 1 "ENTRY_102cf300"

void __thiscall Recovered_Bulk::m_FUN_102cf300(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102cf360; body size 9 bytes.
#line 1 "ENTRY_102cf360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102cf360(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 102cf3e0; body size 63 bytes.
#line 1 "ENTRY_102cf3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cf3e0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102cf430; body size 66 bytes.
#line 1 "ENTRY_102cf430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102cf430(int param_1,int param_2)

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


// Reference entry 102cf4e0; body size 16 bytes.
#line 1 "ENTRY_102cf4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cf4e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102cf500; body size 9 bytes.
#line 1 "ENTRY_102cf500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cf500(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102cf5e0; body size 11 bytes.
#line 1 "ENTRY_102cf5e0"

void __thiscall Recovered_Bulk::m_FUN_102cf5e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102cf5f0; body size 12 bytes.
#line 1 "ENTRY_102cf5f0"

void __thiscall Recovered_Bulk::m_FUN_102cf5f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102cf7f0; body size 4 bytes.
#line 1 "ENTRY_102cf7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cf7f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102cf800; body size 4 bytes.
#line 1 "ENTRY_102cf800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cf800(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102cfa80; body size 4 bytes.
#line 1 "ENTRY_102cfa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cfa80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 102cfa90; body size 4 bytes.
#line 1 "ENTRY_102cfa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102cfa90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 102d0bc0; body size 6 bytes.
#line 1 "ENTRY_102d0bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102d0bc0(void)

{
  return (char *)("SCIServiceDescriptor");
}


// Reference entry 102d0bd0; body size 6 bytes.
#line 1 "ENTRY_102d0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102d0bd0(void)

{
  return (char *)("SCIServiceDescriptorFilter");
}


// Reference entry 102d0be0; body size 6 bytes.
#line 1 "ENTRY_102d0be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102d0be0(void)

{
  return (char *)("SCIServiceDescriptorManager");
}


// Reference entry 102d0bf0; body size 7 bytes.
#line 1 "ENTRY_102d0bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d0bf0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 102d0c00; body size 7 bytes.
#line 1 "ENTRY_102d0c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d0c00(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 102d0c10; body size 7 bytes.
#line 1 "ENTRY_102d0c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d0c10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102d1150; body size 6 bytes.
#line 1 "ENTRY_102d1150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d1150(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 102d1160; body size 6 bytes.
#line 1 "ENTRY_102d1160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d1160(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 102d1170; body size 6 bytes.
#line 1 "ENTRY_102d1170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d1170(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 102d1180; body size 6 bytes.
#line 1 "ENTRY_102d1180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d1180(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 102d1800; body size 3 bytes.
#line 1 "ENTRY_102d1800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d1800(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d1810; body size 3 bytes.
#line 1 "ENTRY_102d1810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d1810(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d1820; body size 3 bytes.
#line 1 "ENTRY_102d1820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d1820(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d1b90; body size 28 bytes.
#line 1 "ENTRY_102d1b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d1b90(undefined4 *param_1)

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


// Reference entry 102d1bc0; body size 28 bytes.
#line 1 "ENTRY_102d1bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d1bc0(undefined4 *param_1)

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


// Reference entry 102d1bf0; body size 28 bytes.
#line 1 "ENTRY_102d1bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d1bf0(undefined4 *param_1)

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


// Reference entry 102d1e10; body size 9 bytes.
#line 1 "ENTRY_102d1e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102d1e10(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 102d1e40; body size 61 bytes.
#line 1 "ENTRY_102d1e40"

int * __thiscall Recovered_Bulk::m_FUN_102d1e40(undefined4 param_2,int *param_3)
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
  return (int *)(param_1);
}


// Reference entry 102d1e90; body size 22 bytes.
#line 1 "ENTRY_102d1e90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d1e90(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102d1f90; body size 18 bytes.
#line 1 "ENTRY_102d1f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d1f90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d1fb0; body size 25 bytes.
#line 1 "ENTRY_102d1fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d1fb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d1fd0; body size 25 bytes.
#line 1 "ENTRY_102d1fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d1fd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d1ff0; body size 22 bytes.
#line 1 "ENTRY_102d1ff0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d1ff0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102d2010; body size 5 bytes.
#line 1 "ENTRY_102d2010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d2010(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d2020; body size 5 bytes.
#line 1 "ENTRY_102d2020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d2020(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d2070; body size 63 bytes.
#line 1 "ENTRY_102d2070"

int * __thiscall Recovered_Bulk::m_FUN_102d2070(undefined4 *param_2)
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
  return (int *)(param_1);
}


// Reference entry 102d2140; body size 25 bytes.
#line 1 "ENTRY_102d2140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d2140(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102d2160; body size 26 bytes.
#line 1 "ENTRY_102d2160"

int * __thiscall Recovered_Bulk::m_FUN_102d2160(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102d2180; body size 78 bytes.
#line 1 "ENTRY_102d2180"

int * __thiscall Recovered_Bulk::m_FUN_102d2180(int *param_2)
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


// Reference entry 102d21f0; body size 78 bytes.
#line 1 "ENTRY_102d21f0"

int * __thiscall Recovered_Bulk::m_FUN_102d21f0(int *param_2)
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


// Reference entry 102d2260; body size 78 bytes.
#line 1 "ENTRY_102d2260"

int * __thiscall Recovered_Bulk::m_FUN_102d2260(int *param_2)
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


// Reference entry 102d22d0; body size 78 bytes.
#line 1 "ENTRY_102d22d0"

int * __thiscall Recovered_Bulk::m_FUN_102d22d0(int *param_2)
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


// Reference entry 102d2340; body size 12 bytes.
#line 1 "ENTRY_102d2340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_102d2340(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 102d2350; body size 3 bytes.
#line 1 "ENTRY_102d2350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2350(void)

{
  return;
}


// Reference entry 102d2410; body size 13 bytes.
#line 1 "ENTRY_102d2410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2410(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102d2420; body size 13 bytes.
#line 1 "ENTRY_102d2420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2420(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102d2430; body size 13 bytes.
#line 1 "ENTRY_102d2430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2430(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102d2440; body size 3 bytes.
#line 1 "ENTRY_102d2440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2440(void)

{
  return;
}


// Reference entry 102d2450; body size 3 bytes.
#line 1 "ENTRY_102d2450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2450(void)

{
  return;
}


// Reference entry 102d2460; body size 18 bytes.
#line 1 "ENTRY_102d2460"

void __thiscall Recovered_Bulk::m_FUN_102d2460(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 102d2550; body size 51 bytes.
#line 1 "ENTRY_102d2550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2550(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_102d3db0();
    thunk_FUN_1148a50e(puVar2,0x14);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 102d2590; body size 15 bytes.
#line 1 "ENTRY_102d2590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2590(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 102d25b0; body size 26 bytes.
#line 1 "ENTRY_102d25b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d25b0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_102d3db0();
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 102d25d0; body size 7 bytes.
#line 1 "ENTRY_102d25d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d25d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d25e0; body size 5 bytes.
#line 1 "ENTRY_102d25e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d25e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d28b0; body size 5 bytes.
#line 1 "ENTRY_102d28b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d28b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d28c0; body size 5 bytes.
#line 1 "ENTRY_102d28c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d28c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d28e0; body size 5 bytes.
#line 1 "ENTRY_102d28e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d28e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d28f0; body size 5 bytes.
#line 1 "ENTRY_102d28f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d28f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d2900; body size 5 bytes.
#line 1 "ENTRY_102d2900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d2900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d2910; body size 5 bytes.
#line 1 "ENTRY_102d2910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d2910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d2920; body size 55 bytes.
#line 1 "ENTRY_102d2920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2920(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_4);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_2[1] = (int)(0);
  param_2[2] = (int)(0);
  return;
}


// Reference entry 102d2970; body size 9 bytes.
#line 1 "ENTRY_102d2970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2970(undefined4 param_1,int *param_2)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[2]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_2[1] = (int)(0);
    param_2[2] = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_2);

  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((char *)(iVar2 + -0x10)), 0);
    if (iVar4 == 0) {
      *(undefined4*)(iVar2 + -8) = (undefined4)(0);
      *(undefined4*)(iVar2 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((char *)(iVar2 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102d2980; body size 15 bytes.
#line 1 "ENTRY_102d2980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d2980(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102d2a20; body size 5 bytes.
#line 1 "ENTRY_102d2a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d2a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d2a30; body size 5 bytes.
#line 1 "ENTRY_102d2a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d2a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d2a50; body size 5 bytes.
#line 1 "ENTRY_102d2a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d2a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d2a60; body size 5 bytes.
#line 1 "ENTRY_102d2a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d2a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d2a70; body size 5 bytes.
#line 1 "ENTRY_102d2a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d2a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d2a80; body size 5 bytes.
#line 1 "ENTRY_102d2a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d2a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d2aa0; body size 6 bytes.
#line 1 "ENTRY_102d2aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102d2aa0(void)

{
  return (char *)("SCISetting");
}


// Reference entry 102d2b70; body size 30 bytes.
#line 1 "ENTRY_102d2b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 102d2f20; body size 27 bytes.
#line 1 "ENTRY_102d2f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d2f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102d2f90; body size 16 bytes.
#line 1 "ENTRY_102d2f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d2f90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d2fb0; body size 16 bytes.
#line 1 "ENTRY_102d2fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d2fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d2fd0; body size 32 bytes.
#line 1 "ENTRY_102d2fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d2fd0(undefined4 *param_2)
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


// Reference entry 102d3000; body size 16 bytes.
#line 1 "ENTRY_102d3000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d3000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d3020; body size 16 bytes.
#line 1 "ENTRY_102d3020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d3020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d3040; body size 18 bytes.
#line 1 "ENTRY_102d3040"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d3040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d3060; body size 3 bytes.
#line 1 "ENTRY_102d3060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d3060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d3070; body size 10 bytes.
#line 1 "ENTRY_102d3070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102d3070(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102d3150; body size 11 bytes.
#line 1 "ENTRY_102d3150"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d3150(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102d3160; body size 11 bytes.
#line 1 "ENTRY_102d3160"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d3160(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102d3170; body size 11 bytes.
#line 1 "ENTRY_102d3170"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d3170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102d3180; body size 11 bytes.
#line 1 "ENTRY_102d3180"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d3180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102d3190; body size 16 bytes.
#line 1 "ENTRY_102d3190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d3190(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d31b0; body size 13 bytes.
#line 1 "ENTRY_102d31b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d31b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102d31c0; body size 14 bytes.
#line 1 "ENTRY_102d31c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d31c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102d31e0; body size 23 bytes.
#line 1 "ENTRY_102d31e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d31e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d3200; body size 3 bytes.
#line 1 "ENTRY_102d3200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d3200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d3390; body size 42 bytes.
#line 1 "ENTRY_102d3390"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d3390(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 102d33d0; body size 9 bytes.
#line 1 "ENTRY_102d33d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d33d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISetting);
  return (undefined4 *)(param_1);
}


// Reference entry 102d3890; body size 11 bytes.
#line 1 "ENTRY_102d3890"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d3890(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102d38a0; body size 5 bytes.
#line 1 "ENTRY_102d38a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d38a0(void)

{
  FUN_102d3c00();
  return;
}


// Reference entry 102d3d10; body size 3 bytes.
#line 1 "ENTRY_102d3d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d3d10(void)

{
  return;
}


// Reference entry 102d3e80; body size 5 bytes.
#line 1 "ENTRY_102d3e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d3e80(void)

{
  FUN_102d3c00();
  return;
}


// Reference entry 102d3e90; body size 19 bytes.
#line 1 "ENTRY_102d3e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d3e90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102d3eb0; body size 7 bytes.
#line 1 "ENTRY_102d3eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d3eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102d40d0; body size 65 bytes.
#line 1 "ENTRY_102d40d0"

int * __thiscall Recovered_Bulk::m_FUN_102d40d0(int *param_2)
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


// Reference entry 102d41a0; body size 14 bytes.
#line 1 "ENTRY_102d41a0"

bool __thiscall Recovered_Bulk::m_FUN_102d41a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102d41c0; body size 14 bytes.
#line 1 "ENTRY_102d41c0"

bool __thiscall Recovered_Bulk::m_FUN_102d41c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102d41e0; body size 14 bytes.
#line 1 "ENTRY_102d41e0"

bool __thiscall Recovered_Bulk::m_FUN_102d41e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102d4200; body size 14 bytes.
#line 1 "ENTRY_102d4200"

bool __thiscall Recovered_Bulk::m_FUN_102d4200(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102d4250; body size 3 bytes.
#line 1 "ENTRY_102d4250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4250(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d4260; body size 7 bytes.
#line 1 "ENTRY_102d4260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d4260(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102d4270; body size 7 bytes.
#line 1 "ENTRY_102d4270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d4270(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102d4280; body size 3 bytes.
#line 1 "ENTRY_102d4280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4280(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d4290; body size 7 bytes.
#line 1 "ENTRY_102d4290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d4290(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102d42a0; body size 7 bytes.
#line 1 "ENTRY_102d42a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d42a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102d42b0; body size 8 bytes.
#line 1 "ENTRY_102d42b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d42b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 102d42c0; body size 3 bytes.
#line 1 "ENTRY_102d42c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d42c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d42d0; body size 3 bytes.
#line 1 "ENTRY_102d42d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d42d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d42e0; body size 6 bytes.
#line 1 "ENTRY_102d42e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102d42e0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 102d42f0; body size 6 bytes.
#line 1 "ENTRY_102d42f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102d42f0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 102d4300; body size 6 bytes.
#line 1 "ENTRY_102d4300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102d4300(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 102d4310; body size 6 bytes.
#line 1 "ENTRY_102d4310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102d4310(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 102d4320; body size 6 bytes.
#line 1 "ENTRY_102d4320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102d4320(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 102d4330; body size 9 bytes.
#line 1 "ENTRY_102d4330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d4330(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 102d4340; body size 9 bytes.
#line 1 "ENTRY_102d4340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d4340(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 102d4350; body size 9 bytes.
#line 1 "ENTRY_102d4350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d4350(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 102d4360; body size 9 bytes.
#line 1 "ENTRY_102d4360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d4360(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 102d4370; body size 10 bytes.
#line 1 "ENTRY_102d4370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_102d4370(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 102d4430; body size 29 bytes.
#line 1 "ENTRY_102d4430"

void __thiscall Recovered_Bulk::m_FUN_102d4430(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 102d46c0; body size 22 bytes.
#line 1 "ENTRY_102d46c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d46c0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 102d4820; body size 20 bytes.
#line 1 "ENTRY_102d4820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d4820(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 102d4840; body size 66 bytes.
#line 1 "ENTRY_102d4840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d4840(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 102d4a30; body size 8 bytes.
#line 1 "ENTRY_102d4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d4a30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102d4d10; body size 3 bytes.
#line 1 "ENTRY_102d4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d4d20; body size 3 bytes.
#line 1 "ENTRY_102d4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d4d30; body size 3 bytes.
#line 1 "ENTRY_102d4d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d4d40; body size 3 bytes.
#line 1 "ENTRY_102d4d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d4d50; body size 3 bytes.
#line 1 "ENTRY_102d4d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d4d60; body size 3 bytes.
#line 1 "ENTRY_102d4d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d4d70; body size 4 bytes.
#line 1 "ENTRY_102d4d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4d70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 102d4d80; body size 92 bytes.
#line 1 "ENTRY_102d4d80"

int * __thiscall Recovered_Bulk::m_FUN_102d4d80(uint param_2,int param_3,int *param_4)
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


// Reference entry 102d4e00; body size 7 bytes.
#line 1 "ENTRY_102d4e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d4e00(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 102d4e10; body size 3 bytes.
#line 1 "ENTRY_102d4e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d4e20; body size 3 bytes.
#line 1 "ENTRY_102d4e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d4ec0; body size 3 bytes.
#line 1 "ENTRY_102d4ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d4ec0(void)

{
  return;
}


// Reference entry 102d4f80; body size 11 bytes.
#line 1 "ENTRY_102d4f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d4f80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102d4f90; body size 6 bytes.
#line 1 "ENTRY_102d4f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d4f90(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 102d4fa0; body size 26 bytes.
#line 1 "ENTRY_102d4fa0"

void __thiscall Recovered_Bulk::m_FUN_102d4fa0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102d4fc0; body size 10 bytes.
#line 1 "ENTRY_102d4fc0"

void __thiscall Recovered_Bulk::m_FUN_102d4fc0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 102d50e0; body size 14 bytes.
#line 1 "ENTRY_102d50e0"

void __thiscall Recovered_Bulk::m_FUN_102d50e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 102d5100; body size 13 bytes.
#line 1 "ENTRY_102d5100"

void __thiscall Recovered_Bulk::m_FUN_102d5100(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 102d5110; body size 12 bytes.
#line 1 "ENTRY_102d5110"

void __thiscall Recovered_Bulk::m_FUN_102d5110(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102d5120; body size 11 bytes.
#line 1 "ENTRY_102d5120"

void __thiscall Recovered_Bulk::m_FUN_102d5120(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102d5130; body size 43 bytes.
#line 1 "ENTRY_102d5130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d5130(int param_1,int param_2,int param_3)

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


// Reference entry 102d52c0; body size 90 bytes.
#line 1 "ENTRY_102d52c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102d52c0(uint param_1)

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


// Reference entry 102d5340; body size 87 bytes.
#line 1 "ENTRY_102d5340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102d5340(uint param_1)

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


// Reference entry 102d53b0; body size 14 bytes.
#line 1 "ENTRY_102d53b0"

void __thiscall Recovered_Bulk::m_FUN_102d53b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 102d53d0; body size 13 bytes.
#line 1 "ENTRY_102d53d0"

void __thiscall Recovered_Bulk::m_FUN_102d53d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 102d53e0; body size 35 bytes.
#line 1 "ENTRY_102d53e0"

uint __thiscall Recovered_Bulk::m_FUN_102d53e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  uVar1 = (uint)(thunk_FUN_101c82e0(puVar2), 0);
  return (uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 102d5410; body size 4 bytes.
#line 1 "ENTRY_102d5410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d5410(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 102d5510; body size 57 bytes.
#line 1 "ENTRY_102d5510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d5510(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102d5560; body size 60 bytes.
#line 1 "ENTRY_102d5560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102d5560(int param_1,int param_2)

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


// Reference entry 102d55b0; body size 61 bytes.
#line 1 "ENTRY_102d55b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102d55b0(int param_1,int param_2)

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


// Reference entry 102d5600; body size 9 bytes.
#line 1 "ENTRY_102d5600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d5600(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102d5610; body size 32 bytes.
#line 1 "ENTRY_102d5610"

void __thiscall Recovered_Bulk::m_FUN_102d5610(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 102d5670; body size 12 bytes.
#line 1 "ENTRY_102d5670"

void __thiscall Recovered_Bulk::m_FUN_102d5670(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102d5680; body size 11 bytes.
#line 1 "ENTRY_102d5680"

void __thiscall Recovered_Bulk::m_FUN_102d5680(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102d6560; body size 6 bytes.
#line 1 "ENTRY_102d6560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102d6560(void)

{
  return (char *)("SCISetting");
}


// Reference entry 102d65a0; body size 7 bytes.
#line 1 "ENTRY_102d65a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d65a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102d65d0; body size 3 bytes.
#line 1 "ENTRY_102d65d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_102d65d0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 102d65e0; body size 6 bytes.
#line 1 "ENTRY_102d65e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d65e0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 102d65f0; body size 6 bytes.
#line 1 "ENTRY_102d65f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d65f0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 102d6600; body size 6 bytes.
#line 1 "ENTRY_102d6600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d6600(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 102d6610; body size 6 bytes.
#line 1 "ENTRY_102d6610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d6610(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 102d7200; body size 5 bytes.
#line 1 "ENTRY_102d7200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d7200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d7210; body size 3 bytes.
#line 1 "ENTRY_102d7210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d7210(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d7220; body size 3 bytes.
#line 1 "ENTRY_102d7220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d7220(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d7330; body size 13 bytes.
#line 1 "ENTRY_102d7330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d7330(int param_1)

{
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x34) + 0x30))();
    return;
  }
  return;
}


// Reference entry 102d76a0; body size 28 bytes.
#line 1 "ENTRY_102d76a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d76a0(undefined4 *param_1)

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


// Reference entry 102d76d0; body size 28 bytes.
#line 1 "ENTRY_102d76d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d76d0(undefined4 *param_1)

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


// Reference entry 102d7700; body size 28 bytes.
#line 1 "ENTRY_102d7700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d7700(undefined4 *param_1)

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


// Reference entry 102d85c0; body size 9 bytes.
#line 1 "ENTRY_102d85c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102d85c0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 102d8940; body size 25 bytes.
#line 1 "ENTRY_102d8940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d8940(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d8960; body size 25 bytes.
#line 1 "ENTRY_102d8960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d8960(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d8980; body size 25 bytes.
#line 1 "ENTRY_102d8980"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d8980(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102d89a0; body size 26 bytes.
#line 1 "ENTRY_102d89a0"

int * __thiscall Recovered_Bulk::m_FUN_102d89a0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102d89c0; body size 3 bytes.
#line 1 "ENTRY_102d89c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d89c0(void)

{
  return;
}


// Reference entry 102d89d0; body size 203 bytes.
#line 1 "ENTRY_102d89d0"

void __thiscall Recovered_Bulk::m_FUN_102d89d0(void *param_2,int param_3)
{
  int *param_1 = (int *)this;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_102daa60();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x3fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if ((void *)(_Dst) != (void *)(0x0)) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (char *)(*(void **)((int)_Dst + -4), 0);
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    _Dst = (void *)((void *)thunk_FUN_102daa80(uVar3), 0);
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)(_Size + (int)_Dst);
  return;
}


// Reference entry 102d8ad0; body size 33 bytes.
#line 1 "ENTRY_102d8ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102d8ad0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 102d8b00; body size 3 bytes.
#line 1 "ENTRY_102d8b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d8b00(void)

{
  return;
}


// Reference entry 102d8b10; body size 18 bytes.
#line 1 "ENTRY_102d8b10"

void __thiscall Recovered_Bulk::m_FUN_102d8b10(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 102d8c80; body size 7 bytes.
#line 1 "ENTRY_102d8c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d8c80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d8c90; body size 7 bytes.
#line 1 "ENTRY_102d8c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d8c90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d8ca0; body size 3 bytes.
#line 1 "ENTRY_102d8ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d8ca0(void)

{
  return;
}


// Reference entry 102d8cb0; body size 5 bytes.
#line 1 "ENTRY_102d8cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d8cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d8cc0; body size 38 bytes.
#line 1 "ENTRY_102d8cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_102d8cc0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 102d8cf0; body size 5 bytes.
#line 1 "ENTRY_102d8cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d8cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d8d00; body size 36 bytes.
#line 1 "ENTRY_102d8d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102d8d00(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 102d8d30; body size 36 bytes.
#line 1 "ENTRY_102d8d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102d8d30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 102d8d60; body size 5 bytes.
#line 1 "ENTRY_102d8d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d8d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d8d70; body size 203 bytes.
#line 1 "ENTRY_102d8d70"

void __thiscall Recovered_Bulk::m_FUN_102d8d70(void *param_2,int param_3)
{
  int *param_1 = (int *)this;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_102daa60();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x3fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if ((void *)(_Dst) != (void *)(0x0)) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (char *)(*(void **)((int)_Dst + -4), 0);
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    _Dst = (void *)((void *)thunk_FUN_102daa80(uVar3), 0);
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)(_Size + (int)_Dst);
  return;
}


// Reference entry 102d8e70; body size 13 bytes.
#line 1 "ENTRY_102d8e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d8e70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 102d8e80; body size 12 bytes.
#line 1 "ENTRY_102d8e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102d8e80(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 2);
}


// Reference entry 102d8e90; body size 36 bytes.
#line 1 "ENTRY_102d8e90"

void __thiscall Recovered_Bulk::m_FUN_102d8e90(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_102d8b30(puVar1,param_2);
  return;
}


// Reference entry 102d8ec0; body size 5 bytes.
#line 1 "ENTRY_102d8ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d8ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d8ed0; body size 5 bytes.
#line 1 "ENTRY_102d8ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102d8ed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d8ee0; body size 6 bytes.
#line 1 "ENTRY_102d8ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102d8ee0(void)

{
  return (char *)("SCIStringTemplate");
}


// Reference entry 102d8fa0; body size 23 bytes.
#line 1 "ENTRY_102d8fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d8fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d8fc0; body size 3 bytes.
#line 1 "ENTRY_102d8fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d8fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d8fd0; body size 100 bytes.
#line 1 "ENTRY_102d8fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102d8fd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  _Src = (void *)((void *)*param_2);
  if ((void *)(_Src) != (void *)param_2[1]) {
    _Size = (size_t)((int)param_2[1] - (int)_Src);
    iVar1 = (int)((int)_Size >> 2);
    _Dst = (void *)((void *)thunk_FUN_102daa80(iVar1), 0);
    *param_1 = (undefined4)(_Dst);
    param_1[1] = (undefined4)(_Dst);
    param_1[2] = (undefined4)((char *)((int)_Dst + iVar1 * 4));
    memmove(_Dst,_Src,_Size);
    param_1[1] = (undefined4)((char *)((int)_Dst + iVar1 * 4));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102d9050; body size 23 bytes.
#line 1 "ENTRY_102d9050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d9050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102d9070; body size 11 bytes.
#line 1 "ENTRY_102d9070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d9070(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStringTemplate);
  return (undefined4 *)(param_1);
}


// Reference entry 102d9080; body size 9 bytes.
#line 1 "ENTRY_102d9080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d9080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStringTemplate);
  return (undefined4 *)(param_1);
}


// Reference entry 102d9330; body size 9 bytes.
#line 1 "ENTRY_102d9330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d9330(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  return (undefined4 *)(param_1);
}


// Reference entry 102d9680; body size 16 bytes.
#line 1 "ENTRY_102d9680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d9680(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    return;
  }
  iVar2 = (int)(*piVar1);
  if (iVar2 != 0) {
    uVar4 = (uint)(piVar1[2] - iVar2 & 0xfffffffc);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4);
    *piVar1 = (int)(0);
    piVar1[1] = (int)(0);
    piVar1[2] = (int)(0);
  }
  return;
}


// Reference entry 102d9700; body size 7 bytes.
#line 1 "ENTRY_102d9700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d9700(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102d9c30; body size 218 bytes.
#line 1 "ENTRY_102d9c30"

int * __thiscall Recovered_Bulk::m_FUN_102d9c30(int *param_2)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    _Src = (void *)((void *)*param_2);
    _Size = (size_t)(param_2[1] - (int)_Src);
    _Dst = (void *)((void *)*param_1);
    uVar2 = (uint)((int)_Size >> 2);
    uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
    if (uVar1 < uVar2) {
      if (0x3fffffff < uVar2) {
                    
        thunk_FUN_102daa60();
      }
      if (0x3fffffff - (uVar1 >> 1) < uVar1) {
        uVar3 = (uint)(0x3fffffff);
      }
      else {
        uVar3 = (uint)((uVar1 >> 1) + uVar1);
        if (uVar3 < uVar2) {
          uVar3 = (uint)(uVar2);
        }
      }
      if ((void *)(_Dst) != (void *)(0x0)) {
        uVar1 = (uint)(uVar1 * 4);
        pvVar4 = (void *)(_Dst);
        if (0xfff < uVar1) {
          pvVar4 = (char *)(*(void **)((int)_Dst + -4), 0);
          uVar1 = (uint)(uVar1 + 0x23);
          if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(pvVar4,uVar1);
        *param_1 = (int)(0);
        param_1[1] = (int)(0);
        param_1[2] = (int)(0);
      }
      _Dst = (void *)((void *)thunk_FUN_102daa80(uVar3), 0);
      *param_1 = (int)((int)_Dst);
      param_1[1] = (int)((int)_Dst);
      param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
    }
    memmove(_Dst,_Src,_Size);
    param_1[1] = (int)(_Size + (int)_Dst);
  }
  return (int *)(param_1);
}


// Reference entry 102d9d50; body size 5 bytes.
#line 1 "ENTRY_102d9d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d9d50(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102d9ea0; body size 12 bytes.
#line 1 "ENTRY_102d9ea0"

int __thiscall Recovered_Bulk::m_FUN_102d9ea0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 102d9eb0; body size 12 bytes.
#line 1 "ENTRY_102d9eb0"

int __thiscall Recovered_Bulk::m_FUN_102d9eb0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 102d9ec0; body size 3 bytes.
#line 1 "ENTRY_102d9ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d9ec0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102d9ed0; body size 3 bytes.
#line 1 "ENTRY_102d9ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102d9ed0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102da640; body size 30 bytes.
#line 1 "ENTRY_102da640"

void __thiscall Recovered_Bulk::m_FUN_102da640(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_102daa80(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 4);
  return;
}


// Reference entry 102da670; body size 49 bytes.
#line 1 "ENTRY_102da670"

uint __thiscall Recovered_Bulk::m_FUN_102da670(uint param_2)
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


// Reference entry 102da720; body size 159 bytes.
#line 1 "ENTRY_102da720"

void __thiscall Recovered_Bulk::m_FUN_102da720(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_102daa60();
  }
  iVar1 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar1 >> 2);
  if (0x3fffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = (uint)(0x3fffffff);
  }
  else {
    uVar4 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar4 < param_2) {
      uVar4 = (uint)(param_2);
    }
  }
  if (iVar1 != 0) {
    uVar3 = (uint)(uVar3 * 4);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  iVar1 = (int)(thunk_FUN_102daa80(uVar4), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + uVar4 * 4);
  return;
}


// Reference entry 102da7f0; body size 208 bytes.
#line 1 "ENTRY_102da7f0"

void __thiscall Recovered_Bulk::m_FUN_102da7f0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Src = (void *)((void *)*param_2);
  _Size = (size_t)(param_2[1] - (int)_Src);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_102daa60();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x3fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if ((void *)(_Dst) != (void *)(0x0)) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (char *)(*(void **)((int)_Dst + -4), 0);
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    _Dst = (void *)((void *)thunk_FUN_102daa80(uVar3), 0);
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
  }
  memmove(_Dst,_Src,_Size);
  param_1[1] = (int)((int)_Dst + _Size);
  return;
}


// Reference entry 102da900; body size 3 bytes.
#line 1 "ENTRY_102da900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102da900(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 102da910; body size 3 bytes.
#line 1 "ENTRY_102da910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102da910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102da920; body size 3 bytes.
#line 1 "ENTRY_102da920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102da920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102da930; body size 3 bytes.
#line 1 "ENTRY_102da930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102da930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102da940; body size 3 bytes.
#line 1 "ENTRY_102da940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102da940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102da950; body size 3 bytes.
#line 1 "ENTRY_102da950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102da950(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 102da9d0; body size 38 bytes.
#line 1 "ENTRY_102da9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_102da9d0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 102daa00; body size 27 bytes.
#line 1 "ENTRY_102daa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102daa00(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 102daa30; body size 27 bytes.
#line 1 "ENTRY_102daa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102daa30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 102dac60; body size 9 bytes.
#line 1 "ENTRY_102dac60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102dac60(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 102dac70; body size 6 bytes.
#line 1 "ENTRY_102dac70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dac70(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 102dae70; body size 61 bytes.
#line 1 "ENTRY_102dae70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102dae70(int param_1,int param_2)

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


// Reference entry 102daec0; body size 9 bytes.
#line 1 "ENTRY_102daec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102daec0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102db600; body size 6 bytes.
#line 1 "ENTRY_102db600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102db600(void)

{
  return (char *)("SCIStringTemplate");
}


// Reference entry 102db820; body size 6 bytes.
#line 1 "ENTRY_102db820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102db820(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 102db830; body size 6 bytes.
#line 1 "ENTRY_102db830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102db830(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 102db840; body size 3 bytes.
#line 1 "ENTRY_102db840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102db840(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102db850; body size 36 bytes.
#line 1 "ENTRY_102db850"

void __thiscall Recovered_Bulk::m_FUN_102db850(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_102d8b30(puVar1,param_2);
  return;
}


// Reference entry 102db9a0; body size 28 bytes.
#line 1 "ENTRY_102db9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102db9a0(undefined4 *param_1)

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


// Reference entry 102dbfe0; body size 5 bytes.
#line 1 "ENTRY_102dbfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102dbfe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102dbff0; body size 9 bytes.
#line 1 "ENTRY_102dbff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102dbff0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 102dc0e0; body size 26 bytes.
#line 1 "ENTRY_102dc0e0"

int * __thiscall Recovered_Bulk::m_FUN_102dc0e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102dc100; body size 25 bytes.
#line 1 "ENTRY_102dc100"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102dc100(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc260; body size 26 bytes.
#line 1 "ENTRY_102dc260"

int * __thiscall Recovered_Bulk::m_FUN_102dc260(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102dc4a0; body size 3 bytes.
#line 1 "ENTRY_102dc4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102dc4a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102dc4d0; body size 28 bytes.
#line 1 "ENTRY_102dc4d0"

void __thiscall Recovered_Bulk::m_FUN_102dc4d0(undefined4 *param_2)
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


// Reference entry 102dc500; body size 30 bytes.
#line 1 "ENTRY_102dc500"

void __thiscall Recovered_Bulk::m_FUN_102dc500(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 102dc5c0; body size 6 bytes.
#line 1 "ENTRY_102dc5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102dc5c0(void)

{
  return (char *)("SCIUrlSessionProvider");
}


// Reference entry 102dc5f0; body size 5 bytes.
#line 1 "ENTRY_102dc5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102dc5f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102dc610; body size 5 bytes.
#line 1 "ENTRY_102dc610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102dc610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102dc620; body size 19 bytes.
#line 1 "ENTRY_102dc620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102dc620(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 102dc650; body size 27 bytes.
#line 1 "ENTRY_102dc650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102dc650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc680; body size 42 bytes.
#line 1 "ENTRY_102dc680"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102dc680(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc6c0; body size 42 bytes.
#line 1 "ENTRY_102dc6c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102dc6c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc700; body size 16 bytes.
#line 1 "ENTRY_102dc700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102dc700(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc7c0; body size 16 bytes.
#line 1 "ENTRY_102dc7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102dc7c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc7e0; body size 45 bytes.
#line 1 "ENTRY_102dc7e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102dc7e0(undefined4 *param_2)
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


// Reference entry 102dc820; body size 43 bytes.
#line 1 "ENTRY_102dc820"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102dc820(undefined4 *param_2)
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


// Reference entry 102dc860; body size 16 bytes.
#line 1 "ENTRY_102dc860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102dc860(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc880; body size 9 bytes.
#line 1 "ENTRY_102dc880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102dc880(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncIOListener);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc890; body size 9 bytes.
#line 1 "ENTRY_102dc890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102dc890(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RListener);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc8a0; body size 9 bytes.
#line 1 "ENTRY_102dc8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102dc8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNetstartListener);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc8b0; body size 9 bytes.
#line 1 "ENTRY_102dc8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102dc8b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISystem);
  return (undefined4 *)(param_1);
}


// Reference entry 102dcb90; body size 19 bytes.
#line 1 "ENTRY_102dcb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dcb90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102dcbb0; body size 26 bytes.
#line 1 "ENTRY_102dcbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dcbb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102dcf10; body size 7 bytes.
#line 1 "ENTRY_102dcf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dcf10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RListener);
  return;
}


// Reference entry 102dcf30; body size 7 bytes.
#line 1 "ENTRY_102dcf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dcf30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102dd150; body size 80 bytes.
#line 1 "ENTRY_102dd150"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102dd150(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  piVar4 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  if ((int *)(piVar4) != (int *)(0x0)) {
    LOCK();
    iVar5 = (int)(piVar4[1] + -1);
    piVar4[1] = (int)(iVar5);
    UNLOCK();
    if (iVar5 == 0) {
      (**(code **)*piVar4)();
      LOCK();
      piVar1 = (int *)(piVar4 + 2);
      iVar5 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102dd1c0; body size 3 bytes.
#line 1 "ENTRY_102dd1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102dd1c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102dd1d0; body size 3 bytes.
#line 1 "ENTRY_102dd1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102dd1d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102dd1e0; body size 7 bytes.
#line 1 "ENTRY_102dd1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102dd1e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102dd1f0; body size 7 bytes.
#line 1 "ENTRY_102dd1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102dd1f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102dd200; body size 3 bytes.
#line 1 "ENTRY_102dd200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102dd200(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102dd210; body size 3 bytes.
#line 1 "ENTRY_102dd210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102dd210(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102dd5e0; body size 47 bytes.
#line 1 "ENTRY_102dd5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dd5e0(int param_1)

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


// Reference entry 102dd670; body size 12 bytes.
#line 1 "ENTRY_102dd670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dd670(int param_1)

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


// Reference entry 102dd6a0; body size 33 bytes.
#line 1 "ENTRY_102dd6a0"

void __thiscall Recovered_Bulk::m_FUN_102dd6a0(undefined4 *param_2)
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


// Reference entry 102dd6e0; body size 19 bytes.
#line 1 "ENTRY_102dd6e0"

void __thiscall Recovered_Bulk::m_FUN_102dd6e0(int param_2)
{
  int *param_1 = (int *)this;
  if ((*param_1 != (int)((param_2))) && (*param_1 == (int)((0)))) {
    *param_1 = (int)(param_2);
  }
  return;
}


// Reference entry 102dd700; body size 19 bytes.
#line 1 "ENTRY_102dd700"

void __thiscall Recovered_Bulk::m_FUN_102dd700(int param_2)
{
  int *param_1 = (int *)this;
  if ((*param_1 != (int)((param_2))) && (*param_1 == (int)((0)))) {
    *param_1 = (int)(param_2);
  }
  return;
}


// Reference entry 102dd720; body size 26 bytes.
#line 1 "ENTRY_102dd720"

uint __thiscall Recovered_Bulk::m_FUN_102dd720(uint param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((uVar1 != param_2) && (uVar1 == 0)) {
    *param_1 = (uint)(param_2);
    return (uint)(1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 102dda40; body size 9 bytes.
#line 1 "ENTRY_102dda40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102dda40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102dda50; body size 9 bytes.
#line 1 "ENTRY_102dda50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102dda50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102dddc0; body size 3 bytes.
#line 1 "ENTRY_102dddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102dddc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102de420; body size 4 bytes.
#line 1 "ENTRY_102de420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102de420(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x20));
}


// Reference entry 102de530; body size 6 bytes.
#line 1 "ENTRY_102de530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102de530(void)

{
  return (undefined4)(DAT_122e8a18);
}


// Reference entry 102de5f0; body size 8 bytes.
#line 1 "ENTRY_102de5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102de5f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 102de600; body size 6 bytes.
#line 1 "ENTRY_102de600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102de600(void)

{
  return (char *)("SCIUrlSessionProvider");
}


// Reference entry 102de610; body size 19 bytes.
#line 1 "ENTRY_102de610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102de610(int param_1)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = (bool)(*(int *)(param_1 + 0x44) != 0);
  cVar1 = (char)(*(char *)(param_1 + 0x48));
  *(bool*)(param_1 + 0x48) = (bool)(bVar2);
  return (bool)(bVar2 != (bool)cVar1);
}


// Reference entry 102de630; body size 7 bytes.
#line 1 "ENTRY_102de630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102de630(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 102de7a0; body size 3 bytes.
#line 1 "ENTRY_102de7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102de7a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102de7b0; body size 3 bytes.
#line 1 "ENTRY_102de7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102de7b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102dec00; body size 28 bytes.
#line 1 "ENTRY_102dec00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dec00(undefined4 *param_1)

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


// Reference entry 102dec30; body size 28 bytes.
#line 1 "ENTRY_102dec30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dec30(undefined4 *param_1)

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


// Reference entry 102dec60; body size 28 bytes.
#line 1 "ENTRY_102dec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dec60(undefined4 *param_1)

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


// Reference entry 102dec90; body size 20 bytes.
#line 1 "ENTRY_102dec90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dec90(int *param_1)

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


// Reference entry 102ded30; body size 17 bytes.
#line 1 "ENTRY_102ded30"

void __thiscall Recovered_Bulk::m_FUN_102ded30(int param_2)
{
  int *param_1 = (int *)this;
  if ((int)(param_2) == *param_1) {
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 102ded50; body size 17 bytes.
#line 1 "ENTRY_102ded50"

void __thiscall Recovered_Bulk::m_FUN_102ded50(int param_2)
{
  int *param_1 = (int *)this;
  if ((int)(param_2) == *param_1) {
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 102ded70; body size 24 bytes.
#line 1 "ENTRY_102ded70"

undefined4 __thiscall Recovered_Bulk::m_FUN_102ded70(int param_2)
{
  int *param_1 = (int *)this;
  if ((int)(param_2) == *param_1) {
    *param_1 = (int)(0);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 102df190; body size 10 bytes.
#line 1 "ENTRY_102df190"

void __thiscall Recovered_Bulk::m_FUN_102df190(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 102df4a0; body size 33 bytes.
#line 1 "ENTRY_102df4a0"

void __thiscall Recovered_Bulk::m_FUN_102df4a0(undefined4 *param_2)
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


// Reference entry 102df510; body size 6 bytes.
#line 1 "ENTRY_102df510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102df510(void)

{
  return (char *)("SCIWizardComponentBuilder");
}


// Reference entry 102df520; body size 27 bytes.
#line 1 "ENTRY_102df520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102df520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102df550; body size 32 bytes.
#line 1 "ENTRY_102df550"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102df550(undefined4 *param_2)
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


// Reference entry 102df5c0; body size 9 bytes.
#line 1 "ENTRY_102df5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102df5c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIWizardComponentBuilder);
  return (undefined4 *)(param_1);
}


// Reference entry 102df770; body size 7 bytes.
#line 1 "ENTRY_102df770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102df770(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102e4cb0; body size 6 bytes.
#line 1 "ENTRY_102e4cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102e4cb0(void)

{
  return (char *)("SCIWizardComponentBuilder");
}


// Reference entry 102e4cc0; body size 7 bytes.
#line 1 "ENTRY_102e4cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102e4cc0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102e4e80; body size 34 bytes.
#line 1 "ENTRY_102e4e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e4e80(int *param_1,undefined4 param_2,float param_3,int param_4)

{
  (**(code **)(*param_1 + 0x28))(param_2,(int)((float)param_4 * param_3));
  return;
}


// Reference entry 102e4fd0; body size 31 bytes.
#line 1 "ENTRY_102e4fd0"

SCStr * __thiscall Recovered_Bulk::m_FUN_102e4fd0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e5000; body size 18 bytes.
#line 1 "ENTRY_102e5000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e5000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5020; body size 18 bytes.
#line 1 "ENTRY_102e5020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e5020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5040; body size 22 bytes.
#line 1 "ENTRY_102e5040"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102e5040(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5060; body size 22 bytes.
#line 1 "ENTRY_102e5060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102e5060(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5080; body size 22 bytes.
#line 1 "ENTRY_102e5080"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102e5080(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102e50a0; body size 18 bytes.
#line 1 "ENTRY_102e50a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e50a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102e50c0; body size 18 bytes.
#line 1 "ENTRY_102e50c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e50c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5320; body size 25 bytes.
#line 1 "ENTRY_102e5320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e5320(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5340; body size 25 bytes.
#line 1 "ENTRY_102e5340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e5340(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5360; body size 18 bytes.
#line 1 "ENTRY_102e5360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e5360(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5380; body size 25 bytes.
#line 1 "ENTRY_102e5380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e5380(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102e53a0; body size 25 bytes.
#line 1 "ENTRY_102e53a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e53a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102e53c0; body size 38 bytes.
#line 1 "ENTRY_102e53c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_102e53c0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e53f0; body size 31 bytes.
#line 1 "ENTRY_102e53f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_102e53f0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e5420; body size 17 bytes.
#line 1 "ENTRY_102e5420"

undefined1 * __thiscall Recovered_Bulk::m_FUN_102e5420(undefined4 param_2,undefined4 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (undefined1 *)(param_1);
}


// Reference entry 102e5440; body size 22 bytes.
#line 1 "ENTRY_102e5440"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102e5440(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5460; body size 22 bytes.
#line 1 "ENTRY_102e5460"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102e5460(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5480; body size 5 bytes.
#line 1 "ENTRY_102e5480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102e5480(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e5490; body size 5 bytes.
#line 1 "ENTRY_102e5490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102e5490(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e54a0; body size 5 bytes.
#line 1 "ENTRY_102e54a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102e54a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e54b0; body size 21 bytes.
#line 1 "ENTRY_102e54b0"

undefined1 * __thiscall Recovered_Bulk::m_FUN_102e54b0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(0);
  param_1[4] = (undefined1)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(*param_4);
  return (undefined1 *)(param_1);
}


// Reference entry 102e54d0; body size 33 bytes.
#line 1 "ENTRY_102e54d0"

SCStr * __thiscall Recovered_Bulk::m_FUN_102e54d0(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e5500; body size 40 bytes.
#line 1 "ENTRY_102e5500"

SCStr * __thiscall Recovered_Bulk::m_FUN_102e5500(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e5540; body size 33 bytes.
#line 1 "ENTRY_102e5540"

SCStr * __thiscall Recovered_Bulk::m_FUN_102e5540(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e5570; body size 26 bytes.
#line 1 "ENTRY_102e5570"

int * __thiscall Recovered_Bulk::m_FUN_102e5570(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5590; body size 26 bytes.
#line 1 "ENTRY_102e5590"

int * __thiscall Recovered_Bulk::m_FUN_102e5590(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e55b0; body size 91 bytes.
#line 1 "ENTRY_102e55b0"

int * __thiscall Recovered_Bulk::m_FUN_102e55b0(int *param_2)
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


// Reference entry 102e5630; body size 91 bytes.
#line 1 "ENTRY_102e5630"

int * __thiscall Recovered_Bulk::m_FUN_102e5630(int *param_2)
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


// Reference entry 102e56b0; body size 91 bytes.
#line 1 "ENTRY_102e56b0"

int * __thiscall Recovered_Bulk::m_FUN_102e56b0(int *param_2)
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


// Reference entry 102e5730; body size 26 bytes.
#line 1 "ENTRY_102e5730"

int * __thiscall Recovered_Bulk::m_FUN_102e5730(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5750; body size 25 bytes.
#line 1 "ENTRY_102e5750"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102e5750(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5770; body size 26 bytes.
#line 1 "ENTRY_102e5770"

int * __thiscall Recovered_Bulk::m_FUN_102e5770(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5790; body size 26 bytes.
#line 1 "ENTRY_102e5790"

int * __thiscall Recovered_Bulk::m_FUN_102e5790(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e57b0; body size 26 bytes.
#line 1 "ENTRY_102e57b0"

int * __thiscall Recovered_Bulk::m_FUN_102e57b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e57d0; body size 25 bytes.
#line 1 "ENTRY_102e57d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102e57d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e57f0; body size 26 bytes.
#line 1 "ENTRY_102e57f0"

int * __thiscall Recovered_Bulk::m_FUN_102e57f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5810; body size 26 bytes.
#line 1 "ENTRY_102e5810"

int * __thiscall Recovered_Bulk::m_FUN_102e5810(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5830; body size 26 bytes.
#line 1 "ENTRY_102e5830"

int * __thiscall Recovered_Bulk::m_FUN_102e5830(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5850; body size 26 bytes.
#line 1 "ENTRY_102e5850"

int * __thiscall Recovered_Bulk::m_FUN_102e5850(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5870; body size 26 bytes.
#line 1 "ENTRY_102e5870"

int * __thiscall Recovered_Bulk::m_FUN_102e5870(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5890; body size 26 bytes.
#line 1 "ENTRY_102e5890"

int * __thiscall Recovered_Bulk::m_FUN_102e5890(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e58b0; body size 26 bytes.
#line 1 "ENTRY_102e58b0"

int * __thiscall Recovered_Bulk::m_FUN_102e58b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e58d0; body size 26 bytes.
#line 1 "ENTRY_102e58d0"

int * __thiscall Recovered_Bulk::m_FUN_102e58d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5d30; body size 26 bytes.
#line 1 "ENTRY_102e5d30"

int * __thiscall Recovered_Bulk::m_FUN_102e5d30(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5d50; body size 26 bytes.
#line 1 "ENTRY_102e5d50"

int * __thiscall Recovered_Bulk::m_FUN_102e5d50(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5d70; body size 26 bytes.
#line 1 "ENTRY_102e5d70"

int * __thiscall Recovered_Bulk::m_FUN_102e5d70(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5e10; body size 26 bytes.
#line 1 "ENTRY_102e5e10"

int * __thiscall Recovered_Bulk::m_FUN_102e5e10(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5f10; body size 26 bytes.
#line 1 "ENTRY_102e5f10"

int * __thiscall Recovered_Bulk::m_FUN_102e5f10(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5f30; body size 26 bytes.
#line 1 "ENTRY_102e5f30"

int * __thiscall Recovered_Bulk::m_FUN_102e5f30(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5f50; body size 26 bytes.
#line 1 "ENTRY_102e5f50"

int * __thiscall Recovered_Bulk::m_FUN_102e5f50(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5f70; body size 25 bytes.
#line 1 "ENTRY_102e5f70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102e5f70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5f90; body size 26 bytes.
#line 1 "ENTRY_102e5f90"

int * __thiscall Recovered_Bulk::m_FUN_102e5f90(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5fb0; body size 26 bytes.
#line 1 "ENTRY_102e5fb0"

int * __thiscall Recovered_Bulk::m_FUN_102e5fb0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e5fd0; body size 25 bytes.
#line 1 "ENTRY_102e5fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102e5fd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e5ff0; body size 26 bytes.
#line 1 "ENTRY_102e5ff0"

int * __thiscall Recovered_Bulk::m_FUN_102e5ff0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 102e6080; body size 78 bytes.
#line 1 "ENTRY_102e6080"

int * __thiscall Recovered_Bulk::m_FUN_102e6080(int *param_2)
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


// Reference entry 102e60f0; body size 78 bytes.
#line 1 "ENTRY_102e60f0"

int * __thiscall Recovered_Bulk::m_FUN_102e60f0(int *param_2)
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


// Reference entry 102e6690; body size 78 bytes.
#line 1 "ENTRY_102e6690"

int * __thiscall Recovered_Bulk::m_FUN_102e6690(int *param_2)
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


// Reference entry 102e6770; body size 78 bytes.
#line 1 "ENTRY_102e6770"

int * __thiscall Recovered_Bulk::m_FUN_102e6770(int *param_2)
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


// Reference entry 102e67e0; body size 78 bytes.
#line 1 "ENTRY_102e67e0"

int * __thiscall Recovered_Bulk::m_FUN_102e67e0(int *param_2)
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


// Reference entry 102e6850; body size 78 bytes.
#line 1 "ENTRY_102e6850"

int * __thiscall Recovered_Bulk::m_FUN_102e6850(int *param_2)
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


// Reference entry 102e68c0; body size 78 bytes.
#line 1 "ENTRY_102e68c0"

int * __thiscall Recovered_Bulk::m_FUN_102e68c0(int *param_2)
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


// Reference entry 102e6930; body size 3 bytes.
#line 1 "ENTRY_102e6930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6930(void)

{
  return;
}


// Reference entry 102e6940; body size 3 bytes.
#line 1 "ENTRY_102e6940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6940(void)

{
  return;
}


// Reference entry 102e6950; body size 3 bytes.
#line 1 "ENTRY_102e6950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6950(void)

{
  return;
}


// Reference entry 102e6960; body size 25 bytes.
#line 1 "ENTRY_102e6960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6960(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102e6980; body size 25 bytes.
#line 1 "ENTRY_102e6980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6980(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102e69a0; body size 13 bytes.
#line 1 "ENTRY_102e69a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e69a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102e69b0; body size 13 bytes.
#line 1 "ENTRY_102e69b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e69b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102e69c0; body size 13 bytes.
#line 1 "ENTRY_102e69c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e69c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102e69d0; body size 13 bytes.
#line 1 "ENTRY_102e69d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e69d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102e69e0; body size 13 bytes.
#line 1 "ENTRY_102e69e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e69e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102e69f0; body size 33 bytes.
#line 1 "ENTRY_102e69f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102e69f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 102e6a20; body size 3 bytes.
#line 1 "ENTRY_102e6a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6a20(void)

{
  return;
}


// Reference entry 102e6a30; body size 3 bytes.
#line 1 "ENTRY_102e6a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6a30(void)

{
  return;
}


// Reference entry 102e6a40; body size 3 bytes.
#line 1 "ENTRY_102e6a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6a40(void)

{
  return;
}


// Reference entry 102e6a50; body size 3 bytes.
#line 1 "ENTRY_102e6a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6a50(void)

{
  return;
}


// Reference entry 102e6a60; body size 18 bytes.
#line 1 "ENTRY_102e6a60"

void __thiscall Recovered_Bulk::m_FUN_102e6a60(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 102e6e70; body size 15 bytes.
#line 1 "ENTRY_102e6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6e70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 102e6e90; body size 15 bytes.
#line 1 "ENTRY_102e6e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6e90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 102e6eb0; body size 15 bytes.
#line 1 "ENTRY_102e6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6eb0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 102e70b0; body size 7 bytes.
#line 1 "ENTRY_102e70b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e70b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102e70c0; body size 7 bytes.
#line 1 "ENTRY_102e70c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e70c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102e70d0; body size 7 bytes.
#line 1 "ENTRY_102e70d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e70d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102e70e0; body size 7 bytes.
#line 1 "ENTRY_102e70e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e70e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102e70f0; body size 152 bytes.
#line 1 "ENTRY_102e70f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e70f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 3);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 8 + param_1);
    thunk_FUN_102e7730(param_1,iVar1,iVar2 * 0x10 + param_1,param_4);
    thunk_FUN_102e7730(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -8);
    thunk_FUN_102e7730(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    thunk_FUN_102e7730(iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_102e7730(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 102e71b0; body size 16 bytes.
#line 1 "ENTRY_102e71b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102e71b0(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1 >> 2);
}


// Reference entry 102e74b0; body size 5 bytes.
#line 1 "ENTRY_102e74b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e74b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e74c0; body size 37 bytes.
#line 1 "ENTRY_102e74c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e74c0(int param_1,SCStr *param_2)

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


// Reference entry 102e7940; body size 8 bytes.
#line 1 "ENTRY_102e7940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102e7940(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 102e8570; body size 5 bytes.
#line 1 "ENTRY_102e8570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e8570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e8740; body size 92 bytes.
#line 1 "ENTRY_102e8740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e8740(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
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
  thunk_FUN_102e8580(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 102e88d0; body size 8 bytes.
#line 1 "ENTRY_102e88d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102e88d0(int param_1)

{
  return (int)(param_1 + -8);
}


// Reference entry 102e8a50; body size 13 bytes.
#line 1 "ENTRY_102e8a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e8a50(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102e9210; body size 5 bytes.
#line 1 "ENTRY_102e9210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9220; body size 5 bytes.
#line 1 "ENTRY_102e9220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9230; body size 5 bytes.
#line 1 "ENTRY_102e9230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9240; body size 5 bytes.
#line 1 "ENTRY_102e9240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9250; body size 5 bytes.
#line 1 "ENTRY_102e9250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9260; body size 5 bytes.
#line 1 "ENTRY_102e9260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9270; body size 5 bytes.
#line 1 "ENTRY_102e9270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9280; body size 5 bytes.
#line 1 "ENTRY_102e9280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9290; body size 5 bytes.
#line 1 "ENTRY_102e9290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e92a0; body size 5 bytes.
#line 1 "ENTRY_102e92a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e92a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e92b0; body size 5 bytes.
#line 1 "ENTRY_102e92b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e92b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e92c0; body size 5 bytes.
#line 1 "ENTRY_102e92c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e92c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e92d0; body size 5 bytes.
#line 1 "ENTRY_102e92d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e92d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e92e0; body size 5 bytes.
#line 1 "ENTRY_102e92e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e92e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e92f0; body size 5 bytes.
#line 1 "ENTRY_102e92f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e92f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9300; body size 5 bytes.
#line 1 "ENTRY_102e9300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e93d0; body size 40 bytes.
#line 1 "ENTRY_102e93d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102e93d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 102e9410; body size 40 bytes.
#line 1 "ENTRY_102e9410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102e9410(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 102e9450; body size 34 bytes.
#line 1 "ENTRY_102e9450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e9450(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 102e9480; body size 27 bytes.
#line 1 "ENTRY_102e9480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e9480(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 102e94b0; body size 27 bytes.
#line 1 "ENTRY_102e94b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e94b0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 102e94e0; body size 33 bytes.
#line 1 "ENTRY_102e94e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102e94e0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 102e96c0; body size 15 bytes.
#line 1 "ENTRY_102e96c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e96c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102e96e0; body size 15 bytes.
#line 1 "ENTRY_102e96e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e96e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102e9700; body size 15 bytes.
#line 1 "ENTRY_102e9700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9700(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102e97f0; body size 5 bytes.
#line 1 "ENTRY_102e97f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e97f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9800; body size 5 bytes.
#line 1 "ENTRY_102e9800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9810; body size 5 bytes.
#line 1 "ENTRY_102e9810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9820; body size 5 bytes.
#line 1 "ENTRY_102e9820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9830; body size 5 bytes.
#line 1 "ENTRY_102e9830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9840; body size 5 bytes.
#line 1 "ENTRY_102e9840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9850; body size 5 bytes.
#line 1 "ENTRY_102e9850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9860; body size 5 bytes.
#line 1 "ENTRY_102e9860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9870; body size 5 bytes.
#line 1 "ENTRY_102e9870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102e9880; body size 6 bytes.
#line 1 "ENTRY_102e9880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e9880(void)

{
  return (undefined4)(0xb);
}


// Reference entry 102e9890; body size 6 bytes.
#line 1 "ENTRY_102e9890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102e9890(void)

{
  return (char *)("SCIAudioInputResource");
}


// Reference entry 102e98a0; body size 6 bytes.
#line 1 "ENTRY_102e98a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102e98a0(void)

{
  return (char *)("SCIBrowseListPresentationMap");
}


// Reference entry 102e98b0; body size 6 bytes.
#line 1 "ENTRY_102e98b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102e98b0(void)

{
  return (char *)("SCIBrowseManager");
}


// Reference entry 102e98c0; body size 6 bytes.
#line 1 "ENTRY_102e98c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102e98c0(void)

{
  return (char *)("SCICachedHousehold");
}


// Reference entry 102e98d0; body size 6 bytes.
#line 1 "ENTRY_102e98d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102e98d0(void)

{
  return (char *)("SCIDirectControlAppManager");
}


// Reference entry 102e98e0; body size 6 bytes.
#line 1 "ENTRY_102e98e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102e98e0(void)

{
  return (char *)("SCIServiceAppInteropResponseDelegate");
}


// Reference entry 102e98f0; body size 6 bytes.
#line 1 "ENTRY_102e98f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102e98f0(void)

{
  return (char *)("SCIWebsocketDelegate");
}


// Reference entry 102e9a10; body size 31 bytes.
#line 1 "ENTRY_102e9a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e9a10(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_102e8bc0(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}


// Reference entry 102e9b50; body size 30 bytes.
#line 1 "ENTRY_102e9b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e9b50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 102e9df0; body size 27 bytes.
#line 1 "ENTRY_102e9df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e9df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e9e20; body size 27 bytes.
#line 1 "ENTRY_102e9e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e9e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e9e50; body size 27 bytes.
#line 1 "ENTRY_102e9e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e9e50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e9e80; body size 27 bytes.
#line 1 "ENTRY_102e9e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e9e80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e9eb0; body size 16 bytes.
#line 1 "ENTRY_102e9eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e9eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102e9f50; body size 16 bytes.
#line 1 "ENTRY_102e9f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e9f50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102e9fb0; body size 16 bytes.
#line 1 "ENTRY_102e9fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e9fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea010; body size 16 bytes.
#line 1 "ENTRY_102ea010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea010(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea030; body size 16 bytes.
#line 1 "ENTRY_102ea030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea030(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea050; body size 16 bytes.
#line 1 "ENTRY_102ea050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea070; body size 16 bytes.
#line 1 "ENTRY_102ea070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea070(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea090; body size 16 bytes.
#line 1 "ENTRY_102ea090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea090(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea0b0; body size 16 bytes.
#line 1 "ENTRY_102ea0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea0b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea0d0; body size 16 bytes.
#line 1 "ENTRY_102ea0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea0f0; body size 16 bytes.
#line 1 "ENTRY_102ea0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea0f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea110; body size 16 bytes.
#line 1 "ENTRY_102ea110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea110(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea170; body size 16 bytes.
#line 1 "ENTRY_102ea170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea170(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea1d0; body size 16 bytes.
#line 1 "ENTRY_102ea1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea1d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea1f0; body size 16 bytes.
#line 1 "ENTRY_102ea1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea210; body size 16 bytes.
#line 1 "ENTRY_102ea210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea210(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea270; body size 16 bytes.
#line 1 "ENTRY_102ea270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea270(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea290; body size 16 bytes.
#line 1 "ENTRY_102ea290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea290(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea2b0; body size 16 bytes.
#line 1 "ENTRY_102ea2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea2b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea310; body size 16 bytes.
#line 1 "ENTRY_102ea310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea310(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea330; body size 16 bytes.
#line 1 "ENTRY_102ea330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea330(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea390; body size 16 bytes.
#line 1 "ENTRY_102ea390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea390(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea3b0; body size 16 bytes.
#line 1 "ENTRY_102ea3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea3d0; body size 16 bytes.
#line 1 "ENTRY_102ea3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea3d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea3f0; body size 16 bytes.
#line 1 "ENTRY_102ea3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea3f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea410; body size 16 bytes.
#line 1 "ENTRY_102ea410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea410(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea4b0; body size 18 bytes.
#line 1 "ENTRY_102ea4b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ea4b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea4d0; body size 10 bytes.
#line 1 "ENTRY_102ea4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102ea4d0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102ea730; body size 11 bytes.
#line 1 "ENTRY_102ea730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ea730(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea740; body size 11 bytes.
#line 1 "ENTRY_102ea740"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ea740(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea750; body size 16 bytes.
#line 1 "ENTRY_102ea750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea750(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea7f0; body size 11 bytes.
#line 1 "ENTRY_102ea7f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ea7f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea800; body size 11 bytes.
#line 1 "ENTRY_102ea800"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ea800(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea890; body size 11 bytes.
#line 1 "ENTRY_102ea890"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ea890(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea8a0; body size 16 bytes.
#line 1 "ENTRY_102ea8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea8c0; body size 16 bytes.
#line 1 "ENTRY_102ea8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea8c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea8e0; body size 17 bytes.
#line 1 "ENTRY_102ea8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_102ea8e0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  param_1[4] = (undefined1)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 102ea900; body size 23 bytes.
#line 1 "ENTRY_102ea900"

undefined8 * __thiscall Recovered_Bulk::m_FUN_102ea900(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 102ea920; body size 13 bytes.
#line 1 "ENTRY_102ea920"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ea920(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea930; body size 14 bytes.
#line 1 "ENTRY_102ea930"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ea930(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea950; body size 11 bytes.
#line 1 "ENTRY_102ea950"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ea950(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea960; body size 11 bytes.
#line 1 "ENTRY_102ea960"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ea960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea970; body size 23 bytes.
#line 1 "ENTRY_102ea970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ea970(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea990; body size 3 bytes.
#line 1 "ENTRY_102ea990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ea990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102ea9a0; body size 3 bytes.
#line 1 "ENTRY_102ea9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ea9a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102ea9b0; body size 3 bytes.
#line 1 "ENTRY_102ea9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ea9b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102ea9c0; body size 3 bytes.
#line 1 "ENTRY_102ea9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ea9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102ea9d0; body size 12 bytes.
#line 1 "ENTRY_102ea9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102ea9d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102eaa10; body size 52 bytes.
#line 1 "ENTRY_102eaa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eaa10(undefined4 *param_1)

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


// Reference entry 102eaa60; body size 52 bytes.
#line 1 "ENTRY_102eaa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eaa60(undefined4 *param_1)

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


// Reference entry 102ead20; body size 9 bytes.
#line 1 "ENTRY_102ead20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ead20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_AnacapaLauncherCB);
  return (undefined4 *)(param_1);
}


// Reference entry 102ead30; body size 29 bytes.
#line 1 "ENTRY_102ead30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102ead30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_ApplicationControllerAIOHelper);
  DAT_121a0e70 = (int)(param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 102ead60; body size 33 bytes.
#line 1 "ENTRY_102ead60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ead60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseManager);
  return (undefined4 *)(param_1);
}


// Reference entry 102ead90; body size 65 bytes.
#line 1 "ENTRY_102ead90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ead90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCompoundActionImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCCompoundActionImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102eb040; body size 75 bytes.
#line 1 "ENTRY_102eb040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eb040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplaySubmitDiagnosticsMessageAction);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102eb0a0; body size 33 bytes.
#line 1 "ENTRY_102eb0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eb0a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplaySubmitDiagnosticsMessageDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 102eb0d0; body size 9 bytes.
#line 1 "ENTRY_102eb0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eb0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBrowseListPresentationMap);
  return (undefined4 *)(param_1);
}


// Reference entry 102eb0e0; body size 9 bytes.
#line 1 "ENTRY_102eb0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eb0e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBrowseManager);
  return (undefined4 *)(param_1);
}


// Reference entry 102eb0f0; body size 9 bytes.
#line 1 "ENTRY_102eb0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eb0f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDebug);
  return (undefined4 *)(param_1);
}


// Reference entry 102eb100; body size 9 bytes.
#line 1 "ENTRY_102eb100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eb100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDirectControlAppManager);
  return (undefined4 *)(param_1);
}


// Reference entry 102eb110; body size 9 bytes.
#line 1 "ENTRY_102eb110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eb110(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceAppInteropResponseDelegate);
  return (undefined4 *)(param_1);
}


// Reference entry 102eb120; body size 18 bytes.
#line 1 "ENTRY_102eb120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_102eb120(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibOptionsSettingsFileCB);
  return (undefined4 *)(param_1);
}


// Reference entry 102eba90; body size 9 bytes.
#line 1 "ENTRY_102eba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eba90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_SettingsFileCB);
  return (undefined4 *)(param_1);
}


// Reference entry 102ebaa0; body size 5 bytes.
#line 1 "ENTRY_102ebaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ebaa0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
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
  thunk_FUN_102ec600();
  return;
}


// Reference entry 102ebad0; body size 19 bytes.
#line 1 "ENTRY_102ebad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ebad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102ec5c0; body size 3 bytes.
#line 1 "ENTRY_102ec5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102ec5c0(void)

{
  return;
}


// Reference entry 102ec920; body size 5 bytes.
#line 1 "ENTRY_102ec920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ec920(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
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
  thunk_FUN_102ec600();
  return;
}


// Reference entry 102ec9a0; body size 19 bytes.
#line 1 "ENTRY_102ec9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ec9a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102ecc60; body size 19 bytes.
#line 1 "ENTRY_102ecc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ecc60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102ecc80; body size 7 bytes.
#line 1 "ENTRY_102ecc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ecc80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102ecc90; body size 7 bytes.
#line 1 "ENTRY_102ecc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ecc90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102ecca0; body size 7 bytes.
#line 1 "ENTRY_102ecca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ecca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102eccb0; body size 7 bytes.
#line 1 "ENTRY_102eccb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102eccb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102eccc0; body size 7 bytes.
#line 1 "ENTRY_102eccc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102eccc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLibOptionsSettingsFileCB);
  return;
}


// Reference entry 102ed700; body size 3 bytes.
#line 1 "ENTRY_102ed700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102ed700(void)

{
  return;
}


// Reference entry 102ede90; body size 14 bytes.
#line 1 "ENTRY_102ede90"

bool __thiscall Recovered_Bulk::m_FUN_102ede90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102edeb0; body size 14 bytes.
#line 1 "ENTRY_102edeb0"

bool __thiscall Recovered_Bulk::m_FUN_102edeb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102eded0; body size 14 bytes.
#line 1 "ENTRY_102eded0"

bool __thiscall Recovered_Bulk::m_FUN_102eded0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102ee2a0; body size 7 bytes.
#line 1 "ENTRY_102ee2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee2a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee2b0; body size 3 bytes.
#line 1 "ENTRY_102ee2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee2b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee2c0; body size 7 bytes.
#line 1 "ENTRY_102ee2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee2c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee2d0; body size 3 bytes.
#line 1 "ENTRY_102ee2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee2d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee2e0; body size 3 bytes.
#line 1 "ENTRY_102ee2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee2e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee2f0; body size 3 bytes.
#line 1 "ENTRY_102ee2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee2f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee300; body size 7 bytes.
#line 1 "ENTRY_102ee300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee300(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee310; body size 3 bytes.
#line 1 "ENTRY_102ee310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee320; body size 3 bytes.
#line 1 "ENTRY_102ee320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee320(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee330; body size 7 bytes.
#line 1 "ENTRY_102ee330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee330(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee340; body size 3 bytes.
#line 1 "ENTRY_102ee340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee350; body size 7 bytes.
#line 1 "ENTRY_102ee350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee350(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee360; body size 3 bytes.
#line 1 "ENTRY_102ee360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee360(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee370; body size 7 bytes.
#line 1 "ENTRY_102ee370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee370(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee380; body size 3 bytes.
#line 1 "ENTRY_102ee380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee390; body size 3 bytes.
#line 1 "ENTRY_102ee390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee3a0; body size 3 bytes.
#line 1 "ENTRY_102ee3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee3a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee3b0; body size 3 bytes.
#line 1 "ENTRY_102ee3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee3b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee3c0; body size 7 bytes.
#line 1 "ENTRY_102ee3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee3c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee3d0; body size 3 bytes.
#line 1 "ENTRY_102ee3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee3d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee3e0; body size 3 bytes.
#line 1 "ENTRY_102ee3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee3e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee3f0; body size 3 bytes.
#line 1 "ENTRY_102ee3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee3f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee400; body size 7 bytes.
#line 1 "ENTRY_102ee400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee400(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee410; body size 3 bytes.
#line 1 "ENTRY_102ee410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee420; body size 7 bytes.
#line 1 "ENTRY_102ee420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee420(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee430; body size 3 bytes.
#line 1 "ENTRY_102ee430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee440; body size 3 bytes.
#line 1 "ENTRY_102ee440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee450; body size 3 bytes.
#line 1 "ENTRY_102ee450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee450(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee460; body size 3 bytes.
#line 1 "ENTRY_102ee460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee460(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee470; body size 7 bytes.
#line 1 "ENTRY_102ee470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee470(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee480; body size 3 bytes.
#line 1 "ENTRY_102ee480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee480(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee490; body size 3 bytes.
#line 1 "ENTRY_102ee490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee490(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee4a0; body size 3 bytes.
#line 1 "ENTRY_102ee4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee4a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee4b0; body size 7 bytes.
#line 1 "ENTRY_102ee4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee4b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee4c0; body size 7 bytes.
#line 1 "ENTRY_102ee4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ee4c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ee4d0; body size 3 bytes.
#line 1 "ENTRY_102ee4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee4d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee4e0; body size 3 bytes.
#line 1 "ENTRY_102ee4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee4e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee4f0; body size 3 bytes.
#line 1 "ENTRY_102ee4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee4f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee500; body size 3 bytes.
#line 1 "ENTRY_102ee500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee510; body size 3 bytes.
#line 1 "ENTRY_102ee510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee510(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee520; body size 3 bytes.
#line 1 "ENTRY_102ee520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee530; body size 3 bytes.
#line 1 "ENTRY_102ee530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee530(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee540; body size 3 bytes.
#line 1 "ENTRY_102ee540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee540(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee550; body size 3 bytes.
#line 1 "ENTRY_102ee550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee550(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee560; body size 3 bytes.
#line 1 "ENTRY_102ee560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee570; body size 3 bytes.
#line 1 "ENTRY_102ee570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee570(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee580; body size 3 bytes.
#line 1 "ENTRY_102ee580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee580(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee590; body size 3 bytes.
#line 1 "ENTRY_102ee590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee590(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee5a0; body size 3 bytes.
#line 1 "ENTRY_102ee5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ee5a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ee5b0; body size 6 bytes.
#line 1 "ENTRY_102ee5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102ee5b0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 102ee5c0; body size 6 bytes.
#line 1 "ENTRY_102ee5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102ee5c0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 102ee5d0; body size 6 bytes.
#line 1 "ENTRY_102ee5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102ee5d0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 102ee5e0; body size 18 bytes.
#line 1 "ENTRY_102ee5e0"

void __thiscall Recovered_Bulk::m_FUN_102ee5e0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 102ee600; body size 14 bytes.
#line 1 "ENTRY_102ee600"

int * __thiscall Recovered_Bulk::m_FUN_102ee600(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 102ee620; body size 14 bytes.
#line 1 "ENTRY_102ee620"

int * __thiscall Recovered_Bulk::m_FUN_102ee620(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 102efea0; body size 31 bytes.
#line 1 "ENTRY_102efea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102efea0(undefined4 *param_1)

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


// Reference entry 102efed0; body size 31 bytes.
#line 1 "ENTRY_102efed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102efed0(undefined4 *param_1)

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


// Reference entry 102eff00; body size 22 bytes.
#line 1 "ENTRY_102eff00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102eff00(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 102eff40; body size 240 bytes.
#line 1 "ENTRY_102eff40"

void __thiscall Recovered_Bulk::m_FUN_102eff40(uint param_2,undefined4 param_3)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = (undefined4 *)((undefined4 *)param_1[1]);
  puVar6 = (undefined4 *)((undefined4 *)*param_1);
  uVar4 = (uint)((int)puVar5 - (int)puVar6 >> 2);
  if (uVar4 < param_2) {
    if (0x3fffffff < param_2) {
LAB_102f002b:
                    
      thunk_FUN_1012a2a0();
    }
    uVar1 = (uint)(param_2 * 4);
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        puVar5 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        puVar5 = (undefined4 *)(operator_new(uVar1), 0);
      }
    }
    else {
      if (uVar1 + 0x23 <= uVar1) goto LAB_102f002b;
      pvVar2 = (char *)(operator_new(uVar1 + 0x23), 0);
      if ((void *)(pvVar2) == (void *)(0x0)) goto LAB_102f0004;
      puVar5 = (undefined4 *)((undefined4 *)((int)pvVar2 + 0x23U & 0xffffffe0));
      puVar5[-1] = (undefined4)(pvVar2);
    }
    if (uVar4 != 0) {
      uVar1 = (uint)(*param_1);
      uVar4 = (uint)(uVar4 * 4);
      uVar3 = (uint)(uVar1);
      if (0xfff < uVar4) {
        uVar3 = (uint)(*(uint *)(uVar1 - 4));
        uVar4 = (uint)(uVar4 + 0x23);
        if (0x1f < (uVar1 - uVar3) - 4) {
LAB_102f0004:
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(uVar3,uVar4);
    }
    puVar6 = (undefined4 *)(puVar5 + param_2);
    *param_1 = (uint)((uint)puVar5);
    param_1[1] = (uint)((uint)puVar6);
    param_1[2] = (uint)((uint)puVar6);
    for (;(undefined4 *)( puVar5) != (undefined4 *)(puVar6); puVar5 = puVar5 + 1) {
      *puVar5 = (undefined4)(param_3);
    }
  }
  else {
    uVar4 = (uint)((uint)((int)puVar5 + (3 - (int)puVar6)) >> 2);
    if ((undefined4 *)(puVar5) < (undefined4 *)(puVar6)) {
      uVar4 = (uint)(0);
    }
    if (uVar4 != 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = (undefined4)(param_3);
        puVar6 = (undefined4 *)(puVar6 + 1);
      }
      return;
    }
  }
  return;
}


// Reference entry 102f0070; body size 14 bytes.
#line 1 "ENTRY_102f0070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102f0070(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102f0090; body size 8 bytes.
#line 1 "ENTRY_102f0090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102f0090(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102f00a0; body size 3 bytes.
#line 1 "ENTRY_102f00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f00a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f00b0; body size 3 bytes.
#line 1 "ENTRY_102f00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f00b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f00c0; body size 3 bytes.
#line 1 "ENTRY_102f00c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f00c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f00d0; body size 3 bytes.
#line 1 "ENTRY_102f00d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f00d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f00e0; body size 3 bytes.
#line 1 "ENTRY_102f00e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f00e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f00f0; body size 3 bytes.
#line 1 "ENTRY_102f00f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f00f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f0100; body size 4 bytes.
#line 1 "ENTRY_102f0100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102f0100(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 102f0110; body size 3 bytes.
#line 1 "ENTRY_102f0110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f0110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f0120; body size 3 bytes.
#line 1 "ENTRY_102f0120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f0120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f0130; body size 3 bytes.
#line 1 "ENTRY_102f0130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f0130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f0140; body size 3 bytes.
#line 1 "ENTRY_102f0140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f0140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f0150; body size 3 bytes.
#line 1 "ENTRY_102f0150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f0150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f0160; body size 3 bytes.
#line 1 "ENTRY_102f0160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f0160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f0170; body size 3 bytes.
#line 1 "ENTRY_102f0170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f0170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f0180; body size 3 bytes.
#line 1 "ENTRY_102f0180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f0180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f0190; body size 4 bytes.
#line 1 "ENTRY_102f0190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f0190(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 102f0430; body size 7 bytes.
#line 1 "ENTRY_102f0430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102f0430(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 102f0440; body size 79 bytes.
#line 1 "ENTRY_102f0440"

void __thiscall Recovered_Bulk::m_FUN_102f0440(int param_2)
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


// Reference entry 102f04b0; body size 4 bytes.
#line 1 "ENTRY_102f04b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102f04b0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 102f04c0; body size 3 bytes.
#line 1 "ENTRY_102f04c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f04c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102f04d0; body size 3 bytes.
#line 1 "ENTRY_102f04d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102f04d0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 102f04e0; body size 11 bytes.
#line 1 "ENTRY_102f04e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f04e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102f04f0; body size 6 bytes.
#line 1 "ENTRY_102f04f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102f04f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 102f0500; body size 83 bytes.
#line 1 "ENTRY_102f0500"

void __thiscall Recovered_Bulk::m_FUN_102f0500(int *param_2)
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


// Reference entry 102f0570; body size 10 bytes.
#line 1 "ENTRY_102f0570"

void __thiscall Recovered_Bulk::m_FUN_102f0570(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 102f0750; body size 11 bytes.
#line 1 "ENTRY_102f0750"

void __thiscall Recovered_Bulk::m_FUN_102f0750(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102f0760; body size 3 bytes.
#line 1 "ENTRY_102f0760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f0760(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102f0770; body size 3 bytes.
#line 1 "ENTRY_102f0770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102f0770(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 102f0780; body size 23 bytes.
#line 1 "ENTRY_102f0780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102f0780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  func_0x1000ffdd(param_1,param_2,&DAT_1186d2ee,param_3);
  pcVar1 = (code *)((code *)swi(3), 0);
  (*pcVar1)();
  return;
}


// Reference entry 102f0bd0; body size 90 bytes.
#line 1 "ENTRY_102f0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102f0bd0(uint param_1)

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


// Reference entry 102f0c50; body size 90 bytes.
#line 1 "ENTRY_102f0c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102f0c50(uint param_1)

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


// Reference entry 102f0cd0; body size 90 bytes.
#line 1 "ENTRY_102f0cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102f0cd0(uint param_1)

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


// Reference entry 102f0d50; body size 87 bytes.
#line 1 "ENTRY_102f0d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102f0d50(uint param_1)

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


// Reference entry 102f0de0; body size 11 bytes.
#line 1 "ENTRY_102f0de0"

void __thiscall Recovered_Bulk::m_FUN_102f0de0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102f0fe0; body size 5 bytes.
#line 1 "ENTRY_102f0fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102f0fe0(int param_1)

{
 try {
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  iVar1 = (int)(thunk_FUN_110828b0(DAT_12126b84 ^ (uint)&stack0xfffffffc), 0);
  if (iVar1 != 0) {
    iVar1 = (int)((*(code *)**(undefined4 **)(iVar1 + 0x1c))(), 0);
    if (iVar1 != 0) {
      pvVar2 = (void *)(operator_new(0x54), 0);

      if ((void *)(pvVar2) == (void *)(0x0)) {
        iVar1 = (int)(0);
      }
      else {
        iVar1 = (int)(thunk_FUN_11135bc0(iVar1), 0);
      }

      if (iVar1 != 0) {
        piVar5 = (int *)(*(int **)(param_1 + 0x554), 0);
        if ((int *)(piVar5) != (int *)(0x0)) {
          if (*(int *)(param_1 + 0x558) != 0) {
            (**(code **)(*piVar5 + 0x10))();
            piVar5 = (int *)(*(int **)(param_1 + 0x554), 0);
          }
          if ((int *)(piVar5) != (int *)(0x0)) {
            iVar3 = (int)(thunk_FUN_1123fcd0(piVar5 + 1), 0);
            if (iVar3 == 0) {
              (**(code **)*piVar5)(1);
            }
          }
          *(undefined4*)(param_1 + 0x558) = (undefined4)(0);
        }
        *(int*)(param_1 + 0x554) = (int)(iVar1);
        thunk_FUN_1123fce0(iVar1 + 4);
        if (*(int **)(param_1 + 0x554) != (int *)((0x0))) {
          uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0x554) + 4))
                            (-(uint)(param_1 != 0) & param_1 + 0x1cU,0), 0);
          *(undefined4*)(param_1 + 0x558) = (undefined4)(uVar4);
        }
      }
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102f11c0; body size 13 bytes.
#line 1 "ENTRY_102f11c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102f11c0(undefined4 param_1)

{
  thunk_FUN_11241080(param_1);
  return;
}


// Reference entry 102f1220; body size 17 bytes.
#line 1 "ENTRY_102f1220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102f1220(void)

{
  if ((undefined4 *)(DAT_122e8a18) != (undefined4 *)(0x0)) {
    (**(code **)DAT_122e8a18)(1);
  }
  return;
}


// Reference entry 102f4320; body size 57 bytes.
#line 1 "ENTRY_102f4320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102f4320(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102f4370; body size 57 bytes.
#line 1 "ENTRY_102f4370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102f4370(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102f43c0; body size 57 bytes.
#line 1 "ENTRY_102f43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102f43c0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102f4410; body size 60 bytes.
#line 1 "ENTRY_102f4410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102f4410(int param_1,int param_2)

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


// Reference entry 102f4460; body size 61 bytes.
#line 1 "ENTRY_102f4460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102f4460(int param_1,int param_2)

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


// Reference entry 102f44b0; body size 16 bytes.
#line 1 "ENTRY_102f44b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f44b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102f44d0; body size 16 bytes.
#line 1 "ENTRY_102f44d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f44d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102f44f0; body size 9 bytes.
#line 1 "ENTRY_102f44f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f44f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102f4500; body size 9 bytes.
#line 1 "ENTRY_102f4500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f4500(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102f4510; body size 9 bytes.
#line 1 "ENTRY_102f4510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f4510(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102f4520; body size 9 bytes.
#line 1 "ENTRY_102f4520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f4520(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102f4530; body size 9 bytes.
#line 1 "ENTRY_102f4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f4530(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102f4540; body size 9 bytes.
#line 1 "ENTRY_102f4540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f4540(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102f4550; body size 9 bytes.
#line 1 "ENTRY_102f4550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f4550(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102f4560; body size 9 bytes.
#line 1 "ENTRY_102f4560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f4560(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102f4740; body size 12 bytes.
#line 1 "ENTRY_102f4740"

void __thiscall Recovered_Bulk::m_FUN_102f4740(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 102f4750; body size 11 bytes.
#line 1 "ENTRY_102f4750"

void __thiscall Recovered_Bulk::m_FUN_102f4750(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102f4760; body size 11 bytes.
#line 1 "ENTRY_102f4760"

void __thiscall Recovered_Bulk::m_FUN_102f4760(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102f4770; body size 12 bytes.
#line 1 "ENTRY_102f4770"

void __thiscall Recovered_Bulk::m_FUN_102f4770(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102f51b0; body size 4 bytes.
#line 1 "ENTRY_102f51b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f51b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102f55e0; body size 4 bytes.
#line 1 "ENTRY_102f55e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f55e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x58));
}


// Reference entry 102f57f0; body size 4 bytes.
#line 1 "ENTRY_102f57f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102f57f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x3c));
}


// Reference entry 102f73d0; body size 20 bytes.
#line 1 "ENTRY_102f73d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102f73d0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 5:
    return (undefined4)(0x11);
  case 1:
    return (undefined4)(0x12);
  case 2:
    return (undefined4)(0x13);
  case 3:
    return (undefined4)(0x14);
  case 4:
    return (undefined4)(0x15);
  default:
    return (undefined4)(0xffffffff);
  }
}


// Reference entry 102f7870; body size 4 bytes.
#line 1 "ENTRY_102f7870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_102f7870(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 1));
}


// Reference entry 102f78f0; body size 4 bytes.
#line 1 "ENTRY_102f78f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_102f78f0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 2));
}


// Reference entry 102f9300; body size 6 bytes.
#line 1 "ENTRY_102f9300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102f9300(void)

{
  return (undefined4)(DAT_122e8a34);
}


// Reference entry 102f9b60; body size 4 bytes.
#line 1 "ENTRY_102f9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_102f9b60(undefined2 *param_1)

{
  return (undefined2)(*param_1);
}


// Reference entry 102fc8d0; body size 26 bytes.
#line 1 "ENTRY_102fc8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102fc8d0(undefined4 param_1)

{
  if (DAT_121a0e70 != 0) {
    thunk_FUN_110f6450(param_1,DAT_121a0e70,0);
  }
  return;
}


// Reference entry 102fc8f0; body size 6 bytes.
#line 1 "ENTRY_102fc8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102fc8f0(void)

{
  return (char *)("SCIAudioInputResource");
}


// Reference entry 102fc900; body size 6 bytes.
#line 1 "ENTRY_102fc900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102fc900(void)

{
  return (char *)("SCIBrowseListPresentationMap");
}


// Reference entry 102fc910; body size 6 bytes.
#line 1 "ENTRY_102fc910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102fc910(void)

{
  return (char *)("SCIBrowseManager");
}


// Reference entry 102fc920; body size 6 bytes.
#line 1 "ENTRY_102fc920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102fc920(void)

{
  return (char *)("SCICachedHousehold");
}


// Reference entry 102fc930; body size 6 bytes.
#line 1 "ENTRY_102fc930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102fc930(void)

{
  return (char *)("SCIDirectControlAppManager");
}


// Reference entry 102fc940; body size 6 bytes.
#line 1 "ENTRY_102fc940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102fc940(void)

{
  return (char *)("SCIServiceAppInteropResponseDelegate");
}


// Reference entry 102fc950; body size 6 bytes.
#line 1 "ENTRY_102fc950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102fc950(void)

{
  return (char *)("SCIWebsocketDelegate");
}


// Reference entry 102fdfb0; body size 7 bytes.
#line 1 "ENTRY_102fdfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_102fdfb0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x2d420));
}


// Reference entry 102fdfc0; body size 7 bytes.
#line 1 "ENTRY_102fdfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_102fdfc0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x803));
}


// Reference entry 102fdff0; body size 7 bytes.
#line 1 "ENTRY_102fdff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102fdff0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 102fe000; body size 7 bytes.
#line 1 "ENTRY_102fe000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102fe000(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 102fe010; body size 7 bytes.
#line 1 "ENTRY_102fe010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102fe010(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 102fe020; body size 7 bytes.
#line 1 "ENTRY_102fe020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102fe020(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 102fe030; body size 7 bytes.
#line 1 "ENTRY_102fe030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102fe030(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102fe040; body size 7 bytes.
#line 1 "ENTRY_102fe040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102fe040(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102fe050; body size 7 bytes.
#line 1 "ENTRY_102fe050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102fe050(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102fe060; body size 7 bytes.
#line 1 "ENTRY_102fe060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102fe060(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102fe0d0; body size 4 bytes.
#line 1 "ENTRY_102fe0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_102fe0d0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x4c));
}


// Reference entry 102fe190; body size 6 bytes.
#line 1 "ENTRY_102fe190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102fe190(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 102fe1a0; body size 6 bytes.
#line 1 "ENTRY_102fe1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102fe1a0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 102fe1b0; body size 4 bytes.
#line 1 "ENTRY_102fe1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_102fe1b0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 3));
}


// Reference entry 102fe1c0; body size 6 bytes.
#line 1 "ENTRY_102fe1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_102fe1c0(int param_1)

{
  return (byte)(*(byte *)(param_1 + 2) & 0xf);
}


// Reference entry 102fe1d0; body size 8 bytes.
#line 1 "ENTRY_102fe1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_102fe1d0(uint *param_1)

{
  return (uint)(*param_1 >> 0x14 & 0xffffff0f);
}


// Reference entry 102fe430; body size 5 bytes.
#line 1 "ENTRY_102fe430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102fe430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102fe470; body size 3 bytes.
#line 1 "ENTRY_102fe470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe470(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe480; body size 3 bytes.
#line 1 "ENTRY_102fe480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe480(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe490; body size 3 bytes.
#line 1 "ENTRY_102fe490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe490(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe4a0; body size 3 bytes.
#line 1 "ENTRY_102fe4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe4a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe4b0; body size 3 bytes.
#line 1 "ENTRY_102fe4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe4b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe4c0; body size 3 bytes.
#line 1 "ENTRY_102fe4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe4c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe4d0; body size 3 bytes.
#line 1 "ENTRY_102fe4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe4d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe4e0; body size 3 bytes.
#line 1 "ENTRY_102fe4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe4e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe4f0; body size 3 bytes.
#line 1 "ENTRY_102fe4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe4f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe500; body size 3 bytes.
#line 1 "ENTRY_102fe500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe510; body size 3 bytes.
#line 1 "ENTRY_102fe510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe510(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe520; body size 3 bytes.
#line 1 "ENTRY_102fe520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe530; body size 3 bytes.
#line 1 "ENTRY_102fe530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe530(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe540; body size 3 bytes.
#line 1 "ENTRY_102fe540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe540(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe550; body size 3 bytes.
#line 1 "ENTRY_102fe550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe550(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe560; body size 3 bytes.
#line 1 "ENTRY_102fe560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe570; body size 3 bytes.
#line 1 "ENTRY_102fe570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe570(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe580; body size 3 bytes.
#line 1 "ENTRY_102fe580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe580(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe590; body size 3 bytes.
#line 1 "ENTRY_102fe590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe590(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe5a0; body size 3 bytes.
#line 1 "ENTRY_102fe5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe5a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe5b0; body size 3 bytes.
#line 1 "ENTRY_102fe5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe5b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe5c0; body size 3 bytes.
#line 1 "ENTRY_102fe5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe5c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe5d0; body size 3 bytes.
#line 1 "ENTRY_102fe5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe5d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe5e0; body size 3 bytes.
#line 1 "ENTRY_102fe5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe5e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102fe5f0; body size 3 bytes.
#line 1 "ENTRY_102fe5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102fe5f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102feb50; body size 28 bytes.
#line 1 "ENTRY_102feb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102feb50(undefined4 *param_1)

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


// Reference entry 102feb80; body size 28 bytes.
#line 1 "ENTRY_102feb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102feb80(undefined4 *param_1)

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


// Reference entry 102febb0; body size 28 bytes.
#line 1 "ENTRY_102febb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102febb0(undefined4 *param_1)

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


// Reference entry 102febe0; body size 28 bytes.
#line 1 "ENTRY_102febe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102febe0(undefined4 *param_1)

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


// Reference entry 102fec10; body size 28 bytes.
#line 1 "ENTRY_102fec10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102fec10(undefined4 *param_1)

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


// Reference entry 102fec40; body size 28 bytes.
#line 1 "ENTRY_102fec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102fec40(undefined4 *param_1)

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


// Reference entry 102fec70; body size 28 bytes.
#line 1 "ENTRY_102fec70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102fec70(undefined4 *param_1)

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


// Reference entry 102feca0; body size 20 bytes.
#line 1 "ENTRY_102feca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102feca0(int *param_1)

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


// Reference entry 102fecc0; body size 20 bytes.
#line 1 "ENTRY_102fecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102fecc0(int *param_1)

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


// Reference entry 102fece0; body size 20 bytes.
#line 1 "ENTRY_102fece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102fece0(int *param_1)

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


// Reference entry 102fed00; body size 20 bytes.
#line 1 "ENTRY_102fed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102fed00(int *param_1)

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


// Reference entry 10300610; body size 10 bytes.
#line 1 "ENTRY_10300610"

void __thiscall Recovered_Bulk::m_FUN_10300610(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x4c) = (undefined1)(param_2);
  return;
}


// Reference entry 10300670; body size 13 bytes.
#line 1 "ENTRY_10300670"

void __thiscall Recovered_Bulk::m_FUN_10300670(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x2d420) = (undefined1)(param_2);
  return;
}


// Reference entry 10300880; body size 13 bytes.
#line 1 "ENTRY_10300880"

void __thiscall Recovered_Bulk::m_FUN_10300880(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x803) = (undefined1)(param_2);
  return;
}


// Reference entry 103008b0; body size 10 bytes.
#line 1 "ENTRY_103008b0"

void __thiscall Recovered_Bulk::m_FUN_103008b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x58) = (undefined4)(param_2);
  return;
}


// Reference entry 10301140; body size 16 bytes.
#line 1 "ENTRY_10301140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10301140(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10280c00(), 0);
  *(undefined4*)(iVar1 + 0x45c) = (undefined4)(param_1);
  return;
}


// Reference entry 10301160; body size 10 bytes.
#line 1 "ENTRY_10301160"

void __thiscall Recovered_Bulk::m_FUN_10301160(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(param_2);
  return;
}


// Reference entry 10301440; body size 8 bytes.
#line 1 "ENTRY_10301440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10301440(void)

{
  DAT_121a12cc = (int)(1);
  return;
}


// Reference entry 10301cf0; body size 9 bytes.
#line 1 "ENTRY_10301cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10301cf0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10301d00; body size 38 bytes.
#line 1 "ENTRY_10301d00"

void __thiscall Recovered_Bulk::m_FUN_10301d00(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8) + param_3 * 8);
  thunk_FUN_102e8bc0(iVar1,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0xc) - iVar1 >> 3,param_2);
  return;
}


// Reference entry 10301d30; body size 23 bytes.
#line 1 "ENTRY_10301d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10301d30(int param_1)

{
  if ((&DAT_122f5650)[param_1] != 0) {
    thunk_FUN_11241ca0();
  }
  return;
}


// Reference entry 10301da0; body size 21 bytes.
#line 1 "ENTRY_10301da0"

void __thiscall Recovered_Bulk::m_FUN_10301da0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x34))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10301ec0; body size 21 bytes.
#line 1 "ENTRY_10301ec0"

void __thiscall Recovered_Bulk::m_FUN_10301ec0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x38))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10302480; body size 6 bytes.
#line 1 "ENTRY_10302480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10302480(void)

{
  return (char *)("SCICountry");
}


// Reference entry 10302490; body size 27 bytes.
#line 1 "ENTRY_10302490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10302490(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 103024c0; body size 27 bytes.
#line 1 "ENTRY_103024c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103024c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10302620; body size 9 bytes.
#line 1 "ENTRY_10302620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10302620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCICountry);
  return (undefined4 *)(param_1);
}


// Reference entry 103027a0; body size 7 bytes.
#line 1 "ENTRY_103027a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103027a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103028e0; body size 6 bytes.
#line 1 "ENTRY_103028e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103028e0(void)

{
  return (char *)("SCCountryList");
}


// Reference entry 10302900; body size 22 bytes.
#line 1 "ENTRY_10302900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10302900(undefined4 *param_1,undefined4 *param_2)

{
  thunk_FUN_1111d190(*param_1,*param_2);
  return;
}


// Reference entry 10302940; body size 27 bytes.
#line 1 "ENTRY_10302940"

SCStr * __thiscall Recovered_Bulk::m_FUN_10302940(SCStr *param_2,int param_3)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep(*(char **)(*(int *)(param_1 + 0xc) + 4 + param_3 * 8));
  return (SCStr *)(param_2);
}


// Reference entry 10302a30; body size 26 bytes.
#line 1 "ENTRY_10302a30"

SCStr * __thiscall Recovered_Bulk::m_FUN_10302a30(SCStr *param_2,int param_3)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep(*(char **)(*(int *)(param_1 + 0xc) + param_3 * 8));
  return (SCStr *)(param_2);
}


// Reference entry 10302ef0; body size 6 bytes.
#line 1 "ENTRY_10302ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10302ef0(void)

{
  return (char *)("SCICountry");
}


// Reference entry 10302f00; body size 4 bytes.
#line 1 "ENTRY_10302f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10302f00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10303030; body size 18 bytes.
#line 1 "ENTRY_10303030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10303030(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10303050; body size 22 bytes.
#line 1 "ENTRY_10303050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10303050(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10303070; body size 22 bytes.
#line 1 "ENTRY_10303070"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10303070(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10303090; body size 18 bytes.
#line 1 "ENTRY_10303090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10303090(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10303170; body size 18 bytes.
#line 1 "ENTRY_10303170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10303170(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10303190; body size 25 bytes.
#line 1 "ENTRY_10303190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10303190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103031b0; body size 25 bytes.
#line 1 "ENTRY_103031b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103031b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103031d0; body size 100 bytes.
#line 1 "ENTRY_103031d0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103031d0(SCStr *param_2,int param_3)
{
  SCStr *param_1 = (SCStr *)this;
  undefined4 uVar1;
  
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKeyValueBase);
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_3 + 4));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_3 + 8));
  *(undefined4*)(param_1 + 0x10) = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReport);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  *(undefined4*)(param_1 + 0x14) = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  *(undefined4*)(param_1 + 0x18) = (undefined4)(uVar1);
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReportData);
  memcpy(param_1 + 0x1c,(char *)(param_3 + 0x18),0x1000);
  return (SCStr *)(param_1);
}


// Reference entry 10303390; body size 22 bytes.
#line 1 "ENTRY_10303390"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10303390(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103033b0; body size 22 bytes.
#line 1 "ENTRY_103033b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103033b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103033d0; body size 18 bytes.
#line 1 "ENTRY_103033d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103033d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103033f0; body size 5 bytes.
#line 1 "ENTRY_103033f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103033f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10303400; body size 5 bytes.
#line 1 "ENTRY_10303400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10303400(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10303450; body size 22 bytes.
#line 1 "ENTRY_10303450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10303450(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10303470; body size 18 bytes.
#line 1 "ENTRY_10303470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10303470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103035c0; body size 3 bytes.
#line 1 "ENTRY_103035c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103035c0(void)

{
  return;
}


// Reference entry 103035d0; body size 49 bytes.
#line 1 "ENTRY_103035d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103035d0(void)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = (void *)(operator_new(0x104f), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void**)(uVar2 - 4) = (void *)(pvVar1);
    *(uint*)uVar2 = (uint)((uint)(uVar2));
    *(uint*)(uVar2 + 4) = (uint)(uVar2);
    *(uint*)(uVar2 + 8) = (uint)(uVar2);
    *(undefined2*)(uVar2 + 0xc) = (undefined2)(0x101);
    return;
  }
                    
                    
                    
  _invalid_parameter_noinfo_noreturn();
  return;
}


// Reference entry 103038c0; body size 13 bytes.
#line 1 "ENTRY_103038c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103038c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103038d0; body size 13 bytes.
#line 1 "ENTRY_103038d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103038d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103038e0; body size 13 bytes.
#line 1 "ENTRY_103038e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103038e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103038f0; body size 13 bytes.
#line 1 "ENTRY_103038f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103038f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10303900; body size 13 bytes.
#line 1 "ENTRY_10303900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10303900(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10303910; body size 113 bytes.
#line 1 "ENTRY_10303910"

void __thiscall Recovered_Bulk::m_FUN_10303910(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_103039a0(*(undefined4 *)(*param_2 + 4),*param_1,param_3), 0);
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


// Reference entry 10303c80; body size 3 bytes.
#line 1 "ENTRY_10303c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10303c80(void)

{
  return;
}


// Reference entry 10303c90; body size 3 bytes.
#line 1 "ENTRY_10303c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10303c90(void)

{
  return;
}


// Reference entry 10303eb0; body size 18 bytes.
#line 1 "ENTRY_10303eb0"

void __thiscall Recovered_Bulk::m_FUN_10303eb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 103041f0; body size 15 bytes.
#line 1 "ENTRY_103041f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103041f0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 103042b0; body size 22 bytes.
#line 1 "ENTRY_103042b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103042b0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0xfd478) {
    return (int)(param_1 * 0x102c);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException((uint)&auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 103042d0; body size 7 bytes.
#line 1 "ENTRY_103042d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103042d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103042e0; body size 5 bytes.
#line 1 "ENTRY_103042e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103042e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103042f0; body size 5 bytes.
#line 1 "ENTRY_103042f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103042f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304300; body size 37 bytes.
#line 1 "ENTRY_10304300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304300(int param_1,SCStr *param_2)

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


// Reference entry 103045b0; body size 5 bytes.
#line 1 "ENTRY_103045b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103045b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103045c0; body size 5 bytes.
#line 1 "ENTRY_103045c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103045c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103045d0; body size 5 bytes.
#line 1 "ENTRY_103045d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103045d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103045f0; body size 5 bytes.
#line 1 "ENTRY_103045f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103045f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304600; body size 5 bytes.
#line 1 "ENTRY_10304600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304600(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304610; body size 5 bytes.
#line 1 "ENTRY_10304610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304620; body size 5 bytes.
#line 1 "ENTRY_10304620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304620(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304630; body size 27 bytes.
#line 1 "ENTRY_10304630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10304630(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10304660; body size 93 bytes.
#line 1 "ENTRY_10304660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10304660(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  undefined4 uVar1;
  
  ((SCStr *)(param_2))->op_ctor(param_3);
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKeyValueBase);
  *(undefined4*)(param_2 + 8) = (undefined4)(*(undefined4 *)(param_3 + 8));
  *(undefined4*)(param_2 + 0xc) = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  *(undefined4*)(param_2 + 0x10) = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReport);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  *(undefined4*)(param_2 + 0x14) = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  *(undefined4*)(param_2 + 0x18) = (undefined4)(uVar1);
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReportData);
  memcpy(param_2 + 0x1c,param_3 + 0x1c,0x1000);
  return;
}


// Reference entry 103046e0; body size 94 bytes.
#line 1 "ENTRY_103046e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103046e0(undefined4 param_1,SCStr *param_2,SCStr *param_3,int param_4)

{
  undefined4 uVar1;
  
  ((SCStr *)(param_2))->op_ctor(param_3);
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKeyValueBase);
  *(undefined4*)(param_2 + 8) = (undefined4)(*(undefined4 *)(param_4 + 4));
  *(undefined4*)(param_2 + 0xc) = (undefined4)(*(undefined4 *)(param_4 + 8));
  *(undefined4*)(param_2 + 0x10) = (undefined4)(*(undefined4 *)(param_4 + 0xc));
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReport);
  uVar1 = (undefined4)(*(undefined4 *)(param_4 + 0x14));
  *(undefined4*)(param_2 + 0x14) = (undefined4)(*(undefined4 *)(param_4 + 0x10));
  *(undefined4*)(param_2 + 0x18) = (undefined4)(uVar1);
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReportData);
  memcpy(param_2 + 0x1c,(char *)(param_4 + 0x18),0x1000);
  return;
}


// Reference entry 103049e0; body size 56 bytes.
#line 1 "ENTRY_103049e0"

void __thiscall Recovered_Bulk::m_FUN_103049e0(undefined4 *param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 uVar1;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_3);
  ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                *)&uStack_4))->op_inc();
  uVar1 = (undefined4)(thunk_FUN_103072d0(param_3), 0);
  thunk_FUN_101f4270(param_1,uVar1);
  *param_2 = (undefined4)(uStack_4);
  return;
}


// Reference entry 10304a30; body size 15 bytes.
#line 1 "ENTRY_10304a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304a30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10304a50; body size 15 bytes.
#line 1 "ENTRY_10304a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304a50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10304af0; body size 5 bytes.
#line 1 "ENTRY_10304af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304b00; body size 5 bytes.
#line 1 "ENTRY_10304b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304b10; body size 5 bytes.
#line 1 "ENTRY_10304b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304b20; body size 5 bytes.
#line 1 "ENTRY_10304b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304b30; body size 5 bytes.
#line 1 "ENTRY_10304b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304b40; body size 5 bytes.
#line 1 "ENTRY_10304b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304b50; body size 5 bytes.
#line 1 "ENTRY_10304b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304b70; body size 5 bytes.
#line 1 "ENTRY_10304b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304b80; body size 5 bytes.
#line 1 "ENTRY_10304b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304b90; body size 5 bytes.
#line 1 "ENTRY_10304b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304ba0; body size 5 bytes.
#line 1 "ENTRY_10304ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304bb0; body size 5 bytes.
#line 1 "ENTRY_10304bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304bc0; body size 5 bytes.
#line 1 "ENTRY_10304bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304be0; body size 5 bytes.
#line 1 "ENTRY_10304be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304bf0; body size 5 bytes.
#line 1 "ENTRY_10304bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304c80; body size 30 bytes.
#line 1 "ENTRY_10304c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10304c80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10304cc0; body size 28 bytes.
#line 1 "ENTRY_10304cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10304cc0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10304cf0; body size 28 bytes.
#line 1 "ENTRY_10304cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10304cf0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10304e10; body size 18 bytes.
#line 1 "ENTRY_10304e10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10304e10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10304e30; body size 18 bytes.
#line 1 "ENTRY_10304e30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10304e30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10304e50; body size 3 bytes.
#line 1 "ENTRY_10304e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10304e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10304e60; body size 10 bytes.
#line 1 "ENTRY_10304e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10304e60(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10304f50; body size 11 bytes.
#line 1 "ENTRY_10304f50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10304f50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10304f60; body size 11 bytes.
#line 1 "ENTRY_10304f60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10304f60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10304f70; body size 16 bytes.
#line 1 "ENTRY_10304f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10304f70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10304ff0; body size 74 bytes.
#line 1 "ENTRY_10304ff0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10304ff0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  uint uVar2;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x104f), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void**)(uVar2 - 4) = (void *)(pvVar1);
    *(uint*)uVar2 = (uint)((uint)(uVar2));
    *(uint*)(uVar2 + 4) = (uint)(uVar2);
    *(uint*)(uVar2 + 8) = (uint)(uVar2);
    *(undefined2*)(uVar2 + 0xc) = (undefined2)(0x101);
    *(uint*)param_1[1] = (uint)((undefined4)(uVar2));
    return (undefined4 *)(param_1);
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 103050f0; body size 11 bytes.
#line 1 "ENTRY_103050f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103050f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10305100; body size 16 bytes.
#line 1 "ENTRY_10305100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10305100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10305120; body size 23 bytes.
#line 1 "ENTRY_10305120"

undefined8 * __thiscall Recovered_Bulk::m_FUN_10305120(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 10305140; body size 14 bytes.
#line 1 "ENTRY_10305140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10305140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10305160; body size 23 bytes.
#line 1 "ENTRY_10305160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10305160(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10305180; body size 3 bytes.
#line 1 "ENTRY_10305180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10305180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10305190; body size 3 bytes.
#line 1 "ENTRY_10305190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10305190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10305310; body size 75 bytes.
#line 1 "ENTRY_10305310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint * __fastcall FUN_10305310(uint *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  *param_1 = (uint)(0);
  param_1[1] = (uint)(0);
  pvVar1 = (void *)(operator_new(0x104f), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void**)(uVar2 - 4) = (void *)(pvVar1);
    *(uint*)uVar2 = (uint)((uint)(uVar2));
    *(uint*)(uVar2 + 4) = (uint)(uVar2);
    *(uint*)(uVar2 + 8) = (uint)(uVar2);
    *(undefined2*)(uVar2 + 0xc) = (undefined2)(0x101);
    *param_1 = (uint)(uVar2);
    return (uint *)(param_1);
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 10305370; body size 99 bytes.
#line 1 "ENTRY_10305370"

SCStr * __thiscall Recovered_Bulk::m_FUN_10305370(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  undefined4 uVar1;
  
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKeyValueBase);
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  *(undefined4*)(param_1 + 0x10) = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReport);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4*)(param_1 + 0x14) = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  *(undefined4*)(param_1 + 0x18) = (undefined4)(uVar1);
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReportData);
  memcpy(param_1 + 0x1c,param_2 + 0x1c,0x1000);
  return (SCStr *)(param_1);
}


// Reference entry 103054e0; body size 61 bytes.
#line 1 "ENTRY_103054e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103054e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111c05a0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10305530; body size 53 bytes.
#line 1 "ENTRY_10305530"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10305530(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueBase);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKVReport);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  param_1[4] = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  param_1[5] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10305580; body size 82 bytes.
#line 1 "ENTRY_10305580"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10305580(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueBase);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKVReport);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  param_1[4] = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  param_1[5] = (undefined4)(uVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKVReportData);
  memcpy(param_1 + 6,(char *)(param_2 + 0x18),0x1000);
  return (undefined4 *)(param_1);
}


// Reference entry 103055f0; body size 33 bytes.
#line 1 "ENTRY_103055f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103055f0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueBase);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  return (undefined4 *)(param_1);
}


// Reference entry 10305620; body size 9 bytes.
#line 1 "ENTRY_10305620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10305620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportUploaderClient);
  return (undefined4 *)(param_1);
}


// Reference entry 10305b60; body size 100 bytes.
#line 1 "ENTRY_10305b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10305b60(undefined4 *param_1)

{
  thunk_FUN_11240650();
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RReportUploaderClient);
  *(undefined2*)((int)param_1 + 10) = (undefined2)(0x3eb);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCReportUploaderAIOClient);
  param_1[1] = (undefined4)((uint)&ghidra_vftable_SCReportUploaderAIOClient);
  *(undefined1*)(param_1 + 2) = (undefined1)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x12] = (undefined4)(0);
  thunk_FUN_112a9cf0(param_1 + 6);
  thunk_FUN_112aa310(param_1 + 8);
  return (undefined4 *)(param_1);
}


// Reference entry 10305ea0; body size 11 bytes.
#line 1 "ENTRY_10305ea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10305ea0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10305ed0; body size 5 bytes.
#line 1 "ENTRY_10305ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10305ed0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  uVar3 = (uint)(*(int *)(param_1 + 0x18) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  puVar4 = (undefined4 *)((undefined4 *)(param_1 + 0xc));
  thunk_FUN_10304120(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x10);
  return;
}


// Reference entry 10306250; body size 3 bytes.
#line 1 "ENTRY_10306250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10306250(void)

{
  return;
}


// Reference entry 103062b0; body size 5 bytes.
#line 1 "ENTRY_103062b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103062b0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  uVar3 = (uint)(*(int *)(param_1 + 0x18) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  puVar4 = (undefined4 *)((undefined4 *)(param_1 + 0xc));
  thunk_FUN_10304120(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x10);
  return;
}


// Reference entry 103062c0; body size 18 bytes.
#line 1 "ENTRY_103062c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103062c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  if ((undefined4 *)param_1[0x91f] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[0x91f])(1);
  }
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 103062e0; body size 5 bytes.
#line 1 "ENTRY_103062e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103062e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueBase);
  return;
}


// Reference entry 103062f0; body size 7 bytes.
#line 1 "ENTRY_103062f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103062f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportUploaderClient);
  return;
}


// Reference entry 10306810; body size 14 bytes.
#line 1 "ENTRY_10306810"

bool __thiscall Recovered_Bulk::m_FUN_10306810(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10306830; body size 14 bytes.
#line 1 "ENTRY_10306830"

bool __thiscall Recovered_Bulk::m_FUN_10306830(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10306880; body size 7 bytes.
#line 1 "ENTRY_10306880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10306880(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10306890; body size 6 bytes.
#line 1 "ENTRY_10306890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10306890(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 103068a0; body size 6 bytes.
#line 1 "ENTRY_103068a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103068a0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 103068b0; body size 9 bytes.
#line 1 "ENTRY_103068b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103068b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 103068c0; body size 9 bytes.
#line 1 "ENTRY_103068c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103068c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 103068d0; body size 10 bytes.
#line 1 "ENTRY_103068d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103068d0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10306950; body size 16 bytes.
#line 1 "ENTRY_10306950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10306950(SCStr *param_1,SCStr *param_2)

{
  ((SCStr *)(param_1))->op_lt(param_2);
  return;
}


// Reference entry 10306e90; body size 54 bytes.
#line 1 "ENTRY_10306e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10306e90(uint *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = (void *)(operator_new(0x104f), 0);
  if ((void *)(pvVar1) != (void *)(0x0)) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void**)(uVar2 - 4) = (void *)(pvVar1);
    *(uint*)uVar2 = (uint)((uint)(uVar2));
    *(uint*)(uVar2 + 4) = (uint)(uVar2);
    *(uint*)(uVar2 + 8) = (uint)(uVar2);
    *(undefined2*)(uVar2 + 0xc) = (undefined2)(0x101);
    *param_1 = (uint)(uVar2);
    return;
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 10306ee0; body size 22 bytes.
#line 1 "ENTRY_10306ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10306ee0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10307080; body size 14 bytes.
#line 1 "ENTRY_10307080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10307080(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xfd477) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 103070a0; body size 20 bytes.
#line 1 "ENTRY_103070a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103070a0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 103070c0; body size 67 bytes.
#line 1 "ENTRY_103070c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103070c0(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(uint)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) +
                 (double)(uint)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10307280; body size 8 bytes.
#line 1 "ENTRY_10307280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10307280(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10307290; body size 50 bytes.
#line 1 "ENTRY_10307290"

undefined4 __thiscall Recovered_Bulk::m_FUN_10307290(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 uVar1;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_2);
  ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                *)&uStack_4))->op_inc();
  uVar1 = (undefined4)(thunk_FUN_103072d0(param_2), 0);
  thunk_FUN_101f4270(param_1,uVar1);
  return (undefined4)(uStack_4);
}


// Reference entry 10307860; body size 3 bytes.
#line 1 "ENTRY_10307860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10307860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10307870; body size 3 bytes.
#line 1 "ENTRY_10307870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10307870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10307880; body size 3 bytes.
#line 1 "ENTRY_10307880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10307880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10307890; body size 3 bytes.
#line 1 "ENTRY_10307890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10307890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103078a0; body size 3 bytes.
#line 1 "ENTRY_103078a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103078a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103078b0; body size 3 bytes.
#line 1 "ENTRY_103078b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103078b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103078c0; body size 3 bytes.
#line 1 "ENTRY_103078c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103078c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103078d0; body size 3 bytes.
#line 1 "ENTRY_103078d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103078d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103078e0; body size 3 bytes.
#line 1 "ENTRY_103078e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103078e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103078f0; body size 3 bytes.
#line 1 "ENTRY_103078f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103078f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10307900; body size 3 bytes.
#line 1 "ENTRY_10307900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10307900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10307910; body size 4 bytes.
#line 1 "ENTRY_10307910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10307910(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10307920; body size 92 bytes.
#line 1 "ENTRY_10307920"

int * __thiscall Recovered_Bulk::m_FUN_10307920(uint param_2,int param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_3 + 4), 0);
  *(int*)(param_1 + 0x10) = (int)(*(int *)(param_1 + 0x10) + 1);
  *param_4 = (int)(param_3);
  param_4[1] = (int)((int)puVar2);
  *puVar2 = (undefined4)(param_4);
  *(int**)(param_3 + 4) = (int *)(param_4);
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0x14) + (*(uint *)(param_1 + 0x20) & param_2) * 8));
  if ((int)(*piVar1) == *(int *)(param_1 + 0xc)) {
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


// Reference entry 10307c30; body size 7 bytes.
#line 1 "ENTRY_10307c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10307c30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10307ce0; body size 4 bytes.
#line 1 "ENTRY_10307ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10307ce0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10307cf0; body size 4 bytes.
#line 1 "ENTRY_10307cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10307cf0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10307d90; body size 3 bytes.
#line 1 "ENTRY_10307d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10307d90(void)

{
  return;
}


// Reference entry 10307da0; body size 3 bytes.
#line 1 "ENTRY_10307da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10307da0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10307e60; body size 11 bytes.
#line 1 "ENTRY_10307e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10307e60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10307e70; body size 11 bytes.
#line 1 "ENTRY_10307e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10307e70(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10307e80; body size 8 bytes.
#line 1 "ENTRY_10307e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10307e80(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10307e90; body size 6 bytes.
#line 1 "ENTRY_10307e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10307e90(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10307f10; body size 10 bytes.
#line 1 "ENTRY_10307f10"

void __thiscall Recovered_Bulk::m_FUN_10307f10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10307ff0; body size 14 bytes.
#line 1 "ENTRY_10307ff0"

void __thiscall Recovered_Bulk::m_FUN_10307ff0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10308010; body size 13 bytes.
#line 1 "ENTRY_10308010"

void __thiscall Recovered_Bulk::m_FUN_10308010(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10308020; body size 12 bytes.
#line 1 "ENTRY_10308020"

void __thiscall Recovered_Bulk::m_FUN_10308020(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10308030; body size 11 bytes.
#line 1 "ENTRY_10308030"

void __thiscall Recovered_Bulk::m_FUN_10308030(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10308040; body size 43 bytes.
#line 1 "ENTRY_10308040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10308040(int param_1,int param_2,int param_3)

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


// Reference entry 10308080; body size 11 bytes.
#line 1 "ENTRY_10308080"

void __thiscall Recovered_Bulk::m_FUN_10308080(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103089f0; body size 87 bytes.
#line 1 "ENTRY_103089f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103089f0(uint param_1)

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


// Reference entry 10308a60; body size 90 bytes.
#line 1 "ENTRY_10308a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10308a60(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xfd478) {
    param_1 = (uint)(param_1 * 0x102c);
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


// Reference entry 10308ae0; body size 87 bytes.
#line 1 "ENTRY_10308ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10308ae0(uint param_1)

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


// Reference entry 10308b50; body size 19 bytes.
#line 1 "ENTRY_10308b50"

uint __thiscall Recovered_Bulk::m_FUN_10308b50(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_101a3180(param_2), 0);
  return (uint)(uVar1 & *(uint *)(param_1 + 0x20));
}


// Reference entry 10308b70; body size 4 bytes.
#line 1 "ENTRY_10308b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10308b70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10308d00; body size 68 bytes.
#line 1 "ENTRY_10308d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10308d00(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10304120(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10304a70(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10309100; body size 54 bytes.
#line 1 "ENTRY_10309100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10309100(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10309150; body size 57 bytes.
#line 1 "ENTRY_10309150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10309150(int param_1,int param_2)

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


// Reference entry 103091a0; body size 58 bytes.
#line 1 "ENTRY_103091a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103091a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x102c);
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


// Reference entry 103091f0; body size 61 bytes.
#line 1 "ENTRY_103091f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103091f0(int param_1,int param_2)

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


// Reference entry 10309790; body size 11 bytes.
#line 1 "ENTRY_10309790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10309790(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x54))(), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 10309800; body size 7 bytes.
#line 1 "ENTRY_10309800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10309800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10309810; body size 68 bytes.
#line 1 "ENTRY_10309810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10309810(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_FUN_112af4e0("SCReportManager",2,"Kicking off event upload");
  iVar1 = (int)(thunk_FUN_1109f7f0(), 0);
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_1109f750(), 0);
    thunk_FUN_11278b20(uVar2);
  }
  (**(code **)(**(int **)(param_1 + 0xa4) + 4))(LAB_1001a01e,0);
  return;
}


// Reference entry 103099b0; body size 4 bytes.
#line 1 "ENTRY_103099b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_103099b0(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 103099c0; body size 6 bytes.
#line 1 "ENTRY_103099c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103099c0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 103099d0; body size 6 bytes.
#line 1 "ENTRY_103099d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103099d0(void)

{
  return (undefined4)(0xfd477);
}


// Reference entry 103099e0; body size 6 bytes.
#line 1 "ENTRY_103099e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103099e0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 103099f0; body size 6 bytes.
#line 1 "ENTRY_103099f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103099f0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10309a00; body size 6 bytes.
#line 1 "ENTRY_10309a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10309a00(void)

{
  return (undefined4)(0xfd477);
}


// Reference entry 10309a10; body size 6 bytes.
#line 1 "ENTRY_10309a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10309a10(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 1030b2c0; body size 5 bytes.
#line 1 "ENTRY_1030b2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030b2c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030b2f0; body size 24 bytes.
#line 1 "ENTRY_1030b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1030b2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1030b310; body size 24 bytes.
#line 1 "ENTRY_1030b310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1030b310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1030b7c0; body size 9 bytes.
#line 1 "ENTRY_1030b7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1030b7c0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 1030bb00; body size 21 bytes.
#line 1 "ENTRY_1030bb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030bb00(void)

{
  thunk_FUN_10309870(0);
  thunk_FUN_1030b1f0(0);
  return;
}


// Reference entry 1030c1f0; body size 39 bytes.
#line 1 "ENTRY_1030c1f0"

void __thiscall Recovered_Bulk::m_FUN_1030c1f0(int param_2,int param_3)
{
  int param_1 = (int )this;
  if (((int)(param_2) != *(int *)(param_1 + 0x16c)) || ((int)(param_3) != *(int *)(param_1 + 0x170))) {
    *(int*)(param_1 + 0x16c) = (int)(param_2);
    *(int*)(param_1 + 0x170) = (int)(param_3);
  }
  return;
}


// Reference entry 1030c920; body size 22 bytes.
#line 1 "ENTRY_1030c920"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030c920(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cb30; body size 11 bytes.
#line 1 "ENTRY_1030cb30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030cb30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cb40; body size 11 bytes.
#line 1 "ENTRY_1030cb40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030cb40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cd60; body size 18 bytes.
#line 1 "ENTRY_1030cd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030cd60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cd80; body size 25 bytes.
#line 1 "ENTRY_1030cd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030cd80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cda0; body size 25 bytes.
#line 1 "ENTRY_1030cda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030cda0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cdc0; body size 18 bytes.
#line 1 "ENTRY_1030cdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030cdc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cde0; body size 25 bytes.
#line 1 "ENTRY_1030cde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030cde0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ce00; body size 25 bytes.
#line 1 "ENTRY_1030ce00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030ce00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ce20; body size 18 bytes.
#line 1 "ENTRY_1030ce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030ce20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ce40; body size 25 bytes.
#line 1 "ENTRY_1030ce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030ce40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ce60; body size 25 bytes.
#line 1 "ENTRY_1030ce60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030ce60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ce80; body size 13 bytes.
#line 1 "ENTRY_1030ce80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ce80(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ce90; body size 13 bytes.
#line 1 "ENTRY_1030ce90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ce90(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cea0; body size 13 bytes.
#line 1 "ENTRY_1030cea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030cea0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ceb0; body size 22 bytes.
#line 1 "ENTRY_1030ceb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ceb0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ced0; body size 5 bytes.
#line 1 "ENTRY_1030ced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1030ced0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030cee0; body size 5 bytes.
#line 1 "ENTRY_1030cee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1030cee0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030cef0; body size 5 bytes.
#line 1 "ENTRY_1030cef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1030cef0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030cf00; body size 5 bytes.
#line 1 "ENTRY_1030cf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1030cf00(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030cf10; body size 5 bytes.
#line 1 "ENTRY_1030cf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1030cf10(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030cf20; body size 5 bytes.
#line 1 "ENTRY_1030cf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1030cf20(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030cf30; body size 11 bytes.
#line 1 "ENTRY_1030cf30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030cf30(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cf40; body size 13 bytes.
#line 1 "ENTRY_1030cf40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030cf40(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cf50; body size 13 bytes.
#line 1 "ENTRY_1030cf50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030cf50(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cf60; body size 13 bytes.
#line 1 "ENTRY_1030cf60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030cf60(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cf70; body size 22 bytes.
#line 1 "ENTRY_1030cf70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030cf70(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1030cf90; body size 22 bytes.
#line 1 "ENTRY_1030cf90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1030cf90(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1030d120; body size 57 bytes.
#line 1 "ENTRY_1030d120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_1030d120(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2])
          * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 1030d170; body size 18 bytes.
#line 1 "ENTRY_1030d170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_1030d170(int *param_1,int *param_2)

{
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1030d190; body size 57 bytes.
#line 1 "ENTRY_1030d190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_1030d190(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2])
          * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 1030d1e0; body size 18 bytes.
#line 1 "ENTRY_1030d1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_1030d1e0(int *param_1,int *param_2)

{
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1030d200; body size 57 bytes.
#line 1 "ENTRY_1030d200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_1030d200(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2])
          * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 1030d250; body size 18 bytes.
#line 1 "ENTRY_1030d250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_1030d250(int *param_1,int *param_2)

{
  return (bool)(*param_1 != (int)(*(param_2)));
}


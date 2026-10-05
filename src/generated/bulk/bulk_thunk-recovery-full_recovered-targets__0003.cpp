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
namespace std { template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xlength_error(A...); typedef int _Iterator_base0; }
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int format(A...); template<class... A> int hash(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AnacapaLauncher { char _pad; AnacapaLauncher(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AnacapaRun { char _pad; AnacapaRun(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Bundle { char _pad; Bundle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Cert { char _pad; Cert(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Command { char _pad; Command(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Info { char _pad; Info(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Root { char _pad; Root(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCICompositeSearchable { char _pad; SCICompositeSearchable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDirectControlApplication { char _pad; SCIDirectControlApplication(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCILandingPage { char _pad; SCILandingPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCILandingPageSection { char _pad; SCILandingPageSection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCILandingPageTile { char _pad; SCILandingPageTile(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCILocalMusicBrowseItemInfo { char _pad; SCILocalMusicBrowseItemInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCILogging { char _pad; SCILogging(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIMusicServiceMenu { char _pad; SCIMusicServiceMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINetstartScanListEntry { char _pad; SCINetstartScanListEntry(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINewWizManager { char _pad; SCINewWizManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpNetstartGetScanList { char _pad; SCIOpNetstartGetScanList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpNetstartSendRevert { char _pad; SCIOpNetstartSendRevert(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIRecurrence { char _pad; SCIRecurrence(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIResourceHelper { char _pad; SCIResourceHelper(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISearchable { char _pad; SCISearchable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISearchableCategory { char _pad; SCISearchableCategory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISeekableStream { char _pad; SCISeekableStream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISonarCalibrationManager { char _pad; SCISonarCalibrationManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIStream { char _pad; SCIStream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISystemStatus { char _pad; SCISystemStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISystemStatusManager { char _pad; SCISystemStatusManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISystemTime { char _pad; SCISystemTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCITrackInfo { char _pad; SCITrackInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct StartAnacapa { char _pad; StartAnacapa(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UNK_1188cfec { char _pad; UNK_1188cfec(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UNK_1188d034 { char _pad; UNK_1188d034(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
extern "C" void LAB_100019d8(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000f178(void);
extern "C" void LAB_10011c9d(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10015370(void);
extern "C" void LAB_10017d50(void);
extern "C" void LAB_10019146(void);
extern "C" void LAB_10019d3a(void);
extern "C" void LAB_1001e9bb(void);
extern "C" void LAB_1001ec63(void);
extern "C" void LAB_1001f834(void);
extern "C" void LAB_10020aae(void);
extern "C" void LAB_10022976(void);
extern "C" void LAB_1002385d(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_100240aa(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_10026b7f(void);
extern "C" void LAB_10026c47(void);
extern "C" void LAB_10027228(void);
extern "C" void LAB_1002a171(void);
extern "C" void LAB_1002c962(void);
extern "C" void LAB_1002ca7f(void);
extern "C" void LAB_1002d6d2(void);
extern "C" void LAB_1002dcc7(void);
extern "C" void LAB_1002e5b9(void);
extern "C" void LAB_100367b4(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100384a1(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003b94e(void);
extern "C" void LAB_100412b8(void);
extern "C" void LAB_1004458a(void);
extern "C" void LAB_10048f77(void);
extern "C" void LAB_10049819(void);
extern "C" void LAB_1004a467(void);
extern "C" void LAB_1004d428(void);
extern "C" void LAB_1004e305(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10054043(void);
extern "C" void LAB_1005907a(void);
extern "C" void LAB_100593f9(void);
extern "C" void LAB_10059c19(void);
extern "C" void LAB_1005a71d(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_10063fac(void);
extern "C" void LAB_10067c8d(void);
extern "C" void LAB_100685a2(void);
extern "C" void LAB_100685ac(void);
extern "C" void LAB_1006f618(void);
extern "C" void LAB_1006fd4d(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_10071e4a(void);
extern "C" void LAB_10076463(void);
extern "C" void LAB_1007f586(void);
extern "C" void LAB_1007f9f5(void);
extern "C" void LAB_10080f30(void);
extern "C" void LAB_10084e46(void);
extern "C" void LAB_10088ce9(void);
extern "C" void LAB_1008c34e(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_10093bf3(void);
extern "C" void LAB_100974d3(void);
extern "C" void LAB_10273f70(void);
extern "C" void LAB_10277221(void);
extern "C" void LAB_10279f7e(void);
extern "C" void LAB_10279f94(void);
extern "C" void LAB_10279f99(void);
extern "C" void LAB_10279f9d(void);
extern "C" void LAB_10280dd4(void);
extern "C" void LAB_1029e7b8(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148ce0b(void);
extern "C" void LAB_11519b75(void);
extern "C" void LAB_1151cecf(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1187b4f4(void);
extern "C" void LAB_1187b514(void);
extern "C" void LAB_1187b640(void);
extern "C" void LAB_1187d878(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_1188b94c(void);
extern "C" void LAB_1188b9e4(void);
extern "C" void LAB_1188ba64(void);
extern "C" void LAB_1188bc9c(void);
extern "C" void LAB_1188bca4(void);
extern "C" void LAB_1188bcb0(void);
extern "C" void LAB_1188be0c(void);
extern "C" void LAB_1188be40(void);
extern "C" void LAB_1188bed8(void);
extern "C" void LAB_1188bfc8(void);
extern "C" void LAB_1188c090(void);
extern "C" void LAB_1188c15c(void);
extern "C" void LAB_1188c214(void);
extern "C" void LAB_1188c478(void);
extern "C" void LAB_1188c488(void);
extern "C" void LAB_1188c538(void);
extern "C" void LAB_1188c680(void);
extern "C" void LAB_1188ceb0(void);
extern "C" void LAB_1188cfe8(void);
extern "C" void LAB_1188cfec(void);
extern "C" void LAB_1188cff0(void);
extern "C" void LAB_1188d004(void);
extern "C" void LAB_1188d008(void);
extern "C" void LAB_1188d018(void);
extern "C" void LAB_1188d02c(void);
extern "C" void LAB_1188d034(void);
extern "C" void LAB_1188d1b8(void);
extern "C" void LAB_1188d224(void);
extern "C" void LAB_1188d4e0(void);
extern "C" void LAB_1188d770(void);
extern "C" void LAB_1188d854(void);
extern "C" void LAB_1188dae8(void);
extern "C" void LAB_1188db30(void);
extern "C" void LAB_1188dbb0(void);
extern "C" void LAB_1188dd9c(void);
extern "C" void LAB_1188dde4(void);
extern "C" void LAB_1188de78(void);
extern "C" void LAB_1188de84(void);
extern "C" void LAB_1188ded8(void);
extern "C" void LAB_1188df50(void);
extern "C" void LAB_1188e094(void);
extern "C" void LAB_1188e0ec(void);
extern "C" void LAB_1188e12c(void);
extern "C" void LAB_1188e148(void);
extern "C" void LAB_1188e168(void);
extern "C" void LAB_1188e188(void);
extern "C" void LAB_1188e2d0(void);
extern "C" void LAB_1188e34c(void);
extern "C" void LAB_1188e3c8(void);
extern "C" void LAB_1188e3e0(void);
extern "C" void LAB_1188e488(void);
extern "C" void LAB_1188e4dc(void);
extern "C" void LAB_1188e57c(void);
extern "C" void LAB_1188eb20(void);
extern "C" void LAB_1188edd4(void);
extern "C" void LAB_1188ef34(void);
extern "C" void LAB_1188f0c8(void);
extern "C" void LAB_12119348(void);
extern "C" void LAB_1211934c(void);
extern "C" void LAB_12119350(void);
extern "C" void LAB_12119354(void);
extern "C" void LAB_12119358(void);
extern "C" void LAB_1211935c(void);
extern "C" void LAB_12119360(void);
extern "C" void LAB_12119364(void);
extern "C" void LAB_12119368(void);
extern "C" void LAB_1211936c(void);
extern "C" void LAB_12119370(void);
extern "C" void LAB_12119374(void);
extern "C" void LAB_12119378(void);
extern "C" void LAB_1211937c(void);
extern "C" void LAB_12119380(void);
extern "C" void LAB_12119384(void);
extern "C" void LAB_12119388(void);
extern "C" void LAB_1211938c(void);
extern "C" void LAB_12119390(void);
extern "C" void LAB_12119394(void);
extern "C" void LAB_12119398(void);
extern "C" void LAB_1211939c(void);
extern "C" void LAB_121193a0(void);
extern "C" void LAB_121193a4(void);
extern "C" void LAB_121193a8(void);
extern "C" void LAB_121193ac(void);
extern "C" void LAB_121193b0(void);
extern "C" void LAB_121193b4(void);
extern "C" void LAB_121193b8(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0b38(void);
extern "C" void LAB_121a0be0(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a2778(void);
extern "C" void LAB_122fc6ac(void);
extern "C" void LAB_122fc888(void);

extern "C" void LAB_100019d8(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000f178(void);
extern "C" void LAB_10011c9d(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10015370(void);
extern "C" void LAB_10017d50(void);
extern "C" void LAB_10019146(void);
extern "C" void LAB_10019d3a(void);
extern "C" void LAB_1001e9bb(void);
extern "C" void LAB_1001ec63(void);
extern "C" void LAB_1001f834(void);
extern "C" void LAB_10020aae(void);
extern "C" void LAB_10022976(void);
extern "C" void LAB_1002385d(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_100240aa(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_10026b7f(void);
extern "C" void LAB_10026c47(void);
extern "C" void LAB_10027228(void);
extern "C" void LAB_1002a171(void);
extern "C" void LAB_1002c962(void);
extern "C" void LAB_1002ca7f(void);
extern "C" void LAB_1002d6d2(void);
extern "C" void LAB_1002dcc7(void);
extern "C" void LAB_1002e5b9(void);
extern "C" void LAB_100367b4(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100384a1(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003b94e(void);
extern "C" void LAB_100412b8(void);
extern "C" void LAB_1004458a(void);
extern "C" void LAB_10048f77(void);
extern "C" void LAB_10049819(void);
extern "C" void LAB_1004a467(void);
extern "C" void LAB_1004d428(void);
extern "C" void LAB_1004e305(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10054043(void);
extern "C" void LAB_1005907a(void);
extern "C" void LAB_100593f9(void);
extern "C" void LAB_10059c19(void);
extern "C" void LAB_1005a71d(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_10063fac(void);
extern "C" void LAB_10067c8d(void);
extern "C" void LAB_100685a2(void);
extern "C" void LAB_100685ac(void);
extern "C" void LAB_1006f618(void);
extern "C" void LAB_1006fd4d(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_10071e4a(void);
extern "C" void LAB_10076463(void);
extern "C" void LAB_1007f586(void);
extern "C" void LAB_1007f9f5(void);
extern "C" void LAB_10080f30(void);
extern "C" void LAB_10084e46(void);
extern "C" void LAB_10088ce9(void);
extern "C" void LAB_1008c34e(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_10093bf3(void);
extern "C" void LAB_100974d3(void);
extern "C" void LAB_10273f70(void);
extern "C" void LAB_10277221(void);
extern "C" void LAB_10279f7e(void);
extern "C" void LAB_10279f94(void);
extern "C" void LAB_10279f99(void);
extern "C" void LAB_10279f9d(void);
extern "C" void LAB_10280dd4(void);
extern "C" void LAB_1029e7b8(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148ce0b(void);
extern "C" void LAB_11519b75(void);
extern "C" void LAB_1151cecf(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1187b4f4(void);
extern "C" void LAB_1187b514(void);
extern "C" void LAB_1187b640(void);
extern "C" void LAB_1187d878(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_1188b94c(void);
extern "C" void LAB_1188b9e4(void);
extern "C" void LAB_1188ba64(void);
extern "C" void LAB_1188bc9c(void);
extern "C" void LAB_1188bca4(void);
extern "C" void LAB_1188bcb0(void);
extern "C" void LAB_1188be0c(void);
extern "C" void LAB_1188be40(void);
extern "C" void LAB_1188bed8(void);
extern "C" void LAB_1188bfc8(void);
extern "C" void LAB_1188c090(void);
extern "C" void LAB_1188c15c(void);
extern "C" void LAB_1188c214(void);
extern "C" void LAB_1188c478(void);
extern "C" void LAB_1188c488(void);
extern "C" void LAB_1188c538(void);
extern "C" void LAB_1188c680(void);
extern "C" void LAB_1188ceb0(void);
extern "C" void LAB_1188cfe8(void);
extern "C" void LAB_1188cfec(void);
extern "C" void LAB_1188cff0(void);
extern "C" void LAB_1188d004(void);
extern "C" void LAB_1188d008(void);
extern "C" void LAB_1188d018(void);
extern "C" void LAB_1188d02c(void);
extern "C" void LAB_1188d034(void);
extern "C" void LAB_1188d1b8(void);
extern "C" void LAB_1188d224(void);
extern "C" void LAB_1188d4e0(void);
extern "C" void LAB_1188d770(void);
extern "C" void LAB_1188d854(void);
extern "C" void LAB_1188dae8(void);
extern "C" void LAB_1188db30(void);
extern "C" void LAB_1188dbb0(void);
extern "C" void LAB_1188dd9c(void);
extern "C" void LAB_1188dde4(void);
extern "C" void LAB_1188de78(void);
extern "C" void LAB_1188de84(void);
extern "C" void LAB_1188ded8(void);
extern "C" void LAB_1188df50(void);
extern "C" void LAB_1188e094(void);
extern "C" void LAB_1188e0ec(void);
extern "C" void LAB_1188e12c(void);
extern "C" void LAB_1188e148(void);
extern "C" void LAB_1188e168(void);
extern "C" void LAB_1188e188(void);
extern "C" void LAB_1188e2d0(void);
extern "C" void LAB_1188e34c(void);
extern "C" void LAB_1188e3c8(void);
extern "C" void LAB_1188e3e0(void);
extern "C" void LAB_1188e488(void);
extern "C" void LAB_1188e4dc(void);
extern "C" void LAB_1188e57c(void);
extern "C" void LAB_1188eb20(void);
extern "C" void LAB_1188edd4(void);
extern "C" void LAB_1188ef34(void);
extern "C" void LAB_1188f0c8(void);
extern "C" void LAB_12119348(void);
extern "C" void LAB_1211934c(void);
extern "C" void LAB_12119350(void);
extern "C" void LAB_12119354(void);
extern "C" void LAB_12119358(void);
extern "C" void LAB_1211935c(void);
extern "C" void LAB_12119360(void);
extern "C" void LAB_12119364(void);
extern "C" void LAB_12119368(void);
extern "C" void LAB_1211936c(void);
extern "C" void LAB_12119370(void);
extern "C" void LAB_12119374(void);
extern "C" void LAB_12119378(void);
extern "C" void LAB_1211937c(void);
extern "C" void LAB_12119380(void);
extern "C" void LAB_12119384(void);
extern "C" void LAB_12119388(void);
extern "C" void LAB_1211938c(void);
extern "C" void LAB_12119390(void);
extern "C" void LAB_12119394(void);
extern "C" void LAB_12119398(void);
extern "C" void LAB_1211939c(void);
extern "C" void LAB_121193a0(void);
extern "C" void LAB_121193a4(void);
extern "C" void LAB_121193a8(void);
extern "C" void LAB_121193ac(void);
extern "C" void LAB_121193b0(void);
extern "C" void LAB_121193b4(void);
extern "C" void LAB_121193b8(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0b38(void);
extern "C" void LAB_121a0be0(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a2778(void);
extern "C" void LAB_122fc6ac(void);
extern "C" void LAB_122fc888(void);

extern "C" void LAB_100019d8(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000f178(void);
extern "C" void LAB_10011c9d(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10015370(void);
extern "C" void LAB_10017d50(void);
extern "C" void LAB_10019146(void);
extern "C" void LAB_10019d3a(void);
extern "C" void LAB_1001e9bb(void);
extern "C" void LAB_1001ec63(void);
extern "C" void LAB_1001f834(void);
extern "C" void LAB_10020aae(void);
extern "C" void LAB_10022976(void);
extern "C" void LAB_1002385d(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_100240aa(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_10026b7f(void);
extern "C" void LAB_10026c47(void);
extern "C" void LAB_10027228(void);
extern "C" void LAB_1002a171(void);
extern "C" void LAB_1002c962(void);
extern "C" void LAB_1002ca7f(void);
extern "C" void LAB_1002d6d2(void);
extern "C" void LAB_1002dcc7(void);
extern "C" void LAB_1002e5b9(void);
extern "C" void LAB_100367b4(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100384a1(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003b94e(void);
extern "C" void LAB_100412b8(void);
extern "C" void LAB_1004458a(void);
extern "C" void LAB_10048f77(void);
extern "C" void LAB_10049819(void);
extern "C" void LAB_1004a467(void);
extern "C" void LAB_1004d428(void);
extern "C" void LAB_1004e305(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10054043(void);
extern "C" void LAB_1005907a(void);
extern "C" void LAB_100593f9(void);
extern "C" void LAB_10059c19(void);
extern "C" void LAB_1005a71d(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_10063fac(void);
extern "C" void LAB_10067c8d(void);
extern "C" void LAB_100685a2(void);
extern "C" void LAB_100685ac(void);
extern "C" void LAB_1006f618(void);
extern "C" void LAB_1006fd4d(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_10071e4a(void);
extern "C" void LAB_10076463(void);
extern "C" void LAB_1007f586(void);
extern "C" void LAB_1007f9f5(void);
extern "C" void LAB_10080f30(void);
extern "C" void LAB_10084e46(void);
extern "C" void LAB_10088ce9(void);
extern "C" void LAB_1008c34e(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_10093bf3(void);
extern "C" void LAB_100974d3(void);
extern "C" void LAB_10273f70(void);
extern "C" void LAB_10277221(void);
extern "C" void LAB_10279f7e(void);
extern "C" void LAB_10279f94(void);
extern "C" void LAB_10279f99(void);
extern "C" void LAB_10279f9d(void);
extern "C" void LAB_10280dd4(void);
extern "C" void LAB_1029e7b8(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148ce0b(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1187b4f4(void);
extern "C" void LAB_1187b514(void);
extern "C" void LAB_1187b640(void);
extern "C" void LAB_1187d878(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_1188b94c(void);
extern "C" void LAB_1188b9e4(void);
extern "C" void LAB_1188ba64(void);
extern "C" void LAB_1188bc9c(void);
extern "C" void LAB_1188bca4(void);
extern "C" void LAB_1188bcb0(void);
extern "C" void LAB_1188be0c(void);
extern "C" void LAB_1188be40(void);
extern "C" void LAB_1188bed8(void);
extern "C" void LAB_1188bfc8(void);
extern "C" void LAB_1188c090(void);
extern "C" void LAB_1188c15c(void);
extern "C" void LAB_1188c214(void);
extern "C" void LAB_1188c478(void);
extern "C" void LAB_1188c488(void);
extern "C" void LAB_1188c538(void);
extern "C" void LAB_1188c680(void);
extern "C" void LAB_1188ceb0(void);
extern "C" void LAB_1188cfe8(void);
extern "C" void LAB_1188cfec(void);
extern "C" void LAB_1188cff0(void);
extern "C" void LAB_1188d004(void);
extern "C" void LAB_1188d008(void);
extern "C" void LAB_1188d018(void);
extern "C" void LAB_1188d02c(void);
extern "C" void LAB_1188d034(void);
extern "C" void LAB_1188d1b8(void);
extern "C" void LAB_1188d224(void);
extern "C" void LAB_1188d4e0(void);
extern "C" void LAB_1188d770(void);
extern "C" void LAB_1188d854(void);
extern "C" void LAB_1188dae8(void);
extern "C" void LAB_1188db30(void);
extern "C" void LAB_1188dbb0(void);
extern "C" void LAB_1188dd9c(void);
extern "C" void LAB_1188dde4(void);
extern "C" void LAB_1188de78(void);
extern "C" void LAB_1188de84(void);
extern "C" void LAB_1188ded8(void);
extern "C" void LAB_1188df50(void);
extern "C" void LAB_1188e094(void);
extern "C" void LAB_1188e0ec(void);
extern "C" void LAB_1188e12c(void);
extern "C" void LAB_1188e148(void);
extern "C" void LAB_1188e168(void);
extern "C" void LAB_1188e188(void);
extern "C" void LAB_1188e2d0(void);
extern "C" void LAB_1188e34c(void);
extern "C" void LAB_1188e3c8(void);
extern "C" void LAB_1188e3e0(void);
extern "C" void LAB_1188e488(void);
extern "C" void LAB_1188e4dc(void);
extern "C" void LAB_1188e57c(void);
extern "C" void LAB_1188eb20(void);
extern "C" void LAB_1188edd4(void);
extern "C" void LAB_1188ef34(void);
extern "C" void LAB_1188f0c8(void);
extern "C" void LAB_12119348(void);
extern "C" void LAB_1211934c(void);
extern "C" void LAB_12119350(void);
extern "C" void LAB_12119354(void);
extern "C" void LAB_12119358(void);
extern "C" void LAB_1211935c(void);
extern "C" void LAB_12119360(void);
extern "C" void LAB_12119364(void);
extern "C" void LAB_12119368(void);
extern "C" void LAB_1211936c(void);
extern "C" void LAB_12119370(void);
extern "C" void LAB_12119374(void);
extern "C" void LAB_12119378(void);
extern "C" void LAB_1211937c(void);
extern "C" void LAB_12119380(void);
extern "C" void LAB_12119384(void);
extern "C" void LAB_12119388(void);
extern "C" void LAB_1211938c(void);
extern "C" void LAB_12119390(void);
extern "C" void LAB_12119394(void);
extern "C" void LAB_12119398(void);
extern "C" void LAB_1211939c(void);
extern "C" void LAB_121193a0(void);
extern "C" void LAB_121193a4(void);
extern "C" void LAB_121193a8(void);
extern "C" void LAB_121193ac(void);
extern "C" void LAB_121193b0(void);
extern "C" void LAB_121193b4(void);
extern "C" void LAB_121193b8(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0b38(void);
extern "C" void LAB_121a0be0(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a2778(void);
extern "C" void LAB_122fc6ac(void);
extern "C" void LAB_122fc888(void);


extern "C" void FUN_10084e46(void);

struct Recovered_Bulk { char _pad; int * __thiscall m_FUN_102636d0(int *param_2); template<class... A> int m_FUN_102636d0(A...); int * __thiscall m_FUN_102637f0(int *param_2); template<class... A> int m_FUN_102637f0(A...); int * __thiscall m_FUN_10263860(int *param_2); template<class... A> int m_FUN_10263860(A...); void __thiscall m_FUN_10263b90(undefined4 *param_2); template<class... A> int m_FUN_10263b90(A...); void __thiscall m_FUN_10263bc0(undefined4 *param_2); template<class... A> int m_FUN_10263bc0(A...); void __thiscall m_FUN_10263bf0(undefined4 *param_2); template<class... A> int m_FUN_10263bf0(A...); void __thiscall m_FUN_10263c20(undefined4 *param_2); template<class... A> int m_FUN_10263c20(A...); void __thiscall m_FUN_10263c50(undefined4 *param_2); template<class... A> int m_FUN_10263c50(A...); void __thiscall m_FUN_10263c80(undefined4 *param_2); template<class... A> int m_FUN_10263c80(A...); undefined4 * __thiscall m_FUN_10265810(undefined4 *param_2); template<class... A> int m_FUN_10265810(A...); undefined4 * __thiscall m_FUN_10265880(undefined4 *param_2); template<class... A> int m_FUN_10265880(A...); undefined4 * __thiscall m_FUN_10265930(undefined4 *param_2); template<class... A> int m_FUN_10265930(A...); undefined4 * __thiscall m_FUN_10265a20(undefined4 param_2); template<class... A> int m_FUN_10265a20(A...); undefined4 * __thiscall m_FUN_10265aa0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10265aa0(A...); undefined4 * __thiscall m_FUN_10265b30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10265b30(A...); undefined4 * __thiscall m_FUN_10265b60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10265b60(A...); undefined4 * __thiscall m_FUN_10265b80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10265b80(A...); undefined4 * __thiscall m_FUN_10265c10(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10265c10(A...); SCStr * __thiscall m_FUN_10265db0(SCStr *param_2); template<class... A> int m_FUN_10265db0(A...); bool __thiscall m_FUN_10267650(int *param_2); template<class... A> int m_FUN_10267650(A...); int __thiscall m_FUN_10267670(int param_2); template<class... A> int m_FUN_10267670(A...); int __thiscall m_FUN_10267680(int param_2); template<class... A> int m_FUN_10267680(A...); uint __thiscall m_FUN_10268380(uint param_2); template<class... A> int m_FUN_10268380(A...); uint __thiscall m_FUN_102683c0(uint param_2); template<class... A> int m_FUN_102683c0(A...); void __thiscall m_FUN_10268c20(int param_2); template<class... A> int m_FUN_10268c20(A...); void __thiscall m_FUN_10268d90(int *param_2); template<class... A> int m_FUN_10268d90(A...); void __thiscall m_FUN_1026af60(undefined4 *param_2); template<class... A> int m_FUN_1026af60(A...); void __thiscall m_FUN_1026d540(SCStr *param_2); template<class... A> int m_FUN_1026d540(A...); void __thiscall m_FUN_1026d570(SCStr *param_2); template<class... A> int m_FUN_1026d570(A...); void __thiscall m_FUN_1026d5a0(SCStr *param_2); template<class... A> int m_FUN_1026d5a0(A...); void __thiscall m_FUN_1026d5d0(SCStr *param_2); template<class... A> int m_FUN_1026d5d0(A...); void __thiscall m_FUN_1026d600(SCStr *param_2); template<class... A> int m_FUN_1026d600(A...); void __thiscall m_FUN_1026d630(undefined1 param_2); template<class... A> int m_FUN_1026d630(A...); void __thiscall m_FUN_1026d640(SCStr *param_2); template<class... A> int m_FUN_1026d640(A...); void __thiscall m_FUN_1026d670(SCStr *param_2); template<class... A> int m_FUN_1026d670(A...); void __thiscall m_FUN_1026d6a0(SCStr *param_2); template<class... A> int m_FUN_1026d6a0(A...); void __thiscall m_FUN_1026d6d0(SCStr *param_2); template<class... A> int m_FUN_1026d6d0(A...); void __thiscall m_FUN_1026d700(SCStr *param_2); template<class... A> int m_FUN_1026d700(A...); void __thiscall m_FUN_1026d730(SCStr *param_2); template<class... A> int m_FUN_1026d730(A...); undefined4 * __thiscall m_FUN_1026d7e0(undefined4 *param_2); template<class... A> int m_FUN_1026d7e0(A...); int * __thiscall m_FUN_1026d800(int *param_2); template<class... A> int m_FUN_1026d800(A...); undefined4 * __thiscall m_FUN_1026e2d0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_1026e2d0(A...); int * __thiscall m_FUN_1026e380(int *param_2); template<class... A> int m_FUN_1026e380(A...); int * __thiscall m_FUN_1026e4a0(int *param_2); template<class... A> int m_FUN_1026e4a0(A...); void __thiscall m_FUN_1026e5f0(undefined4 *param_2); template<class... A> int m_FUN_1026e5f0(A...); undefined4 * __thiscall m_FUN_1026f140(undefined4 *param_2); template<class... A> int m_FUN_1026f140(A...); undefined4 * __thiscall m_FUN_1026f200(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1026f200(A...); undefined4 * __thiscall m_FUN_1026f210(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1026f210(A...); undefined4 * __thiscall m_FUN_1026f2a0(undefined4 param_2); template<class... A> int m_FUN_1026f2a0(A...); int * __thiscall m_FUN_102701c0(int *param_2); template<class... A> int m_FUN_102701c0(A...); int __thiscall m_FUN_10270300(int param_2); template<class... A> int m_FUN_10270300(A...); void __thiscall m_FUN_10270650(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10270650(A...); void __thiscall m_FUN_10270ba0(int param_2); template<class... A> int m_FUN_10270ba0(A...); void __thiscall m_FUN_10270bc0(undefined4 param_2); template<class... A> int m_FUN_10270bc0(A...); void __thiscall m_FUN_10270bd0(undefined4 param_2); template<class... A> int m_FUN_10270bd0(A...); void __thiscall m_FUN_10270be0(undefined4 param_2); template<class... A> int m_FUN_10270be0(A...); void __thiscall m_FUN_10270ee0(undefined4 *param_2); template<class... A> int m_FUN_10270ee0(A...); void __thiscall m_FUN_10271290(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10271290(A...); int * __thiscall m_FUN_102720c0(int *param_2); template<class... A> int m_FUN_102720c0(A...); undefined4 * __thiscall m_FUN_102720e0(undefined4 *param_2); template<class... A> int m_FUN_102720e0(A...); int * __thiscall m_FUN_10272100(int *param_2); template<class... A> int m_FUN_10272100(A...); int * __thiscall m_FUN_10272120(int *param_2); template<class... A> int m_FUN_10272120(A...); int __thiscall m_FUN_10272910(int param_2,int param_3); template<class... A> int m_FUN_10272910(A...); void __thiscall m_FUN_10273070(undefined4 *param_2); template<class... A> int m_FUN_10273070(A...); void __thiscall m_FUN_10273130(undefined4 *param_2); template<class... A> int m_FUN_10273130(A...); void __thiscall m_FUN_10273160(undefined4 *param_2); template<class... A> int m_FUN_10273160(A...); void __thiscall m_FUN_10273870(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10273870(A...); undefined4 * __thiscall m_FUN_10274ab0(undefined4 *param_2); template<class... A> int m_FUN_10274ab0(A...); undefined4 * __thiscall m_FUN_10274b20(undefined4 *param_2); template<class... A> int m_FUN_10274b20(A...); undefined4 * __thiscall m_FUN_10274be0(undefined4 param_2); template<class... A> int m_FUN_10274be0(A...); undefined4 * __thiscall m_FUN_10274c00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10274c00(A...); undefined4 * __thiscall m_FUN_10274c20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10274c20(A...); undefined4 * __thiscall m_FUN_10274c40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10274c40(A...); undefined4 * __thiscall m_FUN_10274c50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10274c50(A...); undefined4 * __thiscall m_FUN_10274c60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10274c60(A...); undefined4 * __thiscall m_FUN_10274c70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10274c70(A...); undefined4 * __thiscall m_FUN_10274d60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10274d60(A...); undefined4 * __thiscall m_FUN_10274d80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10274d80(A...); undefined4 * __thiscall m_FUN_10274de0(undefined4 param_2); template<class... A> int m_FUN_10274de0(A...); int * __thiscall m_FUN_10275d70(int *param_2); template<class... A> int m_FUN_10275d70(A...); undefined4 * __thiscall m_FUN_10276090(undefined4 *param_2); template<class... A> int m_FUN_10276090(A...); undefined4 * __thiscall m_FUN_102760e0(undefined4 *param_2); template<class... A> int m_FUN_102760e0(A...); undefined4 * __thiscall m_FUN_10276110(undefined4 *param_2); template<class... A> int m_FUN_10276110(A...); bool __thiscall m_FUN_102762a0(int *param_2); template<class... A> int m_FUN_102762a0(A...); bool __thiscall m_FUN_102762c0(int *param_2); template<class... A> int m_FUN_102762c0(A...); int __thiscall m_FUN_102762e0(int param_2); template<class... A> int m_FUN_102762e0(A...); int __thiscall m_FUN_10276300(int param_2); template<class... A> int m_FUN_10276300(A...); void __thiscall m_FUN_10276690(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10276690(A...); void __thiscall m_FUN_10276de0(uint param_2); template<class... A> int m_FUN_10276de0(A...); void __thiscall m_FUN_10276e90(int param_2); template<class... A> int m_FUN_10276e90(A...); uint __thiscall m_FUN_10276ec0(uint param_2); template<class... A> int m_FUN_10276ec0(A...); uint __thiscall m_FUN_10276f10(uint param_2); template<class... A> int m_FUN_10276f10(A...); void __thiscall m_FUN_10277170(uint param_2); template<class... A> int m_FUN_10277170(A...); void __thiscall m_FUN_10277610(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10277610(A...); void __thiscall m_FUN_10277d30(int param_2); template<class... A> int m_FUN_10277d30(A...); void __thiscall m_FUN_10277d50(undefined4 param_2); template<class... A> int m_FUN_10277d50(A...); void __thiscall m_FUN_10277d60(undefined4 param_2); template<class... A> int m_FUN_10277d60(A...); void __thiscall m_FUN_10277d70(undefined4 param_2); template<class... A> int m_FUN_10277d70(A...); void __thiscall m_FUN_10277d80(undefined4 *param_2); template<class... A> int m_FUN_10277d80(A...); void __thiscall m_FUN_10278160(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10278160(A...); void __thiscall m_FUN_10278180(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10278180(A...); void __thiscall m_FUN_10278410(undefined4 *param_2); template<class... A> int m_FUN_10278410(A...); void __thiscall m_FUN_10278420(undefined4 *param_2); template<class... A> int m_FUN_10278420(A...); void __thiscall m_FUN_10278430(undefined4 *param_2); template<class... A> int m_FUN_10278430(A...); void __thiscall m_FUN_10278c60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10278c60(A...); void __thiscall m_FUN_10278cd0(undefined4 *param_2); template<class... A> int m_FUN_10278cd0(A...); void __thiscall m_FUN_10278ce0(undefined4 *param_2); template<class... A> int m_FUN_10278ce0(A...); int * __thiscall m_FUN_10278ef0(int *param_2,int param_3); template<class... A> int m_FUN_10278ef0(A...); void __thiscall m_FUN_10279910(int *param_2); template<class... A> int m_FUN_10279910(A...); int * __thiscall m_FUN_1027d820(int *param_2); template<class... A> int m_FUN_1027d820(A...); int * __thiscall m_FUN_1027d980(int *param_2); template<class... A> int m_FUN_1027d980(A...); int * __thiscall m_FUN_1027d9f0(int *param_2); template<class... A> int m_FUN_1027d9f0(A...); int * __thiscall m_FUN_1027da60(int *param_2); template<class... A> int m_FUN_1027da60(A...); undefined4 * __thiscall m_FUN_1027ec80(undefined4 param_2); template<class... A> int m_FUN_1027ec80(A...); undefined4 * __thiscall m_FUN_1027eca0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1027eca0(A...); undefined4 * __thiscall m_FUN_1027ef00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1027ef00(A...); undefined4 * __thiscall m_FUN_1027f3f0(undefined4 param_2); template<class... A> int m_FUN_1027f3f0(A...); int * __thiscall m_FUN_1027fba0(int *param_2); template<class... A> int m_FUN_1027fba0(A...); int * __thiscall m_FUN_1027fbf0(int *param_2); template<class... A> int m_FUN_1027fbf0(A...); undefined4 * __thiscall m_FUN_1027fc40(undefined4 *param_2); template<class... A> int m_FUN_1027fc40(A...); void __thiscall m_FUN_10280d30(uint param_2); template<class... A> int m_FUN_10280d30(A...); void __thiscall m_FUN_10282fe0(undefined4 *param_2); template<class... A> int m_FUN_10282fe0(A...); undefined4 * __thiscall m_FUN_102839a0(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_102839a0(A...); undefined4 * __thiscall m_FUN_102839c0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102839c0(A...); undefined4 * __thiscall m_FUN_10283ab0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10283ab0(A...); undefined4 * __thiscall m_FUN_10283af0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10283af0(A...); undefined4 * __thiscall m_FUN_10283c50(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_10283c50(A...); undefined4 * __thiscall m_FUN_10283ca0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_10283ca0(A...); int * __thiscall m_FUN_10283cd0(int *param_2); template<class... A> int m_FUN_10283cd0(A...); int * __thiscall m_FUN_10283cf0(int *param_2); template<class... A> int m_FUN_10283cf0(A...); void __thiscall m_FUN_10283e90(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10283e90(A...); void __thiscall m_FUN_102842c0(undefined4 *param_2); template<class... A> int m_FUN_102842c0(A...); void __thiscall m_FUN_102842f0(undefined4 *param_2); template<class... A> int m_FUN_102842f0(A...); void __thiscall m_FUN_10284320(undefined4 *param_2); template<class... A> int m_FUN_10284320(A...); void __thiscall m_FUN_10284350(undefined4 *param_2); template<class... A> int m_FUN_10284350(A...); void __thiscall m_FUN_102846c0(int *param_2,uint *param_3); template<class... A> int m_FUN_102846c0(A...); int * __thiscall m_FUN_10284860(int *param_2,uint *param_3); template<class... A> int m_FUN_10284860(A...); void __thiscall m_FUN_10284a70(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10284a70(A...); undefined4 * __thiscall m_FUN_102851d0(undefined4 *param_2); template<class... A> int m_FUN_102851d0(A...); undefined4 * __thiscall m_FUN_10285200(undefined4 *param_2); template<class... A> int m_FUN_10285200(A...); undefined4 * __thiscall m_FUN_10285310(undefined4 param_2); template<class... A> int m_FUN_10285310(A...); undefined4 * __thiscall m_FUN_10285370(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10285370(A...); undefined4 * __thiscall m_FUN_10285380(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10285380(A...); undefined4 * __thiscall m_FUN_10285440(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10285440(A...); undefined4 * __thiscall m_FUN_10285450(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10285450(A...); undefined4 * __thiscall m_FUN_10285480(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10285480(A...); undefined4 * __thiscall m_FUN_102854a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102854a0(A...); undefined4 * __thiscall m_FUN_102854b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102854b0(A...); undefined4 * __thiscall m_FUN_102854c0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_102854c0(A...); undefined4 * __thiscall m_FUN_102854e0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_102854e0(A...); SCStr * __thiscall m_FUN_10285540(SCStr *param_2); template<class... A> int m_FUN_10285540(A...); undefined4 * __thiscall m_FUN_102856e0(undefined4 *param_2); template<class... A> int m_FUN_102856e0(A...); undefined4 * __thiscall m_FUN_10285720(undefined4 *param_2); template<class... A> int m_FUN_10285720(A...); int * __thiscall m_FUN_10285df0(int *param_2); template<class... A> int m_FUN_10285df0(A...); bool __thiscall m_FUN_10285f30(int *param_2); template<class... A> int m_FUN_10285f30(A...); bool __thiscall m_FUN_10285f50(int *param_2); template<class... A> int m_FUN_10285f50(A...); bool __thiscall m_FUN_10285f70(int *param_2); template<class... A> int m_FUN_10285f70(A...); bool __thiscall m_FUN_10285fb0(int *param_2); template<class... A> int m_FUN_10285fb0(A...); undefined4 * __thiscall m_FUN_10286070(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10286070(A...); void __thiscall m_FUN_10286180(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10286180(A...); void __thiscall m_FUN_10286440(int param_2); template<class... A> int m_FUN_10286440(A...); uint __thiscall m_FUN_10286470(uint param_2); template<class... A> int m_FUN_10286470(A...); int __thiscall m_FUN_10286590(int param_2,int param_3); template<class... A> int m_FUN_10286590(A...); void __thiscall m_FUN_10286f20(undefined4 param_2); template<class... A> int m_FUN_10286f20(A...); void __thiscall m_FUN_10287050(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10287050(A...); void __thiscall m_FUN_10287070(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10287070(A...); void __thiscall m_FUN_10287090(undefined4 *param_2); template<class... A> int m_FUN_10287090(A...); void __thiscall m_FUN_102870a0(undefined4 *param_2); template<class... A> int m_FUN_102870a0(A...); void __thiscall m_FUN_10287230(undefined4 *param_2); template<class... A> int m_FUN_10287230(A...); void __thiscall m_FUN_102873a0(undefined4 *param_2); template<class... A> int m_FUN_102873a0(A...); undefined4 __thiscall m_FUN_10289c30(int param_2); template<class... A> int m_FUN_10289c30(A...); undefined4 * __thiscall m_FUN_1028b2b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1028b2b0(A...); undefined4 * __thiscall m_FUN_1028b2d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1028b2d0(A...); SCStr * __thiscall m_FUN_1028b4d0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1028b4d0(A...); undefined4 * __thiscall m_FUN_1028b500(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1028b500(A...); undefined4 * __thiscall m_FUN_1028b520(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1028b520(A...); undefined4 * __thiscall m_FUN_1028b560(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1028b560(A...); SCStr * __thiscall m_FUN_1028b6c0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_1028b6c0(A...); int * __thiscall m_FUN_1028b770(int *param_2); template<class... A> int m_FUN_1028b770(A...); undefined4 * __thiscall m_FUN_1028b7f0(undefined4 *param_2); template<class... A> int m_FUN_1028b7f0(A...); int * __thiscall m_FUN_1028b810(int *param_2); template<class... A> int m_FUN_1028b810(A...); undefined4 * __thiscall m_FUN_1028b830(undefined4 *param_2); template<class... A> int m_FUN_1028b830(A...); int * __thiscall m_FUN_1028b850(int *param_2); template<class... A> int m_FUN_1028b850(A...); void __thiscall m_FUN_1028bb40(int *param_2,undefined4 param_3); template<class... A> int m_FUN_1028bb40(A...); int * __thiscall m_FUN_1028c2d0(int *param_2,undefined4 *param_3); template<class... A> int m_FUN_1028c2d0(A...); undefined4 * __thiscall m_FUN_1028cc00(undefined4 *param_2); template<class... A> int m_FUN_1028cc00(A...); undefined4 * __thiscall m_FUN_1028cd10(undefined4 param_2); template<class... A> int m_FUN_1028cd10(A...); undefined4 * __thiscall m_FUN_1028cd30(undefined4 param_2); template<class... A> int m_FUN_1028cd30(A...); undefined4 * __thiscall m_FUN_1028ce30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1028ce30(A...); undefined4 * __thiscall m_FUN_1028ce40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1028ce40(A...); undefined4 * __thiscall m_FUN_1028cf80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1028cf80(A...); undefined4 * __thiscall m_FUN_1028cf90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1028cf90(A...); undefined4 * __thiscall m_FUN_1028cfa0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1028cfa0(A...); undefined4 * __thiscall m_FUN_1028d060(undefined4 *param_2); template<class... A> int m_FUN_1028d060(A...); undefined4 * __thiscall m_FUN_1028d230(undefined4 *param_2); template<class... A> int m_FUN_1028d230(A...); int * __thiscall m_FUN_1028de90(int *param_2); template<class... A> int m_FUN_1028de90(A...); bool __thiscall m_FUN_1028def0(int *param_2); template<class... A> int m_FUN_1028def0(A...); bool __thiscall m_FUN_1028df10(int *param_2); template<class... A> int m_FUN_1028df10(A...); bool __thiscall m_FUN_1028df30(int *param_2); template<class... A> int m_FUN_1028df30(A...); bool __thiscall m_FUN_1028df50(int *param_2); template<class... A> int m_FUN_1028df50(A...); undefined4 * __thiscall m_FUN_1028e1b0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1028e1b0(A...); void __thiscall m_FUN_1028f3f0(undefined4 *param_2); template<class... A> int m_FUN_1028f3f0(A...); void __thiscall m_FUN_1028f420(undefined4 *param_2); template<class... A> int m_FUN_1028f420(A...); void __thiscall m_FUN_1028f440(undefined4 *param_2); template<class... A> int m_FUN_1028f440(A...); void __thiscall m_FUN_10290190(undefined4 *param_2); template<class... A> int m_FUN_10290190(A...); void __thiscall m_FUN_102901a0(undefined4 *param_2); template<class... A> int m_FUN_102901a0(A...); void __thiscall m_FUN_10290370(undefined4 *param_2); template<class... A> int m_FUN_10290370(A...); void __thiscall m_FUN_10290380(undefined4 *param_2); template<class... A> int m_FUN_10290380(A...); void __thiscall m_FUN_10290390(undefined4 *param_2); template<class... A> int m_FUN_10290390(A...); void __thiscall m_FUN_102903a0(undefined4 *param_2); template<class... A> int m_FUN_102903a0(A...); undefined4 __thiscall m_FUN_102926b0(undefined4 param_2); template<class... A> int m_FUN_102926b0(A...); undefined4 __thiscall m_FUN_10293480(int param_2); template<class... A> int m_FUN_10293480(A...); SCStr * __thiscall m_FUN_10293fc0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10293fc0(A...); undefined4 * __thiscall m_FUN_10294030(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10294030(A...); undefined4 * __thiscall m_FUN_10294050(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10294050(A...); SCStr * __thiscall m_FUN_10294230(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10294230(A...); undefined4 * __thiscall m_FUN_10294260(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10294260(A...); undefined4 * __thiscall m_FUN_10294280(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10294280(A...); SCStr * __thiscall m_FUN_10294290(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10294290(A...); SCStr * __thiscall m_FUN_102942d0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_102942d0(A...); undefined4 * __thiscall m_FUN_10294310(undefined4 param_2); template<class... A> int m_FUN_10294310(A...); undefined4 * __thiscall m_FUN_102943b0(undefined4 param_2); template<class... A> int m_FUN_102943b0(A...); undefined4 * __thiscall m_FUN_10295130(undefined4 *param_2); template<class... A> int m_FUN_10295130(A...); undefined4 * __thiscall m_FUN_102951e0(undefined4 param_2); template<class... A> int m_FUN_102951e0(A...); undefined4 * __thiscall m_FUN_102952c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102952c0(A...); undefined4 * __thiscall m_FUN_102952d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102952d0(A...); undefined4 * __thiscall m_FUN_102953a0(undefined4 *param_2); template<class... A> int m_FUN_102953a0(A...); void __thiscall m_FUN_10295620(int *param_2); template<class... A> int m_FUN_10295620(A...); undefined4 * __thiscall m_FUN_10295780(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10295780(A...); undefined4 * __thiscall m_FUN_102957f0(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_102957f0(A...); undefined4 * __thiscall m_FUN_102958a0(undefined4 *param_2,undefined4 param_3,undefined1 param_4); template<class... A> int m_FUN_102958a0(A...); int * __thiscall m_FUN_10296ea0(int *param_2); template<class... A> int m_FUN_10296ea0(A...); bool __thiscall m_FUN_10296f00(int *param_2); template<class... A> int m_FUN_10296f00(A...); bool __thiscall m_FUN_10296f20(int *param_2); template<class... A> int m_FUN_10296f20(A...); undefined4 * __thiscall m_FUN_102971f0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102971f0(A...); void __thiscall m_FUN_10298850(int param_2); template<class... A> int m_FUN_10298850(A...); void __thiscall m_FUN_10298880(undefined4 *param_2); template<class... A> int m_FUN_10298880(A...); void __thiscall m_FUN_10299580(undefined4 *param_2); template<class... A> int m_FUN_10299580(A...); void __thiscall m_FUN_10299bc0(undefined4 *param_2); template<class... A> int m_FUN_10299bc0(A...); undefined4 __thiscall m_FUN_1029ae00(undefined4 *param_2,int param_3); template<class... A> int m_FUN_1029ae00(A...); SCStr * __thiscall m_FUN_1029ae40(SCStr *param_2); template<class... A> int m_FUN_1029ae40(A...); int * __thiscall m_FUN_1029cbc0(int *param_2); template<class... A> int m_FUN_1029cbc0(A...); undefined4 * __thiscall m_FUN_1029ce20(int param_2); template<class... A> int m_FUN_1029ce20(A...); void __thiscall m_FUN_1029da00(int param_2); template<class... A> int m_FUN_1029da00(A...); void __thiscall m_FUN_1029da50(undefined4 *param_2); template<class... A> int m_FUN_1029da50(A...); int * __thiscall m_FUN_1029de20(int *param_2); template<class... A> int m_FUN_1029de20(A...); undefined4 * __thiscall m_FUN_1029dee0(int param_2); template<class... A> int m_FUN_1029dee0(A...); void __thiscall m_FUN_1029e760(undefined1 *param_2); template<class... A> int m_FUN_1029e760(A...); SCStr * __thiscall m_FUN_1029ea20(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1029ea20(A...); undefined4 * __thiscall m_FUN_1029ea50(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1029ea50(A...); SCStr * __thiscall m_FUN_1029ec10(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1029ec10(A...); undefined4 * __thiscall m_FUN_1029ec40(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1029ec40(A...); SCStr * __thiscall m_FUN_1029ec60(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_1029ec60(A...); SCStr * __thiscall m_FUN_1029ec90(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_1029ec90(A...); undefined4 * __thiscall m_FUN_1029f150(undefined4 param_2); template<class... A> int m_FUN_1029f150(A...); undefined4 * __thiscall m_FUN_102a1810(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102a1810(A...); undefined4 * __thiscall m_FUN_102a1910(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102a1910(A...); undefined4 * __thiscall m_FUN_102a1930(undefined4 param_2); template<class... A> int m_FUN_102a1930(A...); undefined4 * __thiscall m_FUN_102a1940(undefined4 param_2); template<class... A> int m_FUN_102a1940(A...); undefined4 * __thiscall m_FUN_102a1950(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102a1950(A...); undefined4 * __thiscall m_FUN_102a1970(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102a1970(A...); SCStr * __thiscall m_FUN_102a1c70(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102a1c70(A...); undefined4 * __thiscall m_FUN_102a1cb0(undefined4 param_2); template<class... A> int m_FUN_102a1cb0(A...); undefined4 * __thiscall m_FUN_102a1cc0(undefined4 param_2); template<class... A> int m_FUN_102a1cc0(A...); undefined4 * __thiscall m_FUN_102a1cd0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102a1cd0(A...); undefined4 * __thiscall m_FUN_102a1cf0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_102a1cf0(A...); undefined4 * __thiscall m_FUN_102a1d30(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_102a1d30(A...); undefined4 * __thiscall m_FUN_102a1d40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_102a1d40(A...); undefined4 * __thiscall m_FUN_102a1df0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_102a1df0(A...); undefined4 * __thiscall m_FUN_102a1e10(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_102a1e10(A...); SCStr * __thiscall m_FUN_102a1e30(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_102a1e30(A...); int * __thiscall m_FUN_102a1e70(int *param_2); template<class... A> int m_FUN_102a1e70(A...); int * __thiscall m_FUN_102a1ef0(int *param_2); template<class... A> int m_FUN_102a1ef0(A...); int * __thiscall m_FUN_102a2070(int *param_2); template<class... A> int m_FUN_102a2070(A...); int * __thiscall m_FUN_102a20b0(int *param_2); template<class... A> int m_FUN_102a20b0(A...); int * __thiscall m_FUN_102a2210(int *param_2); template<class... A> int m_FUN_102a2210(A...); int * __thiscall m_FUN_102a2230(int *param_2); template<class... A> int m_FUN_102a2230(A...); int * __thiscall m_FUN_102a2270(int *param_2); template<class... A> int m_FUN_102a2270(A...); int * __thiscall m_FUN_102a22f0(int *param_2); template<class... A> int m_FUN_102a22f0(A...); int * __thiscall m_FUN_102a2310(int *param_2); template<class... A> int m_FUN_102a2310(A...); int * __thiscall m_FUN_102a2390(int *param_2); template<class... A> int m_FUN_102a2390(A...); int * __thiscall m_FUN_102a2430(int *param_2); template<class... A> int m_FUN_102a2430(A...); int * __thiscall m_FUN_102a2470(int *param_2); template<class... A> int m_FUN_102a2470(A...); int * __thiscall m_FUN_102a2620(int *param_2); template<class... A> int m_FUN_102a2620(A...); int * __thiscall m_FUN_102a2690(int *param_2); template<class... A> int m_FUN_102a2690(A...); int * __thiscall m_FUN_102a2700(int *param_2); template<class... A> int m_FUN_102a2700(A...); int * __thiscall m_FUN_102a2950(int *param_2); template<class... A> int m_FUN_102a2950(A...); int * __thiscall m_FUN_102a29c0(int *param_2); template<class... A> int m_FUN_102a29c0(A...); void __thiscall m_FUN_102a3340(undefined4 param_2); template<class... A> int m_FUN_102a3340(A...); void __thiscall m_FUN_102a3360(undefined4 *param_2); template<class... A> int m_FUN_102a3360(A...); void __thiscall m_FUN_102a3390(undefined4 *param_2); template<class... A> int m_FUN_102a3390(A...); void __thiscall m_FUN_102a34a0(undefined4 *param_2); template<class... A> int m_FUN_102a34a0(A...); void __thiscall m_FUN_102a34d0(undefined4 *param_2); template<class... A> int m_FUN_102a34d0(A...); void __thiscall m_FUN_102a3500(undefined4 param_2); template<class... A> int m_FUN_102a3500(A...); void __thiscall m_FUN_102a3520(undefined4 *param_2); template<class... A> int m_FUN_102a3520(A...); void __thiscall m_FUN_102a3550(undefined4 *param_2); template<class... A> int m_FUN_102a3550(A...); void __thiscall m_FUN_102a50b0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_102a50b0(A...); void __thiscall m_FUN_102a5c50(undefined4 param_2); template<class... A> int m_FUN_102a5c50(A...); undefined4 * __thiscall m_FUN_102a6400(undefined4 *param_2); template<class... A> int m_FUN_102a6400(A...); undefined4 * __thiscall m_FUN_102a64f0(undefined4 *param_2); template<class... A> int m_FUN_102a64f0(A...); undefined4 * __thiscall m_FUN_102a6540(undefined4 *param_2); template<class... A> int m_FUN_102a6540(A...); undefined4 * __thiscall m_FUN_102a6610(undefined4 *param_2); template<class... A> int m_FUN_102a6610(A...); undefined4 * __thiscall m_FUN_102a6660(undefined4 *param_2); template<class... A> int m_FUN_102a6660(A...); undefined4 * __thiscall m_FUN_102a6710(undefined4 param_2); template<class... A> int m_FUN_102a6710(A...); undefined4 * __thiscall m_FUN_102a6730(undefined4 param_2); template<class... A> int m_FUN_102a6730(A...); undefined4 * __thiscall m_FUN_102a6910(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102a6910(A...); undefined4 * __thiscall m_FUN_102a6920(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102a6920(A...); undefined4 * __thiscall m_FUN_102a6930(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102a6930(A...); undefined4 * __thiscall m_FUN_102a6940(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102a6940(A...); undefined4 * __thiscall m_FUN_102a6a50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102a6a50(A...); undefined4 * __thiscall m_FUN_102a6a60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102a6a60(A...); undefined4 * __thiscall m_FUN_102a6ad0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_102a6ad0(A...); undefined4 * __thiscall m_FUN_102a6af0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_102a6af0(A...); undefined4 * __thiscall m_FUN_102a6b10(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_102a6b10(A...); undefined4 * __thiscall m_FUN_102a6b30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102a6b30(A...); undefined4 * __thiscall m_FUN_102a6b40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102a6b40(A...); undefined4 * __thiscall m_FUN_102a6c40(undefined4 *param_2); template<class... A> int m_FUN_102a6c40(A...); undefined4 * __thiscall m_FUN_102a6cf0(undefined4 *param_2); template<class... A> int m_FUN_102a6cf0(A...); undefined4 * __thiscall m_FUN_102a6e40(undefined4 *param_2); template<class... A> int m_FUN_102a6e40(A...); undefined4 * __thiscall m_FUN_102a6e50(undefined4 *param_2); template<class... A> int m_FUN_102a6e50(A...); undefined4 * __thiscall m_FUN_102a70c0(undefined4 param_2); template<class... A> int m_FUN_102a70c0(A...); undefined4 * __thiscall m_FUN_102a7a00(int param_2); template<class... A> int m_FUN_102a7a00(A...); int * __thiscall m_FUN_102aa6c0(int *param_2); template<class... A> int m_FUN_102aa6c0(A...); int * __thiscall m_FUN_102aa720(int *param_2); template<class... A> int m_FUN_102aa720(A...); int * __thiscall m_FUN_102aa780(int *param_2); template<class... A> int m_FUN_102aa780(A...); undefined4 * __thiscall m_FUN_102aa850(undefined4 *param_2); template<class... A> int m_FUN_102aa850(A...); int __thiscall m_FUN_102aaa30(int param_2); template<class... A> int m_FUN_102aaa30(A...); bool __thiscall m_FUN_102aaa80(int *param_2); template<class... A> int m_FUN_102aaa80(A...); bool __thiscall m_FUN_102aaaa0(int *param_2); template<class... A> int m_FUN_102aaaa0(A...); bool __thiscall m_FUN_102aaac0(int *param_2); template<class... A> int m_FUN_102aaac0(A...); bool __thiscall m_FUN_102aaae0(int *param_2); template<class... A> int m_FUN_102aaae0(A...); bool __thiscall m_FUN_102aab00(int *param_2); template<class... A> int m_FUN_102aab00(A...); bool __thiscall m_FUN_102aab20(int *param_2); template<class... A> int m_FUN_102aab20(A...); bool __thiscall m_FUN_102aab40(int *param_2); template<class... A> int m_FUN_102aab40(A...); bool __thiscall m_FUN_102aab60(int *param_2); template<class... A> int m_FUN_102aab60(A...); int __thiscall m_FUN_102ab190(int param_2); template<class... A> int m_FUN_102ab190(A...); int __thiscall m_FUN_102ab1b0(int param_2); template<class... A> int m_FUN_102ab1b0(A...); int __thiscall m_FUN_102ab1d0(int param_2); template<class... A> int m_FUN_102ab1d0(A...); };

extern int FUN_10273f70(...);
extern int FUN_10296300(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int atoi(...);
extern int func_0x1001f834(...);
extern int func_0x1002ca7f(...);
extern int func_0x10048f77(...);
extern int func_0x10054043(...);
extern int func_0x10062eae(...);
extern int func_0x10067c8d(...);
extern int operator_new(...);
extern int thunk_FUN_10116710(...);
extern int thunk_FUN_10117000(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a3370(...);
extern int thunk_FUN_101a3700(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_102207b0(...);
template<class... A> int __stdcall thunk_FUN_1026eab0(A...);
template<class... A> int __stdcall thunk_FUN_102725d0(A...);
extern int thunk_FUN_10272ea0(...);
extern int thunk_FUN_10272fd0(...);
extern int thunk_FUN_10273980(...);
extern int thunk_FUN_10277f40(...);
extern int thunk_FUN_102782f0(...);
extern int thunk_FUN_10278390(...);
extern int thunk_FUN_1027ddb0(...);
extern int thunk_FUN_1027e130(...);
extern int thunk_FUN_1027e470(...);
extern int thunk_FUN_10280c80(...);
extern int thunk_FUN_10283f20(...);
extern int thunk_FUN_10284760(...);
extern int thunk_FUN_102847c0(...);
extern int thunk_FUN_10284aa0(...);
extern int thunk_FUN_102866a0(...);
extern int thunk_FUN_102871c0(...);
extern int thunk_FUN_1028bbd0(...);
extern int thunk_FUN_1028e330(...);
extern int thunk_FUN_102909a0(...);
extern int thunk_FUN_10292500(...);
extern int thunk_FUN_102a0500(...);
extern int thunk_FUN_102a2ce0(...);
template<class... A> int __stdcall thunk_FUN_102a3580(A...);
extern int thunk_FUN_102a5240(...);
template<class... A> int __stdcall thunk_FUN_102a71f0(A...);
extern int thunk_FUN_102a9bb0(...);
extern int thunk_FUN_103beae0(...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_1059d940(...);
template<class... A> int __stdcall thunk_FUN_106a2b90(A...);
extern int thunk_FUN_106d5ce0(...);
extern int thunk_FUN_1109ac80(...);
extern int thunk_FUN_110f6450(...);
extern int thunk_FUN_110f69a0(...);
extern int thunk_FUN_110f7c60(...);
extern int thunk_FUN_110fc270(...);
extern int thunk_FUN_111f7820(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11244ee0(...);
extern int thunk_FUN_1124a160(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1125ba00(...);
extern int thunk_FUN_1125bbd0(...);
extern int thunk_FUN_1125bca0(...);
extern int thunk_FUN_1125bcf0(...);
extern int thunk_FUN_11261330(...);
extern int thunk_FUN_112a0c30(...);
extern int thunk_FUN_112a1350(...);
extern int thunk_FUN_112a2b10(...);
extern int thunk_FUN_112a76e0(...);
extern int thunk_FUN_112a7c70(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112aa2e0(...);
extern int thunk_FUN_112aa310(...);
extern int thunk_FUN_112aa790(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_1187d878;
extern int DAT_1188d004;
extern int DAT_11d330dc;
extern int DAT_12119130;
extern int DAT_121192f0;
extern int DAT_12119348;
extern int DAT_1211934c;
extern int DAT_12119350;
extern int DAT_12119358;
extern int DAT_1211935c;
extern int DAT_12119360;
extern int DAT_12119364;
extern int DAT_12119368;
extern int DAT_1211936c;
extern int DAT_12119370;
extern int DAT_12119374;
extern int DAT_12119384;
extern int DAT_12119388;
extern int DAT_1211938c;
extern int DAT_12119390;
extern int DAT_12119394;
extern int DAT_12119398;
extern int DAT_1211939c;
extern int DAT_121193a0;
extern int DAT_121193b0;
extern int DAT_121193b4;
extern int DAT_121193b8;
extern int DAT_12126b84;
extern int DAT_121a0b38;
extern int DAT_121a0be0;
extern int DAT_121a0c1c;
extern int DAT_121a2650;
extern int DAT_121a2764;
extern int DAT_121a2778;
extern int UNK_1188cfec;
extern int UNK_1188d034;
extern int g_lSCObjCount;
extern int ghidra_vftable_AnacapaLauncher;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RDataIOSSLInterface;
extern int ghidra_vftable_RDateTime;
extern int ghidra_vftable_RGenericAsyncIOOperationCB;
extern int ghidra_vftable_RHTTPDataIO;
extern int ghidra_vftable_RHttpBaseNoRedirectAIOOp;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RLookupV1CertInfoRequest;
extern int ghidra_vftable_RNSGetAliveOp;
extern int ghidra_vftable_RNSGetCurrentChannelOp;
extern int ghidra_vftable_RNetstartOp;
extern int ghidra_vftable_RNetstartOpCallback;
extern int ghidra_vftable_RNetstartScanListOp;
extern int ghidra_vftable_RSystemTime;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCEventSource;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCICompositeSearchable;
extern int ghidra_vftable_SCIDirectControlApplication;
extern int ghidra_vftable_SCILandingPage;
extern int ghidra_vftable_SCILandingPageSection;
extern int ghidra_vftable_SCILandingPageTile;
extern int ghidra_vftable_SCILogging;
extern int ghidra_vftable_SCIMusicServiceDetail;
extern int ghidra_vftable_SCIMusicServiceMenu;
extern int ghidra_vftable_SCINetstartScanListEntry;
extern int ghidra_vftable_SCINewWizManager;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpNetstartGetScanList;
extern int ghidra_vftable_SCIOpNetstartSendRevert;
extern int ghidra_vftable_SCIRecurrence;
extern int ghidra_vftable_SCIResourceHelper;
extern int ghidra_vftable_SCISearchable;
extern int ghidra_vftable_SCISearchableCategory;
extern int ghidra_vftable_SCISeekableStream;
extern int ghidra_vftable_SCISonarCalibrationManager;
extern int ghidra_vftable_SCIStream;
extern int ghidra_vftable_SCISystemStatus;
extern int ghidra_vftable_SCISystemStatusManager;
extern int ghidra_vftable_SCISystemTime;
extern int ghidra_vftable_SCLogging;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpLookupV1CertInfoAIOOp;
extern int ghidra_vftable_SCRecurrence;
extern int ghidra_vftable_SCSearchablesManager_EventSink;
extern int ghidra_vftable_SCSwfObjMSDiscoveryListener;
extern int ghidra_vftable_SCSystemTime;
extern int ghidra_vftable_TestPointHandler;
extern int ghidra_vftable_TestPointHandlerSCLIB;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_10;
extern int uStack_1c28;
extern int uStack_4;
extern int uStack_438;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_1004a205[];
extern undefined1 LAB_1004d0bd[];
extern undefined1 LAB_1007d114[];
extern undefined1 LAB_10279e04[];
extern undefined1 LAB_10279e09[];
extern undefined1 LAB_10279e32[];
extern undefined1 LAB_10279e37[];
extern undefined1 LAB_10279fb7[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_11517d70[];
extern "C" void LAB_11519b75(void);
extern "C" void LAB_1151cecf(void);
extern undefined1 LAB_1151d250[];
extern undefined1 LAB_11520420[];
extern undefined1 LAB_115d7e8d[];
extern int *PTR_DAT_12119128;
extern int *PTR_DAT_1211937c;
extern int *PTR_DAT_12119380;
extern int *PTR_LAB_121193a4;
extern int *PTR_LAB_121193a8;
extern int *PTR_LAB_121193ac;
extern int *PTR_PTR_12119378;
extern int *PTR_s_OnlineUpdateBaseURL_121190f8;
extern int *PTR_s__________sclib_sclib_core_sclib__12119354;
extern char s__________sclib_sclib_core_sclib__1188c380[];
extern void *ExceptionList;
extern int FUN_1125bd20(...);
extern int FUN_112a9d50(...);
extern int FUN_112a9d70(...);
extern int FUN_112aa350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102638d0(void);
template<class... A> int FUN_102638d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102638e0(void);
template<class... A> int FUN_102638e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10263a20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10263a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10263a30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10263a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10263a40(void);
template<class... A> int FUN_10263a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102647f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102647f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264890(undefined4 *param_1);
template<class... A> int FUN_10264890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102648a0(undefined4 *param_1);
template<class... A> int FUN_102648a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102648b0(undefined4 *param_1);
template<class... A> int FUN_102648b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264a00(undefined4 param_1);
template<class... A> int FUN_10264a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10264a10(int param_1,SCStr *param_2);
template<class... A> int FUN_10264a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264b50(undefined4 param_1);
template<class... A> int FUN_10264b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264b60(undefined4 param_1);
template<class... A> int FUN_10264b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264df0(undefined4 param_1);
template<class... A> int FUN_10264df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264e00(undefined4 param_1);
template<class... A> int FUN_10264e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264e40(undefined4 param_1);
template<class... A> int FUN_10264e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264e50(undefined4 param_1);
template<class... A> int FUN_10264e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264e60(undefined4 param_1);
template<class... A> int FUN_10264e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264e70(undefined4 param_1);
template<class... A> int FUN_10264e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10264e80(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10264e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10264eb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10264eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10264ee0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10264ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10264f10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10264f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10264f40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10264f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265160(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10265160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265180(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10265180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102651a0(undefined4 param_1);
template<class... A> int FUN_102651a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102651b0(undefined4 param_1);
template<class... A> int FUN_102651b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102651c0(undefined4 param_1);
template<class... A> int FUN_102651c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102651d0(undefined4 param_1);
template<class... A> int FUN_102651d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102651e0(undefined4 param_1);
template<class... A> int FUN_102651e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102651f0(undefined4 param_1);
template<class... A> int FUN_102651f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265200(undefined4 param_1);
template<class... A> int FUN_10265200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265210(undefined4 param_1);
template<class... A> int FUN_10265210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265220(undefined4 param_1);
template<class... A> int FUN_10265220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265230(undefined4 param_1);
template<class... A> int FUN_10265230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265240(undefined4 param_1);
template<class... A> int FUN_10265240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265250(undefined4 param_1);
template<class... A> int FUN_10265250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265260(undefined4 param_1);
template<class... A> int FUN_10265260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265270(undefined4 param_1);
template<class... A> int FUN_10265270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265280(undefined4 param_1);
template<class... A> int FUN_10265280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265290(undefined4 param_1);
template<class... A> int FUN_10265290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102652a0(undefined4 param_1);
template<class... A> int FUN_102652a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102652b0(undefined4 param_1);
template<class... A> int FUN_102652b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102652c0(undefined4 param_1);
template<class... A> int FUN_102652c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102652d0(undefined4 param_1);
template<class... A> int FUN_102652d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102652e0(undefined4 param_1);
template<class... A> int FUN_102652e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102652f0(undefined4 param_1);
template<class... A> int FUN_102652f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265300(undefined4 param_1);
template<class... A> int FUN_10265300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265370(undefined4 param_1);
template<class... A> int FUN_10265370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265380(undefined4 param_1);
template<class... A> int FUN_10265380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10265390(void);
template<class... A> int FUN_10265390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102653a0(void);
template<class... A> int FUN_102653a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102653b0(void);
template<class... A> int FUN_102653b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265660(undefined4 param_1);
template<class... A> int FUN_10265660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10265670(undefined4 param_1);
template<class... A> int FUN_10265670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265760(undefined4 *param_1);
template<class... A> int FUN_10265760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265790(undefined4 *param_1);
template<class... A> int FUN_10265790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102657c0(undefined4 *param_1);
template<class... A> int FUN_102657c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102657f0(undefined4 *param_1);
template<class... A> int FUN_102657f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102659e0(undefined4 *param_1);
template<class... A> int FUN_102659e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10265a40(undefined4 param_1);
template<class... A> int FUN_10265a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10265a50(undefined4 param_1);
template<class... A> int FUN_10265a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265b40(undefined4 *param_1);
template<class... A> int FUN_10265b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265ba0(undefined4 *param_1);
template<class... A> int FUN_10265ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265bc0(undefined4 *param_1);
template<class... A> int FUN_10265bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10265be0(undefined4 param_1);
template<class... A> int FUN_10265be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10265bf0(undefined4 param_1);
template<class... A> int FUN_10265bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10265c00(undefined4 param_1);
template<class... A> int FUN_10265c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265de0(undefined4 *param_1);
template<class... A> int FUN_10265de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265e00(undefined4 *param_1);
template<class... A> int FUN_10265e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265e20(undefined4 *param_1);
template<class... A> int FUN_10265e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265e30(undefined4 *param_1);
template<class... A> int FUN_10265e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265e40(undefined4 *param_1);
template<class... A> int FUN_10265e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102670f0(undefined4 *param_1);
template<class... A> int FUN_102670f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10267100(undefined4 *param_1);
template<class... A> int FUN_10267100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10267110(undefined4 *param_1);
template<class... A> int FUN_10267110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10267690(int *param_1);
template<class... A> int FUN_10267690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102676a0(int *param_1);
template<class... A> int FUN_102676a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102676b0(undefined4 *param_1);
template<class... A> int FUN_102676b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102676c0(undefined4 *param_1);
template<class... A> int FUN_102676c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102676d0(int *param_1);
template<class... A> int FUN_102676d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102676e0(int *param_1);
template<class... A> int FUN_102676e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102676f0(undefined4 *param_1);
template<class... A> int FUN_102676f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10267700(undefined4 *param_1);
template<class... A> int FUN_10267700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10267710(undefined4 *param_1);
template<class... A> int FUN_10267710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10267720(undefined4 *param_1);
template<class... A> int FUN_10267720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10267730(undefined4 *param_1);
template<class... A> int FUN_10267730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10267740(undefined4 *param_1);
template<class... A> int FUN_10267740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10267750(undefined4 *param_1);
template<class... A> int FUN_10267750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10267760(undefined4 *param_1);
template<class... A> int FUN_10267760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10267770(undefined4 *param_1);
template<class... A> int FUN_10267770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10267780(undefined4 *param_1);
template<class... A> int FUN_10267780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10267790(int *param_1);
template<class... A> int FUN_10267790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102677a0(int *param_1);
template<class... A> int FUN_102677a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10268330(undefined4 *param_1);
template<class... A> int FUN_10268330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10268520(int param_1);
template<class... A> int FUN_10268520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10268850(undefined4 param_1);
template<class... A> int FUN_10268850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10268890(undefined4 param_1);
template<class... A> int FUN_10268890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102688a0(undefined4 param_1);
template<class... A> int FUN_102688a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102688b0(undefined4 param_1);
template<class... A> int FUN_102688b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102688c0(undefined4 param_1);
template<class... A> int FUN_102688c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102688d0(undefined4 param_1);
template<class... A> int FUN_102688d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102688e0(undefined4 param_1);
template<class... A> int FUN_102688e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102688f0(undefined4 param_1);
template<class... A> int FUN_102688f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10268900(undefined4 param_1);
template<class... A> int FUN_10268900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10268910(undefined4 param_1);
template<class... A> int FUN_10268910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10268920(undefined4 param_1);
template<class... A> int FUN_10268920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10268930(undefined4 param_1);
template<class... A> int FUN_10268930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10268940(undefined4 param_1);
template<class... A> int FUN_10268940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10268950(undefined4 param_1);
template<class... A> int FUN_10268950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10268960(undefined4 param_1);
template<class... A> int FUN_10268960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10268970(undefined4 param_1);
template<class... A> int FUN_10268970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10268980(undefined4 param_1);
template<class... A> int FUN_10268980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10268c90(int param_1);
template<class... A> int FUN_10268c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10268cc0(int *param_1);
template<class... A> int FUN_10268cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10268d40(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10268d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10268d50(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10268d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10268d60(int param_1);
template<class... A> int FUN_10268d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10268d70(undefined4 *param_1);
template<class... A> int FUN_10268d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10268d80(undefined4 *param_1);
template<class... A> int FUN_10268d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102694c0(uint param_1);
template<class... A> int FUN_102694c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10269540(uint param_1);
template<class... A> int FUN_10269540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102695b0(uint param_1);
template<class... A> int FUN_102695b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10269c70(undefined4 *param_1);
template<class... A> int FUN_10269c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1026ad30(int *param_1);
template<class... A> int FUN_1026ad30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1026ad40(int *param_1);
template<class... A> int FUN_1026ad40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1026ad50(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1026ad50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1026ada0(int param_1,int param_2);
template<class... A> int FUN_1026ada0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026ae90(undefined4 *param_1);
template<class... A> int FUN_1026ae90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026aea0(undefined4 *param_1);
template<class... A> int FUN_1026aea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1026aeb0(void);
template<class... A> int FUN_1026aeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026af70(int param_1);
template<class... A> int FUN_1026af70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1026c000(void);
template<class... A> int FUN_1026c000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1026c010(void);
template<class... A> int FUN_1026c010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1026c020(void);
template<class... A> int FUN_1026c020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1026c140(int *param_1);
template<class... A> int FUN_1026c140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1026c160(int *param_1);
template<class... A> int FUN_1026c160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1026c170(int *param_1);
template<class... A> int FUN_1026c170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026c380(void);
template<class... A> int FUN_1026c380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026c390(void);
template<class... A> int FUN_1026c390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026c3a0(void);
template<class... A> int FUN_1026c3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026c3b0(void);
template<class... A> int FUN_1026c3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026c3c0(void);
template<class... A> int FUN_1026c3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026c3d0(void);
template<class... A> int FUN_1026c3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1026c880(void);
template<class... A> int FUN_1026c880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026ca60(undefined4 param_1);
template<class... A> int FUN_1026ca60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026cc20(undefined4 *param_1);
template<class... A> int FUN_1026cc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026cc30(undefined4 *param_1);
template<class... A> int FUN_1026cc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026cc40(undefined4 *param_1);
template<class... A> int FUN_1026cc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026cc50(undefined4 *param_1);
template<class... A> int FUN_1026cc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1026d0e0(undefined4 *param_1);
template<class... A> int FUN_1026d0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1026d110(undefined4 *param_1);
template<class... A> int FUN_1026d110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1026d140(undefined4 *param_1);
template<class... A> int FUN_1026d140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1026d170(undefined4 *param_1);
template<class... A> int FUN_1026d170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1026d1a0(undefined4 *param_1);
template<class... A> int FUN_1026d1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026d450(SCStr *param_1);
template<class... A> int FUN_1026d450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1026d760(int *param_1);
template<class... A> int FUN_1026d760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1026d770(int *param_1);
template<class... A> int FUN_1026d770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1026d820(void);
template<class... A> int FUN_1026d820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026d830(undefined4 *param_1);
template<class... A> int FUN_1026d830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026d860(undefined4 *param_1);
template<class... A> int FUN_1026d860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026d8c0(undefined4 *param_1);
template<class... A> int FUN_1026d8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026d8d0(undefined4 *param_1);
template<class... A> int FUN_1026d8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1026d910(undefined4 *param_1);
template<class... A> int FUN_1026d910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1026da70(undefined4 *param_1);
template<class... A> int FUN_1026da70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1026db80(int *param_1);
template<class... A> int FUN_1026db80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026db90(undefined4 *param_1);
template<class... A> int FUN_1026db90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026dba0(undefined4 *param_1);
template<class... A> int FUN_1026dba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026dce0(undefined4 *param_1);
template<class... A> int FUN_1026dce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1026e040(void);
template<class... A> int FUN_1026e040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026e050(undefined4 *param_1);
template<class... A> int FUN_1026e050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1026e1f0(undefined4 *param_1);
template<class... A> int FUN_1026e1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1026e220(undefined4 *param_1);
template<class... A> int FUN_1026e220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1026e510(int param_1);
template<class... A> int FUN_1026e510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1026e8e0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_1026e8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026e9c0(undefined4 param_1);
template<class... A> int FUN_1026e9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026e9f0(undefined4 param_1);
template<class... A> int FUN_1026e9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026ea00(undefined4 param_1);
template<class... A> int FUN_1026ea00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1026ea10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1026ea10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026ed00(undefined4 param_1);
template<class... A> int FUN_1026ed00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026ed30(undefined4 param_1);
template<class... A> int FUN_1026ed30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026ed40(undefined4 param_1);
template<class... A> int FUN_1026ed40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1026ed50(undefined4 param_1);
template<class... A> int FUN_1026ed50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026f090(undefined4 *param_1);
template<class... A> int FUN_1026f090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026f100(undefined4 *param_1);
template<class... A> int FUN_1026f100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026f120(undefined4 *param_1);
template<class... A> int FUN_1026f120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026f1b0(undefined4 param_1);
template<class... A> int FUN_1026f1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1026f1c0(undefined4 param_1);
template<class... A> int FUN_1026f1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1026f1d0(int param_1);
template<class... A> int FUN_1026f1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1026f1e0(int param_1);
template<class... A> int FUN_1026f1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1026f1f0(int param_1);
template<class... A> int FUN_1026f1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026f360(undefined4 *param_1);
template<class... A> int FUN_1026f360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1026ff20(undefined4 *param_1);
template<class... A> int FUN_1026ff20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1026ffb0(undefined4 *param_1);
template<class... A> int FUN_1026ffb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270310(undefined4 *param_1);
template<class... A> int FUN_10270310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270320(undefined4 *param_1);
template<class... A> int FUN_10270320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270330(undefined4 *param_1);
template<class... A> int FUN_10270330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10270340(int param_1);
template<class... A> int FUN_10270340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270350(undefined4 *param_1);
template<class... A> int FUN_10270350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270360(undefined4 *param_1);
template<class... A> int FUN_10270360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270370(undefined4 *param_1);
template<class... A> int FUN_10270370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270380(undefined4 *param_1);
template<class... A> int FUN_10270380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270390(undefined4 *param_1);
template<class... A> int FUN_10270390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102703a0(undefined4 *param_1);
template<class... A> int FUN_102703a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10270a80(int param_1);
template<class... A> int FUN_10270a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10270a90(int param_1);
template<class... A> int FUN_10270a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10270aa0(int param_1);
template<class... A> int FUN_10270aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270ad0(undefined4 param_1);
template<class... A> int FUN_10270ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270ae0(undefined4 param_1);
template<class... A> int FUN_10270ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270af0(int param_1);
template<class... A> int FUN_10270af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270b00(int param_1);
template<class... A> int FUN_10270b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270b10(int param_1);
template<class... A> int FUN_10270b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10270b20(int param_1);
template<class... A> int FUN_10270b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10270b30(int param_1);
template<class... A> int FUN_10270b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10270b40(int param_1);
template<class... A> int FUN_10270b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10270b50(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10270b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270da0(undefined4 *param_1);
template<class... A> int FUN_10270da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270db0(undefined4 *param_1);
template<class... A> int FUN_10270db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270dc0(int param_1);
template<class... A> int FUN_10270dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10270dd0(int param_1);
template<class... A> int FUN_10270dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10271260(undefined4 *param_1);
template<class... A> int FUN_10271260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10271270(undefined4 *param_1);
template<class... A> int FUN_10271270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10271280(undefined4 *param_1);
template<class... A> int FUN_10271280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_102713f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_102713f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10271420(int *param_1);
template<class... A> int FUN_10271420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10271430(int *param_1);
template<class... A> int FUN_10271430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10271440(int *param_1);
template<class... A> int FUN_10271440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10271450(int *param_1);
template<class... A> int FUN_10271450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10271780(undefined4 *param_1);
template<class... A> int FUN_10271780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10271790(undefined4 *param_1);
template<class... A> int FUN_10271790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102717a0(undefined4 *param_1);
template<class... A> int FUN_102717a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102719a0(undefined4 *param_1);
template<class... A> int FUN_102719a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102719d0(undefined4 *param_1);
template<class... A> int FUN_102719d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10271a00(undefined4 *param_1);
template<class... A> int FUN_10271a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10271a30(undefined4 *param_1);
template<class... A> int FUN_10271a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10271a60(undefined4 *param_1);
template<class... A> int FUN_10271a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10271a90(undefined4 *param_1);
template<class... A> int FUN_10271a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10271ad0(int *param_1);
template<class... A> int FUN_10271ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10271c90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10271c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10271cb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10271cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10271cd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10271cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10271dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10271dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10271de0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10271de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10272190(int param_1);
template<class... A> int FUN_10272190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102721a0(void);
template<class... A> int FUN_102721a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102721b0(void);
template<class... A> int FUN_102721b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10272d10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10272d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10273390(uint param_1);
template<class... A> int FUN_10273390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102733b0(undefined4 *param_1);
template<class... A> int FUN_102733b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102733c0(undefined4 *param_1);
template<class... A> int FUN_102733c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102733d0(undefined4 *param_1);
template<class... A> int FUN_102733d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102733e0(undefined4 *param_1);
template<class... A> int FUN_102733e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102733f0(undefined4 *param_1);
template<class... A> int FUN_102733f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10273640(int *param_1,int *param_2);
template<class... A> int FUN_10273640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10273660(void);
template<class... A> int FUN_10273660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10273670(void);
template<class... A> int FUN_10273670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10273680(void);
template<class... A> int FUN_10273680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10273690(void);
template<class... A> int FUN_10273690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102736a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102736a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10273820(void);
template<class... A> int FUN_10273820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10273830(void);
template<class... A> int FUN_10273830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10273950(undefined4 param_1);
template<class... A> int FUN_10273950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10273960(undefined4 param_1);
template<class... A> int FUN_10273960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10273970(undefined4 param_1);
template<class... A> int FUN_10273970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10273b80(undefined4 param_1);
template<class... A> int FUN_10273b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10273b90(undefined4 param_1);
template<class... A> int FUN_10273b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10273bd0(undefined4 param_1);
template<class... A> int FUN_10273bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10273be0(undefined4 param_1);
template<class... A> int FUN_10273be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10273bf0(undefined4 param_1);
template<class... A> int FUN_10273bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10273c00(undefined4 param_1);
template<class... A> int FUN_10273c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10273c10(undefined4 param_1);
template<class... A> int FUN_10273c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10273c20(undefined4 param_1);
template<class... A> int FUN_10273c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10273c30(int *param_1,int param_2);
template<class... A> int FUN_10273c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10273c50(int *param_1,int param_2);
template<class... A> int FUN_10273c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10273c70(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10273c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10273d10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10273d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10273d40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10273d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10273d70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10273d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10273ef0(int param_1,int param_2);
template<class... A> int FUN_10273ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10273f00(int param_1,int param_2);
template<class... A> int FUN_10273f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10274170(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10274170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10274190(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10274190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102741b0(undefined4 param_1);
template<class... A> int FUN_102741b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102741c0(undefined4 param_1);
template<class... A> int FUN_102741c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102741d0(undefined4 param_1);
template<class... A> int FUN_102741d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10274210(undefined4 param_1);
template<class... A> int FUN_10274210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10274220(undefined4 param_1);
template<class... A> int FUN_10274220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10274230(undefined4 param_1);
template<class... A> int FUN_10274230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10274240(undefined4 param_1);
template<class... A> int FUN_10274240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10274250(undefined4 param_1);
template<class... A> int FUN_10274250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10274290(undefined4 param_1);
template<class... A> int FUN_10274290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102742a0(undefined4 param_1);
template<class... A> int FUN_102742a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102742b0(void);
template<class... A> int FUN_102742b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10274670(undefined4 param_1);
template<class... A> int FUN_10274670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10274680(undefined4 param_1);
template<class... A> int FUN_10274680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102746c0(undefined4 param_1);
template<class... A> int FUN_102746c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102746d0(undefined4 param_1);
template<class... A> int FUN_102746d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102746e0(int param_1,int param_2);
template<class... A> int FUN_102746e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102746f0(int param_1,int param_2);
template<class... A> int FUN_102746f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10274a20(undefined4 *param_1);
template<class... A> int FUN_10274a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10274a90(undefined4 *param_1);
template<class... A> int FUN_10274a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10274b90(undefined4 param_1);
template<class... A> int FUN_10274b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10274ba0(undefined4 param_1);
template<class... A> int FUN_10274ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10274bb0(int param_1);
template<class... A> int FUN_10274bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10274bc0(int param_1);
template<class... A> int FUN_10274bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10274bd0(int param_1);
template<class... A> int FUN_10274bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10274c80(undefined4 *param_1);
template<class... A> int FUN_10274c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10274ca0(undefined4 *param_1);
template<class... A> int FUN_10274ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10274cc0(undefined4 param_1);
template<class... A> int FUN_10274cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10274cd0(undefined4 param_1);
template<class... A> int FUN_10274cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10274da0(undefined4 *param_1);
template<class... A> int FUN_10274da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10274dc0(undefined4 *param_1);
template<class... A> int FUN_10274dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10274e20(undefined4 *param_1);
template<class... A> int FUN_10274e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102759b0(undefined4 *param_1);
template<class... A> int FUN_102759b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10275a40(undefined4 *param_1);
template<class... A> int FUN_10275a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10275a70(undefined4 *param_1);
template<class... A> int FUN_10275a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10276310(undefined4 *param_1);
template<class... A> int FUN_10276310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10276320(undefined4 *param_1);
template<class... A> int FUN_10276320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10276330(undefined4 *param_1);
template<class... A> int FUN_10276330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10276340(undefined4 *param_1);
template<class... A> int FUN_10276340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10276350(int param_1);
template<class... A> int FUN_10276350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10276360(undefined4 *param_1);
template<class... A> int FUN_10276360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10276370(undefined4 *param_1);
template<class... A> int FUN_10276370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10276380(undefined4 *param_1);
template<class... A> int FUN_10276380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10276390(int *param_1);
template<class... A> int FUN_10276390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_102763a0(int *param_1);
template<class... A> int FUN_102763a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10277260(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10277260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10277480(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10277480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10277aa0(int param_1);
template<class... A> int FUN_10277aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10277ab0(int param_1);
template<class... A> int FUN_10277ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10277ac0(int param_1);
template<class... A> int FUN_10277ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277b20(undefined4 param_1);
template<class... A> int FUN_10277b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277b30(undefined4 param_1);
template<class... A> int FUN_10277b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277b40(undefined4 param_1);
template<class... A> int FUN_10277b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277b50(undefined4 param_1);
template<class... A> int FUN_10277b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277b60(undefined4 param_1);
template<class... A> int FUN_10277b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277b70(undefined4 param_1);
template<class... A> int FUN_10277b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277b80(undefined4 param_1);
template<class... A> int FUN_10277b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277b90(undefined4 param_1);
template<class... A> int FUN_10277b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277ba0(undefined4 param_1);
template<class... A> int FUN_10277ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277bb0(undefined4 param_1);
template<class... A> int FUN_10277bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277bc0(int param_1);
template<class... A> int FUN_10277bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277bd0(int param_1);
template<class... A> int FUN_10277bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10277be0(int param_1);
template<class... A> int FUN_10277be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10277bf0(int param_1);
template<class... A> int FUN_10277bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10277c00(int param_1);
template<class... A> int FUN_10277c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10277c10(int param_1);
template<class... A> int FUN_10277c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10277cd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10277cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10277ce0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10277ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10277d10(undefined4 *param_1);
template<class... A> int FUN_10277d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10277d20(undefined4 *param_1);
template<class... A> int FUN_10277d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102781a0(undefined4 *param_1);
template<class... A> int FUN_102781a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102781b0(int param_1);
template<class... A> int FUN_102781b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102782b0(undefined4 *param_1);
template<class... A> int FUN_102782b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102782c0(undefined4 *param_1);
template<class... A> int FUN_102782c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102782d0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_102782d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10278310(uint param_1);
template<class... A> int FUN_10278310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10278400(undefined4 *param_1);
template<class... A> int FUN_10278400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10278440(int *param_1);
template<class... A> int FUN_10278440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10278460(int *param_1);
template<class... A> int FUN_10278460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10278b60(int param_1,int param_2);
template<class... A> int FUN_10278b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10278c50(undefined4 *param_1);
template<class... A> int FUN_10278c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10278cc0(int param_1);
template<class... A> int FUN_10278cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10278fb0(void);
template<class... A> int FUN_10278fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10278fc0(int *param_1);
template<class... A> int FUN_10278fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10278fd0(int *param_1);
template<class... A> int FUN_10278fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10278fe0(void);
template<class... A> int FUN_10278fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10278ff0(void);
template<class... A> int FUN_10278ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10279000(void);
template<class... A> int FUN_10279000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10279010(void);
template<class... A> int FUN_10279010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10279650(undefined4 *param_1);
template<class... A> int FUN_10279650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10279660(undefined4 *param_1);
template<class... A> int FUN_10279660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10279670(undefined4 *param_1);
template<class... A> int FUN_10279670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10279680(undefined4 *param_1);
template<class... A> int FUN_10279680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10279880(undefined4 *param_1);
template<class... A> int FUN_10279880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102798b0(undefined4 *param_1);
template<class... A> int FUN_102798b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102798e0(undefined4 *param_1);
template<class... A> int FUN_102798e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10279b10(int param_1);
template<class... A> int FUN_10279b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10279b20(int *param_1);
template<class... A> int FUN_10279b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10279b40(int *param_1);
template<class... A> int FUN_10279b40(A...);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void FUN_10279d20(int *param_1);
template<class... A> int FUN_10279d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027d2c0(undefined4 param_1);
template<class... A> int FUN_1027d2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027d4d0(void);
template<class... A> int FUN_1027d4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027d520(void);
template<class... A> int FUN_1027d520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027d560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_1027d560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027d580(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1027d580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027d640(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1027d640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027dda0(void);
template<class... A> int FUN_1027dda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027df70(void);
template<class... A> int FUN_1027df70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027e110(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1027e110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027e120(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1027e120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027e430(void);
template<class... A> int FUN_1027e430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027e5f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1027e5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e690(undefined4 *param_1);
template<class... A> int FUN_1027e690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027e6a0(void);
template<class... A> int FUN_1027e6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027e6b0(void);
template<class... A> int FUN_1027e6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e750(undefined4 param_1);
template<class... A> int FUN_1027e750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e760(undefined4 param_1);
template<class... A> int FUN_1027e760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e770(undefined4 param_1);
template<class... A> int FUN_1027e770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e780(undefined4 param_1);
template<class... A> int FUN_1027e780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e790(undefined4 param_1);
template<class... A> int FUN_1027e790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e7a0(undefined4 param_1);
template<class... A> int FUN_1027e7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e7b0(undefined4 param_1);
template<class... A> int FUN_1027e7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027e850(int *param_1,int param_2);
template<class... A> int FUN_1027e850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1027e870(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1027e870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1027e970(int param_1,int param_2);
template<class... A> int FUN_1027e970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e980(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1027e980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e9a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1027e9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e9c0(undefined4 param_1);
template<class... A> int FUN_1027e9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e9d0(undefined4 param_1);
template<class... A> int FUN_1027e9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e9e0(undefined4 param_1);
template<class... A> int FUN_1027e9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027e9f0(undefined4 param_1);
template<class... A> int FUN_1027e9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027ea00(undefined4 param_1);
template<class... A> int FUN_1027ea00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027ea10(void);
template<class... A> int FUN_1027ea10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1027ea20(void);
template<class... A> int FUN_1027ea20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1027ea30(void);
template<class... A> int FUN_1027ea30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1027ea40(void);
template<class... A> int FUN_1027ea40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1027ea50(void);
template<class... A> int FUN_1027ea50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1027ea60(void);
template<class... A> int FUN_1027ea60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1027ea70(void);
template<class... A> int FUN_1027ea70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1027ea80(int param_1,int param_2);
template<class... A> int FUN_1027ea80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027ea90(undefined4 *param_1);
template<class... A> int FUN_1027ea90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027eb10(undefined4 *param_1);
template<class... A> int FUN_1027eb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027eb80(undefined4 *param_1);
template<class... A> int FUN_1027eb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027ebe0(undefined4 *param_1);
template<class... A> int FUN_1027ebe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027ec40(undefined4 *param_1);
template<class... A> int FUN_1027ec40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027ec60(undefined4 *param_1);
template<class... A> int FUN_1027ec60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027ece0(undefined4 *param_1);
template<class... A> int FUN_1027ece0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027f130(undefined4 *param_1);
template<class... A> int FUN_1027f130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027f140(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1027f140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027f150(undefined4 *param_1);
template<class... A> int FUN_1027f150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027f160(undefined4 *param_1);
template<class... A> int FUN_1027f160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1027f940(undefined4 *param_1);
template<class... A> int FUN_1027f940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1027f950(undefined4 *param_1);
template<class... A> int FUN_1027f950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1027f960(undefined4 *param_1);
template<class... A> int FUN_1027f960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1027fb00(undefined4 *param_1);
template<class... A> int FUN_1027fb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fc70(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1027fc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fd00(undefined4 *param_1);
template<class... A> int FUN_1027fd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1027fd10(int *param_1);
template<class... A> int FUN_1027fd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fd20(undefined4 *param_1);
template<class... A> int FUN_1027fd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1027fd30(int *param_1);
template<class... A> int FUN_1027fd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1027fd40(int *param_1);
template<class... A> int FUN_1027fd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1027fd50(int *param_1);
template<class... A> int FUN_1027fd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fd60(undefined4 *param_1);
template<class... A> int FUN_1027fd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1027fd70(int *param_1);
template<class... A> int FUN_1027fd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fd80(undefined4 *param_1);
template<class... A> int FUN_1027fd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1027fd90(int *param_1);
template<class... A> int FUN_1027fd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1027fda0(int *param_1);
template<class... A> int FUN_1027fda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1027fdb0(int *param_1);
template<class... A> int FUN_1027fdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fdc0(undefined4 param_1);
template<class... A> int FUN_1027fdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fdd0(undefined4 *param_1);
template<class... A> int FUN_1027fdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fde0(undefined4 *param_1);
template<class... A> int FUN_1027fde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fdf0(undefined4 *param_1);
template<class... A> int FUN_1027fdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fe00(undefined4 *param_1);
template<class... A> int FUN_1027fe00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fe10(undefined4 *param_1);
template<class... A> int FUN_1027fe10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1027fe20(undefined4 *param_1);
template<class... A> int FUN_1027fe20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102804c0(int param_1);
template<class... A> int FUN_102804c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __stdcall FUN_10280e50(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10280e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280e70(undefined4 param_1);
template<class... A> int FUN_10280e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280e80(undefined4 param_1);
template<class... A> int FUN_10280e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280e90(undefined4 param_1);
template<class... A> int FUN_10280e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280ea0(undefined4 param_1);
template<class... A> int FUN_10280ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280eb0(undefined4 param_1);
template<class... A> int FUN_10280eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280ec0(undefined4 param_1);
template<class... A> int FUN_10280ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280ee0(undefined4 param_1);
template<class... A> int FUN_10280ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280ef0(undefined4 param_1);
template<class... A> int FUN_10280ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280f00(undefined4 param_1);
template<class... A> int FUN_10280f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10280f10(int param_1);
template<class... A> int FUN_10280f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10280f40(int *param_1);
template<class... A> int FUN_10280f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10280f70(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10280f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280f80(int param_1);
template<class... A> int FUN_10280f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10280f90(int param_1);
template<class... A> int FUN_10280f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280fa0(undefined4 *param_1);
template<class... A> int FUN_10280fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10280fb0(int param_1);
template<class... A> int FUN_10280fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102811c0(uint param_1);
template<class... A> int FUN_102811c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10281260(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10281260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102812b0(int param_1,int param_2);
template<class... A> int FUN_102812b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10281500(int param_1);
template<class... A> int FUN_10281500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102824f0(void);
template<class... A> int FUN_102824f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10282500(void);
template<class... A> int FUN_10282500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10282bd0(void);
template<class... A> int FUN_10282bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10282be0(void);
template<class... A> int FUN_10282be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10282bf0(void);
template<class... A> int FUN_10282bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10282c00(void);
template<class... A> int FUN_10282c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10282c10(void);
template<class... A> int FUN_10282c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10282c20(int param_1);
template<class... A> int FUN_10282c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10282c30(undefined4 param_1);
template<class... A> int __stdcall FUN_10282c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10282d30(undefined4 *param_1);
template<class... A> int FUN_10282d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10282d40(undefined4 *param_1);
template<class... A> int FUN_10282d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10282d50(undefined4 *param_1);
template<class... A> int FUN_10282d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10282d60(undefined4 *param_1);
template<class... A> int FUN_10282d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10282d70(undefined4 *param_1);
template<class... A> int FUN_10282d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10282d80(undefined4 *param_1);
template<class... A> int FUN_10282d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10282f80(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10282f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10283260(undefined4 *param_1);
template<class... A> int FUN_10283260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10283290(undefined4 *param_1);
template<class... A> int FUN_10283290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102832c0(undefined4 *param_1);
template<class... A> int FUN_102832c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102832f0(undefined4 *param_1);
template<class... A> int FUN_102832f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10283320(int *param_1);
template<class... A> int FUN_10283320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10283340(int *param_1);
template<class... A> int FUN_10283340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10283360(int *param_1);
template<class... A> int FUN_10283360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102833d0(undefined4 param_1);
template<class... A> int FUN_102833d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102833e0(undefined4 param_1);
template<class... A> int FUN_102833e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10283780(int param_1);
template<class... A> int FUN_10283780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102837f0(int param_1);
template<class... A> int FUN_102837f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10283960(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10283960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10283980(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10283980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10283a90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10283a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10283ad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_10283ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10283b10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10283b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10283c80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10283c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10283d10(void);
template<class... A> int FUN_10283d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10283d20(void);
template<class... A> int FUN_10283d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10283d30(void);
template<class... A> int FUN_10283d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10283e70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10283e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10283e80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10283e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102840d0(void);
template<class... A> int FUN_102840d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102848c0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_102848c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102848f0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_102848f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10284920(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10284920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10284940(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10284940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284960(undefined4 param_1);
template<class... A> int FUN_10284960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284970(undefined4 *param_1);
template<class... A> int FUN_10284970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284980(undefined4 *param_1);
template<class... A> int FUN_10284980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284990(undefined4 *param_1);
template<class... A> int FUN_10284990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_102849a0(int param_1,uint *param_2);
template<class... A> int FUN_102849a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_102849d0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_102849d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284a50(undefined4 param_1);
template<class... A> int FUN_10284a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10284a60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10284a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284a90(undefined4 param_1);
template<class... A> int FUN_10284a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284be0(undefined4 param_1);
template<class... A> int FUN_10284be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284bf0(undefined4 param_1);
template<class... A> int FUN_10284bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284c00(undefined4 param_1);
template<class... A> int FUN_10284c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284c10(undefined4 param_1);
template<class... A> int FUN_10284c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284c20(undefined4 param_1);
template<class... A> int FUN_10284c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284c30(undefined4 param_1);
template<class... A> int FUN_10284c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284c40(undefined4 param_1);
template<class... A> int FUN_10284c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10284c50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10284c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10284c60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10284c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10284c70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10284c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10284ca0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10284ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10284cd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10284cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10284d00(void);
template<class... A> int FUN_10284d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10284d80(int *param_1,int *param_2);
template<class... A> int FUN_10284d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284e90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10284e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284eb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10284eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284ed0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10284ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284ef0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10284ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10284f10(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
template<class... A> int FUN_10284f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284f40(undefined4 param_1);
template<class... A> int FUN_10284f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284f50(undefined4 param_1);
template<class... A> int FUN_10284f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284f60(undefined4 param_1);
template<class... A> int FUN_10284f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284f70(undefined4 param_1);
template<class... A> int FUN_10284f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284f80(undefined4 param_1);
template<class... A> int FUN_10284f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284f90(undefined4 param_1);
template<class... A> int FUN_10284f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284fa0(undefined4 param_1);
template<class... A> int FUN_10284fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284fb0(undefined4 param_1);
template<class... A> int FUN_10284fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284fc0(undefined4 param_1);
template<class... A> int FUN_10284fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284fd0(undefined4 param_1);
template<class... A> int FUN_10284fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284fe0(undefined4 param_1);
template<class... A> int FUN_10284fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10284ff0(undefined4 param_1);
template<class... A> int FUN_10284ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10285000(undefined4 param_1);
template<class... A> int FUN_10285000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10285010(undefined4 param_1);
template<class... A> int FUN_10285010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10285020(undefined4 param_1);
template<class... A> int FUN_10285020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10285030(undefined4 param_1);
template<class... A> int FUN_10285030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10285040(void);
template<class... A> int FUN_10285040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10285170(undefined4 param_1);
template<class... A> int FUN_10285170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10285180(undefined4 param_1);
template<class... A> int FUN_10285180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10285190(undefined4 param_1);
template<class... A> int FUN_10285190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102851a0(undefined4 *param_1);
template<class... A> int FUN_102851a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10285270(undefined4 *param_1);
template<class... A> int FUN_10285270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10285460(undefined4 *param_1);
template<class... A> int FUN_10285460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10285500(undefined4 *param_1);
template<class... A> int FUN_10285500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10285520(undefined4 param_1);
template<class... A> int FUN_10285520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10285530(undefined4 param_1);
template<class... A> int FUN_10285530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10285690(undefined4 *param_1);
template<class... A> int FUN_10285690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10285820(undefined4 *param_1);
template<class... A> int FUN_10285820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10285840(undefined4 *param_1);
template<class... A> int FUN_10285840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10285b50(undefined4 param_1);
template<class... A> int FUN_10285b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10285b80(int param_1);
template<class... A> int FUN_10285b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10285ba0(int param_1);
template<class... A> int FUN_10285ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10285c60(undefined4 *param_1);
template<class... A> int FUN_10285c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10285f90(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10285f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10285fa0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10285fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10285fd0(undefined4 *param_1);
template<class... A> int FUN_10285fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10285fe0(undefined4 *param_1);
template<class... A> int FUN_10285fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10285ff0(int *param_1);
template<class... A> int FUN_10285ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286000(undefined4 *param_1);
template<class... A> int FUN_10286000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286010(undefined4 *param_1);
template<class... A> int FUN_10286010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286020(undefined4 *param_1);
template<class... A> int FUN_10286020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10286030(int *param_1);
template<class... A> int FUN_10286030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10286040(int *param_1);
template<class... A> int FUN_10286040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286050(undefined4 *param_1);
template<class... A> int FUN_10286050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286060(undefined4 *param_1);
template<class... A> int FUN_10286060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10286170(int *param_1);
template<class... A> int FUN_10286170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_102861a0(uint *param_1,uint *param_2);
template<class... A> int FUN_102861a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102863f0(undefined4 *param_1);
template<class... A> int FUN_102863f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10286540(int param_1);
template<class... A> int FUN_10286540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10286560(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10286560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10286650(undefined4 param_1);
template<class... A> int __stdcall FUN_10286650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10286690(undefined4 param_1);
template<class... A> int FUN_10286690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102869f0(undefined4 param_1);
template<class... A> int FUN_102869f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286a00(undefined4 param_1);
template<class... A> int FUN_10286a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286a10(undefined4 param_1);
template<class... A> int FUN_10286a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286a20(undefined4 param_1);
template<class... A> int FUN_10286a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286a30(undefined4 param_1);
template<class... A> int FUN_10286a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286a40(undefined4 param_1);
template<class... A> int FUN_10286a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286a50(undefined4 param_1);
template<class... A> int FUN_10286a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286a60(undefined4 param_1);
template<class... A> int FUN_10286a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286a80(undefined4 param_1);
template<class... A> int FUN_10286a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286a90(undefined4 param_1);
template<class... A> int FUN_10286a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286aa0(undefined4 param_1);
template<class... A> int FUN_10286aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286ab0(undefined4 param_1);
template<class... A> int FUN_10286ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10286d50(undefined4 param_1);
template<class... A> int FUN_10286d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10286e30(int *param_1);
template<class... A> int FUN_10286e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10286e60(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10286e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10286e70(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10286e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10286e80(int param_1);
template<class... A> int FUN_10286e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10286e90(int param_1);
template<class... A> int FUN_10286e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10286ea0(undefined4 *param_1);
template<class... A> int FUN_10286ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102870b0(undefined4 *param_1);
template<class... A> int FUN_102870b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102870c0(undefined4 *param_1);
template<class... A> int FUN_102870c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102870d0(undefined1 *param_1);
template<class... A> int __stdcall FUN_102870d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102870e0(undefined1 *param_1);
template<class... A> int __stdcall FUN_102870e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102870f0(int param_1);
template<class... A> int FUN_102870f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10287100(int param_1);
template<class... A> int FUN_10287100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10287110(undefined4 *param_1);
template<class... A> int FUN_10287110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10287140(uint param_1);
template<class... A> int FUN_10287140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10287240(int *param_1);
template<class... A> int FUN_10287240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102872b0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_102872b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10287300(int param_1,int param_2);
template<class... A> int FUN_10287300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10289c20(void);
template<class... A> int FUN_10289c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1028a560(undefined4 param_1);
template<class... A> int __stdcall FUN_1028a560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028a570(void);
template<class... A> int FUN_1028a570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028a580(void);
template<class... A> int FUN_1028a580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028a590(void);
template<class... A> int FUN_1028a590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028a5a0(void);
template<class... A> int FUN_1028a5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028a5b0(undefined4 *param_1);
template<class... A> int FUN_1028a5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028a5c0(undefined4 *param_1);
template<class... A> int FUN_1028a5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028a5d0(undefined4 *param_1);
template<class... A> int FUN_1028a5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028a8a0(undefined4 *param_1);
template<class... A> int FUN_1028a8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028a8d0(undefined4 *param_1);
template<class... A> int FUN_1028a8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028a900(undefined4 *param_1);
template<class... A> int FUN_1028a900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028a930(undefined4 param_1);
template<class... A> int FUN_1028a930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028a940(undefined4 param_1);
template<class... A> int FUN_1028a940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1028b240(int *param_1);
template<class... A> int FUN_1028b240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028b270(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1028b270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028b290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1028b290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028b2f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1028b2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028b310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1028b310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028b540(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_1028b540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028b580(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1028b580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028b960(void);
template<class... A> int FUN_1028b960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028b980(void);
template<class... A> int FUN_1028b980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028bb00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1028bb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028bb10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1028bb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028bb20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1028bb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028bb30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1028bb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028bdc0(void);
template<class... A> int FUN_1028bdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028bdd0(void);
template<class... A> int FUN_1028bdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028c410(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1028c410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028c430(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1028c430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c550(undefined4 param_1);
template<class... A> int FUN_1028c550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1028c560(int param_1,undefined4 param_2);
template<class... A> int FUN_1028c560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1028c590(int param_1,SCStr *param_2);
template<class... A> int FUN_1028c590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028c5c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1028c5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c760(undefined4 param_1);
template<class... A> int FUN_1028c760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c770(undefined4 param_1);
template<class... A> int FUN_1028c770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c780(undefined4 param_1);
template<class... A> int FUN_1028c780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c790(undefined4 param_1);
template<class... A> int FUN_1028c790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c7a0(undefined4 param_1);
template<class... A> int FUN_1028c7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c7b0(undefined4 param_1);
template<class... A> int FUN_1028c7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c7c0(undefined4 param_1);
template<class... A> int FUN_1028c7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c7d0(undefined4 param_1);
template<class... A> int FUN_1028c7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c7e0(undefined4 param_1);
template<class... A> int FUN_1028c7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c7f0(undefined4 param_1);
template<class... A> int FUN_1028c7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028c800(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_1028c800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028c830(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1028c830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028c860(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1028c860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c970(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1028c970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c990(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1028c990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c9b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1028c9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c9d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1028c9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028ca40(undefined4 param_1);
template<class... A> int FUN_1028ca40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028ca50(undefined4 param_1);
template<class... A> int FUN_1028ca50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028ca60(undefined4 param_1);
template<class... A> int FUN_1028ca60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028ca70(undefined4 param_1);
template<class... A> int FUN_1028ca70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028ca80(undefined4 param_1);
template<class... A> int FUN_1028ca80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028ca90(undefined4 param_1);
template<class... A> int FUN_1028ca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028caa0(undefined4 param_1);
template<class... A> int FUN_1028caa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028cab0(undefined4 param_1);
template<class... A> int FUN_1028cab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028cac0(undefined4 param_1);
template<class... A> int FUN_1028cac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028cad0(undefined4 param_1);
template<class... A> int FUN_1028cad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028cae0(undefined4 param_1);
template<class... A> int FUN_1028cae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028caf0(undefined4 param_1);
template<class... A> int FUN_1028caf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1028cb00(void);
template<class... A> int FUN_1028cb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1028cb10(void);
template<class... A> int FUN_1028cb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028cb50(undefined4 param_1);
template<class... A> int FUN_1028cb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028cb60(undefined4 param_1);
template<class... A> int FUN_1028cb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028cb70(undefined4 param_1);
template<class... A> int FUN_1028cb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028cb80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1028cb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028cba0(undefined4 *param_1);
template<class... A> int FUN_1028cba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028cbd0(undefined4 *param_1);
template<class... A> int FUN_1028cbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028cc70(undefined4 *param_1);
template<class... A> int FUN_1028cc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028cfb0(undefined4 *param_1);
template<class... A> int FUN_1028cfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028cfd0(undefined4 *param_1);
template<class... A> int FUN_1028cfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028cff0(undefined4 param_1);
template<class... A> int FUN_1028cff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028d000(undefined4 param_1);
template<class... A> int FUN_1028d000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028d010(undefined4 *param_1);
template<class... A> int FUN_1028d010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028d1e0(undefined4 *param_1);
template<class... A> int FUN_1028d1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028d3b0(undefined4 *param_1);
template<class... A> int FUN_1028d3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028d400(undefined4 *param_1);
template<class... A> int FUN_1028d400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028d410(undefined4 *param_1);
template<class... A> int FUN_1028d410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028dcc0(undefined4 *param_1);
template<class... A> int FUN_1028dcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028dcd0(undefined4 *param_1);
template<class... A> int FUN_1028dcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028df70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1028df70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028e0d0(undefined4 *param_1);
template<class... A> int FUN_1028e0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1028e0e0(int *param_1);
template<class... A> int FUN_1028e0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1028e0f0(int *param_1);
template<class... A> int FUN_1028e0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028e100(undefined4 *param_1);
template<class... A> int FUN_1028e100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1028e110(int *param_1);
template<class... A> int FUN_1028e110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028e120(undefined4 *param_1);
template<class... A> int FUN_1028e120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028e130(undefined4 *param_1);
template<class... A> int FUN_1028e130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028e140(undefined4 *param_1);
template<class... A> int FUN_1028e140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028e150(undefined4 *param_1);
template<class... A> int FUN_1028e150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028e160(undefined4 *param_1);
template<class... A> int FUN_1028e160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028e170(undefined4 *param_1);
template<class... A> int FUN_1028e170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1028e180(int *param_1);
template<class... A> int FUN_1028e180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1028e190(int *param_1);
template<class... A> int FUN_1028e190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1028e1a0(int *param_1);
template<class... A> int FUN_1028e1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e620(undefined4 *param_1);
template<class... A> int FUN_1028e620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e650(undefined4 *param_1);
template<class... A> int FUN_1028e650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e6c0(int param_1);
template<class... A> int FUN_1028e6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e6e0(int param_1);
template<class... A> int FUN_1028e6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028e7b0(undefined4 param_1);
template<class... A> int FUN_1028e7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028eb10(undefined4 param_1);
template<class... A> int FUN_1028eb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028eb20(undefined4 param_1);
template<class... A> int FUN_1028eb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028eb30(undefined4 param_1);
template<class... A> int FUN_1028eb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028eb40(undefined4 param_1);
template<class... A> int FUN_1028eb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028eb50(undefined4 param_1);
template<class... A> int FUN_1028eb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028eb60(undefined4 param_1);
template<class... A> int FUN_1028eb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028eb70(undefined4 param_1);
template<class... A> int FUN_1028eb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028eb80(undefined4 param_1);
template<class... A> int FUN_1028eb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028eb90(undefined4 param_1);
template<class... A> int FUN_1028eb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028eba0(undefined4 param_1);
template<class... A> int FUN_1028eba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028ebb0(undefined4 param_1);
template<class... A> int FUN_1028ebb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028ebc0(undefined4 param_1);
template<class... A> int FUN_1028ebc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028ebe0(undefined4 param_1);
template<class... A> int FUN_1028ebe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028ebf0(undefined4 param_1);
template<class... A> int FUN_1028ebf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028ec00(undefined4 param_1);
template<class... A> int FUN_1028ec00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028f130(undefined4 param_1);
template<class... A> int FUN_1028f130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1028f220(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_1028f220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1028f2c0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1028f2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1028f2d0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1028f2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028f2e0(int param_1);
template<class... A> int FUN_1028f2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028f2f0(int param_1);
template<class... A> int FUN_1028f2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028f300(int param_1);
template<class... A> int FUN_1028f300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1028f430(undefined1 *param_1);
template<class... A> int __stdcall FUN_1028f430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10290110(uint param_1);
template<class... A> int FUN_10290110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10290210(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10290210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10290260(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10290260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102902b0(int param_1,int param_2);
template<class... A> int FUN_102902b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10290300(int param_1,int param_2);
template<class... A> int FUN_10290300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10290350(undefined4 *param_1);
template<class... A> int FUN_10290350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10290360(undefined4 *param_1);
template<class... A> int FUN_10290360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10291f60(undefined4 param_1);
template<class... A> int __stdcall FUN_10291f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10291f80(undefined4 param_1);
template<class... A> int __stdcall FUN_10291f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10293390(void);
template<class... A> int FUN_10293390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102933a0(void);
template<class... A> int FUN_102933a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102933e0(int *param_1);
template<class... A> int FUN_102933e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102933f0(int *param_1);
template<class... A> int FUN_102933f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10293400(int *param_1);
template<class... A> int FUN_10293400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10293430(int *param_1);
template<class... A> int FUN_10293430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __stdcall FUN_10293440(int param_1);
template<class... A> int __stdcall FUN_10293440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10293470(undefined4 param_1);
template<class... A> int __stdcall FUN_10293470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10293490(void);
template<class... A> int FUN_10293490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102934a0(void);
template<class... A> int FUN_102934a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102934b0(void);
template<class... A> int FUN_102934b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102934c0(void);
template<class... A> int FUN_102934c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102935c0(int param_1);
template<class... A> int FUN_102935c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102935d0(undefined4 *param_1);
template<class... A> int FUN_102935d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10293820(undefined4 *param_1);
template<class... A> int FUN_10293820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10293850(undefined4 *param_1);
template<class... A> int FUN_10293850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10293880(undefined4 *param_1);
template<class... A> int FUN_10293880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102938b0(undefined4 *param_1);
template<class... A> int FUN_102938b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10293ee0(undefined4 param_1);
template<class... A> int FUN_10293ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10293f00(int param_1);
template<class... A> int FUN_10293f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10293f10(int param_1);
template<class... A> int FUN_10293f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10293f60(int param_1);
template<class... A> int FUN_10293f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10293ff0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10293ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294010(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10294010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294070(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10294070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102943c0(void);
template<class... A> int FUN_102943c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102943d0(void);
template<class... A> int FUN_102943d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102943f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102943f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10294400(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10294400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10294410(void);
template<class... A> int FUN_10294410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102947f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102947f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102948b0(undefined4 param_1);
template<class... A> int FUN_102948b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102948c0(undefined4 param_1);
template<class... A> int FUN_102948c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_102948d0(int param_1,SCStr *param_2);
template<class... A> int FUN_102948d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294b80(undefined4 *param_1);
template<class... A> int FUN_10294b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294b90(undefined4 param_1);
template<class... A> int FUN_10294b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294ba0(undefined4 param_1);
template<class... A> int FUN_10294ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294bb0(undefined4 param_1);
template<class... A> int FUN_10294bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294bc0(undefined4 param_1);
template<class... A> int FUN_10294bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294bd0(undefined4 param_1);
template<class... A> int FUN_10294bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294be0(undefined4 param_1);
template<class... A> int FUN_10294be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10294bf0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10294bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10294c20(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10294c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10294c50(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10294c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10294d00(int *param_1,int *param_2);
template<class... A> int FUN_10294d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294d70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10294d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294d90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10294d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294db0(undefined4 param_1);
template<class... A> int FUN_10294db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294dc0(undefined4 param_1);
template<class... A> int FUN_10294dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294dd0(undefined4 param_1);
template<class... A> int FUN_10294dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294de0(undefined4 param_1);
template<class... A> int FUN_10294de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10294df0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10294df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10294e00(void);
template<class... A> int FUN_10294e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10294e10(void);
template<class... A> int FUN_10294e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10294e20(void);
template<class... A> int FUN_10294e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10294e30(undefined4 param_1);
template<class... A> int FUN_10294e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294e40(undefined4 *param_1);
template<class... A> int FUN_10294e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294f00(undefined4 *param_1);
template<class... A> int FUN_10294f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294f30(undefined4 *param_1);
template<class... A> int FUN_10294f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294f60(undefined4 *param_1);
template<class... A> int FUN_10294f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102951a0(undefined4 *param_1);
template<class... A> int FUN_102951a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102952e0(undefined4 *param_1);
template<class... A> int FUN_102952e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10295300(undefined4 param_1);
template<class... A> int FUN_10295300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10295310(undefined4 param_1);
template<class... A> int FUN_10295310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10295350(undefined4 *param_1);
template<class... A> int FUN_10295350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102953b0(undefined4 *param_1);
template<class... A> int FUN_102953b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102953c0(undefined4 *param_1);
template<class... A> int FUN_102953c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10295860(undefined4 *param_1);
template<class... A> int FUN_10295860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10295890(undefined4 *param_1);
template<class... A> int FUN_10295890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10295940(undefined4 *param_1);
template<class... A> int FUN_10295940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10295950(undefined4 *param_1);
template<class... A> int FUN_10295950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10295960(undefined4 *param_1);
template<class... A> int FUN_10295960(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10296300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10296710(void);
template<class... A> int FUN_10296710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10296720(void);
template<class... A> int FUN_10296720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10296730(undefined4 *param_1);
template<class... A> int FUN_10296730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102968b0(undefined4 *param_1);
template<class... A> int FUN_102968b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102968c0(undefined4 *param_1);
template<class... A> int FUN_102968c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102968f0(undefined4 *param_1);
template<class... A> int FUN_102968f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10296900(void);
template<class... A> int FUN_10296900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10296910(undefined4 *param_1);
template<class... A> int FUN_10296910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10296920(undefined4 *param_1);
template<class... A> int FUN_10296920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10296930(undefined4 *param_1);
template<class... A> int FUN_10296930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102969d0(undefined4 *param_1);
template<class... A> int FUN_102969d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10297160(undefined4 *param_1);
template<class... A> int FUN_10297160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10297170(int *param_1);
template<class... A> int FUN_10297170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10297180(int param_1);
template<class... A> int FUN_10297180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10297190(int param_1);
template<class... A> int FUN_10297190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102971a0(undefined4 *param_1);
template<class... A> int FUN_102971a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102971b0(int *param_1);
template<class... A> int FUN_102971b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102971c0(int *param_1);
template<class... A> int FUN_102971c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102971d0(undefined4 *param_1);
template<class... A> int FUN_102971d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102971e0(undefined4 *param_1);
template<class... A> int FUN_102971e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10297e10(undefined4 *param_1);
template<class... A> int FUN_10297e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10297e60(int param_1);
template<class... A> int FUN_10297e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102983e0(undefined4 param_1);
template<class... A> int FUN_102983e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102983f0(undefined4 param_1);
template<class... A> int FUN_102983f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10298400(undefined4 param_1);
template<class... A> int FUN_10298400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10298410(undefined4 param_1);
template<class... A> int FUN_10298410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10298420(undefined4 param_1);
template<class... A> int FUN_10298420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10298430(undefined4 param_1);
template<class... A> int FUN_10298430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10298440(undefined4 param_1);
template<class... A> int FUN_10298440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10298450(undefined4 param_1);
template<class... A> int FUN_10298450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10298760(int param_1);
template<class... A> int FUN_10298760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102987c0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_102987c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102987d0(int param_1);
template<class... A> int FUN_102987d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102995a0(int param_1);
template<class... A> int FUN_102995a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10299a30(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10299a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10299a80(int param_1,int param_2);
template<class... A> int FUN_10299a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029ade0(int param_1);
template<class... A> int FUN_1029ade0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_1029aeb0(int param_1);
template<class... A> int FUN_1029aeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029aee0(int param_1);
template<class... A> int FUN_1029aee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029af00(int param_1);
template<class... A> int FUN_1029af00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029b0e0(int param_1);
template<class... A> int FUN_1029b0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1029b0f0(int param_1);
template<class... A> int FUN_1029b0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029b100(int param_1);
template<class... A> int FUN_1029b100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029b120(int param_1);
template<class... A> int FUN_1029b120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029b130(int param_1);
template<class... A> int FUN_1029b130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1029b140(int param_1);
template<class... A> int FUN_1029b140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029b150(int param_1);
template<class... A> int FUN_1029b150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029b270(int param_1);
template<class... A> int FUN_1029b270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1029b3a0(int param_1);
template<class... A> int FUN_1029b3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_1029b3c0(int param_1);
template<class... A> int FUN_1029b3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1029b3d0(int param_1);
template<class... A> int FUN_1029b3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_1029b3e0(int param_1);
template<class... A> int FUN_1029b3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_1029b400(int param_1);
template<class... A> int FUN_1029b400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1029b420(int param_1);
template<class... A> int FUN_1029b420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1029b5f0(void);
template<class... A> int FUN_1029b5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1029b600(void);
template<class... A> int FUN_1029b600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1029b610(void);
template<class... A> int FUN_1029b610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1029b630(int *param_1);
template<class... A> int FUN_1029b630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1029b640(int *param_1);
template<class... A> int FUN_1029b640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1029b6c0(int param_1);
template<class... A> int FUN_1029b6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1029b770(void);
template<class... A> int FUN_1029b770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1029b780(void);
template<class... A> int FUN_1029b780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029c0e0(undefined4 *param_1);
template<class... A> int FUN_1029c0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029c7d0(undefined4 *param_1);
template<class... A> int FUN_1029c7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1029c940(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1029c940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1029cbe0(void);
template<class... A> int FUN_1029cbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cbf0(undefined4 *param_1);
template<class... A> int FUN_1029cbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cc20(undefined4 *param_1);
template<class... A> int FUN_1029cc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cc60(undefined4 *param_1);
template<class... A> int FUN_1029cc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cc80(undefined4 *param_1);
template<class... A> int FUN_1029cc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cca0(undefined4 *param_1);
template<class... A> int FUN_1029cca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cf10(undefined4 *param_1);
template<class... A> int FUN_1029cf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029d0e0(void);
template<class... A> int FUN_1029d0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029d0f0(void);
template<class... A> int FUN_1029d0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029d100(undefined4 *param_1);
template<class... A> int FUN_1029d100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029d1a0(undefined4 *param_1);
template<class... A> int FUN_1029d1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1029d9f0(void);
template<class... A> int FUN_1029d9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029db10(undefined4 *param_1);
template<class... A> int FUN_1029db10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029dc40(undefined4 *param_1);
template<class... A> int FUN_1029dc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029dc70(int *param_1);
template<class... A> int FUN_1029dc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1029de40(void);
template<class... A> int FUN_1029de40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029de50(undefined4 *param_1);
template<class... A> int FUN_1029de50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029de80(undefined4 *param_1);
template<class... A> int FUN_1029de80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 * __fastcall FUN_1029dec0(undefined2 *param_1);
template<class... A> int FUN_1029dec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029ded0(undefined4 *param_1);
template<class... A> int FUN_1029ded0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029dff0(undefined4 *param_1);
template<class... A> int FUN_1029dff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029e030(undefined4 *param_1);
template<class... A> int FUN_1029e030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029e0c0(undefined4 *param_1);
template<class... A> int FUN_1029e0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029e0d0(undefined4 *param_1);
template<class... A> int FUN_1029e0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029e160(undefined4 *param_1);
template<class... A> int FUN_1029e160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029e710(int param_1);
template<class... A> int FUN_1029e710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1029e720(void);
template<class... A> int FUN_1029e720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029e7f0(undefined4 *param_1);
template<class... A> int FUN_1029e7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029e920(undefined4 *param_1);
template<class... A> int FUN_1029e920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029ecc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1029ecc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1029ed40(undefined4 param_1);
template<class... A> int FUN_1029ed40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1029ed50(int param_1,SCStr *param_2);
template<class... A> int FUN_1029ed50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1029f000(undefined4 param_1);
template<class... A> int FUN_1029f000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029f010(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_1029f010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029f040(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_1029f040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1029f070(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1029f070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1029f090(undefined4 param_1);
template<class... A> int FUN_1029f090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1029f0a0(undefined4 param_1);
template<class... A> int FUN_1029f0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1029f0b0(void);
template<class... A> int FUN_1029f0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029f0c0(undefined4 *param_1);
template<class... A> int FUN_1029f0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029f1f0(undefined4 *param_1);
template<class... A> int FUN_1029f1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029f590(undefined4 *param_1);
template<class... A> int FUN_1029f590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029f8b0(undefined4 *param_1);
template<class... A> int FUN_1029f8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fa50(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1029fa50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fa70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_1029fa70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fab0(undefined4 param_1);
template<class... A> int FUN_1029fab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fad0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1029fad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029fb10(int param_1);
template<class... A> int FUN_1029fb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029fb30(undefined4 param_1);
template<class... A> int FUN_1029fb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029fb40(undefined4 param_1);
template<class... A> int FUN_1029fb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029fb50(undefined4 param_1);
template<class... A> int FUN_1029fb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029fb60(undefined4 param_1);
template<class... A> int FUN_1029fb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029fb70(undefined4 param_1);
template<class... A> int FUN_1029fb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1029fe80(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1029fe80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1029fe90(int param_1);
template<class... A> int FUN_1029fe90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1029ff50(int param_1,int param_2);
template<class... A> int FUN_1029ff50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102a0910(int param_1);
template<class... A> int FUN_102a0910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102a1500(void);
template<class... A> int FUN_102a1500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a1510(void);
template<class... A> int FUN_102a1510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a1520(void);
template<class... A> int FUN_102a1520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102a1630(undefined4 *param_1);
template<class... A> int FUN_102a1630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102a1760(undefined4 *param_1);
template<class... A> int FUN_102a1760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a1830(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102a1830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a1850(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102a1850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a1870(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102a1870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a1890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102a1890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a18b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102a18b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a18d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102a18d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a18f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102a18f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a1990(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_102a1990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a19b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_102a19b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a19d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_102a19d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a19f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_102a19f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a1d10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_102a1d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a1d50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_102a1d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a1d70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102a1d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a1d90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102a1d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a1db0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102a1db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a1dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102a1dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2cd0(void);
template<class... A> int FUN_102a2cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2e50(void);
template<class... A> int FUN_102a2e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2e70(void);
template<class... A> int FUN_102a2e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2e90(void);
template<class... A> int FUN_102a2e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2eb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a2eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2ec0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a2ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2ed0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a2ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2ee0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a2ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2ef0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a2ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2f80(void);
template<class... A> int FUN_102a2f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2f90(void);
template<class... A> int FUN_102a2f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2fa0(int param_1,int param_2);
template<class... A> int FUN_102a2fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a4570(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102a4570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a4590(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102a4590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a45b0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102a45b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a45d0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102a45d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a46f0(undefined4 *param_1);
template<class... A> int FUN_102a46f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a4700(undefined4 *param_1);
template<class... A> int FUN_102a4700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a4710(undefined4 *param_1);
template<class... A> int FUN_102a4710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a4720(undefined4 *param_1);
template<class... A> int FUN_102a4720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a4730(undefined4 param_1);
template<class... A> int FUN_102a4730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a4740(undefined4 param_1);
template<class... A> int FUN_102a4740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a4750(undefined4 param_1);
template<class... A> int FUN_102a4750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_102a4760(int param_1,uint *param_2);
template<class... A> int FUN_102a4760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a48f0(void);
template<class... A> int FUN_102a48f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a4900(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a4900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a4920(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a4920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5000(undefined4 *param_1);
template<class... A> int FUN_102a5000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5010(undefined4 *param_1);
template<class... A> int FUN_102a5010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a50d0(undefined4 param_1);
template<class... A> int FUN_102a50d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a50e0(undefined4 param_1);
template<class... A> int FUN_102a50e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a50f0(undefined4 param_1);
template<class... A> int FUN_102a50f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5100(undefined4 param_1);
template<class... A> int FUN_102a5100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5530(undefined4 param_1);
template<class... A> int FUN_102a5530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5540(undefined4 param_1);
template<class... A> int FUN_102a5540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5550(undefined4 param_1);
template<class... A> int FUN_102a5550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5560(undefined4 param_1);
template<class... A> int FUN_102a5560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5570(undefined4 param_1);
template<class... A> int FUN_102a5570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5580(undefined4 param_1);
template<class... A> int FUN_102a5580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5590(undefined4 param_1);
template<class... A> int FUN_102a5590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a55a0(undefined4 param_1);
template<class... A> int FUN_102a55a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a55b0(undefined4 param_1);
template<class... A> int FUN_102a55b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a55c0(undefined4 param_1);
template<class... A> int FUN_102a55c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a55d0(undefined4 param_1);
template<class... A> int FUN_102a55d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a55e0(undefined4 param_1);
template<class... A> int FUN_102a55e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102a5650(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_102a5650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102a5690(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_102a5690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102a56d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_102a56d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5710(int *param_1,int param_2);
template<class... A> int FUN_102a5710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102a5730(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102a5730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5750(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_102a5750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5770(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_102a5770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5790(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_102a5790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a57d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_102a57d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a57f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_102a57f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a58e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102a58e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5910(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102a5910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5940(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102a5940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5970(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102a5970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a59a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102a59a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a59d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102a59d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5a00(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_102a5a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5a20(void);
template<class... A> int FUN_102a5a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5aa0(undefined4 param_1,int *param_2);
template<class... A> int FUN_102a5aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102a5c40(int param_1,int param_2);
template<class... A> int FUN_102a5c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5d30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a5d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5d50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a5d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5d70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a5d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5d90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a5d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5db0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a5db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5dd0(undefined4 param_1);
template<class... A> int FUN_102a5dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5de0(undefined4 param_1);
template<class... A> int FUN_102a5de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5df0(undefined4 param_1);
template<class... A> int FUN_102a5df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5e00(undefined4 param_1);
template<class... A> int FUN_102a5e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5e10(undefined4 param_1);
template<class... A> int FUN_102a5e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5e20(undefined4 param_1);
template<class... A> int FUN_102a5e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5e30(undefined4 param_1);
template<class... A> int FUN_102a5e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5e40(undefined4 param_1);
template<class... A> int FUN_102a5e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5e50(undefined4 param_1);
template<class... A> int FUN_102a5e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5e60(undefined4 param_1);
template<class... A> int FUN_102a5e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5e70(undefined4 param_1);
template<class... A> int FUN_102a5e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5e80(undefined4 param_1);
template<class... A> int FUN_102a5e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5e90(undefined4 param_1);
template<class... A> int FUN_102a5e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5ea0(undefined4 param_1);
template<class... A> int FUN_102a5ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5eb0(undefined4 param_1);
template<class... A> int FUN_102a5eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5ec0(undefined4 param_1);
template<class... A> int FUN_102a5ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5ed0(undefined4 param_1);
template<class... A> int FUN_102a5ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5ee0(undefined4 param_1);
template<class... A> int FUN_102a5ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5ef0(undefined4 param_1);
template<class... A> int FUN_102a5ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5f00(undefined4 param_1);
template<class... A> int FUN_102a5f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5f10(undefined4 param_1);
template<class... A> int FUN_102a5f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5f20(undefined4 param_1);
template<class... A> int FUN_102a5f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5f30(undefined4 param_1);
template<class... A> int FUN_102a5f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5f40(undefined4 param_1);
template<class... A> int FUN_102a5f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5f50(undefined4 param_1);
template<class... A> int FUN_102a5f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5f60(undefined4 param_1);
template<class... A> int FUN_102a5f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5f70(undefined4 param_1);
template<class... A> int FUN_102a5f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5f80(undefined4 param_1);
template<class... A> int FUN_102a5f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5f90(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_102a5f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5fa0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_102a5fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5fb0(void);
template<class... A> int FUN_102a5fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a5fc0(void);
template<class... A> int FUN_102a5fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102a5fd0(void);
template<class... A> int FUN_102a5fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102a5fe0(void);
template<class... A> int FUN_102a5fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102a5ff0(void);
template<class... A> int FUN_102a5ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102a6000(void);
template<class... A> int FUN_102a6000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a6160(undefined4 param_1);
template<class... A> int FUN_102a6160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a6170(undefined4 param_1);
template<class... A> int FUN_102a6170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a6180(undefined4 param_1);
template<class... A> int FUN_102a6180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a6190(undefined4 param_1);
template<class... A> int FUN_102a6190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a61a0(undefined4 param_1);
template<class... A> int FUN_102a61a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a61b0(undefined4 param_1);
template<class... A> int FUN_102a61b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a61c0(undefined4 param_1);
template<class... A> int FUN_102a61c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a61d0(undefined4 param_1);
template<class... A> int FUN_102a61d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a61e0(undefined4 param_1);
template<class... A> int FUN_102a61e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a61f0(undefined4 param_1);
template<class... A> int FUN_102a61f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102a6200(undefined4 param_1);
template<class... A> int FUN_102a6200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102a6210(int param_1,int param_2);
template<class... A> int FUN_102a6210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a6220(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a6220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a6240(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102a6240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6260(undefined4 *param_1);
template<class... A> int FUN_102a6260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6300(undefined4 *param_1);
template<class... A> int FUN_102a6300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6330(undefined4 *param_1);
template<class... A> int FUN_102a6330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a63a0(undefined4 *param_1);
template<class... A> int FUN_102a63a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6430(undefined4 *param_1);
template<class... A> int FUN_102a6430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6450(undefined4 *param_1);
template<class... A> int FUN_102a6450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a64b0(undefined4 *param_1);
template<class... A> int FUN_102a64b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a64d0(undefined4 *param_1);
template<class... A> int FUN_102a64d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6520(undefined4 *param_1);
template<class... A> int FUN_102a6520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a65b0(undefined4 *param_1);
template<class... A> int FUN_102a65b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6640(undefined4 *param_1);
template<class... A> int FUN_102a6640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a66d0(undefined4 *param_1);
template<class... A> int FUN_102a66d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6a70(undefined4 *param_1);
template<class... A> int FUN_102a6a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6a90(undefined4 *param_1);
template<class... A> int FUN_102a6a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6ab0(undefined4 *param_1);
template<class... A> int FUN_102a6ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6b50(undefined4 *param_1);
template<class... A> int FUN_102a6b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6b70(undefined4 *param_1);
template<class... A> int FUN_102a6b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6b90(undefined4 *param_1);
template<class... A> int FUN_102a6b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6bb0(undefined4 *param_1);
template<class... A> int FUN_102a6bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102a6bd0(undefined4 param_1);
template<class... A> int FUN_102a6bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102a6be0(undefined4 param_1);
template<class... A> int FUN_102a6be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102a6bf0(undefined4 param_1);
template<class... A> int FUN_102a6bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102a6c00(undefined4 param_1);
template<class... A> int FUN_102a6c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102a6c10(undefined4 param_1);
template<class... A> int FUN_102a6c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102a6c20(undefined4 param_1);
template<class... A> int FUN_102a6c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102a6c30(undefined4 param_1);
template<class... A> int FUN_102a6c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6ca0(undefined4 *param_1);
template<class... A> int FUN_102a6ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6d50(undefined4 *param_1);
template<class... A> int FUN_102a6d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6da0(undefined4 *param_1);
template<class... A> int FUN_102a6da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6df0(undefined4 *param_1);
template<class... A> int FUN_102a6df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6f80(undefined4 *param_1);
template<class... A> int FUN_102a6f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6fa0(undefined4 *param_1);
template<class... A> int FUN_102a6fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6fc0(undefined4 *param_1);
template<class... A> int FUN_102a6fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a70a0(undefined4 *param_1);
template<class... A> int FUN_102a70a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a7100(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102a7100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a7110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102a7110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a7a40(undefined4 *param_1);
template<class... A> int FUN_102a7a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a7a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102a7a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a7a60(undefined4 *param_1);
template<class... A> int FUN_102a7a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a7a70(undefined4 *param_1);
template<class... A> int FUN_102a7a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a7a80(undefined4 *param_1);
template<class... A> int FUN_102a7a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a8ec0(undefined4 *param_1);
template<class... A> int FUN_102a8ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102a9720(int param_1);
template<class... A> int FUN_102a9720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102a97e0(int param_1);
template<class... A> int FUN_102a97e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102a9b90(undefined4 *param_1);
template<class... A> int FUN_102a9b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102a9f20(undefined4 *param_1);
template<class... A> int FUN_102a9f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102a9f30(undefined4 *param_1);
template<class... A> int FUN_102a9f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102a9f40(undefined4 *param_1);
template<class... A> int FUN_102a9f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102aa880(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102aa880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102aa890(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102aa890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102aaa70(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102aaa70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab1f0(undefined4 *param_1);
template<class... A> int FUN_102ab1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab200(undefined4 *param_1);
template<class... A> int FUN_102ab200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ab210(int *param_1);
template<class... A> int FUN_102ab210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102ab220(undefined4 *param_1);
template<class... A> int FUN_102ab220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ab230(int *param_1);
template<class... A> int FUN_102ab230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102ab240(int *param_1);
template<class... A> int FUN_102ab240(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);
extern void __fastcall thunk_FUN_1125bd20(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_RLookupV1CertInfoAIOOp_;

// Reference entry 102636d0; body size 26 bytes.
extern int __stdcall thunk_FUN_10116710(int a1,int a2);
extern int __stdcall thunk_FUN_10117000(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_101a3370(int a1,int a2);
extern int __stdcall thunk_FUN_102207b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1027e130(int a1,int a2);
extern int __stdcall thunk_FUN_1027e470(int a1,int a2);
extern int __stdcall thunk_FUN_10283f20(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10284760(int a1);
extern int __stdcall thunk_FUN_102847c0(int a1,int a2);
extern int __stdcall thunk_FUN_1028bbd0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1028e330(int a1,int a2);
extern int __stdcall thunk_FUN_102909a0(int a1,int a2);
extern int __stdcall thunk_FUN_10292500(int a1,int a2);
extern int __stdcall thunk_FUN_103beae0(int a1,int a2);
extern int __stdcall thunk_FUN_1059d940(int a1);
extern int __stdcall thunk_FUN_110f6450(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_110f7c60(int a1,int a2);
extern int __stdcall thunk_FUN_1124a160(int a1);
extern int __stdcall thunk_FUN_1125ba00(int a1,int a2);
extern int __stdcall thunk_FUN_1125bbd0(int a1);
extern int __stdcall thunk_FUN_1125bcf0(int a1);
struct SCFp_44_4 { char _p[44]; int (__thiscall *v)(int a1,int a2,int a3,int a4); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_2_2 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2); };
struct SCVtbl_5_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(void); };
struct SCVtbl_6_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(void); };
struct SCVtbl_7_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(int a1); };
struct SCVtbl_8_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_9_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(int a1,int a2); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_4_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(void); };
struct SCVtbl_11_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(void); };
struct SCVtbl_13_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual int v(void); };
int FUN_10005a79();
int FUN_1006fe74(void);
int FUN_1006fe74(...);
template<class... A> int FUN_1006fe74(A...);
#line 1 "ENTRY_102636d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102636d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 102637f0; body size 78 bytes.
#line 1 "ENTRY_102637f0"

__declspec(naked) void FUN_102637f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 10263860; body size 78 bytes.
#line 1 "ENTRY_10263860"

__declspec(naked) void FUN_10263860(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 102638d0; body size 3 bytes.
#line 1 "ENTRY_102638d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102638d0(void)

{
  return;
}


// Reference entry 102638e0; body size 25 bytes.
#line 1 "ENTRY_102638e0"

__declspec(naked) void FUN_102638e0(void)

{
  __asm push 0x18
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}





// Reference entry 10263a20; body size 13 bytes.
#line 1 "ENTRY_10263a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10263a20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10263a30; body size 13 bytes.
#line 1 "ENTRY_10263a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10263a30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10263a40; body size 3 bytes.
#line 1 "ENTRY_10263a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10263a40(void)

{
  return;
}


// Reference entry 10263b90; body size 39 bytes.
#line 1 "ENTRY_10263b90"

__declspec(naked) void FUN_10263b90(void)

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





// Reference entry 10263bc0; body size 39 bytes.
#line 1 "ENTRY_10263bc0"

__declspec(naked) void FUN_10263bc0(void)

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





// Reference entry 10263bf0; body size 39 bytes.
#line 1 "ENTRY_10263bf0"

__declspec(naked) void FUN_10263bf0(void)

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





// Reference entry 10263c20; body size 39 bytes.
#line 1 "ENTRY_10263c20"

__declspec(naked) void FUN_10263c20(void)

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





// Reference entry 10263c50; body size 39 bytes.
#line 1 "ENTRY_10263c50"

__declspec(naked) void FUN_10263c50(void)

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





// Reference entry 10263c80; body size 39 bytes.
#line 1 "ENTRY_10263c80"

__declspec(naked) void FUN_10263c80(void)

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





// Reference entry 102647f0; body size 15 bytes.
#line 1 "ENTRY_102647f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102647f0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10264890; body size 7 bytes.
#line 1 "ENTRY_10264890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10264890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102648a0; body size 7 bytes.
#line 1 "ENTRY_102648a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102648a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102648b0; body size 7 bytes.
#line 1 "ENTRY_102648b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102648b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10264a00; body size 5 bytes.
#line 1 "ENTRY_10264a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10264a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10264a10; body size 37 bytes.
#line 1 "ENTRY_10264a10"

__declspec(naked) void FUN_10264a10(void)

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





// Reference entry 10264b50; body size 5 bytes.
#line 1 "ENTRY_10264b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10264b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10264b60; body size 5 bytes.
#line 1 "ENTRY_10264b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10264b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10264df0; body size 5 bytes.
#line 1 "ENTRY_10264df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10264df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10264e00; body size 5 bytes.
#line 1 "ENTRY_10264e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10264e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10264e40; body size 5 bytes.
#line 1 "ENTRY_10264e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10264e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10264e50; body size 5 bytes.
#line 1 "ENTRY_10264e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10264e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10264e60; body size 5 bytes.
#line 1 "ENTRY_10264e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10264e60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10264e70; body size 5 bytes.
#line 1 "ENTRY_10264e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10264e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10264e80; body size 27 bytes.
#line 1 "ENTRY_10264e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10264e80(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_3 + 4));
  return;
}


// Reference entry 10264eb0; body size 28 bytes.
#line 1 "ENTRY_10264eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10264eb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10264ee0; body size 28 bytes.
#line 1 "ENTRY_10264ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10264ee0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10264f10; body size 28 bytes.
#line 1 "ENTRY_10264f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10264f10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10264f40; body size 28 bytes.
#line 1 "ENTRY_10264f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10264f40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10265160; body size 15 bytes.
#line 1 "ENTRY_10265160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265160(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10265180; body size 15 bytes.
#line 1 "ENTRY_10265180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265180(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102651a0; body size 5 bytes.
#line 1 "ENTRY_102651a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102651a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102651b0; body size 5 bytes.
#line 1 "ENTRY_102651b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102651b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102651c0; body size 5 bytes.
#line 1 "ENTRY_102651c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102651c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102651d0; body size 5 bytes.
#line 1 "ENTRY_102651d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102651d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102651e0; body size 5 bytes.
#line 1 "ENTRY_102651e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102651e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102651f0; body size 5 bytes.
#line 1 "ENTRY_102651f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102651f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265200; body size 5 bytes.
#line 1 "ENTRY_10265200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265210; body size 5 bytes.
#line 1 "ENTRY_10265210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265220; body size 5 bytes.
#line 1 "ENTRY_10265220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265230; body size 5 bytes.
#line 1 "ENTRY_10265230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265240; body size 5 bytes.
#line 1 "ENTRY_10265240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265250; body size 5 bytes.
#line 1 "ENTRY_10265250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265260; body size 5 bytes.
#line 1 "ENTRY_10265260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265270; body size 5 bytes.
#line 1 "ENTRY_10265270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265280; body size 5 bytes.
#line 1 "ENTRY_10265280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265290; body size 5 bytes.
#line 1 "ENTRY_10265290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102652a0; body size 5 bytes.
#line 1 "ENTRY_102652a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102652a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102652b0; body size 5 bytes.
#line 1 "ENTRY_102652b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102652b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102652c0; body size 5 bytes.
#line 1 "ENTRY_102652c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102652c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102652d0; body size 5 bytes.
#line 1 "ENTRY_102652d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102652d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102652e0; body size 5 bytes.
#line 1 "ENTRY_102652e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102652e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102652f0; body size 5 bytes.
#line 1 "ENTRY_102652f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102652f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265300; body size 5 bytes.
#line 1 "ENTRY_10265300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265370; body size 5 bytes.
#line 1 "ENTRY_10265370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265380; body size 5 bytes.
#line 1 "ENTRY_10265380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265390; body size 6 bytes.
#line 1 "ENTRY_10265390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10265390(void)

{
  return (char *)("SCILandingPage");
}


// Reference entry 102653a0; body size 6 bytes.
#line 1 "ENTRY_102653a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102653a0(void)

{
  return (char *)("SCILandingPageSection");
}


// Reference entry 102653b0; body size 6 bytes.
#line 1 "ENTRY_102653b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102653b0(void)

{
  return (char *)("SCILandingPageTile");
}


// Reference entry 10265660; body size 5 bytes.
#line 1 "ENTRY_10265660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265670; body size 5 bytes.
#line 1 "ENTRY_10265670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10265670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265760; body size 27 bytes.
#line 1 "ENTRY_10265760"

__declspec(naked) void FUN_10265760(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188ba64
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10265790; body size 27 bytes.
#line 1 "ENTRY_10265790"

__declspec(naked) void FUN_10265790(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188b9e4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 102657c0; body size 27 bytes.
#line 1 "ENTRY_102657c0"

__declspec(naked) void FUN_102657c0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188b94c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 102657f0; body size 16 bytes.
#line 1 "ENTRY_102657f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102657f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10265810; body size 32 bytes.
#line 1 "ENTRY_10265810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10265810(undefined4 *param_2)
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


// Reference entry 10265880; body size 32 bytes.
#line 1 "ENTRY_10265880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10265880(undefined4 *param_2)
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


// Reference entry 10265930; body size 32 bytes.
#line 1 "ENTRY_10265930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10265930(undefined4 *param_2)
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


// Reference entry 102659e0; body size 16 bytes.
#line 1 "ENTRY_102659e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102659e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10265a20; body size 18 bytes.
#line 1 "ENTRY_10265a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10265a20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10265a40; body size 3 bytes.
#line 1 "ENTRY_10265a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10265a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265a50; body size 3 bytes.
#line 1 "ENTRY_10265a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10265a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265aa0; body size 11 bytes.
#line 1 "ENTRY_10265aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10265aa0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10265b30; body size 11 bytes.
#line 1 "ENTRY_10265b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10265b30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10265b40; body size 16 bytes.
#line 1 "ENTRY_10265b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10265b40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10265b60; body size 21 bytes.
#line 1 "ENTRY_10265b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10265b60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10265b80; body size 21 bytes.
#line 1 "ENTRY_10265b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10265b80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10265ba0; body size 23 bytes.
#line 1 "ENTRY_10265ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10265ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10265bc0; body size 23 bytes.
#line 1 "ENTRY_10265bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10265bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10265be0; body size 3 bytes.
#line 1 "ENTRY_10265be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10265be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265bf0; body size 3 bytes.
#line 1 "ENTRY_10265bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10265bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265c00; body size 3 bytes.
#line 1 "ENTRY_10265c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10265c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10265c10; body size 18 bytes.
#line 1 "ENTRY_10265c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10265c10(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10265db0; body size 33 bytes.
#line 1 "ENTRY_10265db0"

__declspec(naked) void FUN_10265db0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm push esi
  __asm mov dword ptr [esp + 0xc], edi
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10265de0; body size 23 bytes.
#line 1 "ENTRY_10265de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10265de0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10265e00; body size 23 bytes.
#line 1 "ENTRY_10265e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10265e00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10265e20; body size 9 bytes.
#line 1 "ENTRY_10265e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10265e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILandingPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10265e30; body size 9 bytes.
#line 1 "ENTRY_10265e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10265e30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILandingPageSection);
  return (undefined4 *)(param_1);
}


// Reference entry 10265e40; body size 9 bytes.
#line 1 "ENTRY_10265e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10265e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILandingPageTile);
  return (undefined4 *)(param_1);
}


// Reference entry 102670f0; body size 7 bytes.
#line 1 "ENTRY_102670f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102670f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10267100; body size 7 bytes.
#line 1 "ENTRY_10267100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10267100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10267110; body size 7 bytes.
#line 1 "ENTRY_10267110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10267110(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10267650; body size 14 bytes.
#line 1 "ENTRY_10267650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10267650(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10267670; body size 12 bytes.
#line 1 "ENTRY_10267670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10267670(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10267680; body size 12 bytes.
#line 1 "ENTRY_10267680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10267680(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10267690; body size 7 bytes.
#line 1 "ENTRY_10267690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10267690(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102676a0; body size 7 bytes.
#line 1 "ENTRY_102676a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102676a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102676b0; body size 3 bytes.
#line 1 "ENTRY_102676b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102676b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102676c0; body size 3 bytes.
#line 1 "ENTRY_102676c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102676c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102676d0; body size 7 bytes.
#line 1 "ENTRY_102676d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102676d0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102676e0; body size 7 bytes.
#line 1 "ENTRY_102676e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102676e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102676f0; body size 3 bytes.
#line 1 "ENTRY_102676f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102676f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10267700; body size 3 bytes.
#line 1 "ENTRY_10267700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10267700(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10267710; body size 3 bytes.
#line 1 "ENTRY_10267710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10267710(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10267720; body size 3 bytes.
#line 1 "ENTRY_10267720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10267720(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10267730; body size 3 bytes.
#line 1 "ENTRY_10267730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10267730(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10267740; body size 3 bytes.
#line 1 "ENTRY_10267740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10267740(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10267750; body size 3 bytes.
#line 1 "ENTRY_10267750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10267750(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10267760; body size 3 bytes.
#line 1 "ENTRY_10267760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10267760(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10267770; body size 3 bytes.
#line 1 "ENTRY_10267770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10267770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10267780; body size 3 bytes.
#line 1 "ENTRY_10267780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10267780(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10267790; body size 6 bytes.
#line 1 "ENTRY_10267790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10267790(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 102677a0; body size 6 bytes.
#line 1 "ENTRY_102677a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102677a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10268330; body size 31 bytes.
#line 1 "ENTRY_10268330"

__declspec(naked) void FUN_10268330(void)

{
  __asm push esi
  __asm push 0x18
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





// Reference entry 10268380; body size 49 bytes.
#line 1 "ENTRY_10268380"

__declspec(naked) void FUN_10268380(void)

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





// Reference entry 102683c0; body size 49 bytes.
#line 1 "ENTRY_102683c0"

__declspec(naked) void FUN_102683c0(void)

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





// Reference entry 10268520; body size 14 bytes.
#line 1 "ENTRY_10268520"

__declspec(naked) void FUN_10268520(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 10268850; body size 5 bytes.
#line 1 "ENTRY_10268850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10268850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10268890; body size 3 bytes.
#line 1 "ENTRY_10268890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10268890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102688a0; body size 3 bytes.
#line 1 "ENTRY_102688a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102688a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102688b0; body size 3 bytes.
#line 1 "ENTRY_102688b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102688b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102688c0; body size 3 bytes.
#line 1 "ENTRY_102688c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102688c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102688d0; body size 3 bytes.
#line 1 "ENTRY_102688d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102688d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102688e0; body size 3 bytes.
#line 1 "ENTRY_102688e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102688e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102688f0; body size 3 bytes.
#line 1 "ENTRY_102688f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102688f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10268900; body size 3 bytes.
#line 1 "ENTRY_10268900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10268900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10268910; body size 3 bytes.
#line 1 "ENTRY_10268910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10268910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10268920; body size 3 bytes.
#line 1 "ENTRY_10268920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10268920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10268930; body size 3 bytes.
#line 1 "ENTRY_10268930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10268930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10268940; body size 3 bytes.
#line 1 "ENTRY_10268940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10268940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10268950; body size 3 bytes.
#line 1 "ENTRY_10268950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10268950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10268960; body size 3 bytes.
#line 1 "ENTRY_10268960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10268960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10268970; body size 3 bytes.
#line 1 "ENTRY_10268970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10268970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10268980; body size 3 bytes.
#line 1 "ENTRY_10268980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10268980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10268c20; body size 79 bytes.
#line 1 "ENTRY_10268c20"

__declspec(naked) void FUN_10268c20(void)

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





// Reference entry 10268c90; body size 30 bytes.
#line 1 "ENTRY_10268c90"

__declspec(naked) void FUN_10268c90(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0e __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf5
  __asm mov eax, ecx
  __asm ret
}





// Reference entry 10268cc0; body size 31 bytes.
#line 1 "ENTRY_10268cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10268cc0(int *param_1)

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


// Reference entry 10268d40; body size 3 bytes.
#line 1 "ENTRY_10268d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10268d40(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10268d50; body size 3 bytes.
#line 1 "ENTRY_10268d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10268d50(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10268d60; body size 11 bytes.
#line 1 "ENTRY_10268d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10268d60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10268d70; body size 6 bytes.
#line 1 "ENTRY_10268d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10268d70(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10268d80; body size 6 bytes.
#line 1 "ENTRY_10268d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10268d80(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10268d90; body size 83 bytes.
#line 1 "ENTRY_10268d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10268d90(int *param_2)
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


// Reference entry 102694c0; body size 90 bytes.
#line 1 "ENTRY_102694c0"

__declspec(naked) void FUN_102694c0(void)

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





// Reference entry 10269540; body size 87 bytes.
#line 1 "ENTRY_10269540"

__declspec(naked) void FUN_10269540(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x1fffffff
  __asm _emit 0x77 __asm _emit 0x47
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





// Reference entry 102695b0; body size 87 bytes.
#line 1 "ENTRY_102695b0"

__declspec(naked) void FUN_102695b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x1fffffff
  __asm _emit 0x77 __asm _emit 0x47
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





// Reference entry 10269c70; body size 3 bytes.
#line 1 "ENTRY_10269c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10269c70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1026ad30; body size 9 bytes.
#line 1 "ENTRY_1026ad30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1026ad30(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 1026ad40; body size 9 bytes.
#line 1 "ENTRY_1026ad40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1026ad40(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 1026ad50; body size 57 bytes.
#line 1 "ENTRY_1026ad50"

__declspec(naked) void FUN_1026ad50(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 3
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





// Reference entry 1026ada0; body size 60 bytes.
#line 1 "ENTRY_1026ada0"

__declspec(naked) void FUN_1026ada0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 3
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





// Reference entry 1026ae90; body size 9 bytes.
#line 1 "ENTRY_1026ae90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026ae90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1026aea0; body size 9 bytes.
#line 1 "ENTRY_1026aea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026aea0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1026aeb0; body size 32 bytes.
#line 1 "ENTRY_1026aeb0"

__declspec(naked) void FUN_1026aeb0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0
  __asm push 0
  __asm push ecx
  __asm mov esi, ecx
  __asm mov ecx, esp
  __asm push offset LAB_1187b4f4
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}





// Reference entry 1026af60; body size 11 bytes.
#line 1 "ENTRY_1026af60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026af60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1026af70; body size 4 bytes.
#line 1 "ENTRY_1026af70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026af70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1026c000; body size 6 bytes.
#line 1 "ENTRY_1026c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1026c000(void)

{
  return (char *)("SCILandingPage");
}


// Reference entry 1026c010; body size 6 bytes.
#line 1 "ENTRY_1026c010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1026c010(void)

{
  return (char *)("SCILandingPageSection");
}


// Reference entry 1026c020; body size 6 bytes.
#line 1 "ENTRY_1026c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1026c020(void)

{
  return (char *)("SCILandingPageTile");
}


// Reference entry 1026c140; body size 7 bytes.
#line 1 "ENTRY_1026c140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1026c140(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 1026c160; body size 7 bytes.
#line 1 "ENTRY_1026c160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1026c160(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1026c170; body size 7 bytes.
#line 1 "ENTRY_1026c170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1026c170(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1026c380; body size 6 bytes.
#line 1 "ENTRY_1026c380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026c380(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 1026c390; body size 6 bytes.
#line 1 "ENTRY_1026c390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026c390(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1026c3a0; body size 6 bytes.
#line 1 "ENTRY_1026c3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026c3a0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1026c3b0; body size 6 bytes.
#line 1 "ENTRY_1026c3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026c3b0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 1026c3c0; body size 6 bytes.
#line 1 "ENTRY_1026c3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026c3c0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1026c3d0; body size 6 bytes.
#line 1 "ENTRY_1026c3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026c3d0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1026c880; body size 32 bytes.
#line 1 "ENTRY_1026c880"

__declspec(naked) void FUN_1026c880(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0
  __asm push 0
  __asm push ecx
  __asm mov esi, ecx
  __asm mov ecx, esp
  __asm push offset LAB_1187b514
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}





// Reference entry 1026ca60; body size 5 bytes.
#line 1 "ENTRY_1026ca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026ca60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1026cc20; body size 3 bytes.
#line 1 "ENTRY_1026cc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026cc20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1026cc30; body size 3 bytes.
#line 1 "ENTRY_1026cc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026cc30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1026cc40; body size 3 bytes.
#line 1 "ENTRY_1026cc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026cc40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1026cc50; body size 3 bytes.
#line 1 "ENTRY_1026cc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026cc50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1026d0e0; body size 28 bytes.
#line 1 "ENTRY_1026d0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1026d0e0(undefined4 *param_1)

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


// Reference entry 1026d110; body size 28 bytes.
#line 1 "ENTRY_1026d110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1026d110(undefined4 *param_1)

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


// Reference entry 1026d140; body size 28 bytes.
#line 1 "ENTRY_1026d140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1026d140(undefined4 *param_1)

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


// Reference entry 1026d170; body size 28 bytes.
#line 1 "ENTRY_1026d170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1026d170(undefined4 *param_1)

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


// Reference entry 1026d1a0; body size 28 bytes.
#line 1 "ENTRY_1026d1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1026d1a0(undefined4 *param_1)

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


// Reference entry 1026d450; body size 71 bytes.
#line 1 "ENTRY_1026d450"

__declspec(naked) void FUN_1026d450(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm push offset LAB_1188bc9c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x2e
  __asm push offset LAB_1188bca4
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, 1
  __asm pop esi
  __asm ret
  __asm push offset LAB_1188bcb0
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, 2
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}





// Reference entry 1026d540; body size 36 bytes.
#line 1 "ENTRY_1026d540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d540(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x24));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1026d570; body size 36 bytes.
#line 1 "ENTRY_1026d570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d570(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x1c));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1026d5a0; body size 36 bytes.
#line 1 "ENTRY_1026d5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d5a0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x18));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1026d5d0; body size 36 bytes.
#line 1 "ENTRY_1026d5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d5d0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x28));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1026d600; body size 36 bytes.
#line 1 "ENTRY_1026d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d600(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x20));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1026d630; body size 10 bytes.
#line 1 "ENTRY_1026d630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d630(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x2c) = (undefined1)(param_2);
  return;
}


// Reference entry 1026d640; body size 36 bytes.
#line 1 "ENTRY_1026d640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d640(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x14));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1026d670; body size 36 bytes.
#line 1 "ENTRY_1026d670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d670(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x14));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1026d6a0; body size 36 bytes.
#line 1 "ENTRY_1026d6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d6a0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x34));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1026d6d0; body size 36 bytes.
#line 1 "ENTRY_1026d6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d6d0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x10));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1026d700; body size 36 bytes.
#line 1 "ENTRY_1026d700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d700(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x10));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1026d730; body size 36 bytes.
#line 1 "ENTRY_1026d730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1026d730(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x30));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1026d760; body size 9 bytes.
#line 1 "ENTRY_1026d760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1026d760(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 1026d770; body size 9 bytes.
#line 1 "ENTRY_1026d770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1026d770(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 1026d7e0; body size 25 bytes.
#line 1 "ENTRY_1026d7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1026d7e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1026d800; body size 26 bytes.
#line 1 "ENTRY_1026d800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1026d800(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1026d820; body size 6 bytes.
#line 1 "ENTRY_1026d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1026d820(void)

{
  return (char *)("SCILogging");
}


// Reference entry 1026d830; body size 27 bytes.
#line 1 "ENTRY_1026d830"

__declspec(naked) void FUN_1026d830(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188be0c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1026d860; body size 16 bytes.
#line 1 "ENTRY_1026d860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1026d860(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1026d8c0; body size 9 bytes.
#line 1 "ENTRY_1026d8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1026d8c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILogging);
  return (undefined4 *)(param_1);
}


// Reference entry 1026d8d0; body size 47 bytes.
#line 1 "ENTRY_1026d8d0"

__declspec(naked) void FUN_1026d8d0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188be0c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], offset LAB_1188be40
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 1026d910; body size 19 bytes.
#line 1 "ENTRY_1026d910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1026d910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1026da70; body size 7 bytes.
#line 1 "ENTRY_1026da70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1026da70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1026db80; body size 7 bytes.
#line 1 "ENTRY_1026db80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1026db80(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1026db90; body size 3 bytes.
#line 1 "ENTRY_1026db90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026db90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1026dba0; body size 3 bytes.
#line 1 "ENTRY_1026dba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026dba0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1026dce0; body size 9 bytes.
#line 1 "ENTRY_1026dce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026dce0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1026e040; body size 6 bytes.
#line 1 "ENTRY_1026e040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1026e040(void)

{
  return (char *)("SCILogging");
}


// Reference entry 1026e050; body size 3 bytes.
#line 1 "ENTRY_1026e050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026e050(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1026e1f0; body size 28 bytes.
#line 1 "ENTRY_1026e1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1026e1f0(undefined4 *param_1)

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


// Reference entry 1026e220; body size 28 bytes.
#line 1 "ENTRY_1026e220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1026e220(undefined4 *param_1)

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


// Reference entry 1026e2d0; body size 39 bytes.
#line 1 "ENTRY_1026e2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1026e2d0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_1[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1026e380; body size 26 bytes.
#line 1 "ENTRY_1026e380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1026e380(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1026e4a0; body size 78 bytes.
#line 1 "ENTRY_1026e4a0"

__declspec(naked) void FUN_1026e4a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 1026e510; body size 12 bytes.
#line 1 "ENTRY_1026e510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1026e510(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1026e5f0; body size 39 bytes.
#line 1 "ENTRY_1026e5f0"

__declspec(naked) void FUN_1026e5f0(void)

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





// Reference entry 1026e8e0; body size 93 bytes.
#line 1 "ENTRY_1026e8e0"

__declspec(naked) void FUN_1026e8e0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp edi, ebx
  __asm _emit 0x74 __asm _emit 0x48
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm mov eax, dword ptr [edi - 8]
  __asm sub edi, 8
  __asm sub esi, 8
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
  __asm cmp edi, ebx
  __asm _emit 0x75 __asm _emit 0xc3
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





// Reference entry 1026e9c0; body size 5 bytes.
#line 1 "ENTRY_1026e9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026e9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1026e9f0; body size 5 bytes.
#line 1 "ENTRY_1026e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026e9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1026ea00; body size 5 bytes.
#line 1 "ENTRY_1026ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026ea00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1026ea10; body size 28 bytes.
#line 1 "ENTRY_1026ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1026ea10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1026ed00; body size 5 bytes.
#line 1 "ENTRY_1026ed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026ed00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1026ed30; body size 5 bytes.
#line 1 "ENTRY_1026ed30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026ed30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1026ed40; body size 5 bytes.
#line 1 "ENTRY_1026ed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026ed40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1026ed50; body size 5 bytes.
#line 1 "ENTRY_1026ed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1026ed50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1026f090; body size 27 bytes.
#line 1 "ENTRY_1026f090"

__declspec(naked) void FUN_1026f090(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188bed8
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1026f100; body size 16 bytes.
#line 1 "ENTRY_1026f100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1026f100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1026f120; body size 16 bytes.
#line 1 "ENTRY_1026f120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1026f120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1026f140; body size 32 bytes.
#line 1 "ENTRY_1026f140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1026f140(undefined4 *param_2)
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


// Reference entry 1026f1b0; body size 3 bytes.
#line 1 "ENTRY_1026f1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026f1b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1026f1c0; body size 3 bytes.
#line 1 "ENTRY_1026f1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1026f1c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1026f1d0; body size 10 bytes.
#line 1 "ENTRY_1026f1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1026f1d0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1026f1e0; body size 10 bytes.
#line 1 "ENTRY_1026f1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1026f1e0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1026f1f0; body size 10 bytes.
#line 1 "ENTRY_1026f1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1026f1f0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1026f200; body size 11 bytes.
#line 1 "ENTRY_1026f200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1026f200(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1026f210; body size 11 bytes.
#line 1 "ENTRY_1026f210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1026f210(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1026f2a0; body size 42 bytes.
#line 1 "ENTRY_1026f2a0"

__declspec(naked) void FUN_1026f2a0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1188bfc8
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1026f360; body size 9 bytes.
#line 1 "ENTRY_1026f360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1026f360(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIMusicServiceDetail);
  return (undefined4 *)(param_1);
}


// Reference entry 1026ff20; body size 19 bytes.
#line 1 "ENTRY_1026ff20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1026ff20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1026ffb0; body size 7 bytes.
#line 1 "ENTRY_1026ffb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1026ffb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102701c0; body size 65 bytes.
#line 1 "ENTRY_102701c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102701c0(int *param_2)
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


// Reference entry 10270300; body size 12 bytes.
#line 1 "ENTRY_10270300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10270300(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10270310; body size 3 bytes.
#line 1 "ENTRY_10270310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10270320; body size 3 bytes.
#line 1 "ENTRY_10270320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270320(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10270330; body size 3 bytes.
#line 1 "ENTRY_10270330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270330(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10270340; body size 8 bytes.
#line 1 "ENTRY_10270340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10270340(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10270350; body size 3 bytes.
#line 1 "ENTRY_10270350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270350(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10270360; body size 3 bytes.
#line 1 "ENTRY_10270360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270360(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10270370; body size 3 bytes.
#line 1 "ENTRY_10270370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270370(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10270380; body size 3 bytes.
#line 1 "ENTRY_10270380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10270390; body size 3 bytes.
#line 1 "ENTRY_10270390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102703a0; body size 3 bytes.
#line 1 "ENTRY_102703a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102703a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10270650; body size 29 bytes.
#line 1 "ENTRY_10270650"

__declspec(naked) void FUN_10270650(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x11
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}





// Reference entry 10270a80; body size 8 bytes.
#line 1 "ENTRY_10270a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10270a80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10270a90; body size 8 bytes.
#line 1 "ENTRY_10270a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10270a90(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10270aa0; body size 8 bytes.
#line 1 "ENTRY_10270aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10270aa0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10270ad0; body size 3 bytes.
#line 1 "ENTRY_10270ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10270ae0; body size 3 bytes.
#line 1 "ENTRY_10270ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10270af0; body size 4 bytes.
#line 1 "ENTRY_10270af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270af0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10270b00; body size 4 bytes.
#line 1 "ENTRY_10270b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270b00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10270b10; body size 4 bytes.
#line 1 "ENTRY_10270b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270b10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10270b20; body size 7 bytes.
#line 1 "ENTRY_10270b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10270b20(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10270b30; body size 7 bytes.
#line 1 "ENTRY_10270b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10270b30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10270b40; body size 7 bytes.
#line 1 "ENTRY_10270b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10270b40(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10270b50; body size 13 bytes.
#line 1 "ENTRY_10270b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10270b50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10270ba0; body size 26 bytes.
#line 1 "ENTRY_10270ba0"

__declspec(naked) void FUN_10270ba0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x08
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}





// Reference entry 10270bc0; body size 10 bytes.
#line 1 "ENTRY_10270bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10270bc0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10270bd0; body size 10 bytes.
#line 1 "ENTRY_10270bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10270bd0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10270be0; body size 10 bytes.
#line 1 "ENTRY_10270be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10270be0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10270da0; body size 3 bytes.
#line 1 "ENTRY_10270da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270da0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10270db0; body size 3 bytes.
#line 1 "ENTRY_10270db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270db0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10270dc0; body size 4 bytes.
#line 1 "ENTRY_10270dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270dc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10270dd0; body size 4 bytes.
#line 1 "ENTRY_10270dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10270dd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10270ee0; body size 11 bytes.
#line 1 "ENTRY_10270ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10270ee0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10271260; body size 9 bytes.
#line 1 "ENTRY_10271260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10271260(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10271270; body size 9 bytes.
#line 1 "ENTRY_10271270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10271270(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10271280; body size 9 bytes.
#line 1 "ENTRY_10271280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10271280(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10271290; body size 32 bytes.
#line 1 "ENTRY_10271290"

__declspec(naked) void FUN_10271290(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x16
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}





// Reference entry 102713f0; body size 24 bytes.
#line 1 "ENTRY_102713f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_102713f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1026eab0<>(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10271420; body size 7 bytes.
#line 1 "ENTRY_10271420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10271420(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10271430; body size 7 bytes.
#line 1 "ENTRY_10271430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10271430(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10271440; body size 7 bytes.
#line 1 "ENTRY_10271440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10271440(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10271450; body size 7 bytes.
#line 1 "ENTRY_10271450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10271450(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10271780; body size 3 bytes.
#line 1 "ENTRY_10271780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10271780(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10271790; body size 3 bytes.
#line 1 "ENTRY_10271790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10271790(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102717a0; body size 3 bytes.
#line 1 "ENTRY_102717a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102717a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102719a0; body size 28 bytes.
#line 1 "ENTRY_102719a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102719a0(undefined4 *param_1)

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


// Reference entry 102719d0; body size 28 bytes.
#line 1 "ENTRY_102719d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102719d0(undefined4 *param_1)

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


// Reference entry 10271a00; body size 28 bytes.
#line 1 "ENTRY_10271a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10271a00(undefined4 *param_1)

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


// Reference entry 10271a30; body size 28 bytes.
#line 1 "ENTRY_10271a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10271a30(undefined4 *param_1)

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


// Reference entry 10271a60; body size 28 bytes.
#line 1 "ENTRY_10271a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10271a60(undefined4 *param_1)

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


// Reference entry 10271a90; body size 28 bytes.
#line 1 "ENTRY_10271a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10271a90(undefined4 *param_1)

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


// Reference entry 10271ad0; body size 9 bytes.
#line 1 "ENTRY_10271ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10271ad0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10271c90; body size 25 bytes.
#line 1 "ENTRY_10271c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10271c90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10271cb0; body size 25 bytes.
#line 1 "ENTRY_10271cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10271cb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10271cd0; body size 11 bytes.
#line 1 "ENTRY_10271cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10271cd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  return (undefined4 *)(param_1);
}


// Reference entry 10271dd0; body size 11 bytes.
#line 1 "ENTRY_10271dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10271dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  return (undefined4 *)(param_1);
}


// Reference entry 10271de0; body size 19 bytes.
#line 1 "ENTRY_10271de0"

__declspec(naked) void FUN_10271de0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188c214
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx + 0x24], ecx
  __asm pop ecx
  __asm ret 4
}





// Reference entry 102720c0; body size 26 bytes.
#line 1 "ENTRY_102720c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102720c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 102720e0; body size 25 bytes.
#line 1 "ENTRY_102720e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102720e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10272100; body size 26 bytes.
#line 1 "ENTRY_10272100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10272100(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10272120; body size 78 bytes.
#line 1 "ENTRY_10272120"

__declspec(naked) void FUN_10272120(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 10272190; body size 12 bytes.
#line 1 "ENTRY_10272190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10272190(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 102721a0; body size 3 bytes.
#line 1 "ENTRY_102721a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102721a0(void)

{
  return;
}


// Reference entry 102721b0; body size 3 bytes.
#line 1 "ENTRY_102721b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102721b0(void)

{
  return;
}


// Reference entry 10272910; body size 64 bytes.
#line 1 "ENTRY_10272910"

__declspec(naked) void FUN_10272910(void)

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





// Reference entry 10272d10; body size 13 bytes.
#line 1 "ENTRY_10272d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10272d10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10273070; body size 39 bytes.
#line 1 "ENTRY_10273070"

__declspec(naked) void FUN_10273070(void)

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





// Reference entry 10273130; body size 39 bytes.
#line 1 "ENTRY_10273130"

__declspec(naked) void FUN_10273130(void)

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





// Reference entry 10273160; body size 39 bytes.
#line 1 "ENTRY_10273160"

__declspec(naked) void FUN_10273160(void)

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





// Reference entry 10273390; body size 22 bytes.
#line 1 "ENTRY_10273390"

__declspec(naked) void FUN_10273390(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x71c71c7
  __asm ja LAB_10070f3b
  __asm lea eax, [eax + eax*8]
  __asm shl eax, 2
  __asm ret
}





// Reference entry 102733b0; body size 7 bytes.
#line 1 "ENTRY_102733b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102733b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102733c0; body size 7 bytes.
#line 1 "ENTRY_102733c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102733c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102733d0; body size 7 bytes.
#line 1 "ENTRY_102733d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102733d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102733e0; body size 7 bytes.
#line 1 "ENTRY_102733e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102733e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102733f0; body size 7 bytes.
#line 1 "ENTRY_102733f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102733f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10273640; body size 16 bytes.
#line 1 "ENTRY_10273640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10273640(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1 >> 3);
}


// Reference entry 10273660; body size 3 bytes.
#line 1 "ENTRY_10273660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10273660(void)

{
  return;
}


// Reference entry 10273670; body size 3 bytes.
#line 1 "ENTRY_10273670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10273670(void)

{
  return;
}


// Reference entry 10273680; body size 3 bytes.
#line 1 "ENTRY_10273680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10273680(void)

{
  return;
}


// Reference entry 10273690; body size 3 bytes.
#line 1 "ENTRY_10273690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10273690(void)

{
  return;
}


// Reference entry 102736a0; body size 12 bytes.
#line 1 "ENTRY_102736a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102736a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[9] = (undefined4)(param_1);
  return;
}


// Reference entry 10273820; body size 3 bytes.
#line 1 "ENTRY_10273820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10273820(void)

{
  return (undefined1)(1);
}


// Reference entry 10273830; body size 3 bytes.
#line 1 "ENTRY_10273830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10273830(void)

{
  return (undefined1)(1);
}


// Reference entry 10273870; body size 24 bytes.
#line 1 "ENTRY_10273870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10273870(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10273980(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10273950; body size 5 bytes.
#line 1 "ENTRY_10273950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10273950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10273960; body size 5 bytes.
#line 1 "ENTRY_10273960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10273960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10273970; body size 5 bytes.
#line 1 "ENTRY_10273970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10273970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10273b80; body size 5 bytes.
#line 1 "ENTRY_10273b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10273b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10273b90; body size 5 bytes.
#line 1 "ENTRY_10273b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10273b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10273bd0; body size 5 bytes.
#line 1 "ENTRY_10273bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10273bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10273be0; body size 5 bytes.
#line 1 "ENTRY_10273be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10273be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10273bf0; body size 5 bytes.
#line 1 "ENTRY_10273bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10273bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10273c00; body size 5 bytes.
#line 1 "ENTRY_10273c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10273c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10273c10; body size 5 bytes.
#line 1 "ENTRY_10273c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10273c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10273c20; body size 5 bytes.
#line 1 "ENTRY_10273c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10273c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10273c30; body size 18 bytes.
#line 1 "ENTRY_10273c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10273c30(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 8);
  return;
}


// Reference entry 10273c50; body size 17 bytes.
#line 1 "ENTRY_10273c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10273c50(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 0x24);
  return;
}


// Reference entry 10273c70; body size 20 bytes.
#line 1 "ENTRY_10273c70"

__declspec(naked) void FUN_10273c70(void)

{
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_100384a1
  __asm ret 8
}





// Reference entry 10273d10; body size 28 bytes.
#line 1 "ENTRY_10273d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10273d10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10273d40; body size 28 bytes.
#line 1 "ENTRY_10273d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10273d40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10273d70; body size 28 bytes.
#line 1 "ENTRY_10273d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10273d70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10273ef0; body size 12 bytes.
#line 1 "ENTRY_10273ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10273ef0(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 10273f00; body size 26 bytes.
#line 1 "ENTRY_10273f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10273f00(int param_1,int param_2)

{
  return (int)((param_2 - param_1) / 0x24);
}


// Reference entry 10274170; body size 15 bytes.
#line 1 "ENTRY_10274170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10274170(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10274190; body size 15 bytes.
#line 1 "ENTRY_10274190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10274190(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102741b0; body size 5 bytes.
#line 1 "ENTRY_102741b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102741b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102741c0; body size 5 bytes.
#line 1 "ENTRY_102741c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102741c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102741d0; body size 5 bytes.
#line 1 "ENTRY_102741d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102741d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10274210; body size 5 bytes.
#line 1 "ENTRY_10274210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10274210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10274220; body size 5 bytes.
#line 1 "ENTRY_10274220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10274220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10274230; body size 5 bytes.
#line 1 "ENTRY_10274230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10274230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10274240; body size 5 bytes.
#line 1 "ENTRY_10274240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10274240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10274250; body size 5 bytes.
#line 1 "ENTRY_10274250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10274250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10274290; body size 5 bytes.
#line 1 "ENTRY_10274290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10274290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102742a0; body size 5 bytes.
#line 1 "ENTRY_102742a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102742a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102742b0; body size 6 bytes.
#line 1 "ENTRY_102742b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102742b0(void)

{
  return (char *)("SCIMusicServiceMenu");
}


// Reference entry 10274670; body size 5 bytes.
#line 1 "ENTRY_10274670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10274670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10274680; body size 5 bytes.
#line 1 "ENTRY_10274680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10274680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102746c0; body size 5 bytes.
#line 1 "ENTRY_102746c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102746c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102746d0; body size 5 bytes.
#line 1 "ENTRY_102746d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102746d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102746e0; body size 12 bytes.
#line 1 "ENTRY_102746e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102746e0(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 8);
}


// Reference entry 102746f0; body size 15 bytes.
#line 1 "ENTRY_102746f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102746f0(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 0x24);
}


// Reference entry 10274a20; body size 27 bytes.
#line 1 "ENTRY_10274a20"

__declspec(naked) void FUN_10274a20(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188c090
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10274a90; body size 16 bytes.
#line 1 "ENTRY_10274a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10274a90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10274ab0; body size 32 bytes.
#line 1 "ENTRY_10274ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10274ab0(undefined4 *param_2)
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


// Reference entry 10274b20; body size 32 bytes.
#line 1 "ENTRY_10274b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10274b20(undefined4 *param_2)
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


// Reference entry 10274b90; body size 3 bytes.
#line 1 "ENTRY_10274b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10274b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10274ba0; body size 3 bytes.
#line 1 "ENTRY_10274ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10274ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10274bb0; body size 10 bytes.
#line 1 "ENTRY_10274bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10274bb0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10274bc0; body size 10 bytes.
#line 1 "ENTRY_10274bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10274bc0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10274bd0; body size 10 bytes.
#line 1 "ENTRY_10274bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10274bd0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10274be0; body size 18 bytes.
#line 1 "ENTRY_10274be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10274be0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10274c00; body size 21 bytes.
#line 1 "ENTRY_10274c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10274c00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10274c20; body size 21 bytes.
#line 1 "ENTRY_10274c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10274c20(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10274c40; body size 11 bytes.
#line 1 "ENTRY_10274c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10274c40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10274c50; body size 11 bytes.
#line 1 "ENTRY_10274c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10274c50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10274c60; body size 11 bytes.
#line 1 "ENTRY_10274c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10274c60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10274c70; body size 11 bytes.
#line 1 "ENTRY_10274c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10274c70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10274c80; body size 23 bytes.
#line 1 "ENTRY_10274c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10274c80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10274ca0; body size 23 bytes.
#line 1 "ENTRY_10274ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10274ca0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10274cc0; body size 3 bytes.
#line 1 "ENTRY_10274cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10274cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10274cd0; body size 3 bytes.
#line 1 "ENTRY_10274cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10274cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10274d60; body size 18 bytes.
#line 1 "ENTRY_10274d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10274d60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10274d80; body size 18 bytes.
#line 1 "ENTRY_10274d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10274d80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10274da0; body size 23 bytes.
#line 1 "ENTRY_10274da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10274da0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10274dc0; body size 23 bytes.
#line 1 "ENTRY_10274dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10274dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10274de0; body size 42 bytes.
#line 1 "ENTRY_10274de0"

__declspec(naked) void FUN_10274de0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1188c15c
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10274e20; body size 9 bytes.
#line 1 "ENTRY_10274e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10274e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIMusicServiceMenu);
  return (undefined4 *)(param_1);
}


// Reference entry 102759b0; body size 5 bytes.
#line 1 "ENTRY_102759b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102759b0(undefined4 *param_1)

{ __asm jmp FUN_10005a79 }


// Reference entry 10275a40; body size 19 bytes.
#line 1 "ENTRY_10275a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10275a40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10275a70; body size 7 bytes.
#line 1 "ENTRY_10275a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10275a70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10275d70; body size 65 bytes.
#line 1 "ENTRY_10275d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10275d70(int *param_2)
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


// Reference entry 10276090; body size 60 bytes.
#line 1 "ENTRY_10276090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10276090(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_10277f40();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102760e0; body size 31 bytes.
#line 1 "ENTRY_102760e0"

__declspec(naked) void FUN_102760e0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp esi, eax
  __asm _emit 0x74 __asm _emit 0x0e
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call LAB_100384a1
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 10276110; body size 60 bytes.
#line 1 "ENTRY_10276110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10276110(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_10277f40();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102762a0; body size 14 bytes.
#line 1 "ENTRY_102762a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_102762a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102762c0; body size 14 bytes.
#line 1 "ENTRY_102762c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_102762c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102762e0; body size 15 bytes.
#line 1 "ENTRY_102762e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_102762e0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x24);
}


// Reference entry 10276300; body size 12 bytes.
#line 1 "ENTRY_10276300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10276300(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10276310; body size 3 bytes.
#line 1 "ENTRY_10276310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10276310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10276320; body size 3 bytes.
#line 1 "ENTRY_10276320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10276320(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10276330; body size 3 bytes.
#line 1 "ENTRY_10276330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10276330(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10276340; body size 3 bytes.
#line 1 "ENTRY_10276340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10276340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10276350; body size 8 bytes.
#line 1 "ENTRY_10276350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10276350(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10276360; body size 3 bytes.
#line 1 "ENTRY_10276360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10276360(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10276370; body size 3 bytes.
#line 1 "ENTRY_10276370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10276370(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10276380; body size 3 bytes.
#line 1 "ENTRY_10276380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10276380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10276390; body size 6 bytes.
#line 1 "ENTRY_10276390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10276390(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 102763a0; body size 6 bytes.
#line 1 "ENTRY_102763a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_102763a0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10276690; body size 29 bytes.
#line 1 "ENTRY_10276690"

__declspec(naked) void FUN_10276690(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x11
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}





// Reference entry 10276de0; body size 131 bytes.
#line 1 "ENTRY_10276de0"

__declspec(naked) void FUN_10276de0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm cmp eax, 0x71c71c7
  __asm _emit 0x77 __asm _emit 0x6f
  __asm lea esi, [eax + eax*8]
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





// Reference entry 10276e90; body size 30 bytes.
#line 1 "ENTRY_10276e90"

__declspec(naked) void FUN_10276e90(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_1002d6d2
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + esi*8]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}





// Reference entry 10276ec0; body size 63 bytes.
#line 1 "ENTRY_10276ec0"

__declspec(naked) void FUN_10276ec0(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov eax, 0x38e38e39
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x71c71c7
  __asm imul edx
  __asm push esi
  __asm sar edx, 3
  __asm mov esi, edx
  __asm shr esi, 0x1f
  __asm add esi, edx
  __asm mov edx, esi
  __asm _emit 0xd1 __asm _emit 0xea
  __asm sub ecx, edx
  __asm cmp esi, ecx
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x71c71c7
  __asm pop esi
  __asm ret 4
  __asm lea eax, [edx + esi]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}





// Reference entry 10276f10; body size 49 bytes.
#line 1 "ENTRY_10276f10"

__declspec(naked) void FUN_10276f10(void)

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





// Reference entry 10277170; body size 182 bytes.
#line 1 "ENTRY_10277170"

__declspec(naked) void FUN_10277170(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp ebx, 0x1fffffff
  __asm ja LAB_10277221
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov eax, 0x1fffffff
  __asm push ebp
  __asm mov ebp, dword ptr [esi]
  __asm sub ecx, ebp
  __asm sar ecx, 3
  __asm mov edx, ecx
  __asm _emit 0xd1 __asm _emit 0xea
  __asm sub eax, edx
  __asm push edi
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov edi, 0x1fffffff
  __asm _emit 0xeb __asm _emit 0x08
  __asm lea edi, [edx + ecx]
  __asm cmp edi, ebx
  __asm cmovb edi, ebx
  __asm test ebp, ebp
  __asm _emit 0x74 __asm _emit 0x4f
  __asm push esi
  __asm push dword ptr [esi + 4]
  __asm push ebp
  __asm call LAB_1000f178
  __asm mov ecx, dword ptr [esi + 8]
  __asm add esp, 0xc
  __asm mov eax, dword ptr [esi]
  __asm sub ecx, eax
  __asm and ecx, 0xfffffff8
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x3a
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push edi
  __asm mov ecx, esi
  __asm call LAB_1002d6d2
  __asm mov dword ptr [esi], eax
  __asm mov dword ptr [esi + 4], eax
  __asm lea eax, [eax + edi*8]
  __asm pop edi
  __asm pop ebp
  __asm mov dword ptr [esi + 8], eax
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_10015370
}





// Reference entry 10277260; body size 3 bytes.
#line 1 "ENTRY_10277260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10277260(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10277480; body size 21 bytes.
#line 1 "ENTRY_10277480"

__declspec(naked) void FUN_10277480(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push dword ptr [esp + 4]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call LAB_100384a1
  __asm ret 8
}





// Reference entry 10277610; body size 20 bytes.
#line 1 "ENTRY_10277610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10277610(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10272ea0(param_2,param_3,param_1);
  return;
}


// Reference entry 10277aa0; body size 8 bytes.
#line 1 "ENTRY_10277aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10277aa0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10277ab0; body size 8 bytes.
#line 1 "ENTRY_10277ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10277ab0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10277ac0; body size 8 bytes.
#line 1 "ENTRY_10277ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10277ac0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10277b20; body size 3 bytes.
#line 1 "ENTRY_10277b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10277b30; body size 3 bytes.
#line 1 "ENTRY_10277b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10277b40; body size 3 bytes.
#line 1 "ENTRY_10277b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10277b50; body size 3 bytes.
#line 1 "ENTRY_10277b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10277b60; body size 3 bytes.
#line 1 "ENTRY_10277b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10277b70; body size 3 bytes.
#line 1 "ENTRY_10277b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10277b80; body size 3 bytes.
#line 1 "ENTRY_10277b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10277b90; body size 3 bytes.
#line 1 "ENTRY_10277b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10277ba0; body size 3 bytes.
#line 1 "ENTRY_10277ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10277bb0; body size 3 bytes.
#line 1 "ENTRY_10277bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10277bc0; body size 4 bytes.
#line 1 "ENTRY_10277bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277bc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10277bd0; body size 4 bytes.
#line 1 "ENTRY_10277bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277bd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10277be0; body size 4 bytes.
#line 1 "ENTRY_10277be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10277be0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10277bf0; body size 7 bytes.
#line 1 "ENTRY_10277bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10277bf0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10277c00; body size 7 bytes.
#line 1 "ENTRY_10277c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10277c00(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10277c10; body size 7 bytes.
#line 1 "ENTRY_10277c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10277c10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10277cd0; body size 3 bytes.
#line 1 "ENTRY_10277cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10277cd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10277ce0; body size 3 bytes.
#line 1 "ENTRY_10277ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10277ce0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10277d10; body size 6 bytes.
#line 1 "ENTRY_10277d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10277d10(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10277d20; body size 6 bytes.
#line 1 "ENTRY_10277d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10277d20(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10277d30; body size 26 bytes.
#line 1 "ENTRY_10277d30"

__declspec(naked) void FUN_10277d30(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x08
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}





// Reference entry 10277d50; body size 10 bytes.
#line 1 "ENTRY_10277d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10277d50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10277d60; body size 10 bytes.
#line 1 "ENTRY_10277d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10277d60(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10277d70; body size 10 bytes.
#line 1 "ENTRY_10277d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10277d70(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10277d80; body size 43 bytes.
#line 1 "ENTRY_10277d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10277d80(undefined4 *param_2)
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


// Reference entry 10278160; body size 24 bytes.
#line 1 "ENTRY_10278160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10278160(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10273980(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10278180; body size 24 bytes.
#line 1 "ENTRY_10278180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10278180(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10273980(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 102781a0; body size 3 bytes.
#line 1 "ENTRY_102781a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102781a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102781b0; body size 4 bytes.
#line 1 "ENTRY_102781b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102781b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102782b0; body size 3 bytes.
#line 1 "ENTRY_102782b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102782b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102782c0; body size 3 bytes.
#line 1 "ENTRY_102782c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102782c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102782d0; body size 3 bytes.
#line 1 "ENTRY_102782d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102782d0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10278310; body size 90 bytes.
#line 1 "ENTRY_10278310"

__declspec(naked) void FUN_10278310(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x71c71c7
  __asm _emit 0x77 __asm _emit 0x4a
  __asm lea eax, [eax + eax*8]
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





// Reference entry 10278400; body size 3 bytes.
#line 1 "ENTRY_10278400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10278400(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10278410; body size 11 bytes.
#line 1 "ENTRY_10278410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10278410(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10278420; body size 11 bytes.
#line 1 "ENTRY_10278420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10278420(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10278430; body size 11 bytes.
#line 1 "ENTRY_10278430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10278430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10278440; body size 23 bytes.
#line 1 "ENTRY_10278440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10278440(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x24);
}


// Reference entry 10278460; body size 9 bytes.
#line 1 "ENTRY_10278460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10278460(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10278b60; body size 60 bytes.
#line 1 "ENTRY_10278b60"

__declspec(naked) void FUN_10278b60(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*8]
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





// Reference entry 10278c50; body size 9 bytes.
#line 1 "ENTRY_10278c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10278c50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10278c60; body size 32 bytes.
#line 1 "ENTRY_10278c60"

__declspec(naked) void FUN_10278c60(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x16
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}





// Reference entry 10278cc0; body size 4 bytes.
#line 1 "ENTRY_10278cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10278cc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10278cd0; body size 12 bytes.
#line 1 "ENTRY_10278cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10278cd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10278ce0; body size 12 bytes.
#line 1 "ENTRY_10278ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10278ce0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10278ef0; body size 32 bytes.
#line 1 "ENTRY_10278ef0"

__declspec(naked) void FUN_10278ef0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x20]
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx + eax*8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 10278fb0; body size 6 bytes.
#line 1 "ENTRY_10278fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10278fb0(void)

{
  return (char *)("SCIMusicServiceMenu");
}


// Reference entry 10278fc0; body size 7 bytes.
#line 1 "ENTRY_10278fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10278fc0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10278fd0; body size 7 bytes.
#line 1 "ENTRY_10278fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10278fd0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10278fe0; body size 6 bytes.
#line 1 "ENTRY_10278fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10278fe0(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10278ff0; body size 6 bytes.
#line 1 "ENTRY_10278ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10278ff0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10279000; body size 6 bytes.
#line 1 "ENTRY_10279000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10279000(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10279010; body size 6 bytes.
#line 1 "ENTRY_10279010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10279010(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10279650; body size 3 bytes.
#line 1 "ENTRY_10279650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10279650(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10279660; body size 3 bytes.
#line 1 "ENTRY_10279660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10279660(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10279670; body size 3 bytes.
#line 1 "ENTRY_10279670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10279670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10279680; body size 3 bytes.
#line 1 "ENTRY_10279680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10279680(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10279880; body size 28 bytes.
#line 1 "ENTRY_10279880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10279880(undefined4 *param_1)

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


// Reference entry 102798b0; body size 28 bytes.
#line 1 "ENTRY_102798b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102798b0(undefined4 *param_1)

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


// Reference entry 102798e0; body size 28 bytes.
#line 1 "ENTRY_102798e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102798e0(undefined4 *param_1)

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


// Reference entry 10279910; body size 141 bytes.
#line 1 "ENTRY_10279910"

__declspec(naked) void FUN_10279910(void)

{
  __asm push ecx
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push ebp
  __asm push esi
  __asm lea ebp, [eax + 0x20]
  __asm mov dword ptr [esp + 0xc], eax
  __asm mov edx, dword ptr [ebx + 4]
  __asm mov esi, dword ptr [ebx]
  __asm mov eax, dword ptr [ebp]
  __asm sub ecx, eax
  __asm push edi
  __asm mov edi, edx
  __asm sar ecx, 3
  __asm sub edi, esi
  __asm sar edi, 3
  __asm cmp edi, ecx
  __asm setne byte ptr [esp + 0x18]
  __asm _emit 0x75 __asm _emit 0x1b
  __asm mov byte ptr [esp + 0x18], 0
  __asm push dword ptr [esp + 0x18]
  __asm push eax
  __asm push edx
  __asm push esi
  __asm call LAB_10273f70
  __asm add esp, 0x10
  __asm test al, al
  __asm sete al
  __asm _emit 0xeb __asm _emit 0x04
  __asm mov al, byte ptr [esp + 0x18]
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x30
  __asm cmp ebp, ebx
  __asm _emit 0x74 __asm _emit 0x10
  __asm push dword ptr [esp + 0x18]
  __asm mov ecx, ebp
  __asm push dword ptr [ebx + 4]
  __asm push dword ptr [ebx]
  __asm call LAB_100384a1
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push 0
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_1187b640
  __asm call LAB_1005273e
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm call LAB_10013543
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10279b10; body size 4 bytes.
#line 1 "ENTRY_10279b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10279b10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10279b20; body size 23 bytes.
#line 1 "ENTRY_10279b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10279b20(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x24);
}


// Reference entry 10279b40; body size 9 bytes.
#line 1 "ENTRY_10279b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10279b40(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10279d20; body size 703 bytes.
#line 1 "ENTRY_10279d20"

__declspec(naked) void FUN_10279d20(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x1c20]
  __asm mov eax, 0x1c20
  __asm call LAB_10019146
  __asm push -1
  __asm push offset LAB_11519b75
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x1c
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm mov dword ptr [ebp + 0x1c1c], eax
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, dword ptr [ebp + 0x1c28]
  __asm push offset LAB_1188cfe8
  __asm push ebx
  __asm call LAB_1002dcc7
  __asm push offset LAB_1188cfec
  __asm push ebx
  __asm mov esi, eax
  __asm call LAB_1002dcc7
  __asm push offset LAB_1188cff0
  __asm push ebx
  __asm mov edi, eax
  __asm call LAB_1002dcc7
  __asm push offset LAB_1187d878
  __asm push ebx
  __asm mov dword ptr [ebp - 0x14], eax
  __asm call LAB_1002dcc7
  __asm push offset LAB_1188d004
  __asm push ebx
  __asm mov dword ptr [ebp - 0x10], eax
  __asm call LAB_1002dcc7
  __asm add esp, 0x28
  __asm mov dword ptr [ebp - 0x18], eax
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm cmp dword ptr [ebx], 0xa
  __asm _emit 0x74 __asm _emit 0x0a
  __asm mov esi, 0x195
  __asm jmp LAB_10279f9d
  __asm test esi, esi
  __asm je LAB_10279f94
  __asm test edi, edi
  __asm je LAB_10279f94
  __asm cmp dword ptr [ebp - 0x14], 0
  __asm je LAB_10279f94
  __asm test eax, eax
  __asm je LAB_10279f94
  __asm mov eax, offset LAB_1188d008
  __asm mov cl, byte ptr [esi]
  __asm cmp cl, byte ptr [eax]
  __asm _emit 0x75 __asm _emit 0x1a
  __asm test cl, cl
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov cl, byte ptr [esi + 1]
  __asm cmp cl, byte ptr [eax + 1]
  __asm _emit 0x75 __asm _emit 0x0e
  __asm add esi, 2
  __asm add eax, 2
  __asm test cl, cl
  __asm _emit 0x75 __asm _emit 0xe4
  __asm xor eax, eax
  __asm _emit 0xeb __asm _emit 0x05
  __asm sbb eax, eax
  __asm or eax, 1
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x35
  __asm mov eax, offset LAB_1188d018
  __asm mov cl, byte ptr [edi]
  __asm cmp cl, byte ptr [eax]
  __asm _emit 0x75 __asm _emit 0x1a
  __asm test cl, cl
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov cl, byte ptr [edi + 1]
  __asm cmp cl, byte ptr [eax + 1]
  __asm _emit 0x75 __asm _emit 0x0e
  __asm add edi, 2
  __asm add eax, 2
  __asm test cl, cl
  __asm _emit 0x75 __asm _emit 0xe4
  __asm xor eax, eax
  __asm _emit 0xeb __asm _emit 0x05
  __asm sbb eax, eax
  __asm or eax, 1
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x0a
  __asm mov esi, 0x19c
  __asm jmp LAB_10279f99
  __asm push ecx
  __asm mov dword ptr [ebp - 0x28], esp
  __asm mov ecx, esp
  __asm push eax
  __asm call LAB_1005273e
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1002a171
  __asm mov ecx, eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm call LAB_1001f834
  __asm push eax
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test eax, eax
  __asm je LAB_10279f7e
  __asm cmp byte ptr [eax], 0
  __asm je LAB_10279f7e
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_1002ca7f
  __asm lea eax, [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 3
  __asm push eax
  __asm lea ecx, [ebp]
  __asm call LAB_10054043
  __asm push dword ptr [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 4
  __asm call dword ptr [LAB_122fc6ac]
  __asm add esp, 4
  __asm mov esi, eax
  __asm mov eax, 0x1000
  __asm test esi, esi
  __asm _emit 0x7e __asm _emit 0x34
  __asm cmp esi, eax
  __asm mov ecx, esi
  __asm cmovg ecx, eax
  __asm lea eax, [ebp + 0xc1c]
  __asm push ecx
  __asm push eax
  __asm push ebx
  __asm call LAB_10067c8d
  __asm mov edi, eax
  __asm add esp, 0xc
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x16
  __asm push edi
  __asm lea eax, [ebp + 0xc1c]
  __asm push eax
  __asm lea ecx, [ebp]
  __asm call LAB_1002385d
  __asm sub esi, edi
  __asm test edi, edi
  __asm _emit 0x7f __asm _emit 0xc3
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm mov ecx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm cmovne ecx, eax
  __asm push ecx
  __asm push offset LAB_1188d02c
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_10011c9d
  __asm push dword ptr [ebp - 0x18]
  __asm lea ecx, [ebp - 0x24]
  __asm push offset LAB_1188d034
  __asm call LAB_10011c9d
  __asm mov esi, dword ptr [LAB_121a0b38]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x26
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_10048f77
  __asm mov edi, eax
  __asm call LAB_1002a171
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x05
  __asm lea ecx, [eax + 4]
  __asm _emit 0xeb __asm _emit 0x02
  __asm xor ecx, ecx
  __asm push 0
  __asm push ecx
  __asm mov ecx, dword ptr [esi + 0x54]
  __asm push edi
  __asm call LAB_10022976
  __asm lea ecx, [ebp]
  __asm call LAB_10071e4a
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_100412b8
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov esi, 0xc8
  __asm _emit 0xeb __asm _emit 0x1b
  __asm mov esi, 0xc8
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xeb __asm _emit 0x05
  __asm mov esi, 0x190
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x1a
  __asm push esi
  __asm push ebx
  __asm mov byte ptr [ebx + 0x60], 0
  __asm call LAB_10026c47
  __asm push ebx
  __asm call LAB_1004d428
  __asm push ebx
  __asm call LAB_1005a71d
  __asm add esp, 0x10
  __asm mov eax, 0xfffffffe
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov ecx, dword ptr [ebp + 0x1c1c]
  __asm xor ecx, ebp
  __asm call LAB_100382f3
  __asm lea esp, [ebp + 0x1c20]
  __asm pop ebp
  __asm ret
}





// Reference entry 1027d2c0; body size 38 bytes.
#line 1 "ENTRY_1027d2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027d2c0(undefined4 param_1)

{
  thunk_FUN_112aa790(param_1,"<Command cmdline=\"Root Cert Bundle Info\">\n");
  func_0x10062eae(param_1);
  thunk_FUN_112aa790(param_1,"</Command>\n");
  return;
}


// Reference entry 1027d4d0; body size 59 bytes.
#line 1 "ENTRY_1027d4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027d4d0(void)

{
  int iVar1;
  
  iVar1 = (int)(DAT_121a0b38);
  thunk_FUN_112af4e0("AnacapaLauncher",4,"AnacapaRun hit");
  FUN_112a9d50(iVar1 + 0x1c);
  *(undefined1*)(iVar1 + 0x4c) = (undefined1)(1);
  FUN_112aa350(iVar1 + 0x24);
  FUN_112a9d70(iVar1 + 0x1c);
  return;
}


// Reference entry 1027d520; body size 47 bytes.
#line 1 "ENTRY_1027d520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027d520(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(DAT_121a0b38);
  iVar1 = (int)(DAT_121a0b38 + 0x1c);
  FUN_112a9d50(iVar1);
  *(undefined1*)(iVar2 + 0x4c) = (undefined1)(0);
  FUN_112a9d70(iVar1);
  PTR_DAT_12119128 = (int *)((undefined *)0x0);
  thunk_FUN_110fc270();
  return;
}


// Reference entry 1027d560; body size 18 bytes.
#line 1 "ENTRY_1027d560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027d560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1027d580; body size 18 bytes.
#line 1 "ENTRY_1027d580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027d580(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1027d640; body size 25 bytes.
#line 1 "ENTRY_1027d640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027d640(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1027d820; body size 91 bytes.
#line 1 "ENTRY_1027d820"

__declspec(naked) void FUN_1027d820(void)

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





// Reference entry 1027d980; body size 78 bytes.
#line 1 "ENTRY_1027d980"

__declspec(naked) void FUN_1027d980(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 1027d9f0; body size 78 bytes.
#line 1 "ENTRY_1027d9f0"

__declspec(naked) void FUN_1027d9f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 1027da60; body size 78 bytes.
#line 1 "ENTRY_1027da60"

__declspec(naked) void FUN_1027da60(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 1027dda0; body size 3 bytes.
#line 1 "ENTRY_1027dda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027dda0(void)

{
  return;
}


// Reference entry 1027df70; body size 25 bytes.
#line 1 "ENTRY_1027df70"

__declspec(naked) void FUN_1027df70(void)

{
  __asm push 0x20
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}





// Reference entry 1027e110; body size 13 bytes.
#line 1 "ENTRY_1027e110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027e110(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1027e120; body size 13 bytes.
#line 1 "ENTRY_1027e120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027e120(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1027e430; body size 3 bytes.
#line 1 "ENTRY_1027e430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027e430(void)

{
  return;
}


// Reference entry 1027e5f0; body size 15 bytes.
#line 1 "ENTRY_1027e5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027e5f0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 1027e690; body size 7 bytes.
#line 1 "ENTRY_1027e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e690(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1027e6a0; body size 3 bytes.
#line 1 "ENTRY_1027e6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027e6a0(void)

{
  return;
}


// Reference entry 1027e6b0; body size 3 bytes.
#line 1 "ENTRY_1027e6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027e6b0(void)

{
  return;
}


// Reference entry 1027e750; body size 5 bytes.
#line 1 "ENTRY_1027e750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027e760; body size 5 bytes.
#line 1 "ENTRY_1027e760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027e770; body size 5 bytes.
#line 1 "ENTRY_1027e770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027e780; body size 5 bytes.
#line 1 "ENTRY_1027e780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027e790; body size 5 bytes.
#line 1 "ENTRY_1027e790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027e7a0; body size 5 bytes.
#line 1 "ENTRY_1027e7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e7a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027e7b0; body size 5 bytes.
#line 1 "ENTRY_1027e7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e7b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027e850; body size 18 bytes.
#line 1 "ENTRY_1027e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027e850(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 4);
  return;
}


// Reference entry 1027e870; body size 20 bytes.
#line 1 "ENTRY_1027e870"

__declspec(naked) void FUN_1027e870(void)

{
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_10017d50
  __asm ret 8
}





// Reference entry 1027e970; body size 12 bytes.
#line 1 "ENTRY_1027e970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1027e970(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 2);
}


// Reference entry 1027e980; body size 15 bytes.
#line 1 "ENTRY_1027e980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e980(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1027e9a0; body size 15 bytes.
#line 1 "ENTRY_1027e9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e9a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1027e9c0; body size 5 bytes.
#line 1 "ENTRY_1027e9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027e9d0; body size 5 bytes.
#line 1 "ENTRY_1027e9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e9d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027e9e0; body size 5 bytes.
#line 1 "ENTRY_1027e9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027e9f0; body size 5 bytes.
#line 1 "ENTRY_1027e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027e9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027ea00; body size 5 bytes.
#line 1 "ENTRY_1027ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027ea00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027ea10; body size 6 bytes.
#line 1 "ENTRY_1027ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027ea10(void)

{
  return (undefined4)(5);
}


// Reference entry 1027ea20; body size 6 bytes.
#line 1 "ENTRY_1027ea20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1027ea20(void)

{
  return (undefined4)(8);
}


// Reference entry 1027ea30; body size 6 bytes.
#line 1 "ENTRY_1027ea30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1027ea30(void)

{
  return (char *)("SCILocalMusicBrowseItemInfo");
}


// Reference entry 1027ea40; body size 6 bytes.
#line 1 "ENTRY_1027ea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1027ea40(void)

{
  return (char *)("SCISeekableStream");
}


// Reference entry 1027ea50; body size 6 bytes.
#line 1 "ENTRY_1027ea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1027ea50(void)

{
  return (char *)("SCISonarCalibrationManager");
}


// Reference entry 1027ea60; body size 6 bytes.
#line 1 "ENTRY_1027ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1027ea60(void)

{
  return (char *)("SCIStream");
}


// Reference entry 1027ea70; body size 6 bytes.
#line 1 "ENTRY_1027ea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1027ea70(void)

{
  return (char *)("SCITrackInfo");
}


// Reference entry 1027ea80; body size 12 bytes.
#line 1 "ENTRY_1027ea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1027ea80(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 4);
}


// Reference entry 1027ea90; body size 27 bytes.
#line 1 "ENTRY_1027ea90"

__declspec(naked) void FUN_1027ea90(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188c538
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1027eb10; body size 27 bytes.
#line 1 "ENTRY_1027eb10"

__declspec(naked) void FUN_1027eb10(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188d224
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1027eb80; body size 16 bytes.
#line 1 "ENTRY_1027eb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027eb80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1027ebe0; body size 16 bytes.
#line 1 "ENTRY_1027ebe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027ebe0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1027ec40; body size 16 bytes.
#line 1 "ENTRY_1027ec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027ec40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1027ec60; body size 16 bytes.
#line 1 "ENTRY_1027ec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027ec60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1027ec80; body size 18 bytes.
#line 1 "ENTRY_1027ec80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1027ec80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1027eca0; body size 51 bytes.
#line 1 "ENTRY_1027eca0"

__declspec(naked) void FUN_1027eca0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x20
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 1027ece0; body size 16 bytes.
#line 1 "ENTRY_1027ece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027ece0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1027ef00; body size 442 bytes.
#line 1 "ENTRY_1027ef00"

__declspec(naked) void FUN_1027ef00(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi + 0x54], eax
  __asm lea eax, [esi + 0x1c]
  __asm mov dword ptr [esi], offset LAB_1188c478
  __asm mov byte ptr [esi + 0x4c], 0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x50 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x58 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x5c __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x60 __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [esi + 0x464], 0
  __asm push eax
  __asm mov dword ptr [LAB_12119348], 0x1310730
  __asm mov dword ptr [LAB_1211934c], 0xa
  __asm mov dword ptr [LAB_12119350], 0xffffffff
  __asm mov dword ptr [LAB_12119354], 0x1188c380
  __asm mov dword ptr [LAB_12119358], 0
  __asm mov dword ptr [LAB_1211935c], 0
  __asm mov dword ptr [LAB_12119360], 0x41503133
  __asm mov dword ptr [LAB_12119364], 0
  __asm mov dword ptr [LAB_12119368], 0
  __asm mov dword ptr [LAB_1211936c], 0
  __asm mov dword ptr [LAB_12119370], 0
  __asm mov dword ptr [LAB_12119374], 0
  __asm mov dword ptr [LAB_12119378], 0x121190f8
  __asm mov dword ptr [LAB_1211937c], 0x12119130
  __asm mov dword ptr [LAB_12119380], 0x121192f0
  __asm mov dword ptr [LAB_12119384], 0
  __asm mov dword ptr [LAB_12119388], 0
  __asm mov dword ptr [LAB_1211938c], 0
  __asm mov dword ptr [LAB_12119390], 0
  __asm mov dword ptr [LAB_12119394], 0
  __asm mov dword ptr [LAB_12119398], 0
  __asm mov dword ptr [LAB_1211939c], 0
  __asm mov dword ptr [LAB_121193a0], 0
  __asm mov dword ptr [LAB_121193a4], 0x1004a205
  __asm mov dword ptr [LAB_121193a8], 0x1007d114
  __asm mov dword ptr [LAB_121193ac], 0x1004d0bd
  __asm mov dword ptr [LAB_121193b0], 0
  __asm mov dword ptr [LAB_121193b4], 0
  __asm mov dword ptr [LAB_121193b8], 0
  __asm mov dword ptr [LAB_121a2778], 0x12119348
  __asm call LAB_1002e5b9
  __asm add esp, 4
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x14
  __asm push offset LAB_1188c680
  __asm push 1
  __asm push offset LAB_1188c488
  __asm call LAB_100238df
  __asm add esp, 0xc
  __asm lea eax, [esi + 0x24]
  __asm push eax
  __asm call LAB_10088ce9
  __asm push 0x400
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esi + 0x58]
  __asm push eax
  __asm call LAB_1005907a
  __asm add esp, 0x10
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 1027f130; body size 9 bytes.
#line 1 "ENTRY_1027f130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027f130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISeekableStream);
  return (undefined4 *)(param_1);
}


// Reference entry 1027f140; body size 11 bytes.
#line 1 "ENTRY_1027f140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027f140(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISonarCalibrationManager);
  return (undefined4 *)(param_1);
}


// Reference entry 1027f150; body size 9 bytes.
#line 1 "ENTRY_1027f150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027f150(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISonarCalibrationManager);
  return (undefined4 *)(param_1);
}


// Reference entry 1027f160; body size 9 bytes.
#line 1 "ENTRY_1027f160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027f160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStream);
  return (undefined4 *)(param_1);
}


// Reference entry 1027f3f0; body size 52 bytes.
#line 1 "ENTRY_1027f3f0"

__declspec(naked) void FUN_1027f3f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_100685a2
  __asm push 0x2130
  __asm lea eax, [esi + 0x920]
  __asm mov dword ptr [esi], offset LAB_1188d1b8
  __asm push 0
  __asm push eax
  __asm call LAB_1148ce0b
  __asm add esp, 0xc
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1027f940; body size 7 bytes.
#line 1 "ENTRY_1027f940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1027f940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1027f950; body size 7 bytes.
#line 1 "ENTRY_1027f950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1027f950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1027f960; body size 7 bytes.
#line 1 "ENTRY_1027f960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1027f960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1027fb00; body size 11 bytes.
#line 1 "ENTRY_1027fb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1027fb00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_TestPointHandlerSCLIB);

  thunk_FUN_1125bd20(param_1);

}


// Reference entry 1027fba0; body size 58 bytes.
#line 1 "ENTRY_1027fba0"

__declspec(naked) void FUN_1027fba0(void)

{
  __asm push edi
  __asm mov edi, ecx
  __asm cmp edi, dword ptr [esp + 8]
  __asm _emit 0x74 __asm _emit 0x2b
  __asm push esi
  __asm mov esi, dword ptr [edi]
  __asm push dword ptr [esi + 4]
  __asm push edi
  __asm call LAB_1003b94e
  __asm push dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 4], esi
  __asm mov ecx, edi
  __asm push dword ptr [esp + 0x10]
  __asm mov dword ptr [esi], esi
  __asm mov dword ptr [esi + 8], esi
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100240aa
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret 4
}





// Reference entry 1027fbf0; body size 58 bytes.
#line 1 "ENTRY_1027fbf0"

__declspec(naked) void FUN_1027fbf0(void)

{
  __asm push edi
  __asm mov edi, ecx
  __asm cmp edi, dword ptr [esp + 8]
  __asm _emit 0x74 __asm _emit 0x2b
  __asm push esi
  __asm mov esi, dword ptr [edi]
  __asm push dword ptr [esi + 4]
  __asm push edi
  __asm call LAB_1003b94e
  __asm push dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 4], esi
  __asm mov ecx, edi
  __asm push dword ptr [esp + 0x10]
  __asm mov dword ptr [esi], esi
  __asm mov dword ptr [esi + 8], esi
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100240aa
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret 4
}





// Reference entry 1027fc40; body size 31 bytes.
#line 1 "ENTRY_1027fc40"

__declspec(naked) void FUN_1027fc40(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp esi, eax
  __asm _emit 0x74 __asm _emit 0x0e
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call LAB_10017d50
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 1027fc70; body size 5 bytes.
#line 1 "ENTRY_1027fc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fc70(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027fd00; body size 3 bytes.
#line 1 "ENTRY_1027fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fd00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1027fd10; body size 7 bytes.
#line 1 "ENTRY_1027fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1027fd10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1027fd20; body size 3 bytes.
#line 1 "ENTRY_1027fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fd20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1027fd30; body size 7 bytes.
#line 1 "ENTRY_1027fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1027fd30(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1027fd40; body size 7 bytes.
#line 1 "ENTRY_1027fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1027fd40(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1027fd50; body size 7 bytes.
#line 1 "ENTRY_1027fd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1027fd50(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1027fd60; body size 3 bytes.
#line 1 "ENTRY_1027fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fd60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1027fd70; body size 7 bytes.
#line 1 "ENTRY_1027fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1027fd70(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1027fd80; body size 3 bytes.
#line 1 "ENTRY_1027fd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fd80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1027fd90; body size 7 bytes.
#line 1 "ENTRY_1027fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1027fd90(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1027fda0; body size 7 bytes.
#line 1 "ENTRY_1027fda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1027fda0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1027fdb0; body size 7 bytes.
#line 1 "ENTRY_1027fdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1027fdb0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1027fdc0; body size 3 bytes.
#line 1 "ENTRY_1027fdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fdc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1027fdd0; body size 3 bytes.
#line 1 "ENTRY_1027fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fdd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1027fde0; body size 3 bytes.
#line 1 "ENTRY_1027fde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fde0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1027fdf0; body size 3 bytes.
#line 1 "ENTRY_1027fdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fdf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1027fe00; body size 3 bytes.
#line 1 "ENTRY_1027fe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fe00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1027fe10; body size 3 bytes.
#line 1 "ENTRY_1027fe10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fe10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1027fe20; body size 3 bytes.
#line 1 "ENTRY_1027fe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1027fe20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102804c0; body size 55 bytes.
#line 1 "ENTRY_102804c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102804c0(int param_1)

{
  thunk_FUN_112af4e0("AnacapaLauncher",4,"AnacapaRun hit");
  FUN_112a9d50(param_1 + 0x1c);
  *(undefined1*)(param_1 + 0x4c) = (undefined1)(1);
  FUN_112aa350(param_1 + 0x24);
  FUN_112a9d70(param_1 + 0x1c);
  return;
}


// Reference entry 10280d30; body size 169 bytes.
#line 1 "ENTRY_10280d30"

__declspec(naked) void FUN_10280d30(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp ebx, 0x3fffffff
  __asm ja LAB_10280dd4
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov eax, 0x3fffffff
  __asm push ebp
  __asm mov ebp, dword ptr [esi]
  __asm sub ecx, ebp
  __asm sar ecx, 2
  __asm mov edx, ecx
  __asm _emit 0xd1 __asm _emit 0xea
  __asm sub eax, edx
  __asm push edi
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov edi, 0x3fffffff
  __asm _emit 0xeb __asm _emit 0x08
  __asm lea edi, [edx + ecx]
  __asm cmp edi, ebx
  __asm cmovb edi, ebx
  __asm test ebp, ebp
  __asm _emit 0x74 __asm _emit 0x4d
  __asm push dword ptr [esi + 4]
  __asm mov ecx, esi
  __asm push ebp
  __asm call LAB_100685ac
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov eax, dword ptr [esi]
  __asm sub ecx, eax
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x2f
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push edi
  __asm mov ecx, esi
  __asm call LAB_10063fac
  __asm pop edi
  __asm pop ebp
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_10076463
}





// Reference entry 10280e50; body size 21 bytes.
#line 1 "ENTRY_10280e50"

__declspec(naked) void FUN_10280e50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push dword ptr [esp + 4]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call LAB_10017d50
  __asm ret 8
}





// Reference entry 10280e70; body size 3 bytes.
#line 1 "ENTRY_10280e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10280e80; body size 3 bytes.
#line 1 "ENTRY_10280e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10280e90; body size 3 bytes.
#line 1 "ENTRY_10280e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10280ea0; body size 3 bytes.
#line 1 "ENTRY_10280ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10280eb0; body size 3 bytes.
#line 1 "ENTRY_10280eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10280ec0; body size 3 bytes.
#line 1 "ENTRY_10280ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10280ee0; body size 3 bytes.
#line 1 "ENTRY_10280ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10280ef0; body size 3 bytes.
#line 1 "ENTRY_10280ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10280f00; body size 3 bytes.
#line 1 "ENTRY_10280f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280f00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10280f10; body size 30 bytes.
#line 1 "ENTRY_10280f10"

__declspec(naked) void FUN_10280f10(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0e __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf5
  __asm mov eax, ecx
  __asm ret
}





// Reference entry 10280f40; body size 31 bytes.
#line 1 "ENTRY_10280f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10280f40(int *param_1)

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


// Reference entry 10280f70; body size 3 bytes.
#line 1 "ENTRY_10280f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10280f70(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10280f80; body size 11 bytes.
#line 1 "ENTRY_10280f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280f80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10280f90; body size 8 bytes.
#line 1 "ENTRY_10280f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10280f90(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10280fa0; body size 3 bytes.
#line 1 "ENTRY_10280fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280fa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10280fb0; body size 4 bytes.
#line 1 "ENTRY_10280fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10280fb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102811c0; body size 87 bytes.
#line 1 "ENTRY_102811c0"

__declspec(naked) void FUN_102811c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x7ffffff
  __asm _emit 0x77 __asm _emit 0x47
  __asm shl eax, 5
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





// Reference entry 10281260; body size 54 bytes.
#line 1 "ENTRY_10281260"

__declspec(naked) void FUN_10281260(void)

{
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 5
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





// Reference entry 102812b0; body size 57 bytes.
#line 1 "ENTRY_102812b0"

__declspec(naked) void FUN_102812b0(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 5
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





// Reference entry 10281500; body size 19 bytes.
#line 1 "ENTRY_10281500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10281500(int param_1)

{
  if ((*(char *)(param_1 + 0x1c) != '\0') && (*(int **)(param_1 + 8) != (int *)((0x0)))) {
                    
                    
    ((SCVtbl_6_0*)(*(int **)(param_1 + 8)))->v();
    return;
  }
  return;
}


// Reference entry 102824f0; body size 6 bytes.
#line 1 "ENTRY_102824f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102824f0(void)

{
  return (undefined4)(DAT_121a2650);
}


// Reference entry 10282500; body size 6 bytes.
#line 1 "ENTRY_10282500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10282500(void)

{
  return (undefined4)(DAT_121a2764);
}


// Reference entry 10282bd0; body size 6 bytes.
#line 1 "ENTRY_10282bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10282bd0(void)

{
  return (char *)("SCILocalMusicBrowseItemInfo");
}


// Reference entry 10282be0; body size 6 bytes.
#line 1 "ENTRY_10282be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10282be0(void)

{
  return (char *)("SCISeekableStream");
}


// Reference entry 10282bf0; body size 6 bytes.
#line 1 "ENTRY_10282bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10282bf0(void)

{
  return (char *)("SCISonarCalibrationManager");
}


// Reference entry 10282c00; body size 6 bytes.
#line 1 "ENTRY_10282c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10282c00(void)

{
  return (char *)("SCIStream");
}


// Reference entry 10282c10; body size 6 bytes.
#line 1 "ENTRY_10282c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10282c10(void)

{
  return (char *)("SCITrackInfo");
}


// Reference entry 10282c20; body size 7 bytes.
#line 1 "ENTRY_10282c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10282c20(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x464));
}


// Reference entry 10282c30; body size 7 bytes.
#line 1 "ENTRY_10282c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10282c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10282d30; body size 3 bytes.
#line 1 "ENTRY_10282d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10282d30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10282d40; body size 3 bytes.
#line 1 "ENTRY_10282d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10282d40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10282d50; body size 3 bytes.
#line 1 "ENTRY_10282d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10282d50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10282d60; body size 3 bytes.
#line 1 "ENTRY_10282d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10282d60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10282d70; body size 3 bytes.
#line 1 "ENTRY_10282d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10282d70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10282d80; body size 3 bytes.
#line 1 "ENTRY_10282d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10282d80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10282f80; body size 71 bytes.
#line 1 "ENTRY_10282f80"

__declspec(naked) void FUN_10282f80(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_121a0b38]
  __asm push offset LAB_1188ceb0
  __asm push 4
  __asm push offset LAB_1188c488
  __asm call LAB_100238df
  __asm mov eax, dword ptr [esp + 0x18]
  __asm add esp, 0xc
  __asm mov dword ptr [eax], 0x7fffffff
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1002a171
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, dword ptr [esi + 0x54]
  __asm push 0
  __asm push esi
  __asm push 0
  __asm call LAB_10022976
  __asm pop esi
  __asm ret
}





// Reference entry 10282fe0; body size 69 bytes.
#line 1 "ENTRY_10282fe0"

__declspec(naked) void FUN_10282fe0(void)

{
  __asm push esi
  __asm push offset LAB_1188ceb0
  __asm push 4
  __asm push offset LAB_1188c488
  __asm mov esi, ecx
  __asm call LAB_100238df
  __asm mov eax, dword ptr [esp + 0x14]
  __asm add esp, 0xc
  __asm mov dword ptr [eax], 0x7fffffff
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1002a171
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x10]
  __asm mov ecx, dword ptr [esi + 0x54]
  __asm push 0
  __asm push esi
  __asm push 0
  __asm call LAB_10022976
  __asm pop esi
  __asm ret 4
}





// Reference entry 10283260; body size 28 bytes.
#line 1 "ENTRY_10283260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10283260(undefined4 *param_1)

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


// Reference entry 10283290; body size 28 bytes.
#line 1 "ENTRY_10283290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10283290(undefined4 *param_1)

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


// Reference entry 102832c0; body size 28 bytes.
#line 1 "ENTRY_102832c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102832c0(undefined4 *param_1)

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


// Reference entry 102832f0; body size 28 bytes.
#line 1 "ENTRY_102832f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102832f0(undefined4 *param_1)

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


// Reference entry 10283320; body size 20 bytes.
#line 1 "ENTRY_10283320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10283320(int *param_1)

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


// Reference entry 10283340; body size 20 bytes.
#line 1 "ENTRY_10283340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10283340(int *param_1)

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


// Reference entry 10283360; body size 20 bytes.
#line 1 "ENTRY_10283360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10283360(int *param_1)

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


// Reference entry 102833d0; body size 5 bytes.
#line 1 "ENTRY_102833d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102833d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102833e0; body size 5 bytes.
#line 1 "ENTRY_102833e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102833e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10283780; body size 78 bytes.
#line 1 "ENTRY_10283780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10283780(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_112af4e0("AnacapaLauncher",4,"threadFuncInternal -- about to call StartAnacapa");
    param_1 = (int)(param_1 + 0x58);
    thunk_FUN_112af4e0("AnacapaLauncher",4,"passing in config file 3: (%p) %s",param_1,param_1);
    thunk_FUN_112a76e0(param_1);
    thunk_FUN_112af4e0("AnacapaLauncher",4,"threadFuncInternal -- returned from StartAnacapa");
  }
  return (undefined4)(0);
}


// Reference entry 102837f0; body size 70 bytes.
#line 1 "ENTRY_102837f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102837f0(int param_1)

{
  thunk_FUN_112af4e0("AnacapaLauncher",4,"threadFuncInternal -- about to call StartAnacapa");
  param_1 = (int)(param_1 + 0x58);
  thunk_FUN_112af4e0("AnacapaLauncher",4,"passing in config file 3: (%p) %s",param_1,param_1);
  thunk_FUN_112a76e0(param_1);
  thunk_FUN_112af4e0("AnacapaLauncher",4,"threadFuncInternal -- returned from StartAnacapa");
  return;
}


// Reference entry 10283960; body size 18 bytes.
#line 1 "ENTRY_10283960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10283960(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10283980; body size 25 bytes.
#line 1 "ENTRY_10283980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10283980(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102839a0; body size 22 bytes.
#line 1 "ENTRY_102839a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102839a0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102839c0; body size 22 bytes.
#line 1 "ENTRY_102839c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102839c0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10283a90; body size 18 bytes.
#line 1 "ENTRY_10283a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10283a90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10283ab0; body size 22 bytes.
#line 1 "ENTRY_10283ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10283ab0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10283ad0; body size 18 bytes.
#line 1 "ENTRY_10283ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10283ad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10283af0; body size 22 bytes.
#line 1 "ENTRY_10283af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10283af0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10283b10; body size 18 bytes.
#line 1 "ENTRY_10283b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10283b10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10283c50; body size 33 bytes.
#line 1 "ENTRY_10283c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10283c50(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 10283c80; body size 25 bytes.
#line 1 "ENTRY_10283c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10283c80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10283ca0; body size 33 bytes.
#line 1 "ENTRY_10283ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10283ca0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 10283cd0; body size 26 bytes.
#line 1 "ENTRY_10283cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10283cd0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10283cf0; body size 26 bytes.
#line 1 "ENTRY_10283cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10283cf0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10283d10; body size 3 bytes.
#line 1 "ENTRY_10283d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10283d10(void)

{
  return;
}


// Reference entry 10283d20; body size 3 bytes.
#line 1 "ENTRY_10283d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10283d20(void)

{
  return;
}


// Reference entry 10283d30; body size 25 bytes.
#line 1 "ENTRY_10283d30"

__declspec(naked) void FUN_10283d30(void)

{
  __asm push 0x14
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}





// Reference entry 10283e70; body size 13 bytes.
#line 1 "ENTRY_10283e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10283e70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10283e80; body size 13 bytes.
#line 1 "ENTRY_10283e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10283e80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10283e90; body size 113 bytes.
#line 1 "ENTRY_10283e90"

__declspec(naked) void FUN_10283e90(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [edi]
  __asm push dword ptr [eax + 4]
  __asm call LAB_1008c34e
  __asm mov ecx, dword ptr [edi]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov eax, dword ptr [esi + 4]
  __asm mov esi, dword ptr [edi]
  __asm mov dword ptr [edi + 4], eax
  __asm mov edx, dword ptr [esi + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x37
  __asm mov ecx, dword ptr [edx]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0c
  __asm mov eax, dword ptr [ecx]
  __asm mov edx, ecx
  __asm mov ecx, eax
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf4
  __asm mov dword ptr [esi], edx
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf5
  __asm pop edi
  __asm mov dword ptr [edx + 8], ecx
  __asm pop esi
  __asm ret 8
  __asm mov dword ptr [esi], esi
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm mov dword ptr [eax + 8], eax
  __asm ret 8
}





// Reference entry 102840d0; body size 3 bytes.
#line 1 "ENTRY_102840d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102840d0(void)

{
  return;
}


// Reference entry 102842c0; body size 39 bytes.
#line 1 "ENTRY_102842c0"

__declspec(naked) void FUN_102842c0(void)

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





// Reference entry 102842f0; body size 39 bytes.
#line 1 "ENTRY_102842f0"

__declspec(naked) void FUN_102842f0(void)

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





// Reference entry 10284320; body size 39 bytes.
#line 1 "ENTRY_10284320"

__declspec(naked) void FUN_10284320(void)

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





// Reference entry 10284350; body size 39 bytes.
#line 1 "ENTRY_10284350"

__declspec(naked) void FUN_10284350(void)

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





// Reference entry 102846c0; body size 118 bytes.
#line 1 "ENTRY_102846c0"

__declspec(naked) void FUN_102846c0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [ecx]
  __asm mov edx, ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov ecx, eax
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x2e
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ebp]
  __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [ecx + 0x10]
  __asm cmp esi, edi
  __asm _emit 0x73 __asm _emit 0x05
  __asm mov ecx, dword ptr [ecx + 8]
  __asm _emit 0xeb __asm _emit 0x0f
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0x05
  __asm cmp edi, esi
  __asm cmovb edx, ecx
  __asm mov ebx, ecx
  __asm mov ecx, dword ptr [ecx]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xdf
  __asm pop edi
  __asm pop esi
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x02
  __asm mov eax, dword ptr [edx]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x17
  __asm mov ecx, dword ptr [ebp]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm _emit 0x73 __asm _emit 0x06
  __asm mov edx, eax
  __asm mov eax, dword ptr [eax]
  __asm _emit 0xeb __asm _emit 0x03
  __asm mov eax, dword ptr [eax + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xec
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop ebp
  __asm mov dword ptr [eax], ebx
  __asm mov dword ptr [eax + 4], edx
  __asm pop ebx
  __asm ret 8
}





// Reference entry 10284860; body size 73 bytes.
#line 1 "ENTRY_10284860"

__declspec(naked) void FUN_10284860(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov dword ptr [edx], eax
  __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edx + 8], ecx
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x29
  __asm mov ecx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [ecx]
  __asm mov dword ptr [edx], eax
  __asm cmp dword ptr [eax + 0x10], esi
  __asm _emit 0x73 __asm _emit 0x07
  __asm mov eax, dword ptr [eax + 8]
  __asm xor ecx, ecx
  __asm _emit 0xeb __asm _emit 0x0a
  __asm mov dword ptr [edx + 8], eax
  __asm mov ecx, 1
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx + 4], ecx
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xdf
  __asm pop esi
  __asm mov eax, edx
  __asm ret 8
}





// Reference entry 102848c0; body size 30 bytes.
#line 1 "ENTRY_102848c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102848c0(int *param_1,int *param_2,int *param_3)

{
  if ((int *)(param_1) != (int *)(param_2)) {
    do {
      if (*param_1 == (int)(*(param_3))) {
        return;
      }
      param_1 = (int *)(param_1 + 2);
    } while ((int *)(param_1) != (int *)(param_2));
  }
  return;
}


// Reference entry 102848f0; body size 30 bytes.
#line 1 "ENTRY_102848f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102848f0(int *param_1,int *param_2,int *param_3)

{
  if ((int *)(param_1) != (int *)(param_2)) {
    do {
      if (*param_1 == (int)(*(param_3))) {
        return;
      }
      param_1 = (int *)(param_1 + 2);
    } while ((int *)(param_1) != (int *)(param_2));
  }
  return;
}


// Reference entry 10284920; body size 15 bytes.
#line 1 "ENTRY_10284920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10284920(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10284940; body size 15 bytes.
#line 1 "ENTRY_10284940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10284940(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10284960; body size 5 bytes.
#line 1 "ENTRY_10284960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284970; body size 7 bytes.
#line 1 "ENTRY_10284970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284970(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10284980; body size 7 bytes.
#line 1 "ENTRY_10284980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10284990; body size 7 bytes.
#line 1 "ENTRY_10284990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284990(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102849a0; body size 31 bytes.
#line 1 "ENTRY_102849a0"

__declspec(naked) void FUN_102849a0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x10
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm _emit 0x72 __asm _emit 0x05
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}





// Reference entry 102849d0; body size 92 bytes.
#line 1 "ENTRY_102849d0"

__declspec(naked) void FUN_102849d0(void)

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





// Reference entry 10284a50; body size 5 bytes.
#line 1 "ENTRY_10284a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284a60; body size 13 bytes.
#line 1 "ENTRY_10284a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10284a60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10284a70; body size 24 bytes.
#line 1 "ENTRY_10284a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10284a70(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10284aa0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10284a90; body size 5 bytes.
#line 1 "ENTRY_10284a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284be0; body size 5 bytes.
#line 1 "ENTRY_10284be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284bf0; body size 5 bytes.
#line 1 "ENTRY_10284bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284c00; body size 5 bytes.
#line 1 "ENTRY_10284c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284c10; body size 5 bytes.
#line 1 "ENTRY_10284c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284c20; body size 5 bytes.
#line 1 "ENTRY_10284c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284c30; body size 5 bytes.
#line 1 "ENTRY_10284c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284c40; body size 5 bytes.
#line 1 "ENTRY_10284c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284c50; body size 13 bytes.
#line 1 "ENTRY_10284c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10284c50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10284c60; body size 13 bytes.
#line 1 "ENTRY_10284c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10284c60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10284c70; body size 28 bytes.
#line 1 "ENTRY_10284c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10284c70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10284ca0; body size 28 bytes.
#line 1 "ENTRY_10284ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10284ca0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10284cd0; body size 28 bytes.
#line 1 "ENTRY_10284cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10284cd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10284d00; body size 3 bytes.
#line 1 "ENTRY_10284d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10284d00(void)

{
  return;
}


// Reference entry 10284d80; body size 86 bytes.
#line 1 "ENTRY_10284d80"

__declspec(naked) void FUN_10284d80(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push edi
  __asm xor edi, edi
  __asm cmp eax, ecx
  __asm _emit 0x74 __asm _emit 0x43
  __asm push esi
  __asm mov edx, dword ptr [eax + 8]
  __asm inc edi
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0x1d
  __asm mov edx, dword ptr [eax + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x10
  __asm cmp eax, dword ptr [edx + 8]
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov eax, edx
  __asm mov edx, dword ptr [edx + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf0
  __asm mov eax, edx
  __asm _emit 0xeb __asm _emit 0x16
  __asm mov eax, edx
  __asm mov esi, dword ptr [eax]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0c
  __asm mov edx, dword ptr [esi]
  __asm mov eax, esi
  __asm mov esi, edx
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf4
  __asm cmp eax, ecx
  __asm _emit 0x75 __asm _emit 0xbf
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret
}





// Reference entry 10284e90; body size 15 bytes.
#line 1 "ENTRY_10284e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284e90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10284eb0; body size 15 bytes.
#line 1 "ENTRY_10284eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284eb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10284ed0; body size 15 bytes.
#line 1 "ENTRY_10284ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284ed0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10284ef0; body size 15 bytes.
#line 1 "ENTRY_10284ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284ef0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10284f10; body size 36 bytes.
#line 1 "ENTRY_10284f10"

__declspec(naked) void FUN_10284f10(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm cmp ecx, eax
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov edx, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [edx]
  __asm cmp dword ptr [ecx], edx
  __asm _emit 0x74 __asm _emit 0x07
  __asm add ecx, 8
  __asm cmp ecx, eax
  __asm _emit 0x75 __asm _emit 0xf5
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret
}





// Reference entry 10284f40; body size 5 bytes.
#line 1 "ENTRY_10284f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284f40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284f50; body size 5 bytes.
#line 1 "ENTRY_10284f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284f50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284f60; body size 5 bytes.
#line 1 "ENTRY_10284f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284f60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284f70; body size 5 bytes.
#line 1 "ENTRY_10284f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284f70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284f80; body size 5 bytes.
#line 1 "ENTRY_10284f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284f90; body size 5 bytes.
#line 1 "ENTRY_10284f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284fa0; body size 5 bytes.
#line 1 "ENTRY_10284fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284fb0; body size 5 bytes.
#line 1 "ENTRY_10284fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284fc0; body size 5 bytes.
#line 1 "ENTRY_10284fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284fd0; body size 5 bytes.
#line 1 "ENTRY_10284fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284fd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284fe0; body size 5 bytes.
#line 1 "ENTRY_10284fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284fe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10284ff0; body size 5 bytes.
#line 1 "ENTRY_10284ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10284ff0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10285000; body size 5 bytes.
#line 1 "ENTRY_10285000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10285000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10285010; body size 5 bytes.
#line 1 "ENTRY_10285010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10285010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10285020; body size 5 bytes.
#line 1 "ENTRY_10285020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10285020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10285030; body size 5 bytes.
#line 1 "ENTRY_10285030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10285030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10285040; body size 6 bytes.
#line 1 "ENTRY_10285040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10285040(void)

{
  return (char *)("SCINewWizManager");
}


// Reference entry 10285170; body size 5 bytes.
#line 1 "ENTRY_10285170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10285170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10285180; body size 5 bytes.
#line 1 "ENTRY_10285180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10285180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10285190; body size 5 bytes.
#line 1 "ENTRY_10285190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10285190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102851a0; body size 27 bytes.
#line 1 "ENTRY_102851a0"

__declspec(naked) void FUN_102851a0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188d4e0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 102851d0; body size 32 bytes.
#line 1 "ENTRY_102851d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102851d0(undefined4 *param_2)
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


// Reference entry 10285200; body size 32 bytes.
#line 1 "ENTRY_10285200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10285200(undefined4 *param_2)
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


// Reference entry 10285270; body size 16 bytes.
#line 1 "ENTRY_10285270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10285270(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10285310; body size 18 bytes.
#line 1 "ENTRY_10285310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10285310(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10285370; body size 11 bytes.
#line 1 "ENTRY_10285370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10285370(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10285380; body size 51 bytes.
#line 1 "ENTRY_10285380"

__declspec(naked) void FUN_10285380(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 10285440; body size 11 bytes.
#line 1 "ENTRY_10285440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10285440(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10285450; body size 11 bytes.
#line 1 "ENTRY_10285450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10285450(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10285460; body size 16 bytes.
#line 1 "ENTRY_10285460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10285460(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10285480; body size 21 bytes.
#line 1 "ENTRY_10285480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10285480(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102854a0; body size 11 bytes.
#line 1 "ENTRY_102854a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102854a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102854b0; body size 11 bytes.
#line 1 "ENTRY_102854b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102854b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102854c0; body size 25 bytes.
#line 1 "ENTRY_102854c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102854c0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 102854e0; body size 25 bytes.
#line 1 "ENTRY_102854e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102854e0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10285500; body size 23 bytes.
#line 1 "ENTRY_10285500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10285500(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10285520; body size 3 bytes.
#line 1 "ENTRY_10285520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10285520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10285530; body size 3 bytes.
#line 1 "ENTRY_10285530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10285530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10285540; body size 33 bytes.
#line 1 "ENTRY_10285540"

__declspec(naked) void FUN_10285540(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm push esi
  __asm mov dword ptr [esp + 0xc], edi
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10285690; body size 52 bytes.
#line 1 "ENTRY_10285690"

__declspec(naked) void FUN_10285690(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
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





// Reference entry 102856e0; body size 49 bytes.
#line 1 "ENTRY_102856e0"

__declspec(naked) void FUN_102856e0(void)

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





// Reference entry 10285720; body size 49 bytes.
#line 1 "ENTRY_10285720"

__declspec(naked) void FUN_10285720(void)

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





// Reference entry 10285820; body size 23 bytes.
#line 1 "ENTRY_10285820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10285820(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10285840; body size 9 bytes.
#line 1 "ENTRY_10285840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10285840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINewWizManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10285b50; body size 7 bytes.
#line 1 "ENTRY_10285b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10285b50(undefined4 param_1)

{
  thunk_FUN_10284760((int)(param_1));
  return;
}


// Reference entry 10285b80; body size 19 bytes.
#line 1 "ENTRY_10285b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10285b80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10285ba0; body size 19 bytes.
#line 1 "ENTRY_10285ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10285ba0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10285c60; body size 7 bytes.
#line 1 "ENTRY_10285c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10285c60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10285df0; body size 65 bytes.
#line 1 "ENTRY_10285df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10285df0(int *param_2)
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


// Reference entry 10285f30; body size 14 bytes.
#line 1 "ENTRY_10285f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10285f30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10285f50; body size 14 bytes.
#line 1 "ENTRY_10285f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10285f50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10285f70; body size 14 bytes.
#line 1 "ENTRY_10285f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10285f70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10285f90; body size 12 bytes.
#line 1 "ENTRY_10285f90"

__declspec(naked) void FUN_10285f90(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm sete al
  __asm ret 4
}





// Reference entry 10285fa0; body size 12 bytes.
#line 1 "ENTRY_10285fa0"

__declspec(naked) void FUN_10285fa0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm sete al
  __asm ret 4
}





// Reference entry 10285fb0; body size 14 bytes.
#line 1 "ENTRY_10285fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10285fb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10285fd0; body size 3 bytes.
#line 1 "ENTRY_10285fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10285fd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10285fe0; body size 3 bytes.
#line 1 "ENTRY_10285fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10285fe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10285ff0; body size 7 bytes.
#line 1 "ENTRY_10285ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10285ff0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10286000; body size 3 bytes.
#line 1 "ENTRY_10286000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286000(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10286010; body size 3 bytes.
#line 1 "ENTRY_10286010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286010(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10286020; body size 3 bytes.
#line 1 "ENTRY_10286020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286020(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10286030; body size 6 bytes.
#line 1 "ENTRY_10286030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10286030(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10286040; body size 6 bytes.
#line 1 "ENTRY_10286040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10286040(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10286050; body size 3 bytes.
#line 1 "ENTRY_10286050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286050(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10286060; body size 3 bytes.
#line 1 "ENTRY_10286060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286060(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10286070; body size 20 bytes.
#line 1 "ENTRY_10286070"

__declspec(naked) void FUN_10286070(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_1002c962
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 10286170; body size 6 bytes.
#line 1 "ENTRY_10286170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10286170(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10286180; body size 16 bytes.
#line 1 "ENTRY_10286180"

__declspec(naked) void FUN_10286180(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [eax], edx
  __asm add edx, 8
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}





// Reference entry 102861a0; body size 18 bytes.
#line 1 "ENTRY_102861a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_102861a0(uint *param_1,uint *param_2)

{
  return (bool)(*param_1 < (uint)(*(param_2)));
}


// Reference entry 102863f0; body size 31 bytes.
#line 1 "ENTRY_102863f0"

__declspec(naked) void FUN_102863f0(void)

{
  __asm push esi
  __asm push 0x14
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





// Reference entry 10286440; body size 30 bytes.
#line 1 "ENTRY_10286440"

__declspec(naked) void FUN_10286440(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_1007f9f5
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + esi*8]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}





// Reference entry 10286470; body size 49 bytes.
#line 1 "ENTRY_10286470"

__declspec(naked) void FUN_10286470(void)

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





// Reference entry 10286540; body size 14 bytes.
#line 1 "ENTRY_10286540"

__declspec(naked) void FUN_10286540(void)

{
  __asm cmp dword ptr [ecx + 4], 0xccccccc
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 10286560; body size 3 bytes.
#line 1 "ENTRY_10286560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10286560(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10286590; body size 142 bytes.
#line 1 "ENTRY_10286590"

__declspec(naked) void FUN_10286590(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ebx, dword ptr [edi]
  __asm cmp esi, dword ptr [ebx]
  __asm _emit 0x75 __asm _emit 0x48
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0x42
  __asm mov esi, dword ptr [ebx + 4]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x20
  __asm push dword ptr [esi + 8]
  __asm mov ecx, edi
  __asm push edi
  __asm call LAB_1004a467
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xe0
  __asm mov dword ptr [ebx + 4], ebx
  __asm mov dword ptr [ebx], ebx
  __asm mov dword ptr [ebx + 8], ebx
  __asm mov eax, dword ptr [esp + 0x14]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
  __asm cmp esi, eax
  __asm _emit 0x74 __asm _emit 0x29
  __asm nop
  __asm lea ecx, [esp + 0x10]
  __asm call LAB_1002c962
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_100019d8
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm mov esi, dword ptr [esp + 0x18]
  __asm add esp, 8
  __asm mov eax, dword ptr [esp + 0x14]
  __asm cmp esi, eax
  __asm _emit 0x75 __asm _emit 0xd8
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}





// Reference entry 10286650; body size 51 bytes.
#line 1 "ENTRY_10286650"

__declspec(naked) void FUN_10286650(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esp + 8]
  __asm call LAB_1002c962
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_100019d8
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10286690; body size 5 bytes.
#line 1 "ENTRY_10286690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10286690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102869f0; body size 3 bytes.
#line 1 "ENTRY_102869f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102869f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286a00; body size 3 bytes.
#line 1 "ENTRY_10286a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286a10; body size 3 bytes.
#line 1 "ENTRY_10286a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286a20; body size 3 bytes.
#line 1 "ENTRY_10286a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286a30; body size 3 bytes.
#line 1 "ENTRY_10286a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286a40; body size 3 bytes.
#line 1 "ENTRY_10286a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286a50; body size 3 bytes.
#line 1 "ENTRY_10286a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286a60; body size 3 bytes.
#line 1 "ENTRY_10286a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286a80; body size 3 bytes.
#line 1 "ENTRY_10286a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286a90; body size 3 bytes.
#line 1 "ENTRY_10286a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286aa0; body size 3 bytes.
#line 1 "ENTRY_10286aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286ab0; body size 3 bytes.
#line 1 "ENTRY_10286ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286d50; body size 5 bytes.
#line 1 "ENTRY_10286d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10286d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10286e30; body size 31 bytes.
#line 1 "ENTRY_10286e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10286e30(int *param_1)

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


// Reference entry 10286e60; body size 3 bytes.
#line 1 "ENTRY_10286e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10286e60(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10286e70; body size 3 bytes.
#line 1 "ENTRY_10286e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10286e70(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10286e80; body size 11 bytes.
#line 1 "ENTRY_10286e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10286e80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10286e90; body size 8 bytes.
#line 1 "ENTRY_10286e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10286e90(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10286ea0; body size 6 bytes.
#line 1 "ENTRY_10286ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10286ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10286f20; body size 9 bytes.
#line 1 "ENTRY_10286f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10286f20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10287050; body size 24 bytes.
#line 1 "ENTRY_10287050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10287050(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10284aa0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10287070; body size 24 bytes.
#line 1 "ENTRY_10287070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10287070(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10284aa0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10287090; body size 13 bytes.
#line 1 "ENTRY_10287090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10287090(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 102870a0; body size 13 bytes.
#line 1 "ENTRY_102870a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_102870a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 102870b0; body size 3 bytes.
#line 1 "ENTRY_102870b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102870b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102870c0; body size 3 bytes.
#line 1 "ENTRY_102870c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102870c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102870d0; body size 10 bytes.
#line 1 "ENTRY_102870d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102870d0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 102870e0; body size 10 bytes.
#line 1 "ENTRY_102870e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102870e0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 102870f0; body size 4 bytes.
#line 1 "ENTRY_102870f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102870f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10287100; body size 4 bytes.
#line 1 "ENTRY_10287100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10287100(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10287110; body size 3 bytes.
#line 1 "ENTRY_10287110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10287110(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10287140; body size 90 bytes.
#line 1 "ENTRY_10287140"

__declspec(naked) void FUN_10287140(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xccccccc
  __asm _emit 0x77 __asm _emit 0x4a
  __asm lea eax, [eax + eax*4]
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





// Reference entry 10287230; body size 11 bytes.
#line 1 "ENTRY_10287230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10287230(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10287240; body size 9 bytes.
#line 1 "ENTRY_10287240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10287240(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 102872b0; body size 57 bytes.
#line 1 "ENTRY_102872b0"

__declspec(naked) void FUN_102872b0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*4]
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





// Reference entry 10287300; body size 60 bytes.
#line 1 "ENTRY_10287300"

__declspec(naked) void FUN_10287300(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*4]
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





// Reference entry 102873a0; body size 12 bytes.
#line 1 "ENTRY_102873a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_102873a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10289c20; body size 6 bytes.
#line 1 "ENTRY_10289c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10289c20(void)

{
  return (char *)("SCINewWizManager");
}


// Reference entry 10289c30; body size 35 bytes.
#line 1 "ENTRY_10289c30"

__declspec(naked) void FUN_10289c30(void)

{
  __asm mov edx, dword ptr [ecx + 0x18]
  __asm mov eax, dword ptr [ecx + 0x14]
  __asm cmp eax, edx
  __asm _emit 0x74 __asm _emit 0x13
  __asm mov ecx, dword ptr [esp + 4]
  __asm nop
  __asm cmp dword ptr [eax], ecx
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 8
  __asm cmp eax, edx
  __asm _emit 0x75 __asm _emit 0xf5
  __asm cmp eax, edx
  __asm setne al
  __asm ret 4
}





// Reference entry 1028a560; body size 7 bytes.
#line 1 "ENTRY_1028a560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1028a560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028a570; body size 6 bytes.
#line 1 "ENTRY_1028a570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028a570(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 1028a580; body size 6 bytes.
#line 1 "ENTRY_1028a580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028a580(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1028a590; body size 6 bytes.
#line 1 "ENTRY_1028a590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028a590(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 1028a5a0; body size 6 bytes.
#line 1 "ENTRY_1028a5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028a5a0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1028a5b0; body size 3 bytes.
#line 1 "ENTRY_1028a5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028a5b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1028a5c0; body size 3 bytes.
#line 1 "ENTRY_1028a5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028a5c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1028a5d0; body size 3 bytes.
#line 1 "ENTRY_1028a5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028a5d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1028a8a0; body size 28 bytes.
#line 1 "ENTRY_1028a8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1028a8a0(undefined4 *param_1)

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


// Reference entry 1028a8d0; body size 28 bytes.
#line 1 "ENTRY_1028a8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1028a8d0(undefined4 *param_1)

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


// Reference entry 1028a900; body size 28 bytes.
#line 1 "ENTRY_1028a900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1028a900(undefined4 *param_1)

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


// Reference entry 1028a930; body size 5 bytes.
#line 1 "ENTRY_1028a930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028a930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028a940; body size 5 bytes.
#line 1 "ENTRY_1028a940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028a940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028b240; body size 9 bytes.
#line 1 "ENTRY_1028b240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1028b240(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 1028b270; body size 18 bytes.
#line 1 "ENTRY_1028b270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028b270(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b290; body size 18 bytes.
#line 1 "ENTRY_1028b290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028b290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b2b0; body size 22 bytes.
#line 1 "ENTRY_1028b2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028b2b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b2d0; body size 22 bytes.
#line 1 "ENTRY_1028b2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028b2d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b2f0; body size 18 bytes.
#line 1 "ENTRY_1028b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028b2f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b310; body size 18 bytes.
#line 1 "ENTRY_1028b310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028b310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b4d0; body size 31 bytes.
#line 1 "ENTRY_1028b4d0"

__declspec(naked) void FUN_1028b4d0(void)

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





// Reference entry 1028b500; body size 22 bytes.
#line 1 "ENTRY_1028b500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028b500(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b520; body size 22 bytes.
#line 1 "ENTRY_1028b520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028b520(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b540; body size 18 bytes.
#line 1 "ENTRY_1028b540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028b540(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b560; body size 22 bytes.
#line 1 "ENTRY_1028b560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028b560(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b580; body size 18 bytes.
#line 1 "ENTRY_1028b580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028b580(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b6c0; body size 33 bytes.
#line 1 "ENTRY_1028b6c0"

__declspec(naked) void FUN_1028b6c0(void)

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





// Reference entry 1028b770; body size 91 bytes.
#line 1 "ENTRY_1028b770"

__declspec(naked) void FUN_1028b770(void)

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





// Reference entry 1028b7f0; body size 25 bytes.
#line 1 "ENTRY_1028b7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028b7f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b810; body size 26 bytes.
#line 1 "ENTRY_1028b810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1028b810(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1028b830; body size 25 bytes.
#line 1 "ENTRY_1028b830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028b830(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1028b850; body size 26 bytes.
#line 1 "ENTRY_1028b850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1028b850(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1028b960; body size 25 bytes.
#line 1 "ENTRY_1028b960"

__declspec(naked) void FUN_1028b960(void)

{
  __asm push 0x18
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}





// Reference entry 1028b980; body size 25 bytes.
#line 1 "ENTRY_1028b980"

__declspec(naked) void FUN_1028b980(void)

{
  __asm push 0x18
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}





// Reference entry 1028bb00; body size 13 bytes.
#line 1 "ENTRY_1028bb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028bb00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1028bb10; body size 13 bytes.
#line 1 "ENTRY_1028bb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028bb10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1028bb20; body size 13 bytes.
#line 1 "ENTRY_1028bb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028bb20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1028bb30; body size 13 bytes.
#line 1 "ENTRY_1028bb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028bb30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1028bb40; body size 113 bytes.
#line 1 "ENTRY_1028bb40"

__declspec(naked) void FUN_1028bb40(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [edi]
  __asm push dword ptr [eax + 4]
  __asm call LAB_1001e9bb
  __asm mov ecx, dword ptr [edi]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov eax, dword ptr [esi + 4]
  __asm mov esi, dword ptr [edi]
  __asm mov dword ptr [edi + 4], eax
  __asm mov edx, dword ptr [esi + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x37
  __asm mov ecx, dword ptr [edx]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0c
  __asm mov eax, dword ptr [ecx]
  __asm mov edx, ecx
  __asm mov ecx, eax
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf4
  __asm mov dword ptr [esi], edx
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf5
  __asm pop edi
  __asm mov dword ptr [edx + 8], ecx
  __asm pop esi
  __asm ret 8
  __asm mov dword ptr [esi], esi
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm mov dword ptr [eax + 8], eax
  __asm ret 8
}





// Reference entry 1028bdc0; body size 3 bytes.
#line 1 "ENTRY_1028bdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028bdc0(void)

{
  return;
}


// Reference entry 1028bdd0; body size 3 bytes.
#line 1 "ENTRY_1028bdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028bdd0(void)

{
  return;
}


// Reference entry 1028c2d0; body size 161 bytes.
#line 1 "ENTRY_1028c2d0"

__declspec(naked) void FUN_1028c2d0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [eax + 4]
  __asm mov dword ptr [ebp], esi
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp byte ptr [esi + 0xd], 0
  __asm mov dword ptr [ebp + 8], eax
  __asm _emit 0x75 __asm _emit 0x7c
  __asm push ebx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm mov dword ptr [ebp], esi
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x34]
  __asm call eax
  __asm mov ecx, dword ptr [edi]
  __asm mov bl, al
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x34]
  __asm call eax
  __asm cmp bl, al
  __asm _emit 0x75 __asm _emit 0x3a
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm mov ebx, dword ptr [esp + 0x18]
  __asm mov edi, eax
  __asm mov ecx, dword ptr [ebx]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm cmp edi, eax
  __asm _emit 0x75 __asm _emit 0x1a
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm mov ebx, dword ptr [ebx]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x2c]
  __asm mov edi, eax
  __asm mov ecx, ebx
  __asm mov eax, dword ptr [ebx]
  __asm call dword ptr [eax + 0x2c]
  __asm cmp edi, eax
  __asm seta bl
  __asm _emit 0xeb __asm _emit 0x03
  __asm setl bl
  __asm mov edi, dword ptr [esp + 0x18]
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov esi, dword ptr [esi + 8]
  __asm xor eax, eax
  __asm _emit 0xeb __asm _emit 0x0a
  __asm mov dword ptr [ebp + 8], esi
  __asm mov eax, 1
  __asm mov esi, dword ptr [esi]
  __asm mov dword ptr [ebp + 4], eax
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x74 __asm _emit 0x8c
  __asm pop edi
  __asm pop ebx
  __asm pop esi
  __asm mov eax, ebp
  __asm pop ebp
  __asm ret 8
}





// Reference entry 1028c410; body size 15 bytes.
#line 1 "ENTRY_1028c410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028c410(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 1028c430; body size 15 bytes.
#line 1 "ENTRY_1028c430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028c430(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 1028c550; body size 5 bytes.
#line 1 "ENTRY_1028c550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028c560; body size 37 bytes.
#line 1 "ENTRY_1028c560"

__declspec(naked) void FUN_1028c560(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x16
  __asm add eax, 0x10
  __asm push eax
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_10049819
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x05
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}





// Reference entry 1028c590; body size 37 bytes.
#line 1 "ENTRY_1028c590"

__declspec(naked) void FUN_1028c590(void)

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





// Reference entry 1028c5c0; body size 19 bytes.
#line 1 "ENTRY_1028c5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028c5c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 1028c760; body size 5 bytes.
#line 1 "ENTRY_1028c760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028c770; body size 5 bytes.
#line 1 "ENTRY_1028c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028c780; body size 5 bytes.
#line 1 "ENTRY_1028c780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028c790; body size 5 bytes.
#line 1 "ENTRY_1028c790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028c7a0; body size 5 bytes.
#line 1 "ENTRY_1028c7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c7a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028c7b0; body size 5 bytes.
#line 1 "ENTRY_1028c7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c7b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028c7c0; body size 5 bytes.
#line 1 "ENTRY_1028c7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c7c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028c7d0; body size 5 bytes.
#line 1 "ENTRY_1028c7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c7d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028c7e0; body size 5 bytes.
#line 1 "ENTRY_1028c7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c7e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028c7f0; body size 5 bytes.
#line 1 "ENTRY_1028c7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c7f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028c800; body size 27 bytes.
#line 1 "ENTRY_1028c800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028c800(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 1028c830; body size 28 bytes.
#line 1 "ENTRY_1028c830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028c830(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1028c860; body size 28 bytes.
#line 1 "ENTRY_1028c860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028c860(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1028c970; body size 15 bytes.
#line 1 "ENTRY_1028c970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c970(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1028c990; body size 15 bytes.
#line 1 "ENTRY_1028c990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c990(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1028c9b0; body size 15 bytes.
#line 1 "ENTRY_1028c9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c9b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1028c9d0; body size 15 bytes.
#line 1 "ENTRY_1028c9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c9d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1028ca40; body size 5 bytes.
#line 1 "ENTRY_1028ca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028ca40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028ca50; body size 5 bytes.
#line 1 "ENTRY_1028ca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028ca50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028ca60; body size 5 bytes.
#line 1 "ENTRY_1028ca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028ca60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028ca70; body size 5 bytes.
#line 1 "ENTRY_1028ca70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028ca70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028ca80; body size 5 bytes.
#line 1 "ENTRY_1028ca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028ca80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028ca90; body size 5 bytes.
#line 1 "ENTRY_1028ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028ca90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028caa0; body size 5 bytes.
#line 1 "ENTRY_1028caa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028caa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028cab0; body size 5 bytes.
#line 1 "ENTRY_1028cab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028cab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028cac0; body size 5 bytes.
#line 1 "ENTRY_1028cac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028cac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028cad0; body size 5 bytes.
#line 1 "ENTRY_1028cad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028cad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028cae0; body size 5 bytes.
#line 1 "ENTRY_1028cae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028cae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028caf0; body size 5 bytes.
#line 1 "ENTRY_1028caf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028caf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028cb00; body size 6 bytes.
#line 1 "ENTRY_1028cb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1028cb00(void)

{
  return (char *)("SCISystemStatus");
}


// Reference entry 1028cb10; body size 6 bytes.
#line 1 "ENTRY_1028cb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1028cb10(void)

{
  return (char *)("SCISystemStatusManager");
}


// Reference entry 1028cb50; body size 5 bytes.
#line 1 "ENTRY_1028cb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028cb50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028cb60; body size 5 bytes.
#line 1 "ENTRY_1028cb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028cb60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028cb70; body size 5 bytes.
#line 1 "ENTRY_1028cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028cb70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028cb80; body size 19 bytes.
#line 1 "ENTRY_1028cb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028cb80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 1028cba0; body size 27 bytes.
#line 1 "ENTRY_1028cba0"

__declspec(naked) void FUN_1028cba0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188d770
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1028cbd0; body size 27 bytes.
#line 1 "ENTRY_1028cbd0"

__declspec(naked) void FUN_1028cbd0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188d854
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1028cc00; body size 32 bytes.
#line 1 "ENTRY_1028cc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028cc00(undefined4 *param_2)
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


// Reference entry 1028cc70; body size 16 bytes.
#line 1 "ENTRY_1028cc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028cc70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1028cd10; body size 18 bytes.
#line 1 "ENTRY_1028cd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028cd10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1028cd30; body size 18 bytes.
#line 1 "ENTRY_1028cd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028cd30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1028ce30; body size 11 bytes.
#line 1 "ENTRY_1028ce30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028ce30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1028ce40; body size 51 bytes.
#line 1 "ENTRY_1028ce40"

__declspec(naked) void FUN_1028ce40(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 1028cf80; body size 11 bytes.
#line 1 "ENTRY_1028cf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028cf80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1028cf90; body size 11 bytes.
#line 1 "ENTRY_1028cf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028cf90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1028cfa0; body size 11 bytes.
#line 1 "ENTRY_1028cfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1028cfa0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1028cfb0; body size 16 bytes.
#line 1 "ENTRY_1028cfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028cfb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1028cfd0; body size 16 bytes.
#line 1 "ENTRY_1028cfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028cfd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1028cff0; body size 3 bytes.
#line 1 "ENTRY_1028cff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028cff0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028d000; body size 3 bytes.
#line 1 "ENTRY_1028d000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028d000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028d010; body size 52 bytes.
#line 1 "ENTRY_1028d010"

__declspec(naked) void FUN_1028d010(void)

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





// Reference entry 1028d060; body size 76 bytes.
#line 1 "ENTRY_1028d060"

__declspec(naked) void FUN_1028d060(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm mov dword ptr [esp + 8], esi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm mov edx, dword ptr [esp + 0x10]
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx]
  __asm mov dword ptr [esi], ecx
  __asm mov dword ptr [edx], eax
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm mov dword ptr [edx + 4], ecx
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1028d1e0; body size 52 bytes.
#line 1 "ENTRY_1028d1e0"

__declspec(naked) void FUN_1028d1e0(void)

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





// Reference entry 1028d230; body size 76 bytes.
#line 1 "ENTRY_1028d230"

__declspec(naked) void FUN_1028d230(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm mov dword ptr [esp + 8], esi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm mov edx, dword ptr [esp + 0x10]
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx]
  __asm mov dword ptr [esi], ecx
  __asm mov dword ptr [edx], eax
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm mov dword ptr [edx + 4], ecx
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1028d3b0; body size 52 bytes.
#line 1 "ENTRY_1028d3b0"

__declspec(naked) void FUN_1028d3b0(void)

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





// Reference entry 1028d400; body size 9 bytes.
#line 1 "ENTRY_1028d400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028d400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISystemStatus);
  return (undefined4 *)(param_1);
}


// Reference entry 1028d410; body size 9 bytes.
#line 1 "ENTRY_1028d410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028d410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISystemStatusManager);
  return (undefined4 *)(param_1);
}


// Reference entry 1028dcc0; body size 7 bytes.
#line 1 "ENTRY_1028dcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1028dcc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1028dcd0; body size 7 bytes.
#line 1 "ENTRY_1028dcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1028dcd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1028de90; body size 65 bytes.
#line 1 "ENTRY_1028de90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1028de90(int *param_2)
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


// Reference entry 1028def0; body size 14 bytes.
#line 1 "ENTRY_1028def0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1028def0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1028df10; body size 14 bytes.
#line 1 "ENTRY_1028df10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1028df10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1028df30; body size 14 bytes.
#line 1 "ENTRY_1028df30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1028df30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1028df50; body size 14 bytes.
#line 1 "ENTRY_1028df50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1028df50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1028df70; body size 12 bytes.
#line 1 "ENTRY_1028df70"

__declspec(naked) void FUN_1028df70(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm sete al
  __asm ret 4
}





// Reference entry 1028e0d0; body size 3 bytes.
#line 1 "ENTRY_1028e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028e0d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1028e0e0; body size 7 bytes.
#line 1 "ENTRY_1028e0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1028e0e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1028e0f0; body size 7 bytes.
#line 1 "ENTRY_1028e0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1028e0f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1028e100; body size 3 bytes.
#line 1 "ENTRY_1028e100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028e100(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1028e110; body size 7 bytes.
#line 1 "ENTRY_1028e110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1028e110(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1028e120; body size 3 bytes.
#line 1 "ENTRY_1028e120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028e120(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1028e130; body size 3 bytes.
#line 1 "ENTRY_1028e130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028e130(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1028e140; body size 3 bytes.
#line 1 "ENTRY_1028e140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028e140(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1028e150; body size 3 bytes.
#line 1 "ENTRY_1028e150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028e150(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1028e160; body size 3 bytes.
#line 1 "ENTRY_1028e160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028e160(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1028e170; body size 3 bytes.
#line 1 "ENTRY_1028e170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028e170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1028e180; body size 6 bytes.
#line 1 "ENTRY_1028e180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1028e180(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 1028e190; body size 6 bytes.
#line 1 "ENTRY_1028e190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1028e190(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 1028e1a0; body size 6 bytes.
#line 1 "ENTRY_1028e1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1028e1a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 1028e1b0; body size 20 bytes.
#line 1 "ENTRY_1028e1b0"

__declspec(naked) void FUN_1028e1b0(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_10059c19
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 1028e620; body size 31 bytes.
#line 1 "ENTRY_1028e620"

__declspec(naked) void FUN_1028e620(void)

{
  __asm push esi
  __asm push 0x18
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





// Reference entry 1028e650; body size 31 bytes.
#line 1 "ENTRY_1028e650"

__declspec(naked) void FUN_1028e650(void)

{
  __asm push esi
  __asm push 0x18
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





// Reference entry 1028e6c0; body size 14 bytes.
#line 1 "ENTRY_1028e6c0"

__declspec(naked) void FUN_1028e6c0(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 1028e6e0; body size 14 bytes.
#line 1 "ENTRY_1028e6e0"

__declspec(naked) void FUN_1028e6e0(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 1028e7b0; body size 5 bytes.
#line 1 "ENTRY_1028e7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028e7b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028eb10; body size 3 bytes.
#line 1 "ENTRY_1028eb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028eb10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028eb20; body size 3 bytes.
#line 1 "ENTRY_1028eb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028eb20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028eb30; body size 3 bytes.
#line 1 "ENTRY_1028eb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028eb30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028eb40; body size 3 bytes.
#line 1 "ENTRY_1028eb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028eb40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028eb50; body size 3 bytes.
#line 1 "ENTRY_1028eb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028eb50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028eb60; body size 3 bytes.
#line 1 "ENTRY_1028eb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028eb60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028eb70; body size 3 bytes.
#line 1 "ENTRY_1028eb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028eb70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028eb80; body size 3 bytes.
#line 1 "ENTRY_1028eb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028eb80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028eb90; body size 3 bytes.
#line 1 "ENTRY_1028eb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028eb90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028eba0; body size 3 bytes.
#line 1 "ENTRY_1028eba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028eba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028ebb0; body size 3 bytes.
#line 1 "ENTRY_1028ebb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028ebb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028ebc0; body size 3 bytes.
#line 1 "ENTRY_1028ebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028ebc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028ebe0; body size 3 bytes.
#line 1 "ENTRY_1028ebe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028ebe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028ebf0; body size 3 bytes.
#line 1 "ENTRY_1028ebf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028ebf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028ec00; body size 3 bytes.
#line 1 "ENTRY_1028ec00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028ec00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028f130; body size 5 bytes.
#line 1 "ENTRY_1028f130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028f130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1028f220; body size 13 bytes.
#line 1 "ENTRY_1028f220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1028f220(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1028f2c0; body size 3 bytes.
#line 1 "ENTRY_1028f2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1028f2c0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1028f2d0; body size 3 bytes.
#line 1 "ENTRY_1028f2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1028f2d0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1028f2e0; body size 11 bytes.
#line 1 "ENTRY_1028f2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028f2e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1028f2f0; body size 11 bytes.
#line 1 "ENTRY_1028f2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028f2f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1028f300; body size 8 bytes.
#line 1 "ENTRY_1028f300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1028f300(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 1028f3f0; body size 33 bytes.
#line 1 "ENTRY_1028f3f0"

__declspec(naked) void FUN_1028f3f0(void)

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





// Reference entry 1028f420; body size 13 bytes.
#line 1 "ENTRY_1028f420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1028f420(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1028f430; body size 10 bytes.
#line 1 "ENTRY_1028f430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1028f430(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 1028f440; body size 11 bytes.
#line 1 "ENTRY_1028f440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1028f440(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10290110; body size 90 bytes.
#line 1 "ENTRY_10290110"

__declspec(naked) void FUN_10290110(void)

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





// Reference entry 10290190; body size 13 bytes.
#line 1 "ENTRY_10290190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10290190(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 102901a0; body size 13 bytes.
#line 1 "ENTRY_102901a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_102901a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10290210; body size 57 bytes.
#line 1 "ENTRY_10290210"

__declspec(naked) void FUN_10290210(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 3
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





// Reference entry 10290260; body size 57 bytes.
#line 1 "ENTRY_10290260"

__declspec(naked) void FUN_10290260(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 3
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





// Reference entry 102902b0; body size 60 bytes.
#line 1 "ENTRY_102902b0"

__declspec(naked) void FUN_102902b0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 3
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





// Reference entry 10290300; body size 60 bytes.
#line 1 "ENTRY_10290300"

__declspec(naked) void FUN_10290300(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 3
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





// Reference entry 10290350; body size 9 bytes.
#line 1 "ENTRY_10290350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10290350(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10290360; body size 9 bytes.
#line 1 "ENTRY_10290360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10290360(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10290370; body size 12 bytes.
#line 1 "ENTRY_10290370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10290370(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10290380; body size 11 bytes.
#line 1 "ENTRY_10290380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10290380(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10290390; body size 11 bytes.
#line 1 "ENTRY_10290390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10290390(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102903a0; body size 11 bytes.
#line 1 "ENTRY_102903a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_102903a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10291f60; body size 21 bytes.
#line 1 "ENTRY_10291f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10291f60(undefined4 param_1)

{
  thunk_FUN_102909a0((int)(param_1),(int)(&DAT_121a0c1c));
  return (undefined4)(param_1);
}


// Reference entry 10291f80; body size 21 bytes.
#line 1 "ENTRY_10291f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10291f80(undefined4 param_1)

{
  thunk_FUN_10292500((int)(param_1),(int)(&DAT_121a0c1c));
  return (undefined4)(param_1);
}


// Reference entry 102926b0; body size 27 bytes.
#line 1 "ENTRY_102926b0"

__declspec(naked) void FUN_102926b0(void)

{
  __asm push ecx
  __asm lea eax, [esp + 3]
  __asm push eax
  __asm lea eax, [ecx + 0x3c]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_1004e305
  __asm mov eax, dword ptr [esp + 8]
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10293390; body size 6 bytes.
#line 1 "ENTRY_10293390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10293390(void)

{
  return (char *)("SCISystemStatus");
}


// Reference entry 102933a0; body size 6 bytes.
#line 1 "ENTRY_102933a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102933a0(void)

{
  return (char *)("SCISystemStatusManager");
}


// Reference entry 102933e0; body size 7 bytes.
#line 1 "ENTRY_102933e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102933e0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 102933f0; body size 7 bytes.
#line 1 "ENTRY_102933f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102933f0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10293400; body size 7 bytes.
#line 1 "ENTRY_10293400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10293400(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10293430; body size 7 bytes.
#line 1 "ENTRY_10293430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10293430(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10293440; body size 34 bytes.
#line 1 "ENTRY_10293440"

__declspec(naked) void FUN_10293440(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp dword ptr [ecx + 8], 1
  __asm _emit 0x75 __asm _emit 0x13
  __asm push offset LAB_121a0be0
  __asm call LAB_1006fd4d
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}





// Reference entry 10293470; body size 7 bytes.
#line 1 "ENTRY_10293470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10293470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10293480; body size 8 bytes.
#line 1 "ENTRY_10293480"

__declspec(naked) void FUN_10293480(void)

{
  __asm add ecx, 0x3c
  __asm jmp LAB_10084e46
}







// Reference entry 10293490; body size 6 bytes.
#line 1 "ENTRY_10293490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10293490(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 102934a0; body size 6 bytes.
#line 1 "ENTRY_102934a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102934a0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 102934b0; body size 6 bytes.
#line 1 "ENTRY_102934b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102934b0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 102934c0; body size 6 bytes.
#line 1 "ENTRY_102934c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102934c0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 102935c0; body size 5 bytes.
#line 1 "ENTRY_102935c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102935c0(int param_1)

{
  *(undefined1*)(param_1 + 0x65) = (undefined1)(1);
  return;
}


// Reference entry 102935d0; body size 3 bytes.
#line 1 "ENTRY_102935d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102935d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10293820; body size 28 bytes.
#line 1 "ENTRY_10293820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10293820(undefined4 *param_1)

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


// Reference entry 10293850; body size 28 bytes.
#line 1 "ENTRY_10293850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10293850(undefined4 *param_1)

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


// Reference entry 10293880; body size 28 bytes.
#line 1 "ENTRY_10293880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10293880(undefined4 *param_1)

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


// Reference entry 102938b0; body size 28 bytes.
#line 1 "ENTRY_102938b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102938b0(undefined4 *param_1)

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


// Reference entry 10293ee0; body size 5 bytes.
#line 1 "ENTRY_10293ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10293ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10293f00; body size 4 bytes.
#line 1 "ENTRY_10293f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10293f00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10293f10; body size 4 bytes.
#line 1 "ENTRY_10293f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10293f10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10293f60; body size 18 bytes.
#line 1 "ENTRY_10293f60"

__declspec(naked) void FUN_10293f60(void)

{
  __asm cmp dword ptr [ecx + 0x68], 0
  __asm _emit 0x76 __asm _emit 0x0b
  __asm push dword ptr [ecx + 0x6c]
  __asm add ecx, 0xc
  __asm call LAB_1001ec63
  __asm ret
}





// Reference entry 10293fc0; body size 38 bytes.
#line 1 "ENTRY_10293fc0"

__declspec(naked) void FUN_10293fc0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}





// Reference entry 10293ff0; body size 18 bytes.
#line 1 "ENTRY_10293ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10293ff0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10294010; body size 18 bytes.
#line 1 "ENTRY_10294010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10294010(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10294030; body size 22 bytes.
#line 1 "ENTRY_10294030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10294030(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10294050; body size 22 bytes.
#line 1 "ENTRY_10294050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10294050(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10294070; body size 18 bytes.
#line 1 "ENTRY_10294070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10294070(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10294230; body size 38 bytes.
#line 1 "ENTRY_10294230"

__declspec(naked) void FUN_10294230(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}





// Reference entry 10294260; body size 22 bytes.
#line 1 "ENTRY_10294260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10294260(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10294280; body size 11 bytes.
#line 1 "ENTRY_10294280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10294280(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10294290; body size 40 bytes.
#line 1 "ENTRY_10294290"

__declspec(naked) void FUN_10294290(void)

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
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0x10
}





// Reference entry 102942d0; body size 40 bytes.
#line 1 "ENTRY_102942d0"

__declspec(naked) void FUN_102942d0(void)

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
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0x10
}





// Reference entry 10294310; body size 11 bytes.
#line 1 "ENTRY_10294310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10294310(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102943b0; body size 11 bytes.
#line 1 "ENTRY_102943b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102943b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102943c0; body size 3 bytes.
#line 1 "ENTRY_102943c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102943c0(void)

{
  return;
}


// Reference entry 102943d0; body size 25 bytes.
#line 1 "ENTRY_102943d0"

__declspec(naked) void FUN_102943d0(void)

{
  __asm push 0x1c
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}





// Reference entry 102943f0; body size 13 bytes.
#line 1 "ENTRY_102943f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102943f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10294400; body size 13 bytes.
#line 1 "ENTRY_10294400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10294400(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10294410; body size 3 bytes.
#line 1 "ENTRY_10294410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10294410(void)

{
  return;
}


// Reference entry 102947f0; body size 15 bytes.
#line 1 "ENTRY_102947f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102947f0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 102948b0; body size 5 bytes.
#line 1 "ENTRY_102948b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102948b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102948c0; body size 5 bytes.
#line 1 "ENTRY_102948c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102948c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102948d0; body size 37 bytes.
#line 1 "ENTRY_102948d0"

__declspec(naked) void FUN_102948d0(void)

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





// Reference entry 10294b80; body size 7 bytes.
#line 1 "ENTRY_10294b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294b80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10294b90; body size 5 bytes.
#line 1 "ENTRY_10294b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10294ba0; body size 5 bytes.
#line 1 "ENTRY_10294ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10294bb0; body size 5 bytes.
#line 1 "ENTRY_10294bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10294bc0; body size 5 bytes.
#line 1 "ENTRY_10294bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10294bd0; body size 5 bytes.
#line 1 "ENTRY_10294bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10294be0; body size 5 bytes.
#line 1 "ENTRY_10294be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10294bf0; body size 34 bytes.
#line 1 "ENTRY_10294bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10294bf0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10294c20; body size 34 bytes.
#line 1 "ENTRY_10294c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10294c20(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10294c50; body size 14 bytes.
#line 1 "ENTRY_10294c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10294c50(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  return;
}


// Reference entry 10294d00; body size 86 bytes.
#line 1 "ENTRY_10294d00"

__declspec(naked) void FUN_10294d00(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push edi
  __asm xor edi, edi
  __asm cmp eax, ecx
  __asm _emit 0x74 __asm _emit 0x43
  __asm push esi
  __asm mov edx, dword ptr [eax + 8]
  __asm inc edi
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0x1d
  __asm mov edx, dword ptr [eax + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x10
  __asm cmp eax, dword ptr [edx + 8]
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov eax, edx
  __asm mov edx, dword ptr [edx + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf0
  __asm mov eax, edx
  __asm _emit 0xeb __asm _emit 0x16
  __asm mov eax, edx
  __asm mov esi, dword ptr [eax]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0c
  __asm mov edx, dword ptr [esi]
  __asm mov eax, esi
  __asm mov esi, edx
  __asm cmp byte ptr [edx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf4
  __asm cmp eax, ecx
  __asm _emit 0x75 __asm _emit 0xbf
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret
}





// Reference entry 10294d70; body size 15 bytes.
#line 1 "ENTRY_10294d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294d70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10294d90; body size 15 bytes.
#line 1 "ENTRY_10294d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294d90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10294db0; body size 5 bytes.
#line 1 "ENTRY_10294db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10294dc0; body size 5 bytes.
#line 1 "ENTRY_10294dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10294dd0; body size 5 bytes.
#line 1 "ENTRY_10294dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10294de0; body size 5 bytes.
#line 1 "ENTRY_10294de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10294df0; body size 11 bytes.
#line 1 "ENTRY_10294df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10294df0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10294e00; body size 6 bytes.
#line 1 "ENTRY_10294e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10294e00(void)

{
  return (char *)("SCINetstartScanListEntry");
}


// Reference entry 10294e10; body size 6 bytes.
#line 1 "ENTRY_10294e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10294e10(void)

{
  return (char *)("SCIOpNetstartGetScanList");
}


// Reference entry 10294e20; body size 6 bytes.
#line 1 "ENTRY_10294e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10294e20(void)

{
  return (char *)("SCIOpNetstartSendRevert");
}


// Reference entry 10294e30; body size 5 bytes.
#line 1 "ENTRY_10294e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10294e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10294e40; body size 28 bytes.
#line 1 "ENTRY_10294e40"

__declspec(naked) void FUN_10294e40(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_1188de78
  __asm pop ecx
  __asm ret
}





// Reference entry 10294f00; body size 27 bytes.
#line 1 "ENTRY_10294f00"

__declspec(naked) void FUN_10294f00(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188ded8
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10294f30; body size 27 bytes.
#line 1 "ENTRY_10294f30"

__declspec(naked) void FUN_10294f30(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188df50
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10294f60; body size 27 bytes.
#line 1 "ENTRY_10294f60"

__declspec(naked) void FUN_10294f60(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188dbb0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10295130; body size 32 bytes.
#line 1 "ENTRY_10295130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10295130(undefined4 *param_2)
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


// Reference entry 102951a0; body size 16 bytes.
#line 1 "ENTRY_102951a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102951a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102951e0; body size 18 bytes.
#line 1 "ENTRY_102951e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102951e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102952c0; body size 11 bytes.
#line 1 "ENTRY_102952c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102952c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102952d0; body size 11 bytes.
#line 1 "ENTRY_102952d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102952d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102952e0; body size 16 bytes.
#line 1 "ENTRY_102952e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102952e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10295300; body size 3 bytes.
#line 1 "ENTRY_10295300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10295300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10295310; body size 3 bytes.
#line 1 "ENTRY_10295310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10295310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10295350; body size 52 bytes.
#line 1 "ENTRY_10295350"

__declspec(naked) void FUN_10295350(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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





// Reference entry 102953a0; body size 13 bytes.
#line 1 "ENTRY_102953a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102953a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102953b0; body size 9 bytes.
#line 1 "ENTRY_102953b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102953b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataIOSSLInterface);
  return (undefined4 *)(param_1);
}


// Reference entry 102953c0; body size 9 bytes.
#line 1 "ENTRY_102953c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102953c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPDataIO);
  return (undefined4 *)(param_1);
}


// Reference entry 10295620; body size 279 bytes.
#line 1 "ENTRY_10295620"

__declspec(naked) void FUN_10295620(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x430]
  __asm sub esp, 0x430
  __asm push -1
  __asm push offset LAB_1151cecf
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0xc
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm mov dword ptr [ebp + 0x42c], eax
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x10], esi
  __asm mov dword ptr [ebp - 0x14], esi
  __asm mov edi, dword ptr [ebp + 0x438]
  __asm push 0
  __asm mov dword ptr [ebp - 0x18], esi
  __asm call LAB_1004458a
  __asm mov dword ptr [esi + 0x610c], offset LAB_1188db30
  __asm mov dword ptr [esi], offset LAB_1188e12c
  __asm mov dword ptr [esi + 0x610c], offset LAB_1188e148
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x10 __asm _emit 0x61 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm lea ebx, [esi + 0x6114]
  __asm _emit 0xc7 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esi, 0x6118
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push 0xb
  __asm push offset LAB_1188e168
  __asm lea eax, [ebp + 0x28]
  __asm mov byte ptr [ebp - 4], 3
  __asm push 0x401
  __asm push eax
  __asm call LAB_10019d3a
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm cmovne ecx, eax
  __asm lea eax, [ebp + 0x28]
  __asm push ecx
  __asm push eax
  __asm push esi
  __asm call LAB_1003a1de
  __asm add esp, 0x1c
  __asm lea ecx, [ebp]
  __asm push 0
  __asm call LAB_10080f30
  __asm lea eax, [ebp]
  __asm mov byte ptr [ebp - 4], 4
  __asm push eax
  __asm push offset LAB_1188e188
  __asm push ebx
  __asm call LAB_1003a1de
  __asm add esp, 0xc
  __asm lea ecx, [ebp]
  __asm call LAB_100593f9
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov ecx, dword ptr [ebp + 0x42c]
  __asm xor ecx, ebp
  __asm call LAB_100382f3
  __asm lea esp, [ebp + 0x430]
  __asm pop ebp
  __asm ret 4
}





// Reference entry 10295780; body size 84 bytes.
#line 1 "ENTRY_10295780"

__declspec(naked) void FUN_10295780(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, 0x3eb
  __asm push 0x19
  __asm push dword ptr [esp + 0x14]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov word ptr [esi + 0xc], ax
  __asm mov eax, dword ptr [esp + 0x14]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], offset LAB_1188e0ec
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 0x14], eax
  __asm lea eax, [esi + 0x18]
  __asm push eax
  __asm mov dword ptr [esi + 0x10], edx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005907a
  __asm add esp, 0xc
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 102957f0; body size 84 bytes.
#line 1 "ENTRY_102957f0"

__declspec(naked) void FUN_102957f0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, 0x3eb
  __asm push 0x19
  __asm push dword ptr [esp + 0x14]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov word ptr [esi + 0xc], ax
  __asm mov eax, dword ptr [esp + 0x14]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], offset LAB_1188e094
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 0x14], eax
  __asm lea eax, [esi + 0x18]
  __asm push eax
  __asm mov dword ptr [esi + 0x10], edx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005907a
  __asm add esp, 0xc
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10295860; body size 37 bytes.
#line 1 "ENTRY_10295860"

__declspec(naked) void FUN_10295860(void)

{
  __asm push ecx
  __asm mov eax, 0x3eb
  __asm mov dword ptr [esp], ecx
  __asm mov word ptr [ecx + 0xc], ax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], offset LAB_1188dae8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 10295890; body size 9 bytes.
#line 1 "ENTRY_10295890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10295890(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNetstartOpCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 102958a0; body size 124 bytes.
#line 1 "ENTRY_102958a0"

__declspec(naked) void FUN_102958a0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, 0x3eb
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x19
  __asm push dword ptr [esp + 0x14]
  __asm mov dword ptr [esp + 0xc], esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [esi + 0xc], dx
  __asm mov dword ptr [esi], offset LAB_1188de84
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 0x14], eax
  __asm mov al, byte ptr [esp + 0x1c]
  __asm mov byte ptr [esi + 0x340a], al
  __asm lea eax, [esi + 0x18]
  __asm push eax
  __asm mov dword ptr [esi + 0x10], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x34 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + 0x38], 0xff
  __asm mov word ptr [esi + 0x3408], dx
  __asm call LAB_1005907a
  __asm push 0x33cc
  __asm lea eax, [esi + 0x3c]
  __asm push 0
  __asm push eax
  __asm call LAB_1148ce0b
  __asm add esp, 0x18
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}





// Reference entry 10295940; body size 9 bytes.
#line 1 "ENTRY_10295940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10295940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINetstartScanListEntry);
  return (undefined4 *)(param_1);
}


// Reference entry 10295950; body size 9 bytes.
#line 1 "ENTRY_10295950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10295950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpNetstartGetScanList);
  return (undefined4 *)(param_1);
}


// Reference entry 10295960; body size 9 bytes.
#line 1 "ENTRY_10295960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10295960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpNetstartSendRevert);
  return (undefined4 *)(param_1);
}


// Reference entry 10296300; body size 11 bytes.
#line 1 "ENTRY_10296300"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10296300(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RLookupV1CertInfoAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10296710; body size 3 bytes.
#line 1 "ENTRY_10296710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10296710(void)

{
  return;
}


// Reference entry 10296720; body size 3 bytes.
#line 1 "ENTRY_10296720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10296720(void)

{
  return;
}


// Reference entry 10296730; body size 18 bytes.
#line 1 "ENTRY_10296730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10296730(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  FUN_1006fe74<>();
  return;
}


// Reference entry 102968b0; body size 7 bytes.
#line 1 "ENTRY_102968b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102968b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  return;
}


// Reference entry 102968c0; body size 7 bytes.
#line 1 "ENTRY_102968c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102968c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  return;
}


// Reference entry 102968f0; body size 7 bytes.
#line 1 "ENTRY_102968f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102968f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  return;
}


// Reference entry 10296900; body size 3 bytes.
#line 1 "ENTRY_10296900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10296900(void)

{
  return;
}


// Reference entry 10296910; body size 7 bytes.
#line 1 "ENTRY_10296910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10296910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10296920; body size 7 bytes.
#line 1 "ENTRY_10296920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10296920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10296930; body size 7 bytes.
#line 1 "ENTRY_10296930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10296930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102969d0; body size 18 bytes.
#line 1 "ENTRY_102969d0"

__declspec(naked) void FUN_102969d0(void)

{
  __asm mov dword ptr [ecx], offset LAB_1188dd9c
  __asm mov dword ptr [ecx + 8], offset LAB_1188dde4
  __asm jmp LAB_100974d3
}





// Reference entry 10296ea0; body size 65 bytes.
#line 1 "ENTRY_10296ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10296ea0(int *param_2)
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


// Reference entry 10296f00; body size 14 bytes.
#line 1 "ENTRY_10296f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10296f00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10296f20; body size 14 bytes.
#line 1 "ENTRY_10296f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10296f20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10297160; body size 3 bytes.
#line 1 "ENTRY_10297160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10297160(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10297170; body size 7 bytes.
#line 1 "ENTRY_10297170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10297170(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10297180; body size 4 bytes.
#line 1 "ENTRY_10297180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10297180(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10297190; body size 4 bytes.
#line 1 "ENTRY_10297190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10297190(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102971a0; body size 3 bytes.
#line 1 "ENTRY_102971a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102971a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102971b0; body size 6 bytes.
#line 1 "ENTRY_102971b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102971b0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 102971c0; body size 6 bytes.
#line 1 "ENTRY_102971c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102971c0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 102971d0; body size 9 bytes.
#line 1 "ENTRY_102971d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102971d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 102971e0; body size 9 bytes.
#line 1 "ENTRY_102971e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102971e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 102971f0; body size 20 bytes.
#line 1 "ENTRY_102971f0"

__declspec(naked) void FUN_102971f0(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_1007f586
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 10297e10; body size 31 bytes.
#line 1 "ENTRY_10297e10"

__declspec(naked) void FUN_10297e10(void)

{
  __asm push esi
  __asm push 0x1c
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





// Reference entry 10297e60; body size 14 bytes.
#line 1 "ENTRY_10297e60"

__declspec(naked) void FUN_10297e60(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 102983e0; body size 3 bytes.
#line 1 "ENTRY_102983e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102983e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102983f0; body size 3 bytes.
#line 1 "ENTRY_102983f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102983f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10298400; body size 3 bytes.
#line 1 "ENTRY_10298400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10298400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10298410; body size 3 bytes.
#line 1 "ENTRY_10298410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10298410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10298420; body size 3 bytes.
#line 1 "ENTRY_10298420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10298420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10298430; body size 3 bytes.
#line 1 "ENTRY_10298430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10298430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10298440; body size 3 bytes.
#line 1 "ENTRY_10298440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10298440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10298450; body size 3 bytes.
#line 1 "ENTRY_10298450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10298450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10298760; body size 30 bytes.
#line 1 "ENTRY_10298760"

__declspec(naked) void FUN_10298760(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0e __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf5
  __asm mov eax, ecx
  __asm ret
}





// Reference entry 102987c0; body size 3 bytes.
#line 1 "ENTRY_102987c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102987c0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 102987d0; body size 11 bytes.
#line 1 "ENTRY_102987d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102987d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10298850; body size 38 bytes.
#line 1 "ENTRY_10298850"

__declspec(naked) void FUN_10298850(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov edx, dword ptr [esi + 4]
  __asm mov dword ptr [eax], esi
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [ecx + 4]
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + 4], eax
  __asm mov dword ptr [edx], eax
  __asm pop esi
  __asm ret 4
}





// Reference entry 10298880; body size 13 bytes.
#line 1 "ENTRY_10298880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10298880(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10299580; body size 13 bytes.
#line 1 "ENTRY_10299580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10299580(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 102995a0; body size 8 bytes.
#line 1 "ENTRY_102995a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102995a0(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10299a30; body size 63 bytes.
#line 1 "ENTRY_10299a30"

__declspec(naked) void FUN_10299a30(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
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





// Reference entry 10299a80; body size 66 bytes.
#line 1 "ENTRY_10299a80"

__declspec(naked) void FUN_10299a80(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
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





// Reference entry 10299bc0; body size 11 bytes.
#line 1 "ENTRY_10299bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10299bc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1029ade0; body size 4 bytes.
#line 1 "ENTRY_1029ade0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029ade0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x34));
}


// Reference entry 1029ae00; body size 46 bytes.
#line 1 "ENTRY_1029ae00"

__declspec(naked) void FUN_1029ae00(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x21
  __asm cmp dword ptr [esp + 8], 0x20
  __asm _emit 0x75 __asm _emit 0x1a
  __asm movups xmm0, xmmword ptr [ecx + 0x6148]
  __asm movups xmmword ptr [eax], xmm0
  __asm movups xmm0, xmmword ptr [ecx + 0x6158]
  __asm movups xmmword ptr [eax + 0x10], xmm0
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}





// Reference entry 1029ae40; body size 23 bytes.
#line 1 "ENTRY_1029ae40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1029ae40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6110));
  return (SCStr *)(param_2);
}


// Reference entry 1029aeb0; body size 17 bytes.
#line 1 "ENTRY_1029aeb0"

__declspec(naked) void FUN_1029aeb0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6118]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}





// Reference entry 1029aee0; body size 4 bytes.
#line 1 "ENTRY_1029aee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029aee0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x34));
}


// Reference entry 1029af00; body size 7 bytes.
#line 1 "ENTRY_1029af00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029af00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x4484));
}


// Reference entry 1029b0e0; body size 7 bytes.
#line 1 "ENTRY_1029b0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029b0e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x448c));
}


// Reference entry 1029b0f0; body size 4 bytes.
#line 1 "ENTRY_1029b0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1029b0f0(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 1029b100; body size 7 bytes.
#line 1 "ENTRY_1029b100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029b100(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6104));
}


// Reference entry 1029b120; body size 7 bytes.
#line 1 "ENTRY_1029b120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029b120(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1e0));
}


// Reference entry 1029b130; body size 7 bytes.
#line 1 "ENTRY_1029b130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029b130(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1e4));
}


// Reference entry 1029b140; body size 7 bytes.
#line 1 "ENTRY_1029b140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1029b140(int param_1)

{
  return (int)(param_1 + 0x234);
}


// Reference entry 1029b150; body size 4 bytes.
#line 1 "ENTRY_1029b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029b150(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x38));
}


// Reference entry 1029b270; body size 7 bytes.
#line 1 "ENTRY_1029b270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029b270(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6168));
}


// Reference entry 1029b3a0; body size 4 bytes.
#line 1 "ENTRY_1029b3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1029b3a0(int param_1)

{
  return (int)(param_1 + 0x3c);
}


// Reference entry 1029b3c0; body size 8 bytes.
#line 1 "ENTRY_1029b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_1029b3c0(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x22a));
}


// Reference entry 1029b3d0; body size 7 bytes.
#line 1 "ENTRY_1029b3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1029b3d0(int param_1)

{
  return (int)(param_1 + 0x1e8);
}


// Reference entry 1029b3e0; body size 14 bytes.
#line 1 "ENTRY_1029b3e0"

__declspec(naked) void FUN_1029b3e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x5c]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}





// Reference entry 1029b400; body size 5 bytes.
#line 1 "ENTRY_1029b400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_1029b400(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0xc));
}


// Reference entry 1029b420; body size 7 bytes.
#line 1 "ENTRY_1029b420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1029b420(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x530));
}


// Reference entry 1029b5f0; body size 6 bytes.
#line 1 "ENTRY_1029b5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1029b5f0(void)

{
  return (char *)("SCINetstartScanListEntry");
}


// Reference entry 1029b600; body size 6 bytes.
#line 1 "ENTRY_1029b600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1029b600(void)

{
  return (char *)("SCIOpNetstartGetScanList");
}


// Reference entry 1029b610; body size 6 bytes.
#line 1 "ENTRY_1029b610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1029b610(void)

{
  return (char *)("SCIOpNetstartSendRevert");
}


// Reference entry 1029b630; body size 7 bytes.
#line 1 "ENTRY_1029b630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1029b630(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1029b640; body size 7 bytes.
#line 1 "ENTRY_1029b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1029b640(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1029b6c0; body size 7 bytes.
#line 1 "ENTRY_1029b6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1029b6c0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x5fc));
}


// Reference entry 1029b770; body size 6 bytes.
#line 1 "ENTRY_1029b770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1029b770(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 1029b780; body size 6 bytes.
#line 1 "ENTRY_1029b780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1029b780(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 1029c0e0; body size 3 bytes.
#line 1 "ENTRY_1029c0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029c0e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1029c7d0; body size 28 bytes.
#line 1 "ENTRY_1029c7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029c7d0(undefined4 *param_1)

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


// Reference entry 1029c940; body size 24 bytes.
#line 1 "ENTRY_1029c940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1029c940(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0((int)(param_1),(int)(param_2),(int)(param_3));
  return (undefined4)(param_1);
}


// Reference entry 1029cbc0; body size 26 bytes.
#line 1 "ENTRY_1029cbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1029cbc0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1029cbe0; body size 6 bytes.
#line 1 "ENTRY_1029cbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1029cbe0(void)

{
  return (char *)("SCISystemTime");
}


// Reference entry 1029cbf0; body size 27 bytes.
#line 1 "ENTRY_1029cbf0"

__declspec(naked) void FUN_1029cbf0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188e2d0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1029cc20; body size 16 bytes.
#line 1 "ENTRY_1029cc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029cc20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1029cc60; body size 26 bytes.
#line 1 "ENTRY_1029cc60"

__declspec(naked) void FUN_1029cc60(void)

{
  __asm xor eax, eax
  __asm mov dword ptr [ecx], offset LAB_1188e3e0
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov dword ptr [ecx + 0xc], eax
  __asm mov dword ptr [ecx + 0x10], eax
  __asm mov byte ptr [ecx + 0x14], al
  __asm mov eax, ecx
  __asm ret
}





// Reference entry 1029cc80; body size 26 bytes.
#line 1 "ENTRY_1029cc80"

__declspec(naked) void FUN_1029cc80(void)

{
  __asm xor eax, eax
  __asm mov dword ptr [ecx], offset LAB_1188e3c8
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov dword ptr [ecx + 0xc], eax
  __asm mov dword ptr [ecx + 0x10], eax
  __asm mov byte ptr [ecx + 0x14], al
  __asm mov eax, ecx
  __asm ret
}





// Reference entry 1029cca0; body size 9 bytes.
#line 1 "ENTRY_1029cca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029cca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISystemTime);
  return (undefined4 *)(param_1);
}


// Reference entry 1029ce20; body size 87 bytes.
#line 1 "ENTRY_1029ce20"

__declspec(naked) void FUN_1029ce20(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1188e2d0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], offset LAB_1188e34c
  __asm mov eax, dword ptr [edx + 8]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, dword ptr [edx + 0xc]
  __asm mov dword ptr [ecx + 0xc], eax
  __asm mov eax, dword ptr [edx + 0x10]
  __asm mov dword ptr [ecx + 0x10], eax
  __asm mov eax, dword ptr [edx + 0x14]
  __asm mov dword ptr [ecx + 0x14], eax
  __asm mov eax, dword ptr [edx + 0x18]
  __asm mov dword ptr [ecx + 0x18], eax
  __asm mov eax, dword ptr [edx + 0x1c]
  __asm mov dword ptr [ecx + 0x1c], eax
  __asm mov eax, dword ptr [edx + 0x20]
  __asm mov dword ptr [ecx + 0x20], eax
  __asm mov eax, dword ptr [edx + 0x24]
  __asm mov dword ptr [ecx + 0x24], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1029cf10; body size 89 bytes.
#line 1 "ENTRY_1029cf10"

__declspec(naked) void FUN_1029cf10(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188e2d0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1188e34c
  __asm mov dword ptr [ecx + 8], 0x7d1
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 1029d0e0; body size 3 bytes.
#line 1 "ENTRY_1029d0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1029d0e0(void)

{
  return;
}


// Reference entry 1029d0f0; body size 3 bytes.
#line 1 "ENTRY_1029d0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1029d0f0(void)

{
  return;
}


// Reference entry 1029d100; body size 7 bytes.
#line 1 "ENTRY_1029d100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029d100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1029d1a0; body size 3 bytes.
#line 1 "ENTRY_1029d1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029d1a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1029d9f0; body size 6 bytes.
#line 1 "ENTRY_1029d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1029d9f0(void)

{
  return (char *)("SCISystemTime");
}


// Reference entry 1029da00; body size 63 bytes.
#line 1 "ENTRY_1029da00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1029da00(int param_2)
{
  int param_1 = (int )this;
  *(uint*)(param_1 + 8) = (uint)((uint)*(ushort *)(param_2 + 4));
  *(uint*)(param_1 + 0xc) = (uint)((uint)*(ushort *)(param_2 + 6));
  *(uint*)(param_1 + 0x10) = (uint)((uint)*(ushort *)(param_2 + 8));
  *(uint*)(param_1 + 0x14) = (uint)((uint)*(ushort *)(param_2 + 10));
  *(uint*)(param_1 + 0x18) = (uint)((uint)*(ushort *)(param_2 + 0xc));
  *(uint*)(param_1 + 0x1c) = (uint)((uint)*(ushort *)(param_2 + 0xe));
  *(uint*)(param_1 + 0x20) = (uint)((uint)*(ushort *)(param_2 + 0x10));
  *(uint*)(param_1 + 0x24) = (uint)((uint)*(ushort *)(param_2 + 0x12));
  return;
}


// Reference entry 1029da50; body size 71 bytes.
#line 1 "ENTRY_1029da50"

__declspec(naked) void FUN_1029da50(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [edx + 0x14]
  __asm add eax, 0x76c
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, dword ptr [edx + 0x10]
  __asm inc eax
  __asm mov dword ptr [esi + 0xc], eax
  __asm mov eax, dword ptr [edx + 0xc]
  __asm mov dword ptr [esi + 0x14], eax
  __asm cmp dword ptr [edx + 0x18], 7
  __asm sbb ecx, ecx
  __asm and ecx, dword ptr [edx + 0x18]
  __asm mov dword ptr [esi + 0x10], ecx
  __asm mov eax, dword ptr [edx + 8]
  __asm mov dword ptr [esi + 0x18], eax
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 0x1c], eax
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [esi + 0x20], eax
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}





// Reference entry 1029db10; body size 3 bytes.
#line 1 "ENTRY_1029db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029db10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1029dc40; body size 28 bytes.
#line 1 "ENTRY_1029dc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029dc40(undefined4 *param_1)

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


// Reference entry 1029dc70; body size 5 bytes.
#line 1 "ENTRY_1029dc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029dc70(int *param_1)

{
                    
                    
  ((SCVtbl_3_0*)(param_1))->v();
  return;
}


// Reference entry 1029de20; body size 26 bytes.
#line 1 "ENTRY_1029de20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1029de20(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1029de40; body size 6 bytes.
#line 1 "ENTRY_1029de40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1029de40(void)

{
  return (char *)("SCIRecurrence");
}


// Reference entry 1029de50; body size 27 bytes.
#line 1 "ENTRY_1029de50"

__declspec(naked) void FUN_1029de50(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188e488
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1029de80; body size 16 bytes.
#line 1 "ENTRY_1029de80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029de80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1029dec0; body size 8 bytes.
#line 1 "ENTRY_1029dec0"

__declspec(naked) void FUN_1029dec0(void)

{
  __asm mov word ptr [ecx], 0
  __asm mov eax, ecx
  __asm ret
}





// Reference entry 1029ded0; body size 9 bytes.
#line 1 "ENTRY_1029ded0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029ded0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIRecurrence);
  return (undefined4 *)(param_1);
}


// Reference entry 1029dee0; body size 51 bytes.
#line 1 "ENTRY_1029dee0"

__declspec(naked) void FUN_1029dee0(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1188e488
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], offset LAB_1188e4dc
  __asm mov eax, dword ptr [edx + 8]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, dword ptr [edx + 0xc]
  __asm mov dword ptr [ecx + 0xc], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1029dff0; body size 47 bytes.
#line 1 "ENTRY_1029dff0"

__declspec(naked) void FUN_1029dff0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188e488
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1188e4dc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 1029e030; body size 19 bytes.
#line 1 "ENTRY_1029e030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029e030(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1029e0c0; body size 7 bytes.
#line 1 "ENTRY_1029e0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029e0c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1029e0d0; body size 19 bytes.
#line 1 "ENTRY_1029e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029e0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1029e160; body size 3 bytes.
#line 1 "ENTRY_1029e160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029e160(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1029e710; body size 8 bytes.
#line 1 "ENTRY_1029e710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029e710(int param_1)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(0x7f);
  return;
}


// Reference entry 1029e720; body size 6 bytes.
#line 1 "ENTRY_1029e720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1029e720(void)

{
  return (char *)("SCIRecurrence");
}


// Reference entry 1029e760; body size 23 bytes.
#line 1 "ENTRY_1029e760"

__declspec(naked) void FUN_1029e760(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm movzx eax, byte ptr [edx]
  __asm dec eax
  __asm cmp eax, 3
  __asm _emit 0x77 __asm _emit 0x48
  __asm jmp dword ptr [eax*4 + LAB_1029e7b8]
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c
}





// Reference entry 1029e7f0; body size 3 bytes.
#line 1 "ENTRY_1029e7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029e7f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1029e920; body size 28 bytes.
#line 1 "ENTRY_1029e920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029e920(undefined4 *param_1)

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


// Reference entry 1029ea20; body size 31 bytes.
#line 1 "ENTRY_1029ea20"

__declspec(naked) void FUN_1029ea20(void)

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





// Reference entry 1029ea50; body size 22 bytes.
#line 1 "ENTRY_1029ea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1029ea50(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1029ec10; body size 31 bytes.
#line 1 "ENTRY_1029ec10"

__declspec(naked) void FUN_1029ec10(void)

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





// Reference entry 1029ec40; body size 22 bytes.
#line 1 "ENTRY_1029ec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1029ec40(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1029ec60; body size 33 bytes.
#line 1 "ENTRY_1029ec60"

__declspec(naked) void FUN_1029ec60(void)

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





// Reference entry 1029ec90; body size 33 bytes.
#line 1 "ENTRY_1029ec90"

__declspec(naked) void FUN_1029ec90(void)

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





// Reference entry 1029ecc0; body size 13 bytes.
#line 1 "ENTRY_1029ecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1029ecc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1029ed40; body size 5 bytes.
#line 1 "ENTRY_1029ed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1029ed40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1029ed50; body size 37 bytes.
#line 1 "ENTRY_1029ed50"

__declspec(naked) void FUN_1029ed50(void)

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





// Reference entry 1029f000; body size 5 bytes.
#line 1 "ENTRY_1029f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1029f000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1029f010; body size 27 bytes.
#line 1 "ENTRY_1029f010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1029f010(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 1029f040; body size 27 bytes.
#line 1 "ENTRY_1029f040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1029f040(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 1029f070; body size 15 bytes.
#line 1 "ENTRY_1029f070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1029f070(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1029f090; body size 5 bytes.
#line 1 "ENTRY_1029f090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1029f090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1029f0a0; body size 5 bytes.
#line 1 "ENTRY_1029f0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1029f0a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1029f0b0; body size 6 bytes.
#line 1 "ENTRY_1029f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1029f0b0(void)

{
  return (char *)("SCIResourceHelper");
}


// Reference entry 1029f0c0; body size 27 bytes.
#line 1 "ENTRY_1029f0c0"

__declspec(naked) void FUN_1029f0c0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188e57c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1029f150; body size 18 bytes.
#line 1 "ENTRY_1029f150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1029f150(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1029f1f0; body size 9 bytes.
#line 1 "ENTRY_1029f1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029f1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIResourceHelper);
  return (undefined4 *)(param_1);
}


// Reference entry 1029f590; body size 7 bytes.
#line 1 "ENTRY_1029f590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029f590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1029f8b0; body size 3 bytes.
#line 1 "ENTRY_1029f8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029f8b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1029fa50; body size 25 bytes.
#line 1 "ENTRY_1029fa50"

__declspec(naked) void FUN_1029fa50(void)

{
  __asm call LAB_10020aae
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, eax
  __asm push dword ptr [esp + 0xc]
  __asm mov edx, dword ptr [eax]
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [edx + 0x20]
  __asm ret
}





// Reference entry 1029fa70; body size 44 bytes.
#line 1 "ENTRY_1029fa70"

__declspec(naked) void FUN_1029fa70(void)

{
  __asm push esi
  __asm push edi
  __asm call LAB_10020aae
  __asm push dword ptr [esp + 0x18]
  __asm mov esi, eax
  __asm mov edi, dword ptr [esi]
  __asm call LAB_10026b7f
  __asm add esp, 4
  __asm mov ecx, esi
  __asm push eax
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm push dword ptr [esp + 0x18]
  __asm call dword ptr [edi + 0x2c]
  __asm pop edi
  __asm pop esi
  __asm ret
}





// Reference entry 1029fab0; body size 17 bytes.
#line 1 "ENTRY_1029fab0"

__declspec(naked) void FUN_1029fab0(void)

{
  __asm call LAB_10020aae
  __asm push dword ptr [esp + 4]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x1c]
  __asm ret
}





// Reference entry 1029fad0; body size 21 bytes.
#line 1 "ENTRY_1029fad0"

__declspec(naked) void FUN_1029fad0(void)

{
  __asm call LAB_10020aae
  __asm push dword ptr [esp + 8]
  __asm mov ecx, eax
  __asm push dword ptr [esp + 8]
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x24]
  __asm ret
}





// Reference entry 1029fb10; body size 14 bytes.
#line 1 "ENTRY_1029fb10"

__declspec(naked) void FUN_1029fb10(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 1029fb30; body size 3 bytes.
#line 1 "ENTRY_1029fb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029fb30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1029fb40; body size 3 bytes.
#line 1 "ENTRY_1029fb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029fb40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1029fb50; body size 3 bytes.
#line 1 "ENTRY_1029fb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029fb50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1029fb60; body size 3 bytes.
#line 1 "ENTRY_1029fb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029fb60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1029fb70; body size 3 bytes.
#line 1 "ENTRY_1029fb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029fb70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1029fe80; body size 3 bytes.
#line 1 "ENTRY_1029fe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1029fe80(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1029fe90; body size 11 bytes.
#line 1 "ENTRY_1029fe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1029fe90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1029ff50; body size 60 bytes.
#line 1 "ENTRY_1029ff50"

__declspec(naked) void FUN_1029ff50(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 3
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





// Reference entry 102a0910; body size 7 bytes.
#line 1 "ENTRY_102a0910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102a0910(int param_1)

{
  return (int)(param_1 + 0xe1);
}


// Reference entry 102a1500; body size 6 bytes.
#line 1 "ENTRY_102a1500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102a1500(void)

{
  return (char *)("SCIResourceHelper");
}


// Reference entry 102a1510; body size 6 bytes.
#line 1 "ENTRY_102a1510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a1510(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 102a1520; body size 6 bytes.
#line 1 "ENTRY_102a1520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a1520(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 102a1630; body size 3 bytes.
#line 1 "ENTRY_102a1630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102a1630(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102a1760; body size 28 bytes.
#line 1 "ENTRY_102a1760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102a1760(undefined4 *param_1)

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


// Reference entry 102a1810; body size 20 bytes.
#line 1 "ENTRY_102a1810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1810(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1830; body size 18 bytes.
#line 1 "ENTRY_102a1830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a1830(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1850; body size 18 bytes.
#line 1 "ENTRY_102a1850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a1850(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1870; body size 18 bytes.
#line 1 "ENTRY_102a1870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a1870(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1890; body size 25 bytes.
#line 1 "ENTRY_102a1890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a1890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a18b0; body size 25 bytes.
#line 1 "ENTRY_102a18b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a18b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a18d0; body size 25 bytes.
#line 1 "ENTRY_102a18d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a18d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a18f0; body size 25 bytes.
#line 1 "ENTRY_102a18f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a18f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1910; body size 20 bytes.
#line 1 "ENTRY_102a1910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1910(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1930; body size 11 bytes.
#line 1 "ENTRY_102a1930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1930(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1940; body size 11 bytes.
#line 1 "ENTRY_102a1940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1940(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1950; body size 22 bytes.
#line 1 "ENTRY_102a1950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1950(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1970; body size 22 bytes.
#line 1 "ENTRY_102a1970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1970(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1990; body size 18 bytes.
#line 1 "ENTRY_102a1990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a1990(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a19b0; body size 18 bytes.
#line 1 "ENTRY_102a19b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a19b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a19d0; body size 18 bytes.
#line 1 "ENTRY_102a19d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a19d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a19f0; body size 18 bytes.
#line 1 "ENTRY_102a19f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a19f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1c70; body size 45 bytes.
#line 1 "ENTRY_102a1c70"

__declspec(naked) void FUN_102a1c70(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}





// Reference entry 102a1cb0; body size 11 bytes.
#line 1 "ENTRY_102a1cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1cb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1cc0; body size 11 bytes.
#line 1 "ENTRY_102a1cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1cc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1cd0; body size 22 bytes.
#line 1 "ENTRY_102a1cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1cd0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1cf0; body size 22 bytes.
#line 1 "ENTRY_102a1cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1cf0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1d10; body size 18 bytes.
#line 1 "ENTRY_102a1d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a1d10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1d30; body size 11 bytes.
#line 1 "ENTRY_102a1d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1d30(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1d40; body size 11 bytes.
#line 1 "ENTRY_102a1d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1d40(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1d50; body size 18 bytes.
#line 1 "ENTRY_102a1d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a1d50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1d70; body size 18 bytes.
#line 1 "ENTRY_102a1d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a1d70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1d90; body size 18 bytes.
#line 1 "ENTRY_102a1d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a1d90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1db0; body size 25 bytes.
#line 1 "ENTRY_102a1db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a1db0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1dd0; body size 25 bytes.
#line 1 "ENTRY_102a1dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a1dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1df0; body size 22 bytes.
#line 1 "ENTRY_102a1df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1df0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1e10; body size 22 bytes.
#line 1 "ENTRY_102a1e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a1e10(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a1e30; body size 47 bytes.
#line 1 "ENTRY_102a1e30"

__declspec(naked) void FUN_102a1e30(void)

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
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0x10
}





// Reference entry 102a1e70; body size 91 bytes.
#line 1 "ENTRY_102a1e70"

__declspec(naked) void FUN_102a1e70(void)

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





// Reference entry 102a1ef0; body size 26 bytes.
#line 1 "ENTRY_102a1ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102a1ef0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 102a2070; body size 43 bytes.
#line 1 "ENTRY_102a2070"

__declspec(naked) void FUN_102a2070(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 102a20b0; body size 91 bytes.
#line 1 "ENTRY_102a20b0"

__declspec(naked) void FUN_102a20b0(void)

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





// Reference entry 102a2210; body size 26 bytes.
#line 1 "ENTRY_102a2210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102a2210(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 102a2230; body size 43 bytes.
#line 1 "ENTRY_102a2230"

__declspec(naked) void FUN_102a2230(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 102a2270; body size 91 bytes.
#line 1 "ENTRY_102a2270"

__declspec(naked) void FUN_102a2270(void)

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





// Reference entry 102a22f0; body size 26 bytes.
#line 1 "ENTRY_102a22f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102a22f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 102a2310; body size 91 bytes.
#line 1 "ENTRY_102a2310"

__declspec(naked) void FUN_102a2310(void)

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





// Reference entry 102a2390; body size 26 bytes.
#line 1 "ENTRY_102a2390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102a2390(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 102a2430; body size 43 bytes.
#line 1 "ENTRY_102a2430"

__declspec(naked) void FUN_102a2430(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 102a2470; body size 91 bytes.
#line 1 "ENTRY_102a2470"

__declspec(naked) void FUN_102a2470(void)

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





// Reference entry 102a2620; body size 78 bytes.
#line 1 "ENTRY_102a2620"

__declspec(naked) void FUN_102a2620(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 102a2690; body size 78 bytes.
#line 1 "ENTRY_102a2690"

__declspec(naked) void FUN_102a2690(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 102a2700; body size 78 bytes.
#line 1 "ENTRY_102a2700"

__declspec(naked) void FUN_102a2700(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 102a2950; body size 78 bytes.
#line 1 "ENTRY_102a2950"

__declspec(naked) void FUN_102a2950(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 102a29c0; body size 78 bytes.
#line 1 "ENTRY_102a29c0"

__declspec(naked) void FUN_102a29c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
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





// Reference entry 102a2cd0; body size 3 bytes.
#line 1 "ENTRY_102a2cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2cd0(void)

{
  return;
}


// Reference entry 102a2e50; body size 25 bytes.
#line 1 "ENTRY_102a2e50"

__declspec(naked) void FUN_102a2e50(void)

{
  __asm push 0x18
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}





// Reference entry 102a2e70; body size 25 bytes.
#line 1 "ENTRY_102a2e70"

__declspec(naked) void FUN_102a2e70(void)

{
  __asm push 0x20
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}





// Reference entry 102a2e90; body size 25 bytes.
#line 1 "ENTRY_102a2e90"

__declspec(naked) void FUN_102a2e90(void)

{
  __asm push 0x14
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}





// Reference entry 102a2eb0; body size 13 bytes.
#line 1 "ENTRY_102a2eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2eb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102a2ec0; body size 13 bytes.
#line 1 "ENTRY_102a2ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2ec0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102a2ed0; body size 13 bytes.
#line 1 "ENTRY_102a2ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2ed0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102a2ee0; body size 13 bytes.
#line 1 "ENTRY_102a2ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2ee0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102a2ef0; body size 13 bytes.
#line 1 "ENTRY_102a2ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2ef0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 102a2f80; body size 3 bytes.
#line 1 "ENTRY_102a2f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2f80(void)

{
  return;
}


// Reference entry 102a2f90; body size 3 bytes.
#line 1 "ENTRY_102a2f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2f90(void)

{
  return;
}


// Reference entry 102a2fa0; body size 33 bytes.
#line 1 "ENTRY_102a2fa0"

__declspec(naked) void FUN_102a2fa0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x10
  __asm nop
  __asm mov ecx, esi
  __asm call LAB_1006f618
  __asm add esi, 0xc
  __asm cmp esi, edi
  __asm _emit 0x75 __asm _emit 0xf2
  __asm pop edi
  __asm pop esi
  __asm ret
}





// Reference entry 102a3340; body size 23 bytes.
#line 1 "ENTRY_102a3340"

__declspec(naked) void FUN_102a3340(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_10027228
  __asm add dword ptr [esi + 4], 0xc
  __asm pop esi
  __asm ret 4
}





// Reference entry 102a3360; body size 39 bytes.
#line 1 "ENTRY_102a3360"

__declspec(naked) void FUN_102a3360(void)

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





// Reference entry 102a3390; body size 39 bytes.
#line 1 "ENTRY_102a3390"

__declspec(naked) void FUN_102a3390(void)

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





// Reference entry 102a34a0; body size 39 bytes.
#line 1 "ENTRY_102a34a0"

__declspec(naked) void FUN_102a34a0(void)

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





// Reference entry 102a34d0; body size 39 bytes.
#line 1 "ENTRY_102a34d0"

__declspec(naked) void FUN_102a34d0(void)

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





// Reference entry 102a3500; body size 23 bytes.
#line 1 "ENTRY_102a3500"

__declspec(naked) void FUN_102a3500(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_10027228
  __asm add dword ptr [esi + 4], 0xc
  __asm pop esi
  __asm ret 4
}





// Reference entry 102a3520; body size 39 bytes.
#line 1 "ENTRY_102a3520"

__declspec(naked) void FUN_102a3520(void)

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





// Reference entry 102a3550; body size 39 bytes.
#line 1 "ENTRY_102a3550"

__declspec(naked) void FUN_102a3550(void)

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





// Reference entry 102a4570; body size 15 bytes.
#line 1 "ENTRY_102a4570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a4570(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 102a4590; body size 15 bytes.
#line 1 "ENTRY_102a4590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a4590(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 102a45b0; body size 15 bytes.
#line 1 "ENTRY_102a45b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a45b0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 102a45d0; body size 15 bytes.
#line 1 "ENTRY_102a45d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a45d0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 102a46f0; body size 7 bytes.
#line 1 "ENTRY_102a46f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a46f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102a4700; body size 7 bytes.
#line 1 "ENTRY_102a4700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a4700(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102a4710; body size 7 bytes.
#line 1 "ENTRY_102a4710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a4710(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102a4720; body size 7 bytes.
#line 1 "ENTRY_102a4720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a4720(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102a4730; body size 5 bytes.
#line 1 "ENTRY_102a4730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a4730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a4740; body size 5 bytes.
#line 1 "ENTRY_102a4740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a4740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a4750; body size 5 bytes.
#line 1 "ENTRY_102a4750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a4750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a4760; body size 31 bytes.
#line 1 "ENTRY_102a4760"

__declspec(naked) void FUN_102a4760(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x10
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm _emit 0x72 __asm _emit 0x05
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}





// Reference entry 102a48f0; body size 3 bytes.
#line 1 "ENTRY_102a48f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a48f0(void)

{
  return;
}


// Reference entry 102a4900; body size 19 bytes.
#line 1 "ENTRY_102a4900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a4900(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 102a4920; body size 19 bytes.
#line 1 "ENTRY_102a4920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a4920(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 102a5000; body size 7 bytes.
#line 1 "ENTRY_102a5000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5000(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102a5010; body size 7 bytes.
#line 1 "ENTRY_102a5010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5010(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102a50b0; body size 24 bytes.
#line 1 "ENTRY_102a50b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_102a50b0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_102a5240(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 102a50d0; body size 5 bytes.
#line 1 "ENTRY_102a50d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a50d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a50e0; body size 5 bytes.
#line 1 "ENTRY_102a50e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a50e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a50f0; body size 5 bytes.
#line 1 "ENTRY_102a50f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a50f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5100; body size 5 bytes.
#line 1 "ENTRY_102a5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5530; body size 5 bytes.
#line 1 "ENTRY_102a5530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5540; body size 5 bytes.
#line 1 "ENTRY_102a5540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5550; body size 5 bytes.
#line 1 "ENTRY_102a5550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5560; body size 5 bytes.
#line 1 "ENTRY_102a5560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5570; body size 5 bytes.
#line 1 "ENTRY_102a5570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5580; body size 5 bytes.
#line 1 "ENTRY_102a5580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5590; body size 5 bytes.
#line 1 "ENTRY_102a5590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a55a0; body size 5 bytes.
#line 1 "ENTRY_102a55a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a55a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a55b0; body size 5 bytes.
#line 1 "ENTRY_102a55b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a55b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a55c0; body size 5 bytes.
#line 1 "ENTRY_102a55c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a55c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a55d0; body size 5 bytes.
#line 1 "ENTRY_102a55d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a55d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a55e0; body size 5 bytes.
#line 1 "ENTRY_102a55e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a55e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5650; body size 40 bytes.
#line 1 "ENTRY_102a5650"

__declspec(naked) void FUN_102a5650(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov edx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [esp + 8]
  __asm push eax
  __asm mov dword ptr [esp + 0xc], edx
  __asm call LAB_100399be
  __asm ret 8
}





// Reference entry 102a5690; body size 40 bytes.
#line 1 "ENTRY_102a5690"

__declspec(naked) void FUN_102a5690(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov edx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [esp + 8]
  __asm push eax
  __asm mov dword ptr [esp + 0xc], edx
  __asm call LAB_100399be
  __asm ret 8
}





// Reference entry 102a56d0; body size 40 bytes.
#line 1 "ENTRY_102a56d0"

__declspec(naked) void FUN_102a56d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov edx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [esp + 8]
  __asm push eax
  __asm mov dword ptr [esp + 0xc], edx
  __asm call LAB_100399be
  __asm ret 8
}





// Reference entry 102a5710; body size 18 bytes.
#line 1 "ENTRY_102a5710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5710(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 8);
  return;
}


// Reference entry 102a5730; body size 20 bytes.
#line 1 "ENTRY_102a5730"

__declspec(naked) void FUN_102a5730(void)

{
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 0xc]
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_10093bf3
  __asm ret 8
}





// Reference entry 102a5750; body size 22 bytes.
#line 1 "ENTRY_102a5750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5750(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 102a5770; body size 22 bytes.
#line 1 "ENTRY_102a5770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5770(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 102a5790; body size 41 bytes.
#line 1 "ENTRY_102a5790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5790(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 102a57d0; body size 14 bytes.
#line 1 "ENTRY_102a57d0"

__declspec(naked) void FUN_102a57d0(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_10027228
  __asm ret
}





// Reference entry 102a57f0; body size 14 bytes.
#line 1 "ENTRY_102a57f0"

__declspec(naked) void FUN_102a57f0(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_10027228
  __asm ret
}





// Reference entry 102a58e0; body size 28 bytes.
#line 1 "ENTRY_102a58e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a58e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102a5910; body size 28 bytes.
#line 1 "ENTRY_102a5910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5910(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102a5940; body size 28 bytes.
#line 1 "ENTRY_102a5940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5940(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102a5970; body size 28 bytes.
#line 1 "ENTRY_102a5970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5970(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102a59a0; body size 28 bytes.
#line 1 "ENTRY_102a59a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a59a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102a59d0; body size 28 bytes.
#line 1 "ENTRY_102a59d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a59d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102a5a00; body size 14 bytes.
#line 1 "ENTRY_102a5a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5a00(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  return;
}


// Reference entry 102a5a20; body size 3 bytes.
#line 1 "ENTRY_102a5a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5a20(void)

{
  return;
}


// Reference entry 102a5aa0; body size 9 bytes.
#line 1 "ENTRY_102a5aa0"

__declspec(naked) void FUN_102a5aa0(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm jmp LAB_1006f618
}





// Reference entry 102a5c40; body size 12 bytes.
#line 1 "ENTRY_102a5c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102a5c40(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 102a5c50; body size 40 bytes.
#line 1 "ENTRY_102a5c50"

__declspec(naked) void FUN_102a5c50(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm cmp eax, dword ptr [esi + 8]
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov ecx, eax
  __asm call LAB_10027228
  __asm add dword ptr [esi + 4], 0xc
  __asm pop esi
  __asm ret 4
  __asm push eax
  __asm call LAB_100367b4
  __asm pop esi
  __asm ret 4
}





// Reference entry 102a5d30; body size 15 bytes.
#line 1 "ENTRY_102a5d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5d30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102a5d50; body size 15 bytes.
#line 1 "ENTRY_102a5d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5d50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102a5d70; body size 15 bytes.
#line 1 "ENTRY_102a5d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5d70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102a5d90; body size 15 bytes.
#line 1 "ENTRY_102a5d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5d90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102a5db0; body size 15 bytes.
#line 1 "ENTRY_102a5db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5db0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102a5dd0; body size 5 bytes.
#line 1 "ENTRY_102a5dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5de0; body size 5 bytes.
#line 1 "ENTRY_102a5de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5df0; body size 5 bytes.
#line 1 "ENTRY_102a5df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5e00; body size 5 bytes.
#line 1 "ENTRY_102a5e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5e10; body size 5 bytes.
#line 1 "ENTRY_102a5e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5e20; body size 5 bytes.
#line 1 "ENTRY_102a5e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5e30; body size 5 bytes.
#line 1 "ENTRY_102a5e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5e40; body size 5 bytes.
#line 1 "ENTRY_102a5e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5e50; body size 5 bytes.
#line 1 "ENTRY_102a5e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5e60; body size 5 bytes.
#line 1 "ENTRY_102a5e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5e60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5e70; body size 5 bytes.
#line 1 "ENTRY_102a5e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5e80; body size 5 bytes.
#line 1 "ENTRY_102a5e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5e90; body size 5 bytes.
#line 1 "ENTRY_102a5e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5ea0; body size 5 bytes.
#line 1 "ENTRY_102a5ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5eb0; body size 5 bytes.
#line 1 "ENTRY_102a5eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5ec0; body size 5 bytes.
#line 1 "ENTRY_102a5ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5ed0; body size 5 bytes.
#line 1 "ENTRY_102a5ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5ed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5ee0; body size 5 bytes.
#line 1 "ENTRY_102a5ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5ef0; body size 5 bytes.
#line 1 "ENTRY_102a5ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5f00; body size 5 bytes.
#line 1 "ENTRY_102a5f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5f00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5f10; body size 5 bytes.
#line 1 "ENTRY_102a5f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5f10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5f20; body size 5 bytes.
#line 1 "ENTRY_102a5f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5f30; body size 5 bytes.
#line 1 "ENTRY_102a5f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5f30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5f40; body size 5 bytes.
#line 1 "ENTRY_102a5f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5f40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5f50; body size 5 bytes.
#line 1 "ENTRY_102a5f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5f50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5f60; body size 5 bytes.
#line 1 "ENTRY_102a5f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5f60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5f70; body size 5 bytes.
#line 1 "ENTRY_102a5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5f70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5f80; body size 5 bytes.
#line 1 "ENTRY_102a5f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a5f90; body size 11 bytes.
#line 1 "ENTRY_102a5f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5f90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 102a5fa0; body size 11 bytes.
#line 1 "ENTRY_102a5fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5fa0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 102a5fb0; body size 6 bytes.
#line 1 "ENTRY_102a5fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5fb0(void)

{
  return (undefined4)(9);
}


// Reference entry 102a5fc0; body size 6 bytes.
#line 1 "ENTRY_102a5fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a5fc0(void)

{
  return (undefined4)(0x40);
}


// Reference entry 102a5fd0; body size 6 bytes.
#line 1 "ENTRY_102a5fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102a5fd0(void)

{
  return (char *)("SCICompositeSearchable");
}


// Reference entry 102a5fe0; body size 6 bytes.
#line 1 "ENTRY_102a5fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102a5fe0(void)

{
  return (char *)("SCIDirectControlApplication");
}


// Reference entry 102a5ff0; body size 6 bytes.
#line 1 "ENTRY_102a5ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102a5ff0(void)

{
  return (char *)("SCISearchable");
}


// Reference entry 102a6000; body size 6 bytes.
#line 1 "ENTRY_102a6000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102a6000(void)

{
  return (char *)("SCISearchableCategory");
}


// Reference entry 102a6160; body size 5 bytes.
#line 1 "ENTRY_102a6160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a6160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6170; body size 5 bytes.
#line 1 "ENTRY_102a6170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a6170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6180; body size 5 bytes.
#line 1 "ENTRY_102a6180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a6180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6190; body size 5 bytes.
#line 1 "ENTRY_102a6190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a6190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a61a0; body size 5 bytes.
#line 1 "ENTRY_102a61a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a61a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a61b0; body size 5 bytes.
#line 1 "ENTRY_102a61b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a61b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a61c0; body size 5 bytes.
#line 1 "ENTRY_102a61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a61c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a61d0; body size 5 bytes.
#line 1 "ENTRY_102a61d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a61d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a61e0; body size 5 bytes.
#line 1 "ENTRY_102a61e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a61e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a61f0; body size 5 bytes.
#line 1 "ENTRY_102a61f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a61f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6200; body size 5 bytes.
#line 1 "ENTRY_102a6200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102a6200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6210; body size 12 bytes.
#line 1 "ENTRY_102a6210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102a6210(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 8);
}


// Reference entry 102a6220; body size 19 bytes.
#line 1 "ENTRY_102a6220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a6220(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 102a6240; body size 19 bytes.
#line 1 "ENTRY_102a6240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a6240(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 102a6260; body size 54 bytes.
#line 1 "ENTRY_102a6260"

__declspec(naked) void FUN_102a6260(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11881068
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], offset LAB_1188eb20
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 102a6300; body size 27 bytes.
#line 1 "ENTRY_102a6300"

__declspec(naked) void FUN_102a6300(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188ef34
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 102a6330; body size 27 bytes.
#line 1 "ENTRY_102a6330"

__declspec(naked) void FUN_102a6330(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188edd4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 102a63a0; body size 16 bytes.
#line 1 "ENTRY_102a63a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a63a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6400; body size 32 bytes.
#line 1 "ENTRY_102a6400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6400(undefined4 *param_2)
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


// Reference entry 102a6430; body size 16 bytes.
#line 1 "ENTRY_102a6430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6430(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6450; body size 16 bytes.
#line 1 "ENTRY_102a6450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6450(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a64b0; body size 16 bytes.
#line 1 "ENTRY_102a64b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a64b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a64d0; body size 16 bytes.
#line 1 "ENTRY_102a64d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a64d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a64f0; body size 32 bytes.
#line 1 "ENTRY_102a64f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a64f0(undefined4 *param_2)
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


// Reference entry 102a6520; body size 16 bytes.
#line 1 "ENTRY_102a6520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6520(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6540; body size 32 bytes.
#line 1 "ENTRY_102a6540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6540(undefined4 *param_2)
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


// Reference entry 102a65b0; body size 16 bytes.
#line 1 "ENTRY_102a65b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a65b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6610; body size 32 bytes.
#line 1 "ENTRY_102a6610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6610(undefined4 *param_2)
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


// Reference entry 102a6640; body size 16 bytes.
#line 1 "ENTRY_102a6640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6640(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6660; body size 32 bytes.
#line 1 "ENTRY_102a6660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6660(undefined4 *param_2)
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


// Reference entry 102a66d0; body size 16 bytes.
#line 1 "ENTRY_102a66d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a66d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6710; body size 18 bytes.
#line 1 "ENTRY_102a6710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6710(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6730; body size 18 bytes.
#line 1 "ENTRY_102a6730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6730(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6910; body size 11 bytes.
#line 1 "ENTRY_102a6910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6910(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6920; body size 11 bytes.
#line 1 "ENTRY_102a6920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6920(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6930; body size 11 bytes.
#line 1 "ENTRY_102a6930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6930(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6940; body size 11 bytes.
#line 1 "ENTRY_102a6940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6940(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6a50; body size 11 bytes.
#line 1 "ENTRY_102a6a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6a50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6a60; body size 11 bytes.
#line 1 "ENTRY_102a6a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6a60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6a70; body size 16 bytes.
#line 1 "ENTRY_102a6a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6a70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6a90; body size 16 bytes.
#line 1 "ENTRY_102a6a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6a90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6ab0; body size 16 bytes.
#line 1 "ENTRY_102a6ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6ab0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6ad0; body size 21 bytes.
#line 1 "ENTRY_102a6ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6ad0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6af0; body size 21 bytes.
#line 1 "ENTRY_102a6af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6af0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6b10; body size 21 bytes.
#line 1 "ENTRY_102a6b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6b10(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6b30; body size 11 bytes.
#line 1 "ENTRY_102a6b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6b30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6b40; body size 11 bytes.
#line 1 "ENTRY_102a6b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6b40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6b50; body size 23 bytes.
#line 1 "ENTRY_102a6b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6b50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6b70; body size 23 bytes.
#line 1 "ENTRY_102a6b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6b70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6b90; body size 23 bytes.
#line 1 "ENTRY_102a6b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6b90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6bb0; body size 23 bytes.
#line 1 "ENTRY_102a6bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6bd0; body size 3 bytes.
#line 1 "ENTRY_102a6bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102a6bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6be0; body size 3 bytes.
#line 1 "ENTRY_102a6be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102a6be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6bf0; body size 3 bytes.
#line 1 "ENTRY_102a6bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102a6bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6c00; body size 3 bytes.
#line 1 "ENTRY_102a6c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102a6c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6c10; body size 3 bytes.
#line 1 "ENTRY_102a6c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102a6c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6c20; body size 3 bytes.
#line 1 "ENTRY_102a6c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102a6c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6c30; body size 3 bytes.
#line 1 "ENTRY_102a6c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102a6c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102a6c40; body size 76 bytes.
#line 1 "ENTRY_102a6c40"

__declspec(naked) void FUN_102a6c40(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm mov dword ptr [esp + 8], esi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm mov edx, dword ptr [esp + 0x10]
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx]
  __asm mov dword ptr [esi], ecx
  __asm mov dword ptr [edx], eax
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm mov dword ptr [edx + 4], ecx
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 102a6ca0; body size 52 bytes.
#line 1 "ENTRY_102a6ca0"

__declspec(naked) void FUN_102a6ca0(void)

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





// Reference entry 102a6cf0; body size 76 bytes.
#line 1 "ENTRY_102a6cf0"

__declspec(naked) void FUN_102a6cf0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm mov dword ptr [esp + 8], esi
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm mov edx, dword ptr [esp + 0x10]
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx]
  __asm mov dword ptr [esi], ecx
  __asm mov dword ptr [edx], eax
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm mov dword ptr [edx + 4], ecx
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 102a6d50; body size 52 bytes.
#line 1 "ENTRY_102a6d50"

__declspec(naked) void FUN_102a6d50(void)

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





// Reference entry 102a6da0; body size 52 bytes.
#line 1 "ENTRY_102a6da0"

__declspec(naked) void FUN_102a6da0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x20
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





// Reference entry 102a6df0; body size 52 bytes.
#line 1 "ENTRY_102a6df0"

__declspec(naked) void FUN_102a6df0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
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





// Reference entry 102a6e40; body size 13 bytes.
#line 1 "ENTRY_102a6e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6e40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6e50; body size 13 bytes.
#line 1 "ENTRY_102a6e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a6e50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6f80; body size 23 bytes.
#line 1 "ENTRY_102a6f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6f80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6fa0; body size 23 bytes.
#line 1 "ENTRY_102a6fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6fc0; body size 23 bytes.
#line 1 "ENTRY_102a6fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a70a0; body size 23 bytes.
#line 1 "ENTRY_102a70a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a70a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102a70c0; body size 42 bytes.
#line 1 "ENTRY_102a70c0"

__declspec(naked) void FUN_102a70c0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1188f0c8
  __asm pop ecx
  __asm ret 4
}





// Reference entry 102a7100; body size 11 bytes.
#line 1 "ENTRY_102a7100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a7100(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  return (undefined4 *)(param_1);
}


// Reference entry 102a7110; body size 11 bytes.
#line 1 "ENTRY_102a7110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a7110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RGenericAsyncIOOperationCB);
  return (undefined4 *)(param_1);
}


// Reference entry 102a7a00; body size 47 bytes.
#line 1 "ENTRY_102a7a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102a7a00(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSource);
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  param_1[4] = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  param_1[5] = (undefined4)(uVar1);
  *(undefined1*)(param_1 + 6) = (undefined1)(*(undefined1 *)(param_2 + 0x18));
  return (undefined4 *)(param_1);
}


// Reference entry 102a7a40; body size 9 bytes.
#line 1 "ENTRY_102a7a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a7a40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCICompositeSearchable);
  return (undefined4 *)(param_1);
}


// Reference entry 102a7a50; body size 11 bytes.
#line 1 "ENTRY_102a7a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a7a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDirectControlApplication);
  return (undefined4 *)(param_1);
}


// Reference entry 102a7a60; body size 9 bytes.
#line 1 "ENTRY_102a7a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a7a60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDirectControlApplication);
  return (undefined4 *)(param_1);
}


// Reference entry 102a7a70; body size 9 bytes.
#line 1 "ENTRY_102a7a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a7a70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchable);
  return (undefined4 *)(param_1);
}


// Reference entry 102a7a80; body size 9 bytes.
#line 1 "ENTRY_102a7a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a7a80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchableCategory);
  return (undefined4 *)(param_1);
}


// Reference entry 102a8ec0; body size 9 bytes.
#line 1 "ENTRY_102a8ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a8ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjMSDiscoveryListener);
  return (undefined4 *)(param_1);
}


// Reference entry 102a9720; body size 19 bytes.
#line 1 "ENTRY_102a9720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102a9720(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 102a97e0; body size 19 bytes.
#line 1 "ENTRY_102a97e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102a97e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 102a9b90; body size 19 bytes.
#line 1 "ENTRY_102a9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102a9b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102a9f20; body size 7 bytes.
#line 1 "ENTRY_102a9f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102a9f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102a9f30; body size 7 bytes.
#line 1 "ENTRY_102a9f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102a9f30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102a9f40; body size 7 bytes.
#line 1 "ENTRY_102a9f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102a9f40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102aa6c0; body size 65 bytes.
#line 1 "ENTRY_102aa6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102aa6c0(int *param_2)
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


// Reference entry 102aa720; body size 65 bytes.
#line 1 "ENTRY_102aa720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102aa720(int *param_2)
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


// Reference entry 102aa780; body size 65 bytes.
#line 1 "ENTRY_102aa780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102aa780(int *param_2)
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


// Reference entry 102aa850; body size 31 bytes.
#line 1 "ENTRY_102aa850"

__declspec(naked) void FUN_102aa850(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp esi, eax
  __asm _emit 0x74 __asm _emit 0x0e
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call LAB_10093bf3
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 102aa880; body size 5 bytes.
#line 1 "ENTRY_102aa880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102aa880(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102aa890; body size 5 bytes.
#line 1 "ENTRY_102aa890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102aa890(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102aaa30; body size 41 bytes.
#line 1 "ENTRY_102aaa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_102aaa30(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  *(undefined4*)(param_1 + 0x10) = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  *(undefined4*)(param_1 + 0x14) = (undefined4)(uVar1);
  *(undefined1*)(param_1 + 0x18) = (undefined1)(*(undefined1 *)(param_2 + 0x18));
  return (int)(param_1);
}


// Reference entry 102aaa70; body size 5 bytes.
#line 1 "ENTRY_102aaa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102aaa70(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102aaa80; body size 14 bytes.
#line 1 "ENTRY_102aaa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_102aaa80(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102aaaa0; body size 14 bytes.
#line 1 "ENTRY_102aaaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_102aaaa0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102aaac0; body size 14 bytes.
#line 1 "ENTRY_102aaac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_102aaac0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102aaae0; body size 14 bytes.
#line 1 "ENTRY_102aaae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_102aaae0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 102aab00; body size 14 bytes.
#line 1 "ENTRY_102aab00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_102aab00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102aab20; body size 14 bytes.
#line 1 "ENTRY_102aab20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_102aab20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102aab40; body size 14 bytes.
#line 1 "ENTRY_102aab40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_102aab40(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102aab60; body size 14 bytes.
#line 1 "ENTRY_102aab60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_102aab60(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102ab190; body size 15 bytes.
#line 1 "ENTRY_102ab190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_102ab190(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0xc);
}


// Reference entry 102ab1b0; body size 15 bytes.
#line 1 "ENTRY_102ab1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_102ab1b0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0xc);
}


// Reference entry 102ab1d0; body size 15 bytes.
#line 1 "ENTRY_102ab1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_102ab1d0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x14);
}


// Reference entry 102ab1f0; body size 3 bytes.
#line 1 "ENTRY_102ab1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab1f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab200; body size 3 bytes.
#line 1 "ENTRY_102ab200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab200(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab210; body size 7 bytes.
#line 1 "ENTRY_102ab210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ab210(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ab220; body size 3 bytes.
#line 1 "ENTRY_102ab220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102ab220(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102ab230; body size 7 bytes.
#line 1 "ENTRY_102ab230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ab230(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102ab240; body size 7 bytes.
#line 1 "ENTRY_102ab240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102ab240(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


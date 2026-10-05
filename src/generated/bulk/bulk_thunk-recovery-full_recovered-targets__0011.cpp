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
namespace std { struct codecvt_base { char _pad; codecvt_base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int always_noconv(A...); }; }
namespace std { struct locale { char _pad; locale(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int _Getgloballocale(A...); }; }
namespace std { template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xlength_error(A...); typedef int _Iterator_base0; }
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_streambuf { char _pad; basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int _Init(A...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CreateObject { char _pad; CreateObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIMusicServiceMenuItem { char _pad; SCIMusicServiceMenuItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIShare { char _pad; SCIShare(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIShareManager { char _pad; SCIShareManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIUrlRequest { char _pad; SCIUrlRequest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCShareManager { char _pad; SCShareManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct std_codecvt_base { char _pad; std_codecvt_base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *WARNING;
typedef void *_Init;
typedef void *_Locimp;
using namespace std;
extern "C" void LAB_10008f1c(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000e0ca(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_1001b973(void);
extern "C" void LAB_1001e885(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002d2b8(void);
extern "C" void LAB_1002d6aa(void);
extern "C" void LAB_100301d4(void);
extern "C" void LAB_10035571(void);
extern "C" void LAB_100362aa(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10037a97(void);
extern "C" void LAB_100381cc(void);
extern "C" void LAB_100381ea(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003c4f2(void);
extern "C" void LAB_1003c92f(void);
extern "C" void LAB_1003d73f(void);
extern "C" void LAB_10044b02(void);
extern "C" void LAB_10045304(void);
extern "C" void LAB_10049a94(void);
extern "C" void LAB_1004aa43(void);
extern "C" void LAB_1004de0f(void);
extern "C" void LAB_10051172(void);
extern "C" void LAB_10051843(void);
extern "C" void LAB_10051c67(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100547dc(void);
extern "C" void LAB_10055a9c(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005e133(void);
extern "C" void LAB_10060505(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_100671bb(void);
extern "C" void LAB_10067c65(void);
extern "C" void LAB_1006c8d2(void);
extern "C" void LAB_100709e6(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070f8b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007951e(void);
extern "C" void LAB_10079df7(void);
extern "C" void LAB_100805fd(void);
extern "C" void LAB_1008148a(void);
extern "C" void LAB_10083e74(void);
extern "C" void LAB_10085aee(void);
extern "C" void LAB_10086dd1(void);
extern "C" void LAB_100880eb(void);
extern "C" void LAB_1008a620(void);
extern "C" void LAB_1008dd20(void);
extern "C" void LAB_10092c0d(void);
extern "C" void LAB_10094224(void);
extern "C" void LAB_1065a661(void);
extern "C" void LAB_1069c92b(void);
extern "C" void LAB_1069ca4b(void);
extern "C" void LAB_1069cb6b(void);
extern "C" void LAB_106ac790(void);
extern "C" void LAB_106ac825(void);
extern "C" void LAB_106b87a1(void);
extern "C" void LAB_106b88be(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148a20d(void);
extern "C" void LAB_1148cddb(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce11(void);
extern "C" void LAB_1186d234(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881144(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_11886d8c(void);
extern "C" void LAB_118c1ea4(void);
extern "C" void LAB_118c1ef4(void);
extern "C" void LAB_118c1f40(void);
extern "C" void LAB_118c1f90(void);
extern "C" void LAB_118c1fec(void);
extern "C" void LAB_118c203c(void);
extern "C" void LAB_118c2090(void);
extern "C" void LAB_118c20e8(void);
extern "C" void LAB_118c2138(void);
extern "C" void LAB_118c2188(void);
extern "C" void LAB_118c21d4(void);
extern "C" void LAB_118c2220(void);
extern "C" void LAB_118c226c(void);
extern "C" void LAB_118c22b8(void);
extern "C" void LAB_118c2314(void);
extern "C" void LAB_118c2364(void);
extern "C" void LAB_118c23b0(void);
extern "C" void LAB_118c2400(void);
extern "C" void LAB_118c2458(void);
extern "C" void LAB_118c24b4(void);
extern "C" void LAB_118c250c(void);
extern "C" void LAB_118c2558(void);
extern "C" void LAB_118c25a8(void);
extern "C" void LAB_118c25f8(void);
extern "C" void LAB_118c2644(void);
extern "C" void LAB_118c2694(void);
extern "C" void LAB_118c26e8(void);
extern "C" void LAB_118c273c(void);
extern "C" void LAB_118c2790(void);
extern "C" void LAB_118c27e0(void);
extern "C" void LAB_118c2824(void);
extern "C" void LAB_118c2870(void);
extern "C" void LAB_118c28c4(void);
extern "C" void LAB_118c2918(void);
extern "C" void LAB_118c2960(void);
extern "C" void LAB_118c29b8(void);
extern "C" void LAB_118c2a10(void);
extern "C" void LAB_118c2a60(void);
extern "C" void LAB_118c4044(void);
extern "C" void LAB_118c40a0(void);
extern "C" void LAB_118c40ac(void);
extern "C" void LAB_118c40b8(void);
extern "C" void LAB_118c42a4(void);
extern "C" void LAB_118c4300(void);
extern "C" void LAB_118c430c(void);
extern "C" void LAB_118c4318(void);
extern "C" void LAB_118c4504(void);
extern "C" void LAB_118c4560(void);
extern "C" void LAB_118c456c(void);
extern "C" void LAB_118c4578(void);
extern "C" void LAB_118c4764(void);
extern "C" void LAB_118c47c0(void);
extern "C" void LAB_118c47cc(void);
extern "C" void LAB_118c47d8(void);
extern "C" void LAB_118c49c4(void);
extern "C" void LAB_118c4a20(void);
extern "C" void LAB_118c4a2c(void);
extern "C" void LAB_118c4a38(void);
extern "C" void LAB_118c4af4(void);
extern "C" void LAB_118c4b50(void);
extern "C" void LAB_118c4b5c(void);
extern "C" void LAB_118c4b68(void);
extern "C" void LAB_118c5e88(void);
extern "C" void LAB_118c5fb8(void);
extern "C" void LAB_118c5fc4(void);
extern "C" void LAB_118c5fec(void);
extern "C" void LAB_118c6018(void);
extern "C" void LAB_118c603c(void);
extern "C" void LAB_118c6064(void);
extern "C" void LAB_118c6080(void);
extern "C" void LAB_118c6238(void);
extern "C" void LAB_118c6280(void);
extern "C" void LAB_118c62bc(void);
extern "C" void LAB_118c62c8(void);
extern "C" void LAB_118c6668(void);
extern "C" void LAB_118c6764(void);
extern "C" void LAB_118c68ac(void);
extern "C" void LAB_118c68f0(void);
extern "C" void LAB_118c6ae8(void);
extern "C" void LAB_118c6b10(void);
extern "C" void LAB_118c6b9c(void);
extern "C" void LAB_118c6f58(void);
extern "C" void LAB_118c6fbc(void);
extern "C" void LAB_118c7328(void);
extern "C" void LAB_118c738c(void);
extern "C" void LAB_118c73b0(void);
extern "C" void LAB_118c7414(void);
extern "C" void LAB_118c7438(void);
extern "C" void LAB_118c749c(void);
extern "C" void LAB_118c74c0(void);
extern "C" void LAB_118c7524(void);
extern "C" void LAB_118c7548(void);
extern "C" void LAB_118c75ac(void);
extern "C" void LAB_118c76e0(void);
extern "C" void LAB_118c7744(void);
extern "C" void LAB_118c7768(void);
extern "C" void LAB_118c77cc(void);
extern "C" void LAB_118c77f0(void);
extern "C" void LAB_118c7854(void);
extern "C" void LAB_118c7878(void);
extern "C" void LAB_118c78dc(void);
extern "C" void LAB_118c7900(void);
extern "C" void LAB_118c7964(void);
extern "C" void LAB_118c7988(void);
extern "C" void LAB_118c79ec(void);
extern "C" void LAB_118c7a10(void);
extern "C" void LAB_118c7a74(void);
extern "C" void LAB_118c7a98(void);
extern "C" void LAB_118c7afc(void);
extern "C" void LAB_118c7b20(void);
extern "C" void LAB_118c7b84(void);
extern "C" void LAB_118c7c30(void);
extern "C" void LAB_118c7c94(void);
extern "C" void LAB_118c7cb8(void);
extern "C" void LAB_118c7d1c(void);
extern "C" void LAB_118c7d40(void);
extern "C" void LAB_118c7da4(void);
extern "C" void LAB_118c8304(void);
extern "C" void LAB_118c8328(void);
extern "C" void LAB_118c8368(void);
extern "C" void LAB_118c838c(void);
extern "C" void LAB_118c839c(void);
extern "C" void LAB_118c83b0(void);
extern "C" void LAB_118c83c0(void);
extern "C" void LAB_118c86bc(void);
extern "C" void LAB_118c86e0(void);
extern "C" void LAB_118c8720(void);
extern "C" void LAB_118c8744(void);
extern "C" void LAB_118c8754(void);
extern "C" void LAB_118c8768(void);
extern "C" void LAB_118c8778(void);
extern "C" void LAB_118c89d8(void);
extern "C" void LAB_118c89fc(void);
extern "C" void LAB_118c8a3c(void);
extern "C" void LAB_118c8a60(void);
extern "C" void LAB_118c8a70(void);
extern "C" void LAB_118c8a84(void);
extern "C" void LAB_118c8a94(void);
extern "C" void LAB_118c91d8(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a2368(void);
extern "C" void LAB_121a236c(void);
extern "C" void LAB_121a2370(void);
extern "C" void LAB_121a2374(void);
extern "C" void LAB_121a2378(void);
extern "C" void LAB_121a237c(void);
extern "C" void LAB_121a2380(void);
extern "C" void LAB_121a2384(void);
extern "C" void LAB_121a2388(void);
extern "C" void LAB_121a238c(void);
extern "C" void LAB_121a2390(void);
extern "C" void LAB_121a2394(void);
extern "C" void LAB_121a2398(void);
extern "C" void LAB_121a239c(void);
extern "C" void LAB_121a23a0(void);
extern "C" void LAB_121a23a4(void);
extern "C" void LAB_121a23a8(void);
extern "C" void LAB_121a23ac(void);
extern "C" void LAB_121a23b0(void);
extern "C" void LAB_121a23b4(void);
extern "C" void LAB_121a23b8(void);
extern "C" void LAB_121a23bc(void);
extern "C" void LAB_121a23c0(void);
extern "C" void LAB_121a23c4(void);
extern "C" void LAB_121a23c8(void);
extern "C" void LAB_121a23cc(void);
extern "C" void LAB_121a23d0(void);
extern "C" void LAB_121a23d4(void);
extern "C" void LAB_121a23d8(void);
extern "C" void LAB_121a23dc(void);
extern "C" void LAB_121a23e0(void);
extern "C" void LAB_121a23e4(void);
extern "C" void LAB_121a23e8(void);
extern "C" void LAB_121a23ec(void);
extern "C" void LAB_121a23f0(void);
extern "C" void LAB_121a23f4(void);
extern "C" void LAB_121a23f8(void);
extern "C" void LAB_121a23fc(void);
extern "C" void LAB_121a2604(void);
extern "C" void LAB_121a2608(void);
extern "C" void LAB_122fc354(void);
extern "C" void LAB_122fc42c(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc904(void);
extern "C" void LAB_122fc940(void);
extern "C" void LAB_122fc94c(void);

extern "C" void LAB_10008f1c(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000e0ca(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_1001b973(void);
extern "C" void LAB_1001e885(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002d2b8(void);
extern "C" void LAB_1002d6aa(void);
extern "C" void LAB_100301d4(void);
extern "C" void LAB_10035571(void);
extern "C" void LAB_100362aa(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10037a97(void);
extern "C" void LAB_100381cc(void);
extern "C" void LAB_100381ea(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003c4f2(void);
extern "C" void LAB_1003c92f(void);
extern "C" void LAB_1003d73f(void);
extern "C" void LAB_10044b02(void);
extern "C" void LAB_10045304(void);
extern "C" void LAB_10049a94(void);
extern "C" void LAB_1004aa43(void);
extern "C" void LAB_1004de0f(void);
extern "C" void LAB_10051172(void);
extern "C" void LAB_10051843(void);
extern "C" void LAB_10051c67(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100547dc(void);
extern "C" void LAB_10055a9c(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005e133(void);
extern "C" void LAB_10060505(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_100671bb(void);
extern "C" void LAB_10067c65(void);
extern "C" void LAB_1006c8d2(void);
extern "C" void LAB_100709e6(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070f8b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007951e(void);
extern "C" void LAB_10079df7(void);
extern "C" void LAB_100805fd(void);
extern "C" void LAB_1008148a(void);
extern "C" void LAB_10083e74(void);
extern "C" void LAB_10085aee(void);
extern "C" void LAB_10086dd1(void);
extern "C" void LAB_100880eb(void);
extern "C" void LAB_1008a620(void);
extern "C" void LAB_1008dd20(void);
extern "C" void LAB_10092c0d(void);
extern "C" void LAB_10094224(void);
extern "C" void LAB_1065a661(void);
extern "C" void LAB_1069c92b(void);
extern "C" void LAB_1069ca4b(void);
extern "C" void LAB_1069cb6b(void);
extern "C" void LAB_106ac790(void);
extern "C" void LAB_106ac825(void);
extern "C" void LAB_106b87a1(void);
extern "C" void LAB_106b88be(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148a20d(void);
extern "C" void LAB_1148cddb(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce11(void);
extern "C" void LAB_1186d234(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881144(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_11886d8c(void);
extern "C" void LAB_118c1ea4(void);
extern "C" void LAB_118c1ef4(void);
extern "C" void LAB_118c1f40(void);
extern "C" void LAB_118c1f90(void);
extern "C" void LAB_118c1fec(void);
extern "C" void LAB_118c203c(void);
extern "C" void LAB_118c2090(void);
extern "C" void LAB_118c20e8(void);
extern "C" void LAB_118c2138(void);
extern "C" void LAB_118c2188(void);
extern "C" void LAB_118c21d4(void);
extern "C" void LAB_118c2220(void);
extern "C" void LAB_118c226c(void);
extern "C" void LAB_118c22b8(void);
extern "C" void LAB_118c2314(void);
extern "C" void LAB_118c2364(void);
extern "C" void LAB_118c23b0(void);
extern "C" void LAB_118c2400(void);
extern "C" void LAB_118c2458(void);
extern "C" void LAB_118c24b4(void);
extern "C" void LAB_118c250c(void);
extern "C" void LAB_118c2558(void);
extern "C" void LAB_118c25a8(void);
extern "C" void LAB_118c25f8(void);
extern "C" void LAB_118c2644(void);
extern "C" void LAB_118c2694(void);
extern "C" void LAB_118c26e8(void);
extern "C" void LAB_118c273c(void);
extern "C" void LAB_118c2790(void);
extern "C" void LAB_118c27e0(void);
extern "C" void LAB_118c2824(void);
extern "C" void LAB_118c2870(void);
extern "C" void LAB_118c28c4(void);
extern "C" void LAB_118c2918(void);
extern "C" void LAB_118c2960(void);
extern "C" void LAB_118c29b8(void);
extern "C" void LAB_118c2a10(void);
extern "C" void LAB_118c2a60(void);
extern "C" void LAB_118c4044(void);
extern "C" void LAB_118c40a0(void);
extern "C" void LAB_118c40ac(void);
extern "C" void LAB_118c40b8(void);
extern "C" void LAB_118c42a4(void);
extern "C" void LAB_118c4300(void);
extern "C" void LAB_118c430c(void);
extern "C" void LAB_118c4318(void);
extern "C" void LAB_118c4504(void);
extern "C" void LAB_118c4560(void);
extern "C" void LAB_118c456c(void);
extern "C" void LAB_118c4578(void);
extern "C" void LAB_118c4764(void);
extern "C" void LAB_118c47c0(void);
extern "C" void LAB_118c47cc(void);
extern "C" void LAB_118c47d8(void);
extern "C" void LAB_118c49c4(void);
extern "C" void LAB_118c4a20(void);
extern "C" void LAB_118c4a2c(void);
extern "C" void LAB_118c4a38(void);
extern "C" void LAB_118c4af4(void);
extern "C" void LAB_118c4b50(void);
extern "C" void LAB_118c4b5c(void);
extern "C" void LAB_118c4b68(void);
extern "C" void LAB_118c5e88(void);
extern "C" void LAB_118c5fb8(void);
extern "C" void LAB_118c5fc4(void);
extern "C" void LAB_118c5fec(void);
extern "C" void LAB_118c6018(void);
extern "C" void LAB_118c603c(void);
extern "C" void LAB_118c6064(void);
extern "C" void LAB_118c6080(void);
extern "C" void LAB_118c6238(void);
extern "C" void LAB_118c6280(void);
extern "C" void LAB_118c62bc(void);
extern "C" void LAB_118c62c8(void);
extern "C" void LAB_118c6668(void);
extern "C" void LAB_118c6764(void);
extern "C" void LAB_118c68ac(void);
extern "C" void LAB_118c68f0(void);
extern "C" void LAB_118c6ae8(void);
extern "C" void LAB_118c6b10(void);
extern "C" void LAB_118c6b9c(void);
extern "C" void LAB_118c6f58(void);
extern "C" void LAB_118c6fbc(void);
extern "C" void LAB_118c7328(void);
extern "C" void LAB_118c738c(void);
extern "C" void LAB_118c73b0(void);
extern "C" void LAB_118c7414(void);
extern "C" void LAB_118c7438(void);
extern "C" void LAB_118c749c(void);
extern "C" void LAB_118c74c0(void);
extern "C" void LAB_118c7524(void);
extern "C" void LAB_118c7548(void);
extern "C" void LAB_118c75ac(void);
extern "C" void LAB_118c76e0(void);
extern "C" void LAB_118c7744(void);
extern "C" void LAB_118c7768(void);
extern "C" void LAB_118c77cc(void);
extern "C" void LAB_118c77f0(void);
extern "C" void LAB_118c7854(void);
extern "C" void LAB_118c7878(void);
extern "C" void LAB_118c78dc(void);
extern "C" void LAB_118c7900(void);
extern "C" void LAB_118c7964(void);
extern "C" void LAB_118c7988(void);
extern "C" void LAB_118c79ec(void);
extern "C" void LAB_118c7a10(void);
extern "C" void LAB_118c7a74(void);
extern "C" void LAB_118c7a98(void);
extern "C" void LAB_118c7afc(void);
extern "C" void LAB_118c7b20(void);
extern "C" void LAB_118c7b84(void);
extern "C" void LAB_118c7c30(void);
extern "C" void LAB_118c7c94(void);
extern "C" void LAB_118c7cb8(void);
extern "C" void LAB_118c7d1c(void);
extern "C" void LAB_118c7d40(void);
extern "C" void LAB_118c7da4(void);
extern "C" void LAB_118c8304(void);
extern "C" void LAB_118c8328(void);
extern "C" void LAB_118c8368(void);
extern "C" void LAB_118c838c(void);
extern "C" void LAB_118c839c(void);
extern "C" void LAB_118c83b0(void);
extern "C" void LAB_118c83c0(void);
extern "C" void LAB_118c86bc(void);
extern "C" void LAB_118c86e0(void);
extern "C" void LAB_118c8720(void);
extern "C" void LAB_118c8744(void);
extern "C" void LAB_118c8754(void);
extern "C" void LAB_118c8768(void);
extern "C" void LAB_118c8778(void);
extern "C" void LAB_118c89d8(void);
extern "C" void LAB_118c89fc(void);
extern "C" void LAB_118c8a3c(void);
extern "C" void LAB_118c8a60(void);
extern "C" void LAB_118c8a70(void);
extern "C" void LAB_118c8a84(void);
extern "C" void LAB_118c8a94(void);
extern "C" void LAB_118c91d8(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a2368(void);
extern "C" void LAB_121a236c(void);
extern "C" void LAB_121a2370(void);
extern "C" void LAB_121a2374(void);
extern "C" void LAB_121a2378(void);
extern "C" void LAB_121a237c(void);
extern "C" void LAB_121a2380(void);
extern "C" void LAB_121a2384(void);
extern "C" void LAB_121a2388(void);
extern "C" void LAB_121a238c(void);
extern "C" void LAB_121a2390(void);
extern "C" void LAB_121a2394(void);
extern "C" void LAB_121a2398(void);
extern "C" void LAB_121a239c(void);
extern "C" void LAB_121a23a0(void);
extern "C" void LAB_121a23a4(void);
extern "C" void LAB_121a23a8(void);
extern "C" void LAB_121a23ac(void);
extern "C" void LAB_121a23b0(void);
extern "C" void LAB_121a23b4(void);
extern "C" void LAB_121a23b8(void);
extern "C" void LAB_121a23bc(void);
extern "C" void LAB_121a23c0(void);
extern "C" void LAB_121a23c4(void);
extern "C" void LAB_121a23c8(void);
extern "C" void LAB_121a23cc(void);
extern "C" void LAB_121a23d0(void);
extern "C" void LAB_121a23d4(void);
extern "C" void LAB_121a23d8(void);
extern "C" void LAB_121a23dc(void);
extern "C" void LAB_121a23e0(void);
extern "C" void LAB_121a23e4(void);
extern "C" void LAB_121a23e8(void);
extern "C" void LAB_121a23ec(void);
extern "C" void LAB_121a23f0(void);
extern "C" void LAB_121a23f4(void);
extern "C" void LAB_121a23f8(void);
extern "C" void LAB_121a23fc(void);
extern "C" void LAB_121a2604(void);
extern "C" void LAB_121a2608(void);
extern "C" void LAB_122fc354(void);
extern "C" void LAB_122fc42c(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc904(void);
extern "C" void LAB_122fc940(void);
extern "C" void LAB_122fc94c(void);

extern "C" void LAB_10008f1c(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000e0ca(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_1001b973(void);
extern "C" void LAB_1001e885(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002d2b8(void);
extern "C" void LAB_1002d6aa(void);
extern "C" void LAB_100301d4(void);
extern "C" void LAB_10035571(void);
extern "C" void LAB_100362aa(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10037a97(void);
extern "C" void LAB_100381cc(void);
extern "C" void LAB_100381ea(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003c4f2(void);
extern "C" void LAB_1003c92f(void);
extern "C" void LAB_1003d73f(void);
extern "C" void LAB_10044b02(void);
extern "C" void LAB_10045304(void);
extern "C" void LAB_10049a94(void);
extern "C" void LAB_1004aa43(void);
extern "C" void LAB_1004de0f(void);
extern "C" void LAB_10051172(void);
extern "C" void LAB_10051843(void);
extern "C" void LAB_10051c67(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100547dc(void);
extern "C" void LAB_10055a9c(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005e133(void);
extern "C" void LAB_10060505(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_100671bb(void);
extern "C" void LAB_10067c65(void);
extern "C" void LAB_1006c8d2(void);
extern "C" void LAB_100709e6(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070f8b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007951e(void);
extern "C" void LAB_10079df7(void);
extern "C" void LAB_100805fd(void);
extern "C" void LAB_1008148a(void);
extern "C" void LAB_10083e74(void);
extern "C" void LAB_10085aee(void);
extern "C" void LAB_10086dd1(void);
extern "C" void LAB_100880eb(void);
extern "C" void LAB_1008a620(void);
extern "C" void LAB_1008dd20(void);
extern "C" void LAB_10092c0d(void);
extern "C" void LAB_10094224(void);
extern "C" void LAB_1065a661(void);
extern "C" void LAB_1069c92b(void);
extern "C" void LAB_1069ca4b(void);
extern "C" void LAB_1069cb6b(void);
extern "C" void LAB_106ac790(void);
extern "C" void LAB_106ac825(void);
extern "C" void LAB_106b87a1(void);
extern "C" void LAB_106b88be(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148a20d(void);
extern "C" void LAB_1148cddb(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce11(void);
extern "C" void LAB_1186d234(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881144(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_11886d8c(void);
extern "C" void LAB_118c1ea4(void);
extern "C" void LAB_118c1ef4(void);
extern "C" void LAB_118c1f40(void);
extern "C" void LAB_118c1f90(void);
extern "C" void LAB_118c1fec(void);
extern "C" void LAB_118c203c(void);
extern "C" void LAB_118c2090(void);
extern "C" void LAB_118c20e8(void);
extern "C" void LAB_118c2138(void);
extern "C" void LAB_118c2188(void);
extern "C" void LAB_118c21d4(void);
extern "C" void LAB_118c2220(void);
extern "C" void LAB_118c226c(void);
extern "C" void LAB_118c22b8(void);
extern "C" void LAB_118c2314(void);
extern "C" void LAB_118c2364(void);
extern "C" void LAB_118c23b0(void);
extern "C" void LAB_118c2400(void);
extern "C" void LAB_118c2458(void);
extern "C" void LAB_118c24b4(void);
extern "C" void LAB_118c250c(void);
extern "C" void LAB_118c2558(void);
extern "C" void LAB_118c25a8(void);
extern "C" void LAB_118c25f8(void);
extern "C" void LAB_118c2644(void);
extern "C" void LAB_118c2694(void);
extern "C" void LAB_118c26e8(void);
extern "C" void LAB_118c273c(void);
extern "C" void LAB_118c2790(void);
extern "C" void LAB_118c27e0(void);
extern "C" void LAB_118c2824(void);
extern "C" void LAB_118c2870(void);
extern "C" void LAB_118c28c4(void);
extern "C" void LAB_118c2918(void);
extern "C" void LAB_118c2960(void);
extern "C" void LAB_118c29b8(void);
extern "C" void LAB_118c2a10(void);
extern "C" void LAB_118c2a60(void);
extern "C" void LAB_118c4044(void);
extern "C" void LAB_118c40a0(void);
extern "C" void LAB_118c40ac(void);
extern "C" void LAB_118c40b8(void);
extern "C" void LAB_118c42a4(void);
extern "C" void LAB_118c4300(void);
extern "C" void LAB_118c430c(void);
extern "C" void LAB_118c4318(void);
extern "C" void LAB_118c4504(void);
extern "C" void LAB_118c4560(void);
extern "C" void LAB_118c456c(void);
extern "C" void LAB_118c4578(void);
extern "C" void LAB_118c4764(void);
extern "C" void LAB_118c47c0(void);
extern "C" void LAB_118c47cc(void);
extern "C" void LAB_118c47d8(void);
extern "C" void LAB_118c49c4(void);
extern "C" void LAB_118c4a20(void);
extern "C" void LAB_118c4a2c(void);
extern "C" void LAB_118c4a38(void);
extern "C" void LAB_118c4af4(void);
extern "C" void LAB_118c4b50(void);
extern "C" void LAB_118c4b5c(void);
extern "C" void LAB_118c4b68(void);
extern "C" void LAB_118c5e88(void);
extern "C" void LAB_118c5fb8(void);
extern "C" void LAB_118c5fc4(void);
extern "C" void LAB_118c5fec(void);
extern "C" void LAB_118c6018(void);
extern "C" void LAB_118c603c(void);
extern "C" void LAB_118c6064(void);
extern "C" void LAB_118c6080(void);
extern "C" void LAB_118c6238(void);
extern "C" void LAB_118c6280(void);
extern "C" void LAB_118c62bc(void);
extern "C" void LAB_118c62c8(void);
extern "C" void LAB_118c6668(void);
extern "C" void LAB_118c6764(void);
extern "C" void LAB_118c68ac(void);
extern "C" void LAB_118c68f0(void);
extern "C" void LAB_118c6ae8(void);
extern "C" void LAB_118c6b10(void);
extern "C" void LAB_118c6b9c(void);
extern "C" void LAB_118c6f58(void);
extern "C" void LAB_118c6fbc(void);
extern "C" void LAB_118c7328(void);
extern "C" void LAB_118c738c(void);
extern "C" void LAB_118c73b0(void);
extern "C" void LAB_118c7414(void);
extern "C" void LAB_118c7438(void);
extern "C" void LAB_118c749c(void);
extern "C" void LAB_118c74c0(void);
extern "C" void LAB_118c7524(void);
extern "C" void LAB_118c7548(void);
extern "C" void LAB_118c75ac(void);
extern "C" void LAB_118c76e0(void);
extern "C" void LAB_118c7744(void);
extern "C" void LAB_118c7768(void);
extern "C" void LAB_118c77cc(void);
extern "C" void LAB_118c77f0(void);
extern "C" void LAB_118c7854(void);
extern "C" void LAB_118c7878(void);
extern "C" void LAB_118c78dc(void);
extern "C" void LAB_118c7900(void);
extern "C" void LAB_118c7964(void);
extern "C" void LAB_118c7988(void);
extern "C" void LAB_118c79ec(void);
extern "C" void LAB_118c7a10(void);
extern "C" void LAB_118c7a74(void);
extern "C" void LAB_118c7a98(void);
extern "C" void LAB_118c7afc(void);
extern "C" void LAB_118c7b20(void);
extern "C" void LAB_118c7b84(void);
extern "C" void LAB_118c7c30(void);
extern "C" void LAB_118c7c94(void);
extern "C" void LAB_118c7cb8(void);
extern "C" void LAB_118c7d1c(void);
extern "C" void LAB_118c7d40(void);
extern "C" void LAB_118c7da4(void);
extern "C" void LAB_118c8304(void);
extern "C" void LAB_118c8328(void);
extern "C" void LAB_118c8368(void);
extern "C" void LAB_118c838c(void);
extern "C" void LAB_118c839c(void);
extern "C" void LAB_118c83b0(void);
extern "C" void LAB_118c83c0(void);
extern "C" void LAB_118c86bc(void);
extern "C" void LAB_118c86e0(void);
extern "C" void LAB_118c8720(void);
extern "C" void LAB_118c8744(void);
extern "C" void LAB_118c8754(void);
extern "C" void LAB_118c8768(void);
extern "C" void LAB_118c8778(void);
extern "C" void LAB_118c89d8(void);
extern "C" void LAB_118c89fc(void);
extern "C" void LAB_118c8a3c(void);
extern "C" void LAB_118c8a60(void);
extern "C" void LAB_118c8a70(void);
extern "C" void LAB_118c8a84(void);
extern "C" void LAB_118c8a94(void);
extern "C" void LAB_118c91d8(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a2368(void);
extern "C" void LAB_121a236c(void);
extern "C" void LAB_121a2370(void);
extern "C" void LAB_121a2374(void);
extern "C" void LAB_121a2378(void);
extern "C" void LAB_121a237c(void);
extern "C" void LAB_121a2380(void);
extern "C" void LAB_121a2384(void);
extern "C" void LAB_121a2388(void);
extern "C" void LAB_121a238c(void);
extern "C" void LAB_121a2390(void);
extern "C" void LAB_121a2394(void);
extern "C" void LAB_121a2398(void);
extern "C" void LAB_121a239c(void);
extern "C" void LAB_121a23a0(void);
extern "C" void LAB_121a23a4(void);
extern "C" void LAB_121a23a8(void);
extern "C" void LAB_121a23ac(void);
extern "C" void LAB_121a23b0(void);
extern "C" void LAB_121a23b4(void);
extern "C" void LAB_121a23b8(void);
extern "C" void LAB_121a23bc(void);
extern "C" void LAB_121a23c0(void);
extern "C" void LAB_121a23c4(void);
extern "C" void LAB_121a23c8(void);
extern "C" void LAB_121a23cc(void);
extern "C" void LAB_121a23d0(void);
extern "C" void LAB_121a23d4(void);
extern "C" void LAB_121a23d8(void);
extern "C" void LAB_121a23dc(void);
extern "C" void LAB_121a23e0(void);
extern "C" void LAB_121a23e4(void);
extern "C" void LAB_121a23e8(void);
extern "C" void LAB_121a23ec(void);
extern "C" void LAB_121a23f0(void);
extern "C" void LAB_121a23f4(void);
extern "C" void LAB_121a23f8(void);
extern "C" void LAB_121a23fc(void);
extern "C" void LAB_121a2604(void);
extern "C" void LAB_121a2608(void);
extern "C" void LAB_122fc354(void);
extern "C" void LAB_122fc42c(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc904(void);
extern "C" void LAB_122fc940(void);
extern "C" void LAB_122fc94c(void);

extern "C" void LAB_10008f1c(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000e0ca(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_1001b973(void);
extern "C" void LAB_1001e885(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002d2b8(void);
extern "C" void LAB_1002d6aa(void);
extern "C" void LAB_100301d4(void);
extern "C" void LAB_10035571(void);
extern "C" void LAB_100362aa(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10037a97(void);
extern "C" void LAB_100381cc(void);
extern "C" void LAB_100381ea(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003c4f2(void);
extern "C" void LAB_1003c92f(void);
extern "C" void LAB_1003d73f(void);
extern "C" void LAB_10044b02(void);
extern "C" void LAB_10045304(void);
extern "C" void LAB_10049a94(void);
extern "C" void LAB_1004aa43(void);
extern "C" void LAB_1004de0f(void);
extern "C" void LAB_10051172(void);
extern "C" void LAB_10051843(void);
extern "C" void LAB_10051c67(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100547dc(void);
extern "C" void LAB_10055a9c(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005e133(void);
extern "C" void LAB_10060505(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_100671bb(void);
extern "C" void LAB_10067c65(void);
extern "C" void LAB_1006c8d2(void);
extern "C" void LAB_100709e6(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070f8b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007951e(void);
extern "C" void LAB_10079df7(void);
extern "C" void LAB_100805fd(void);
extern "C" void LAB_1008148a(void);
extern "C" void LAB_10083e74(void);
extern "C" void LAB_10085aee(void);
extern "C" void LAB_10086dd1(void);
extern "C" void LAB_100880eb(void);
extern "C" void LAB_1008a620(void);
extern "C" void LAB_1008dd20(void);
extern "C" void LAB_10092c0d(void);
extern "C" void LAB_10094224(void);
extern "C" void LAB_1065a661(void);
extern "C" void LAB_1069c92b(void);
extern "C" void LAB_1069ca4b(void);
extern "C" void LAB_1069cb6b(void);
extern "C" void LAB_106ac790(void);
extern "C" void LAB_106ac825(void);
extern "C" void LAB_106b87a1(void);
extern "C" void LAB_106b88be(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148a20d(void);
extern "C" void LAB_1148cddb(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce11(void);
extern "C" void LAB_1186d234(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881144(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_11886d8c(void);
extern "C" void LAB_118c1ea4(void);
extern "C" void LAB_118c1ef4(void);
extern "C" void LAB_118c1f40(void);
extern "C" void LAB_118c1f90(void);
extern "C" void LAB_118c1fec(void);
extern "C" void LAB_118c203c(void);
extern "C" void LAB_118c2090(void);
extern "C" void LAB_118c20e8(void);
extern "C" void LAB_118c2138(void);
extern "C" void LAB_118c2188(void);
extern "C" void LAB_118c21d4(void);
extern "C" void LAB_118c2220(void);
extern "C" void LAB_118c226c(void);
extern "C" void LAB_118c22b8(void);
extern "C" void LAB_118c2314(void);
extern "C" void LAB_118c2364(void);
extern "C" void LAB_118c23b0(void);
extern "C" void LAB_118c2400(void);
extern "C" void LAB_118c2458(void);
extern "C" void LAB_118c24b4(void);
extern "C" void LAB_118c250c(void);
extern "C" void LAB_118c2558(void);
extern "C" void LAB_118c25a8(void);
extern "C" void LAB_118c25f8(void);
extern "C" void LAB_118c2644(void);
extern "C" void LAB_118c2694(void);
extern "C" void LAB_118c26e8(void);
extern "C" void LAB_118c273c(void);
extern "C" void LAB_118c2790(void);
extern "C" void LAB_118c27e0(void);
extern "C" void LAB_118c2824(void);
extern "C" void LAB_118c2870(void);
extern "C" void LAB_118c28c4(void);
extern "C" void LAB_118c2918(void);
extern "C" void LAB_118c2960(void);
extern "C" void LAB_118c29b8(void);
extern "C" void LAB_118c2a10(void);
extern "C" void LAB_118c2a60(void);
extern "C" void LAB_118c4044(void);
extern "C" void LAB_118c40a0(void);
extern "C" void LAB_118c40ac(void);
extern "C" void LAB_118c40b8(void);
extern "C" void LAB_118c42a4(void);
extern "C" void LAB_118c4300(void);
extern "C" void LAB_118c430c(void);
extern "C" void LAB_118c4318(void);
extern "C" void LAB_118c4504(void);
extern "C" void LAB_118c4560(void);
extern "C" void LAB_118c456c(void);
extern "C" void LAB_118c4578(void);
extern "C" void LAB_118c4764(void);
extern "C" void LAB_118c47c0(void);
extern "C" void LAB_118c47cc(void);
extern "C" void LAB_118c47d8(void);
extern "C" void LAB_118c49c4(void);
extern "C" void LAB_118c4a20(void);
extern "C" void LAB_118c4a2c(void);
extern "C" void LAB_118c4a38(void);
extern "C" void LAB_118c4af4(void);
extern "C" void LAB_118c4b50(void);
extern "C" void LAB_118c4b5c(void);
extern "C" void LAB_118c4b68(void);
extern "C" void LAB_118c5e88(void);
extern "C" void LAB_118c5fb8(void);
extern "C" void LAB_118c5fc4(void);
extern "C" void LAB_118c5fec(void);
extern "C" void LAB_118c6018(void);
extern "C" void LAB_118c603c(void);
extern "C" void LAB_118c6064(void);
extern "C" void LAB_118c6080(void);
extern "C" void LAB_118c6238(void);
extern "C" void LAB_118c6280(void);
extern "C" void LAB_118c62bc(void);
extern "C" void LAB_118c62c8(void);
extern "C" void LAB_118c6668(void);
extern "C" void LAB_118c6764(void);
extern "C" void LAB_118c68ac(void);
extern "C" void LAB_118c68f0(void);
extern "C" void LAB_118c6ae8(void);
extern "C" void LAB_118c6b10(void);
extern "C" void LAB_118c6b9c(void);
extern "C" void LAB_118c6f58(void);
extern "C" void LAB_118c6fbc(void);
extern "C" void LAB_118c7328(void);
extern "C" void LAB_118c738c(void);
extern "C" void LAB_118c73b0(void);
extern "C" void LAB_118c7414(void);
extern "C" void LAB_118c7438(void);
extern "C" void LAB_118c749c(void);
extern "C" void LAB_118c74c0(void);
extern "C" void LAB_118c7524(void);
extern "C" void LAB_118c7548(void);
extern "C" void LAB_118c75ac(void);
extern "C" void LAB_118c76e0(void);
extern "C" void LAB_118c7744(void);
extern "C" void LAB_118c7768(void);
extern "C" void LAB_118c77cc(void);
extern "C" void LAB_118c77f0(void);
extern "C" void LAB_118c7854(void);
extern "C" void LAB_118c7878(void);
extern "C" void LAB_118c78dc(void);
extern "C" void LAB_118c7900(void);
extern "C" void LAB_118c7964(void);
extern "C" void LAB_118c7988(void);
extern "C" void LAB_118c79ec(void);
extern "C" void LAB_118c7a10(void);
extern "C" void LAB_118c7a74(void);
extern "C" void LAB_118c7a98(void);
extern "C" void LAB_118c7afc(void);
extern "C" void LAB_118c7b20(void);
extern "C" void LAB_118c7b84(void);
extern "C" void LAB_118c7c30(void);
extern "C" void LAB_118c7c94(void);
extern "C" void LAB_118c7cb8(void);
extern "C" void LAB_118c7d1c(void);
extern "C" void LAB_118c7d40(void);
extern "C" void LAB_118c7da4(void);
extern "C" void LAB_118c8304(void);
extern "C" void LAB_118c8328(void);
extern "C" void LAB_118c8368(void);
extern "C" void LAB_118c838c(void);
extern "C" void LAB_118c839c(void);
extern "C" void LAB_118c83b0(void);
extern "C" void LAB_118c83c0(void);
extern "C" void LAB_118c86bc(void);
extern "C" void LAB_118c86e0(void);
extern "C" void LAB_118c8720(void);
extern "C" void LAB_118c8744(void);
extern "C" void LAB_118c8754(void);
extern "C" void LAB_118c8768(void);
extern "C" void LAB_118c8778(void);
extern "C" void LAB_118c89d8(void);
extern "C" void LAB_118c89fc(void);
extern "C" void LAB_118c8a3c(void);
extern "C" void LAB_118c8a60(void);
extern "C" void LAB_118c8a70(void);
extern "C" void LAB_118c8a84(void);
extern "C" void LAB_118c8a94(void);
extern "C" void LAB_118c91d8(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a2368(void);
extern "C" void LAB_121a236c(void);
extern "C" void LAB_121a2370(void);
extern "C" void LAB_121a2374(void);
extern "C" void LAB_121a2378(void);
extern "C" void LAB_121a237c(void);
extern "C" void LAB_121a2380(void);
extern "C" void LAB_121a2384(void);
extern "C" void LAB_121a2388(void);
extern "C" void LAB_121a238c(void);
extern "C" void LAB_121a2390(void);
extern "C" void LAB_121a2394(void);
extern "C" void LAB_121a2398(void);
extern "C" void LAB_121a239c(void);
extern "C" void LAB_121a23a0(void);
extern "C" void LAB_121a23a4(void);
extern "C" void LAB_121a23a8(void);
extern "C" void LAB_121a23ac(void);
extern "C" void LAB_121a23b0(void);
extern "C" void LAB_121a23b4(void);
extern "C" void LAB_121a23b8(void);
extern "C" void LAB_121a23bc(void);
extern "C" void LAB_121a23c0(void);
extern "C" void LAB_121a23c4(void);
extern "C" void LAB_121a23c8(void);
extern "C" void LAB_121a23cc(void);
extern "C" void LAB_121a23d0(void);
extern "C" void LAB_121a23d4(void);
extern "C" void LAB_121a23d8(void);
extern "C" void LAB_121a23dc(void);
extern "C" void LAB_121a23e0(void);
extern "C" void LAB_121a23e4(void);
extern "C" void LAB_121a23e8(void);
extern "C" void LAB_121a23ec(void);
extern "C" void LAB_121a23f0(void);
extern "C" void LAB_121a23f4(void);
extern "C" void LAB_121a23f8(void);
extern "C" void LAB_121a23fc(void);
extern "C" void LAB_121a2604(void);
extern "C" void LAB_121a2608(void);
extern "C" void LAB_122fc354(void);
extern "C" void LAB_122fc42c(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc904(void);
extern "C" void LAB_122fc940(void);
extern "C" void LAB_122fc94c(void);


struct Recovered_Bulk { char _pad; undefined4 * __thiscall m_FUN_10656b00(undefined4 *param_2); template<class... A> int m_FUN_10656b00(A...); int __thiscall m_FUN_10656b30(int param_2); template<class... A> int m_FUN_10656b30(A...); void __thiscall m_FUN_1065a500(uint param_2); template<class... A> int m_FUN_1065a500(A...); void __thiscall m_FUN_1065a5b0(uint param_2); template<class... A> int m_FUN_1065a5b0(A...); void __thiscall m_FUN_1065acf0(int param_2); template<class... A> int m_FUN_1065acf0(A...); void __thiscall m_FUN_1065ad10(undefined4 param_2); template<class... A> int m_FUN_1065ad10(A...); SCStr * __thiscall m_FUN_10667e10(SCStr *param_2); template<class... A> int m_FUN_10667e10(A...); SCStr * __thiscall m_FUN_1066d540(SCStr *param_2); template<class... A> int m_FUN_1066d540(A...); void __thiscall m_FUN_1067f150(undefined1 param_2); template<class... A> int m_FUN_1067f150(A...); void __thiscall m_FUN_1067f1f0(undefined1 param_2); template<class... A> int m_FUN_1067f1f0(A...); void __thiscall m_FUN_1067f320(undefined1 param_2); template<class... A> int m_FUN_1067f320(A...); void __thiscall m_FUN_1067f330(undefined1 param_2); template<class... A> int m_FUN_1067f330(A...); void __thiscall m_FUN_1067f340(undefined4 *param_2); template<class... A> int m_FUN_1067f340(A...); int * __thiscall m_FUN_1067f450(int *param_2); template<class... A> int m_FUN_1067f450(A...); undefined4 * __thiscall m_FUN_1067f4a0(undefined4 *param_2); template<class... A> int m_FUN_1067f4a0(A...); void __thiscall m_FUN_1067fb10(int param_2); template<class... A> int m_FUN_1067fb10(A...); void __thiscall m_FUN_1067fb30(int *param_2); template<class... A> int m_FUN_1067fb30(A...); SCStr * __thiscall m_FUN_10681440(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10681440(A...); SCStr * __thiscall m_FUN_10681470(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10681470(A...); SCStr * __thiscall m_FUN_106814a0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_106814a0(A...); SCStr * __thiscall m_FUN_106814d0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_106814d0(A...); SCStr * __thiscall m_FUN_10681500(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10681500(A...); SCStr * __thiscall m_FUN_10681530(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10681530(A...); SCStr * __thiscall m_FUN_10681560(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10681560(A...); SCStr * __thiscall m_FUN_10681590(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10681590(A...); undefined4 * __thiscall m_FUN_106815c0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106815c0(A...); SCStr * __thiscall m_FUN_106817c0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106817c0(A...); undefined4 * __thiscall m_FUN_106817f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106817f0(A...); SCStr * __thiscall m_FUN_10681810(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10681810(A...); int * __thiscall m_FUN_10681850(int *param_2); template<class... A> int m_FUN_10681850(A...); void __thiscall m_FUN_106819d0(undefined4 *param_2); template<class... A> int m_FUN_106819d0(A...); void __thiscall m_FUN_10681a00(undefined4 *param_2); template<class... A> int m_FUN_10681a00(A...); void __thiscall m_FUN_10681a30(undefined4 *param_2); template<class... A> int m_FUN_10681a30(A...); undefined4 * __thiscall m_FUN_10682f90(undefined4 *param_2); template<class... A> int m_FUN_10682f90(A...); undefined4 * __thiscall m_FUN_10683000(undefined4 *param_2); template<class... A> int m_FUN_10683000(A...); undefined4 * __thiscall m_FUN_10683090(undefined4 param_2); template<class... A> int m_FUN_10683090(A...); undefined4 * __thiscall m_FUN_106830b0(undefined4 param_2); template<class... A> int m_FUN_106830b0(A...); undefined4 * __thiscall m_FUN_10683150(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10683150(A...); undefined4 * __thiscall m_FUN_10683160(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10683160(A...); undefined4 * __thiscall m_FUN_10683270(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10683270(A...); undefined4 * __thiscall m_FUN_10683280(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10683280(A...); undefined4 * __thiscall m_FUN_106832d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106832d0(A...); undefined4 * __thiscall m_FUN_106832f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106832f0(A...); undefined4 * __thiscall m_FUN_10683300(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10683300(A...); undefined4 * __thiscall m_FUN_10683360(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10683360(A...); SCStr * __thiscall m_FUN_10683550(SCStr *param_2); template<class... A> int m_FUN_10683550(A...); int * __thiscall m_FUN_106846c0(int *param_2); template<class... A> int m_FUN_106846c0(A...); int * __thiscall m_FUN_10684720(int *param_2); template<class... A> int m_FUN_10684720(A...); bool __thiscall m_FUN_10684780(int *param_2); template<class... A> int m_FUN_10684780(A...); bool __thiscall m_FUN_106847a0(int *param_2); template<class... A> int m_FUN_106847a0(A...); bool __thiscall m_FUN_106847c0(int *param_2); template<class... A> int m_FUN_106847c0(A...); bool __thiscall m_FUN_106847e0(int *param_2); template<class... A> int m_FUN_106847e0(A...); void __thiscall m_FUN_10684c50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10684c50(A...); uint __thiscall m_FUN_10685070(uint param_2); template<class... A> int m_FUN_10685070(A...); void __thiscall m_FUN_10685820(int param_2); template<class... A> int m_FUN_10685820(A...); void __thiscall m_FUN_10685890(int param_2); template<class... A> int m_FUN_10685890(A...); void __thiscall m_FUN_106859e0(int *param_2); template<class... A> int m_FUN_106859e0(A...); void __thiscall m_FUN_10685a50(int *param_2); template<class... A> int m_FUN_10685a50(A...); void __thiscall m_FUN_10685f10(undefined4 *param_2); template<class... A> int m_FUN_10685f10(A...); void __thiscall m_FUN_10685f30(undefined4 *param_2); template<class... A> int m_FUN_10685f30(A...); void __thiscall m_FUN_10686400(undefined4 *param_2); template<class... A> int m_FUN_10686400(A...); void __thiscall m_FUN_10686420(undefined4 *param_2); template<class... A> int m_FUN_10686420(A...); undefined4 * __thiscall m_FUN_10688020(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10688020(A...); undefined4 * __thiscall m_FUN_106885e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_106885e0(A...); void * __thiscall m_FUN_1068c040(char *param_2); template<class... A> int m_FUN_1068c040(A...); undefined4 * __thiscall m_FUN_1068c1f0(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_1068c1f0(A...); undefined4 * __thiscall m_FUN_1068c2a0(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_1068c2a0(A...); undefined4 * __thiscall m_FUN_1068c600(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1068c600(A...); undefined4 * __thiscall m_FUN_1068c620(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_1068c620(A...); undefined4 * __thiscall m_FUN_1068c670(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_1068c670(A...); int * __thiscall m_FUN_1068c6a0(int *param_2); template<class... A> int m_FUN_1068c6a0(A...); int * __thiscall m_FUN_1068c6c0(int *param_2); template<class... A> int m_FUN_1068c6c0(A...); uint * __thiscall m_FUN_1068c740(int *param_2); template<class... A> int m_FUN_1068c740(A...); void __thiscall m_FUN_1068ca40(undefined4 *param_2); template<class... A> int m_FUN_1068ca40(A...); void __thiscall m_FUN_1068ca70(undefined4 *param_2); template<class... A> int m_FUN_1068ca70(A...); void __thiscall m_FUN_1068caa0(undefined4 *param_2); template<class... A> int m_FUN_1068caa0(A...); void __thiscall m_FUN_1068cb40(undefined4 *param_2); template<class... A> int m_FUN_1068cb40(A...); void __thiscall m_FUN_1068cb70(undefined4 *param_2); template<class... A> int m_FUN_1068cb70(A...); void __thiscall m_FUN_1068cba0(undefined4 *param_2); template<class... A> int m_FUN_1068cba0(A...); void __thiscall m_FUN_1068cbd0(undefined4 *param_2); template<class... A> int m_FUN_1068cbd0(A...); void __thiscall m_FUN_1068f8f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1068f8f0(A...); undefined4 * __thiscall m_FUN_10690dc0(undefined4 param_2); template<class... A> int m_FUN_10690dc0(A...); undefined4 * __thiscall m_FUN_10690ed0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10690ed0(A...); undefined4 * __thiscall m_FUN_10690ee0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10690ee0(A...); undefined4 * __thiscall m_FUN_10690ef0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10690ef0(A...); undefined4 * __thiscall m_FUN_10690f00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10690f00(A...); undefined4 * __thiscall m_FUN_10690f30(undefined4 *param_2); template<class... A> int m_FUN_10690f30(A...); undefined4 * __thiscall m_FUN_10690f40(undefined4 param_2); template<class... A> int m_FUN_10690f40(A...); undefined4 * __thiscall m_FUN_10690f60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10690f60(A...); undefined4 * __thiscall m_FUN_10690f80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10690f80(A...); undefined4 * __thiscall m_FUN_10690fa0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10690fa0(A...); undefined4 * __thiscall m_FUN_10690fe0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10690fe0(A...); undefined4 * __thiscall m_FUN_10691020(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10691020(A...); undefined4 * __thiscall m_FUN_106910c0(undefined4 param_2); template<class... A> int m_FUN_106910c0(A...); undefined4 * __thiscall m_FUN_106913e0(undefined4 *param_2); template<class... A> int m_FUN_106913e0(A...); undefined4 * __thiscall m_FUN_10691440(undefined4 *param_2); template<class... A> int m_FUN_10691440(A...); undefined4 * __thiscall m_FUN_10691770(undefined4 *param_2); template<class... A> int m_FUN_10691770(A...); undefined4 * __thiscall m_FUN_106921a0(undefined4 param_2); template<class... A> int m_FUN_106921a0(A...); undefined4 * __thiscall m_FUN_106921b0(undefined4 param_2,int param_3); template<class... A> int m_FUN_106921b0(A...); int * __thiscall m_FUN_106929c0(int *param_2); template<class... A> int m_FUN_106929c0(A...); bool __thiscall m_FUN_10692a80(int *param_2); template<class... A> int m_FUN_10692a80(A...); bool __thiscall m_FUN_10692aa0(int *param_2); template<class... A> int m_FUN_10692aa0(A...); bool __thiscall m_FUN_10692ac0(int *param_2); template<class... A> int m_FUN_10692ac0(A...); void __thiscall m_FUN_106938b0(int param_2); template<class... A> int m_FUN_106938b0(A...); uint __thiscall m_FUN_106938e0(uint param_2); template<class... A> int m_FUN_106938e0(A...); uint __thiscall m_FUN_10693930(uint param_2); template<class... A> int m_FUN_10693930(A...); uint __thiscall m_FUN_10693970(uint param_2); template<class... A> int m_FUN_10693970(A...); int * __thiscall m_FUN_10694150(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10694150(A...); void __thiscall m_FUN_106943e0(int param_2); template<class... A> int m_FUN_106943e0(A...); void __thiscall m_FUN_10694400(int param_2); template<class... A> int m_FUN_10694400(A...); void __thiscall m_FUN_10694420(int param_2); template<class... A> int m_FUN_10694420(A...); void __thiscall m_FUN_10694440(int *param_2); template<class... A> int m_FUN_10694440(A...); void __thiscall m_FUN_106944a0(undefined4 param_2); template<class... A> int m_FUN_106944a0(A...); void __thiscall m_FUN_10694990(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10694990(A...); void __thiscall m_FUN_10694b00(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10694b00(A...); void __thiscall m_FUN_10694b20(undefined4 *param_2); template<class... A> int m_FUN_10694b20(A...); void __thiscall m_FUN_10694b40(undefined4 *param_2); template<class... A> int m_FUN_10694b40(A...); void __thiscall m_FUN_10694b50(undefined4 *param_2); template<class... A> int m_FUN_10694b50(A...); void __thiscall m_FUN_10694b60(undefined4 *param_2); template<class... A> int m_FUN_10694b60(A...); void __thiscall m_FUN_10695050(undefined4 *param_2); template<class... A> int m_FUN_10695050(A...); uint __thiscall m_FUN_10695060(byte *param_2); template<class... A> int m_FUN_10695060(A...); void __thiscall m_FUN_10695520(undefined4 *param_2); template<class... A> int m_FUN_10695520(A...); void __thiscall m_FUN_10695530(undefined4 *param_2); template<class... A> int m_FUN_10695530(A...); void __thiscall m_FUN_10695540(undefined4 *param_2); template<class... A> int m_FUN_10695540(A...); int * __thiscall m_FUN_10696fa0(int *param_2); template<class... A> int m_FUN_10696fa0(A...); undefined4 * __thiscall m_FUN_10699860(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10699860(A...); SCStr * __thiscall m_FUN_106999a0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106999a0(A...); undefined4 * __thiscall m_FUN_106999d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106999d0(A...); SCStr * __thiscall m_FUN_10699ae0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10699ae0(A...); int * __thiscall m_FUN_10699b20(int *param_2); template<class... A> int m_FUN_10699b20(A...); int * __thiscall m_FUN_10699b40(int *param_2); template<class... A> int m_FUN_10699b40(A...); int * __thiscall m_FUN_10699b60(int *param_2); template<class... A> int m_FUN_10699b60(A...); int * __thiscall m_FUN_10699b80(int *param_2); template<class... A> int m_FUN_10699b80(A...); void __thiscall m_FUN_10699c90(undefined4 *param_2); template<class... A> int m_FUN_10699c90(A...); undefined4 * __thiscall m_FUN_1069ac30(undefined4 *param_2); template<class... A> int m_FUN_1069ac30(A...); undefined4 * __thiscall m_FUN_1069ad40(undefined4 param_2); template<class... A> int m_FUN_1069ad40(A...); undefined4 * __thiscall m_FUN_1069afa0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1069afa0(A...); undefined4 * __thiscall m_FUN_1069afb0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1069afb0(A...); undefined8 * __thiscall m_FUN_1069afe0(undefined8 *param_2); template<class... A> int m_FUN_1069afe0(A...); undefined4 * __thiscall m_FUN_1069b000(undefined4 param_2); template<class... A> int m_FUN_1069b000(A...); undefined4 * __thiscall m_FUN_1069b3c0(undefined4 param_2); template<class... A> int m_FUN_1069b3c0(A...); undefined4 * __thiscall m_FUN_1069b400(undefined4 param_2); template<class... A> int m_FUN_1069b400(A...); undefined4 * __thiscall m_FUN_1069b440(undefined4 param_2); template<class... A> int m_FUN_1069b440(A...); undefined4 * __thiscall m_FUN_1069b480(undefined4 param_2); template<class... A> int m_FUN_1069b480(A...); undefined4 * __thiscall m_FUN_1069bb20(undefined4 param_2); template<class... A> int m_FUN_1069bb20(A...); int * __thiscall m_FUN_1069c780(int *param_2); template<class... A> int m_FUN_1069c780(A...); undefined4 * __thiscall m_FUN_1069c850(undefined4 *param_2); template<class... A> int m_FUN_1069c850(A...); undefined4 * __thiscall m_FUN_1069c970(undefined4 *param_2); template<class... A> int m_FUN_1069c970(A...); undefined4 * __thiscall m_FUN_1069ca90(undefined4 *param_2); template<class... A> int m_FUN_1069ca90(A...); bool __thiscall m_FUN_1069cbb0(int *param_2); template<class... A> int m_FUN_1069cbb0(A...); bool __thiscall m_FUN_1069cbd0(int *param_2); template<class... A> int m_FUN_1069cbd0(A...); void __thiscall m_FUN_1069d050(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1069d050(A...); void __thiscall m_FUN_1069d080(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1069d080(A...); int * __thiscall m_FUN_1069dc80(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_1069dc80(A...); void __thiscall m_FUN_1069ddc0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1069ddc0(A...); void __thiscall m_FUN_1069dfc0(int param_2); template<class... A> int m_FUN_1069dfc0(A...); void __thiscall m_FUN_1069dfe0(int param_2); template<class... A> int m_FUN_1069dfe0(A...); void __thiscall m_FUN_1069e000(undefined4 param_2); template<class... A> int m_FUN_1069e000(A...); void __thiscall m_FUN_1069e010(int param_2); template<class... A> int m_FUN_1069e010(A...); void __thiscall m_FUN_1069e090(undefined4 *param_2); template<class... A> int m_FUN_1069e090(A...); void __thiscall m_FUN_1069e0d0(undefined4 *param_2); template<class... A> int m_FUN_1069e0d0(A...); void __thiscall m_FUN_1069e1d0(undefined4 *param_2); template<class... A> int m_FUN_1069e1d0(A...); void __thiscall m_FUN_1069e1f0(undefined4 *param_2); template<class... A> int m_FUN_1069e1f0(A...); void __thiscall m_FUN_1069e210(undefined4 *param_2); template<class... A> int m_FUN_1069e210(A...); void __thiscall m_FUN_1069e220(undefined4 *param_2); template<class... A> int m_FUN_1069e220(A...); uint __thiscall m_FUN_1069e3c0(undefined4 param_2); template<class... A> int m_FUN_1069e3c0(A...); void __thiscall m_FUN_1069ed20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1069ed20(A...); void __thiscall m_FUN_1069ed50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1069ed50(A...); SCStr * __thiscall m_FUN_1069ffe0(SCStr *param_2); template<class... A> int m_FUN_1069ffe0(A...); undefined4 * __thiscall m_FUN_106a1270(undefined4 *param_2); template<class... A> int m_FUN_106a1270(A...); int * __thiscall m_FUN_106a1290(int *param_2); template<class... A> int m_FUN_106a1290(A...); void __thiscall m_FUN_106a2a50(undefined4 *param_2); template<class... A> int m_FUN_106a2a50(A...); void __thiscall m_FUN_106a2a70(undefined4 *param_2); template<class... A> int m_FUN_106a2a70(A...); undefined4 * __thiscall m_FUN_106a2ec0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_106a2ec0(A...); undefined4 * __thiscall m_FUN_106a2ed0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106a2ed0(A...); SCStr * __thiscall m_FUN_106a2ff0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106a2ff0(A...); undefined4 * __thiscall m_FUN_106a3030(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106a3030(A...); undefined4 * __thiscall m_FUN_106a3050(undefined4 param_2); template<class... A> int m_FUN_106a3050(A...); undefined4 * __thiscall m_FUN_106a3060(undefined4 *param_2); template<class... A> int m_FUN_106a3060(A...); SCStr * __thiscall m_FUN_106a3070(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_106a3070(A...); undefined4 * __thiscall m_FUN_106a3b30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106a3b30(A...); undefined4 * __thiscall m_FUN_106a3b40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106a3b40(A...); undefined4 * __thiscall m_FUN_106a3bd0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106a3bd0(A...); undefined1 * __thiscall m_FUN_106a3ef0(undefined4 *param_2,uint param_3,uint param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106a3ef0(A...); undefined4 * __thiscall m_FUN_106a3f60(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_106a3f60(A...); undefined4 * __thiscall m_FUN_106a3ff0(undefined4 param_2); template<class... A> int m_FUN_106a3ff0(A...); bool __thiscall m_FUN_106a4420(int *param_2); template<class... A> int m_FUN_106a4420(A...); bool __thiscall m_FUN_106a4440(int *param_2); template<class... A> int m_FUN_106a4440(A...); void __thiscall m_FUN_106a4760(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106a4760(A...); void __thiscall m_FUN_106a4ec0(uint param_2); template<class... A> int m_FUN_106a4ec0(A...); uint __thiscall m_FUN_106a4ee0(int param_2,uint param_3); template<class... A> int m_FUN_106a4ee0(A...); undefined4 * __thiscall m_FUN_106a5010(int param_2,uint param_3); template<class... A> int m_FUN_106a5010(A...); int __thiscall m_FUN_106a5080(uint param_2); template<class... A> int m_FUN_106a5080(A...); void __thiscall m_FUN_106a50d0(int param_2,int param_3); template<class... A> int m_FUN_106a50d0(A...); void __thiscall m_FUN_106a5190(std_codecvt_base *param_2); template<class... A> int m_FUN_106a5190(A...); void __thiscall m_FUN_106a5480(int param_2); template<class... A> int m_FUN_106a5480(A...); void __thiscall m_FUN_106a5520(int *param_2); template<class... A> int m_FUN_106a5520(A...); void __thiscall m_FUN_106a6530(undefined4 *param_2); template<class... A> int m_FUN_106a6530(A...); void __thiscall m_FUN_106a6a90(undefined4 *param_2); template<class... A> int m_FUN_106a6a90(A...); int __thiscall m_FUN_106a6ba0(char param_2,uint param_3); template<class... A> int m_FUN_106a6ba0(A...); void __thiscall m_FUN_106a7680(undefined4 *param_2); template<class... A> int m_FUN_106a7680(A...); void __thiscall m_FUN_106a7ed0(undefined4 *param_2); template<class... A> int m_FUN_106a7ed0(A...); undefined1 * __thiscall m_FUN_106a7ef0(undefined1 *param_2,uint param_3,uint param_4); template<class... A> int m_FUN_106a7ef0(A...); undefined4 * __thiscall m_FUN_106a8720(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_106a8720(A...); undefined4 * __thiscall m_FUN_106a8740(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106a8740(A...); undefined4 * __thiscall m_FUN_106a8760(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_106a8760(A...); undefined4 * __thiscall m_FUN_106a8860(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106a8860(A...); undefined4 * __thiscall m_FUN_106a8b20(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106a8b20(A...); undefined4 * __thiscall m_FUN_106a8b40(undefined4 param_2); template<class... A> int m_FUN_106a8b40(A...); undefined4 * __thiscall m_FUN_106a8b50(undefined4 param_2); template<class... A> int m_FUN_106a8b50(A...); undefined4 * __thiscall m_FUN_106a8b60(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106a8b60(A...); undefined4 * __thiscall m_FUN_106a8b80(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106a8b80(A...); undefined4 * __thiscall m_FUN_106a8bc0(int *param_2); template<class... A> int m_FUN_106a8bc0(A...); undefined4 * __thiscall m_FUN_106a8d50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106a8d50(A...); undefined4 * __thiscall m_FUN_106a8ef0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106a8ef0(A...); undefined4 * __thiscall m_FUN_106a8fd0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_106a8fd0(A...); undefined4 * __thiscall m_FUN_106a9020(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_106a9020(A...); undefined4 * __thiscall m_FUN_106a9070(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_106a9070(A...); int * __thiscall m_FUN_106a90a0(int *param_2); template<class... A> int m_FUN_106a90a0(A...); int * __thiscall m_FUN_106a9120(int *param_2); template<class... A> int m_FUN_106a9120(A...); SCStr * __thiscall m_FUN_106a91c0(SCStr *param_2,undefined4 *param_3); template<class... A> int m_FUN_106a91c0(A...); void __thiscall m_FUN_106a92c0(undefined4 *param_2); template<class... A> int m_FUN_106a92c0(A...); void __thiscall m_FUN_106aa2f0(undefined4 *param_2); template<class... A> int m_FUN_106aa2f0(A...); void __thiscall m_FUN_106aa320(undefined4 *param_2); template<class... A> int m_FUN_106aa320(A...); void __thiscall m_FUN_106aa350(undefined4 param_2); template<class... A> int m_FUN_106aa350(A...); void __thiscall m_FUN_106aa3a0(undefined4 *param_2); template<class... A> int m_FUN_106aa3a0(A...); void __thiscall m_FUN_106aa3d0(undefined4 *param_2); template<class... A> int m_FUN_106aa3d0(A...); void __thiscall m_FUN_106aa400(undefined4 param_2); template<class... A> int m_FUN_106aa400(A...); void __thiscall m_FUN_106aa430(int *param_2); template<class... A> int m_FUN_106aa430(A...); void __thiscall m_FUN_106aa4a0(undefined4 *param_2); template<class... A> int m_FUN_106aa4a0(A...); void __thiscall m_FUN_106aa4d0(undefined4 param_2); template<class... A> int m_FUN_106aa4d0(A...); void __thiscall m_FUN_106aa4f0(undefined4 *param_2); template<class... A> int m_FUN_106aa4f0(A...); void __thiscall m_FUN_106aa520(undefined4 *param_2); template<class... A> int m_FUN_106aa520(A...); void __thiscall m_FUN_106aa550(undefined4 param_2); template<class... A> int m_FUN_106aa550(A...); void __thiscall m_FUN_106aa580(int *param_2); template<class... A> int m_FUN_106aa580(A...); void __thiscall m_FUN_106ae100(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106ae100(A...); void __thiscall m_FUN_106af1f0(SCStr *param_2); template<class... A> int m_FUN_106af1f0(A...); void __thiscall m_FUN_106af290(undefined4 param_2); template<class... A> int m_FUN_106af290(A...); void __thiscall m_FUN_106af370(undefined4 param_2); template<class... A> int m_FUN_106af370(A...); void __thiscall m_FUN_106afc80(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_106afc80(A...); undefined4 * __thiscall m_FUN_106b03f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106b03f0(A...); undefined4 * __thiscall m_FUN_106b0470(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106b0470(A...); undefined4 * __thiscall m_FUN_106b04f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106b04f0(A...); undefined4 * __thiscall m_FUN_106b0570(undefined4 *param_2); template<class... A> int m_FUN_106b0570(A...); undefined4 * __thiscall m_FUN_106b0740(undefined4 param_2); template<class... A> int m_FUN_106b0740(A...); undefined4 * __thiscall m_FUN_106b0760(undefined4 param_2); template<class... A> int m_FUN_106b0760(A...); undefined4 * __thiscall m_FUN_106b0870(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0870(A...); undefined4 * __thiscall m_FUN_106b0880(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0880(A...); undefined4 * __thiscall m_FUN_106b0970(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0970(A...); undefined4 * __thiscall m_FUN_106b0980(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0980(A...); undefined4 * __thiscall m_FUN_106b0990(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106b0990(A...); undefined4 * __thiscall m_FUN_106b09d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b09d0(A...); undefined4 * __thiscall m_FUN_106b09e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b09e0(A...); undefined4 * __thiscall m_FUN_106b0af0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0af0(A...); undefined4 * __thiscall m_FUN_106b0b00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0b00(A...); undefined4 * __thiscall m_FUN_106b0b10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0b10(A...); undefined4 * __thiscall m_FUN_106b0b20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0b20(A...); undefined4 * __thiscall m_FUN_106b0b30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0b30(A...); undefined4 * __thiscall m_FUN_106b0b80(undefined4 *param_2); template<class... A> int m_FUN_106b0b80(A...); undefined4 * __thiscall m_FUN_106b0b90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106b0b90(A...); undefined4 * __thiscall m_FUN_106b0bb0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106b0bb0(A...); undefined4 * __thiscall m_FUN_106b0bd0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106b0bd0(A...); undefined4 * __thiscall m_FUN_106b0bf0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106b0bf0(A...); undefined4 * __thiscall m_FUN_106b0c10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0c10(A...); undefined4 * __thiscall m_FUN_106b0c20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0c20(A...); undefined4 * __thiscall m_FUN_106b0c30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0c30(A...); undefined4 * __thiscall m_FUN_106b0c40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0c40(A...); undefined4 * __thiscall m_FUN_106b0c50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0c50(A...); undefined4 * __thiscall m_FUN_106b0c60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b0c60(A...); undefined4 * __thiscall m_FUN_106b0c90(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106b0c90(A...); undefined4 * __thiscall m_FUN_106b0cd0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106b0cd0(A...); undefined4 * __thiscall m_FUN_106b0e30(undefined4 *param_2); template<class... A> int m_FUN_106b0e30(A...); undefined4 * __thiscall m_FUN_106b0f80(undefined4 *param_2); template<class... A> int m_FUN_106b0f80(A...); undefined4 * __thiscall m_FUN_106b0fd0(undefined4 *param_2); template<class... A> int m_FUN_106b0fd0(A...); undefined4 * __thiscall m_FUN_106b10d0(undefined4 *param_2); template<class... A> int m_FUN_106b10d0(A...); SCStr * __thiscall m_FUN_106b22b0(SCStr *param_2); template<class... A> int m_FUN_106b22b0(A...); SCStr * __thiscall m_FUN_106b22e0(SCStr *param_2); template<class... A> int m_FUN_106b22e0(A...); undefined4 * __thiscall m_FUN_106b23b0(undefined4 param_2); template<class... A> int m_FUN_106b23b0(A...); undefined4 * __thiscall m_FUN_106b23e0(undefined4 param_2); template<class... A> int m_FUN_106b23e0(A...); undefined4 * __thiscall m_FUN_106b2410(undefined4 param_2,undefined1 param_3); template<class... A> int m_FUN_106b2410(A...); undefined4 * __thiscall m_FUN_106b2500(undefined4 param_2); template<class... A> int m_FUN_106b2500(A...); undefined4 * __thiscall m_FUN_106b2530(undefined4 param_2); template<class... A> int m_FUN_106b2530(A...); undefined4 * __thiscall m_FUN_106b25b0(undefined4 param_2); template<class... A> int m_FUN_106b25b0(A...); undefined4 * __thiscall m_FUN_106b25e0(undefined4 param_2); template<class... A> int m_FUN_106b25e0(A...); undefined4 * __thiscall m_FUN_106b2610(undefined4 param_2); template<class... A> int m_FUN_106b2610(A...); undefined4 * __thiscall m_FUN_106b2650(undefined4 param_2); template<class... A> int m_FUN_106b2650(A...); undefined4 * __thiscall m_FUN_106b2680(undefined4 param_2); template<class... A> int m_FUN_106b2680(A...); undefined4 * __thiscall m_FUN_106b2da0(undefined4 param_2); template<class... A> int m_FUN_106b2da0(A...); undefined4 * __thiscall m_FUN_106b2dd0(undefined4 param_2); template<class... A> int m_FUN_106b2dd0(A...); undefined4 * __thiscall m_FUN_106b2f10(undefined4 param_2,undefined1 param_3); template<class... A> int m_FUN_106b2f10(A...); undefined4 * __thiscall m_FUN_106b2f50(undefined4 *param_2); template<class... A> int m_FUN_106b2f50(A...); undefined4 * __thiscall m_FUN_106b3250(undefined4 param_2); template<class... A> int m_FUN_106b3250(A...); int * __thiscall m_FUN_106b5450(int *param_2); template<class... A> int m_FUN_106b5450(A...); int * __thiscall m_FUN_106b5590(int *param_2); template<class... A> int m_FUN_106b5590(A...); int * __thiscall m_FUN_106b55f0(int *param_2); template<class... A> int m_FUN_106b55f0(A...); int * __thiscall m_FUN_106b5640(int *param_2); template<class... A> int m_FUN_106b5640(A...); int * __thiscall m_FUN_106b56d0(int *param_2); template<class... A> int m_FUN_106b56d0(A...); int * __thiscall m_FUN_106b5730(int *param_2); template<class... A> int m_FUN_106b5730(A...); undefined4 * __thiscall m_FUN_106b5780(undefined4 *param_2); template<class... A> int m_FUN_106b5780(A...); undefined4 * __thiscall m_FUN_106b57b0(undefined4 *param_2); template<class... A> int m_FUN_106b57b0(A...); int __thiscall m_FUN_106b57e0(int param_2); template<class... A> int m_FUN_106b57e0(A...); int __thiscall m_FUN_106b5890(int param_2); template<class... A> int m_FUN_106b5890(A...); SCStr * __thiscall m_FUN_106b5930(SCStr *param_2); template<class... A> int m_FUN_106b5930(A...); int * __thiscall m_FUN_106b5980(int *param_2); template<class... A> int m_FUN_106b5980(A...); bool __thiscall m_FUN_106b5ab0(int *param_2); template<class... A> int m_FUN_106b5ab0(A...); bool __thiscall m_FUN_106b5ad0(int *param_2); template<class... A> int m_FUN_106b5ad0(A...); bool __thiscall m_FUN_106b5af0(int *param_2); template<class... A> int m_FUN_106b5af0(A...); bool __thiscall m_FUN_106b5b10(int *param_2); template<class... A> int m_FUN_106b5b10(A...); bool __thiscall m_FUN_106b5b30(int *param_2); template<class... A> int m_FUN_106b5b30(A...); bool __thiscall m_FUN_106b5b50(int *param_2); template<class... A> int m_FUN_106b5b50(A...); bool __thiscall m_FUN_106b5b70(int *param_2); template<class... A> int m_FUN_106b5b70(A...); bool __thiscall m_FUN_106b5c10(int *param_2); template<class... A> int m_FUN_106b5c10(A...); bool __thiscall m_FUN_106b5c30(int *param_2); template<class... A> int m_FUN_106b5c30(A...); bool __thiscall m_FUN_106b5c50(int *param_2); template<class... A> int m_FUN_106b5c50(A...); bool __thiscall m_FUN_106b5c80(int *param_2); template<class... A> int m_FUN_106b5c80(A...); bool __thiscall m_FUN_106b5ca0(int *param_2); template<class... A> int m_FUN_106b5ca0(A...); bool __thiscall m_FUN_106b5cc0(int *param_2); template<class... A> int m_FUN_106b5cc0(A...); bool __thiscall m_FUN_106b5ce0(int *param_2); template<class... A> int m_FUN_106b5ce0(A...); int __thiscall m_FUN_106b60f0(int param_2); template<class... A> int m_FUN_106b60f0(A...); int __thiscall m_FUN_106b6100(int param_2); template<class... A> int m_FUN_106b6100(A...); int __thiscall m_FUN_106b6110(int param_2); template<class... A> int m_FUN_106b6110(A...); int __thiscall m_FUN_106b6120(int param_2); template<class... A> int m_FUN_106b6120(A...); int __thiscall m_FUN_106b6140(int param_2); template<class... A> int m_FUN_106b6140(A...); undefined4 * __thiscall m_FUN_106b62f0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b62f0(A...); undefined4 * __thiscall m_FUN_106b6390(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b6390(A...); void __thiscall m_FUN_106b6490(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b6490(A...); void __thiscall m_FUN_106b64e0(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106b64e0(A...); void __thiscall m_FUN_106b6520(int *param_2,int param_3); template<class... A> int m_FUN_106b6520(A...); int * __thiscall m_FUN_106b67d0(int param_2); template<class... A> int m_FUN_106b67d0(A...); int * __thiscall m_FUN_106b67f0(int param_2); template<class... A> int m_FUN_106b67f0(A...); void __thiscall m_FUN_106b81d0(int param_2); template<class... A> int m_FUN_106b81d0(A...); void __thiscall m_FUN_106b8200(int param_2); template<class... A> int m_FUN_106b8200(A...); uint __thiscall m_FUN_106b8230(uint param_2); template<class... A> int m_FUN_106b8230(A...); uint __thiscall m_FUN_106b8270(uint param_2); template<class... A> int m_FUN_106b8270(A...); uint __thiscall m_FUN_106b82b0(uint param_2); template<class... A> int m_FUN_106b82b0(A...); uint __thiscall m_FUN_106b82f0(uint param_2); template<class... A> int m_FUN_106b82f0(A...); void __thiscall m_FUN_106b86f0(uint param_2); template<class... A> int m_FUN_106b86f0(A...); void __thiscall m_FUN_106b87e0(uint param_2); template<class... A> int m_FUN_106b87e0(A...); void __thiscall m_FUN_106b8f80(int *param_2,int param_3); template<class... A> int m_FUN_106b8f80(A...); void __thiscall m_FUN_106ba450(int *param_2,int param_3); template<class... A> int m_FUN_106ba450(A...); void __thiscall m_FUN_106ba860(int param_2); template<class... A> int m_FUN_106ba860(A...); void __thiscall m_FUN_106ba960(undefined4 param_2); template<class... A> int m_FUN_106ba960(A...); void __thiscall m_FUN_106ba970(undefined4 param_2); template<class... A> int m_FUN_106ba970(A...); void __thiscall m_FUN_106ba980(undefined4 *param_2); template<class... A> int m_FUN_106ba980(A...); void __thiscall m_FUN_106bb0c0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106bb0c0(A...); void __thiscall m_FUN_106bb170(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106bb170(A...); void __thiscall m_FUN_106bb2d0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106bb2d0(A...); void __thiscall m_FUN_106bb380(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106bb380(A...); void __thiscall m_FUN_106bb3a0(undefined4 *param_2); template<class... A> int m_FUN_106bb3a0(A...); void __thiscall m_FUN_106bb3c0(undefined4 *param_2); template<class... A> int m_FUN_106bb3c0(A...); void __thiscall m_FUN_106bb3d0(undefined4 *param_2); template<class... A> int m_FUN_106bb3d0(A...); void __thiscall m_FUN_106bb400(undefined4 *param_2); template<class... A> int m_FUN_106bb400(A...); void __thiscall m_FUN_106bb600(undefined4 *param_2); template<class... A> int m_FUN_106bb600(A...); void __thiscall m_FUN_106bb610(undefined4 *param_2); template<class... A> int m_FUN_106bb610(A...); };

extern int FUN_100517a8(...);
extern __declspec(dllimport) int __std_exception_destroy(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int fgetc(...);
extern __declspec(dllimport) int get_stream_buffer_pointers(...);
extern __declspec(dllimport) int memchr(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a3180(...);
extern int thunk_FUN_101fdfe0(...);
template<class... A> int __stdcall thunk_FUN_10200aa0(A...);
extern int thunk_FUN_10203dc0(...);
template<class... A> int __stdcall thunk_FUN_10246170(A...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10352a90(...);
extern int thunk_FUN_1036efe0(...);
template<class... A> int __stdcall thunk_FUN_10370f20(A...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d0730(...);
template<class... A> int __stdcall thunk_FUN_103d3340(A...);
extern int thunk_FUN_10478ea0(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_105a05f0(...);
template<class... A> int __stdcall thunk_FUN_105a5110(A...);
template<class... A> int __stdcall thunk_FUN_105a51f0(A...);
template<class... A> int __stdcall thunk_FUN_105a52b0(A...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_10648010(...);
extern int thunk_FUN_106845c0(...);
extern int thunk_FUN_1068dd40(...);
extern int thunk_FUN_1068edf0(...);
extern int thunk_FUN_1068fa70(...);
extern int thunk_FUN_106905e0(...);
template<class... A> int __stdcall thunk_FUN_10694b70(A...);
extern int thunk_FUN_10694f70(...);
extern int thunk_FUN_10699d60(...);
extern int thunk_FUN_1069a360(...);
extern int thunk_FUN_1069bfb0(...);
extern int thunk_FUN_106a48e0(...);
extern int thunk_FUN_106a5620(...);
template<class... A> int __stdcall thunk_FUN_106a9340(A...);
template<class... A> int __stdcall thunk_FUN_106a94b0(A...);
extern int thunk_FUN_106a9bb0(...);
template<class... A> int __stdcall thunk_FUN_106aa5c0(A...);
template<class... A> int __stdcall thunk_FUN_106aaa10(A...);
template<class... A> int __stdcall thunk_FUN_106ab040(A...);
extern int thunk_FUN_106ab5b0(...);
template<class... A> int __stdcall thunk_FUN_106abdc0(A...);
extern int thunk_FUN_106ae320(...);
extern int thunk_FUN_106aec80(...);
template<class... A> int __stdcall thunk_FUN_106b1900(A...);
template<class... A> int __stdcall thunk_FUN_106bb660(A...);
template<class... A> int __stdcall thunk_FUN_106bb670(A...);
extern int thunk_FUN_106bce00(...);
extern int thunk_FUN_106bce70(...);
extern int thunk_FUN_1074ed30(...);
extern int thunk_FUN_1076bff0(...);
extern int thunk_FUN_10783320(...);
template<class... A> int __stdcall thunk_FUN_10bcef80(A...);
extern int thunk_FUN_10eb4020(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
template<class... A> int __stdcall thunk_FUN_10eb4cc0(A...);
template<class... A> int __stdcall thunk_FUN_10eb4d80(A...);
extern int thunk_FUN_10eb4e80(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
extern int thunk_FUN_10f04dc0(...);
extern int thunk_FUN_11068c30(...);
extern int thunk_FUN_1106b1c0(...);
extern int thunk_FUN_110a9ef0(...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_112a7c30(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148b586(...);
extern __declspec(dllimport) int ungetc(...);
extern int DAT_11880fb0;
extern int DAT_12126b84;
extern int DAT_121a2368;
extern int DAT_121a236c;
extern int DAT_121a2370;
extern int DAT_121a2374;
extern int DAT_121a2378;
extern int DAT_121a237c;
extern int DAT_121a2380;
extern int DAT_121a2384;
extern int DAT_121a2388;
extern int DAT_121a238c;
extern int DAT_121a2390;
extern int DAT_121a2394;
extern int DAT_121a2398;
extern int DAT_121a239c;
extern int DAT_121a23a0;
extern int DAT_121a23a4;
extern int DAT_121a23a8;
extern int DAT_121a23ac;
extern int DAT_121a23b0;
extern int DAT_121a23b4;
extern int DAT_121a23b8;
extern int DAT_121a23bc;
extern int DAT_121a23c0;
extern int DAT_121a23c4;
extern int DAT_121a23c8;
extern int DAT_121a23cc;
extern int DAT_121a23d0;
extern int DAT_121a23d4;
extern int DAT_121a23d8;
extern int DAT_121a23dc;
extern int DAT_121a23e0;
extern int DAT_121a23e4;
extern int DAT_121a23e8;
extern int DAT_121a23ec;
extern int DAT_121a23f0;
extern int DAT_121a23f4;
extern int DAT_121a23f8;
extern int DAT_121a23fc;
extern int DAT_121a2400;
extern int DAT_121a2604;
extern int DAT_121a2608;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCDCreateObjectAIOOp;
extern int ghidra_vftable_SCAddMusicServiceLaunchable;
extern int ghidra_vftable_SCAddVoiceServicePopUpLaunchable;
extern int ghidra_vftable_SCAddVoiceServiceTileLaunchable;
extern int ghidra_vftable_SCAmpConfigurationLaunchable;
extern int ghidra_vftable_SCAssetDownloadCallback;
extern int ghidra_vftable_SCAsyncBrowseItem;
extern int ghidra_vftable_SCBTDeviceInfoLaunchable;
extern int ghidra_vftable_SCBTOnlyLaunchable;
extern int ghidra_vftable_SCBaseLaunchable;
extern int ghidra_vftable_SCBondingLaunchable;
extern int ghidra_vftable_SCDiscoveryHistoryStore_Listener;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCFixUnconfiguredLaunchable;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIMusicServiceMenuItem;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIShare;
extern int ghidra_vftable_SCIShareManager;
extern int ghidra_vftable_SCJoinExistingLaunchable;
extern int ghidra_vftable_SCLaunchSoundLabAction;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCMusicServiceCatalogManager_EventSink;
extern int ghidra_vftable_SCMusicServiceCatalogRequest;
extern int ghidra_vftable_SCMusicServiceCatalog_EventSink;
extern int ghidra_vftable_SCMusicServiceFilterLearnMoreActionDescriptor;
extern int ghidra_vftable_SCNewWizController;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCNewWizPage;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizStateType;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCPermissionsLaunchable;
extern int ghidra_vftable_SCProductOnboardingLaunchable;
extern int ghidra_vftable_SCShareBrowseItem;
extern int ghidra_vftable_SCSingleRoomHHOfferLaunchable;
extern int ghidra_vftable_SCSonosRadioHDLaunchable;
extern int ghidra_vftable_SCSonosVoiceOnboardingLaunchable;
extern int ghidra_vftable_SCSubwizState;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCTVSetupLaunchable;
extern int ghidra_vftable_SCTestPoint;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCUpgradeOfferTileLaunchable;
extern int ghidra_vftable_SCUrlGetRequest;
extern int ghidra_vftable_SCUrlRequest;
extern int ghidra_vftable_SCVerifyUrlPostRequest;
extern int ghidra_vftable_SCWifiConfigLaunchable;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_exception;
extern int in_EAX;
extern int uStack_8;
extern undefined1 LAB_1068c09d[];
extern undefined1 LAB_1068c0d1[];
extern undefined1 LAB_1154fc30[];
extern undefined1 LAB_115a83b0[];
extern undefined1 LAB_115d2530[];
extern undefined1 LAB_115e0ff0[];
extern void *ExceptionList;
extern int FUN_10bf0290(...);
extern int FUN_10ebc110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654700(undefined4 *param_1);
template<class... A> int FUN_10654700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654710(undefined4 *param_1);
template<class... A> int FUN_10654710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654720(undefined4 *param_1);
template<class... A> int FUN_10654720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654730(undefined4 *param_1);
template<class... A> int FUN_10654730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654740(undefined4 *param_1);
template<class... A> int FUN_10654740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654750(undefined4 *param_1);
template<class... A> int FUN_10654750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654760(undefined4 *param_1);
template<class... A> int FUN_10654760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654770(undefined4 *param_1);
template<class... A> int FUN_10654770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654780(undefined4 *param_1);
template<class... A> int FUN_10654780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654790(undefined4 *param_1);
template<class... A> int FUN_10654790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547a0(undefined4 *param_1);
template<class... A> int FUN_106547a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547b0(undefined4 *param_1);
template<class... A> int FUN_106547b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547c0(undefined4 *param_1);
template<class... A> int FUN_106547c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547d0(undefined4 *param_1);
template<class... A> int FUN_106547d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547e0(undefined4 *param_1);
template<class... A> int FUN_106547e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547f0(undefined4 *param_1);
template<class... A> int FUN_106547f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654800(undefined4 *param_1);
template<class... A> int FUN_10654800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654810(undefined4 *param_1);
template<class... A> int FUN_10654810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654820(undefined4 *param_1);
template<class... A> int FUN_10654820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654830(undefined4 *param_1);
template<class... A> int FUN_10654830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654840(undefined4 *param_1);
template<class... A> int FUN_10654840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654850(undefined4 *param_1);
template<class... A> int FUN_10654850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654860(undefined4 *param_1);
template<class... A> int FUN_10654860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654870(undefined4 *param_1);
template<class... A> int FUN_10654870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654a40(undefined4 *param_1);
template<class... A> int FUN_10654a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654a70(undefined4 *param_1);
template<class... A> int FUN_10654a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654aa0(undefined4 *param_1);
template<class... A> int FUN_10654aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654ad0(undefined4 *param_1);
template<class... A> int FUN_10654ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b00(undefined4 *param_1);
template<class... A> int FUN_10654b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b30(undefined4 *param_1);
template<class... A> int FUN_10654b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b60(undefined4 *param_1);
template<class... A> int FUN_10654b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b90(undefined4 *param_1);
template<class... A> int FUN_10654b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654bc0(undefined4 *param_1);
template<class... A> int FUN_10654bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654bf0(undefined4 *param_1);
template<class... A> int FUN_10654bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c20(undefined4 *param_1);
template<class... A> int FUN_10654c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c50(undefined4 *param_1);
template<class... A> int FUN_10654c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c80(undefined4 *param_1);
template<class... A> int FUN_10654c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654cb0(undefined4 *param_1);
template<class... A> int FUN_10654cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654ce0(undefined4 *param_1);
template<class... A> int FUN_10654ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d10(undefined4 *param_1);
template<class... A> int FUN_10654d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d40(undefined4 *param_1);
template<class... A> int FUN_10654d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d70(undefined4 *param_1);
template<class... A> int FUN_10654d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654da0(undefined4 *param_1);
template<class... A> int FUN_10654da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654dd0(undefined4 *param_1);
template<class... A> int FUN_10654dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654e00(undefined4 *param_1);
template<class... A> int FUN_10654e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654e30(undefined4 *param_1);
template<class... A> int FUN_10654e30(A...);

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655280(undefined4 *param_1);
template<class... A> int FUN_10655280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106552b0(undefined4 *param_1);
template<class... A> int FUN_106552b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106552d0(undefined4 *param_1);
template<class... A> int FUN_106552d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655300(undefined4 *param_1);
template<class... A> int FUN_10655300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106553c0(undefined4 *param_1);
template<class... A> int FUN_106553c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106553e0(undefined4 *param_1);
template<class... A> int FUN_106553e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655410(undefined4 *param_1);
template<class... A> int FUN_10655410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655430(undefined4 *param_1);
template<class... A> int FUN_10655430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655460(undefined4 *param_1);
template<class... A> int FUN_10655460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655480(undefined4 *param_1);
template<class... A> int FUN_10655480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106554b0(undefined4 *param_1);
template<class... A> int FUN_106554b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106554d0(undefined4 *param_1);
template<class... A> int FUN_106554d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655500(undefined4 *param_1);
template<class... A> int FUN_10655500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655520(undefined4 *param_1);
template<class... A> int FUN_10655520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ template<class... A> int FUN_10655550(A...);
template<class... A> int FUN_10655550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655570(undefined4 *param_1);
template<class... A> int FUN_10655570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ template<class... A> int FUN_106555a0(A...);
template<class... A> int FUN_106555a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106555c0(undefined4 *param_1);
template<class... A> int FUN_106555c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106555f0(undefined4 *param_1);
template<class... A> int FUN_106555f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655610(undefined4 *param_1);
template<class... A> int FUN_10655610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655640(undefined4 *param_1);
template<class... A> int FUN_10655640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655660(undefined4 *param_1);
template<class... A> int FUN_10655660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655690(undefined4 *param_1);
template<class... A> int FUN_10655690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655760(undefined4 *param_1);
template<class... A> int FUN_10655760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655780(undefined4 *param_1);
template<class... A> int FUN_10655780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106557b0(undefined4 *param_1);
template<class... A> int FUN_106557b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106557d0(undefined4 *param_1);
template<class... A> int FUN_106557d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655800(undefined4 *param_1);
template<class... A> int FUN_10655800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655820(undefined4 *param_1);
template<class... A> int FUN_10655820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655850(undefined4 *param_1);
template<class... A> int FUN_10655850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655870(undefined4 *param_1);
template<class... A> int FUN_10655870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106558a0(undefined4 *param_1);
template<class... A> int FUN_106558a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106558c0(undefined4 *param_1);
template<class... A> int FUN_106558c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106558f0(undefined4 *param_1);
template<class... A> int FUN_106558f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655910(undefined4 *param_1);
template<class... A> int FUN_10655910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655940(undefined4 *param_1);
template<class... A> int FUN_10655940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655960(undefined4 *param_1);
template<class... A> int FUN_10655960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655990(undefined4 *param_1);
template<class... A> int FUN_10655990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106559b0(undefined4 *param_1);
template<class... A> int FUN_106559b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106559e0(undefined4 *param_1);
template<class... A> int FUN_106559e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a00(undefined4 *param_1);
template<class... A> int FUN_10655a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a30(undefined4 *param_1);
template<class... A> int FUN_10655a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a50(undefined4 *param_1);
template<class... A> int FUN_10655a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a80(undefined4 *param_1);
template<class... A> int FUN_10655a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655b40(undefined4 *param_1);
template<class... A> int FUN_10655b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655c10(undefined4 *param_1);
template<class... A> int FUN_10655c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655c30(undefined4 *param_1);
template<class... A> int FUN_10655c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655c60(undefined4 *param_1);
template<class... A> int FUN_10655c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655d30(undefined4 *param_1);
template<class... A> int FUN_10655d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655d50(undefined4 *param_1);
template<class... A> int FUN_10655d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655d80(undefined4 *param_1);
template<class... A> int FUN_10655d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655da0(undefined4 *param_1);
template<class... A> int FUN_10655da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655dd0(undefined4 *param_1);
template<class... A> int FUN_10655dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655df0(undefined4 *param_1);
template<class... A> int FUN_10655df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e20(undefined4 *param_1);
template<class... A> int FUN_10655e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e40(undefined4 *param_1);
template<class... A> int FUN_10655e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e70(undefined4 *param_1);
template<class... A> int FUN_10655e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e90(undefined4 *param_1);
template<class... A> int FUN_10655e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655ec0(undefined4 *param_1);
template<class... A> int FUN_10655ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655fa0(undefined4 *param_1);
template<class... A> int FUN_10655fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655fc0(undefined4 *param_1);
template<class... A> int FUN_10655fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655ff0(undefined4 *param_1);
template<class... A> int FUN_10655ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656010(undefined4 *param_1);
template<class... A> int FUN_10656010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656040(undefined4 *param_1);
template<class... A> int FUN_10656040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656060(undefined4 *param_1);
template<class... A> int FUN_10656060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656090(undefined4 *param_1);
template<class... A> int FUN_10656090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106560b0(undefined4 *param_1);
template<class... A> int FUN_106560b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106560e0(undefined4 *param_1);
template<class... A> int FUN_106560e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656100(undefined4 *param_1);
template<class... A> int FUN_10656100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656130(undefined4 *param_1);
template<class... A> int FUN_10656130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b40(undefined4 *param_1);
template<class... A> int FUN_10656b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b50(undefined4 *param_1);
template<class... A> int FUN_10656b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b60(undefined4 *param_1);
template<class... A> int FUN_10656b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b70(undefined4 *param_1);
template<class... A> int FUN_10656b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b80(undefined4 *param_1);
template<class... A> int FUN_10656b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10656b90(undefined4 *param_1);
template<class... A> int FUN_10656b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __fastcall FUN_10656ba0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10656ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1065a470(undefined4 *param_1);
template<class... A> int FUN_1065a470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1065a4a0(undefined4 *param_1);
template<class... A> int FUN_1065a4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1065ab80(int param_1);
template<class... A> int FUN_1065ab80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065abc0(undefined4 param_1);
template<class... A> int FUN_1065abc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065abd0(undefined4 param_1);
template<class... A> int FUN_1065abd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065abe0(undefined4 param_1);
template<class... A> int FUN_1065abe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065abf0(undefined4 param_1);
template<class... A> int FUN_1065abf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac00(undefined4 param_1);
template<class... A> int FUN_1065ac00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac10(undefined4 param_1);
template<class... A> int FUN_1065ac10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac20(undefined4 param_1);
template<class... A> int FUN_1065ac20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac30(undefined4 param_1);
template<class... A> int FUN_1065ac30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac40(undefined4 param_1);
template<class... A> int FUN_1065ac40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065ac60(int param_1);
template<class... A> int FUN_1065ac60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1065ac70(int param_1);
template<class... A> int FUN_1065ac70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1065ace0(undefined4 *param_1);
template<class... A> int FUN_1065ace0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1065af80(uint param_1);
template<class... A> int FUN_1065af80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1065b000(uint param_1);
template<class... A> int FUN_1065b000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1065b100(int param_1);
template<class... A> int FUN_1065b100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1065e690(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1065e690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1065e6e0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1065e6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1065e780(undefined4 *param_1);
template<class... A> int FUN_1065e780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1065e790(int param_1);
template<class... A> int FUN_1065e790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1066d530(int param_1);
template<class... A> int FUN_1066d530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1066e440(int param_1);
template<class... A> int FUN_1066e440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677840(void);
template<class... A> int FUN_10677840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677850(void);
template<class... A> int FUN_10677850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677860(void);
template<class... A> int FUN_10677860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677870(void);
template<class... A> int FUN_10677870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677880(void);
template<class... A> int FUN_10677880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677890(void);
template<class... A> int FUN_10677890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778a0(void);
template<class... A> int FUN_106778a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778b0(void);
template<class... A> int FUN_106778b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778c0(void);
template<class... A> int FUN_106778c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778d0(void);
template<class... A> int FUN_106778d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778e0(void);
template<class... A> int FUN_106778e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106778f0(void);
template<class... A> int FUN_106778f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677900(void);
template<class... A> int FUN_10677900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677910(void);
template<class... A> int FUN_10677910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677920(void);
template<class... A> int FUN_10677920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677930(void);
template<class... A> int FUN_10677930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677940(void);
template<class... A> int FUN_10677940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677950(void);
template<class... A> int FUN_10677950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677960(void);
template<class... A> int FUN_10677960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677970(void);
template<class... A> int FUN_10677970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677980(void);
template<class... A> int FUN_10677980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677990(void);
template<class... A> int FUN_10677990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779a0(void);
template<class... A> int FUN_106779a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779b0(void);
template<class... A> int FUN_106779b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779c0(void);
template<class... A> int FUN_106779c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779d0(void);
template<class... A> int FUN_106779d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779e0(void);
template<class... A> int FUN_106779e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106779f0(void);
template<class... A> int FUN_106779f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a00(void);
template<class... A> int FUN_10677a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a10(void);
template<class... A> int FUN_10677a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a20(void);
template<class... A> int FUN_10677a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a30(void);
template<class... A> int FUN_10677a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a40(void);
template<class... A> int FUN_10677a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a50(void);
template<class... A> int FUN_10677a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a60(void);
template<class... A> int FUN_10677a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a70(void);
template<class... A> int FUN_10677a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a80(void);
template<class... A> int FUN_10677a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677a90(void);
template<class... A> int FUN_10677a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10677aa0(void);
template<class... A> int FUN_10677aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ab0(int param_1);
template<class... A> int FUN_10677ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ac0(int param_1);
template<class... A> int FUN_10677ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ad0(int param_1);
template<class... A> int FUN_10677ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ae0(int param_1);
template<class... A> int FUN_10677ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677af0(int param_1);
template<class... A> int FUN_10677af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b00(int param_1);
template<class... A> int FUN_10677b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b10(int param_1);
template<class... A> int FUN_10677b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b20(int param_1);
template<class... A> int FUN_10677b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b30(int param_1);
template<class... A> int FUN_10677b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b40(int param_1);
template<class... A> int FUN_10677b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b50(int param_1);
template<class... A> int FUN_10677b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b60(int param_1);
template<class... A> int FUN_10677b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b70(int param_1);
template<class... A> int FUN_10677b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b80(int param_1);
template<class... A> int FUN_10677b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677b90(int param_1);
template<class... A> int FUN_10677b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ba0(int param_1);
template<class... A> int FUN_10677ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677bb0(int param_1);
template<class... A> int FUN_10677bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677bc0(int param_1);
template<class... A> int FUN_10677bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677bd0(int param_1);
template<class... A> int FUN_10677bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677be0(int param_1);
template<class... A> int FUN_10677be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677bf0(int param_1);
template<class... A> int FUN_10677bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c00(int param_1);
template<class... A> int FUN_10677c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c10(int param_1);
template<class... A> int FUN_10677c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c20(int param_1);
template<class... A> int FUN_10677c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c30(int param_1);
template<class... A> int FUN_10677c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c40(int param_1);
template<class... A> int FUN_10677c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c50(int param_1);
template<class... A> int FUN_10677c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c60(int param_1);
template<class... A> int FUN_10677c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c70(int param_1);
template<class... A> int FUN_10677c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c80(int param_1);
template<class... A> int FUN_10677c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677c90(int param_1);
template<class... A> int FUN_10677c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ca0(int param_1);
template<class... A> int FUN_10677ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677cb0(int param_1);
template<class... A> int FUN_10677cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677cc0(int param_1);
template<class... A> int FUN_10677cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677cd0(int param_1);
template<class... A> int FUN_10677cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ce0(int param_1);
template<class... A> int FUN_10677ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677cf0(int param_1);
template<class... A> int FUN_10677cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10677d10(int param_1);
template<class... A> int FUN_10677d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d20(int param_1);
template<class... A> int FUN_10677d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d30(int param_1);
template<class... A> int FUN_10677d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d40(int param_1);
template<class... A> int FUN_10677d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d50(int param_1);
template<class... A> int FUN_10677d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d60(int param_1);
template<class... A> int FUN_10677d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d70(int param_1);
template<class... A> int FUN_10677d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d80(int param_1);
template<class... A> int FUN_10677d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677d90(int param_1);
template<class... A> int FUN_10677d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677da0(int param_1);
template<class... A> int FUN_10677da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677db0(int param_1);
template<class... A> int FUN_10677db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677dc0(int param_1);
template<class... A> int FUN_10677dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677dd0(int param_1);
template<class... A> int FUN_10677dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677de0(int param_1);
template<class... A> int FUN_10677de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677df0(int param_1);
template<class... A> int FUN_10677df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e00(int param_1);
template<class... A> int FUN_10677e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e10(int param_1);
template<class... A> int FUN_10677e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e20(int param_1);
template<class... A> int FUN_10677e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e30(int param_1);
template<class... A> int FUN_10677e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e40(int param_1);
template<class... A> int FUN_10677e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e50(int param_1);
template<class... A> int FUN_10677e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e60(int param_1);
template<class... A> int FUN_10677e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e70(int param_1);
template<class... A> int FUN_10677e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e80(int param_1);
template<class... A> int FUN_10677e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677e90(int param_1);
template<class... A> int FUN_10677e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ea0(int param_1);
template<class... A> int FUN_10677ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677eb0(int param_1);
template<class... A> int FUN_10677eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ec0(int param_1);
template<class... A> int FUN_10677ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ed0(int param_1);
template<class... A> int FUN_10677ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ee0(int param_1);
template<class... A> int FUN_10677ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677ef0(int param_1);
template<class... A> int FUN_10677ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f00(int param_1);
template<class... A> int FUN_10677f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f10(int param_1);
template<class... A> int FUN_10677f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f20(int param_1);
template<class... A> int FUN_10677f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f30(int param_1);
template<class... A> int FUN_10677f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f40(int param_1);
template<class... A> int FUN_10677f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f50(int param_1);
template<class... A> int FUN_10677f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f60(int param_1);
template<class... A> int FUN_10677f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f70(int param_1);
template<class... A> int FUN_10677f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f80(int param_1);
template<class... A> int FUN_10677f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677f90(int param_1);
template<class... A> int FUN_10677f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677fa0(int param_1);
template<class... A> int FUN_10677fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677fb0(int param_1);
template<class... A> int FUN_10677fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677fc0(int param_1);
template<class... A> int FUN_10677fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10677fd0(int param_1);
template<class... A> int FUN_10677fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10678940(int *param_1);
template<class... A> int FUN_10678940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10678960(int *param_1);
template<class... A> int FUN_10678960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1067efa0(undefined4 *param_1);
template<class... A> int FUN_1067efa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1067efb0(undefined4 *param_1);
template<class... A> int FUN_1067efb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1067efc0(undefined4 *param_1);
template<class... A> int FUN_1067efc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1067f050(undefined4 *param_1);
template<class... A> int FUN_1067f050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1067f080(undefined4 *param_1);
template<class... A> int FUN_1067f080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1067f0b0(undefined4 *param_1);
template<class... A> int FUN_1067f0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1067f0e0(undefined4 *param_1);
template<class... A> int FUN_1067f0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1067f120(undefined4 param_1);
template<class... A> int FUN_1067f120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1067f130(undefined4 param_1);
template<class... A> int FUN_1067f130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1067f370(int *param_1);
template<class... A> int FUN_1067f370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1067f490(undefined4 param_1);
template<class... A> int FUN_1067f490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1067f590(int param_1);
template<class... A> int FUN_1067f590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1067f990(int param_1);
template<class... A> int FUN_1067f990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1067f9a0(undefined4 *param_1);
template<class... A> int FUN_1067f9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10680540(undefined4 *param_1);
template<class... A> int FUN_10680540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106805d0(undefined4 *param_1);
template<class... A> int FUN_106805d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106813e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106813e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10681400(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10681400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10681420(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10681420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106815e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_106815e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10681600(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10681600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10681870(int param_1);
template<class... A> int FUN_10681870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681880(void);
template<class... A> int FUN_10681880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681890(void);
template<class... A> int FUN_10681890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106818b0(void);
template<class... A> int FUN_106818b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106818d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106818d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106818e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106818e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106818f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106818f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681900(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10681900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681910(void);
template<class... A> int FUN_10681910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681920(void);
template<class... A> int FUN_10681920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10682460(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10682460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10682480(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10682480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106825c0(undefined4 *param_1);
template<class... A> int FUN_106825c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106825d0(undefined4 *param_1);
template<class... A> int FUN_106825d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106825e0(undefined4 param_1);
template<class... A> int FUN_106825e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106825f0(undefined4 param_1);
template<class... A> int FUN_106825f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10682600(int param_1,SCStr *param_2);
template<class... A> int FUN_10682600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10682630(int param_1,SCStr *param_2);
template<class... A> int FUN_10682630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10682660(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10682660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682820(undefined4 param_1);
template<class... A> int FUN_10682820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682970(undefined4 param_1);
template<class... A> int FUN_10682970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682980(undefined4 param_1);
template<class... A> int FUN_10682980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682990(undefined4 param_1);
template<class... A> int FUN_10682990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829a0(undefined4 param_1);
template<class... A> int FUN_106829a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829b0(undefined4 param_1);
template<class... A> int FUN_106829b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829c0(undefined4 param_1);
template<class... A> int FUN_106829c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829d0(undefined4 param_1);
template<class... A> int FUN_106829d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829e0(undefined4 param_1);
template<class... A> int FUN_106829e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106829f0(undefined4 param_1);
template<class... A> int FUN_106829f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682a00(undefined4 param_1);
template<class... A> int FUN_10682a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682a10(undefined4 param_1);
template<class... A> int FUN_10682a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682a20(undefined4 param_1);
template<class... A> int FUN_10682a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10682a30(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10682a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10682a60(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10682a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10682a90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10682a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10682ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10682ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10682af0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10682af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682ce0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10682ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10682d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10682d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10682d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d60(undefined4 param_1);
template<class... A> int FUN_10682d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d70(undefined4 param_1);
template<class... A> int FUN_10682d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d80(undefined4 param_1);
template<class... A> int FUN_10682d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682d90(undefined4 param_1);
template<class... A> int FUN_10682d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682da0(undefined4 param_1);
template<class... A> int FUN_10682da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682db0(undefined4 param_1);
template<class... A> int FUN_10682db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682dc0(undefined4 param_1);
template<class... A> int FUN_10682dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682dd0(undefined4 param_1);
template<class... A> int FUN_10682dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682de0(undefined4 param_1);
template<class... A> int FUN_10682de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682df0(undefined4 param_1);
template<class... A> int FUN_10682df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682e00(undefined4 param_1);
template<class... A> int FUN_10682e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682e10(undefined4 param_1);
template<class... A> int FUN_10682e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10682e20(void);
template<class... A> int FUN_10682e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682f80(undefined4 param_1);
template<class... A> int FUN_10682f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683070(undefined4 *param_1);
template<class... A> int FUN_10683070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683290(undefined4 *param_1);
template<class... A> int FUN_10683290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106832b0(undefined4 *param_1);
template<class... A> int FUN_106832b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683310(undefined4 *param_1);
template<class... A> int FUN_10683310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10683330(undefined4 param_1);
template<class... A> int FUN_10683330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10683340(undefined4 param_1);
template<class... A> int FUN_10683340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10683350(undefined4 param_1);
template<class... A> int FUN_10683350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683380(undefined4 *param_1);
template<class... A> int FUN_10683380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683580(undefined4 *param_1);
template<class... A> int FUN_10683580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10684370(undefined4 *param_1);
template<class... A> int FUN_10684370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106846b0(undefined4 *param_1);
template<class... A> int FUN_106846b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10684910(undefined4 *param_1);
template<class... A> int FUN_10684910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10684920(undefined4 *param_1);
template<class... A> int FUN_10684920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10684930(int *param_1);
template<class... A> int FUN_10684930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10684940(int param_1);
template<class... A> int FUN_10684940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10684950(undefined4 *param_1);
template<class... A> int FUN_10684950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10684960(undefined4 *param_1);
template<class... A> int FUN_10684960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10684970(int *param_1);
template<class... A> int FUN_10684970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10684980(int *param_1);
template<class... A> int FUN_10684980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10684990(int *param_1);
template<class... A> int FUN_10684990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106849a0(int *param_1);
template<class... A> int FUN_106849a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106849b0(undefined4 *param_1);
template<class... A> int FUN_106849b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106849c0(undefined4 *param_1);
template<class... A> int FUN_106849c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10684b90(int *param_1);
template<class... A> int FUN_10684b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10684ba0(int *param_1);
template<class... A> int FUN_10684ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10684fd0(undefined4 *param_1);
template<class... A> int FUN_10684fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685000(undefined4 *param_1);
template<class... A> int FUN_10685000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685140(int param_1);
template<class... A> int FUN_10685140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685160(int param_1);
template<class... A> int FUN_10685160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10685180(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10685180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106851b0(undefined4 param_1);
template<class... A> int FUN_106851b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106851c0(undefined4 param_1);
template<class... A> int FUN_106851c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106851d0(undefined4 param_1);
template<class... A> int FUN_106851d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106851e0(undefined4 param_1);
template<class... A> int FUN_106851e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106851f0(undefined4 param_1);
template<class... A> int FUN_106851f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685200(undefined4 param_1);
template<class... A> int FUN_10685200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685210(undefined4 param_1);
template<class... A> int FUN_10685210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685220(undefined4 param_1);
template<class... A> int FUN_10685220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685230(undefined4 param_1);
template<class... A> int FUN_10685230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685240(undefined4 param_1);
template<class... A> int FUN_10685240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685250(undefined4 param_1);
template<class... A> int FUN_10685250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685260(undefined4 param_1);
template<class... A> int FUN_10685260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685270(undefined4 param_1);
template<class... A> int FUN_10685270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685280(undefined4 param_1);
template<class... A> int FUN_10685280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685290(undefined4 param_1);
template<class... A> int FUN_10685290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852a0(undefined4 param_1);
template<class... A> int FUN_106852a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852b0(undefined4 param_1);
template<class... A> int FUN_106852b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852c0(undefined4 param_1);
template<class... A> int FUN_106852c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852d0(undefined4 param_1);
template<class... A> int FUN_106852d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852e0(undefined4 param_1);
template<class... A> int FUN_106852e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106852f0(undefined4 param_1);
template<class... A> int FUN_106852f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10685900(int param_1);
template<class... A> int FUN_10685900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10685930(int *param_1);
template<class... A> int FUN_10685930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10685960(int *param_1);
template<class... A> int FUN_10685960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10685990(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10685990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106859a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106859a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106859b0(int param_1);
template<class... A> int FUN_106859b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106859c0(int param_1);
template<class... A> int FUN_106859c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106859d0(undefined4 *param_1);
template<class... A> int FUN_106859d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685d40(uint param_1);
template<class... A> int FUN_10685d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685dc0(uint param_1);
template<class... A> int FUN_10685dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685e40(uint param_1);
template<class... A> int FUN_10685e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10685f20(undefined4 *param_1);
template<class... A> int FUN_10685f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10685f40(int *param_1);
template<class... A> int FUN_10685f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685f80(int param_1);
template<class... A> int FUN_10685f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10686260(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10686260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106862b0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_106862b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10686300(int param_1,int param_2);
template<class... A> int FUN_10686300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10686360(int param_1,int param_2);
template<class... A> int FUN_10686360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10686410(int param_1);
template<class... A> int FUN_10686410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10686430(int param_1);
template<class... A> int FUN_10686430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10687200(void);
template<class... A> int FUN_10687200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687210(void);
template<class... A> int FUN_10687210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687220(void);
template<class... A> int FUN_10687220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687230(void);
template<class... A> int FUN_10687230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687240(void);
template<class... A> int FUN_10687240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687250(void);
template<class... A> int FUN_10687250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10687260(void);
template<class... A> int FUN_10687260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106872a0(undefined4 param_1);
template<class... A> int FUN_106872a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106872b0(undefined4 param_1);
template<class... A> int FUN_106872b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10687760(undefined4 *param_1);
template<class... A> int FUN_10687760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10687770(undefined4 *param_1);
template<class... A> int FUN_10687770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10687a10(undefined4 *param_1);
template<class... A> int FUN_10687a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10687d10(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10687d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10687d50(void);
template<class... A> int FUN_10687d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10687d60(void);
template<class... A> int FUN_10687d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10687e50(undefined4 *param_1);
template<class... A> int FUN_10687e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106880e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106880e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106880f0(undefined4 *param_1);
template<class... A> int FUN_106880f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10688100(undefined4 *param_1);
template<class... A> int FUN_10688100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688ad0(undefined4 *param_1);
template<class... A> int FUN_10688ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688b00(undefined4 *param_1);
template<class... A> int FUN_10688b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688b10(undefined4 *param_1);
template<class... A> int FUN_10688b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688c90(undefined4 *param_1);
template<class... A> int FUN_10688c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10688e70(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10688e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10688eb0(int *param_1);
template<class... A> int FUN_10688eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10688ec0(int param_1);
template<class... A> int FUN_10688ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10689680(void);
template<class... A> int FUN_10689680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1068a160(undefined4 *param_1);
template<class... A> int FUN_1068a160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_1068a180(SCStr *param_1);
template<class... A> int __stdcall FUN_1068a180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1068a730(int param_1);
template<class... A> int FUN_1068a730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1068ad80(void);
template<class... A> int FUN_1068ad80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1068ad90(void);
template<class... A> int FUN_1068ad90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1068b960(undefined4 *param_1);
template<class... A> int FUN_1068b960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068bea0(void);
template<class... A> int FUN_1068bea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068bfe0(undefined4 *param_1);
template<class... A> int FUN_1068bfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1068c190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c1b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1068c1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c1d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1068c1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c370(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1068c370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c390(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1068c390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c3b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1068c3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1068c3d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1068c3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1068c3e0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1068c3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1068c650(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1068c650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1068c770(int param_1);
template<class... A> int FUN_1068c770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c890(void);
template<class... A> int FUN_1068c890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c8a0(void);
template<class... A> int FUN_1068c8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c8b0(void);
template<class... A> int FUN_1068c8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c8e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1068c8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c8f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1068c8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c900(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1068c900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c910(void);
template<class... A> int FUN_1068c910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068c920(void);
template<class... A> int FUN_1068c920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068d530(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_1068d530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068d570(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1068d570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068d590(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1068d590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d5b0(undefined4 *param_1);
template<class... A> int FUN_1068d5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d5c0(undefined4 *param_1);
template<class... A> int FUN_1068d5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d5d0(undefined4 *param_1);
template<class... A> int FUN_1068d5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d5e0(undefined4 *param_1);
template<class... A> int FUN_1068d5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d5f0(undefined4 *param_1);
template<class... A> int FUN_1068d5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d600(undefined4 *param_1);
template<class... A> int FUN_1068d600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068d610(undefined4 param_1);
template<class... A> int FUN_1068d610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068d7d0(int param_1,int param_2,int param_3,undefined4 param_4);
template<class... A> int FUN_1068d7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068dc50(undefined4 param_1);
template<class... A> int FUN_1068dc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1068ddc0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_1068ddc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1068de40(int param_1);
template<class... A> int FUN_1068de40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068ede0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_1068ede0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068f030(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_1068f030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1068f1c0(int param_1);
template<class... A> int FUN_1068f1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068f4c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1068f4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068f910(undefined4 param_1);
template<class... A> int FUN_1068f910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd00(undefined4 param_1);
template<class... A> int FUN_1068fd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd10(undefined4 param_1);
template<class... A> int FUN_1068fd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd20(undefined4 param_1);
template<class... A> int FUN_1068fd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd40(undefined4 param_1);
template<class... A> int FUN_1068fd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd50(undefined4 param_1);
template<class... A> int FUN_1068fd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd60(undefined4 param_1);
template<class... A> int FUN_1068fd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd70(undefined4 param_1);
template<class... A> int FUN_1068fd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd80(undefined4 param_1);
template<class... A> int FUN_1068fd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1068fd90(undefined4 param_1);
template<class... A> int FUN_1068fd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068fda0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_1068fda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068fdb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
template<class... A> int FUN_1068fdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068feb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1068feb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068fee0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1068fee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068ff10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1068ff10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068ff40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1068ff40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068ff70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1068ff70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068ffa0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1068ffa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10690130(void);
template<class... A> int FUN_10690130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690580(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10690580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106905a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106905a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106905c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106905c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106906e0(undefined4 param_1);
template<class... A> int FUN_106906e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106906f0(undefined4 param_1);
template<class... A> int FUN_106906f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690700(undefined4 param_1);
template<class... A> int FUN_10690700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690710(undefined4 param_1);
template<class... A> int FUN_10690710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690720(undefined4 param_1);
template<class... A> int FUN_10690720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690730(undefined4 param_1);
template<class... A> int FUN_10690730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690740(undefined4 param_1);
template<class... A> int FUN_10690740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690750(undefined4 param_1);
template<class... A> int FUN_10690750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690770(undefined4 param_1);
template<class... A> int FUN_10690770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690780(undefined4 param_1);
template<class... A> int FUN_10690780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690790(undefined4 param_1);
template<class... A> int FUN_10690790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106907a0(undefined4 param_1);
template<class... A> int FUN_106907a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106907b0(undefined4 param_1);
template<class... A> int FUN_106907b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106907c0(undefined4 param_1);
template<class... A> int FUN_106907c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106907d0(undefined4 param_1);
template<class... A> int FUN_106907d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106907e0(undefined4 param_1);
template<class... A> int FUN_106907e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690800(undefined4 param_1);
template<class... A> int FUN_10690800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690810(undefined4 param_1);
template<class... A> int FUN_10690810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690820(undefined4 param_1);
template<class... A> int FUN_10690820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690830(undefined4 param_1);
template<class... A> int FUN_10690830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690970(undefined4 param_1);
template<class... A> int FUN_10690970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10690990(undefined4 param_1);
template<class... A> int FUN_10690990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106909a0(undefined4 param_1);
template<class... A> int FUN_106909a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106909b0(undefined4 param_1);
template<class... A> int FUN_106909b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106909c0(undefined4 param_1);
template<class... A> int FUN_106909c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10690b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10690b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10690de0(undefined4 param_1);
template<class... A> int FUN_10690de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10690df0(int param_1);
template<class... A> int FUN_10690df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10690f10(undefined4 *param_1);
template<class... A> int FUN_10690f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10690fc0(undefined4 *param_1);
template<class... A> int FUN_10690fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691000(undefined4 *param_1);
template<class... A> int FUN_10691000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691040(undefined4 *param_1);
template<class... A> int FUN_10691040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691060(undefined4 *param_1);
template<class... A> int FUN_10691060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10691080(undefined4 param_1);
template<class... A> int FUN_10691080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10691090(undefined4 param_1);
template<class... A> int FUN_10691090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106910a0(undefined4 param_1);
template<class... A> int FUN_106910a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106910b0(undefined4 param_1);
template<class... A> int FUN_106910b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106913c0(undefined4 *param_1);
template<class... A> int FUN_106913c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691420(undefined4 *param_1);
template<class... A> int FUN_10691420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691540(undefined4 *param_1);
template<class... A> int FUN_10691540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10691560(undefined1 *param_1);
template<class... A> int FUN_10691560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10691870(undefined4 *param_1);
template<class... A> int FUN_10691870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10692570(void);
template<class... A> int FUN_10692570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106928b0(int *param_1);
template<class... A> int FUN_106928b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106929a0(int param_1);
template<class... A> int FUN_106929a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10692ae0(undefined4 *param_1);
template<class... A> int FUN_10692ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10692af0(int param_1);
template<class... A> int FUN_10692af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10692b00(int *param_1);
template<class... A> int FUN_10692b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10692b10(int *param_1);
template<class... A> int FUN_10692b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10692b20(int *param_1);
template<class... A> int FUN_10692b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10692b30(int *param_1);
template<class... A> int FUN_10692b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10692b40(undefined4 param_1);
template<class... A> int FUN_10692b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10692b50(undefined4 *param_1);
template<class... A> int FUN_10692b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10692b60(undefined4 *param_1);
template<class... A> int FUN_10692b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10692b70(undefined4 param_1);
template<class... A> int FUN_10692b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10692b80(int *param_1);
template<class... A> int FUN_10692b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106931c0(int param_1);
template<class... A> int FUN_106931c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10693720(undefined4 *param_1);
template<class... A> int FUN_10693720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10693b80(int param_1);
template<class... A> int FUN_10693b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10693ba0(float *param_1);
template<class... A> int FUN_10693ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10693e70(int param_1);
template<class... A> int FUN_10693e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10693e80(undefined4 param_1);
template<class... A> int FUN_10693e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694060(undefined4 param_1);
template<class... A> int FUN_10694060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694070(undefined4 param_1);
template<class... A> int FUN_10694070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694080(undefined4 param_1);
template<class... A> int FUN_10694080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694090(undefined4 param_1);
template<class... A> int FUN_10694090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940a0(undefined4 param_1);
template<class... A> int FUN_106940a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940b0(undefined4 param_1);
template<class... A> int FUN_106940b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940c0(undefined4 param_1);
template<class... A> int FUN_106940c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940d0(undefined4 param_1);
template<class... A> int FUN_106940d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940e0(undefined4 param_1);
template<class... A> int FUN_106940e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106940f0(undefined4 param_1);
template<class... A> int FUN_106940f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694100(undefined4 param_1);
template<class... A> int FUN_10694100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694110(undefined4 param_1);
template<class... A> int FUN_10694110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694120(undefined4 param_1);
template<class... A> int FUN_10694120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694130(undefined4 param_1);
template<class... A> int FUN_10694130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694140(int param_1);
template<class... A> int FUN_10694140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106941d0(int param_1);
template<class... A> int FUN_106941d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106941e0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_106941e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106941f0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_106941f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694200(undefined4 param_1);
template<class... A> int FUN_10694200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694210(undefined4 param_1);
template<class... A> int FUN_10694210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106942a0(void);
template<class... A> int FUN_106942a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106942b0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106942b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106942c0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106942c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106942d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106942d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694390(int param_1);
template<class... A> int FUN_10694390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106943a0(undefined4 *param_1);
template<class... A> int FUN_106943a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106943b0(undefined4 *param_1);
template<class... A> int FUN_106943b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106943c0(undefined4 *param_1);
template<class... A> int FUN_106943c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106943d0(undefined4 *param_1);
template<class... A> int FUN_106943d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10694560(int *param_1);
template<class... A> int FUN_10694560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10694d80(int param_1,int param_2,int param_3);
template<class... A> int FUN_10694d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694dc0(undefined4 *param_1);
template<class... A> int FUN_10694dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10694dd0(undefined4 *param_1);
template<class... A> int FUN_10694dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694e10(uint param_1);
template<class... A> int FUN_10694e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694e80(uint param_1);
template<class... A> int FUN_10694e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694f00(uint param_1);
template<class... A> int FUN_10694f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694fe0(uint param_1);
template<class... A> int FUN_10694fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106950c0(int param_1);
template<class... A> int FUN_106950c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10695290(int *param_1);
template<class... A> int FUN_10695290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106952b0(int *param_1);
template<class... A> int FUN_106952b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106952c0(int *param_1);
template<class... A> int FUN_106952c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106952d0(int param_1);
template<class... A> int FUN_106952d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10695370(int *param_1);
template<class... A> int FUN_10695370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106953c0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_106953c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10695410(int param_1,int param_2);
template<class... A> int FUN_10695410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106954b0(int param_1,int param_2);
template<class... A> int FUN_106954b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10695500(undefined4 *param_1);
template<class... A> int FUN_10695500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10695510(undefined4 *param_1);
template<class... A> int FUN_10695510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106964e0(int param_1);
template<class... A> int FUN_106964e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106968e0(int *param_1);
template<class... A> int FUN_106968e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106968f0(int *param_1);
template<class... A> int FUN_106968f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10696900(int *param_1);
template<class... A> int FUN_10696900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10696910(int *param_1);
template<class... A> int FUN_10696910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10696920(int *param_1);
template<class... A> int FUN_10696920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10696930(int *param_1);
template<class... A> int FUN_10696930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10696940(float *param_1);
template<class... A> int FUN_10696940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696950(void);
template<class... A> int FUN_10696950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696960(void);
template<class... A> int FUN_10696960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696970(void);
template<class... A> int FUN_10696970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696980(void);
template<class... A> int FUN_10696980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696990(void);
template<class... A> int FUN_10696990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969a0(void);
template<class... A> int FUN_106969a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969b0(void);
template<class... A> int FUN_106969b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969c0(void);
template<class... A> int FUN_106969c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969d0(void);
template<class... A> int FUN_106969d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969e0(void);
template<class... A> int FUN_106969e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106969f0(undefined4 param_1);
template<class... A> int FUN_106969f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10696a00(undefined4 *param_1);
template<class... A> int FUN_10696a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10696c80(undefined4 param_1);
template<class... A> int FUN_10696c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10696ca0(int *param_1);
template<class... A> int FUN_10696ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10697000(undefined4 *param_1);
template<class... A> int FUN_10697000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106970f0(undefined4 *param_1);
template<class... A> int FUN_106970f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10697150(undefined4 *param_1);
template<class... A> int FUN_10697150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10697830(undefined4 *param_1);
template<class... A> int FUN_10697830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10697a20(undefined4 *param_1);
template<class... A> int FUN_10697a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10697a30(undefined4 *param_1);
template<class... A> int FUN_10697a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10697a40(undefined4 *param_1);
template<class... A> int FUN_10697a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106997e0(int *param_1);
template<class... A> int FUN_106997e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106997f0(int *param_1);
template<class... A> int FUN_106997f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10699800(int *param_1);
template<class... A> int FUN_10699800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10699810(undefined4 *param_1);
template<class... A> int FUN_10699810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10699820(undefined4 *param_1);
template<class... A> int FUN_10699820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10699830(undefined4 *param_1);
template<class... A> int FUN_10699830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699940(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10699940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699960(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10699960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699980(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10699980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106999f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106999f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10699a00(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10699a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10699a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699aa0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10699aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10699ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10699ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10699bf0(int param_1);
template<class... A> int FUN_10699bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10699c00(int param_1);
template<class... A> int FUN_10699c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c10(void);
template<class... A> int FUN_10699c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10699c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10699c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10699c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c70(void);
template<class... A> int FUN_10699c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699c80(void);
template<class... A> int FUN_10699c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699e40(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10699e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10699f00(undefined4 *param_1);
template<class... A> int FUN_10699f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10699f10(undefined4 param_1);
template<class... A> int FUN_10699f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699f20(void);
template<class... A> int FUN_10699f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699f30(void);
template<class... A> int FUN_10699f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699f60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10699f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10699f80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10699f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a210(undefined4 param_1);
template<class... A> int FUN_1069a210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a220(undefined4 param_1);
template<class... A> int FUN_1069a220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a240(undefined4 param_1);
template<class... A> int FUN_1069a240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a250(undefined4 param_1);
template<class... A> int FUN_1069a250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a260(undefined4 param_1);
template<class... A> int FUN_1069a260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a270(undefined4 param_1);
template<class... A> int FUN_1069a270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069a280(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_1069a280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a340(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1069a340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a3e0(undefined4 param_1);
template<class... A> int FUN_1069a3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a3f0(undefined4 param_1);
template<class... A> int FUN_1069a3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a410(undefined4 param_1);
template<class... A> int FUN_1069a410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a420(undefined4 param_1);
template<class... A> int FUN_1069a420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a430(undefined4 param_1);
template<class... A> int FUN_1069a430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a440(undefined4 param_1);
template<class... A> int FUN_1069a440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a460(undefined4 param_1);
template<class... A> int FUN_1069a460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a470(undefined4 param_1);
template<class... A> int FUN_1069a470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a4a0(undefined4 param_1);
template<class... A> int FUN_1069a4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a4b0(undefined4 param_1);
template<class... A> int FUN_1069a4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a4d0(undefined4 param_1);
template<class... A> int FUN_1069a4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a4e0(undefined4 param_1);
template<class... A> int FUN_1069a4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1069a4f0(undefined4 param_1);
template<class... A> int FUN_1069a4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069a500(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1069a500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069a520(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1069a520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069a540(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1069a540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1069ac60(undefined4 *param_1);
template<class... A> int FUN_1069ac60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1069ad60(int param_1);
template<class... A> int FUN_1069ad60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1069afc0(undefined4 *param_1);
template<class... A> int FUN_1069afc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1069b020(undefined4 *param_1);
template<class... A> int FUN_1069b020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069b040(undefined4 param_1);
template<class... A> int FUN_1069b040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069c150(void);
template<class... A> int FUN_1069c150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c240(int param_1);
template<class... A> int FUN_1069c240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c250(undefined4 *param_1);
template<class... A> int FUN_1069c250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c270(undefined4 *param_1);
template<class... A> int FUN_1069c270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c290(undefined4 *param_1);
template<class... A> int FUN_1069c290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c2b0(undefined4 *param_1);
template<class... A> int FUN_1069c2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c710(undefined4 *param_1);
template<class... A> int FUN_1069c710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069cc20(undefined4 *param_1);
template<class... A> int FUN_1069cc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069cc30(undefined4 *param_1);
template<class... A> int FUN_1069cc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069cc40(undefined4 *param_1);
template<class... A> int FUN_1069cc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069cc50(undefined4 *param_1);
template<class... A> int FUN_1069cc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069cc60(int param_1);
template<class... A> int FUN_1069cc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069cc70(int param_1);
template<class... A> int FUN_1069cc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1069cc80(int *param_1);
template<class... A> int FUN_1069cc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1069cc90(int *param_1);
template<class... A> int FUN_1069cc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1069cca0(undefined4 *param_1);
template<class... A> int FUN_1069cca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1069ccb0(undefined4 *param_1);
template<class... A> int FUN_1069ccb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_1069ccc0(int *param_1);
template<class... A> int FUN_1069ccc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069d6d0(undefined4 *param_1);
template<class... A> int FUN_1069d6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069d830(int param_1);
template<class... A> int FUN_1069d830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069d850(int param_1);
template<class... A> int FUN_1069d850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069d9c0(int param_1);
template<class... A> int FUN_1069d9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc10(undefined4 param_1);
template<class... A> int FUN_1069dc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc20(undefined4 param_1);
template<class... A> int FUN_1069dc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc30(undefined4 param_1);
template<class... A> int FUN_1069dc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc40(undefined4 param_1);
template<class... A> int FUN_1069dc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc50(undefined4 param_1);
template<class... A> int FUN_1069dc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc60(undefined4 param_1);
template<class... A> int FUN_1069dc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dc70(int param_1);
template<class... A> int FUN_1069dc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069dd00(int param_1);
template<class... A> int FUN_1069dd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1069dd10(int param_1);
template<class... A> int FUN_1069dd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1069dd20(int param_1);
template<class... A> int FUN_1069dd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069ded0(void);
template<class... A> int FUN_1069ded0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1069dee0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1069dee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069dfa0(int param_1);
template<class... A> int FUN_1069dfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069dfb0(undefined4 *param_1);
template<class... A> int FUN_1069dfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069e200(undefined4 *param_1);
template<class... A> int FUN_1069e200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069e230(int param_1);
template<class... A> int FUN_1069e230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069e240(int param_1,int param_2,int param_3);
template<class... A> int FUN_1069e240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1069e2d0(uint param_1);
template<class... A> int FUN_1069e2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1069e350(uint param_1);
template<class... A> int FUN_1069e350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1069e3e0(int param_1);
template<class... A> int FUN_1069e3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069e8e0(int param_1);
template<class... A> int FUN_1069e8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069e9d0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1069e9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1069ea20(int param_1,int param_2);
template<class... A> int FUN_1069ea20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1069ea70(int param_1,int param_2);
template<class... A> int FUN_1069ea70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106a0000(int *param_1);
template<class... A> int FUN_106a0000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106a0010(int *param_1);
template<class... A> int FUN_106a0010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106a0020(int *param_1);
template<class... A> int FUN_106a0020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_106a0030(int param_1);
template<class... A> int FUN_106a0030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_106a0040(int param_1);
template<class... A> int FUN_106a0040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a0050(void);
template<class... A> int FUN_106a0050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a0060(void);
template<class... A> int FUN_106a0060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a0070(void);
template<class... A> int FUN_106a0070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a0080(void);
template<class... A> int FUN_106a0080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a0090(undefined4 *param_1);
template<class... A> int FUN_106a0090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a00a0(undefined4 *param_1);
template<class... A> int FUN_106a00a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a00b0(undefined4 *param_1);
template<class... A> int FUN_106a00b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a00c0(undefined4 *param_1);
template<class... A> int FUN_106a00c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a0570(undefined4 *param_1);
template<class... A> int FUN_106a0570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a05a0(undefined4 *param_1);
template<class... A> int FUN_106a05a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a05d0(undefined4 *param_1);
template<class... A> int FUN_106a05d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a0600(undefined4 *param_1);
template<class... A> int FUN_106a0600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106a0630(int *param_1);
template<class... A> int FUN_106a0630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_106a12b0(void);
template<class... A> int FUN_106a12b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a12c0(undefined4 *param_1);
template<class... A> int FUN_106a12c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a1330(undefined4 *param_1);
template<class... A> int FUN_106a1330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a1560(undefined4 *param_1);
template<class... A> int FUN_106a1560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a1660(undefined4 *param_1);
template<class... A> int FUN_106a1660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a19d0(undefined4 *param_1);
template<class... A> int FUN_106a19d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_106a1a40(void);
template<class... A> int FUN_106a1a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a1de0(undefined4 *param_1);
template<class... A> int FUN_106a1de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a1f10(undefined4 *param_1);
template<class... A> int FUN_106a1f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a2ea0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106a2ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a2ef0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_106a2ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a30b0(undefined1 *param_1,FILE *param_2);
template<class... A> int FUN_106a30b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3700(undefined4 param_1);
template<class... A> int FUN_106a3700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_106a3710(int param_1,undefined4 param_2);
template<class... A> int FUN_106a3710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106a3740(int param_1,uint param_2,uint param_3,char param_4);
template<class... A> int FUN_106a3740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_106a38d0(byte *param_1,FILE *param_2);
template<class... A> int FUN_106a38d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3900(undefined4 param_1);
template<class... A> int FUN_106a3900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3910(undefined4 param_1);
template<class... A> int FUN_106a3910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3920(undefined4 param_1);
template<class... A> int FUN_106a3920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a3930(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_106a3930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3970(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106a3970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3990(undefined4 param_1);
template<class... A> int FUN_106a3990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a39a0(undefined4 param_1);
template<class... A> int FUN_106a39a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a39b0(undefined4 param_1);
template<class... A> int FUN_106a39b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a39c0(undefined4 param_1);
template<class... A> int FUN_106a39c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a3be0(undefined4 param_1);
template<class... A> int FUN_106a3be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a3fa0(undefined4 *param_1);
template<class... A> int FUN_106a3fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a43e0(undefined4 *param_1);
template<class... A> int FUN_106a43e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106a4580(int *param_1);
template<class... A> int FUN_106a4580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106a4590(undefined4 *param_1);
template<class... A> int FUN_106a4590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106a4600(int *param_1);
template<class... A> int FUN_106a4600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __stdcall FUN_106a48c0(undefined4 *param_1);
template<class... A> int __stdcall FUN_106a48c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a4e70(undefined4 *param_1);
template<class... A> int FUN_106a4e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a4ea0(int param_1);
template<class... A> int FUN_106a4ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a5070(undefined4 param_1);
template<class... A> int FUN_106a5070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a5590(int param_1);
template<class... A> int FUN_106a5590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106a64e0(undefined4 *param_1,uint param_2,uint param_3);
template<class... A> int FUN_106a64e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a6a80(undefined4 *param_1);
template<class... A> int FUN_106a6a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a6b10(void *param_1,size_t param_2,char *param_3);
template<class... A> int FUN_106a6b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a6bf0(undefined4 *param_1);
template<class... A> int FUN_106a6bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_106a6e40(undefined4 param_1);
template<class... A> int __stdcall FUN_106a6e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106a6ea0(int param_1);
template<class... A> int FUN_106a6ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106a6eb0(int param_1);
template<class... A> int FUN_106a6eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a6ec0(void);
template<class... A> int FUN_106a6ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a6ed0(void);
template<class... A> int FUN_106a6ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a7330(undefined4 param_1);
template<class... A> int FUN_106a7330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a7690(undefined4 *param_1);
template<class... A> int FUN_106a7690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106a7ec0(int param_1);
template<class... A> int FUN_106a7ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a8680(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106a8680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a86a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106a86a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a86c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106a86c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a86e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106a86e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a8700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106a8700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a8880(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_106a8880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a88a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_106a88a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a8ba0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_106a8ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a8f10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_106a8f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a9000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_106a9000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a9050(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_106a9050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9300(void);
template<class... A> int FUN_106a9300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9310(void);
template<class... A> int FUN_106a9310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9320(void);
template<class... A> int FUN_106a9320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9330(void);
template<class... A> int FUN_106a9330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9740(void);
template<class... A> int FUN_106a9740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9760(void);
template<class... A> int FUN_106a9760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9920(int param_1,undefined4 *param_2);
template<class... A> int FUN_106a9920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a9b50(undefined4 param_1);
template<class... A> int FUN_106a9b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a9b60(undefined4 param_1);
template<class... A> int FUN_106a9b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9b70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106a9b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9b80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106a9b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9b90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106a9b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9ba0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106a9ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9ff0(void);
template<class... A> int FUN_106a9ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aa000(void);
template<class... A> int FUN_106aa000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aa140(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106aa140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_106ab980(SCStr *param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_106ab980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_106ab9c0(SCStr *param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_106ab9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aba00(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106aba00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aba20(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106aba20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb40(undefined4 *param_1);
template<class... A> int FUN_106abb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb50(undefined4 *param_1);
template<class... A> int FUN_106abb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb60(undefined4 param_1);
template<class... A> int FUN_106abb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb70(undefined4 *param_1);
template<class... A> int FUN_106abb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb80(undefined4 *param_1);
template<class... A> int FUN_106abb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abb90(undefined4 *param_1);
template<class... A> int FUN_106abb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abba0(undefined4 *param_1);
template<class... A> int FUN_106abba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abbb0(undefined4 *param_1);
template<class... A> int FUN_106abbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abbc0(undefined4 *param_1);
template<class... A> int FUN_106abbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106abbd0(undefined4 *param_1);
template<class... A> int FUN_106abbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ac400(undefined4 param_1);
template<class... A> int FUN_106ac400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ac410(undefined4 param_1);
template<class... A> int FUN_106ac410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ac420(undefined4 param_1);
template<class... A> int FUN_106ac420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_106ac430(int param_1,SCStr *param_2);
template<class... A> int FUN_106ac430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_106ac460(int param_1,uint *param_2);
template<class... A> int FUN_106ac460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_106ac490(int param_1,uint *param_2);
template<class... A> int FUN_106ac490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_106ac690(SCStr *param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_106ac690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106ac770(SCStr *param_1,SCStr *param_2,int param_3);
template<class... A> int FUN_106ac770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106ac860(int param_1);
template<class... A> int FUN_106ac860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad1f0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_106ad1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad200(void);
template<class... A> int FUN_106ad200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad210(void);
template<class... A> int FUN_106ad210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad220(void);
template<class... A> int FUN_106ad220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad230(void);
template<class... A> int FUN_106ad230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106ad5d0(int param_1);
template<class... A> int FUN_106ad5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ad6c0(undefined4 param_1);
template<class... A> int FUN_106ad6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad7e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106ad7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad7f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106ad7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ad800(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106ad800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106adc20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106adc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_106adc40(void);
template<class... A> int FUN_106adc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae0f0(undefined4 *param_1);
template<class... A> int FUN_106ae0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae1b0(undefined4 param_1);
template<class... A> int FUN_106ae1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae1c0(undefined4 param_1);
template<class... A> int FUN_106ae1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae1d0(undefined4 param_1);
template<class... A> int FUN_106ae1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae780(undefined4 param_1);
template<class... A> int FUN_106ae780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae790(undefined4 param_1);
template<class... A> int FUN_106ae790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae7a0(undefined4 param_1);
template<class... A> int FUN_106ae7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae7b0(undefined4 param_1);
template<class... A> int FUN_106ae7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae7c0(undefined4 param_1);
template<class... A> int FUN_106ae7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae820(undefined4 param_1);
template<class... A> int FUN_106ae820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae830(undefined4 param_1);
template<class... A> int FUN_106ae830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae840(undefined4 param_1);
template<class... A> int FUN_106ae840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae850(undefined4 param_1);
template<class... A> int FUN_106ae850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae860(undefined4 param_1);
template<class... A> int FUN_106ae860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae870(undefined4 param_1);
template<class... A> int FUN_106ae870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae880(undefined4 param_1);
template<class... A> int FUN_106ae880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae890(undefined4 param_1);
template<class... A> int FUN_106ae890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8a0(undefined4 param_1);
template<class... A> int FUN_106ae8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8b0(undefined4 param_1);
template<class... A> int FUN_106ae8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8c0(undefined4 param_1);
template<class... A> int FUN_106ae8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8d0(undefined4 param_1);
template<class... A> int FUN_106ae8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8e0(undefined4 param_1);
template<class... A> int FUN_106ae8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae8f0(undefined4 param_1);
template<class... A> int FUN_106ae8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae900(undefined4 param_1);
template<class... A> int FUN_106ae900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae910(undefined4 param_1);
template<class... A> int FUN_106ae910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae920(undefined4 param_1);
template<class... A> int FUN_106ae920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae930(undefined4 param_1);
template<class... A> int FUN_106ae930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae940(undefined4 param_1);
template<class... A> int FUN_106ae940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae950(undefined4 param_1);
template<class... A> int FUN_106ae950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ae960(undefined4 param_1);
template<class... A> int FUN_106ae960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ae970(int *param_1,int param_2);
template<class... A> int FUN_106ae970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ae990(int *param_1,int param_2);
template<class... A> int FUN_106ae990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ae9b0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106ae9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ae9d0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106ae9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ae9f0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_106ae9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aea20(undefined4 param_1,SCStr *param_2,SCStr *param_3,undefined4 *param_4);
template<class... A> int FUN_106aea20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aea50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_106aea50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aeaa0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_106aeaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aeac0(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_106aeac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aeaf0(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_106aeaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aeb20(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_106aeb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aeb50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_106aeb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aeb80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_106aeb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aebb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_106aebb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aebe0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_106aebe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aec10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_106aec10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aec40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_106aec40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aec60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_106aec60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aed60(undefined4 param_1,int *param_2,int *param_3);
template<class... A> int FUN_106aed60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106af010(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_106af010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106af020(int param_1,int param_2);
template<class... A> int FUN_106af020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106af030(int param_1,int param_2);
template<class... A> int FUN_106af030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106af050(int *param_1,int *param_2);
template<class... A> int FUN_106af050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af5c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106af5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af5e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106af5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af600(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106af600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af620(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106af620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af640(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106af640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af660(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106af660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106af680(undefined4 *param_1,SCStr *param_2,SCStr *param_3,SCStr *param_4);
template<class... A> int FUN_106af680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_106af720(undefined4 *param_1,undefined4 *param_2,int param_3);
template<class... A> int FUN_106af720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af780(undefined4 param_1);
template<class... A> int FUN_106af780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af790(undefined4 param_1);
template<class... A> int FUN_106af790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7a0(undefined4 param_1);
template<class... A> int FUN_106af7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7b0(undefined4 param_1);
template<class... A> int FUN_106af7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7c0(undefined4 param_1);
template<class... A> int FUN_106af7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7d0(undefined4 param_1);
template<class... A> int FUN_106af7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7e0(undefined4 param_1);
template<class... A> int FUN_106af7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af7f0(undefined4 param_1);
template<class... A> int FUN_106af7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af800(undefined4 param_1);
template<class... A> int FUN_106af800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af810(undefined4 param_1);
template<class... A> int FUN_106af810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af820(undefined4 param_1);
template<class... A> int FUN_106af820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af830(undefined4 param_1);
template<class... A> int FUN_106af830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af840(undefined4 param_1);
template<class... A> int FUN_106af840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af850(undefined4 param_1);
template<class... A> int FUN_106af850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af860(undefined4 param_1);
template<class... A> int FUN_106af860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af8c0(undefined4 param_1);
template<class... A> int FUN_106af8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af8d0(undefined4 param_1);
template<class... A> int FUN_106af8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af8e0(undefined4 param_1);
template<class... A> int FUN_106af8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af8f0(undefined4 param_1);
template<class... A> int FUN_106af8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af900(undefined4 param_1);
template<class... A> int FUN_106af900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af910(undefined4 param_1);
template<class... A> int FUN_106af910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af920(undefined4 param_1);
template<class... A> int FUN_106af920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af930(undefined4 param_1);
template<class... A> int FUN_106af930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af940(undefined4 param_1);
template<class... A> int FUN_106af940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af950(undefined4 param_1);
template<class... A> int FUN_106af950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af960(undefined4 param_1);
template<class... A> int FUN_106af960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af9c0(undefined4 param_1);
template<class... A> int FUN_106af9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af9d0(undefined4 param_1);
template<class... A> int FUN_106af9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af9e0(undefined4 param_1);
template<class... A> int FUN_106af9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106af9f0(undefined4 param_1);
template<class... A> int FUN_106af9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106afa00(undefined4 param_1);
template<class... A> int FUN_106afa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106afa10(undefined4 param_1);
template<class... A> int FUN_106afa10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106afa20(undefined4 param_1);
template<class... A> int FUN_106afa20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106afa30(undefined4 param_1);
template<class... A> int FUN_106afa30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106afa40(undefined4 param_1);
template<class... A> int FUN_106afa40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106afa50(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_106afa50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106afcc0(int param_1,undefined4 *param_2);
template<class... A> int FUN_106afcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b0000(undefined4 param_1);
template<class... A> int FUN_106b0000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b0010(undefined4 param_1);
template<class... A> int FUN_106b0010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b0020(undefined4 param_1);
template<class... A> int FUN_106b0020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b0080(undefined4 param_1);
template<class... A> int FUN_106b0080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b0090(undefined4 param_1);
template<class... A> int FUN_106b0090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b00a0(undefined4 param_1);
template<class... A> int FUN_106b00a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b00b0(undefined4 param_1);
template<class... A> int FUN_106b00b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b00c0(undefined4 param_1);
template<class... A> int FUN_106b00c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b00d0(undefined4 param_1);
template<class... A> int FUN_106b00d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b00e0(undefined4 param_1);
template<class... A> int FUN_106b00e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106b00f0(int param_1,int param_2);
template<class... A> int FUN_106b00f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106b0100(int param_1,int param_2);
template<class... A> int FUN_106b0100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106b02a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106b02a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b05e0(undefined4 *param_1);
template<class... A> int FUN_106b05e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0600(undefined4 *param_1);
template<class... A> int FUN_106b0600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0620(undefined4 *param_1);
template<class... A> int FUN_106b0620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0780(undefined4 param_1);
template<class... A> int FUN_106b0780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b0790(int param_1);
template<class... A> int FUN_106b0790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0b40(undefined4 *param_1);
template<class... A> int FUN_106b0b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0b60(undefined4 *param_1);
template<class... A> int FUN_106b0b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0c70(undefined4 *param_1);
template<class... A> int FUN_106b0c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0cb0(undefined4 *param_1);
template<class... A> int FUN_106b0cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0cf0(undefined4 *param_1);
template<class... A> int FUN_106b0cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0d10(undefined4 param_1);
template<class... A> int FUN_106b0d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0d20(undefined4 param_1);
template<class... A> int FUN_106b0d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0d30(undefined4 param_1);
template<class... A> int FUN_106b0d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0d40(undefined4 param_1);
template<class... A> int FUN_106b0d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b0d50(undefined4 param_1);
template<class... A> int FUN_106b0d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0de0(undefined4 *param_1);
template<class... A> int FUN_106b0de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0f30(undefined4 *param_1);
template<class... A> int FUN_106b0f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b10b0(undefined4 *param_1);
template<class... A> int FUN_106b10b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b1110(undefined4 *param_1);
template<class... A> int FUN_106b1110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b1350(undefined4 *param_1);
template<class... A> int FUN_106b1350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b22a0(undefined4 *param_1);
template<class... A> int FUN_106b22a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2310(undefined4 *param_1);
template<class... A> int FUN_106b2310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2330(undefined4 *param_1);
template<class... A> int FUN_106b2330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2450(undefined4 *param_1);
template<class... A> int FUN_106b2450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2560(undefined4 *param_1);
template<class... A> int FUN_106b2560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2640(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106b2640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2d00(undefined4 *param_1);
template<class... A> int FUN_106b2d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2d50(undefined4 *param_1);
template<class... A> int FUN_106b2d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2ec0(undefined4 *param_1);
template<class... A> int FUN_106b2ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b3230(int param_1);
template<class... A> int FUN_106b3230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b3260(undefined4 *param_1);
template<class... A> int FUN_106b3260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b32b0(undefined4 *param_1);
template<class... A> int FUN_106b32b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b3300(undefined4 *param_1);
template<class... A> int FUN_106b3300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b36a0(int param_1);
template<class... A> int FUN_106b36a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b3940(int param_1);
template<class... A> int FUN_106b3940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b3d20(undefined4 *param_1);
template<class... A> int FUN_106b3d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b3d30(undefined4 *param_1);
template<class... A> int FUN_106b3d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b3e70(undefined4 *param_1);
template<class... A> int FUN_106b3e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b52e0(int *param_1);
template<class... A> int FUN_106b52e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b5970(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106b5970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b5c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106b5c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6160(undefined4 *param_1);
template<class... A> int FUN_106b6160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6170(undefined4 *param_1);
template<class... A> int FUN_106b6170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106b6180(int *param_1);
template<class... A> int FUN_106b6180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6190(undefined4 *param_1);
template<class... A> int FUN_106b6190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106b61a0(int *param_1);
template<class... A> int FUN_106b61a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106b61b0(int *param_1);
template<class... A> int FUN_106b61b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b61c0(undefined4 *param_1);
template<class... A> int FUN_106b61c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b61d0(undefined4 *param_1);
template<class... A> int FUN_106b61d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b61e0(undefined4 *param_1);
template<class... A> int FUN_106b61e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b61f0(undefined4 *param_1);
template<class... A> int FUN_106b61f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6200(int *param_1);
template<class... A> int FUN_106b6200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6210(int *param_1);
template<class... A> int FUN_106b6210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6220(int *param_1);
template<class... A> int FUN_106b6220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6230(undefined4 *param_1);
template<class... A> int FUN_106b6230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6240(undefined4 *param_1);
template<class... A> int FUN_106b6240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6250(undefined4 *param_1);
template<class... A> int FUN_106b6250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b6260(undefined4 *param_1);
template<class... A> int FUN_106b6260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6270(int *param_1);
template<class... A> int FUN_106b6270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6280(int *param_1);
template<class... A> int FUN_106b6280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b6290(int *param_1);
template<class... A> int FUN_106b6290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b62a0(int *param_1);
template<class... A> int FUN_106b62a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106b62b0(int *param_1);
template<class... A> int FUN_106b62b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b62c0(undefined4 *param_1);
template<class... A> int FUN_106b62c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b62d0(undefined4 *param_1);
template<class... A> int FUN_106b62d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106b64b0(int *param_1);
template<class... A> int FUN_106b64b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106b64c0(int *param_1);
template<class... A> int FUN_106b64c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106b64d0(int *param_1);
template<class... A> int FUN_106b64d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106b6500(int *param_1);
template<class... A> int FUN_106b6500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106b6510(int *param_1);
template<class... A> int FUN_106b6510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __fastcall FUN_106b6760(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106b6760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_106b6790(int *param_1,int *param_2);
template<class... A> int FUN_106b6790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_106b67b0(int *param_1,int *param_2);
template<class... A> int FUN_106b67b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b8130(undefined4 *param_1);
template<class... A> int FUN_106b8130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b8160(undefined4 *param_1);
template<class... A> int FUN_106b8160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b8630(int param_1);
template<class... A> int FUN_106b8630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b8650(int param_1);
template<class... A> int FUN_106b8650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106b8670(int param_1);
template<class... A> int FUN_106b8670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106b8690(float *param_1);
template<class... A> int FUN_106b8690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106b8900(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_106b8900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106b8910(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_106b8910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106b8920(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_106b8920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106b8a80(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106b8a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106b8aa0(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106b8aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106b8f70(int param_1);
template<class... A> int FUN_106b8f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106b9210(undefined4 param_1);
template<class... A> int FUN_106b9210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9b50(undefined4 param_1);
template<class... A> int FUN_106b9b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9b60(undefined4 param_1);
template<class... A> int FUN_106b9b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9b70(undefined4 param_1);
template<class... A> int FUN_106b9b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9b80(undefined4 param_1);
template<class... A> int FUN_106b9b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9b90(undefined4 param_1);
template<class... A> int FUN_106b9b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9ba0(undefined4 param_1);
template<class... A> int FUN_106b9ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9bb0(undefined4 param_1);
template<class... A> int FUN_106b9bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9bc0(undefined4 param_1);
template<class... A> int FUN_106b9bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9bd0(undefined4 param_1);
template<class... A> int FUN_106b9bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9be0(undefined4 param_1);
template<class... A> int FUN_106b9be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9bf0(undefined4 param_1);
template<class... A> int FUN_106b9bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c00(undefined4 param_1);
template<class... A> int FUN_106b9c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c10(undefined4 param_1);
template<class... A> int FUN_106b9c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c20(undefined4 param_1);
template<class... A> int FUN_106b9c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c30(undefined4 param_1);
template<class... A> int FUN_106b9c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c40(undefined4 param_1);
template<class... A> int FUN_106b9c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c50(undefined4 param_1);
template<class... A> int FUN_106b9c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c60(undefined4 param_1);
template<class... A> int FUN_106b9c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c70(undefined4 param_1);
template<class... A> int FUN_106b9c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c80(undefined4 param_1);
template<class... A> int FUN_106b9c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9c90(undefined4 param_1);
template<class... A> int FUN_106b9c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9ca0(undefined4 param_1);
template<class... A> int FUN_106b9ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9cb0(undefined4 param_1);
template<class... A> int FUN_106b9cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9cd0(undefined4 param_1);
template<class... A> int FUN_106b9cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9ce0(undefined4 param_1);
template<class... A> int FUN_106b9ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9cf0(undefined4 param_1);
template<class... A> int FUN_106b9cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d00(undefined4 param_1);
template<class... A> int FUN_106b9d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d10(undefined4 param_1);
template<class... A> int FUN_106b9d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d20(undefined4 param_1);
template<class... A> int FUN_106b9d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d30(undefined4 param_1);
template<class... A> int FUN_106b9d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d40(undefined4 param_1);
template<class... A> int FUN_106b9d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d50(undefined4 param_1);
template<class... A> int FUN_106b9d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d60(undefined4 param_1);
template<class... A> int FUN_106b9d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d70(undefined4 param_1);
template<class... A> int FUN_106b9d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d80(undefined4 param_1);
template<class... A> int FUN_106b9d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106b9d90(int param_1);
template<class... A> int FUN_106b9d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ba340(undefined4 param_1);
template<class... A> int FUN_106ba340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106ba350(int param_1);
template<class... A> int FUN_106ba350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ba440(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_106ba440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106ba470(int param_1);
template<class... A> int FUN_106ba470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ba4d0(undefined4 param_1);
template<class... A> int FUN_106ba4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ba4e0(undefined4 param_1);
template<class... A> int FUN_106ba4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_106ba4f0(int *param_1);
template<class... A> int FUN_106ba4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  __stdcall FUN_106ba6c0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_106ba6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ba6d0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_106ba6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ba6e0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_106ba6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ba6f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106ba6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ba700(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106ba700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ba710(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106ba710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ba720(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106ba720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ba730(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106ba730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ba7f0(int param_1);
template<class... A> int FUN_106ba7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ba800(int param_1);
template<class... A> int FUN_106ba800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106ba810(int param_1);
template<class... A> int FUN_106ba810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106ba820(undefined4 *param_1);
template<class... A> int FUN_106ba820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106ba830(undefined4 *param_1);
template<class... A> int FUN_106ba830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106ba840(undefined4 *param_1);
template<class... A> int FUN_106ba840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106ba850(undefined4 *param_1);
template<class... A> int FUN_106ba850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bb3e0(undefined4 *param_1);
template<class... A> int FUN_106bb3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bb3f0(undefined4 *param_1);
template<class... A> int FUN_106bb3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106bb410(undefined1 *param_1);
template<class... A> int __stdcall FUN_106bb410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bb420(int param_1);
template<class... A> int FUN_106bb420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bb430(int param_1);
template<class... A> int FUN_106bb430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bb620(undefined4 *param_1);
template<class... A> int FUN_106bb620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106bb630(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_106bb630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106bcc30(uint param_1);
template<class... A> int FUN_106bcc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106bcca0(uint param_1);
template<class... A> int FUN_106bcca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106bcd20(uint param_1);
template<class... A> int FUN_106bcd20(A...);
extern void __fastcall FUN_106845c0(void *param_1);
extern void __fastcall FUN_106de7d0(void *param_1);

extern int ghidra_vftable_SCNewWizPageFor_SCAddProductWizard_;
extern int ghidra_vftable_exception;

extern int ghidra_vftable_SCNewWizPageFor_SCAddProductWizard__SCAddProductWizard_;

// Reference entry 10654700; body size 11 bytes.
extern int __stdcall thunk_FUN_101a3180(int a1);
extern int __stdcall thunk_FUN_10200aa0(int a1,int a2,int a3,int a4);
extern int __stdcall thunk_FUN_10246170(int a1,int a2);
extern int __stdcall thunk_FUN_10246290(int a1,int a2);
extern int __stdcall thunk_FUN_103beae0(int a1,int a2);
extern int __stdcall thunk_FUN_105a5110(int a1,int a2);
extern int __stdcall thunk_FUN_105a51f0(int a1,int a2);
extern int __stdcall thunk_FUN_105a52b0(int a1,int a2);
extern int __stdcall thunk_FUN_105a7950(int a1);
extern int __stdcall thunk_FUN_10694b70(int a1,int a2);
extern int __stdcall thunk_FUN_106a48e0(int a1,int a2);
extern int __stdcall thunk_FUN_106a9bb0(int a1,int a2);
extern int __stdcall thunk_FUN_106aaa10(int a1,int a2);
extern int __stdcall thunk_FUN_106ab5b0(int a1,int a2);
extern int __stdcall thunk_FUN_10bcef80(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4cc0(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4d80(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4e80(int a1,int a2);
extern int __stdcall thunk_FUN_10f04dc0(int a1);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
struct SCFp_72_0 { char _p[72]; int (__thiscall *v)(void); };
struct SCFp_76_0 { char _p[76]; int (__thiscall *v)(void); };
struct SCVtbl_0_0 { virtual int v(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_2_2 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2); };
struct SCVtbl_7_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(void); };
struct SCVtbl_8_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(void); };
struct SCVtbl_11_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(int a1); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_26_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual int v(int a1,int a2); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_3_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
int FUN_10064623();
int FUN_10002e55();
int FUN_100911af();
int FUN_1008cfec();
int FUN_1000d2bf();
int FUN_10029474();
int FUN_100679f9();
int FUN_10024127(void);
int FUN_1002d2b8(void);
int FUN_1005c743(void);
int FUN_1002e915(void);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_1002d2b8(...);
int FUN_1002d2b8(...);
int FUN_1002d2b8(...);
int FUN_10024127(...);
int FUN_10024127(...);
int FUN_1005c743(...);
int FUN_1002e915(...);
template<class... A> int FUN_10024127(A...);
template<class... A> int FUN_1005c743(A...);
template<class... A> int FUN_10010267(A...);
template<class... A> int FUN_1002e915(A...);
template<class... A> int FUN_1002d2b8(A...);
#line 1 "ENTRY_10654700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654700(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654710; body size 11 bytes.
#line 1 "ENTRY_10654710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654720; body size 11 bytes.
#line 1 "ENTRY_10654720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654730; body size 11 bytes.
#line 1 "ENTRY_10654730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654730(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654740; body size 11 bytes.
#line 1 "ENTRY_10654740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654750; body size 11 bytes.
#line 1 "ENTRY_10654750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654760; body size 11 bytes.
#line 1 "ENTRY_10654760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654760(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654770; body size 11 bytes.
#line 1 "ENTRY_10654770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654770(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654780; body size 11 bytes.
#line 1 "ENTRY_10654780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654780(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654790; body size 11 bytes.
#line 1 "ENTRY_10654790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654790(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106547a0; body size 11 bytes.
#line 1 "ENTRY_106547a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106547b0; body size 11 bytes.
#line 1 "ENTRY_106547b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106547c0; body size 11 bytes.
#line 1 "ENTRY_106547c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106547d0; body size 11 bytes.
#line 1 "ENTRY_106547d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106547e0; body size 11 bytes.
#line 1 "ENTRY_106547e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106547f0; body size 11 bytes.
#line 1 "ENTRY_106547f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654800; body size 11 bytes.
#line 1 "ENTRY_10654800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654800(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654810; body size 11 bytes.
#line 1 "ENTRY_10654810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654820; body size 11 bytes.
#line 1 "ENTRY_10654820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654830; body size 11 bytes.
#line 1 "ENTRY_10654830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654840; body size 11 bytes.
#line 1 "ENTRY_10654840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654850; body size 11 bytes.
#line 1 "ENTRY_10654850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654860; body size 11 bytes.
#line 1 "ENTRY_10654860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654860(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654870; body size 11 bytes.
#line 1 "ENTRY_10654870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10654a40; body size 38 bytes.
#line 1 "ENTRY_10654a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654a40(undefined4 *param_1)

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


// Reference entry 10654a70; body size 38 bytes.
#line 1 "ENTRY_10654a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654a70(undefined4 *param_1)

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


// Reference entry 10654aa0; body size 38 bytes.
#line 1 "ENTRY_10654aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654aa0(undefined4 *param_1)

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


// Reference entry 10654ad0; body size 38 bytes.
#line 1 "ENTRY_10654ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654ad0(undefined4 *param_1)

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


// Reference entry 10654b00; body size 38 bytes.
#line 1 "ENTRY_10654b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b00(undefined4 *param_1)

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


// Reference entry 10654b30; body size 38 bytes.
#line 1 "ENTRY_10654b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b30(undefined4 *param_1)

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


// Reference entry 10654b60; body size 38 bytes.
#line 1 "ENTRY_10654b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b60(undefined4 *param_1)

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


// Reference entry 10654b90; body size 38 bytes.
#line 1 "ENTRY_10654b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b90(undefined4 *param_1)

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


#line 1 "ENTRY_10654bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654bc0(undefined4 *param_1)

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



#line 1 "ENTRY_10654bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654bf0(undefined4 *param_1)

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

void __fastcall FUN_10654c20(undefined4 *param_1)

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

void __fastcall FUN_10654c50(undefined4 *param_1)

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

void __fastcall FUN_10654c80(undefined4 *param_1)

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

void __fastcall FUN_10654cb0(undefined4 *param_1)

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

void __fastcall FUN_10654ce0(undefined4 *param_1)

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

void __fastcall FUN_10654d10(undefined4 *param_1)

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

void __fastcall FUN_10654d40(undefined4 *param_1)

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

void __fastcall FUN_10654d70(undefined4 *param_1)

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

void __fastcall FUN_10654da0(undefined4 *param_1)

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

void __fastcall FUN_10654dd0(undefined4 *param_1)

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

void __fastcall FUN_10654e00(undefined4 *param_1)

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

void __fastcall FUN_10654e30(undefined4 *param_1)

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






// Reference entry 106552b0; transcribed reference bytes.
#line 1 "ENTRY_106552b0"

__declspec(naked) void FUN_106552b0(void)

{
  __asm mov dword ptr [LAB_121a2388], 0
  __asm mov dword ptr [ecx], offset LAB_118c2138
  __asm jmp LAB_1003c4f2
}






// Reference entry 106552d0; body size 38 bytes.
#line 1 "ENTRY_106552d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106552d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10655300; body size 21 bytes.
#line 1 "ENTRY_10655300"

__declspec(naked) void FUN_10655300(void)

{
  __asm mov dword ptr [LAB_121a23d8], 0
  __asm mov dword ptr [ecx], offset LAB_118c2790
  __asm jmp LAB_1003c4f2
}






// Reference entry 106553c0; body size 21 bytes.
#line 1 "ENTRY_106553c0"

__declspec(naked) void FUN_106553c0(void)

{
  __asm mov dword ptr [LAB_121a2390], 0
  __asm mov dword ptr [ecx], offset LAB_118c21d4
  __asm jmp LAB_1003c4f2
}






// Reference entry 106553e0; body size 38 bytes.
#line 1 "ENTRY_106553e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106553e0(undefined4 *param_1)

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



// Reference entry 10655410; transcribed reference bytes.
#line 1 "ENTRY_10655410"

__declspec(naked) void FUN_10655410(void)

{
  __asm mov dword ptr [LAB_121a2394], 0
  __asm mov dword ptr [ecx], offset LAB_118c2220
  __asm jmp LAB_1003c4f2
}






// Reference entry 10655430; body size 38 bytes.
#line 1 "ENTRY_10655430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655430(undefined4 *param_1)

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



// Reference entry 10655460; transcribed reference bytes.
#line 1 "ENTRY_10655460"

__declspec(naked) void FUN_10655460(void)

{
  __asm mov dword ptr [LAB_121a2378], 0
  __asm mov dword ptr [ecx], offset LAB_118c1fec
  __asm jmp LAB_1003c4f2
}






// Reference entry 10655480; body size 38 bytes.
#line 1 "ENTRY_10655480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655480(undefined4 *param_1)

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



// Reference entry 106554b0; transcribed reference bytes.
#line 1 "ENTRY_106554b0"

__declspec(naked) void FUN_106554b0(void)

{
  __asm mov dword ptr [LAB_121a23b0], 0
  __asm mov dword ptr [ecx], offset LAB_118c2458
  __asm jmp LAB_1003c4f2
}






// Reference entry 106554d0; body size 38 bytes.
#line 1 "ENTRY_106554d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106554d0(undefined4 *param_1)

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


// Reference entry 10655500; transcribed reference bytes.
#line 1 "ENTRY_10655500"

__declspec(naked) void FUN_10655500(void)

{
  __asm mov dword ptr [LAB_121a2398], 0
  __asm mov dword ptr [ecx], offset LAB_118c226c
  __asm jmp LAB_1003c4f2
}






// Reference entry 10655520; body size 38 bytes.
#line 1 "ENTRY_10655520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655520(undefined4 *param_1)

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


// Reference entry 10655550; transcribed reference bytes.
#line 1 "ENTRY_10655550"

__declspec(naked) void FUN_10655550(void)

{
  __asm mov dword ptr [LAB_121a2374], 0
  __asm mov dword ptr [ecx], offset LAB_118c1f90
  __asm jmp LAB_1003c4f2
}






// Reference entry 10655570; body size 38 bytes.
#line 1 "ENTRY_10655570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655570(undefined4 *param_1)

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


// Reference entry 106555a0; transcribed reference bytes.
#line 1 "ENTRY_106555a0"

__declspec(naked) void FUN_106555a0(void)

{
  __asm mov dword ptr [LAB_121a23a8], 0
  __asm mov dword ptr [ecx], offset LAB_118c23b0
  __asm jmp LAB_1003c4f2
}






// Reference entry 106555c0; body size 38 bytes.
#line 1 "ENTRY_106555c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106555c0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 106555f0; body size 21 bytes.
#line 1 "ENTRY_106555f0"

__declspec(naked) void FUN_106555f0(void)

{
  __asm mov dword ptr [LAB_121a23fc], 0
  __asm mov dword ptr [ecx], offset LAB_118c2a60
  __asm jmp LAB_1003c4f2
}






// Reference entry 10655610; body size 38 bytes.
#line 1 "ENTRY_10655610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655610(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10655640; body size 21 bytes.
#line 1 "ENTRY_10655640"

__declspec(naked) void FUN_10655640(void)

{
  __asm mov dword ptr [LAB_121a23f0], 0
  __asm mov dword ptr [ecx], offset LAB_118c2960
  __asm jmp LAB_1003c4f2
}






// Reference entry 10655660; body size 38 bytes.
#line 1 "ENTRY_10655660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655660(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10655690; body size 21 bytes.
#line 1 "ENTRY_10655690"

__declspec(naked) void FUN_10655690(void)

{
  __asm mov dword ptr [LAB_121a23f8], 0
  __asm mov dword ptr [ecx], offset LAB_118c2a10
  __asm jmp LAB_1003c4f2
}






// Reference entry 10655760; body size 21 bytes.
#line 1 "ENTRY_10655760"

__declspec(naked) void FUN_10655760(void)

{
  __asm mov dword ptr [LAB_121a236c], 0
  __asm mov dword ptr [ecx], offset LAB_118c1ef4
  __asm jmp LAB_1003c4f2
}






// Reference entry 10655780; body size 38 bytes.
#line 1 "ENTRY_10655780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655780(undefined4 *param_1)

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


// Reference entry 106557b0; transcribed reference bytes.
#line 1 "ENTRY_106557b0"

__declspec(naked) void FUN_106557b0(void)

{
  __asm mov dword ptr [LAB_121a237c], 0
  __asm mov dword ptr [ecx], offset LAB_118c203c
  __asm jmp LAB_1003c4f2
}






// Reference entry 106557d0; body size 38 bytes.
#line 1 "ENTRY_106557d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106557d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10655800; body size 21 bytes.
#line 1 "ENTRY_10655800"

__declspec(naked) void FUN_10655800(void)

{
  __asm mov dword ptr [LAB_121a23f4], 0
  __asm mov dword ptr [ecx], offset LAB_118c29b8
  __asm jmp LAB_1003c4f2
}






// Reference entry 10655820; body size 38 bytes.
#line 1 "ENTRY_10655820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655820(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10655850; body size 21 bytes.
#line 1 "ENTRY_10655850"

__declspec(naked) void FUN_10655850(void)

{
  __asm mov dword ptr [LAB_121a23d4], 0
  __asm mov dword ptr [ecx], offset LAB_118c273c
  __asm jmp LAB_1003c4f2
}






// Reference entry 10655870; body size 38 bytes.
#line 1 "ENTRY_10655870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655870(undefined4 *param_1)

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


// Reference entry 106558a0; transcribed reference bytes.
#line 1 "ENTRY_106558a0"

__declspec(naked) void FUN_106558a0(void)

{
  __asm mov dword ptr [LAB_121a23c8], 0
  __asm mov dword ptr [ecx], offset LAB_118c2644
  __asm jmp LAB_1003c4f2
}






// Reference entry 106558c0; body size 38 bytes.
#line 1 "ENTRY_106558c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106558c0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_1002d2b8<>();
  return;
}


// Reference entry 10655910; body size 38 bytes.
#line 1 "ENTRY_10655910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655910(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_1002d2b8<>();
  return;
}


// Reference entry 10655960; body size 38 bytes.
#line 1 "ENTRY_10655960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655960(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_1002d2b8<>();
  return;
}


// Reference entry 106559b0; body size 38 bytes.
#line 1 "ENTRY_106559b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 10655da0; body size 38 bytes.
#line 1 "ENTRY_10655da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 10655df0; body size 38 bytes.
#line 1 "ENTRY_10655df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 10655e40; body size 38 bytes.
#line 1 "ENTRY_10655e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 10655e90; body size 38 bytes.
#line 1 "ENTRY_10655e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 10655fa0; body size 21 bytes.
#line 1 "ENTRY_10655fa0"

__declspec(naked) void FUN_10655fa0(void)

{
  __asm mov dword ptr [LAB_121a2370], 0
  __asm mov dword ptr [ecx], offset LAB_118c1f40
  __asm jmp LAB_1003c4f2
}






// Reference entry 10655fc0; body size 38 bytes.
#line 1 "ENTRY_10655fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655fc0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10655ff0; body size 21 bytes.
#line 1 "ENTRY_10655ff0"

__declspec(naked) void FUN_10655ff0(void)

{
  __asm mov dword ptr [LAB_121a23e4], 0
  __asm mov dword ptr [ecx], offset LAB_118c2870
  __asm jmp LAB_1003c4f2
}






// Reference entry 10656010; body size 38 bytes.
#line 1 "ENTRY_10656010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 10656060; body size 38 bytes.
#line 1 "ENTRY_10656060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10656060(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10656090; body size 21 bytes.
#line 1 "ENTRY_10656090"

__declspec(naked) void FUN_10656090(void)

{
  __asm mov dword ptr [LAB_121a23e8], 0
  __asm mov dword ptr [ecx], offset LAB_118c28c4
  __asm jmp LAB_1003c4f2
}






// Reference entry 106560b0; body size 38 bytes.
#line 1 "ENTRY_106560b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 10656100; body size 38 bytes.
#line 1 "ENTRY_10656100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 10656b00; body size 31 bytes.
#line 1 "ENTRY_10656b00"

__declspec(naked) void FUN_10656b00(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x3b __asm _emit 0xf0 __asm _emit 0x74 __asm _emit 0x0e __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xff
  __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10079df7
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10656b30; body size 12 bytes.
#line 1 "ENTRY_10656b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10656b30(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10656b40; body size 3 bytes.
#line 1 "ENTRY_10656b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10656b50; body size 3 bytes.
#line 1 "ENTRY_10656b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10656b60; body size 3 bytes.
#line 1 "ENTRY_10656b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10656b70; body size 3 bytes.
#line 1 "ENTRY_10656b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10656b80; body size 3 bytes.
#line 1 "ENTRY_10656b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10656b90; body size 3 bytes.
#line 1 "ENTRY_10656b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10656b90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10656ba0; body size 25 bytes.
#line 1 "ENTRY_10656ba0"

__declspec(naked) void FUN_10656ba0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50
  __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 1065a470; body size 31 bytes.
#line 1 "ENTRY_1065a470"

__declspec(naked) void FUN_1065a470(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 1065a4a0; body size 31 bytes.
#line 1 "ENTRY_1065a4a0"

__declspec(naked) void FUN_1065a4a0(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 1065a500; body size 131 bytes.
#line 1 "ENTRY_1065a500"

__declspec(naked) void FUN_1065a500(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x3d __asm _emit 0xc7 __asm _emit 0x71 __asm _emit 0x1c __asm _emit 0x07 __asm _emit 0x77 __asm _emit 0x6f __asm _emit 0x8d
  __asm _emit 0x34 __asm _emit 0xc0 __asm _emit 0xc1 __asm _emit 0xe6 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xfe __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x34 __asm _emit 0x8d __asm _emit 0x46 __asm _emit 0x23
  __asm _emit 0x3b __asm _emit 0xc6 __asm _emit 0x76 __asm _emit 0x5a __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0xc6 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x56
  __asm call LAB_10024f14
  __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0xc6 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e
  __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 1065a5b0; body size 182 bytes.
#line 1 "ENTRY_1065a5b0"

__declspec(naked) void FUN_1065a5b0(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x81 __asm _emit 0xfb __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f
  __asm ja LAB_1065a661
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0xb8 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x55 __asm _emit 0x8b __asm _emit 0x2e __asm _emit 0x2b __asm _emit 0xcd __asm _emit 0xc1 __asm _emit 0xf9 __asm _emit 0x03
  __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0xd1 __asm _emit 0xea __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x57 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x07 __asm _emit 0xbf __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f
  __asm _emit 0xeb __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x3c __asm _emit 0x0a __asm _emit 0x3b __asm _emit 0xfb __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0xfb __asm _emit 0x85 __asm _emit 0xed __asm _emit 0x74 __asm _emit 0x4f __asm _emit 0x56 __asm _emit 0xff
  __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x55
  __asm call LAB_1007951e
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xe1 __asm _emit 0xf8 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc
  __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x3a __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_100805fd
  __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xf8 __asm _emit 0x5f __asm _emit 0x5d __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_10051c67
}






// Reference entry 1065ab80; body size 8 bytes.
#line 1 "ENTRY_1065ab80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1065ab80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1065abc0; body size 3 bytes.
#line 1 "ENTRY_1065abc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065abc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1065abd0; body size 3 bytes.
#line 1 "ENTRY_1065abd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065abd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1065abe0; body size 3 bytes.
#line 1 "ENTRY_1065abe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065abe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1065abf0; body size 3 bytes.
#line 1 "ENTRY_1065abf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065abf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1065ac00; body size 3 bytes.
#line 1 "ENTRY_1065ac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1065ac10; body size 3 bytes.
#line 1 "ENTRY_1065ac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1065ac20; body size 3 bytes.
#line 1 "ENTRY_1065ac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1065ac30; body size 3 bytes.
#line 1 "ENTRY_1065ac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1065ac40; body size 3 bytes.
#line 1 "ENTRY_1065ac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1065ac60; body size 4 bytes.
#line 1 "ENTRY_1065ac60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065ac60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1065ac70; body size 7 bytes.
#line 1 "ENTRY_1065ac70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1065ac70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1065ace0; body size 6 bytes.
#line 1 "ENTRY_1065ace0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1065ace0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1065acf0; body size 26 bytes.
#line 1 "ENTRY_1065acf0"

__declspec(naked) void FUN_1065acf0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1065ad10; body size 10 bytes.
#line 1 "ENTRY_1065ad10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1065ad10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1065af80; body size 90 bytes.
#line 1 "ENTRY_1065af80"

__declspec(naked) void FUN_1065af80(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0x0a __asm _emit 0x77 __asm _emit 0x4a __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x40 __asm _emit 0xc1 __asm _emit 0xe0
  __asm _emit 0x03 __asm _emit 0x3d __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 1065b000; body size 90 bytes.
#line 1 "ENTRY_1065b000"

__declspec(naked) void FUN_1065b000(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0x0a __asm _emit 0x77 __asm _emit 0x4a __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x40 __asm _emit 0xc1 __asm _emit 0xe0
  __asm _emit 0x03 __asm _emit 0x3d __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 1065b100; body size 7 bytes.
#line 1 "ENTRY_1065b100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1065b100(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -8);
}


// Reference entry 1065e690; body size 57 bytes.
#line 1 "ENTRY_1065e690"

__declspec(naked) void FUN_1065e690(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x40 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x03 __asm _emit 0x81 __asm _emit 0xf9
  __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 1065e6e0; body size 57 bytes.
#line 1 "ENTRY_1065e6e0"

__declspec(naked) void FUN_1065e6e0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x40 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x03 __asm _emit 0x81 __asm _emit 0xf9
  __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 1065e780; body size 3 bytes.
#line 1 "ENTRY_1065e780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1065e780(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1065e790; body size 7 bytes.
#line 1 "ENTRY_1065e790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1065e790(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x11d));
}


// Reference entry 10667e10; body size 23 bytes.
#line 1 "ENTRY_10667e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10667e10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x120));
  return (SCStr *)(param_2);
}


// Reference entry 1066d530; body size 7 bytes.
#line 1 "ENTRY_1066d530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1066d530(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x100));
}


// Reference entry 1066d540; body size 23 bytes.
#line 1 "ENTRY_1066d540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1066d540(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x124));
  return (SCStr *)(param_2);
}


// Reference entry 1066e440; body size 7 bytes.
#line 1 "ENTRY_1066e440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1066e440(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x11c));
}


// Reference entry 10677840; body size 6 bytes.
#line 1 "ENTRY_10677840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677840(void)

{
  return (undefined4)(DAT_121a2388);
}


// Reference entry 10677850; body size 6 bytes.
#line 1 "ENTRY_10677850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677850(void)

{
  return (undefined4)(DAT_121a23d8);
}


// Reference entry 10677860; body size 6 bytes.
#line 1 "ENTRY_10677860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677860(void)

{
  return (undefined4)(DAT_121a2390);
}


// Reference entry 10677870; body size 6 bytes.
#line 1 "ENTRY_10677870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677870(void)

{
  return (undefined4)(DAT_121a2394);
}


// Reference entry 10677880; body size 6 bytes.
#line 1 "ENTRY_10677880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677880(void)

{
  return (undefined4)(DAT_121a2378);
}


// Reference entry 10677890; body size 6 bytes.
#line 1 "ENTRY_10677890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677890(void)

{
  return (undefined4)(DAT_121a23b0);
}


// Reference entry 106778a0; body size 6 bytes.
#line 1 "ENTRY_106778a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778a0(void)

{
  return (undefined4)(DAT_121a2398);
}


// Reference entry 106778b0; body size 6 bytes.
#line 1 "ENTRY_106778b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778b0(void)

{
  return (undefined4)(DAT_121a2374);
}


// Reference entry 106778c0; body size 6 bytes.
#line 1 "ENTRY_106778c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778c0(void)

{
  return (undefined4)(DAT_121a23a8);
}


// Reference entry 106778d0; body size 6 bytes.
#line 1 "ENTRY_106778d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778d0(void)

{
  return (undefined4)(DAT_121a23fc);
}


// Reference entry 106778e0; body size 6 bytes.
#line 1 "ENTRY_106778e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778e0(void)

{
  return (undefined4)(DAT_121a23f0);
}


// Reference entry 106778f0; body size 6 bytes.
#line 1 "ENTRY_106778f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106778f0(void)

{
  return (undefined4)(DAT_121a23f8);
}


// Reference entry 10677900; body size 6 bytes.
#line 1 "ENTRY_10677900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677900(void)

{
  return (undefined4)(DAT_121a236c);
}


// Reference entry 10677910; body size 6 bytes.
#line 1 "ENTRY_10677910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677910(void)

{
  return (undefined4)(DAT_121a237c);
}


// Reference entry 10677920; body size 6 bytes.
#line 1 "ENTRY_10677920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677920(void)

{
  return (undefined4)(DAT_121a23f4);
}


// Reference entry 10677930; body size 6 bytes.
#line 1 "ENTRY_10677930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677930(void)

{
  return (undefined4)(DAT_121a23d4);
}


// Reference entry 10677940; body size 6 bytes.
#line 1 "ENTRY_10677940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677940(void)

{
  return (undefined4)(DAT_121a23c8);
}


// Reference entry 10677950; body size 6 bytes.
#line 1 "ENTRY_10677950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677950(void)

{
  return (undefined4)(DAT_121a239c);
}


// Reference entry 10677960; body size 6 bytes.
#line 1 "ENTRY_10677960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677960(void)

{
  return (undefined4)(DAT_121a2384);
}


// Reference entry 10677970; body size 6 bytes.
#line 1 "ENTRY_10677970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677970(void)

{
  return (undefined4)(DAT_121a23b8);
}


// Reference entry 10677980; body size 6 bytes.
#line 1 "ENTRY_10677980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677980(void)

{
  return (undefined4)(DAT_121a23ac);
}


// Reference entry 10677990; body size 6 bytes.
#line 1 "ENTRY_10677990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677990(void)

{
  return (undefined4)(DAT_121a23ec);
}


// Reference entry 106779a0; body size 6 bytes.
#line 1 "ENTRY_106779a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779a0(void)

{
  return (undefined4)(DAT_121a23c0);
}


// Reference entry 106779b0; body size 6 bytes.
#line 1 "ENTRY_106779b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779b0(void)

{
  return (undefined4)(DAT_121a238c);
}


// Reference entry 106779c0; body size 6 bytes.
#line 1 "ENTRY_106779c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779c0(void)

{
  return (undefined4)(DAT_121a2368);
}


// Reference entry 106779d0; body size 6 bytes.
#line 1 "ENTRY_106779d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779d0(void)

{
  return (undefined4)(DAT_121a23e0);
}


// Reference entry 106779e0; body size 6 bytes.
#line 1 "ENTRY_106779e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779e0(void)

{
  return (undefined4)(DAT_121a23dc);
}


// Reference entry 106779f0; body size 6 bytes.
#line 1 "ENTRY_106779f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106779f0(void)

{
  return (undefined4)(DAT_121a2380);
}


// Reference entry 10677a00; body size 6 bytes.
#line 1 "ENTRY_10677a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a00(void)

{
  return (undefined4)(DAT_121a23cc);
}


// Reference entry 10677a10; body size 6 bytes.
#line 1 "ENTRY_10677a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a10(void)

{
  return (undefined4)(DAT_121a23bc);
}


// Reference entry 10677a20; body size 6 bytes.
#line 1 "ENTRY_10677a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a20(void)

{
  return (undefined4)(DAT_121a23b4);
}


// Reference entry 10677a30; body size 6 bytes.
#line 1 "ENTRY_10677a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a30(void)

{
  return (undefined4)(DAT_121a23d0);
}


// Reference entry 10677a40; body size 6 bytes.
#line 1 "ENTRY_10677a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a40(void)

{
  return (undefined4)(DAT_121a2370);
}


// Reference entry 10677a50; body size 6 bytes.
#line 1 "ENTRY_10677a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a50(void)

{
  return (undefined4)(DAT_121a23e4);
}


// Reference entry 10677a60; body size 6 bytes.
#line 1 "ENTRY_10677a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a60(void)

{
  return (undefined4)(DAT_121a23c4);
}


// Reference entry 10677a70; body size 6 bytes.
#line 1 "ENTRY_10677a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a70(void)

{
  return (undefined4)(DAT_121a23e8);
}


// Reference entry 10677a80; body size 6 bytes.
#line 1 "ENTRY_10677a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a80(void)

{
  return (undefined4)(DAT_121a23a4);
}


// Reference entry 10677a90; body size 6 bytes.
#line 1 "ENTRY_10677a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677a90(void)

{
  return (undefined4)(DAT_121a23a0);
}


// Reference entry 10677aa0; body size 6 bytes.
#line 1 "ENTRY_10677aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10677aa0(void)

{
  return (undefined4)(DAT_121a2400);
}


// Reference entry 10677ab0; body size 5 bytes.
#line 1 "ENTRY_10677ab0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ab0(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677ac0; body size 5 bytes.
#line 1 "ENTRY_10677ac0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ac0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677ad0; body size 5 bytes.
#line 1 "ENTRY_10677ad0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ad0(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677ae0; body size 5 bytes.
#line 1 "ENTRY_10677ae0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ae0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677af0; body size 5 bytes.
#line 1 "ENTRY_10677af0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677af0(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677b00; body size 5 bytes.
#line 1 "ENTRY_10677b00"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b00(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677b10; body size 5 bytes.
#line 1 "ENTRY_10677b10"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b10(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677b20; body size 5 bytes.
#line 1 "ENTRY_10677b20"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b20(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677b30; body size 5 bytes.
#line 1 "ENTRY_10677b30"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b30(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677b40; body size 5 bytes.
#line 1 "ENTRY_10677b40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b40(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677b50; body size 5 bytes.
#line 1 "ENTRY_10677b50"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b50(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677b60; body size 5 bytes.
#line 1 "ENTRY_10677b60"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b60(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677b70; body size 5 bytes.
#line 1 "ENTRY_10677b70"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b70(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677b80; body size 5 bytes.
#line 1 "ENTRY_10677b80"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b80(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677b90; body size 5 bytes.
#line 1 "ENTRY_10677b90"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677b90(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677ba0; body size 5 bytes.
#line 1 "ENTRY_10677ba0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ba0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677bb0; body size 5 bytes.
#line 1 "ENTRY_10677bb0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677bb0(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677bc0; body size 5 bytes.
#line 1 "ENTRY_10677bc0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677bc0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677bd0; body size 5 bytes.
#line 1 "ENTRY_10677bd0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677bd0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677be0; body size 5 bytes.
#line 1 "ENTRY_10677be0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677be0(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677bf0; body size 5 bytes.
#line 1 "ENTRY_10677bf0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677bf0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677c00; body size 5 bytes.
#line 1 "ENTRY_10677c00"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c00(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677c10; body size 5 bytes.
#line 1 "ENTRY_10677c10"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c10(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677c20; body size 5 bytes.
#line 1 "ENTRY_10677c20"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c20(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677c30; body size 5 bytes.
#line 1 "ENTRY_10677c30"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c30(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677c40; body size 5 bytes.
#line 1 "ENTRY_10677c40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c40(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677c50; body size 5 bytes.
#line 1 "ENTRY_10677c50"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c50(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677c60; body size 5 bytes.
#line 1 "ENTRY_10677c60"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c60(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677c70; body size 5 bytes.
#line 1 "ENTRY_10677c70"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c70(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677c80; body size 5 bytes.
#line 1 "ENTRY_10677c80"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c80(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677c90; body size 5 bytes.
#line 1 "ENTRY_10677c90"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677c90(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677ca0; body size 5 bytes.
#line 1 "ENTRY_10677ca0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ca0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677cb0; body size 5 bytes.
#line 1 "ENTRY_10677cb0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677cb0(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677cc0; body size 5 bytes.
#line 1 "ENTRY_10677cc0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677cc0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677cd0; body size 5 bytes.
#line 1 "ENTRY_10677cd0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677cd0(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677ce0; body size 5 bytes.
#line 1 "ENTRY_10677ce0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ce0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10677cf0; body size 5 bytes.
#line 1 "ENTRY_10677cf0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677cf0(int param_1)

{ __asm jmp FUN_10064623 }


// Reference entry 10677d10; body size 7 bytes.
#line 1 "ENTRY_10677d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10677d10(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x10c));
}


// Reference entry 10677d20; body size 5 bytes.
#line 1 "ENTRY_10677d20"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d20(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 10677d30; body size 5 bytes.
#line 1 "ENTRY_10677d30"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d30(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677d40; body size 5 bytes.
#line 1 "ENTRY_10677d40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d40(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677d50; body size 5 bytes.
#line 1 "ENTRY_10677d50"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d50(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677d60; body size 5 bytes.
#line 1 "ENTRY_10677d60"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d60(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677d70; body size 5 bytes.
#line 1 "ENTRY_10677d70"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d70(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677d80; body size 5 bytes.
#line 1 "ENTRY_10677d80"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d80(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677d90; body size 5 bytes.
#line 1 "ENTRY_10677d90"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677d90(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677da0; body size 5 bytes.
#line 1 "ENTRY_10677da0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677da0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677db0; body size 5 bytes.
#line 1 "ENTRY_10677db0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677db0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677dc0; body size 5 bytes.
#line 1 "ENTRY_10677dc0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677dc0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677dd0; body size 5 bytes.
#line 1 "ENTRY_10677dd0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677dd0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677de0; body size 5 bytes.
#line 1 "ENTRY_10677de0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677de0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677df0; body size 5 bytes.
#line 1 "ENTRY_10677df0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677df0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677e00; body size 5 bytes.
#line 1 "ENTRY_10677e00"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e00(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677e10; body size 5 bytes.
#line 1 "ENTRY_10677e10"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e10(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677e20; body size 5 bytes.
#line 1 "ENTRY_10677e20"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e20(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677e30; body size 5 bytes.
#line 1 "ENTRY_10677e30"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e30(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677e40; body size 5 bytes.
#line 1 "ENTRY_10677e40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e40(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677e50; body size 5 bytes.
#line 1 "ENTRY_10677e50"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e50(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677e60; body size 5 bytes.
#line 1 "ENTRY_10677e60"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e60(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677e70; body size 5 bytes.
#line 1 "ENTRY_10677e70"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e70(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677e80; body size 5 bytes.
#line 1 "ENTRY_10677e80"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e80(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677e90; body size 5 bytes.
#line 1 "ENTRY_10677e90"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677e90(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677ea0; body size 5 bytes.
#line 1 "ENTRY_10677ea0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ea0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677eb0; body size 5 bytes.
#line 1 "ENTRY_10677eb0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677eb0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677ec0; body size 5 bytes.
#line 1 "ENTRY_10677ec0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ec0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677ed0; body size 5 bytes.
#line 1 "ENTRY_10677ed0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ed0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677ee0; body size 5 bytes.
#line 1 "ENTRY_10677ee0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ee0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677ef0; body size 5 bytes.
#line 1 "ENTRY_10677ef0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677ef0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677f00; body size 5 bytes.
#line 1 "ENTRY_10677f00"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f00(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677f10; body size 5 bytes.
#line 1 "ENTRY_10677f10"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f10(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677f20; body size 5 bytes.
#line 1 "ENTRY_10677f20"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f20(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677f30; body size 5 bytes.
#line 1 "ENTRY_10677f30"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f30(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677f40; body size 5 bytes.
#line 1 "ENTRY_10677f40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f40(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677f50; body size 5 bytes.
#line 1 "ENTRY_10677f50"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f50(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677f60; body size 5 bytes.
#line 1 "ENTRY_10677f60"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f60(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677f70; body size 5 bytes.
#line 1 "ENTRY_10677f70"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f70(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677f80; body size 5 bytes.
#line 1 "ENTRY_10677f80"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f80(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677f90; body size 5 bytes.
#line 1 "ENTRY_10677f90"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677f90(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677fa0; body size 5 bytes.
#line 1 "ENTRY_10677fa0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677fa0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677fb0; body size 5 bytes.
#line 1 "ENTRY_10677fb0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677fb0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10677fc0; body size 5 bytes.
#line 1 "ENTRY_10677fc0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677fc0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10677fd0; body size 5 bytes.
#line 1 "ENTRY_10677fd0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10677fd0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10678940; body size 7 bytes.
#line 1 "ENTRY_10678940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10678940(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10678960; body size 7 bytes.
#line 1 "ENTRY_10678960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10678960(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1067efa0; body size 3 bytes.
#line 1 "ENTRY_1067efa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1067efa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1067efb0; body size 3 bytes.
#line 1 "ENTRY_1067efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1067efb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1067efc0; body size 3 bytes.
#line 1 "ENTRY_1067efc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1067efc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1067f050; body size 28 bytes.
#line 1 "ENTRY_1067f050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1067f050(undefined4 *param_1)

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


// Reference entry 1067f080; body size 28 bytes.
#line 1 "ENTRY_1067f080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1067f080(undefined4 *param_1)

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


// Reference entry 1067f0b0; body size 28 bytes.
#line 1 "ENTRY_1067f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1067f0b0(undefined4 *param_1)

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


// Reference entry 1067f0e0; body size 28 bytes.
#line 1 "ENTRY_1067f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1067f0e0(undefined4 *param_1)

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


// Reference entry 1067f120; body size 5 bytes.
#line 1 "ENTRY_1067f120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1067f120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1067f130; body size 5 bytes.
#line 1 "ENTRY_1067f130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1067f130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1067f150; body size 13 bytes.
#line 1 "ENTRY_1067f150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1067f150(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x11d) = (undefined1)(param_2);
  return;
}


// Reference entry 1067f1f0; body size 13 bytes.
#line 1 "ENTRY_1067f1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1067f1f0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x11a) = (undefined1)(param_2);
  return;
}


// Reference entry 1067f320; body size 13 bytes.
#line 1 "ENTRY_1067f320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1067f320(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x11c) = (undefined1)(param_2);
  return;
}


// Reference entry 1067f330; body size 13 bytes.
#line 1 "ENTRY_1067f330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1067f330(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x100) = (undefined1)(param_2);
  return;
}


// Reference entry 1067f340; body size 31 bytes.
#line 1 "ENTRY_1067f340"

__declspec(naked) void FUN_1067f340(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x10 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x74 __asm _emit 0x0e __asm _emit 0xff __asm _emit 0x74
  __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10079df7
  __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1067f370; body size 9 bytes.
#line 1 "ENTRY_1067f370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1067f370(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 1067f450; body size 43 bytes.
#line 1 "ENTRY_1067f450"

__declspec(naked) void FUN_1067f450(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x0e __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc8
  __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1067f490; body size 5 bytes.
#line 1 "ENTRY_1067f490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1067f490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1067f4a0; body size 32 bytes.
#line 1 "ENTRY_1067f4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1067f4a0(undefined4 *param_2)
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


// Reference entry 1067f590; body size 10 bytes.
#line 1 "ENTRY_1067f590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1067f590(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1067f990; body size 8 bytes.
#line 1 "ENTRY_1067f990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1067f990(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1067f9a0; body size 3 bytes.
#line 1 "ENTRY_1067f9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1067f9a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1067fb10; body size 26 bytes.
#line 1 "ENTRY_1067fb10"

__declspec(naked) void FUN_1067fb10(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1067fb30; body size 76 bytes.
#line 1 "ENTRY_1067fb30"

__declspec(naked) void FUN_1067fb30(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x38 __asm _emit 0x3b
  __asm _emit 0xce __asm _emit 0x75 __asm _emit 0x2a __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xce __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52
  __asm _emit 0x10 __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x4f __asm _emit 0x24
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10680540; body size 3 bytes.
#line 1 "ENTRY_10680540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10680540(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106805d0; body size 28 bytes.
#line 1 "ENTRY_106805d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106805d0(undefined4 *param_1)

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


// Reference entry 106813e0; body size 18 bytes.
#line 1 "ENTRY_106813e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106813e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10681400; body size 18 bytes.
#line 1 "ENTRY_10681400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10681400(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10681420; body size 25 bytes.
#line 1 "ENTRY_10681420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10681420(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10681440; body size 33 bytes.
#line 1 "ENTRY_10681440"

__declspec(naked) void FUN_10681440(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1005273e
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10681470; body size 33 bytes.
#line 1 "ENTRY_10681470"

__declspec(naked) void FUN_10681470(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1005273e
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106814a0; body size 33 bytes.
#line 1 "ENTRY_106814a0"

__declspec(naked) void FUN_106814a0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1005273e
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106814d0; body size 33 bytes.
#line 1 "ENTRY_106814d0"

__declspec(naked) void FUN_106814d0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1005273e
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10681500; body size 33 bytes.
#line 1 "ENTRY_10681500"

__declspec(naked) void FUN_10681500(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1005273e
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10681530; body size 33 bytes.
#line 1 "ENTRY_10681530"

__declspec(naked) void FUN_10681530(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1005273e
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10681560; body size 33 bytes.
#line 1 "ENTRY_10681560"

__declspec(naked) void FUN_10681560(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1005273e
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10681590; body size 33 bytes.
#line 1 "ENTRY_10681590"

__declspec(naked) void FUN_10681590(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1005273e
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106815c0; body size 22 bytes.
#line 1 "ENTRY_106815c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106815c0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106815e0; body size 18 bytes.
#line 1 "ENTRY_106815e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106815e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10681600; body size 18 bytes.
#line 1 "ENTRY_10681600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10681600(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106817c0; body size 38 bytes.
#line 1 "ENTRY_106817c0"

__declspec(naked) void FUN_106817c0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 106817f0; body size 22 bytes.
#line 1 "ENTRY_106817f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106817f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10681810; body size 40 bytes.
#line 1 "ENTRY_10681810"

__declspec(naked) void FUN_10681810(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 10681850; body size 26 bytes.
#line 1 "ENTRY_10681850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10681850(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10681870; body size 12 bytes.
#line 1 "ENTRY_10681870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10681870(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10681880; body size 3 bytes.
#line 1 "ENTRY_10681880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10681880(void)

{
  return;
}


// Reference entry 10681890; body size 25 bytes.
#line 1 "ENTRY_10681890"

__declspec(naked) void FUN_10681890(void)

{
  __asm _emit 0x6a __asm _emit 0x1c
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0xc3
}






// Reference entry 106818b0; body size 25 bytes.
#line 1 "ENTRY_106818b0"

__declspec(naked) void FUN_106818b0(void)

{
  __asm _emit 0x6a __asm _emit 0x18
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0xc3
}






// Reference entry 106818d0; body size 13 bytes.
#line 1 "ENTRY_106818d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106818d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106818e0; body size 13 bytes.
#line 1 "ENTRY_106818e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106818e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106818f0; body size 13 bytes.
#line 1 "ENTRY_106818f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106818f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10681900; body size 13 bytes.
#line 1 "ENTRY_10681900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10681900(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10681910; body size 3 bytes.
#line 1 "ENTRY_10681910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10681910(void)

{
  return;
}


// Reference entry 10681920; body size 3 bytes.
#line 1 "ENTRY_10681920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10681920(void)

{
  return;
}


// Reference entry 106819d0; body size 39 bytes.
#line 1 "ENTRY_106819d0"

__declspec(naked) void FUN_106819d0(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10681a00; body size 39 bytes.
#line 1 "ENTRY_10681a00"

__declspec(naked) void FUN_10681a00(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10681a30; body size 39 bytes.
#line 1 "ENTRY_10681a30"

__declspec(naked) void FUN_10681a30(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10682460; body size 15 bytes.
#line 1 "ENTRY_10682460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10682460(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10682480; body size 15 bytes.
#line 1 "ENTRY_10682480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10682480(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 106825c0; body size 7 bytes.
#line 1 "ENTRY_106825c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106825c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106825d0; body size 7 bytes.
#line 1 "ENTRY_106825d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106825d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106825e0; body size 5 bytes.
#line 1 "ENTRY_106825e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106825e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106825f0; body size 5 bytes.
#line 1 "ENTRY_106825f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106825f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682600; body size 37 bytes.
#line 1 "ENTRY_10682600"

__declspec(naked) void FUN_10682600(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_10070fbd
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x05 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10682630; body size 37 bytes.
#line 1 "ENTRY_10682630"

__declspec(naked) void FUN_10682630(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_10070fbd
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x05 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10682660; body size 92 bytes.
#line 1 "ENTRY_10682660"

__declspec(naked) void FUN_10682660(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x3b __asm _emit 0xfb __asm _emit 0x74 __asm _emit 0x47 __asm _emit 0x56 __asm _emit 0x8b
  __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x3b __asm _emit 0x06 __asm _emit 0x74 __asm _emit 0x2c __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x14
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff
  __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05
  __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xc7 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0xfb __asm _emit 0x75 __asm _emit 0xc4 __asm _emit 0x8b
  __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5f __asm _emit 0x5b __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x5f __asm _emit 0x5b __asm _emit 0xc3
}






// Reference entry 10682820; body size 5 bytes.
#line 1 "ENTRY_10682820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682970; body size 5 bytes.
#line 1 "ENTRY_10682970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682980; body size 5 bytes.
#line 1 "ENTRY_10682980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682990; body size 5 bytes.
#line 1 "ENTRY_10682990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106829a0; body size 5 bytes.
#line 1 "ENTRY_106829a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106829b0; body size 5 bytes.
#line 1 "ENTRY_106829b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106829c0; body size 5 bytes.
#line 1 "ENTRY_106829c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106829d0; body size 5 bytes.
#line 1 "ENTRY_106829d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106829e0; body size 5 bytes.
#line 1 "ENTRY_106829e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106829f0; body size 5 bytes.
#line 1 "ENTRY_106829f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106829f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682a00; body size 5 bytes.
#line 1 "ENTRY_10682a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682a10; body size 5 bytes.
#line 1 "ENTRY_10682a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682a20; body size 5 bytes.
#line 1 "ENTRY_10682a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682a30; body size 34 bytes.
#line 1 "ENTRY_10682a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10682a30(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10682a60; body size 27 bytes.
#line 1 "ENTRY_10682a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10682a60(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_3 + 4));
  return;
}


// Reference entry 10682a90; body size 28 bytes.
#line 1 "ENTRY_10682a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10682a90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10682ac0; body size 28 bytes.
#line 1 "ENTRY_10682ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10682ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10682af0; body size 28 bytes.
#line 1 "ENTRY_10682af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10682af0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10682ce0; body size 15 bytes.
#line 1 "ENTRY_10682ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682ce0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10682d00; body size 15 bytes.
#line 1 "ENTRY_10682d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10682d20; body size 15 bytes.
#line 1 "ENTRY_10682d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10682d40; body size 15 bytes.
#line 1 "ENTRY_10682d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10682d60; body size 5 bytes.
#line 1 "ENTRY_10682d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682d70; body size 5 bytes.
#line 1 "ENTRY_10682d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682d80; body size 5 bytes.
#line 1 "ENTRY_10682d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682d90; body size 5 bytes.
#line 1 "ENTRY_10682d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682da0; body size 5 bytes.
#line 1 "ENTRY_10682da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682db0; body size 5 bytes.
#line 1 "ENTRY_10682db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682dc0; body size 5 bytes.
#line 1 "ENTRY_10682dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682dd0; body size 5 bytes.
#line 1 "ENTRY_10682dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682de0; body size 5 bytes.
#line 1 "ENTRY_10682de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682df0; body size 5 bytes.
#line 1 "ENTRY_10682df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682e00; body size 5 bytes.
#line 1 "ENTRY_10682e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682e10; body size 5 bytes.
#line 1 "ENTRY_10682e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682e20; body size 6 bytes.
#line 1 "ENTRY_10682e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10682e20(void)

{
  return (char *)("SCIUrlRequest");
}


// Reference entry 10682f80; body size 5 bytes.
#line 1 "ENTRY_10682f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10682f90; body size 32 bytes.
#line 1 "ENTRY_10682f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10682f90(undefined4 *param_2)
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


// Reference entry 10683000; body size 32 bytes.
#line 1 "ENTRY_10683000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10683000(undefined4 *param_2)
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


// Reference entry 10683070; body size 16 bytes.
#line 1 "ENTRY_10683070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10683070(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10683090; body size 18 bytes.
#line 1 "ENTRY_10683090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10683090(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106830b0; body size 18 bytes.
#line 1 "ENTRY_106830b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106830b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10683150; body size 11 bytes.
#line 1 "ENTRY_10683150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10683150(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10683160; body size 11 bytes.
#line 1 "ENTRY_10683160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10683160(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10683270; body size 11 bytes.
#line 1 "ENTRY_10683270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10683270(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10683280; body size 11 bytes.
#line 1 "ENTRY_10683280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10683280(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10683290; body size 16 bytes.
#line 1 "ENTRY_10683290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10683290(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106832b0; body size 16 bytes.
#line 1 "ENTRY_106832b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106832b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106832d0; body size 21 bytes.
#line 1 "ENTRY_106832d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106832d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106832f0; body size 11 bytes.
#line 1 "ENTRY_106832f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106832f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10683300; body size 11 bytes.
#line 1 "ENTRY_10683300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10683300(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10683310; body size 23 bytes.
#line 1 "ENTRY_10683310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10683310(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10683330; body size 3 bytes.
#line 1 "ENTRY_10683330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10683330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10683340; body size 3 bytes.
#line 1 "ENTRY_10683340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10683340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10683350; body size 3 bytes.
#line 1 "ENTRY_10683350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10683350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10683360; body size 18 bytes.
#line 1 "ENTRY_10683360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10683360(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10683380; body size 52 bytes.
#line 1 "ENTRY_10683380"

__declspec(naked) void FUN_10683380(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 10683550; body size 33 bytes.
#line 1 "ENTRY_10683550"

__declspec(naked) void FUN_10683550(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x56 __asm _emit 0x89 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_10036c23
  __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10683580; body size 23 bytes.
#line 1 "ENTRY_10683580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10683580(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10684370; body size 7 bytes.
#line 1 "ENTRY_10684370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10684370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 106846b0; body size 11 bytes.
#line 1 "ENTRY_106846b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106846b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);

  FUN_106845c0(param_1);

}


// Reference entry 106846c0; body size 65 bytes.
#line 1 "ENTRY_106846c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106846c0(int *param_2)
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


// Reference entry 10684720; body size 65 bytes.
#line 1 "ENTRY_10684720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10684720(int *param_2)
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


// Reference entry 10684780; body size 14 bytes.
#line 1 "ENTRY_10684780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10684780(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106847a0; body size 14 bytes.
#line 1 "ENTRY_106847a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106847a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106847c0; body size 14 bytes.
#line 1 "ENTRY_106847c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106847c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106847e0; body size 14 bytes.
#line 1 "ENTRY_106847e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106847e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10684910; body size 3 bytes.
#line 1 "ENTRY_10684910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10684910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10684920; body size 3 bytes.
#line 1 "ENTRY_10684920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10684920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10684930; body size 7 bytes.
#line 1 "ENTRY_10684930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10684930(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10684940; body size 8 bytes.
#line 1 "ENTRY_10684940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10684940(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10684950; body size 3 bytes.
#line 1 "ENTRY_10684950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10684950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10684960; body size 3 bytes.
#line 1 "ENTRY_10684960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10684960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10684970; body size 6 bytes.
#line 1 "ENTRY_10684970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10684970(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10684980; body size 6 bytes.
#line 1 "ENTRY_10684980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10684980(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10684990; body size 6 bytes.
#line 1 "ENTRY_10684990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10684990(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106849a0; body size 6 bytes.
#line 1 "ENTRY_106849a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106849a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106849b0; body size 3 bytes.
#line 1 "ENTRY_106849b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106849b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106849c0; body size 3 bytes.
#line 1 "ENTRY_106849c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106849c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10684b90; body size 6 bytes.
#line 1 "ENTRY_10684b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10684b90(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10684ba0; body size 6 bytes.
#line 1 "ENTRY_10684ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10684ba0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10684c50; body size 29 bytes.
#line 1 "ENTRY_10684c50"

__declspec(naked) void FUN_10684c50(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x74
  __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 10684fd0; body size 31 bytes.
#line 1 "ENTRY_10684fd0"

__declspec(naked) void FUN_10684fd0(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 10685000; body size 31 bytes.
#line 1 "ENTRY_10685000"

__declspec(naked) void FUN_10685000(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 10685070; body size 49 bytes.
#line 1 "ENTRY_10685070"

__declspec(naked) void FUN_10685070(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0xb9 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf2
  __asm _emit 0xd1 __asm _emit 0xee __asm _emit 0x2b __asm _emit 0xce __asm _emit 0x3b __asm _emit 0xd1 __asm _emit 0x76 __asm _emit 0x09 __asm _emit 0xb8 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x16 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 10685140; body size 14 bytes.
#line 1 "ENTRY_10685140"

__declspec(naked) void FUN_10685140(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x04 __asm _emit 0x49 __asm _emit 0x92 __asm _emit 0x24 __asm _emit 0x09
  __asm je LAB_1000d4ae
  __asm _emit 0xc3
}






// Reference entry 10685160; body size 14 bytes.
#line 1 "ENTRY_10685160"

__declspec(naked) void FUN_10685160(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x04 __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0x0a
  __asm je LAB_1000d4ae
  __asm _emit 0xc3
}






// Reference entry 10685180; body size 3 bytes.
#line 1 "ENTRY_10685180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10685180(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 106851b0; body size 5 bytes.
#line 1 "ENTRY_106851b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106851b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106851c0; body size 3 bytes.
#line 1 "ENTRY_106851c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106851c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106851d0; body size 3 bytes.
#line 1 "ENTRY_106851d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106851d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106851e0; body size 3 bytes.
#line 1 "ENTRY_106851e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106851e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106851f0; body size 3 bytes.
#line 1 "ENTRY_106851f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106851f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10685200; body size 3 bytes.
#line 1 "ENTRY_10685200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10685210; body size 3 bytes.
#line 1 "ENTRY_10685210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10685220; body size 3 bytes.
#line 1 "ENTRY_10685220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10685230; body size 3 bytes.
#line 1 "ENTRY_10685230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10685240; body size 3 bytes.
#line 1 "ENTRY_10685240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10685250; body size 3 bytes.
#line 1 "ENTRY_10685250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10685260; body size 3 bytes.
#line 1 "ENTRY_10685260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10685270; body size 3 bytes.
#line 1 "ENTRY_10685270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10685280; body size 3 bytes.
#line 1 "ENTRY_10685280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10685290; body size 3 bytes.
#line 1 "ENTRY_10685290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106852a0; body size 3 bytes.
#line 1 "ENTRY_106852a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106852b0; body size 3 bytes.
#line 1 "ENTRY_106852b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106852c0; body size 3 bytes.
#line 1 "ENTRY_106852c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106852d0; body size 3 bytes.
#line 1 "ENTRY_106852d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106852e0; body size 3 bytes.
#line 1 "ENTRY_106852e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106852f0; body size 3 bytes.
#line 1 "ENTRY_106852f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106852f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10685820; body size 79 bytes.
#line 1 "ENTRY_10685820"

__declspec(naked) void FUN_10685820(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x72 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x89 __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x80
  __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x03 __asm _emit 0x89 __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x3b __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x75 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x89 __asm _emit 0x72 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0x10 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x89 __asm _emit 0x72 __asm _emit 0x04 __asm _emit 0x5e
  __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x89 __asm _emit 0x72 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10685890; body size 79 bytes.
#line 1 "ENTRY_10685890"

__declspec(naked) void FUN_10685890(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x72 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x89 __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x80
  __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x03 __asm _emit 0x89 __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x3b __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x75 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x89 __asm _emit 0x72 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0x10 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x89 __asm _emit 0x72 __asm _emit 0x04 __asm _emit 0x5e
  __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x89 __asm _emit 0x72 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10685900; body size 30 bytes.
#line 1 "ENTRY_10685900"

__declspec(naked) void FUN_10685900(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0e __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf5 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc3
}






// Reference entry 10685930; body size 31 bytes.
#line 1 "ENTRY_10685930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10685930(int *param_1)

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


// Reference entry 10685960; body size 31 bytes.
#line 1 "ENTRY_10685960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10685960(int *param_1)

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


// Reference entry 10685990; body size 3 bytes.
#line 1 "ENTRY_10685990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10685990(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 106859a0; body size 3 bytes.
#line 1 "ENTRY_106859a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106859a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106859b0; body size 11 bytes.
#line 1 "ENTRY_106859b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106859b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106859c0; body size 11 bytes.
#line 1 "ENTRY_106859c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106859c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106859d0; body size 6 bytes.
#line 1 "ENTRY_106859d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106859d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106859e0; body size 83 bytes.
#line 1 "ENTRY_106859e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106859e0(int *param_2)
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


// Reference entry 10685a50; body size 83 bytes.
#line 1 "ENTRY_10685a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10685a50(int *param_2)
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


// Reference entry 10685d40; body size 97 bytes.
#line 1 "ENTRY_10685d40"

__declspec(naked) void FUN_10685d40(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x49 __asm _emit 0x92 __asm _emit 0x24 __asm _emit 0x09 __asm _emit 0x77 __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xcd __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc1 __asm _emit 0xc1 __asm _emit 0xe0 __asm _emit 0x02 __asm _emit 0x3d __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d
  __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 10685dc0; body size 90 bytes.
#line 1 "ENTRY_10685dc0"

__declspec(naked) void FUN_10685dc0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0x0a __asm _emit 0x77 __asm _emit 0x4a __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x40 __asm _emit 0xc1 __asm _emit 0xe0
  __asm _emit 0x03 __asm _emit 0x3d __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 10685e40; body size 87 bytes.
#line 1 "ENTRY_10685e40"

__declspec(naked) void FUN_10685e40(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x47 __asm _emit 0xc1 __asm _emit 0xe0 __asm _emit 0x03 __asm _emit 0x3d __asm _emit 0x00
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 10685f10; body size 13 bytes.
#line 1 "ENTRY_10685f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10685f10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10685f20; body size 3 bytes.
#line 1 "ENTRY_10685f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10685f20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10685f30; body size 11 bytes.
#line 1 "ENTRY_10685f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10685f30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10685f40; body size 9 bytes.
#line 1 "ENTRY_10685f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10685f40(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10685f80; body size 13 bytes.
#line 1 "ENTRY_10685f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10685f80(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
                    
                    
    ((SCVtbl_8_0*)(*(int **)(param_1 + 0x20)))->v();
    return;
  }
  return;
}


// Reference entry 10686260; body size 63 bytes.
#line 1 "ENTRY_10686260"

__declspec(naked) void FUN_10686260(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83
  __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 106862b0; body size 57 bytes.
#line 1 "ENTRY_106862b0"

__declspec(naked) void FUN_106862b0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x40 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x03 __asm _emit 0x81 __asm _emit 0xf9
  __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 10686300; body size 66 bytes.
#line 1 "ENTRY_10686300"

__declspec(naked) void FUN_10686300(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83
  __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 10686360; body size 60 bytes.
#line 1 "ENTRY_10686360"

__declspec(naked) void FUN_10686360(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x40 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x03 __asm _emit 0x81 __asm _emit 0xf9
  __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 10686400; body size 11 bytes.
#line 1 "ENTRY_10686400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10686400(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10686410; body size 4 bytes.
#line 1 "ENTRY_10686410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10686410(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10686420; body size 12 bytes.
#line 1 "ENTRY_10686420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10686420(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10686430; body size 13 bytes.
#line 1 "ENTRY_10686430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10686430(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
                    
                    
    ((SCVtbl_7_0*)(*(int **)(param_1 + 0x20)))->v();
    return;
  }
  return;
}


// Reference entry 10687200; body size 6 bytes.
#line 1 "ENTRY_10687200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10687200(void)

{
  return (char *)("SCIUrlRequest");
}


// Reference entry 10687210; body size 6 bytes.
#line 1 "ENTRY_10687210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687210(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10687220; body size 6 bytes.
#line 1 "ENTRY_10687220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687220(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10687230; body size 6 bytes.
#line 1 "ENTRY_10687230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687230(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10687240; body size 6 bytes.
#line 1 "ENTRY_10687240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687240(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10687250; body size 6 bytes.
#line 1 "ENTRY_10687250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687250(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10687260; body size 6 bytes.
#line 1 "ENTRY_10687260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10687260(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 106872a0; body size 5 bytes.
#line 1 "ENTRY_106872a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106872a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106872b0; body size 5 bytes.
#line 1 "ENTRY_106872b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106872b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10687760; body size 3 bytes.
#line 1 "ENTRY_10687760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10687760(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10687770; body size 3 bytes.
#line 1 "ENTRY_10687770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10687770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10687a10; body size 28 bytes.
#line 1 "ENTRY_10687a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10687a10(undefined4 *param_1)

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


// Reference entry 10687d10; body size 40 bytes.
#line 1 "ENTRY_10687d10"

__declspec(naked) void FUN_10687d10(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x50 __asm _emit 0x89 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_100399be
  __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10687d50; body size 6 bytes.
#line 1 "ENTRY_10687d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10687d50(void)

{
  return (char *)("SCIShare");
}


// Reference entry 10687d60; body size 6 bytes.
#line 1 "ENTRY_10687d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10687d60(void)

{
  return (char *)("SCIShareManager");
}


// Reference entry 10687e50; body size 27 bytes.
#line 1 "ENTRY_10687e50"

__declspec(naked) void FUN_10687e50(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_118c6080
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 10688020; body size 154 bytes.
#line 1 "ENTRY_10688020"

__declspec(naked) void FUN_10688020(void)

{
  __asm _emit 0x51 __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x89 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0xce __asm _emit 0x80 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x4c __asm _emit 0xeb __asm _emit 0x03 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x48 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0xd8
  __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x40
  __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0xf0 __asm _emit 0x8b
  __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x50 __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x04
  __asm push offset LAB_118c62c8
  __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x68 __asm _emit 0x50 __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0xcf
  __asm call LAB_10013336
  __asm mov dword ptr [edi], offset LAB_118c6238
  __asm _emit 0x8b __asm _emit 0xc7
  __asm mov dword ptr [edi + 0x60], offset LAB_118c6280
  __asm mov dword ptr [edi + 0x46c], offset LAB_118c62bc
  __asm _emit 0xc6 __asm _emit 0x87 __asm _emit 0xd0 __asm _emit 0xd7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc6 __asm _emit 0x87 __asm _emit 0xd0 __asm _emit 0xdb __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x5e
  __asm _emit 0x5b __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x18 __asm _emit 0x00
}






// Reference entry 106880e0; body size 11 bytes.
#line 1 "ENTRY_106880e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106880e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIShare);
  return (undefined4 *)(param_1);
}


// Reference entry 106880f0; body size 9 bytes.
#line 1 "ENTRY_106880f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106880f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIShare);
  return (undefined4 *)(param_1);
}


// Reference entry 10688100; body size 9 bytes.
#line 1 "ENTRY_10688100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10688100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIShareManager);
  return (undefined4 *)(param_1);
}


// Reference entry 106885e0; body size 87 bytes.
#line 1 "ENTRY_106885e0"

__declspec(naked) void FUN_106885e0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18
  __asm call LAB_10086dd1
  __asm mov dword ptr [esi], offset LAB_118c5e88
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 0x18], offset LAB_118c5fb8
  __asm mov dword ptr [esi + 0x38], offset LAB_118c5fc4
  __asm mov dword ptr [esi + 0x3c], offset LAB_118c5fec
  __asm mov dword ptr [esi + 0x40], offset LAB_118c6018
  __asm mov dword ptr [esi + 0x44], offset LAB_118c603c
  __asm mov dword ptr [esi + 0x118], offset LAB_118c6064
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 10688ad0; body size 28 bytes.
#line 1 "ENTRY_10688ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10688ad0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10688b00; body size 7 bytes.
#line 1 "ENTRY_10688b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10688b00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10688b10; body size 7 bytes.
#line 1 "ENTRY_10688b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10688b10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10688c90; body size 56 bytes.
#line 1 "ENTRY_10688c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10688c90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  pa_1[6] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  pa_1[14] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  pa_1[15] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  pa_1[16] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  pa_1[17] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  pa_1[70] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  FUN_1002e915<>();
  return;
}


// Reference entry 10688e70; body size 5 bytes.
#line 1 "ENTRY_10688e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10688e70(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10688eb0; body size 7 bytes.
#line 1 "ENTRY_10688eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10688eb0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10688ec0; body size 4 bytes.
#line 1 "ENTRY_10688ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10688ec0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10689680; body size 6 bytes.
#line 1 "ENTRY_10689680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10689680(void)

{
  return (char *)("SCShareManager");
}


// Reference entry 1068a160; body size 16 bytes.
#line 1 "ENTRY_1068a160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1068a160(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1068a180; body size 21 bytes.
#line 1 "ENTRY_1068a180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_1068a180(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCShareManager");
  return (SCStr *)(param_1);
}


// Reference entry 1068a730; body size 7 bytes.
#line 1 "ENTRY_1068a730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1068a730(int param_1)

{
  return (int)(param_1 + 0x430);
}


// Reference entry 1068ad80; body size 6 bytes.
#line 1 "ENTRY_1068ad80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1068ad80(void)

{
  return (char *)("SCIShare");
}


// Reference entry 1068ad90; body size 6 bytes.
#line 1 "ENTRY_1068ad90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1068ad90(void)

{
  return (char *)("SCIShareManager");
}


// Reference entry 1068b960; body size 28 bytes.
#line 1 "ENTRY_1068b960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1068b960(undefined4 *param_1)

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


// Reference entry 1068bea0; body size 6 bytes.
#line 1 "ENTRY_1068bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068bea0(void)

{
  return (undefined4)(0x1fe);
}


// Reference entry 1068bfe0; body size 39 bytes.
#line 1 "ENTRY_1068bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068bfe0(undefined4 *param_1)

{
  param_1[0x1fe] = (undefined4)(0);
  param_1[0x1ff] = (undefined4)(0);
  param_1[0x200] = (undefined4)(0);
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1068c040; body size 241 bytes.
#line 1 "ENTRY_1068c040"

__declspec(naked) void FUN_1068c040(void)

{
  __asm _emit 0x51 __asm _emit 0x53 __asm _emit 0x55 __asm _emit 0x8b __asm _emit 0x6c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xd5 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x6c __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0x57 __asm _emit 0x8d __asm _emit 0x4a __asm _emit 0x01 __asm _emit 0x8a __asm _emit 0x02 __asm _emit 0x42 __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x86 __asm _emit 0xf8 __asm _emit 0x07 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xd1 __asm _emit 0x8d __asm _emit 0x5a __asm _emit 0x01 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x12 __asm _emit 0x81 __asm _emit 0xfb __asm _emit 0xfe __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x77 __asm _emit 0x0a __asm _emit 0x8d __asm _emit 0x8e __asm _emit 0xf8 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0xeb __asm _emit 0x55 __asm _emit 0x39 __asm _emit 0x9e __asm _emit 0xfc __asm _emit 0x07
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x73 __asm _emit 0x15 __asm _emit 0x50
  __asm call LAB_1005e133
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf8 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xeb __asm _emit 0x04 __asm _emit 0x85
  __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x2b __asm _emit 0x33 __asm _emit 0xc9 __asm _emit 0x89 __asm _emit 0x9e __asm _emit 0xfc __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc3 __asm _emit 0xba __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xf7 __asm _emit 0xe2 __asm _emit 0x0f __asm _emit 0x90 __asm _emit 0xc1 __asm _emit 0xf7 __asm _emit 0xd9 __asm _emit 0x0b __asm _emit 0xc8 __asm _emit 0x51
  __asm call LAB_100381ea
  __asm _emit 0x8b __asm _emit 0x6c __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x86 __asm _emit 0xf8 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x8e __asm _emit 0xfc
  __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x88 __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0x51 __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x2b __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x28 __asm _emit 0x50
  __asm call LAB_1003c92f
  __asm _emit 0x8b __asm _emit 0x8e __asm _emit 0xf8 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x14 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x8b __asm _emit 0xd6 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xd1
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x1e __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0xca __asm _emit 0x76 __asm _emit 0x16 __asm _emit 0x2b __asm _emit 0xca __asm _emit 0x8b __asm _emit 0xc2
  __asm _emit 0xc1 __asm _emit 0xf9 __asm _emit 0x02 __asm _emit 0x5f __asm _emit 0x49 __asm _emit 0x89 __asm _emit 0x8e __asm _emit 0x00 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0x59 __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x00 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x5e
  __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1068c190; body size 25 bytes.
#line 1 "ENTRY_1068c190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1068c1b0; body size 25 bytes.
#line 1 "ENTRY_1068c1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c1b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1068c1d0; body size 25 bytes.
#line 1 "ENTRY_1068c1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c1d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1068c1f0; body size 22 bytes.
#line 1 "ENTRY_1068c1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1068c1f0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1068c2a0; body size 22 bytes.
#line 1 "ENTRY_1068c2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1068c2a0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1068c370; body size 18 bytes.
#line 1 "ENTRY_1068c370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c370(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1068c390; body size 25 bytes.
#line 1 "ENTRY_1068c390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c390(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1068c3b0; body size 25 bytes.
#line 1 "ENTRY_1068c3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c3b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1068c3d0; body size 5 bytes.
#line 1 "ENTRY_1068c3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1068c3d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068c3e0; body size 5 bytes.
#line 1 "ENTRY_1068c3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1068c3e0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068c600; body size 22 bytes.
#line 1 "ENTRY_1068c600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1068c600(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1068c620; body size 33 bytes.
#line 1 "ENTRY_1068c620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1068c620(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 1068c650; body size 25 bytes.
#line 1 "ENTRY_1068c650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1068c650(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1068c670; body size 33 bytes.
#line 1 "ENTRY_1068c670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1068c670(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 1068c6a0; body size 26 bytes.
#line 1 "ENTRY_1068c6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1068c6a0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1068c6c0; body size 91 bytes.
#line 1 "ENTRY_1068c6c0"

__declspec(naked) void FUN_1068c6c0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf
  __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1068c740; body size 34 bytes.
#line 1 "ENTRY_1068c740"

__declspec(naked) void FUN_1068c740(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0xf7 __asm _emit 0xda __asm _emit 0x1b __asm _emit 0xd2 __asm _emit 0x23 __asm _emit 0xd0 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x11 __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1068c770; body size 12 bytes.
#line 1 "ENTRY_1068c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1068c770(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1068c890; body size 3 bytes.
#line 1 "ENTRY_1068c890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c890(void)

{
  return;
}


// Reference entry 1068c8a0; body size 3 bytes.
#line 1 "ENTRY_1068c8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c8a0(void)

{
  return;
}


// Reference entry 1068c8b0; body size 3 bytes.
#line 1 "ENTRY_1068c8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c8b0(void)

{
  return;
}


// Reference entry 1068c8e0; body size 13 bytes.
#line 1 "ENTRY_1068c8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c8e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1068c8f0; body size 13 bytes.
#line 1 "ENTRY_1068c8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c8f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1068c900; body size 13 bytes.
#line 1 "ENTRY_1068c900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c900(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1068c910; body size 3 bytes.
#line 1 "ENTRY_1068c910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c910(void)

{
  return;
}


// Reference entry 1068c920; body size 3 bytes.
#line 1 "ENTRY_1068c920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068c920(void)

{
  return;
}


// Reference entry 1068ca40; body size 39 bytes.
#line 1 "ENTRY_1068ca40"

__declspec(naked) void FUN_1068ca40(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1068ca70; body size 39 bytes.
#line 1 "ENTRY_1068ca70"

__declspec(naked) void FUN_1068ca70(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1068caa0; body size 18 bytes.
#line 1 "ENTRY_1068caa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1068caa0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 1068cb40; body size 39 bytes.
#line 1 "ENTRY_1068cb40"

__declspec(naked) void FUN_1068cb40(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1068cb70; body size 39 bytes.
#line 1 "ENTRY_1068cb70"

__declspec(naked) void FUN_1068cb70(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1068cba0; body size 39 bytes.
#line 1 "ENTRY_1068cba0"

__declspec(naked) void FUN_1068cba0(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1068cbd0; body size 39 bytes.
#line 1 "ENTRY_1068cbd0"

__declspec(naked) void FUN_1068cbd0(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1068d530; body size 41 bytes.
#line 1 "ENTRY_1068d530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068d530(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_1148a50e(puVar2,0x10);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 1068d570; body size 15 bytes.
#line 1 "ENTRY_1068d570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068d570(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 1068d590; body size 15 bytes.
#line 1 "ENTRY_1068d590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068d590(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 1068d5b0; body size 7 bytes.
#line 1 "ENTRY_1068d5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d5b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1068d5c0; body size 7 bytes.
#line 1 "ENTRY_1068d5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d5c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1068d5d0; body size 7 bytes.
#line 1 "ENTRY_1068d5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d5d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1068d5e0; body size 7 bytes.
#line 1 "ENTRY_1068d5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d5e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1068d5f0; body size 7 bytes.
#line 1 "ENTRY_1068d5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d5f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1068d600; body size 7 bytes.
#line 1 "ENTRY_1068d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d600(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1068d610; body size 5 bytes.
#line 1 "ENTRY_1068d610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068d610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068d7d0; body size 148 bytes.
#line 1 "ENTRY_1068d7d0"

__declspec(naked) void FUN_1068d7d0(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0xc1 __asm _emit 0xf8 __asm _emit 0x03 __asm _emit 0x83
  __asm _emit 0xf8 __asm _emit 0x28 __asm _emit 0x7e __asm _emit 0x6d __asm _emit 0x53 __asm _emit 0x55 __asm _emit 0x40 __asm _emit 0xc1 __asm _emit 0xf8 __asm _emit 0x03 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xe8 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x74
  __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0xc1 __asm _emit 0xe5 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x3c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x17 __asm _emit 0x8d
  __asm _emit 0x04 __asm _emit 0x2a __asm _emit 0x50 __asm _emit 0x51 __asm _emit 0x52
  __asm call LAB_10044b02
  __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x28 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x30 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x1f __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xc3 __asm _emit 0x2b __asm _emit 0xc7
  __asm _emit 0x53 __asm _emit 0x50
  __asm call LAB_10044b02
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x40 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x40 __asm _emit 0x8b __asm _emit 0xf0 __asm _emit 0x50 __asm _emit 0x2b __asm _emit 0xf7 __asm _emit 0x2b __asm _emit 0xc5 __asm _emit 0x56
  __asm _emit 0x50
  __asm call LAB_10044b02
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x48 __asm _emit 0x56 __asm _emit 0x03 __asm _emit 0xc7 __asm _emit 0x53 __asm _emit 0x50
  __asm call LAB_10044b02
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x40 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0xc3 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x51 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x10 __asm _emit 0x52
  __asm call LAB_10044b02
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x10 __asm _emit 0xc3
}






// Reference entry 1068dc50; body size 5 bytes.
#line 1 "ENTRY_1068dc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068dc50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068ddc0; body size 93 bytes.
#line 1 "ENTRY_1068ddc0"

__declspec(naked) void FUN_1068ddc0(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0xfb __asm _emit 0x74 __asm _emit 0x48 __asm _emit 0x56 __asm _emit 0x8b
  __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0xf8 __asm _emit 0x83 __asm _emit 0xef __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xee __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0x06 __asm _emit 0x74 __asm _emit 0x2c
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x14 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04
  __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0xfb __asm _emit 0x75 __asm _emit 0xc3
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5f __asm _emit 0x5b __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x5f __asm _emit 0x5b __asm _emit 0xc3
}






// Reference entry 1068de40; body size 8 bytes.
#line 1 "ENTRY_1068de40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1068de40(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 1068ede0; body size 11 bytes.
#line 1 "ENTRY_1068ede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068ede0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1068f030; body size 92 bytes.
#line 1 "ENTRY_1068f030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068f030(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_1);
  if ((int)(iVar2) != *param_3) {
    piVar1 = (int *)((int *)param_3[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_3 = (int)(0);
      param_3[1] = (int)(0);
      ((SCVtbl_2_0*)(piVar1))->v();
      iVar2 = (int)(*param_1);
    }
    *param_3 = (int)(iVar2);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar1))->v();
    }
  }
  thunk_FUN_1068edf0(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 1068f1c0; body size 8 bytes.
#line 1 "ENTRY_1068f1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1068f1c0(int param_1)

{
  return (int)(param_1 + -8);
}


// Reference entry 1068f4c0; body size 13 bytes.
#line 1 "ENTRY_1068f4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068f4c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1068f8f0; body size 24 bytes.
#line 1 "ENTRY_1068f8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1068f8f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1068fa70(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1068f910; body size 5 bytes.
#line 1 "ENTRY_1068f910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068f910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068fd00; body size 5 bytes.
#line 1 "ENTRY_1068fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068fd10; body size 5 bytes.
#line 1 "ENTRY_1068fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068fd20; body size 5 bytes.
#line 1 "ENTRY_1068fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068fd40; body size 5 bytes.
#line 1 "ENTRY_1068fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068fd50; body size 5 bytes.
#line 1 "ENTRY_1068fd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068fd60; body size 5 bytes.
#line 1 "ENTRY_1068fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068fd70; body size 5 bytes.
#line 1 "ENTRY_1068fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068fd80; body size 5 bytes.
#line 1 "ENTRY_1068fd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068fd90; body size 5 bytes.
#line 1 "ENTRY_1068fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1068fd90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1068fda0; body size 11 bytes.
#line 1 "ENTRY_1068fda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068fda0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1068fdb0; body size 22 bytes.
#line 1 "ENTRY_1068fdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068fdb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(*param_4);
  return;
}


// Reference entry 1068feb0; body size 28 bytes.
#line 1 "ENTRY_1068feb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068feb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1068fee0; body size 28 bytes.
#line 1 "ENTRY_1068fee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068fee0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1068ff10; body size 28 bytes.
#line 1 "ENTRY_1068ff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068ff10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1068ff40; body size 28 bytes.
#line 1 "ENTRY_1068ff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068ff40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1068ff70; body size 28 bytes.
#line 1 "ENTRY_1068ff70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068ff70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1068ffa0; body size 28 bytes.
#line 1 "ENTRY_1068ffa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068ffa0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10690130; body size 3 bytes.
#line 1 "ENTRY_10690130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10690130(void)

{
  return;
}


// Reference entry 10690580; body size 15 bytes.
#line 1 "ENTRY_10690580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690580(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106905a0; body size 15 bytes.
#line 1 "ENTRY_106905a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106905a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106905c0; body size 15 bytes.
#line 1 "ENTRY_106905c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106905c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106906e0; body size 5 bytes.
#line 1 "ENTRY_106906e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106906e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106906f0; body size 5 bytes.
#line 1 "ENTRY_106906f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106906f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690700; body size 5 bytes.
#line 1 "ENTRY_10690700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690710; body size 5 bytes.
#line 1 "ENTRY_10690710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690720; body size 5 bytes.
#line 1 "ENTRY_10690720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690730; body size 5 bytes.
#line 1 "ENTRY_10690730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690740; body size 5 bytes.
#line 1 "ENTRY_10690740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690750; body size 5 bytes.
#line 1 "ENTRY_10690750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690770; body size 5 bytes.
#line 1 "ENTRY_10690770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690780; body size 5 bytes.
#line 1 "ENTRY_10690780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690790; body size 5 bytes.
#line 1 "ENTRY_10690790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106907a0; body size 5 bytes.
#line 1 "ENTRY_106907a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106907a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106907b0; body size 5 bytes.
#line 1 "ENTRY_106907b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106907b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106907c0; body size 5 bytes.
#line 1 "ENTRY_106907c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106907c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106907d0; body size 5 bytes.
#line 1 "ENTRY_106907d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106907d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106907e0; body size 5 bytes.
#line 1 "ENTRY_106907e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106907e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690800; body size 5 bytes.
#line 1 "ENTRY_10690800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690810; body size 5 bytes.
#line 1 "ENTRY_10690810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690820; body size 5 bytes.
#line 1 "ENTRY_10690820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690830; body size 5 bytes.
#line 1 "ENTRY_10690830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690970; body size 5 bytes.
#line 1 "ENTRY_10690970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690990; body size 5 bytes.
#line 1 "ENTRY_10690990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10690990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106909a0; body size 5 bytes.
#line 1 "ENTRY_106909a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106909a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106909b0; body size 5 bytes.
#line 1 "ENTRY_106909b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106909b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106909c0; body size 5 bytes.
#line 1 "ENTRY_106909c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106909c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690b70; body size 30 bytes.
#line 1 "ENTRY_10690b70"

__declspec(naked) void FUN_10690b70(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0xc2 __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x0e __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0xc2 __asm _emit 0x75 __asm _emit 0xf5 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 10690dc0; body size 18 bytes.
#line 1 "ENTRY_10690dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10690dc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10690de0; body size 3 bytes.
#line 1 "ENTRY_10690de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10690de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10690df0; body size 10 bytes.
#line 1 "ENTRY_10690df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10690df0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10690ed0; body size 11 bytes.
#line 1 "ENTRY_10690ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10690ed0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10690ee0; body size 11 bytes.
#line 1 "ENTRY_10690ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10690ee0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10690ef0; body size 11 bytes.
#line 1 "ENTRY_10690ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10690ef0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10690f00; body size 11 bytes.
#line 1 "ENTRY_10690f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10690f00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10690f10; body size 16 bytes.
#line 1 "ENTRY_10690f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10690f10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10690f30; body size 13 bytes.
#line 1 "ENTRY_10690f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10690f30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10690f40; body size 14 bytes.
#line 1 "ENTRY_10690f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10690f40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10690f60; body size 21 bytes.
#line 1 "ENTRY_10690f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10690f60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10690f80; body size 21 bytes.
#line 1 "ENTRY_10690f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10690f80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10690fa0; body size 21 bytes.
#line 1 "ENTRY_10690fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10690fa0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10690fc0; body size 23 bytes.
#line 1 "ENTRY_10690fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10690fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10690fe0; body size 25 bytes.
#line 1 "ENTRY_10690fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10690fe0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10691000; body size 23 bytes.
#line 1 "ENTRY_10691000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10691020; body size 25 bytes.
#line 1 "ENTRY_10691020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10691020(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10691040; body size 23 bytes.
#line 1 "ENTRY_10691040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10691060; body size 23 bytes.
#line 1 "ENTRY_10691060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691060(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10691080; body size 3 bytes.
#line 1 "ENTRY_10691080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10691080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10691090; body size 3 bytes.
#line 1 "ENTRY_10691090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10691090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106910a0; body size 3 bytes.
#line 1 "ENTRY_106910a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106910a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106910b0; body size 3 bytes.
#line 1 "ENTRY_106910b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106910b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106910c0; body size 11 bytes.
#line 1 "ENTRY_106910c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106910c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106913c0; body size 23 bytes.
#line 1 "ENTRY_106913c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106913c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106913e0; body size 49 bytes.
#line 1 "ENTRY_106913e0"

__declspec(naked) void FUN_106913e0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7e __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x56 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x79 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x51 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 10691420; body size 23 bytes.
#line 1 "ENTRY_10691420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691420(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10691440; body size 49 bytes.
#line 1 "ENTRY_10691440"

__declspec(naked) void FUN_10691440(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7e __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x56 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x79 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x51 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 10691540; body size 23 bytes.
#line 1 "ENTRY_10691540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691540(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10691560; body size 39 bytes.
#line 1 "ENTRY_10691560"

__declspec(naked) void FUN_10691560(void)

{
  __asm _emit 0x51 __asm _emit 0xc6 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 10691770; body size 49 bytes.
#line 1 "ENTRY_10691770"

__declspec(naked) void FUN_10691770(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7e __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x56 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x79 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x51 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 10691870; body size 23 bytes.
#line 1 "ENTRY_10691870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10691870(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106921a0; body size 11 bytes.
#line 1 "ENTRY_106921a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106921a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106921b0; body size 24 bytes.
#line 1 "ENTRY_106921b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106921b0(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10692570; body size 3 bytes.
#line 1 "ENTRY_10692570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10692570(void)

{
  return;
}


// Reference entry 106928b0; body size 131 bytes.
#line 1 "ENTRY_106928b0"

__declspec(naked) void FUN_106928b0(void)

{
  __asm _emit 0x51 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x39 __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x78 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x71 __asm _emit 0x8b
  __asm _emit 0x47 __asm _emit 0x1c __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x03 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x76 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x50 __asm _emit 0xff
  __asm _emit 0x30
  __asm call LAB_10067c65
  __asm _emit 0x5f __asm _emit 0x59 __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x01 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x19 __asm _emit 0x56 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x30 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x75 __asm _emit 0xed __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x89
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x77 __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x77 __asm _emit 0x0c
  __asm call LAB_1002d6aa
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106929a0; body size 18 bytes.
#line 1 "ENTRY_106929a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106929a0(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106929c0; body size 65 bytes.
#line 1 "ENTRY_106929c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106929c0(int *param_2)
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


// Reference entry 10692a80; body size 14 bytes.
#line 1 "ENTRY_10692a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10692a80(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10692aa0; body size 14 bytes.
#line 1 "ENTRY_10692aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10692aa0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10692ac0; body size 14 bytes.
#line 1 "ENTRY_10692ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10692ac0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10692ae0; body size 3 bytes.
#line 1 "ENTRY_10692ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10692ae0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10692af0; body size 8 bytes.
#line 1 "ENTRY_10692af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10692af0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10692b00; body size 6 bytes.
#line 1 "ENTRY_10692b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10692b00(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10692b10; body size 6 bytes.
#line 1 "ENTRY_10692b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10692b10(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10692b20; body size 6 bytes.
#line 1 "ENTRY_10692b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10692b20(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10692b30; body size 6 bytes.
#line 1 "ENTRY_10692b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10692b30(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10692b40; body size 3 bytes.
#line 1 "ENTRY_10692b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10692b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10692b50; body size 9 bytes.
#line 1 "ENTRY_10692b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10692b50(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10692b60; body size 9 bytes.
#line 1 "ENTRY_10692b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10692b60(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10692b70; body size 3 bytes.
#line 1 "ENTRY_10692b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10692b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10692b80; body size 10 bytes.
#line 1 "ENTRY_10692b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10692b80(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 106931c0; body size 17 bytes.
#line 1 "ENTRY_106931c0"

__declspec(naked) void FUN_106931c0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x60 __asm _emit 0x08
  __asm call LAB_1148a05a
}






// Reference entry 10693720; body size 22 bytes.
#line 1 "ENTRY_10693720"

__declspec(naked) void FUN_10693720(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 106938b0; body size 30 bytes.
#line 1 "ENTRY_106938b0"

__declspec(naked) void FUN_106938b0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf9
  __asm call LAB_10051172
  __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xf0 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106938e0; body size 63 bytes.
#line 1 "ENTRY_106938e0"

__declspec(naked) void FUN_106938e0(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0xb8 __asm _emit 0x67 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0xb9 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x06 __asm _emit 0xf7
  __asm _emit 0xea __asm _emit 0x56 __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xf2 __asm _emit 0xc1 __asm _emit 0xee __asm _emit 0x1f __asm _emit 0x03 __asm _emit 0xf2 __asm _emit 0x8b __asm _emit 0xd6 __asm _emit 0xd1 __asm _emit 0xea
  __asm _emit 0x2b __asm _emit 0xca __asm _emit 0x3b __asm _emit 0xf1 __asm _emit 0x76 __asm _emit 0x09 __asm _emit 0xb8 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x8d
  __asm _emit 0x04 __asm _emit 0x32 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10693930; body size 49 bytes.
#line 1 "ENTRY_10693930"

__declspec(naked) void FUN_10693930(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0xb9 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf2
  __asm _emit 0xd1 __asm _emit 0xee __asm _emit 0x2b __asm _emit 0xce __asm _emit 0x3b __asm _emit 0xd1 __asm _emit 0x76 __asm _emit 0x09 __asm _emit 0xb8 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x16 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 10693970; body size 49 bytes.
#line 1 "ENTRY_10693970"

__declspec(naked) void FUN_10693970(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0xb9 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf2
  __asm _emit 0xd1 __asm _emit 0xee __asm _emit 0x2b __asm _emit 0xce __asm _emit 0x3b __asm _emit 0xd1 __asm _emit 0x76 __asm _emit 0x09 __asm _emit 0xb8 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x16 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 10693b80; body size 20 bytes.
#line 1 "ENTRY_10693b80"

__declspec(naked) void FUN_10693b80(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x0f __asm _emit 0x74 __asm _emit 0x01 __asm _emit 0xc3
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}






// Reference entry 10693ba0; body size 66 bytes.
#line 1 "ENTRY_10693ba0"

__declspec(naked) void FUN_10693ba0(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x40 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x6e __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0 __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x5a __asm _emit 0xc8 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x6e __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0 __asm _emit 0xc1
  __asm _emit 0xe8 __asm _emit 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x5a __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x5e __asm _emit 0xc8 __asm _emit 0x0f __asm _emit 0x2f __asm _emit 0x09 __asm _emit 0x0f __asm _emit 0x97 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 10693e70; body size 8 bytes.
#line 1 "ENTRY_10693e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10693e70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10693e80; body size 5 bytes.
#line 1 "ENTRY_10693e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10693e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10694060; body size 3 bytes.
#line 1 "ENTRY_10694060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10694070; body size 3 bytes.
#line 1 "ENTRY_10694070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10694080; body size 3 bytes.
#line 1 "ENTRY_10694080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10694090; body size 3 bytes.
#line 1 "ENTRY_10694090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106940a0; body size 3 bytes.
#line 1 "ENTRY_106940a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106940b0; body size 3 bytes.
#line 1 "ENTRY_106940b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106940c0; body size 3 bytes.
#line 1 "ENTRY_106940c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106940d0; body size 3 bytes.
#line 1 "ENTRY_106940d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106940e0; body size 3 bytes.
#line 1 "ENTRY_106940e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106940f0; body size 3 bytes.
#line 1 "ENTRY_106940f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106940f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10694100; body size 3 bytes.
#line 1 "ENTRY_10694100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10694110; body size 3 bytes.
#line 1 "ENTRY_10694110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10694120; body size 3 bytes.
#line 1 "ENTRY_10694120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10694130; body size 3 bytes.
#line 1 "ENTRY_10694130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10694140; body size 4 bytes.
#line 1 "ENTRY_10694140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694140(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10694150; body size 92 bytes.
#line 1 "ENTRY_10694150"

__declspec(naked) void FUN_10694150(void)

{
  __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x5f __asm _emit 0x04
  __asm _emit 0xff __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x89 __asm _emit 0x5e __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x33 __asm _emit 0x89 __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x18
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x0c __asm _emit 0x23 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x75
  __asm _emit 0x0d __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x3b __asm _emit 0xcf
  __asm _emit 0x75 __asm _emit 0x0a __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x39 __asm _emit 0x58 __asm _emit 0x04 __asm _emit 0x75
  __asm _emit 0x03 __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 106941d0; body size 7 bytes.
#line 1 "ENTRY_106941d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106941d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 106941e0; body size 13 bytes.
#line 1 "ENTRY_106941e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106941e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106941f0; body size 13 bytes.
#line 1 "ENTRY_106941f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106941f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10694200; body size 3 bytes.
#line 1 "ENTRY_10694200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10694210; body size 3 bytes.
#line 1 "ENTRY_10694210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106942a0; body size 3 bytes.
#line 1 "ENTRY_106942a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106942a0(void)

{
  return;
}


// Reference entry 106942b0; body size 3 bytes.
#line 1 "ENTRY_106942b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106942b0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106942c0; body size 3 bytes.
#line 1 "ENTRY_106942c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106942c0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106942d0; body size 3 bytes.
#line 1 "ENTRY_106942d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106942d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10694390; body size 11 bytes.
#line 1 "ENTRY_10694390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694390(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106943a0; body size 6 bytes.
#line 1 "ENTRY_106943a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106943a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106943b0; body size 6 bytes.
#line 1 "ENTRY_106943b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106943b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106943c0; body size 6 bytes.
#line 1 "ENTRY_106943c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106943c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106943d0; body size 6 bytes.
#line 1 "ENTRY_106943d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106943d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106943e0; body size 26 bytes.
#line 1 "ENTRY_106943e0"

__declspec(naked) void FUN_106943e0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10694400; body size 26 bytes.
#line 1 "ENTRY_10694400"

__declspec(naked) void FUN_10694400(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10694420; body size 26 bytes.
#line 1 "ENTRY_10694420"

__declspec(naked) void FUN_10694420(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10694440; body size 76 bytes.
#line 1 "ENTRY_10694440"

__declspec(naked) void FUN_10694440(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x38 __asm _emit 0x3b
  __asm _emit 0xce __asm _emit 0x75 __asm _emit 0x2a __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xce __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52
  __asm _emit 0x10 __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x4f __asm _emit 0x24
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106944a0; body size 10 bytes.
#line 1 "ENTRY_106944a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106944a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10694560; body size 55 bytes.
#line 1 "ENTRY_10694560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10694560(int *param_1)

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


// Reference entry 10694990; body size 24 bytes.
#line 1 "ENTRY_10694990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10694990(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1068fa70(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10694b00; body size 24 bytes.
#line 1 "ENTRY_10694b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10694b00(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1068fa70(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10694b20; body size 14 bytes.
#line 1 "ENTRY_10694b20"

__declspec(naked) void FUN_10694b20(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10694b40; body size 13 bytes.
#line 1 "ENTRY_10694b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10694b40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10694b50; body size 12 bytes.
#line 1 "ENTRY_10694b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10694b50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10694b60; body size 11 bytes.
#line 1 "ENTRY_10694b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10694b60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10694d80; body size 43 bytes.
#line 1 "ENTRY_10694d80"

__declspec(naked) void FUN_10694d80(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b
  __asm _emit 0x7b __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x19 __asm _emit 0x89 __asm _emit 0x72
  __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x78 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x04 __asm _emit 0x5b __asm _emit 0xc3
}






// Reference entry 10694dc0; body size 3 bytes.
#line 1 "ENTRY_10694dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694dc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10694dd0; body size 3 bytes.
#line 1 "ENTRY_10694dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10694dd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10694e10; body size 87 bytes.
#line 1 "ENTRY_10694e10"

__declspec(naked) void FUN_10694e10(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x0f __asm _emit 0x77 __asm _emit 0x47 __asm _emit 0xc1 __asm _emit 0xe0 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0x00
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 10694e80; body size 90 bytes.
#line 1 "ENTRY_10694e80"

__declspec(naked) void FUN_10694e80(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x06 __asm _emit 0x77 __asm _emit 0x4a __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0xc1 __asm _emit 0xe0
  __asm _emit 0x03 __asm _emit 0x3d __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 10694f00; body size 87 bytes.
#line 1 "ENTRY_10694f00"

__declspec(naked) void FUN_10694f00(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x47 __asm _emit 0xc1 __asm _emit 0xe0 __asm _emit 0x03 __asm _emit 0x3d __asm _emit 0x00
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 10694fe0; body size 87 bytes.
#line 1 "ENTRY_10694fe0"

__declspec(naked) void FUN_10694fe0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x3f __asm _emit 0x77 __asm _emit 0x47 __asm _emit 0xc1 __asm _emit 0xe0 __asm _emit 0x02 __asm _emit 0x3d __asm _emit 0x00
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 10695050; body size 11 bytes.
#line 1 "ENTRY_10695050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10695050(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10695060; body size 68 bytes.
#line 1 "ENTRY_10695060"

__declspec(naked) void FUN_10695060(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x06 __asm _emit 0x35 __asm _emit 0xc5 __asm _emit 0x9d __asm _emit 0x1c __asm _emit 0x81
  __asm _emit 0x69 __asm _emit 0xd0 __asm _emit 0x93 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x46 __asm _emit 0x01 __asm _emit 0x33 __asm _emit 0xd0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x46 __asm _emit 0x02
  __asm _emit 0x69 __asm _emit 0xd2 __asm _emit 0x93 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x33 __asm _emit 0xd0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x46 __asm _emit 0x03 __asm _emit 0x69 __asm _emit 0xca __asm _emit 0x93 __asm _emit 0x01
  __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x33 __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x18 __asm _emit 0x69 __asm _emit 0xc9 __asm _emit 0x93 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x23
  __asm _emit 0xc1 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106950c0; body size 4 bytes.
#line 1 "ENTRY_106950c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106950c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10695290; body size 23 bytes.
#line 1 "ENTRY_10695290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10695290(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x28);
}


// Reference entry 106952b0; body size 9 bytes.
#line 1 "ENTRY_106952b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106952b0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 106952c0; body size 9 bytes.
#line 1 "ENTRY_106952c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106952c0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 106952d0; body size 123 bytes.
#line 1 "ENTRY_106952d0"

__declspec(naked) void FUN_106952d0(void)

{
  __asm _emit 0x51 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x6d __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x1c __asm _emit 0xc1 __asm _emit 0xe8
  __asm _emit 0x03 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x76 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10067c65
  __asm _emit 0x5f __asm _emit 0x59 __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x01 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x30 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x75 __asm _emit 0xed __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x89
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x77 __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x77 __asm _emit 0x0c
  __asm call LAB_1002d6aa
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 10695370; body size 59 bytes.
#line 1 "ENTRY_10695370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10695370(int *param_1)

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
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 106953c0; body size 54 bytes.
#line 1 "ENTRY_106953c0"

__declspec(naked) void FUN_106953c0(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x04 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8
  __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 10695410; body size 57 bytes.
#line 1 "ENTRY_10695410"

__declspec(naked) void FUN_10695410(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x04 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8
  __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 106954b0; body size 61 bytes.
#line 1 "ENTRY_106954b0"

__declspec(naked) void FUN_106954b0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x81
  __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83
  __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 10695500; body size 9 bytes.
#line 1 "ENTRY_10695500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10695500(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10695510; body size 9 bytes.
#line 1 "ENTRY_10695510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10695510(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10695520; body size 12 bytes.
#line 1 "ENTRY_10695520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10695520(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10695530; body size 11 bytes.
#line 1 "ENTRY_10695530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10695530(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10695540; body size 12 bytes.
#line 1 "ENTRY_10695540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10695540(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106964e0; body size 4 bytes.
#line 1 "ENTRY_106964e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106964e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x20));
}


// Reference entry 106968e0; body size 7 bytes.
#line 1 "ENTRY_106968e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106968e0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 106968f0; body size 7 bytes.
#line 1 "ENTRY_106968f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106968f0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10696900; body size 7 bytes.
#line 1 "ENTRY_10696900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10696900(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10696910; body size 7 bytes.
#line 1 "ENTRY_10696910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10696910(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10696920; body size 7 bytes.
#line 1 "ENTRY_10696920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10696920(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10696930; body size 7 bytes.
#line 1 "ENTRY_10696930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10696930(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10696940; body size 3 bytes.
#line 1 "ENTRY_10696940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10696940(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10696950; body size 6 bytes.
#line 1 "ENTRY_10696950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696950(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10696960; body size 6 bytes.
#line 1 "ENTRY_10696960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696960(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10696970; body size 6 bytes.
#line 1 "ENTRY_10696970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696970(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10696980; body size 6 bytes.
#line 1 "ENTRY_10696980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696980(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10696990; body size 6 bytes.
#line 1 "ENTRY_10696990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696990(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 106969a0; body size 6 bytes.
#line 1 "ENTRY_106969a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969a0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 106969b0; body size 6 bytes.
#line 1 "ENTRY_106969b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969b0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 106969c0; body size 6 bytes.
#line 1 "ENTRY_106969c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969c0(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 106969d0; body size 6 bytes.
#line 1 "ENTRY_106969d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969d0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 106969e0; body size 6 bytes.
#line 1 "ENTRY_106969e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969e0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 106969f0; body size 5 bytes.
#line 1 "ENTRY_106969f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106969f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10696a00; body size 3 bytes.
#line 1 "ENTRY_10696a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10696a00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10696c80; body size 5 bytes.
#line 1 "ENTRY_10696c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10696c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10696ca0; body size 9 bytes.
#line 1 "ENTRY_10696ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10696ca0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10696fa0; body size 26 bytes.
#line 1 "ENTRY_10696fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10696fa0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10697000; body size 16 bytes.
#line 1 "ENTRY_10697000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10697000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106970f0; body size 65 bytes.
#line 1 "ENTRY_106970f0"

__declspec(naked) void FUN_106970f0(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11886d8c
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_118c6668
  __asm _emit 0xc6 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 10697150; body size 33 bytes.
#line 1 "ENTRY_10697150"

__declspec(naked) void FUN_10697150(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11883dcc
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_118c6764
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 10697830; body size 19 bytes.
#line 1 "ENTRY_10697830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10697830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10697a20; body size 3 bytes.
#line 1 "ENTRY_10697a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10697a20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10697a30; body size 3 bytes.
#line 1 "ENTRY_10697a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10697a30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10697a40; body size 3 bytes.
#line 1 "ENTRY_10697a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10697a40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106997e0; body size 7 bytes.
#line 1 "ENTRY_106997e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106997e0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 106997f0; body size 7 bytes.
#line 1 "ENTRY_106997f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106997f0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10699800; body size 7 bytes.
#line 1 "ENTRY_10699800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10699800(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10699810; body size 3 bytes.
#line 1 "ENTRY_10699810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10699810(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10699820; body size 3 bytes.
#line 1 "ENTRY_10699820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10699820(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10699830; body size 28 bytes.
#line 1 "ENTRY_10699830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10699830(undefined4 *param_1)

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


// Reference entry 10699860; body size 22 bytes.
#line 1 "ENTRY_10699860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10699860(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10699940; body size 18 bytes.
#line 1 "ENTRY_10699940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699940(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10699960; body size 25 bytes.
#line 1 "ENTRY_10699960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699960(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10699980; body size 25 bytes.
#line 1 "ENTRY_10699980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699980(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106999a0; body size 38 bytes.
#line 1 "ENTRY_106999a0"

__declspec(naked) void FUN_106999a0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 106999d0; body size 22 bytes.
#line 1 "ENTRY_106999d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106999d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106999f0; body size 5 bytes.
#line 1 "ENTRY_106999f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106999f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10699a00; body size 5 bytes.
#line 1 "ENTRY_10699a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10699a00(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10699a50; body size 18 bytes.
#line 1 "ENTRY_10699a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10699aa0; body size 25 bytes.
#line 1 "ENTRY_10699aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699aa0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10699ac0; body size 25 bytes.
#line 1 "ENTRY_10699ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10699ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10699ae0; body size 40 bytes.
#line 1 "ENTRY_10699ae0"

__declspec(naked) void FUN_10699ae0(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 10699b20; body size 26 bytes.
#line 1 "ENTRY_10699b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10699b20(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10699b40; body size 26 bytes.
#line 1 "ENTRY_10699b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10699b40(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10699b60; body size 26 bytes.
#line 1 "ENTRY_10699b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10699b60(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10699b80; body size 78 bytes.
#line 1 "ENTRY_10699b80"

__declspec(naked) void FUN_10699b80(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b
  __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10699bf0; body size 12 bytes.
#line 1 "ENTRY_10699bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10699bf0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10699c00; body size 12 bytes.
#line 1 "ENTRY_10699c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10699c00(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10699c10; body size 3 bytes.
#line 1 "ENTRY_10699c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c10(void)

{
  return;
}


// Reference entry 10699c40; body size 13 bytes.
#line 1 "ENTRY_10699c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10699c50; body size 13 bytes.
#line 1 "ENTRY_10699c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c50(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10699c60; body size 13 bytes.
#line 1 "ENTRY_10699c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10699c70; body size 3 bytes.
#line 1 "ENTRY_10699c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c70(void)

{
  return;
}


// Reference entry 10699c80; body size 3 bytes.
#line 1 "ENTRY_10699c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699c80(void)

{
  return;
}


// Reference entry 10699c90; body size 18 bytes.
#line 1 "ENTRY_10699c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10699c90(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10699e40; body size 15 bytes.
#line 1 "ENTRY_10699e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699e40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10699f00; body size 7 bytes.
#line 1 "ENTRY_10699f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10699f00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10699f10; body size 5 bytes.
#line 1 "ENTRY_10699f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10699f10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10699f20; body size 3 bytes.
#line 1 "ENTRY_10699f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699f20(void)

{
  return;
}


// Reference entry 10699f30; body size 3 bytes.
#line 1 "ENTRY_10699f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699f30(void)

{
  return;
}


// Reference entry 10699f60; body size 19 bytes.
#line 1 "ENTRY_10699f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699f60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10699f80; body size 19 bytes.
#line 1 "ENTRY_10699f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10699f80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 1069a210; body size 5 bytes.
#line 1 "ENTRY_1069a210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a220; body size 5 bytes.
#line 1 "ENTRY_1069a220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a240; body size 5 bytes.
#line 1 "ENTRY_1069a240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a250; body size 5 bytes.
#line 1 "ENTRY_1069a250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a260; body size 5 bytes.
#line 1 "ENTRY_1069a260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a270; body size 5 bytes.
#line 1 "ENTRY_1069a270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a280; body size 34 bytes.
#line 1 "ENTRY_1069a280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069a280(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 1069a340; body size 15 bytes.
#line 1 "ENTRY_1069a340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a340(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1069a3e0; body size 5 bytes.
#line 1 "ENTRY_1069a3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a3e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a3f0; body size 5 bytes.
#line 1 "ENTRY_1069a3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a3f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a410; body size 5 bytes.
#line 1 "ENTRY_1069a410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a420; body size 5 bytes.
#line 1 "ENTRY_1069a420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a430; body size 5 bytes.
#line 1 "ENTRY_1069a430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a440; body size 5 bytes.
#line 1 "ENTRY_1069a440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a460; body size 5 bytes.
#line 1 "ENTRY_1069a460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a470; body size 5 bytes.
#line 1 "ENTRY_1069a470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a4a0; body size 5 bytes.
#line 1 "ENTRY_1069a4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a4a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a4b0; body size 5 bytes.
#line 1 "ENTRY_1069a4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a4b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a4d0; body size 5 bytes.
#line 1 "ENTRY_1069a4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a4d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a4e0; body size 5 bytes.
#line 1 "ENTRY_1069a4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a4e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a4f0; body size 5 bytes.
#line 1 "ENTRY_1069a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1069a4f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069a500; body size 19 bytes.
#line 1 "ENTRY_1069a500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069a500(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 1069a520; body size 19 bytes.
#line 1 "ENTRY_1069a520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069a520(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 1069a540; body size 30 bytes.
#line 1 "ENTRY_1069a540"

__declspec(naked) void FUN_1069a540(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0xc2 __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x0e __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0xc2 __asm _emit 0x75 __asm _emit 0xf5 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 1069ac30; body size 32 bytes.
#line 1 "ENTRY_1069ac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1069ac30(undefined4 *param_2)
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


// Reference entry 1069ac60; body size 16 bytes.
#line 1 "ENTRY_1069ac60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1069ac60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1069ad40; body size 18 bytes.
#line 1 "ENTRY_1069ad40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1069ad40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1069ad60; body size 10 bytes.
#line 1 "ENTRY_1069ad60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1069ad60(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1069afa0; body size 11 bytes.
#line 1 "ENTRY_1069afa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1069afa0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1069afb0; body size 11 bytes.
#line 1 "ENTRY_1069afb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1069afb0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1069afc0; body size 16 bytes.
#line 1 "ENTRY_1069afc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1069afc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1069afe0; body size 23 bytes.
#line 1 "ENTRY_1069afe0"

__declspec(naked) void FUN_1069afe0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x7e __asm _emit 0x00 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0xd6 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x89
  __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069b000; body size 14 bytes.
#line 1 "ENTRY_1069b000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1069b000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1069b020; body size 23 bytes.
#line 1 "ENTRY_1069b020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1069b020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1069b040; body size 3 bytes.
#line 1 "ENTRY_1069b040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069b040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069b3c0; body size 42 bytes.
#line 1 "ENTRY_1069b3c0"

__declspec(naked) void FUN_1069b3c0(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_118c6b10
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069b400; body size 42 bytes.
#line 1 "ENTRY_1069b400"

__declspec(naked) void FUN_1069b400(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_118c6ae8
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069b440; body size 42 bytes.
#line 1 "ENTRY_1069b440"

__declspec(naked) void FUN_1069b440(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_118c68ac
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069b480; body size 42 bytes.
#line 1 "ENTRY_1069b480"

__declspec(naked) void FUN_1069b480(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_118c68f0
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069bb20; body size 11 bytes.
#line 1 "ENTRY_1069bb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1069bb20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1069c150; body size 3 bytes.
#line 1 "ENTRY_1069c150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069c150(void)

{
  return;
}


// Reference entry 1069c240; body size 5 bytes.
#line 1 "ENTRY_1069c240"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c240(int param_1)

{ __asm jmp FUN_10029474 }


// Reference entry 1069c250; body size 19 bytes.
#line 1 "ENTRY_1069c250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 1069c270; body size 19 bytes.
#line 1 "ENTRY_1069c270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 1069c290; body size 19 bytes.
#line 1 "ENTRY_1069c290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 1069c2b0; body size 19 bytes.
#line 1 "ENTRY_1069c2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c2b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 1069c710; body size 11 bytes.
#line 1 "ENTRY_1069c710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 1069c850; body size 226 bytes.
#line 1 "ENTRY_1069c850"

__declspec(naked) void FUN_1069c850(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x3b __asm _emit 0xf3
  __asm je LAB_1069c92b
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x6c __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x1c __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x03 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x76
  __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10067c65
  __asm _emit 0xeb __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x75 __asm _emit 0xed __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x89
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x0c
  __asm call LAB_1002d6aa
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x03 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04
  __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x0c __asm _emit 0x89
  __asm _emit 0x4b __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4e
  __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x14
  __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x1c __asm _emit 0x89
  __asm _emit 0x4b __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069c970; body size 226 bytes.
#line 1 "ENTRY_1069c970"

__declspec(naked) void FUN_1069c970(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x3b __asm _emit 0xf3
  __asm je LAB_1069ca4b
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x6c __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x1c __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x03 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x76
  __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10067c65
  __asm _emit 0xeb __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x75 __asm _emit 0xed __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x89
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x0c
  __asm call LAB_1002d6aa
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x03 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04
  __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x0c __asm _emit 0x89
  __asm _emit 0x4b __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4e
  __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x14
  __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x1c __asm _emit 0x89
  __asm _emit 0x4b __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069ca90; body size 226 bytes.
#line 1 "ENTRY_1069ca90"

__declspec(naked) void FUN_1069ca90(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x3b __asm _emit 0xf3
  __asm je LAB_1069cb6b
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x6c __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x1c __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x03 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x76
  __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10067c65
  __asm _emit 0xeb __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x75 __asm _emit 0xed __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x89
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x0c
  __asm call LAB_1002d6aa
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x03 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04
  __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x0c __asm _emit 0x89
  __asm _emit 0x4b __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4e
  __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x14
  __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x1c __asm _emit 0x89
  __asm _emit 0x4b __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069cbb0; body size 14 bytes.
#line 1 "ENTRY_1069cbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1069cbb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1069cbd0; body size 14 bytes.
#line 1 "ENTRY_1069cbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1069cbd0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1069cc20; body size 3 bytes.
#line 1 "ENTRY_1069cc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069cc20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1069cc30; body size 3 bytes.
#line 1 "ENTRY_1069cc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069cc30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1069cc40; body size 3 bytes.
#line 1 "ENTRY_1069cc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069cc40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1069cc50; body size 3 bytes.
#line 1 "ENTRY_1069cc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069cc50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1069cc60; body size 8 bytes.
#line 1 "ENTRY_1069cc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1069cc60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1069cc70; body size 8 bytes.
#line 1 "ENTRY_1069cc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1069cc70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1069cc80; body size 6 bytes.
#line 1 "ENTRY_1069cc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1069cc80(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1069cc90; body size 6 bytes.
#line 1 "ENTRY_1069cc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1069cc90(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1069cca0; body size 9 bytes.
#line 1 "ENTRY_1069cca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1069cca0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 1069ccb0; body size 9 bytes.
#line 1 "ENTRY_1069ccb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1069ccb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 1069ccc0; body size 10 bytes.
#line 1 "ENTRY_1069ccc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_1069ccc0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 1069d050; body size 29 bytes.
#line 1 "ENTRY_1069d050"

__declspec(naked) void FUN_1069d050(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24
  __asm _emit 0x08 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 1069d080; body size 29 bytes.
#line 1 "ENTRY_1069d080"

__declspec(naked) void FUN_1069d080(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24
  __asm _emit 0x08 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 1069d6d0; body size 22 bytes.
#line 1 "ENTRY_1069d6d0"

__declspec(naked) void FUN_1069d6d0(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 1069d830; body size 20 bytes.
#line 1 "ENTRY_1069d830"

__declspec(naked) void FUN_1069d830(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x10 __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x0c __asm _emit 0x74 __asm _emit 0x01 __asm _emit 0xc3
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}






// Reference entry 1069d850; body size 67 bytes.
#line 1 "ENTRY_1069d850"

__declspec(naked) void FUN_1069d850(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x40 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x6e __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0 __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x5a __asm _emit 0xc8 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x6e __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0 __asm _emit 0xc1
  __asm _emit 0xe8 __asm _emit 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x5a __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x5e __asm _emit 0xc8 __asm _emit 0x0f __asm _emit 0x2f __asm _emit 0x49 __asm _emit 0x08 __asm _emit 0x0f __asm _emit 0x97 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 1069d9c0; body size 8 bytes.
#line 1 "ENTRY_1069d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1069d9c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1069dc10; body size 3 bytes.
#line 1 "ENTRY_1069dc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069dc20; body size 3 bytes.
#line 1 "ENTRY_1069dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069dc30; body size 3 bytes.
#line 1 "ENTRY_1069dc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069dc40; body size 3 bytes.
#line 1 "ENTRY_1069dc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069dc50; body size 3 bytes.
#line 1 "ENTRY_1069dc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069dc60; body size 3 bytes.
#line 1 "ENTRY_1069dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1069dc70; body size 4 bytes.
#line 1 "ENTRY_1069dc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dc70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1069dc80; body size 92 bytes.
#line 1 "ENTRY_1069dc80"

__declspec(naked) void FUN_1069dc80(void)

{
  __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x5f __asm _emit 0x04
  __asm _emit 0xff __asm _emit 0x42 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x89 __asm _emit 0x5e __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x33 __asm _emit 0x89 __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x20
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x14 __asm _emit 0x23 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0x4a __asm _emit 0x0c __asm _emit 0x75
  __asm _emit 0x0d __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x3b __asm _emit 0xcf
  __asm _emit 0x75 __asm _emit 0x0a __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x39 __asm _emit 0x58 __asm _emit 0x04 __asm _emit 0x75
  __asm _emit 0x03 __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 1069dd00; body size 7 bytes.
#line 1 "ENTRY_1069dd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1069dd00(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1069dd10; body size 4 bytes.
#line 1 "ENTRY_1069dd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1069dd10(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 1069dd20; body size 4 bytes.
#line 1 "ENTRY_1069dd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1069dd20(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 1069ddc0; body size 216 bytes.
#line 1 "ENTRY_1069ddc0"

__declspec(naked) void FUN_1069ddc0(void)

{
  __asm _emit 0x51 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x6c __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x1c __asm _emit 0xc1 __asm _emit 0xe8
  __asm _emit 0x03 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x76 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10067c65
  __asm _emit 0xeb __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x30 __asm _emit 0x6a __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x75 __asm _emit 0xed __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x89
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x77 __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x77 __asm _emit 0x0c
  __asm call LAB_1002d6aa
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x42
  __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08
  __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x4a __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x10 __asm _emit 0x89
  __asm _emit 0x4a __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x4a __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x4f
  __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x4a __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x18
  __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x4a __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x4a __asm _emit 0x1c __asm _emit 0x5f
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 1069ded0; body size 3 bytes.
#line 1 "ENTRY_1069ded0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069ded0(void)

{
  return;
}


// Reference entry 1069dee0; body size 3 bytes.
#line 1 "ENTRY_1069dee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1069dee0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1069dfa0; body size 11 bytes.
#line 1 "ENTRY_1069dfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069dfa0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1069dfb0; body size 6 bytes.
#line 1 "ENTRY_1069dfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069dfb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1069dfc0; body size 26 bytes.
#line 1 "ENTRY_1069dfc0"

__declspec(naked) void FUN_1069dfc0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069dfe0; body size 26 bytes.
#line 1 "ENTRY_1069dfe0"

__declspec(naked) void FUN_1069dfe0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069e000; body size 10 bytes.
#line 1 "ENTRY_1069e000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1069e000(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1069e010; body size 97 bytes.
#line 1 "ENTRY_1069e010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1069e010(int param_2)
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


// Reference entry 1069e090; body size 45 bytes.
#line 1 "ENTRY_1069e090"

__declspec(naked) void FUN_1069e090(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x17 __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b
  __asm _emit 0x4f __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069e0d0; body size 33 bytes.
#line 1 "ENTRY_1069e0d0"

__declspec(naked) void FUN_1069e0d0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x17 __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 1069e1d0; body size 14 bytes.
#line 1 "ENTRY_1069e1d0"

__declspec(naked) void FUN_1069e1d0(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069e1f0; body size 13 bytes.
#line 1 "ENTRY_1069e1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1069e1f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1069e200; body size 3 bytes.
#line 1 "ENTRY_1069e200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069e200(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1069e210; body size 12 bytes.
#line 1 "ENTRY_1069e210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1069e210(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 1069e220; body size 11 bytes.
#line 1 "ENTRY_1069e220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1069e220(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1069e230; body size 4 bytes.
#line 1 "ENTRY_1069e230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069e230(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1069e240; body size 43 bytes.
#line 1 "ENTRY_1069e240"

__declspec(naked) void FUN_1069e240(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b
  __asm _emit 0x7b __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x19 __asm _emit 0x89 __asm _emit 0x72
  __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x78 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x04 __asm _emit 0x5b __asm _emit 0xc3
}






// Reference entry 1069e2d0; body size 90 bytes.
#line 1 "ENTRY_1069e2d0"

__declspec(naked) void FUN_1069e2d0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x0c __asm _emit 0x77 __asm _emit 0x4a __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0xc1 __asm _emit 0xe0
  __asm _emit 0x02 __asm _emit 0x3d __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 1069e350; body size 87 bytes.
#line 1 "ENTRY_1069e350"

__declspec(naked) void FUN_1069e350(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x3f __asm _emit 0x77 __asm _emit 0x47 __asm _emit 0xc1 __asm _emit 0xe0 __asm _emit 0x02 __asm _emit 0x3d __asm _emit 0x00
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 1069e3c0; body size 19 bytes.
#line 1 "ENTRY_1069e3c0"

__declspec(naked) void FUN_1069e3c0(void)

{
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_1003d73f
  __asm _emit 0x23 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1069e3e0; body size 4 bytes.
#line 1 "ENTRY_1069e3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1069e3e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1069e8e0; body size 68 bytes.
#line 1 "ENTRY_1069e8e0"

__declspec(naked) void FUN_1069e8e0(void)

{
  __asm _emit 0x51 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x83 __asm _emit 0x7f __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x37 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x77 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x77
  __asm _emit 0x0c __asm _emit 0x56
  __asm call LAB_1006c8d2
  __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x77 __asm _emit 0x18 __asm _emit 0xff __asm _emit 0x77
  __asm _emit 0x14
  __asm call LAB_100301d4
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x14 __asm _emit 0x5e __asm _emit 0x5f __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1069e9d0; body size 57 bytes.
#line 1 "ENTRY_1069e9d0"

__declspec(naked) void FUN_1069e9d0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x80 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9
  __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 1069ea20; body size 60 bytes.
#line 1 "ENTRY_1069ea20"

__declspec(naked) void FUN_1069ea20(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x80 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9
  __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 1069ea70; body size 61 bytes.
#line 1 "ENTRY_1069ea70"

__declspec(naked) void FUN_1069ea70(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x81
  __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83
  __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 1069ed20; body size 32 bytes.
#line 1 "ENTRY_1069ed20"

__declspec(naked) void FUN_1069ed20(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x3c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff
  __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 1069ed50; body size 32 bytes.
#line 1 "ENTRY_1069ed50"

__declspec(naked) void FUN_1069ed50(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x3c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff
  __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 1069ffe0; body size 20 bytes.
#line 1 "ENTRY_1069ffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1069ffe0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 106a0000; body size 7 bytes.
#line 1 "ENTRY_106a0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106a0000(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 106a0010; body size 7 bytes.
#line 1 "ENTRY_106a0010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106a0010(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 106a0020; body size 7 bytes.
#line 1 "ENTRY_106a0020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106a0020(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 106a0030; body size 4 bytes.
#line 1 "ENTRY_106a0030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_106a0030(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 8));
}


// Reference entry 106a0040; body size 4 bytes.
#line 1 "ENTRY_106a0040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_106a0040(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 106a0050; body size 6 bytes.
#line 1 "ENTRY_106a0050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a0050(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 106a0060; body size 6 bytes.
#line 1 "ENTRY_106a0060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a0060(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 106a0070; body size 6 bytes.
#line 1 "ENTRY_106a0070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a0070(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 106a0080; body size 6 bytes.
#line 1 "ENTRY_106a0080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a0080(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 106a0090; body size 3 bytes.
#line 1 "ENTRY_106a0090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a0090(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106a00a0; body size 3 bytes.
#line 1 "ENTRY_106a00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a00a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106a00b0; body size 3 bytes.
#line 1 "ENTRY_106a00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a00b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106a00c0; body size 3 bytes.
#line 1 "ENTRY_106a00c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a00c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106a0570; body size 28 bytes.
#line 1 "ENTRY_106a0570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a0570(undefined4 *param_1)

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


// Reference entry 106a05a0; body size 28 bytes.
#line 1 "ENTRY_106a05a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a05a0(undefined4 *param_1)

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


// Reference entry 106a05d0; body size 28 bytes.
#line 1 "ENTRY_106a05d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a05d0(undefined4 *param_1)

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


// Reference entry 106a0600; body size 28 bytes.
#line 1 "ENTRY_106a0600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a0600(undefined4 *param_1)

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


// Reference entry 106a0630; body size 9 bytes.
#line 1 "ENTRY_106a0630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106a0630(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 106a1270; body size 25 bytes.
#line 1 "ENTRY_106a1270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a1270(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106a1290; body size 26 bytes.
#line 1 "ENTRY_106a1290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106a1290(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 106a12b0; body size 6 bytes.
#line 1 "ENTRY_106a12b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_106a12b0(void)

{
  return (char *)("SCIMusicServiceMenuItem");
}


// Reference entry 106a12c0; body size 27 bytes.
#line 1 "ENTRY_106a12c0"

__declspec(naked) void FUN_106a12c0(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_118c6b9c
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106a1330; body size 9 bytes.
#line 1 "ENTRY_106a1330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a1330(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIMusicServiceMenuItem);
  return (undefined4 *)(param_1);
}


// Reference entry 106a1560; body size 7 bytes.
#line 1 "ENTRY_106a1560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a1560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 106a1660; body size 3 bytes.
#line 1 "ENTRY_106a1660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a1660(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106a19d0; body size 9 bytes.
#line 1 "ENTRY_106a19d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a19d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106a1a40; body size 6 bytes.
#line 1 "ENTRY_106a1a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_106a1a40(void)

{
  return (char *)("SCIMusicServiceMenuItem");
}


// Reference entry 106a1de0; body size 3 bytes.
#line 1 "ENTRY_106a1de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a1de0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106a1f10; body size 28 bytes.
#line 1 "ENTRY_106a1f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a1f10(undefined4 *param_1)

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


// Reference entry 106a2a50; body size 14 bytes.
#line 1 "ENTRY_106a2a50"

__declspec(naked) void FUN_106a2a50(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106a2a70; body size 13 bytes.
#line 1 "ENTRY_106a2a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106a2a70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106a2ea0; body size 18 bytes.
#line 1 "ENTRY_106a2ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a2ea0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a2ec0; body size 13 bytes.
#line 1 "ENTRY_106a2ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a2ec0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a2ed0; body size 22 bytes.
#line 1 "ENTRY_106a2ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a2ed0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a2ef0; body size 18 bytes.
#line 1 "ENTRY_106a2ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a2ef0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a2ff0; body size 45 bytes.
#line 1 "ENTRY_106a2ff0"

__declspec(naked) void FUN_106a2ff0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 106a3030; body size 22 bytes.
#line 1 "ENTRY_106a3030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a3030(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a3050; body size 11 bytes.
#line 1 "ENTRY_106a3050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a3050(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106a3060; body size 13 bytes.
#line 1 "ENTRY_106a3060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a3060(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106a3070; body size 47 bytes.
#line 1 "ENTRY_106a3070"

__declspec(naked) void FUN_106a3070(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 106a30b0; body size 32 bytes.
#line 1 "ENTRY_106a30b0"

__declspec(naked) void FUN_106a30b0(void)

{
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call dword ptr [LAB_122fc940]
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xf9 __asm _emit 0xff __asm _emit 0x75 __asm _emit 0x03 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x04 __asm _emit 0x88 __asm _emit 0x08 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc3
}






// Reference entry 106a3700; body size 5 bytes.
#line 1 "ENTRY_106a3700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a3710; body size 37 bytes.
#line 1 "ENTRY_106a3710"

__declspec(naked) void FUN_106a3710(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x16 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x10 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74
  __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_1004de0f
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x05 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106a3740; body size 51 bytes.
#line 1 "ENTRY_106a3740"

__declspec(naked) void FUN_106a3740(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x73 __asm _emit 0x21 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x08 __asm _emit 0x2b __asm _emit 0xc1 __asm _emit 0x50 __asm _emit 0x0f __asm _emit 0xbe __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x0e __asm _emit 0x50
  __asm call LAB_1148ce11
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x04 __asm _emit 0x2b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc3 __asm _emit 0x83 __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 106a38d0; body size 28 bytes.
#line 1 "ENTRY_106a38d0"

__declspec(naked) void FUN_106a38d0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x00 __asm _emit 0x50
  __asm call dword ptr [LAB_122fc904]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0xff __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 106a3900; body size 5 bytes.
#line 1 "ENTRY_106a3900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a3910; body size 5 bytes.
#line 1 "ENTRY_106a3910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a3920; body size 5 bytes.
#line 1 "ENTRY_106a3920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a3930; body size 41 bytes.
#line 1 "ENTRY_106a3930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a3930(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 106a3970; body size 15 bytes.
#line 1 "ENTRY_106a3970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3970(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106a3990; body size 5 bytes.
#line 1 "ENTRY_106a3990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a39a0; body size 5 bytes.
#line 1 "ENTRY_106a39a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a39a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a39b0; body size 5 bytes.
#line 1 "ENTRY_106a39b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a39b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a39c0; body size 5 bytes.
#line 1 "ENTRY_106a39c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a39c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a3b30; body size 11 bytes.
#line 1 "ENTRY_106a3b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a3b30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106a3b40; body size 11 bytes.
#line 1 "ENTRY_106a3b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a3b40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106a3bd0; body size 11 bytes.
#line 1 "ENTRY_106a3bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a3bd0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106a3be0; body size 3 bytes.
#line 1 "ENTRY_106a3be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a3be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a3ef0; body size 78 bytes.
#line 1 "ENTRY_106a3ef0"

__declspec(naked) void FUN_106a3ef0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc6 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x10 __asm _emit 0x3b
  __asm _emit 0xca __asm _emit 0x72 __asm _emit 0x26 __asm _emit 0x2b __asm _emit 0xca __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x3b __asm _emit 0xcf __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0xf9 __asm _emit 0x83
  __asm _emit 0x78 __asm _emit 0x14 __asm _emit 0x10 __asm _emit 0x72 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x57 __asm _emit 0x03 __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x50
  __asm call LAB_10037a97
  __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
  __asm call LAB_10092c0d
}






// Reference entry 106a3f60; body size 46 bytes.
#line 1 "ENTRY_106a3f60"

__declspec(naked) void FUN_106a3f60(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x51
  __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x51 __asm _emit 0x14 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 106a3fa0; body size 52 bytes.
#line 1 "ENTRY_106a3fa0"

__declspec(naked) void FUN_106a3fa0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x20 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106a3ff0; body size 11 bytes.
#line 1 "ENTRY_106a3ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a3ff0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106a43e0; body size 17 bytes.
#line 1 "ENTRY_106a43e0"

__declspec(naked) void FUN_106a43e0(void)

{
  __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x04
  __asm mov dword ptr [ecx], offset LAB_1186d234
  __asm _emit 0x50
  __asm call LAB_1148cddb
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106a4420; body size 14 bytes.
#line 1 "ENTRY_106a4420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106a4420(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106a4440; body size 14 bytes.
#line 1 "ENTRY_106a4440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106a4440(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106a4580; body size 6 bytes.
#line 1 "ENTRY_106a4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106a4580(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106a4590; body size 82 bytes.
#line 1 "ENTRY_106a4590"

__declspec(naked) void FUN_106a4590(void)

{
  __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x10 __asm _emit 0xc3 __asm _emit 0x8b
  __asm _emit 0x01 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x23 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0f
  __asm _emit 0x3b __asm _emit 0x08 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf1 __asm _emit 0x80
  __asm _emit 0x79 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc1 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x10 __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf5 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0x10 __asm _emit 0xc3
}






// Reference entry 106a4600; body size 6 bytes.
#line 1 "ENTRY_106a4600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106a4600(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106a4760; body size 16 bytes.
#line 1 "ENTRY_106a4760"

__declspec(naked) void FUN_106a4760(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x89 __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x11 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106a48c0; body size 23 bytes.
#line 1 "ENTRY_106a48c0"

__declspec(naked) void FUN_106a48c0(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xff __asm _emit 0x20 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106a4e70; body size 31 bytes.
#line 1 "ENTRY_106a4e70"

__declspec(naked) void FUN_106a4e70(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x20 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 106a4ea0; body size 14 bytes.
#line 1 "ENTRY_106a4ea0"

__declspec(naked) void FUN_106a4ea0(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x07
  __asm je LAB_1000d4ae
  __asm _emit 0xc3
}






// Reference entry 106a4ec0; body size 17 bytes.
#line 1 "ENTRY_106a4ec0"

__declspec(naked) void FUN_106a4ec0(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x72 __asm _emit 0x03 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10092c0d
}






// Reference entry 106a4ee0; body size 19 bytes.
#line 1 "ENTRY_106a4ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_106a4ee0(int param_2,uint param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x10) - param_2);
  if (uVar1 < param_3) {
    param_3 = (uint)(uVar1);
  }
  return (uint)(param_3);
}


// Reference entry 106a5010; body size 68 bytes.
#line 1 "ENTRY_106a5010"

__declspec(naked) void FUN_106a5010(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x56 __asm _emit 0x10
  __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x2b __asm _emit 0xc3 __asm _emit 0x3b __asm _emit 0xc7 __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0xf8 __asm _emit 0x83 __asm _emit 0x7e __asm _emit 0x14 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x72
  __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x2b __asm _emit 0xd7 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x56 __asm _emit 0x10 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x39 __asm _emit 0x2b __asm _emit 0xd3
  __asm _emit 0x42 __asm _emit 0x52 __asm _emit 0x50 __asm _emit 0x51
  __asm call LAB_1148cdf3
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106a5070; body size 3 bytes.
#line 1 "ENTRY_106a5070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a5070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a5080; body size 59 bytes.
#line 1 "ENTRY_106a5080"

__declspec(naked) void FUN_106a5080(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0x71 __asm _emit 0x0c __asm _emit 0x73 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08
  __asm _emit 0x8b __asm _emit 0x04 __asm _emit 0xb0 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x20 __asm _emit 0xeb __asm _emit 0x02 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x74
  __asm _emit 0x16
  __asm call LAB_1148a20d
  __asm _emit 0x3b __asm _emit 0x70 __asm _emit 0x0c __asm _emit 0x73 __asm _emit 0x0a __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x04 __asm _emit 0xb0 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33
  __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106a50d0; body size 146 bytes.
#line 1 "ENTRY_106a50d0"

__declspec(naked) void FUN_106a50d0(void)

{
  __asm _emit 0x51 __asm _emit 0x83 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x01 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0x57 __asm _emit 0x88 __asm _emit 0x46 __asm _emit 0x48
  __asm _emit 0xc6 __asm _emit 0x46 __asm _emit 0x3d __asm _emit 0x00
  __asm call dword ptr [LAB_122fc354]
  __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x4f __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x50 __asm _emit 0x57
  __asm call dword ptr [LAB_122fc94c]
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x2c __asm _emit 0x89 __asm _emit 0x46
  __asm _emit 0x30 __asm _emit 0x89 __asm _emit 0x7e __asm _emit 0x4c
  __asm mov eax, dword ptr [LAB_121a2604]
  __asm mov ecx, dword ptr [LAB_121a2608]
  __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x40 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x44 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x59
  __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106a5190; body size 48 bytes.
#line 1 "ENTRY_106a5190"

__declspec(naked) void FUN_106a5190(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0xcf
  __asm call dword ptr [LAB_122fc42c]
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x89 __asm _emit 0x7e __asm _emit 0x38
  __asm call dword ptr [LAB_122fc354]
  __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106a5480; body size 79 bytes.
#line 1 "ENTRY_106a5480"

__declspec(naked) void FUN_106a5480(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x72 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x89 __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x80
  __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x03 __asm _emit 0x89 __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x3b __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x75 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x89 __asm _emit 0x72 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0x10 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x89 __asm _emit 0x72 __asm _emit 0x04 __asm _emit 0x5e
  __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x89 __asm _emit 0x72 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106a5520; body size 83 bytes.
#line 1 "ENTRY_106a5520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106a5520(int *param_2)
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


// Reference entry 106a5590; body size 51 bytes.
#line 1 "ENTRY_106a5590"

__declspec(naked) void FUN_106a5590(void)

{
  __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7a __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x72 __asm _emit 0x3c __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x3b __asm _emit 0xc6 __asm _emit 0x74 __asm _emit 0x10
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x42 __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x2c __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x03 __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x42 __asm _emit 0x54
  __asm _emit 0x89 __asm _emit 0x37 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x1c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x2c __asm _emit 0x5e __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc3
}






// Reference entry 106a64e0; body size 59 bytes.
#line 1 "ENTRY_106a64e0"

__declspec(naked) void FUN_106a64e0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x3b
  __asm _emit 0xd6 __asm _emit 0x72 __asm _emit 0x23 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x2b __asm _emit 0xd6 __asm _emit 0x3b __asm _emit 0xd1 __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0xca __asm _emit 0x83 __asm _emit 0x78
  __asm _emit 0x14 __asm _emit 0x10 __asm _emit 0x72 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x51 __asm _emit 0x03 __asm _emit 0xc6 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x50
  __asm call LAB_10037a97
  __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
  __asm call LAB_10092c0d
}






// Reference entry 106a6530; body size 13 bytes.
#line 1 "ENTRY_106a6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106a6530(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106a6a80; body size 12 bytes.
#line 1 "ENTRY_106a6a80"

__declspec(naked) void FUN_106a6a80(void)

{
  __asm _emit 0x83 __asm _emit 0x79 __asm _emit 0x14 __asm _emit 0x10 __asm _emit 0x72 __asm _emit 0x03 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc3
}






// Reference entry 106a6a90; body size 11 bytes.
#line 1 "ENTRY_106a6a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106a6a90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106a6b10; body size 25 bytes.
#line 1 "ENTRY_106a6b10"

__declspec(naked) void FUN_106a6b10(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x0f __asm _emit 0xbe __asm _emit 0x00 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_1148ce11
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0xc3
}






// Reference entry 106a6ba0; body size 60 bytes.
#line 1 "ENTRY_106a6ba0"

__declspec(naked) void FUN_106a6ba0(void)

{
  __asm _emit 0x83 __asm _emit 0x79 __asm _emit 0x14 __asm _emit 0x10 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x72 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x31 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x4c
  __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x73 __asm _emit 0x1f __asm _emit 0x2b __asm _emit 0xc1 __asm _emit 0x50 __asm _emit 0x0f __asm _emit 0xbe __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0x8d
  __asm _emit 0x04 __asm _emit 0x0e __asm _emit 0x50
  __asm call LAB_1148ce11
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x06 __asm _emit 0x2b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x83 __asm _emit 0xc8 __asm _emit 0xff
  __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106a6bf0; body size 12 bytes.
#line 1 "ENTRY_106a6bf0"

__declspec(naked) void FUN_106a6bf0(void)

{
  __asm _emit 0x83 __asm _emit 0x79 __asm _emit 0x14 __asm _emit 0x10 __asm _emit 0x72 __asm _emit 0x03 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc3
}






// Reference entry 106a6e40; body size 7 bytes.
#line 1 "ENTRY_106a6e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_106a6e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a6ea0; body size 8 bytes.
#line 1 "ENTRY_106a6ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106a6ea0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x4c) != 0);
}


// Reference entry 106a6eb0; body size 8 bytes.
#line 1 "ENTRY_106a6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106a6eb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 100) != 0);
}


// Reference entry 106a6ec0; body size 6 bytes.
#line 1 "ENTRY_106a6ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a6ec0(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 106a6ed0; body size 6 bytes.
#line 1 "ENTRY_106a6ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a6ed0(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 106a7330; body size 5 bytes.
#line 1 "ENTRY_106a7330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a7330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a7680; body size 11 bytes.
#line 1 "ENTRY_106a7680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106a7680(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106a7690; body size 9 bytes.
#line 1 "ENTRY_106a7690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a7690(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106a7ec0; body size 4 bytes.
#line 1 "ENTRY_106a7ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106a7ec0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 106a7ed0; body size 18 bytes.
#line 1 "ENTRY_106a7ed0"

__declspec(naked) void FUN_106a7ed0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106a7ef0; body size 76 bytes.
#line 1 "ENTRY_106a7ef0"

__declspec(naked) void FUN_106a7ef0(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc6 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0xc2 __asm _emit 0x72
  __asm _emit 0x26 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x3b __asm _emit 0xc7 __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0xf8 __asm _emit 0x83 __asm _emit 0x79 __asm _emit 0x14
  __asm _emit 0x10 __asm _emit 0x72 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x03 __asm _emit 0xca __asm _emit 0x57 __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10037a97
  __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
  __asm call LAB_10092c0d
}






// Reference entry 106a8680; body size 18 bytes.
#line 1 "ENTRY_106a8680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a8680(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a86a0; body size 18 bytes.
#line 1 "ENTRY_106a86a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a86a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a86c0; body size 25 bytes.
#line 1 "ENTRY_106a86c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a86c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a86e0; body size 25 bytes.
#line 1 "ENTRY_106a86e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a86e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8700; body size 25 bytes.
#line 1 "ENTRY_106a8700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a8700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8720; body size 22 bytes.
#line 1 "ENTRY_106a8720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a8720(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8740; body size 22 bytes.
#line 1 "ENTRY_106a8740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a8740(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8760; body size 22 bytes.
#line 1 "ENTRY_106a8760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a8760(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8860; body size 22 bytes.
#line 1 "ENTRY_106a8860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a8860(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8880; body size 18 bytes.
#line 1 "ENTRY_106a8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a8880(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a88a0; body size 18 bytes.
#line 1 "ENTRY_106a88a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a88a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8b20; body size 25 bytes.
#line 1 "ENTRY_106a8b20"

__declspec(naked) void FUN_106a8b20(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 106a8b40; body size 11 bytes.
#line 1 "ENTRY_106a8b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a8b40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8b50; body size 11 bytes.
#line 1 "ENTRY_106a8b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a8b50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8b60; body size 22 bytes.
#line 1 "ENTRY_106a8b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a8b60(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8b80; body size 22 bytes.
#line 1 "ENTRY_106a8b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a8b80(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8ba0; body size 18 bytes.
#line 1 "ENTRY_106a8ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a8ba0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8bc0; body size 106 bytes.
#line 1 "ENTRY_106a8bc0"

__declspec(naked) void FUN_106a8bc0(void)

{
  __asm _emit 0x51 __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8d __asm _emit 0x5e __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x0c
  __asm mov dword ptr [esi], offset LAB_118c91d8
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x3c __asm _emit 0x3b __asm _emit 0xcf
  __asm _emit 0x75 __asm _emit 0x2e __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x53 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9
  __asm _emit 0x74 __asm _emit 0x28 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xcf __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x10
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0x59
  __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106a8d50; body size 11 bytes.
#line 1 "ENTRY_106a8d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a8d50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8ef0; body size 22 bytes.
#line 1 "ENTRY_106a8ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a8ef0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8f10; body size 18 bytes.
#line 1 "ENTRY_106a8f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a8f10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8fd0; body size 33 bytes.
#line 1 "ENTRY_106a8fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a8fd0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 106a9000; body size 25 bytes.
#line 1 "ENTRY_106a9000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a9000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a9020; body size 33 bytes.
#line 1 "ENTRY_106a9020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106a9020(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 106a9050; body size 25 bytes.
#line 1 "ENTRY_106a9050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a9050(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a9070; body size 27 bytes.
#line 1 "ENTRY_106a9070"

__declspec(naked) void FUN_106a9070(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc1
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 106a90a0; body size 91 bytes.
#line 1 "ENTRY_106a90a0"

__declspec(naked) void FUN_106a90a0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf
  __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106a9120; body size 26 bytes.
#line 1 "ENTRY_106a9120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106a9120(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 106a91c0; body size 39 bytes.
#line 1 "ENTRY_106a91c0"

__declspec(naked) void FUN_106a91c0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_10036c23
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x89 __asm _emit 0x56
  __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106a92c0; body size 39 bytes.
#line 1 "ENTRY_106a92c0"

__declspec(naked) void FUN_106a92c0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x52 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0xd0 __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 106a9300; body size 3 bytes.
#line 1 "ENTRY_106a9300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9300(void)

{
  return;
}


// Reference entry 106a9310; body size 3 bytes.
#line 1 "ENTRY_106a9310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9310(void)

{
  return;
}


// Reference entry 106a9320; body size 3 bytes.
#line 1 "ENTRY_106a9320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9320(void)

{
  return;
}


// Reference entry 106a9330; body size 3 bytes.
#line 1 "ENTRY_106a9330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9330(void)

{
  return;
}


// Reference entry 106a9740; body size 25 bytes.
#line 1 "ENTRY_106a9740"

__declspec(naked) void FUN_106a9740(void)

{
  __asm _emit 0x6a __asm _emit 0x20
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0xc3
}






// Reference entry 106a9760; body size 25 bytes.
#line 1 "ENTRY_106a9760"

__declspec(naked) void FUN_106a9760(void)

{
  __asm _emit 0x6a __asm _emit 0x28
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0xc3
}






// Reference entry 106a9920; body size 38 bytes.
#line 1 "ENTRY_106a9920"

__declspec(naked) void FUN_106a9920(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x48
  __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9
  __asm je LAB_1148a05a
  __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x52 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0xd0 __asm _emit 0xc3
}






// Reference entry 106a9b50; body size 5 bytes.
#line 1 "ENTRY_106a9b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a9b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a9b60; body size 5 bytes.
#line 1 "ENTRY_106a9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a9b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106a9b70; body size 13 bytes.
#line 1 "ENTRY_106a9b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9b70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106a9b80; body size 13 bytes.
#line 1 "ENTRY_106a9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9b80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106a9b90; body size 13 bytes.
#line 1 "ENTRY_106a9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9b90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106a9ba0; body size 13 bytes.
#line 1 "ENTRY_106a9ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9ba0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106a9ff0; body size 3 bytes.
#line 1 "ENTRY_106a9ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9ff0(void)

{
  return;
}


// Reference entry 106aa000; body size 3 bytes.
#line 1 "ENTRY_106aa000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aa000(void)

{
  return;
}


// Reference entry 106aa140; body size 34 bytes.
#line 1 "ENTRY_106aa140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aa140(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 5) {
    ((SCVtbl_0_1*)(param_1))->v((int)(0));
  }
  return;
}


// Reference entry 106aa2f0; body size 39 bytes.
#line 1 "ENTRY_106aa2f0"

__declspec(naked) void FUN_106aa2f0(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106aa320; body size 39 bytes.
#line 1 "ENTRY_106aa320"

__declspec(naked) void FUN_106aa320(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106aa350; body size 23 bytes.
#line 1 "ENTRY_106aa350"

__declspec(naked) void FUN_106aa350(void)

{
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm call LAB_1008dd20
  __asm _emit 0x83 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x14 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106aa3a0; body size 39 bytes.
#line 1 "ENTRY_106aa3a0"

__declspec(naked) void FUN_106aa3a0(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106aa3d0; body size 39 bytes.
#line 1 "ENTRY_106aa3d0"

__declspec(naked) void FUN_106aa3d0(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106aa400; body size 29 bytes.
#line 1 "ENTRY_106aa400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106aa400(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106aec80(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 106aa430; body size 46 bytes.
#line 1 "ENTRY_106aa430"

__declspec(naked) void FUN_106aa430(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x56 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0x85 __asm _emit 0xc0
  __asm _emit 0x74 __asm _emit 0x14 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xf0 __asm _emit 0x81 __asm _emit 0x38 __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x7d __asm _emit 0x09 __asm _emit 0x50
  __asm call LAB_10066e8c
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106aa4a0; body size 39 bytes.
#line 1 "ENTRY_106aa4a0"

__declspec(naked) void FUN_106aa4a0(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106aa4d0; body size 23 bytes.
#line 1 "ENTRY_106aa4d0"

__declspec(naked) void FUN_106aa4d0(void)

{
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm call LAB_1008dd20
  __asm _emit 0x83 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x14 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106aa4f0; body size 39 bytes.
#line 1 "ENTRY_106aa4f0"

__declspec(naked) void FUN_106aa4f0(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106aa520; body size 39 bytes.
#line 1 "ENTRY_106aa520"

__declspec(naked) void FUN_106aa520(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b
  __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47
  __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106aa550; body size 27 bytes.
#line 1 "ENTRY_106aa550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106aa550(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106aec80(param_1,*(undefined4 *)(param_1 + 4),param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 106aa580; body size 46 bytes.
#line 1 "ENTRY_106aa580"

__declspec(naked) void FUN_106aa580(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x56 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0x85 __asm _emit 0xc0
  __asm _emit 0x74 __asm _emit 0x14 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xf0 __asm _emit 0x81 __asm _emit 0x38 __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x7d __asm _emit 0x09 __asm _emit 0x50
  __asm call LAB_10066e8c
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106ab980; body size 49 bytes.
#line 1 "ENTRY_106ab980"

__declspec(naked) void FUN_106ab980(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x74 __asm _emit 0x1e __asm _emit 0x53 __asm _emit 0x8b
  __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10049a94
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x07 __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x75 __asm _emit 0xed __asm _emit 0x5b __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e
  __asm _emit 0xc3 __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 106ab9c0; body size 49 bytes.
#line 1 "ENTRY_106ab9c0"

__declspec(naked) void FUN_106ab9c0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x74 __asm _emit 0x1e __asm _emit 0x53 __asm _emit 0x8b
  __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10049a94
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x07 __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x75 __asm _emit 0xed __asm _emit 0x5b __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e
  __asm _emit 0xc3 __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 106aba00; body size 15 bytes.
#line 1 "ENTRY_106aba00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aba00(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 106aba20; body size 15 bytes.
#line 1 "ENTRY_106aba20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aba20(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x28);
  return;
}


// Reference entry 106abb40; body size 7 bytes.
#line 1 "ENTRY_106abb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106abb50; body size 7 bytes.
#line 1 "ENTRY_106abb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106abb60; body size 5 bytes.
#line 1 "ENTRY_106abb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106abb70; body size 7 bytes.
#line 1 "ENTRY_106abb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106abb80; body size 7 bytes.
#line 1 "ENTRY_106abb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106abb90; body size 7 bytes.
#line 1 "ENTRY_106abb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abb90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106abba0; body size 7 bytes.
#line 1 "ENTRY_106abba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abba0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106abbb0; body size 7 bytes.
#line 1 "ENTRY_106abbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abbb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106abbc0; body size 7 bytes.
#line 1 "ENTRY_106abbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abbc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106abbd0; body size 7 bytes.
#line 1 "ENTRY_106abbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106abbd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106ac400; body size 5 bytes.
#line 1 "ENTRY_106ac400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ac400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ac410; body size 5 bytes.
#line 1 "ENTRY_106ac410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ac410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ac420; body size 5 bytes.
#line 1 "ENTRY_106ac420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ac420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ac430; body size 37 bytes.
#line 1 "ENTRY_106ac430"

__declspec(naked) void FUN_106ac430(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_10070fbd
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x05 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106ac460; body size 31 bytes.
#line 1 "ENTRY_106ac460"

__declspec(naked) void FUN_106ac460(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x00
  __asm _emit 0x3b __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x7c __asm _emit 0x05 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106ac490; body size 31 bytes.
#line 1 "ENTRY_106ac490"

__declspec(naked) void FUN_106ac490(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x00
  __asm _emit 0x3b __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x7c __asm _emit 0x05 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106ac690; body size 70 bytes.
#line 1 "ENTRY_106ac690"

__declspec(naked) void FUN_106ac690(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x3b __asm _emit 0xfb __asm _emit 0x74 __asm _emit 0x31 __asm _emit 0x56 __asm _emit 0x8b
  __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x3b __asm _emit 0xfe __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1005c315
  __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x89 __asm _emit 0x06
  __asm call LAB_1002a973
  __asm _emit 0x8a __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xc7 __asm _emit 0x08 __asm _emit 0x88 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0xfb __asm _emit 0x75 __asm _emit 0xda
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5f __asm _emit 0x5b __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x5f __asm _emit 0x5b __asm _emit 0xc3
}






// Reference entry 106ac770; body size 187 bytes.
#line 1 "ENTRY_106ac770"

__declspec(naked) void FUN_106ac770(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x0c
  __asm je LAB_106ac825
  __asm _emit 0x55 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x04 __asm _emit 0x57 __asm _emit 0x83 __asm _emit 0xc3
  __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0xde __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1005c315
  __asm _emit 0x8b __asm _emit 0x03 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x89 __asm _emit 0x06
  __asm call LAB_1002a973
  __asm _emit 0x8d __asm _emit 0x6b __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x7e __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0xef __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0x8b __asm _emit 0xcf
  __asm call LAB_1005c315
  __asm _emit 0x8b __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0x89 __asm _emit 0x07
  __asm call LAB_1002a973
  __asm _emit 0x8d __asm _emit 0x43 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x6e __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0xe8 __asm _emit 0x74 __asm _emit 0x35 __asm _emit 0x8b __asm _emit 0x7d __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xcd __asm _emit 0xff
  __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x55
  __asm call LAB_100547dc
  __asm _emit 0x89 __asm _emit 0x7f __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x3f __asm _emit 0x89 __asm _emit 0x7f __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x4d __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x4e
  __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x83 __asm _emit 0xc3 __asm _emit 0x14 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0x14 __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x8d __asm _emit 0x4b __asm _emit 0xfc __asm _emit 0x3b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x18
  __asm jne LAB_106ac790
  __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x5b __asm _emit 0xc3
}






// Reference entry 106ac860; body size 8 bytes.
#line 1 "ENTRY_106ac860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106ac860(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 106ad1f0; body size 11 bytes.
#line 1 "ENTRY_106ad1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad1f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106ad200; body size 3 bytes.
#line 1 "ENTRY_106ad200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad200(void)

{
  return;
}


// Reference entry 106ad210; body size 3 bytes.
#line 1 "ENTRY_106ad210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad210(void)

{
  return;
}


// Reference entry 106ad220; body size 3 bytes.
#line 1 "ENTRY_106ad220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad220(void)

{
  return;
}


// Reference entry 106ad230; body size 3 bytes.
#line 1 "ENTRY_106ad230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad230(void)

{
  return;
}


// Reference entry 106ad5d0; body size 8 bytes.
#line 1 "ENTRY_106ad5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106ad5d0(int param_1)

{
  return (int)(param_1 + -8);
}


// Reference entry 106ad6c0; body size 5 bytes.
#line 1 "ENTRY_106ad6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ad6c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ad7e0; body size 13 bytes.
#line 1 "ENTRY_106ad7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad7e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106ad7f0; body size 13 bytes.
#line 1 "ENTRY_106ad7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad7f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106ad800; body size 13 bytes.
#line 1 "ENTRY_106ad800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ad800(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106adc20; body size 19 bytes.
#line 1 "ENTRY_106adc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106adc20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 106adc40; body size 3 bytes.
#line 1 "ENTRY_106adc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_106adc40(void)

{
  return (undefined1)(1);
}


// Reference entry 106ae0f0; body size 7 bytes.
#line 1 "ENTRY_106ae0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae0f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106ae100; body size 24 bytes.
#line 1 "ENTRY_106ae100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106ae100(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106ae320(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106ae1b0; body size 5 bytes.
#line 1 "ENTRY_106ae1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae1b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae1c0; body size 5 bytes.
#line 1 "ENTRY_106ae1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae1c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae1d0; body size 5 bytes.
#line 1 "ENTRY_106ae1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae1d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae780; body size 5 bytes.
#line 1 "ENTRY_106ae780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae790; body size 5 bytes.
#line 1 "ENTRY_106ae790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae7a0; body size 5 bytes.
#line 1 "ENTRY_106ae7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae7a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae7b0; body size 5 bytes.
#line 1 "ENTRY_106ae7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae7b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae7c0; body size 5 bytes.
#line 1 "ENTRY_106ae7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae7c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae820; body size 5 bytes.
#line 1 "ENTRY_106ae820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae830; body size 5 bytes.
#line 1 "ENTRY_106ae830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae840; body size 5 bytes.
#line 1 "ENTRY_106ae840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae850; body size 5 bytes.
#line 1 "ENTRY_106ae850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae860; body size 5 bytes.
#line 1 "ENTRY_106ae860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae870; body size 5 bytes.
#line 1 "ENTRY_106ae870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae880; body size 5 bytes.
#line 1 "ENTRY_106ae880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae890; body size 5 bytes.
#line 1 "ENTRY_106ae890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae8a0; body size 5 bytes.
#line 1 "ENTRY_106ae8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae8b0; body size 5 bytes.
#line 1 "ENTRY_106ae8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae8c0; body size 5 bytes.
#line 1 "ENTRY_106ae8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae8d0; body size 5 bytes.
#line 1 "ENTRY_106ae8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae8e0; body size 5 bytes.
#line 1 "ENTRY_106ae8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae8f0; body size 5 bytes.
#line 1 "ENTRY_106ae8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae8f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae900; body size 5 bytes.
#line 1 "ENTRY_106ae900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae910; body size 5 bytes.
#line 1 "ENTRY_106ae910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae920; body size 5 bytes.
#line 1 "ENTRY_106ae920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae930; body size 5 bytes.
#line 1 "ENTRY_106ae930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae940; body size 5 bytes.
#line 1 "ENTRY_106ae940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae950; body size 5 bytes.
#line 1 "ENTRY_106ae950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae960; body size 5 bytes.
#line 1 "ENTRY_106ae960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ae960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ae970; body size 18 bytes.
#line 1 "ENTRY_106ae970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ae970(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 8);
  return;
}


// Reference entry 106ae990; body size 17 bytes.
#line 1 "ENTRY_106ae990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ae990(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 0x14);
  return;
}


// Reference entry 106ae9b0; body size 20 bytes.
#line 1 "ENTRY_106ae9b0"

__declspec(naked) void FUN_106ae9b0(void)

{
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_10051843
  __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106ae9d0; body size 20 bytes.
#line 1 "ENTRY_106ae9d0"

__declspec(naked) void FUN_106ae9d0(void)

{
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_100362aa
  __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106ae9f0; body size 27 bytes.
#line 1 "ENTRY_106ae9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ae9f0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 106aea20; body size 33 bytes.
#line 1 "ENTRY_106aea20"

__declspec(naked) void FUN_106aea20(void)

{
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10036c23
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x5e
  __asm _emit 0xc3
}






// Reference entry 106aea50; body size 53 bytes.
#line 1 "ENTRY_106aea50"

__declspec(naked) void FUN_106aea50(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8d __asm _emit 0x71 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x0c
  __asm _emit 0x50
  __asm call LAB_10036c23
  __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x14 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x0c __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 106aeaa0; body size 22 bytes.
#line 1 "ENTRY_106aeaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aeaa0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[3] = (undefined4)(0);
  return;
}


// Reference entry 106aeac0; body size 27 bytes.
#line 1 "ENTRY_106aeac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aeac0(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  param_2[4] = (SCStr)(param_3[4]);
  return;
}


// Reference entry 106aeaf0; body size 27 bytes.
#line 1 "ENTRY_106aeaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aeaf0(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  param_2[4] = (SCStr)(param_3[4]);
  return;
}


// Reference entry 106aeb20; body size 27 bytes.
#line 1 "ENTRY_106aeb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aeb20(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  param_2[4] = (SCStr)(param_3[4]);
  return;
}


// Reference entry 106aeb50; body size 28 bytes.
#line 1 "ENTRY_106aeb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aeb50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 106aeb80; body size 28 bytes.
#line 1 "ENTRY_106aeb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aeb80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 106aebb0; body size 28 bytes.
#line 1 "ENTRY_106aebb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aebb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 106aebe0; body size 28 bytes.
#line 1 "ENTRY_106aebe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aebe0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 106aec10; body size 28 bytes.
#line 1 "ENTRY_106aec10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aec10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 106aec40; body size 14 bytes.
#line 1 "ENTRY_106aec40"

__declspec(naked) void FUN_106aec40(void)

{
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_1008dd20
  __asm _emit 0xc3
}






// Reference entry 106aec60; body size 14 bytes.
#line 1 "ENTRY_106aec60"

__declspec(naked) void FUN_106aec60(void)

{
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_1008dd20
  __asm _emit 0xc3
}






// Reference entry 106aed60; body size 35 bytes.
#line 1 "ENTRY_106aed60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aed60(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 106af010; body size 11 bytes.
#line 1 "ENTRY_106af010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106af010(undefined4 param_1,undefined4 *param_2)

{
  ((SCVtbl_0_1*)(param_2))->v((int)(0));
  return;
}


// Reference entry 106af020; body size 12 bytes.
#line 1 "ENTRY_106af020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106af020(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 106af030; body size 26 bytes.
#line 1 "ENTRY_106af030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106af030(int param_1,int param_2)

{
  return (int)((param_2 - param_1) / 0x14);
}


// Reference entry 106af050; body size 86 bytes.
#line 1 "ENTRY_106af050"

__declspec(naked) void FUN_106af050(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x33 __asm _emit 0xff __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x74 __asm _emit 0x43 __asm _emit 0x56
  __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x47 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x1d __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x52 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf0 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0xeb __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x30 __asm _emit 0x80 __asm _emit 0x7e __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75
  __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x8b __asm _emit 0xf2 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf4 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x75
  __asm _emit 0xbf __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0xc3
}






// Reference entry 106af1f0; body size 56 bytes.
#line 1 "ENTRY_106af1f0"

__declspec(naked) void FUN_106af1f0(void)

{
  __asm _emit 0x53 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x5f __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0x5f __asm _emit 0x08 __asm _emit 0x74 __asm _emit 0x1d __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xcb __asm _emit 0x56
  __asm call LAB_10036c23
  __asm _emit 0x8a __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x88 __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x5f __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x53
  __asm call LAB_10008f1c
  __asm _emit 0x5f __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106af290; body size 40 bytes.
#line 1 "ENTRY_106af290"

__declspec(naked) void FUN_106af290(void)

{
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x74 __asm _emit 0x0f __asm _emit 0x8b
  __asm _emit 0xc8
  __asm call LAB_1008dd20
  __asm _emit 0x83 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x14 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x50
  __asm call LAB_1008148a
  __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106af370; body size 42 bytes.
#line 1 "ENTRY_106af370"

__declspec(naked) void FUN_106af370(void)

{
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x50 __asm _emit 0x3b __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x74 __asm _emit 0x11
  __asm _emit 0x56
  __asm call LAB_10035571
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x83 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x14 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10060505
  __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106af5c0; body size 15 bytes.
#line 1 "ENTRY_106af5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af5c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106af5e0; body size 15 bytes.
#line 1 "ENTRY_106af5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af5e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106af600; body size 15 bytes.
#line 1 "ENTRY_106af600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af600(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106af620; body size 15 bytes.
#line 1 "ENTRY_106af620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af620(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106af640; body size 15 bytes.
#line 1 "ENTRY_106af640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af640(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106af660; body size 15 bytes.
#line 1 "ENTRY_106af660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af660(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106af680; body size 57 bytes.
#line 1 "ENTRY_106af680"

__declspec(naked) void FUN_106af680(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x74 __asm _emit 0x22 __asm _emit 0x53 __asm _emit 0x8b
  __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10049a94
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x07 __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x75 __asm _emit 0xed __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x5b
  __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x5e __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 106af720; body size 66 bytes.
#line 1 "ENTRY_106af720"

__declspec(naked) void FUN_106af720(void)

{
  __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x74 __asm _emit 0x28 __asm _emit 0x8b
  __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x4b __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x1d
  __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x52 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0xd0 __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x07
  __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x75 __asm _emit 0xdc __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc3
  __asm call LAB_1148a05a
}






// Reference entry 106af780; body size 5 bytes.
#line 1 "ENTRY_106af780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af790; body size 5 bytes.
#line 1 "ENTRY_106af790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af7a0; body size 5 bytes.
#line 1 "ENTRY_106af7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af7b0; body size 5 bytes.
#line 1 "ENTRY_106af7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af7c0; body size 5 bytes.
#line 1 "ENTRY_106af7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af7d0; body size 5 bytes.
#line 1 "ENTRY_106af7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af7e0; body size 5 bytes.
#line 1 "ENTRY_106af7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af7f0; body size 5 bytes.
#line 1 "ENTRY_106af7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af7f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af800; body size 5 bytes.
#line 1 "ENTRY_106af800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af810; body size 5 bytes.
#line 1 "ENTRY_106af810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af820; body size 5 bytes.
#line 1 "ENTRY_106af820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af830; body size 5 bytes.
#line 1 "ENTRY_106af830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af840; body size 5 bytes.
#line 1 "ENTRY_106af840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af850; body size 5 bytes.
#line 1 "ENTRY_106af850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af860; body size 5 bytes.
#line 1 "ENTRY_106af860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af8c0; body size 5 bytes.
#line 1 "ENTRY_106af8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af8c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af8d0; body size 5 bytes.
#line 1 "ENTRY_106af8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af8d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af8e0; body size 5 bytes.
#line 1 "ENTRY_106af8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af8f0; body size 5 bytes.
#line 1 "ENTRY_106af8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af8f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af900; body size 5 bytes.
#line 1 "ENTRY_106af900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af910; body size 5 bytes.
#line 1 "ENTRY_106af910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af920; body size 5 bytes.
#line 1 "ENTRY_106af920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af930; body size 5 bytes.
#line 1 "ENTRY_106af930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af940; body size 5 bytes.
#line 1 "ENTRY_106af940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af950; body size 5 bytes.
#line 1 "ENTRY_106af950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af960; body size 5 bytes.
#line 1 "ENTRY_106af960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af9c0; body size 5 bytes.
#line 1 "ENTRY_106af9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af9d0; body size 5 bytes.
#line 1 "ENTRY_106af9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af9d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af9e0; body size 5 bytes.
#line 1 "ENTRY_106af9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106af9f0; body size 5 bytes.
#line 1 "ENTRY_106af9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106af9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106afa00; body size 5 bytes.
#line 1 "ENTRY_106afa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106afa00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106afa10; body size 5 bytes.
#line 1 "ENTRY_106afa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106afa10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106afa20; body size 5 bytes.
#line 1 "ENTRY_106afa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106afa20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106afa30; body size 5 bytes.
#line 1 "ENTRY_106afa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106afa30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106afa40; body size 5 bytes.
#line 1 "ENTRY_106afa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106afa40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106afa50; body size 11 bytes.
#line 1 "ENTRY_106afa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106afa50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106afc80; body size 49 bytes.
#line 1 "ENTRY_106afc80"

__declspec(naked) void FUN_106afc80(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0xf0 __asm _emit 0xff __asm _emit 0x74
  __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x2b __asm _emit 0x37 __asm _emit 0x50 __asm _emit 0xc1 __asm _emit 0xfe __asm _emit 0x03
  __asm call LAB_10085aee
  __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xf0 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 106afcc0; body size 38 bytes.
#line 1 "ENTRY_106afcc0"

__declspec(naked) void FUN_106afcc0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x48
  __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9
  __asm je LAB_1148a05a
  __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x52 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0xd0 __asm _emit 0xc3
}






// Reference entry 106b0000; body size 5 bytes.
#line 1 "ENTRY_106b0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b0000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b0010; body size 5 bytes.
#line 1 "ENTRY_106b0010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b0010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b0020; body size 5 bytes.
#line 1 "ENTRY_106b0020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b0020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b0080; body size 5 bytes.
#line 1 "ENTRY_106b0080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b0080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b0090; body size 5 bytes.
#line 1 "ENTRY_106b0090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b0090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b00a0; body size 5 bytes.
#line 1 "ENTRY_106b00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b00a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b00b0; body size 5 bytes.
#line 1 "ENTRY_106b00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b00b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b00c0; body size 5 bytes.
#line 1 "ENTRY_106b00c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b00c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b00d0; body size 5 bytes.
#line 1 "ENTRY_106b00d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b00d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b00e0; body size 5 bytes.
#line 1 "ENTRY_106b00e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b00e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b00f0; body size 12 bytes.
#line 1 "ENTRY_106b00f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106b00f0(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 8);
}


// Reference entry 106b0100; body size 15 bytes.
#line 1 "ENTRY_106b0100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106b0100(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 0x14);
}


// Reference entry 106b02a0; body size 19 bytes.
#line 1 "ENTRY_106b02a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106b02a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 106b03f0; body size 95 bytes.
#line 1 "ENTRY_106b03f0"

__declspec(naked) void FUN_106b03f0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_1001e885
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_118c8304
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c8328
  __asm mov dword ptr [esi + 0x18], offset LAB_118c8368
  __asm mov dword ptr [esi + 0x1c], offset LAB_118c838c
  __asm mov dword ptr [esi + 0x38], offset LAB_118c839c
  __asm mov dword ptr [esi + 0x44], offset LAB_118c83b0
  __asm mov dword ptr [esi + 0x50], offset LAB_118c83c0
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 106b0470; body size 95 bytes.
#line 1 "ENTRY_106b0470"

__declspec(naked) void FUN_106b0470(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_10083e74
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_118c86bc
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c86e0
  __asm mov dword ptr [esi + 0x18], offset LAB_118c8720
  __asm mov dword ptr [esi + 0x1c], offset LAB_118c8744
  __asm mov dword ptr [esi + 0x38], offset LAB_118c8754
  __asm mov dword ptr [esi + 0x44], offset LAB_118c8768
  __asm mov dword ptr [esi + 0x50], offset LAB_118c8778
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 106b04f0; body size 95 bytes.
#line 1 "ENTRY_106b04f0"

__declspec(naked) void FUN_106b04f0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_1000e0ca
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_118c89d8
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c89fc
  __asm mov dword ptr [esi + 0x18], offset LAB_118c8a3c
  __asm mov dword ptr [esi + 0x1c], offset LAB_118c8a60
  __asm mov dword ptr [esi + 0x38], offset LAB_118c8a70
  __asm mov dword ptr [esi + 0x44], offset LAB_118c8a84
  __asm mov dword ptr [esi + 0x50], offset LAB_118c8a94
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 106b0570; body size 32 bytes.
#line 1 "ENTRY_106b0570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0570(undefined4 *param_2)
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


// Reference entry 106b05e0; body size 16 bytes.
#line 1 "ENTRY_106b05e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b05e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0600; body size 16 bytes.
#line 1 "ENTRY_106b0600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0620; body size 16 bytes.
#line 1 "ENTRY_106b0620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0620(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0740; body size 18 bytes.
#line 1 "ENTRY_106b0740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0740(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0760; body size 18 bytes.
#line 1 "ENTRY_106b0760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0760(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0780; body size 3 bytes.
#line 1 "ENTRY_106b0780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b0790; body size 10 bytes.
#line 1 "ENTRY_106b0790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b0790(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 106b0870; body size 11 bytes.
#line 1 "ENTRY_106b0870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0870(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0880; body size 11 bytes.
#line 1 "ENTRY_106b0880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0880(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0970; body size 11 bytes.
#line 1 "ENTRY_106b0970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0970(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0980; body size 11 bytes.
#line 1 "ENTRY_106b0980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0980(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0990; body size 51 bytes.
#line 1 "ENTRY_106b0990"

__declspec(naked) void FUN_106b0990(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x28 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89
  __asm _emit 0x46 __asm _emit 0x04
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106b09d0; body size 11 bytes.
#line 1 "ENTRY_106b09d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b09d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b09e0; body size 11 bytes.
#line 1 "ENTRY_106b09e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b09e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0af0; body size 11 bytes.
#line 1 "ENTRY_106b0af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0af0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0b00; body size 11 bytes.
#line 1 "ENTRY_106b0b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0b00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0b10; body size 11 bytes.
#line 1 "ENTRY_106b0b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0b10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0b20; body size 11 bytes.
#line 1 "ENTRY_106b0b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0b20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0b30; body size 11 bytes.
#line 1 "ENTRY_106b0b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0b30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0b40; body size 16 bytes.
#line 1 "ENTRY_106b0b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0b40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0b60; body size 16 bytes.
#line 1 "ENTRY_106b0b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0b60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0b80; body size 13 bytes.
#line 1 "ENTRY_106b0b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0b80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0b90; body size 21 bytes.
#line 1 "ENTRY_106b0b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0b90(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0bb0; body size 21 bytes.
#line 1 "ENTRY_106b0bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0bb0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0bd0; body size 21 bytes.
#line 1 "ENTRY_106b0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0bd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0bf0; body size 21 bytes.
#line 1 "ENTRY_106b0bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0bf0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0c10; body size 11 bytes.
#line 1 "ENTRY_106b0c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0c10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0c20; body size 11 bytes.
#line 1 "ENTRY_106b0c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0c20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0c30; body size 11 bytes.
#line 1 "ENTRY_106b0c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0c30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0c40; body size 11 bytes.
#line 1 "ENTRY_106b0c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0c40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0c50; body size 11 bytes.
#line 1 "ENTRY_106b0c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0c50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0c60; body size 11 bytes.
#line 1 "ENTRY_106b0c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0c60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0c70; body size 23 bytes.
#line 1 "ENTRY_106b0c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0c70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0c90; body size 25 bytes.
#line 1 "ENTRY_106b0c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0c90(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0cb0; body size 23 bytes.
#line 1 "ENTRY_106b0cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0cd0; body size 25 bytes.
#line 1 "ENTRY_106b0cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0cd0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0cf0; body size 23 bytes.
#line 1 "ENTRY_106b0cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0cf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0d10; body size 3 bytes.
#line 1 "ENTRY_106b0d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b0d20; body size 3 bytes.
#line 1 "ENTRY_106b0d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b0d30; body size 3 bytes.
#line 1 "ENTRY_106b0d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b0d40; body size 3 bytes.
#line 1 "ENTRY_106b0d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b0d50; body size 3 bytes.
#line 1 "ENTRY_106b0d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b0d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b0de0; body size 52 bytes.
#line 1 "ENTRY_106b0de0"

__declspec(naked) void FUN_106b0de0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x20 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106b0e30; body size 76 bytes.
#line 1 "ENTRY_106b0e30"

__declspec(naked) void FUN_106b0e30(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x28 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01 __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x0a __asm _emit 0x89 __asm _emit 0x0e __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x89 __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b0f30; body size 52 bytes.
#line 1 "ENTRY_106b0f30"

__declspec(naked) void FUN_106b0f30(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x28 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106b0f80; body size 63 bytes.
#line 1 "ENTRY_106b0f80"

__declspec(naked) void FUN_106b0f80(void)

{
  __asm _emit 0x51 __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xd9 __asm _emit 0x8d __asm _emit 0x73 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x5c __asm _emit 0x24
  __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x89 __asm _emit 0x03 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x89
  __asm _emit 0x06 __asm _emit 0x8d __asm _emit 0x47 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10036c23
  __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x14 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc3 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x0c __asm _emit 0x5e
  __asm _emit 0x5b __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b0fd0; body size 13 bytes.
#line 1 "ENTRY_106b0fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b0fd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b10b0; body size 23 bytes.
#line 1 "ENTRY_106b10b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b10b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b10d0; body size 49 bytes.
#line 1 "ENTRY_106b10d0"

__declspec(naked) void FUN_106b10d0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7e __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x56 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x79 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x51 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 106b1110; body size 23 bytes.
#line 1 "ENTRY_106b1110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b1110(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b1350; body size 23 bytes.
#line 1 "ENTRY_106b1350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b1350(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106b22a0; body size 9 bytes.
#line 1 "ENTRY_106b22a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b22a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryHistoryStore_Listener);
  return (undefined4 *)(param_1);
}


// Reference entry 106b22b0; body size 33 bytes.
#line 1 "ENTRY_106b22b0"

__declspec(naked) void FUN_106b22b0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x56 __asm _emit 0x89 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_10036c23
  __asm _emit 0x8a __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x88 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b22e0; body size 33 bytes.
#line 1 "ENTRY_106b22e0"

__declspec(naked) void FUN_106b22e0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x56 __asm _emit 0x89 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_10036c23
  __asm _emit 0x8a __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x88 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b2310; body size 14 bytes.
#line 1 "ENTRY_106b2310"

__declspec(naked) void FUN_106b2310(void)

{
  __asm _emit 0x51 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106b2330; body size 60 bytes.
#line 1 "ENTRY_106b2330"

__declspec(naked) void FUN_106b2330(void)

{
  __asm _emit 0x51 __asm _emit 0x0f __asm _emit 0x57 __asm _emit 0xc0 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x01
  __asm mov dword ptr [ecx], offset LAB_11881068
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], offset LAB_118c6fbc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_118c7b20
  __asm mov dword ptr [ecx + 8], offset LAB_118c7b84
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106b23b0; body size 37 bytes.
#line 1 "ENTRY_106b23b0"

__declspec(naked) void FUN_106b23b0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm mov dword ptr [esi], offset LAB_118c7a98
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c7afc
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b23e0; body size 37 bytes.
#line 1 "ENTRY_106b23e0"

__declspec(naked) void FUN_106b23e0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm mov dword ptr [esi], offset LAB_118c7a10
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c7a74
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b2410; body size 44 bytes.
#line 1 "ENTRY_106b2410"

__declspec(naked) void FUN_106b2410(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x88 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi], offset LAB_118c7438
  __asm mov dword ptr [esi + 8], offset LAB_118c749c
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106b2450; body size 9 bytes.
#line 1 "ENTRY_106b2450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b2450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAssetDownloadCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 106b2500; body size 37 bytes.
#line 1 "ENTRY_106b2500"

__declspec(naked) void FUN_106b2500(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm mov dword ptr [esi], offset LAB_118c7878
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c78dc
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b2530; body size 37 bytes.
#line 1 "ENTRY_106b2530"

__declspec(naked) void FUN_106b2530(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm mov dword ptr [esi], offset LAB_118c7900
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c7964
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b2560; body size 54 bytes.
#line 1 "ENTRY_106b2560"

__declspec(naked) void FUN_106b2560(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11881068
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], offset LAB_11881144
  __asm mov dword ptr [ecx], offset LAB_118c6f58
  __asm mov dword ptr [ecx + 8], offset LAB_118c6fbc
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106b25b0; body size 37 bytes.
#line 1 "ENTRY_106b25b0"

__declspec(naked) void FUN_106b25b0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm mov dword ptr [esi], offset LAB_118c74c0
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c7524
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b25e0; body size 37 bytes.
#line 1 "ENTRY_106b25e0"

__declspec(naked) void FUN_106b25e0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm mov dword ptr [esi], offset LAB_118c7548
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c75ac
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b2610; body size 37 bytes.
#line 1 "ENTRY_106b2610"

__declspec(naked) void FUN_106b2610(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm mov dword ptr [esi], offset LAB_118c7328
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c738c
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b2640; body size 11 bytes.
#line 1 "ENTRY_106b2640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b2640(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  return (undefined4 *)(param_1);
}


// Reference entry 106b2650; body size 37 bytes.
#line 1 "ENTRY_106b2650"

__declspec(naked) void FUN_106b2650(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm mov dword ptr [esi], offset LAB_118c7988
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c79ec
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b2680; body size 37 bytes.
#line 1 "ENTRY_106b2680"

__declspec(naked) void FUN_106b2680(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm mov dword ptr [esi], offset LAB_118c7768
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c77cc
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b2d00; body size 60 bytes.
#line 1 "ENTRY_106b2d00"

__declspec(naked) void FUN_106b2d00(void)

{
  __asm _emit 0x51 __asm _emit 0x0f __asm _emit 0x57 __asm _emit 0xc0 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x01
  __asm mov dword ptr [ecx], offset LAB_11881068
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], offset LAB_118c6fbc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_118c7d40
  __asm mov dword ptr [ecx + 8], offset LAB_118c7da4
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106b2d50; body size 60 bytes.
#line 1 "ENTRY_106b2d50"

__declspec(naked) void FUN_106b2d50(void)

{
  __asm _emit 0x51 __asm _emit 0x0f __asm _emit 0x57 __asm _emit 0xc0 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x01
  __asm mov dword ptr [ecx], offset LAB_11881068
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], offset LAB_118c6fbc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_118c7c30
  __asm mov dword ptr [ecx + 8], offset LAB_118c7c94
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106b2da0; body size 37 bytes.
#line 1 "ENTRY_106b2da0"

__declspec(naked) void FUN_106b2da0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm mov dword ptr [esi], offset LAB_118c77f0
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c7854
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b2dd0; body size 37 bytes.
#line 1 "ENTRY_106b2dd0"

__declspec(naked) void FUN_106b2dd0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm mov dword ptr [esi], offset LAB_118c73b0
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118c7414
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b2ec0; body size 60 bytes.
#line 1 "ENTRY_106b2ec0"

__declspec(naked) void FUN_106b2ec0(void)

{
  __asm _emit 0x51 __asm _emit 0x0f __asm _emit 0x57 __asm _emit 0xc0 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x01
  __asm mov dword ptr [ecx], offset LAB_11881068
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], offset LAB_118c6fbc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_118c7cb8
  __asm mov dword ptr [ecx + 8], offset LAB_118c7d1c
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106b2f10; body size 44 bytes.
#line 1 "ENTRY_106b2f10"

__declspec(naked) void FUN_106b2f10(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_1004aa43
  __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x88 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi], offset LAB_118c76e0
  __asm mov dword ptr [esi + 8], offset LAB_118c7744
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106b2f50; body size 49 bytes.
#line 1 "ENTRY_106b2f50"

__declspec(naked) void FUN_106b2f50(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x89 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x89
  __asm _emit 0x07 __asm _emit 0x8d __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x50
  __asm call LAB_10036c23
  __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x89 __asm _emit 0x4f __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x5e
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b3230; body size 15 bytes.
#line 1 "ENTRY_106b3230"

__declspec(naked) void FUN_106b3230(void)

{
  __asm _emit 0x51 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 106b3250; body size 11 bytes.
#line 1 "ENTRY_106b3250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106b3250(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106b3260; body size 53 bytes.
#line 1 "ENTRY_106b3260"

__declspec(naked) void FUN_106b3260(void)

{
  __asm mov dword ptr [ecx], offset LAB_118c8304
  __asm mov dword ptr [ecx + 8], offset LAB_118c8328
  __asm mov dword ptr [ecx + 0x18], offset LAB_118c8368
  __asm mov dword ptr [ecx + 0x1c], offset LAB_118c838c
  __asm mov dword ptr [ecx + 0x38], offset LAB_118c839c
  __asm mov dword ptr [ecx + 0x44], offset LAB_118c83b0
  __asm mov dword ptr [ecx + 0x50], offset LAB_118c83c0
  __asm jmp LAB_100709e6
}






// Reference entry 106b32b0; body size 53 bytes.
#line 1 "ENTRY_106b32b0"

__declspec(naked) void FUN_106b32b0(void)

{
  __asm mov dword ptr [ecx], offset LAB_118c86bc
  __asm mov dword ptr [ecx + 8], offset LAB_118c86e0
  __asm mov dword ptr [ecx + 0x18], offset LAB_118c8720
  __asm mov dword ptr [ecx + 0x1c], offset LAB_118c8744
  __asm mov dword ptr [ecx + 0x38], offset LAB_118c8754
  __asm mov dword ptr [ecx + 0x44], offset LAB_118c8768
  __asm mov dword ptr [ecx + 0x50], offset LAB_118c8778
  __asm jmp LAB_100709e6
}






// Reference entry 106b3300; body size 53 bytes.
#line 1 "ENTRY_106b3300"

__declspec(naked) void FUN_106b3300(void)

{
  __asm mov dword ptr [ecx], offset LAB_118c89d8
  __asm mov dword ptr [ecx + 8], offset LAB_118c89fc
  __asm mov dword ptr [ecx + 0x18], offset LAB_118c8a3c
  __asm mov dword ptr [ecx + 0x1c], offset LAB_118c8a60
  __asm mov dword ptr [ecx + 0x38], offset LAB_118c8a70
  __asm mov dword ptr [ecx + 0x44], offset LAB_118c8a84
  __asm mov dword ptr [ecx + 0x50], offset LAB_118c8a94
  __asm jmp LAB_100709e6
}






// Reference entry 106b36a0; body size 34 bytes.
#line 1 "ENTRY_106b36a0"

__declspec(naked) void FUN_106b36a0(void)

{
  __asm _emit 0x56 __asm _emit 0x8d __asm _emit 0x71 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xce __asm _emit 0x0f
  __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 106b3940; body size 19 bytes.
#line 1 "ENTRY_106b3940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106b3940(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x28);
  }
  return;
}


// Reference entry 106b3d20; body size 5 bytes.
#line 1 "ENTRY_106b3d20"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106b3d20(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 106b3d30; body size 5 bytes.
#line 1 "ENTRY_106b3d30"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106b3d30(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 106b3e70; body size 5 bytes.
#line 1 "ENTRY_106b3e70"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106b3e70(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 106b52e0; body size 18 bytes.
#line 1 "ENTRY_106b52e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106b52e0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 106b5450; body size 65 bytes.
#line 1 "ENTRY_106b5450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106b5450(int *param_2)
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


// Reference entry 106b5590; body size 67 bytes.
#line 1 "ENTRY_106b5590"

__declspec(naked) void FUN_106b5590(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x3b __asm _emit 0xfb __asm _emit 0x74 __asm _emit 0x30 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0xff
  __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x57
  __asm call LAB_100547dc
  __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x36 __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x03 __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04
  __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b55f0; body size 58 bytes.
#line 1 "ENTRY_106b55f0"

__declspec(naked) void FUN_106b55f0(void)

{
  __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x3b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x74 __asm _emit 0x2b __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x57
  __asm call LAB_100547dc
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x36 __asm _emit 0x89
  __asm _emit 0x76 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100671bb
  __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b5640; body size 112 bytes.
#line 1 "ENTRY_106b5640"

__declspec(naked) void FUN_106b5640(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x74 __asm _emit 0x5d __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xce __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52
  __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x3a __asm _emit 0x3b
  __asm _emit 0xcf __asm _emit 0x75 __asm _emit 0x2c __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x24 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x26 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xcf __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52
  __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x89
  __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b56d0; body size 67 bytes.
#line 1 "ENTRY_106b56d0"

__declspec(naked) void FUN_106b56d0(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x3b __asm _emit 0xfb __asm _emit 0x74 __asm _emit 0x30 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0xff
  __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x57
  __asm call LAB_100547dc
  __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x36 __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x03 __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04
  __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b5730; body size 58 bytes.
#line 1 "ENTRY_106b5730"

__declspec(naked) void FUN_106b5730(void)

{
  __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x3b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x74 __asm _emit 0x2b __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x57
  __asm call LAB_100547dc
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x36 __asm _emit 0x89
  __asm _emit 0x76 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100671bb
  __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b5780; body size 31 bytes.
#line 1 "ENTRY_106b5780"

__declspec(naked) void FUN_106b5780(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x3b __asm _emit 0xf0 __asm _emit 0x74 __asm _emit 0x0e __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xff
  __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10051843
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b57b0; body size 31 bytes.
#line 1 "ENTRY_106b57b0"

__declspec(naked) void FUN_106b57b0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x3b __asm _emit 0xf0 __asm _emit 0x74 __asm _emit 0x0e __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xff
  __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_100362aa
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b57e0; body size 137 bytes.
#line 1 "ENTRY_106b57e0"

__declspec(naked) void FUN_106b57e0(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x55 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8d __asm _emit 0x6b __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x77 __asm _emit 0x04
  __asm _emit 0x3b __asm _emit 0xee __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1005c315
  __asm _emit 0x8b __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x89 __asm _emit 0x06
  __asm call LAB_1002a973
  __asm _emit 0x8d __asm _emit 0x6b __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x77 __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0xee __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1005c315
  __asm _emit 0x8b __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x89 __asm _emit 0x06
  __asm call LAB_1002a973
  __asm _emit 0x8d __asm _emit 0x6b __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x5f __asm _emit 0x0c __asm _emit 0x3b __asm _emit 0xdd __asm _emit 0x74 __asm _emit 0x32 __asm _emit 0x8b __asm _emit 0x33 __asm _emit 0x8b __asm _emit 0xcb __asm _emit 0xff __asm _emit 0x76
  __asm _emit 0x04 __asm _emit 0x53
  __asm call LAB_100547dc
  __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x36 __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x03 __asm _emit 0x8b __asm _emit 0x45 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4d __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x4b __asm _emit 0x04 __asm _emit 0x89
  __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4d __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b5890; body size 127 bytes.
#line 1 "ENTRY_106b5890"

__declspec(naked) void FUN_106b5890(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x55 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8d __asm _emit 0x6b __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x77 __asm _emit 0x04
  __asm _emit 0x3b __asm _emit 0xee __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1005c315
  __asm _emit 0x8b __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x89 __asm _emit 0x06
  __asm call LAB_1002a973
  __asm _emit 0x8d __asm _emit 0x6b __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x77 __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0xee __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1005c315
  __asm _emit 0x8b __asm _emit 0x45 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x89 __asm _emit 0x06
  __asm call LAB_1002a973
  __asm _emit 0x8d __asm _emit 0x6b __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x5f __asm _emit 0x0c __asm _emit 0x3b __asm _emit 0xdd __asm _emit 0x74 __asm _emit 0x28 __asm _emit 0x8b __asm _emit 0x33 __asm _emit 0x8b __asm _emit 0xcb __asm _emit 0xff __asm _emit 0x76
  __asm _emit 0x04 __asm _emit 0x53
  __asm call LAB_100547dc
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xcb __asm _emit 0x89 __asm _emit 0x36 __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x08 __asm _emit 0x55 __asm _emit 0xc7
  __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_100671bb
  __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b5930; body size 41 bytes.
#line 1 "ENTRY_106b5930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106b5930(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  if ((SCStr *)((param_2)) != (SCStr *)(param_1)) {
    ((SCStr *)(param_1))->int_release();
    *(undefined4*)param_1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(param_1))->int_addref();
  }
  param_1[4] = (SCStr)(param_2[4]);
  return (SCStr *)(param_1);
}


// Reference entry 106b5970; body size 5 bytes.
#line 1 "ENTRY_106b5970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b5970(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b5980; body size 112 bytes.
#line 1 "ENTRY_106b5980"

__declspec(naked) void FUN_106b5980(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x74 __asm _emit 0x5d __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xce __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52
  __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x3a __asm _emit 0x3b
  __asm _emit 0xcf __asm _emit 0x75 __asm _emit 0x2c __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x24 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x26 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xcf __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52
  __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x89
  __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b5ab0; body size 14 bytes.
#line 1 "ENTRY_106b5ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5ab0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106b5ad0; body size 14 bytes.
#line 1 "ENTRY_106b5ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5ad0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106b5af0; body size 14 bytes.
#line 1 "ENTRY_106b5af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5af0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106b5b10; body size 14 bytes.
#line 1 "ENTRY_106b5b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5b10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106b5b30; body size 14 bytes.
#line 1 "ENTRY_106b5b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5b30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106b5b50; body size 14 bytes.
#line 1 "ENTRY_106b5b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5b50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106b5b70; body size 14 bytes.
#line 1 "ENTRY_106b5b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5b70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106b5c10; body size 14 bytes.
#line 1 "ENTRY_106b5c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5c10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106b5c30; body size 14 bytes.
#line 1 "ENTRY_106b5c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5c30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106b5c50; body size 14 bytes.
#line 1 "ENTRY_106b5c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5c50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106b5c70; body size 12 bytes.
#line 1 "ENTRY_106b5c70"

__declspec(naked) void FUN_106b5c70(void)

{
  __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b5c80; body size 14 bytes.
#line 1 "ENTRY_106b5c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5c80(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106b5ca0; body size 14 bytes.
#line 1 "ENTRY_106b5ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5ca0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106b5cc0; body size 14 bytes.
#line 1 "ENTRY_106b5cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5cc0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106b5ce0; body size 14 bytes.
#line 1 "ENTRY_106b5ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106b5ce0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106b60f0; body size 12 bytes.
#line 1 "ENTRY_106b60f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_106b60f0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 106b6100; body size 12 bytes.
#line 1 "ENTRY_106b6100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_106b6100(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 106b6110; body size 12 bytes.
#line 1 "ENTRY_106b6110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_106b6110(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 106b6120; body size 15 bytes.
#line 1 "ENTRY_106b6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_106b6120(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x14);
}


// Reference entry 106b6140; body size 15 bytes.
#line 1 "ENTRY_106b6140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_106b6140(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x14);
}


// Reference entry 106b6160; body size 3 bytes.
#line 1 "ENTRY_106b6160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6160(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b6170; body size 3 bytes.
#line 1 "ENTRY_106b6170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b6180; body size 7 bytes.
#line 1 "ENTRY_106b6180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106b6180(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 106b6190; body size 3 bytes.
#line 1 "ENTRY_106b6190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6190(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b61a0; body size 7 bytes.
#line 1 "ENTRY_106b61a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106b61a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 106b61b0; body size 7 bytes.
#line 1 "ENTRY_106b61b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106b61b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 106b61c0; body size 3 bytes.
#line 1 "ENTRY_106b61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b61c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b61d0; body size 3 bytes.
#line 1 "ENTRY_106b61d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b61d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b61e0; body size 3 bytes.
#line 1 "ENTRY_106b61e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b61e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b61f0; body size 3 bytes.
#line 1 "ENTRY_106b61f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b61f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b6200; body size 6 bytes.
#line 1 "ENTRY_106b6200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6200(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 106b6210; body size 6 bytes.
#line 1 "ENTRY_106b6210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6210(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106b6220; body size 6 bytes.
#line 1 "ENTRY_106b6220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6220(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106b6230; body size 3 bytes.
#line 1 "ENTRY_106b6230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6230(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b6240; body size 3 bytes.
#line 1 "ENTRY_106b6240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b6250; body size 3 bytes.
#line 1 "ENTRY_106b6250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6250(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b6260; body size 3 bytes.
#line 1 "ENTRY_106b6260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b6260(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b6270; body size 6 bytes.
#line 1 "ENTRY_106b6270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6270(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 106b6280; body size 6 bytes.
#line 1 "ENTRY_106b6280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6280(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 106b6290; body size 6 bytes.
#line 1 "ENTRY_106b6290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b6290(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106b62a0; body size 6 bytes.
#line 1 "ENTRY_106b62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b62a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106b62b0; body size 6 bytes.
#line 1 "ENTRY_106b62b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106b62b0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106b62c0; body size 3 bytes.
#line 1 "ENTRY_106b62c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b62c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b62d0; body size 3 bytes.
#line 1 "ENTRY_106b62d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b62d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106b62f0; body size 20 bytes.
#line 1 "ENTRY_106b62f0"

__declspec(naked) void FUN_106b62f0(void)

{
  __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x16
  __asm call LAB_1001b973
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106b6390; body size 20 bytes.
#line 1 "ENTRY_106b6390"

__declspec(naked) void FUN_106b6390(void)

{
  __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x16
  __asm call LAB_10070f8b
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106b6490; body size 16 bytes.
#line 1 "ENTRY_106b6490"

__declspec(naked) void FUN_106b6490(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x89 __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x11 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106b64b0; body size 6 bytes.
#line 1 "ENTRY_106b64b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106b64b0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 106b64c0; body size 6 bytes.
#line 1 "ENTRY_106b64c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106b64c0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 106b64d0; body size 6 bytes.
#line 1 "ENTRY_106b64d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106b64d0(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x14);
  return (int *)(param_1);
}


// Reference entry 106b64e0; body size 16 bytes.
#line 1 "ENTRY_106b64e0"

__declspec(naked) void FUN_106b64e0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x89 __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x11 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106b6500; body size 6 bytes.
#line 1 "ENTRY_106b6500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106b6500(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 106b6510; body size 6 bytes.
#line 1 "ENTRY_106b6510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106b6510(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x14);
  return (int *)(param_1);
}


// Reference entry 106b6520; body size 18 bytes.
#line 1 "ENTRY_106b6520"

__declspec(naked) void FUN_106b6520(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc1 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2
  __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106b6760; body size 27 bytes.
#line 1 "ENTRY_106b6760"

__declspec(naked) void FUN_106b6760(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x52 __asm _emit 0x8b __asm _emit 0x40
  __asm _emit 0x08 __asm _emit 0xff __asm _emit 0xd0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 106b6790; body size 18 bytes.
#line 1 "ENTRY_106b6790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_106b6790(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 106b67b0; body size 18 bytes.
#line 1 "ENTRY_106b67b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_106b67b0(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 106b67d0; body size 14 bytes.
#line 1 "ENTRY_106b67d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106b67d0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 106b67f0; body size 14 bytes.
#line 1 "ENTRY_106b67f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106b67f0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 106b8130; body size 31 bytes.
#line 1 "ENTRY_106b8130"

__declspec(naked) void FUN_106b8130(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x20 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 106b8160; body size 31 bytes.
#line 1 "ENTRY_106b8160"

__declspec(naked) void FUN_106b8160(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x28 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 106b81d0; body size 30 bytes.
#line 1 "ENTRY_106b81d0"

__declspec(naked) void FUN_106b81d0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf9
  __asm call LAB_10045304
  __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xf0 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b8200; body size 33 bytes.
#line 1 "ENTRY_106b8200"

__declspec(naked) void FUN_106b8200(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf9
  __asm call LAB_10094224
  __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xb6 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x88 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e
  __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b8230; body size 49 bytes.
#line 1 "ENTRY_106b8230"

__declspec(naked) void FUN_106b8230(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0xb9 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf2
  __asm _emit 0xd1 __asm _emit 0xee __asm _emit 0x2b __asm _emit 0xce __asm _emit 0x3b __asm _emit 0xd1 __asm _emit 0x76 __asm _emit 0x09 __asm _emit 0xb8 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x16 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 106b8270; body size 49 bytes.
#line 1 "ENTRY_106b8270"

__declspec(naked) void FUN_106b8270(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0xb9 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf2
  __asm _emit 0xd1 __asm _emit 0xee __asm _emit 0x2b __asm _emit 0xce __asm _emit 0x3b __asm _emit 0xd1 __asm _emit 0x76 __asm _emit 0x09 __asm _emit 0xb8 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x16 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 106b82b0; body size 49 bytes.
#line 1 "ENTRY_106b82b0"

__declspec(naked) void FUN_106b82b0(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0xb9 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf2
  __asm _emit 0xd1 __asm _emit 0xee __asm _emit 0x2b __asm _emit 0xce __asm _emit 0x3b __asm _emit 0xd1 __asm _emit 0x76 __asm _emit 0x09 __asm _emit 0xb8 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x16 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 106b82f0; body size 63 bytes.
#line 1 "ENTRY_106b82f0"

__declspec(naked) void FUN_106b82f0(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0xb8 __asm _emit 0x67 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0xb9 __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x0c __asm _emit 0xf7
  __asm _emit 0xea __asm _emit 0x56 __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x8b __asm _emit 0xf2 __asm _emit 0xc1 __asm _emit 0xee __asm _emit 0x1f __asm _emit 0x03 __asm _emit 0xf2 __asm _emit 0x8b __asm _emit 0xd6 __asm _emit 0xd1 __asm _emit 0xea
  __asm _emit 0x2b __asm _emit 0xca __asm _emit 0x3b __asm _emit 0xf1 __asm _emit 0x76 __asm _emit 0x09 __asm _emit 0xb8 __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x0c __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x8d
  __asm _emit 0x04 __asm _emit 0x32 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106b8630; body size 14 bytes.
#line 1 "ENTRY_106b8630"

__declspec(naked) void FUN_106b8630(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x07
  __asm je LAB_1000d4ae
  __asm _emit 0xc3
}






// Reference entry 106b8650; body size 14 bytes.
#line 1 "ENTRY_106b8650"

__declspec(naked) void FUN_106b8650(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x04 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x06
  __asm je LAB_1000d4ae
  __asm _emit 0xc3
}






// Reference entry 106b8670; body size 20 bytes.
#line 1 "ENTRY_106b8670"

__declspec(naked) void FUN_106b8670(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x0f __asm _emit 0x74 __asm _emit 0x01 __asm _emit 0xc3
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}






// Reference entry 106b8690; body size 66 bytes.
#line 1 "ENTRY_106b8690"

__declspec(naked) void FUN_106b8690(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x40 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x6e __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0 __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x5a __asm _emit 0xc8 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x6e __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0 __asm _emit 0xc1
  __asm _emit 0xe8 __asm _emit 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x5a __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x5e __asm _emit 0xc8 __asm _emit 0x0f __asm _emit 0x2f __asm _emit 0x09 __asm _emit 0x0f __asm _emit 0x97 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 106b86f0; body size 182 bytes.
#line 1 "ENTRY_106b86f0"

__declspec(naked) void FUN_106b86f0(void)

{
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x81 __asm _emit 0xfb __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f
  __asm ja LAB_106b87a1
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0xb8 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x55 __asm _emit 0x8b __asm _emit 0x2e __asm _emit 0x2b __asm _emit 0xcd __asm _emit 0xc1 __asm _emit 0xf9 __asm _emit 0x03
  __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0xd1 __asm _emit 0xea __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x57 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x07 __asm _emit 0xbf __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f
  __asm _emit 0xeb __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x3c __asm _emit 0x0a __asm _emit 0x3b __asm _emit 0xfb __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0xfb __asm _emit 0x85 __asm _emit 0xed __asm _emit 0x74 __asm _emit 0x4f __asm _emit 0x56 __asm _emit 0xff
  __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x55
  __asm call LAB_100381cc
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xe1 __asm _emit 0xf8 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc
  __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x3a __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10045304
  __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xf8 __asm _emit 0x5f __asm _emit 0x5d __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_1008a620
}






// Reference entry 106b87e0; body size 227 bytes.
#line 1 "ENTRY_106b87e0"

__declspec(naked) void FUN_106b87e0(void)

{
  __asm _emit 0x55 __asm _emit 0x8b __asm _emit 0x6c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x81 __asm _emit 0xfd __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x0c
  __asm ja LAB_106b88be
  __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x08 __asm _emit 0xb8 __asm _emit 0x67 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0x2b __asm _emit 0xce __asm _emit 0xf7 __asm _emit 0xe9
  __asm _emit 0xb8 __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x0c __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x8b __asm _emit 0xca __asm _emit 0xc1 __asm _emit 0xe9 __asm _emit 0x1f __asm _emit 0x03 __asm _emit 0xca __asm _emit 0x8b
  __asm _emit 0xd1 __asm _emit 0xd1 __asm _emit 0xea __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x07 __asm _emit 0xbb __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x0c __asm _emit 0xeb __asm _emit 0x08
  __asm _emit 0x8d __asm _emit 0x1c __asm _emit 0x0a __asm _emit 0x3b __asm _emit 0xdd __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0xdd __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x74 __asm _emit 0x6b __asm _emit 0x8b __asm _emit 0x6f __asm _emit 0x04 __asm _emit 0x3b
  __asm _emit 0xf5 __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x14 __asm _emit 0x3b __asm _emit 0xf5
  __asm _emit 0x75 __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x08 __asm _emit 0xb8 __asm _emit 0x67 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x2b __asm _emit 0xce __asm _emit 0xf7 __asm _emit 0xe9
  __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x1f __asm _emit 0x03 __asm _emit 0xc2 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0xc1 __asm _emit 0xe0 __asm _emit 0x02
  __asm _emit 0x3d __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xf1 __asm _emit 0x83
  __asm _emit 0xc6 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xfe __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x3d __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x50 __asm _emit 0x56
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0xcf
  __asm call LAB_10094224
  __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x9b __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x88 __asm _emit 0x5b __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08
  __asm _emit 0x5f __asm _emit 0x5d __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_100880eb
}






// Reference entry 106b8900; body size 3 bytes.
#line 1 "ENTRY_106b8900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106b8900(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 106b8910; body size 3 bytes.
#line 1 "ENTRY_106b8910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106b8910(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 106b8920; body size 3 bytes.
#line 1 "ENTRY_106b8920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106b8920(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 106b8a80; body size 21 bytes.
#line 1 "ENTRY_106b8a80"

__declspec(naked) void FUN_106b8a80(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10051843
  __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106b8aa0; body size 21 bytes.
#line 1 "ENTRY_106b8aa0"

__declspec(naked) void FUN_106b8aa0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_100362aa
  __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106b8f70; body size 8 bytes.
#line 1 "ENTRY_106b8f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106b8f70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 106b8f80; body size 54 bytes.
#line 1 "ENTRY_106b8f80"

__declspec(naked) void FUN_106b8f80(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x14 __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x39 __asm _emit 0x42
  __asm _emit 0x04 __asm _emit 0x75 __asm _emit 0x18 __asm _emit 0x39 __asm _emit 0x02 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0x89 __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0xc2
  __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x39 __asm _emit 0x02 __asm _emit 0x75 __asm _emit 0x04 __asm _emit 0x8b
  __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106b9210; body size 5 bytes.
#line 1 "ENTRY_106b9210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106b9210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9b50; body size 3 bytes.
#line 1 "ENTRY_106b9b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9b60; body size 3 bytes.
#line 1 "ENTRY_106b9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9b70; body size 3 bytes.
#line 1 "ENTRY_106b9b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9b80; body size 3 bytes.
#line 1 "ENTRY_106b9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9b90; body size 3 bytes.
#line 1 "ENTRY_106b9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9ba0; body size 3 bytes.
#line 1 "ENTRY_106b9ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9bb0; body size 3 bytes.
#line 1 "ENTRY_106b9bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9bc0; body size 3 bytes.
#line 1 "ENTRY_106b9bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9bd0; body size 3 bytes.
#line 1 "ENTRY_106b9bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9be0; body size 3 bytes.
#line 1 "ENTRY_106b9be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9bf0; body size 3 bytes.
#line 1 "ENTRY_106b9bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9c00; body size 3 bytes.
#line 1 "ENTRY_106b9c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9c10; body size 3 bytes.
#line 1 "ENTRY_106b9c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9c20; body size 3 bytes.
#line 1 "ENTRY_106b9c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9c30; body size 3 bytes.
#line 1 "ENTRY_106b9c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9c40; body size 3 bytes.
#line 1 "ENTRY_106b9c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9c50; body size 3 bytes.
#line 1 "ENTRY_106b9c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9c60; body size 3 bytes.
#line 1 "ENTRY_106b9c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9c70; body size 3 bytes.
#line 1 "ENTRY_106b9c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9c80; body size 3 bytes.
#line 1 "ENTRY_106b9c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9c90; body size 3 bytes.
#line 1 "ENTRY_106b9c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9ca0; body size 3 bytes.
#line 1 "ENTRY_106b9ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9ca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9cb0; body size 3 bytes.
#line 1 "ENTRY_106b9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9cd0; body size 3 bytes.
#line 1 "ENTRY_106b9cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9ce0; body size 3 bytes.
#line 1 "ENTRY_106b9ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9cf0; body size 3 bytes.
#line 1 "ENTRY_106b9cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9d00; body size 3 bytes.
#line 1 "ENTRY_106b9d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9d10; body size 3 bytes.
#line 1 "ENTRY_106b9d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9d20; body size 3 bytes.
#line 1 "ENTRY_106b9d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9d30; body size 3 bytes.
#line 1 "ENTRY_106b9d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9d40; body size 3 bytes.
#line 1 "ENTRY_106b9d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9d50; body size 3 bytes.
#line 1 "ENTRY_106b9d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9d60; body size 3 bytes.
#line 1 "ENTRY_106b9d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9d70; body size 3 bytes.
#line 1 "ENTRY_106b9d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9d80; body size 3 bytes.
#line 1 "ENTRY_106b9d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106b9d90; body size 4 bytes.
#line 1 "ENTRY_106b9d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106b9d90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 106ba340; body size 5 bytes.
#line 1 "ENTRY_106ba340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ba340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ba350; body size 7 bytes.
#line 1 "ENTRY_106ba350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106ba350(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 106ba440; body size 13 bytes.
#line 1 "ENTRY_106ba440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ba440(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106ba450; body size 18 bytes.
#line 1 "ENTRY_106ba450"

__declspec(naked) void FUN_106ba450(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc1 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2
  __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 106ba470; body size 30 bytes.
#line 1 "ENTRY_106ba470"

__declspec(naked) void FUN_106ba470(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0e __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf5 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc3
}






// Reference entry 106ba4d0; body size 3 bytes.
#line 1 "ENTRY_106ba4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106ba4d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ba4e0; body size 3 bytes.
#line 1 "ENTRY_106ba4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106ba4e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ba4f0; body size 31 bytes.
#line 1 "ENTRY_106ba4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_106ba4f0(int *param_1)

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


// Reference entry 106ba6c0; body size 3 bytes.
#line 1 "ENTRY_106ba6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  __stdcall FUN_106ba6c0(unsigned int recovered_unused_stack_0)

{
}


// Reference entry 106ba6d0; body size 3 bytes.
#line 1 "ENTRY_106ba6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ba6d0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 106ba6e0; body size 3 bytes.
#line 1 "ENTRY_106ba6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ba6e0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 106ba6f0; body size 3 bytes.
#line 1 "ENTRY_106ba6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ba6f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106ba700; body size 3 bytes.
#line 1 "ENTRY_106ba700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ba700(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106ba710; body size 3 bytes.
#line 1 "ENTRY_106ba710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ba710(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106ba720; body size 3 bytes.
#line 1 "ENTRY_106ba720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ba720(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106ba730; body size 3 bytes.
#line 1 "ENTRY_106ba730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ba730(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106ba7f0; body size 11 bytes.
#line 1 "ENTRY_106ba7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106ba7f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106ba800; body size 11 bytes.
#line 1 "ENTRY_106ba800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106ba800(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106ba810; body size 8 bytes.
#line 1 "ENTRY_106ba810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106ba810(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 106ba820; body size 6 bytes.
#line 1 "ENTRY_106ba820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106ba820(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106ba830; body size 6 bytes.
#line 1 "ENTRY_106ba830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106ba830(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106ba840; body size 6 bytes.
#line 1 "ENTRY_106ba840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106ba840(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106ba850; body size 6 bytes.
#line 1 "ENTRY_106ba850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106ba850(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106ba860; body size 26 bytes.
#line 1 "ENTRY_106ba860"

__declspec(naked) void FUN_106ba860(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106ba960; body size 9 bytes.
#line 1 "ENTRY_106ba960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106ba960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106ba970; body size 10 bytes.
#line 1 "ENTRY_106ba970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106ba970(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 106ba980; body size 33 bytes.
#line 1 "ENTRY_106ba980"

__declspec(naked) void FUN_106ba980(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x17 __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 106bb0c0; body size 24 bytes.
#line 1 "ENTRY_106bb0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bb0c0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106ae320(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106bb170; body size 24 bytes.
#line 1 "ENTRY_106bb170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bb170(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101fdfe0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106bb2d0; body size 24 bytes.
#line 1 "ENTRY_106bb2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bb2d0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106ae320(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106bb380; body size 24 bytes.
#line 1 "ENTRY_106bb380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bb380(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101fdfe0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106bb3a0; body size 14 bytes.
#line 1 "ENTRY_106bb3a0"

__declspec(naked) void FUN_106bb3a0(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 106bb3c0; body size 13 bytes.
#line 1 "ENTRY_106bb3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bb3c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106bb3d0; body size 13 bytes.
#line 1 "ENTRY_106bb3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bb3d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106bb3e0; body size 3 bytes.
#line 1 "ENTRY_106bb3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bb3e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106bb3f0; body size 3 bytes.
#line 1 "ENTRY_106bb3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bb3f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106bb400; body size 12 bytes.
#line 1 "ENTRY_106bb400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bb400(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106bb410; body size 10 bytes.
#line 1 "ENTRY_106bb410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106bb410(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 106bb420; body size 4 bytes.
#line 1 "ENTRY_106bb420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bb420(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 106bb430; body size 4 bytes.
#line 1 "ENTRY_106bb430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bb430(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 106bb600; body size 11 bytes.
#line 1 "ENTRY_106bb600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bb600(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106bb610; body size 11 bytes.
#line 1 "ENTRY_106bb610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bb610(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106bb620; body size 3 bytes.
#line 1 "ENTRY_106bb620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bb620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106bb630; body size 3 bytes.
#line 1 "ENTRY_106bb630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106bb630(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 106bcc30; body size 87 bytes.
#line 1 "ENTRY_106bcc30"

__declspec(naked) void FUN_106bcc30(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x07 __asm _emit 0x77 __asm _emit 0x47 __asm _emit 0xc1 __asm _emit 0xe0 __asm _emit 0x05 __asm _emit 0x3d __asm _emit 0x00
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 106bcca0; body size 90 bytes.
#line 1 "ENTRY_106bcca0"

__declspec(naked) void FUN_106bcca0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x66 __asm _emit 0x06 __asm _emit 0x77 __asm _emit 0x4a __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0xc1 __asm _emit 0xe0
  __asm _emit 0x03 __asm _emit 0x3d __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}






// Reference entry 106bcd20; body size 87 bytes.
#line 1 "ENTRY_106bcd20"

__declspec(naked) void FUN_106bcd20(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x47 __asm _emit 0xc1 __asm _emit 0xe0 __asm _emit 0x03 __asm _emit 0x3d __asm _emit 0x00
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x23 __asm _emit 0x3b __asm _emit 0xc8 __asm _emit 0x76 __asm _emit 0x36 __asm _emit 0x51
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x41 __asm _emit 0x23 __asm _emit 0x83 __asm _emit 0xe0 __asm _emit 0xe0 __asm _emit 0x89
  __asm _emit 0x48 __asm _emit 0xfc __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x50
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_10070f3b
}





// Reference entry 10655280; synthesized store+jump body.
#line 1 "ENTRY_10655280"
void __fastcall FUN_10655280(undefined4 *param_1)
{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_1002d2b8<>();
}

// Reference entry 10655a00; synthesized store+jump body.
#line 1 "ENTRY_10655a00"
void __fastcall FUN_10655a00(undefined4 *param_1)
{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
}

// Reference entry 10655a50; synthesized store+jump body.
#line 1 "ENTRY_10655a50"
void __fastcall FUN_10655a50(undefined4 *param_1)
{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_1002d2b8<>();
}

// Reference entry 10655c30; synthesized store+jump body.
#line 1 "ENTRY_10655c30"
void __fastcall FUN_10655c30(undefined4 *param_1)
{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
}

// Reference entry 10655d50; synthesized store+jump body.
#line 1 "ENTRY_10655d50"
void __fastcall FUN_10655d50(undefined4 *param_1)
{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_1002d2b8<>();
}

// Reference entry 106560b0; synthesized store+jump body.
#line 1 "ENTRY_106560b0"
void __fastcall FUN_106560b0(undefined4 *param_1)
{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_1002d2b8<>();
}

// Reference entry 10656100; synthesized store+jump body.
#line 1 "ENTRY_10656100"
void __fastcall FUN_10656100(undefined4 *param_1)
{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_1002d2b8<>();
}

// Reference entry 1069c710; synthesized store+jump body.
#line 1 "ENTRY_1069c710"
void __fastcall FUN_1069c710(undefined4 *param_1)
{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCatalogRequest);
  FUN_10010267<>();
}

// Reference entry 106558f0; transcribed reference bytes.
#line 1 "ENTRY_106558f0"

__declspec(naked) void FUN_106558f0(void)

{
  __asm mov dword ptr [LAB_121a239c], 0
  __asm mov dword ptr [ecx], offset LAB_118c22b8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655940; transcribed reference bytes.
#line 1 "ENTRY_10655940"

__declspec(naked) void FUN_10655940(void)

{
  __asm mov dword ptr [LAB_121a2384], 0
  __asm mov dword ptr [ecx], offset LAB_118c20e8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655990; transcribed reference bytes.
#line 1 "ENTRY_10655990"

__declspec(naked) void FUN_10655990(void)

{
  __asm mov dword ptr [LAB_121a23b8], 0
  __asm mov dword ptr [ecx], offset LAB_118c250c
  __asm jmp LAB_1003c4f2
}




// Reference entry 106559b0; transcribed reference bytes.
#line 1 "ENTRY_106559b0"

__declspec(naked) void FUN_106559b0(void)

{
  __asm mov dword ptr [ecx], offset LAB_118c4044
  __asm mov dword ptr [ecx + 0x10], offset LAB_118c40a0
  __asm mov dword ptr [ecx + 0x8c], offset LAB_118c40ac
  __asm mov dword ptr [ecx + 0xa8], offset LAB_118c40b8
  __asm jmp LAB_1002d2b8
}




// Reference entry 106559e0; transcribed reference bytes.
#line 1 "ENTRY_106559e0"

__declspec(naked) void FUN_106559e0(void)

{
  __asm mov dword ptr [LAB_121a23ac], 0
  __asm mov dword ptr [ecx], offset LAB_118c2400
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655a30; transcribed reference bytes.
#line 1 "ENTRY_10655a30"

__declspec(naked) void FUN_10655a30(void)

{
  __asm mov dword ptr [LAB_121a23ec], 0
  __asm mov dword ptr [ecx], offset LAB_118c2918
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655a80; transcribed reference bytes.
#line 1 "ENTRY_10655a80"

__declspec(naked) void FUN_10655a80(void)

{
  __asm mov dword ptr [LAB_121a23c0], 0
  __asm mov dword ptr [ecx], offset LAB_118c25a8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655b40; transcribed reference bytes.
#line 1 "ENTRY_10655b40"

__declspec(naked) void FUN_10655b40(void)

{
  __asm mov dword ptr [LAB_121a238c], 0
  __asm mov dword ptr [ecx], offset LAB_118c2188
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655c10; transcribed reference bytes.
#line 1 "ENTRY_10655c10"

__declspec(naked) void FUN_10655c10(void)

{
  __asm mov dword ptr [LAB_121a2368], 0
  __asm mov dword ptr [ecx], offset LAB_118c1ea4
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655c60; transcribed reference bytes.
#line 1 "ENTRY_10655c60"

__declspec(naked) void FUN_10655c60(void)

{
  __asm mov dword ptr [LAB_121a23e0], 0
  __asm mov dword ptr [ecx], offset LAB_118c2824
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655d30; transcribed reference bytes.
#line 1 "ENTRY_10655d30"

__declspec(naked) void FUN_10655d30(void)

{
  __asm mov dword ptr [LAB_121a23dc], 0
  __asm mov dword ptr [ecx], offset LAB_118c27e0
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655d80; transcribed reference bytes.
#line 1 "ENTRY_10655d80"

__declspec(naked) void FUN_10655d80(void)

{
  __asm mov dword ptr [LAB_121a2380], 0
  __asm mov dword ptr [ecx], offset LAB_118c2090
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655da0; transcribed reference bytes.
#line 1 "ENTRY_10655da0"

__declspec(naked) void FUN_10655da0(void)

{
  __asm mov dword ptr [ecx], offset LAB_118c49c4
  __asm mov dword ptr [ecx + 0x10], offset LAB_118c4a20
  __asm mov dword ptr [ecx + 0x8c], offset LAB_118c4a2c
  __asm mov dword ptr [ecx + 0xa8], offset LAB_118c4a38
  __asm jmp LAB_1002d2b8
}




// Reference entry 10655dd0; transcribed reference bytes.
#line 1 "ENTRY_10655dd0"

__declspec(naked) void FUN_10655dd0(void)

{
  __asm mov dword ptr [LAB_121a23cc], 0
  __asm mov dword ptr [ecx], offset LAB_118c2694
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655df0; transcribed reference bytes.
#line 1 "ENTRY_10655df0"

__declspec(naked) void FUN_10655df0(void)

{
  __asm mov dword ptr [ecx], offset LAB_118c4504
  __asm mov dword ptr [ecx + 0x10], offset LAB_118c4560
  __asm mov dword ptr [ecx + 0x8c], offset LAB_118c456c
  __asm mov dword ptr [ecx + 0xa8], offset LAB_118c4578
  __asm jmp LAB_1002d2b8
}




// Reference entry 10655e20; transcribed reference bytes.
#line 1 "ENTRY_10655e20"

__declspec(naked) void FUN_10655e20(void)

{
  __asm mov dword ptr [LAB_121a23bc], 0
  __asm mov dword ptr [ecx], offset LAB_118c2558
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655e40; transcribed reference bytes.
#line 1 "ENTRY_10655e40"

__declspec(naked) void FUN_10655e40(void)

{
  __asm mov dword ptr [ecx], offset LAB_118c42a4
  __asm mov dword ptr [ecx + 0x10], offset LAB_118c4300
  __asm mov dword ptr [ecx + 0x8c], offset LAB_118c430c
  __asm mov dword ptr [ecx + 0xa8], offset LAB_118c4318
  __asm jmp LAB_1002d2b8
}




// Reference entry 10655e70; transcribed reference bytes.
#line 1 "ENTRY_10655e70"

__declspec(naked) void FUN_10655e70(void)

{
  __asm mov dword ptr [LAB_121a23b4], 0
  __asm mov dword ptr [ecx], offset LAB_118c24b4
  __asm jmp LAB_1003c4f2
}




// Reference entry 10655e90; transcribed reference bytes.
#line 1 "ENTRY_10655e90"

__declspec(naked) void FUN_10655e90(void)

{
  __asm mov dword ptr [ecx], offset LAB_118c4af4
  __asm mov dword ptr [ecx + 0x10], offset LAB_118c4b50
  __asm mov dword ptr [ecx + 0x8c], offset LAB_118c4b5c
  __asm mov dword ptr [ecx + 0xa8], offset LAB_118c4b68
  __asm jmp LAB_1002d2b8
}




// Reference entry 10655ec0; transcribed reference bytes.
#line 1 "ENTRY_10655ec0"

__declspec(naked) void FUN_10655ec0(void)

{
  __asm mov dword ptr [LAB_121a23d0], 0
  __asm mov dword ptr [ecx], offset LAB_118c26e8
  __asm jmp LAB_1003c4f2
}




// Reference entry 10656010; transcribed reference bytes.
#line 1 "ENTRY_10656010"

__declspec(naked) void FUN_10656010(void)

{
  __asm mov dword ptr [ecx], offset LAB_118c4764
  __asm mov dword ptr [ecx + 0x10], offset LAB_118c47c0
  __asm mov dword ptr [ecx + 0x8c], offset LAB_118c47cc
  __asm mov dword ptr [ecx + 0xa8], offset LAB_118c47d8
  __asm jmp LAB_1002d2b8
}




// Reference entry 10656040; transcribed reference bytes.
#line 1 "ENTRY_10656040"

__declspec(naked) void FUN_10656040(void)

{
  __asm mov dword ptr [LAB_121a23c4], 0
  __asm mov dword ptr [ecx], offset LAB_118c25f8
  __asm jmp LAB_1003c4f2
}




// Reference entry 106560e0; transcribed reference bytes.
#line 1 "ENTRY_106560e0"

__declspec(naked) void FUN_106560e0(void)

{
  __asm mov dword ptr [LAB_121a23a4], 0
  __asm mov dword ptr [ecx], offset LAB_118c2364
  __asm jmp LAB_1003c4f2
}




// Reference entry 10656130; transcribed reference bytes.
#line 1 "ENTRY_10656130"

__declspec(naked) void FUN_10656130(void)

{
  __asm mov dword ptr [LAB_121a23a0], 0
  __asm mov dword ptr [ecx], offset LAB_118c2314
  __asm jmp LAB_1003c4f2
}




// Reference entry 1069c780; transcribed reference bytes.
#line 1 "ENTRY_1069c780"

__declspec(naked) void FUN_1069c780(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x3b __asm _emit 0x06 __asm _emit 0x74 __asm _emit 0x2c __asm _emit 0x8b __asm _emit 0x4e
  __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x14 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4e
  __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}



